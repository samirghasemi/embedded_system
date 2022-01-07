/*
 * File: p30.h
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

#ifndef RTW_HEADER_p30_h_
#define RTW_HEADER_p30_h_
#include <stddef.h>
#ifndef p30_COMMON_INCLUDES_
#define p30_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* p30_COMMON_INCLUDES_ */

#include "p30_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T timerforce;                   /* '<Root>/Chart1' */
  real_T timertemp;                    /* '<Root>/Chart1' */
  uint8_T is_active_c1_p30;            /* '<Root>/Chart1' */
} DW_p30_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T temp;                         /* '<Root>/temp' */
  real_T force;                        /* '<Root>/force' */
} ExtU_p30_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T degree;                       /* '<Root>/degree' */
  real_T freq;                         /* '<Root>/freq' */
} ExtY_p30_T;

/* Real-time Model Data Structure */
struct tag_RTM_p30_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_p30_T p30_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_p30_T p30_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_p30_T p30_Y;

/* Model entry point functions */
extern void p30_initialize(void);
extern void p30_step(void);
extern void p30_terminate(void);

/* Real-time Model object */
extern RT_MODEL_p30_T *const p30_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'p30'
 * '<S1>'   : 'p30/Chart1'
 */
#endif                                 /* RTW_HEADER_p30_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
