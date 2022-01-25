/*
 * File: controller_SUBSYSTEM.h
 *
 * Code generated for Simulink model 'controller_SUBSYSTEM'.
 *
 * Model version                  : 1.56
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 25 18:07:59 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controller_SUBSYSTEM_h_
#define RTW_HEADER_controller_SUBSYSTEM_h_
#include <string.h>
#include <stddef.h>
#ifndef controller_SUBSYSTEM_COMMON_INCLUDES_
#define controller_SUBSYSTEM_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                               /* controller_SUBSYSTEM_COMMON_INCLUDES_ */

#include "controller_SUBSYSTEM_types.h"
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
  real_T Add1[4];                      /* '<S1>/Add1' */
  real_T s[4];                         /* '<S1>/SIGMA' */
} B_controller_SUBSYSTEM_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int_T Integrator_IWORK;              /* '<S1>/Integrator' */
  uint8_T is_active_c3_controller_SUBSYST;/* '<S1>/SIGMA' */
} DW_controller_SUBSYSTEM_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE[4];         /* '<S1>/Integrator' */
} X_controller_SUBSYSTEM_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE[4];         /* '<S1>/Integrator' */
} XDot_controller_SUBSYSTEM_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[4];      /* '<S1>/Integrator' */
} XDis_controller_SUBSYSTEM_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T H[4];                         /* '<Root>/H' */
  real_T A[16];                        /* '<Root>/A' */
  real_T B[4];                         /* '<Root>/B' */
  real_T C[4];                         /* '<Root>/C' */
  real_T X0[4];                        /* '<Root>/X0' */
  real_T U;                            /* '<Root>/U' */
  real_T Input1[4];                    /* '<Root>/Input1' */
} ExtU_controller_SUBSYSTEM_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T X[4];                         /* '<Root>/X' */
} ExtY_controller_SUBSYSTEM_T;

/* Real-time Model Data Structure */
struct tag_RTM_controller_SUBSYSTEM_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_controller_SUBSYSTEM_T *contStates;
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

/* Block signals (default storage) */
extern B_controller_SUBSYSTEM_T controller_SUBSYSTEM_B;

/* Continuous states (default storage) */
extern X_controller_SUBSYSTEM_T controller_SUBSYSTEM_X;

/* Block states (default storage) */
extern DW_controller_SUBSYSTEM_T controller_SUBSYSTEM_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_controller_SUBSYSTEM_T controller_SUBSYSTEM_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_controller_SUBSYSTEM_T controller_SUBSYSTEM_Y;

/* Model entry point functions */
extern void controller_SUBSYSTEM_initialize(void);
extern void controller_SUBSYSTEM_step(void);
extern void controller_SUBSYSTEM_terminate(void);

/* Real-time Model object */
extern RT_MODEL_controller_SUBSYSTEM_T *const controller_SUBSYSTEM_M;
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
 * hilite_system('p2_2/controller_SUBSYSTEM')    - opens subsystem p2_2/controller_SUBSYSTEM
 * hilite_system('p2_2/controller_SUBSYSTEM/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'p2_2'
 * '<S1>'   : 'p2_2/controller_SUBSYSTEM'
 * '<S2>'   : 'p2_2/controller_SUBSYSTEM/SIGMA'
 */
#endif                                 /* RTW_HEADER_controller_SUBSYSTEM_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
