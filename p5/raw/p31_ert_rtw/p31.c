/*
 * File: p31.c
 *
 * Code generated for Simulink model 'p31'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Dec 12 15:56:39 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "p31.h"
#include "p31_private.h"

/* Block states (default storage) */
DW_p31_T p31_DW;

/* External inputs (root inport signals with default storage) */
ExtU_p31_T p31_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_p31_T p31_Y;

/* Real-time model */
static RT_MODEL_p31_T p31_M_;
RT_MODEL_p31_T *const p31_M = &p31_M_;

/* Model step function */
void p31_step(void)
{
  /* Chart: '<Root>/Chart1' */
  if (p31_DW.is_active_c1_p31 == 0U) {
    p31_DW.is_active_c1_p31 = 1U;
  } else {
    if (p31_DW.timerforce >= 2.0) {
      /* Outport: '<Root>/degree' incorporates:
       *  Inport: '<Root>/force'
       */
      p31_Y.degree = p31_U.force * 18.0;
      p31_DW.timerforce = 0.0;
    } else if (p31_DW.timerforce < 2.0) {
      p31_DW.timerforce++;
    }

    if (p31_DW.timertemp >= 1.0) {
      /* Outport: '<Root>/freq' incorporates:
       *  Inport: '<Root>/temp'
       */
      p31_Y.freq = p31_U.temp - 20.0;
      p31_DW.timertemp = 0.0;
    } else if (p31_DW.timertemp < 1.0) {
      p31_DW.timertemp++;
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void p31_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void p31_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
