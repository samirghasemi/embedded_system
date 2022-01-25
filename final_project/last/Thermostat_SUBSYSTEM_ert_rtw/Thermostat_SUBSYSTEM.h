/*
 * File: Thermostat_SUBSYSTEM.h
 *
 * Code generated for Simulink model 'Thermostat_SUBSYSTEM'.
 *
 * Model version                  : 1.56
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 25 18:04:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Thermostat_SUBSYSTEM_h_
#define RTW_HEADER_Thermostat_SUBSYSTEM_h_
#include <stddef.h>
#ifndef Thermostat_SUBSYSTEM_COMMON_INCLUDES_
#define Thermostat_SUBSYSTEM_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                               /* Thermostat_SUBSYSTEM_COMMON_INCLUDES_ */

#include "Thermostat_SUBSYSTEM_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T h1;                           /* '<S1>/Chart' */
  real_T h2;                           /* '<S1>/Chart' */
  real_T h3;                           /* '<S1>/Chart' */
  real_T h4;                           /* '<S1>/Chart' */
  real_T Room[2];                      /* '<S1>/Chart' */
} B_Thermostat_SUBSYSTEM_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c1_Thermostat_SUBSYST;/* '<S1>/Chart' */
  uint8_T is_c1_Thermostat_SUBSYSTEM;  /* '<S1>/Chart' */
  uint8_T is_s1;                       /* '<S1>/Chart' */
  uint8_T is_s3;                       /* '<S1>/Chart' */
  uint8_T is_s1_o;                     /* '<S1>/Chart' */
  uint8_T is_s4;                       /* '<S1>/Chart' */
  uint8_T is_s1_k;                     /* '<S1>/Chart' */
  uint8_T is_s2;                       /* '<S1>/Chart' */
  uint8_T is_s2_n;                     /* '<S1>/Chart' */
  uint8_T is_s4_i;                     /* '<S1>/Chart' */
  uint8_T is_s3_k;                     /* '<S1>/Chart' */
  uint8_T is_s4_c;                     /* '<S1>/Chart' */
  uint8_T is_s2_j;                     /* '<S1>/Chart' */
  uint8_T is_s3_i;                     /* '<S1>/Chart' */
} DW_Thermostat_SUBSYSTEM_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T X[4];                         /* '<Root>/X' */
  real_T on[4];                        /* '<Root>/on' */
  real_T dif[4];                       /* '<Root>/dif' */
  real_T off[4];                       /* '<Root>/off' */
  real_T get[4];                       /* '<Root>/get' */
} ExtU_Thermostat_SUBSYSTEM_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T H[4];                         /* '<Root>/H' */
  real_T Heater1;                      /* '<Root>/Heater1' */
  real_T Heater2;                      /* '<Root>/Heater2' */
} ExtY_Thermostat_SUBSYSTEM_T;

/* Real-time Model Data Structure */
struct tag_RTM_Thermostat_SUBSYSTEM_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_B;

/* Block states (default storage) */
extern DW_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_Y;

/* Model entry point functions */
extern void Thermostat_SUBSYSTEM_initialize(void);
extern void Thermostat_SUBSYSTEM_step(void);
extern void Thermostat_SUBSYSTEM_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Thermostat_SUBSYSTEM_T *const Thermostat_SUBSYSTEM_M;
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
 * hilite_system('p2_2/Thermostat_SUBSYSTEM')    - opens subsystem p2_2/Thermostat_SUBSYSTEM
 * hilite_system('p2_2/Thermostat_SUBSYSTEM/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'p2_2'
 * '<S1>'   : 'p2_2/Thermostat_SUBSYSTEM'
 * '<S2>'   : 'p2_2/Thermostat_SUBSYSTEM/Chart'
 */
#endif                                 /* RTW_HEADER_Thermostat_SUBSYSTEM_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
