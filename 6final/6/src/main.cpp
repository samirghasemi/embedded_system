#include <Arduino.h>
#include<Arduino_FreeRTOS.h>
#include <stddef.h>
#include <Servo.h>
int pos = 0;

Servo servo_9;

typedef double real_T;
typedef double time_T;
typedef unsigned int uint_T;
typedef unsigned char uint8_T;

typedef struct {
  //in port
  real_T temp;                         /* '<Root>/temp' */
  real_T force;
  
  //out
  real_T degree;                       /* '<Root>/degree' */
  real_T freq;

  //
  real_T timerforce;                   /* '<Root>/Chart1' */
  real_T timertemp;                    /* '<Root>/Chart1' */
  uint8_T is_active_c1_p31;            /* '<Root>/Chart1' */
} DW;

volatile DW p31_DW;

/*
void heatsensor(void *pvparameters){

}

void force(void *pvparameters){
}

void servo(void *pvparameters){

}

void dc(void *pvparameters){

}
*/
void p31_step(void){
  /* Chart: '<Root>/Chart1' */
  if (p31_DW.is_active_c1_p31 == 0U) {
    p31_DW.is_active_c1_p31 = 1U;
  } else {
    if (p31_DW.timerforce >= 2.0) {
      /* Outport: '<Root>/degree' incorporates:
       *  Inport: '<Root>/force'
       */
      p31_DW.degree = p31_DW.force * 18.0;
      p31_DW.timerforce = 0.0;
    } else if (p31_DW.timerforce < 2.0) {
      p31_DW.timerforce++;
    }

    if (p31_DW.timertemp >= 1.0) {
      /* Outport: '<Root>/freq' incorporates:
       *  Inport: '<Root>/temp'
       */
      p31_DW.freq = p31_DW.temp - 20.0;
      p31_DW.timertemp = 0.0;
    } else if (p31_DW.timertemp < 1.0) {
      p31_DW.timertemp++;
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}
////////helpers
void dcMotor(volatile int num){
  // volatile int h=255-num *12;
  Serial.println(num);
  // analogWrite(6, h);
}
float voltageToTemp(double voltage){
  return (voltage - 0.5)*100;
}

float e=2.718;

float voltageToForce(double voltage){
  // return 0.0054 * pow(e,1.66 * voltage);
  return voltage;
}

void servoMotor(int deg){
  
  Serial.println("servo degree");
  Serial.println(deg);

  for (pos = 0; pos <= deg; pos += 1) {
    servo_9.write(pos);
    delay(5);
  }
  for (pos = deg; pos >= 0; pos -= 1) {
    servo_9.write(pos);
    delay(5);
  }
}

void readFSR(void *pvParameters){
  for(;;){
    int fsrReading = analogRead(A0);
    int fsrVoltageMap = map(fsrReading, 0, 1023, 0, 5000);
    double fsrVoltage = fsrVoltageMap/1000.0;
    double force = voltageToForce(fsrVoltage);
    p31_DW.force = force;
    vTaskDelay(2000/portTICK_PERIOD_MS);
  }
}
void readTEMP(void *pvParameters){
    (void)pvParameters;
    for(;;){
    //Serial.println("readingtemp");
    int temp=analogRead(A1);//read sensor pin
    int tempVoltageMap = map(temp, 0, 1023, 0, 5000);
    double tempVoltage = tempVoltageMap/1000.0;
    double tempC = voltageToTemp(tempVoltage);
    p31_DW.temp = tempC;
    vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}

void setSERVO(void *pvParameters){
  for(;;){
    int deg = p31_DW.degree;
    servoMotor(deg*10);
    vTaskDelay(2000/portTICK_PERIOD_MS);
  }
}



void setDC(void *pvParameters){
  (void)pvParameters;
  for(;;){
    double volatile freq = p31_DW.freq;
    volatile int h = 255 - freq *12;
    // Serial.println(h);
    analogWrite(6, h);
    vTaskDelay(1000/portTICK_PERIOD_MS);
  }
}

////////









void setup() {
  Serial.begin(9600);
  
  servo_9.attach(9);
  
  pinMode(A1,INPUT);
  pinMode(A2,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(1,INPUT);
  pinMode(0,INPUT);
  pinMode(7,OUTPUT);
  // pinMode(9,OUTPUT);

  // servo_9.write(90);

  xTaskCreate(readFSR,"Fsensor",64,NULL,1,NULL);
  xTaskCreate(setSERVO,"servo",64,NULL,1,NULL);
  //Serial.println("1");
  xTaskCreate(readTEMP,"Hsensor",64,NULL,2,NULL);
 // Serial.println("2");
  xTaskCreate(setDC,"dc",64,NULL,2,NULL);
  vTaskStartScheduler();

}

void loop() {

    Serial.println("Running");
    p31_step();
    // analogWrite(A2,10);
    // servoMotor(30);
    // servo_9.write(30);
    delay(2000);
}



/////////