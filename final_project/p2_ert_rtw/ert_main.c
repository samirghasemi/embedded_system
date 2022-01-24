/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'p2'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 25 02:51:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "p2.h"
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  p2_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
}

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.2;
  float systemClock = 0;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(p2_M, 0);
  p2_initialize();
  cli();
  configureArduinoAVRTimer();
  runModel =
    (rtmGetErrorStatus(p2_M) == (NULL)) && !rtmGetStopRequested(p2_M);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  sei ();
  while (runModel) {
    stopRequested = !(
                      (rtmGetErrorStatus(p2_M) == (NULL)) &&
                      !rtmGetStopRequested(p2_M));
    runModel = !(stopRequested);
    MW_Arduino_Loop();
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  p2_terminate();
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
