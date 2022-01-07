/*
 * File: p30.c
 *
 * Code generated for Simulink model 'p30'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan  2 13:57:16 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#include "p30.h"
#include "p30_private.h"

/* Block states (default storage) */
DW_p30_T p30_DW;

/* External inputs (root inport signals with default storage) */
ExtU_p30_T p30_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_p30_T p30_Y;

/* Real-time model */
static RT_MODEL_p30_T p30_M_;
RT_MODEL_p30_T *const p30_M = &p30_M_;

/* Model step function */
void p30_step(void)
{
  /* Chart: '<Root>/Chart1' */
  if (p30_DW.is_active_c1_p30 == 0U) {
    p30_DW.is_active_c1_p30 = 1U;
  } else {
    if (p30_DW.timerforce >= 2.0) {
      /* Outport: '<Root>/degree' incorporates:
       *  Inport: '<Root>/force'
       */
      p30_Y.degree = p30_U.force * 18.0;
      p30_DW.timerforce = 0.0;
    } else if (p30_DW.timerforce < 2.0) {
      p30_DW.timerforce++;
    }

    if (p30_DW.timertemp >= 1.0) {
      /* Outport: '<Root>/freq' incorporates:
       *  Inport: '<Root>/temp'
       */
      p30_Y.freq = p30_U.temp - 20.0;
      p30_DW.timertemp = 0.0;
    } else if (p30_DW.timertemp < 1.0) {
      p30_DW.timertemp++;
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void p30_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void p30_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
