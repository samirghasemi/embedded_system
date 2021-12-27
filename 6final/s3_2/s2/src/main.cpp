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



void readTEMP(void *pvParameters){
    (void)pvParameters;
    for(;;){
      // Serial.println("readingtemp");
      int temp=analogRead(A1);//read sensor pin
      // Serial.println("1");
      int tempVoltageMap = map(temp, 0, 1023, 0, 5000);
      // Serial.println("2");
      double tempVoltage = tempVoltageMap/1000.0;
      // Serial.println("3");
      double tempC = (tempVoltage - 0.5)*100;
      // Serial.println("4");
      p31_DW.temp = tempC;
      // Serial.println("5");
      
      // Serial.println(p31_DW.temp);
      vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}
void setDC(void *pvParameters){
  (void)pvParameters;
  
  for(;;){
    double volatile freq = p31_DW.freq *12 ;
    // Serial.println(freq);
    // volatile int h = 255 - freq *12;
    // Serial.println(h);
    // Serial.println("servo degree");
    // Serial.println(freq);
    analogWrite(6, freq);
    // Serial.println("2");
    vTaskDelay(1000/portTICK_PERIOD_MS);
  }
}


void readFSR(void *pvParameters){
  for(;;){
    int fsrReading = analogRead(A0);
    int fsrVoltageMap = map(fsrReading, 0, 1023, 0, 5000);
    double fsrVoltage = fsrVoltageMap/1000.0;
    double force = fsrVoltage;
    p31_DW.force = force;
    // Serial.println("readingfsr");
    // Serial.println(p31_DW.force);
  
    vTaskDelay(2000/portTICK_PERIOD_MS);
  }
}
void setSERVO(void *pvParameters){
  for(;;){
    volatile int deg = p31_DW.degree * 5;
    // deg = 90;
    // int mydelay = 1;
    // Serial.println("servo degree");
    // Serial.println(deg);
    // for (pos = 0; pos <= deg; pos += 1) {
    //   servo_9.write(pos);
    //   vTaskDelay(mydelay/portTICK_PERIOD_MS);
    // }
    // for (pos = deg; pos >= 0; pos -= 1) {
    //   servo_9.write(pos);
    //   vTaskDelay(mydelay/portTICK_PERIOD_MS);
    // }
    servo_9.write(deg);
    vTaskDelay(1000/portTICK_PERIOD_MS);
    servo_9.write(0);
    vTaskDelay(1000/portTICK_PERIOD_MS);
  }
}



void setup() {
  Serial.begin(9600);  
  servo_9.attach(9);
  servo_9.write(0);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(6,OUTPUT);
  pinMode(1,INPUT);
  pinMode(0,INPUT);
  pinMode(7,OUTPUT);
  
  xTaskCreate(readFSR,"Fsensor",64,NULL,1,NULL);
  xTaskCreate(setSERVO,"servo",64,NULL,1,NULL);
  xTaskCreate(readTEMP,"tempensor",64,NULL,1,NULL);
  xTaskCreate(setDC,"dcmotor",64,NULL,1,NULL);

  vTaskStartScheduler();

}

void loop() {
    // Serial.println("Running");
    p31_step();
    delay(1000);

    // test only servo motor
    // servo_9.write(90);
    // delay(2000);
    // servo_9.write(0);
    // delay(2000);
    // test only servo motor


}
