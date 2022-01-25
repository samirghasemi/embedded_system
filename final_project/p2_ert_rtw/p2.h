/*
 * File: p2.h
 *
 * Code generated for Simulink model 'p2'.
 *
 * Model version                  : 1.56
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 25 13:43:35 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_p2_h_
#define RTW_HEADER_p2_h_
#include <string.h>
#include <stddef.h>
#ifndef p2_COMMON_INCLUDES_
#define p2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* p2_COMMON_INCLUDES_ */

#include "p2_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T X0_MATRIX[4];                 /* '<Root>/X0_MATRIX' */
  real_T Add[4];                       /* '<S2>/Add' */
  real_T Add1[4];                      /* '<S2>/Add1' */
  real_T s[4];                         /* '<S2>/SIGMA' */
  real_T h1;                           /* '<S1>/Chart' */
  real_T h2;                           /* '<S1>/Chart' */
  real_T h3;                           /* '<S1>/Chart' */
  real_T h4;                           /* '<S1>/Chart' */
  real_T Room[2];                      /* '<S1>/Chart' */
} B_p2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int_T Integrator_IWORK;              /* '<S2>/Integrator' */
  uint8_T is_active_c3_p2;             /* '<S2>/SIGMA' */
  uint8_T is_active_c1_p2;             /* '<S1>/Chart' */
  uint8_T is_c1_p2;                    /* '<S1>/Chart' */
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
} DW_p2_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE[4];         /* '<S2>/Integrator' */
} X_p2_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE[4];         /* '<S2>/Integrator' */
} XDot_p2_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[4];      /* '<S2>/Integrator' */
} XDis_p2_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T H_OUTPUT[4];                  /* '<Root>/H_OUTPUT' */
  real_T HEATER1_OUTPUT;               /* '<Root>/HEATER1_OUTPUT' */
  real_T HEATER2_OUTPUT;               /* '<Root>/HEATER2_OUTPUT' */
  real_T X_OUTPUT[4];                  /* '<Root>/X_OUTPUT' */
} ExtY_p2_T;

/* Parameters (default storage) */
struct P_p2_T_ {
  real_T X0_MATRIX_Value[4];           /* Expression: [16.5, 16.5,16.5 , 16.5 ]
                                        * Referenced by: '<Root>/X0_MATRIX'
                                        */
  real_T ON_MATRIX1_Value[4];          /* Expression: [19 ,19 , 19 , 19 ]
                                        * Referenced by: '<Root>/ON_MATRIX1'
                                        */
  real_T OFF_MATRIX_Value[4];          /* Expression: [20,20,20,20 ]
                                        * Referenced by: '<Root>/OFF_MATRIX'
                                        */
  real_T DIF_MATRIX1_Value[4];         /* Expression: [1,1,1,1 ]
                                        * Referenced by: '<Root>/DIF_MATRIX1'
                                        */
  real_T GET_MATRIX_Value[4];          /* Expression: [17,16,16,17 ]
                                        * Referenced by: '<Root>/GET_MATRIX'
                                        */
  real_T A_MATRIX_Value[16];
  /* Expression: [0, 0.3 , 0.4 , 0.3 ; 0.3 , 0 , 0.5 , 0 ; 0.4 , 0.5 , 0 , 0.3; 0.3 , 0 , 0.3 , 0]
   * Referenced by: '<Root>/A_MATRIX'
   */
  real_T B_MATRIX_Value[4];            /* Expression: [0.3 , 0.2 , 0.5 , 0.4 ]
                                        * Referenced by: '<Root>/B_MATRIX'
                                        */
  real_T C_MATRIX_Value[4];            /* Expression: [9 , 7 , 11 , 7 ]
                                        * Referenced by: '<Root>/C_MATRIX'
                                        */
  real_T U_TEMP_Value;                 /* Expression: 6
                                        * Referenced by: '<Root>/U_TEMP'
                                        */
  real_T X_ROOMTEMP_InitialValue[4];   /* Expression: [16.5,16.5,16.5,16.5]
                                        * Referenced by: '<Root>/X_ROOMTEMP'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_p2_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_p2_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[4];
  real_T odeF[3][4];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    boolean_T firstInitCondFlag;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_p2_T p2_P;

/* Block signals (default storage) */
extern B_p2_T p2_B;

/* Continuous states (default storage) */
extern X_p2_T p2_X;

/* Block states (default storage) */
extern DW_p2_T p2_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_p2_T p2_Y;

/* Model entry point functions */
extern void p2_initialize(void);
extern void p2_step(void);
extern void p2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_p2_T *const p2_M;
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
 * '<Root>' : 'p2'
 * '<S1>'   : 'p2/Thermostat_SUBSYSTEM'
 * '<S2>'   : 'p2/controller_SUBSYSTEM'
 * '<S3>'   : 'p2/Thermostat_SUBSYSTEM/Chart'
 * '<S4>'   : 'p2/controller_SUBSYSTEM/SIGMA'
 */
#endif                                 /* RTW_HEADER_p2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
