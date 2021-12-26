#include <Arduino_FreeRTOS.h>
#include <Arduino.h>

void TaskBlink( void *pvParameters );
void TaskAnalogRead( void *pvParameters );

void setup() {
  Serial.begin(9600);
  
  while (!Serial) {
    ;
  }
  
  xTaskCreate(TaskBlink,"Blink",128,NULL,2,NULL);
  xTaskCreate(TaskAnalogRead,"AnalogRead",128,NULL,1,NULL);
}

void loop()
{
  
}

void TaskBlink(void *pvParameters)
{
  (void) pvParameters;

  pinMode(13, OUTPUT);

  for (;;)
  {
    digitalWrite(13, HIGH);
    vTaskDelay( 1000 / portTICK_PERIOD_MS );
    digitalWrite(13, LOW);
    vTaskDelay( 1000 / portTICK_PERIOD_MS );
  }
}

void TaskAnalogRead(void *pvParameters)
{
  (void) pvParameters;

  pinMode(A0, INPUT);

  for (;;)
  {
    int sensorValue = analogRead(A0);
    Serial.println(sensorValue);
    vTaskDelay(1);
  }
}