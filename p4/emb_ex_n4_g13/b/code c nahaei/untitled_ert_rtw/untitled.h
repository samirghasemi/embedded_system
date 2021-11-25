/*
 * File: untitled.h
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Nov 19 20:55:08 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#include <stddef.h>
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

#include "untitled_types.h"
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
  uint8_T is_active_c3_untitled;       /* '<Root>/Chart' */
  uint8_T is_c3_untitled;              /* '<Root>/Chart' */
  uint8_T is_state2;                   /* '<Root>/Chart' */
  uint8_T is_d;                        /* '<Root>/Chart' */
  uint8_T is_e;                        /* '<Root>/Chart' */
  uint8_T is_f;                        /* '<Root>/Chart' */
  uint8_T is_state1;                   /* '<Root>/Chart' */
  uint8_T was_state1;                  /* '<Root>/Chart' */
} DW_untitled_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T a;                            /* '<Root>/a' */
  real_T b;                            /* '<Root>/b' */
  real_T c;                            /* '<Root>/c' */
  real_T d;                            /* '<Root>/d' */
  real_T e;                            /* '<Root>/e' */
  real_T f;                            /* '<Root>/f' */
} ExtU_untitled_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T out10;                        /* '<Root>/out10' */
  real_T out11;                        /* '<Root>/out11' */
  real_T out3;                         /* '<Root>/out3' */
  real_T out4;                         /* '<Root>/out4' */
  real_T out5;                         /* '<Root>/out5' */
  real_T out7;                         /* '<Root>/out7' */
  real_T out8;                         /* '<Root>/out8' */
} ExtY_untitled_T;

/* Real-time Model Data Structure */
struct tag_RTM_untitled_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_untitled_T untitled_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_untitled_T untitled_Y;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);
extern void untitled_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled_T *const untitled_M;
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
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/Chart'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
