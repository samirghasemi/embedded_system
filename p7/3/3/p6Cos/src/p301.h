/*
 * File: p301.h
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

#ifndef RTW_HEADER_p301_h_
#define RTW_HEADER_p301_h_
#include <stddef.h>
#ifndef p301_COMMON_INCLUDES_
#define p301_COMMON_INCLUDES_
#include "rtwtypes.h"
// #include "rtw_continuous.h"
// #include "rtw_solver.h"
#endif                                 /* p301_COMMON_INCLUDES_ */

#include "p301_types.h"
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
  uint16_T timerforce;                 /* '<Root>/Chart1' */
  uint16_T timertemp;                  /* '<Root>/Chart1' */
  uint8_T is_active_c1_p301;           /* '<Root>/Chart1' */
} DW_p301_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int16_T temp;                        /* '<Root>/temp' */
  int16_T force;                       /* '<Root>/force' */
} ExtU_p301_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int16_T degree;                      /* '<Root>/degree' */
  int16_T freq;                        /* '<Root>/freq' */
} ExtY_p301_T;

/* Real-time Model Data Structure */
struct tag_RTM_p301_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_p301_T p301_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_p301_T p301_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_p301_T p301_Y;

/* Model entry point functions */
extern void p301_initialize(void);
extern void p301_step(void);
extern void p301_terminate(void);

/* Real-time Model object */
extern RT_MODEL_p301_T *const p301_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<Root>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<Root>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<Root>/Data Type Conversion3' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'p301'
 * '<S1>'   : 'p301/Chart1'
 */
#endif                                 /* RTW_HEADER_p301_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
