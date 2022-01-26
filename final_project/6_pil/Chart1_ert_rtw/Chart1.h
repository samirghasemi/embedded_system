/*
 * File: Chart1.h
 *
 * Code generated for Simulink model 'Chart1'.
 *
 * Model version                  : 1.64
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 26 15:28:01 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Chart1_h_
#define RTW_HEADER_Chart1_h_
#include <stddef.h>
#ifndef Chart1_COMMON_INCLUDES_
#define Chart1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Chart1_COMMON_INCLUDES_ */

#include "Chart1_types.h"
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
  uint8_T is_active_c2_Chart1;         /* '<Root>/Chart1' */
  uint8_T is_c2_Chart1;                /* '<Root>/Chart1' */
  uint8_T is_s1;                       /* '<Root>/Chart1' */
  uint8_T is_s3;                       /* '<Root>/Chart1' */
  uint8_T is_s1_i;                     /* '<Root>/Chart1' */
  uint8_T is_s4;                       /* '<Root>/Chart1' */
  uint8_T is_s1_f;                     /* '<Root>/Chart1' */
  uint8_T is_s2;                       /* '<Root>/Chart1' */
  uint8_T is_s2_p;                     /* '<Root>/Chart1' */
  uint8_T is_s4_f;                     /* '<Root>/Chart1' */
  uint8_T is_s3_p;                     /* '<Root>/Chart1' */
  uint8_T is_s4_d;                     /* '<Root>/Chart1' */
  uint8_T is_s2_l;                     /* '<Root>/Chart1' */
  uint8_T is_s3_j;                     /* '<Root>/Chart1' */
} DW_Chart1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T on[4];                      /* '<Root>/on' */
  real32_T off[4];                     /* '<Root>/off' */
  real32_T dif[4];                     /* '<Root>/dif' */
  real32_T get[4];                     /* '<Root>/get' */
  real32_T x[4];                       /* '<Root>/x' */
} ExtU_Chart1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T h1;                         /* '<Root>/h1' */
  real32_T h2;                         /* '<Root>/h2' */
  real32_T h3;                         /* '<Root>/h3' */
  real32_T h4;                         /* '<Root>/h4' */
  real32_T Room[2];                    /* '<Root>/Room' */
} ExtY_Chart1_T;

/* Real-time Model Data Structure */
struct tag_RTM_Chart1_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_Chart1_T Chart1_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Chart1_T Chart1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Chart1_T Chart1_Y;

/* Model entry point functions */
extern void Chart1_initialize(void);
extern void Chart1_step(void);
extern void Chart1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Chart1_T *const Chart1_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('p2_1/Thermostat_SUBSYSTEM/Chart1')    - opens subsystem p2_1/Thermostat_SUBSYSTEM/Chart1
 * hilite_system('p2_1/Thermostat_SUBSYSTEM/Chart1/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'p2_1/Thermostat_SUBSYSTEM'
 * '<S1>'   : 'p2_1/Thermostat_SUBSYSTEM/Chart1'
 */
#endif                                 /* RTW_HEADER_Chart1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
