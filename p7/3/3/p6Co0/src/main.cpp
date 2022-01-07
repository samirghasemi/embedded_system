#include <Arduino.h>
/*
 * File: p301.c
 *
 * Code generated for Simulink model 'p301'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Jan  3 15:19:34 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#include "p301.h"
#include "p301_private.h"

/* Block states (default storage) */
DW_p301_T p301_DW;

/* External inputs (root inport signals with default storage) */
ExtU_p301_T p301_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_p301_T p301_Y;

/* Real-time model */
static RT_MODEL_p301_T p301_M_;
RT_MODEL_p301_T *const p301_M = &p301_M_;

/* Model step function */
void p301_step(void)
{
  int32_T tmp;
  int16_T qY;

  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/force'
   *  Inport: '<Root>/temp'
   */
  if (p301_DW.is_active_c1_p301 == 0U) {
    p301_DW.is_active_c1_p301 = 1U;
  } else {
    if (p301_DW.timerforce >= 32768U) {
      tmp = p301_U.force * 18L;
      if (tmp > 32767L) {
        tmp = 32767L;
      } else if (tmp < -32768L) {
        tmp = -32768L;
      }

      /* Outport: '<Root>/degree' incorporates:
       *  Inport: '<Root>/force'
       */
      p301_Y.degree = (int16_T)tmp;
      p301_DW.timerforce = 0U;
    } else if (p301_DW.timerforce < 32768U) {
      qY = (int16_T)(p301_DW.timerforce >> 6) + 256;
      if (qY > 1023) {
        p301_DW.timerforce = MAX_uint16_T;
      } else {
        p301_DW.timerforce = (uint16_T)qY << 6;
      }
    }

    if (p301_DW.timertemp >= 32768U) {
      if (p301_U.temp < -32448) {
        qY = MIN_int16_T;
      } else {
        qY = p301_U.temp - 320;
      }

      if (qY > 511) {
        /* Outport: '<Root>/freq' */
        p301_Y.freq = MAX_int16_T;
      } else if (qY <= -512) {
        /* Outport: '<Root>/freq' */
        p301_Y.freq = MIN_int16_T;
      } else {
        /* Outport: '<Root>/freq' */
        p301_Y.freq = qY << 6;
      }

      p301_DW.timertemp = 0U;
    } else if (p301_DW.timertemp < 32768U) {
      qY = (int16_T)(p301_DW.timertemp >> 7) + 256;
      if (qY > 511) {
        p301_DW.timertemp = MAX_uint16_T;
      } else {
        p301_DW.timertemp = (uint16_T)qY << 7;
      }
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void p301_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void p301_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */



void setup() {
  // put your setup code here, to run once:
	Serial.begin(9600);
	p301_initialize();
	
	unsigned long sum = 0;
	int count = 100;
	
	for (int i = 1; i <= count; ++i)
	{
		unsigned long start = micros();
		p301_step();
		unsigned long end = micros();
		unsigned long delta = end - start;
		sum += delta;
	}
	Serial.println((sum));
}


void loop() {
  // put your main code here, to run repeatedly:
}