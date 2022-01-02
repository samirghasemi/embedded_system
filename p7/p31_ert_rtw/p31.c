/*
 * File: p31.c
 *
 * Code generated for Simulink model 'p31'.
 *
 * Model version                  : 1.27
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan  2 13:34:06 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#include "p31.h"
#include "p31_private.h"

/* Block signals (default storage) */
B_p31_T p31_B;

/* Block states (default storage) */
DW_p31_T p31_DW;

/* External inputs (root inport signals with default storage) */
ExtU_p31_T p31_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_p31_T p31_Y;

/* Real-time model */
static RT_MODEL_p31_T p31_M_;
RT_MODEL_p31_T *const p31_M = &p31_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void p31_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(p31_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (p31_M->Timing.TaskCounters.TID[1])++;
  if ((p31_M->Timing.TaskCounters.TID[1]) > 44099) {/* Sample time: [1.0s, 0.0s] */
    p31_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void p31_step0(void)           /* Sample time: [2.2675736961451248E-5s, 0.0s] */
{
  {                            /* Sample time: [2.2675736961451248E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void p31_step1(void)                   /* Sample time: [1.0s, 0.0s] */
{
  int32_T tmp;
  int16_T qY;

  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/force'
   *  Inport: '<Root>/temp'
   */
  if (p31_DW.is_active_c1_p31 == 0U) {
    p31_DW.is_active_c1_p31 = 1U;
  } else {
    if (p31_DW.timerforce >= 32768U) {
      tmp = p31_U.force * 18L;
      if (tmp > 32767L) {
        tmp = 32767L;
      } else if (tmp < -32768L) {
        tmp = -32768L;
      }

      p31_B.degree_output = (int16_T)tmp;
      p31_DW.timerforce = 0U;
    } else if (p31_DW.timerforce < 32768U) {
      qY = (int16_T)(p31_DW.timerforce >> 6) + 256;
      if (qY > 1023) {
        p31_DW.timerforce = MAX_uint16_T;
      } else {
        p31_DW.timerforce = (uint16_T)qY << 6;
      }
    }

    if (p31_DW.timertemp >= 32768U) {
      if (p31_U.temp < -32448) {
        qY = MIN_int16_T;
      } else {
        qY = p31_U.temp - 320;
      }

      if (qY > 511) {
        p31_B.frequency_output = MAX_int16_T;
      } else if (qY <= -512) {
        p31_B.frequency_output = MIN_int16_T;
      } else {
        p31_B.frequency_output = qY << 6;
      }

      p31_DW.timertemp = 0U;
    } else if (p31_DW.timertemp < 32768U) {
      qY = (int16_T)(p31_DW.timertemp >> 7) + 256;
      if (qY > 511) {
        p31_DW.timertemp = MAX_uint16_T;
      } else {
        p31_DW.timertemp = (uint16_T)qY << 7;
      }
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* Outport: '<Root>/degree' */
  p31_Y.degree = p31_B.degree_output;

  /* Outport: '<Root>/freq' */
  p31_Y.freq = p31_B.frequency_output;
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
