/*
 * File: controller_SUBSYSTEM.c
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

#include "controller_SUBSYSTEM.h"
#include "controller_SUBSYSTEM_private.h"

/* Block signals (default storage) */
B_controller_SUBSYSTEM_T controller_SUBSYSTEM_B;

/* Continuous states */
X_controller_SUBSYSTEM_T controller_SUBSYSTEM_X;

/* Block states (default storage) */
DW_controller_SUBSYSTEM_T controller_SUBSYSTEM_DW;

/* External inputs (root inport signals with default storage) */
ExtU_controller_SUBSYSTEM_T controller_SUBSYSTEM_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_controller_SUBSYSTEM_T controller_SUBSYSTEM_Y;

/* Real-time model */
static RT_MODEL_controller_SUBSYSTEM_T controller_SUBSYSTEM_M_;
RT_MODEL_controller_SUBSYSTEM_T *const controller_SUBSYSTEM_M =
  &controller_SUBSYSTEM_M_;

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  controller_SUBSYSTEM_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  controller_SUBSYSTEM_step();
  controller_SUBSYSTEM_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  controller_SUBSYSTEM_step();
  controller_SUBSYSTEM_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void controller_SUBSYSTEM_step(void)
{
  if (rtmIsMajorTimeStep(controller_SUBSYSTEM_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&controller_SUBSYSTEM_M->solverInfo,
                          ((controller_SUBSYSTEM_M->Timing.clockTick0+1)*
      controller_SUBSYSTEM_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(controller_SUBSYSTEM_M)) {
    controller_SUBSYSTEM_M->Timing.t[0] = rtsiGetT
      (&controller_SUBSYSTEM_M->solverInfo);
  }

  /* Outputs for Atomic SubSystem: '<Root>/controller_SUBSYSTEM' */
  if (rtmIsMajorTimeStep(controller_SUBSYSTEM_M)) {
    /* Chart: '<S1>/SIGMA' incorporates:
     *  Inport: '<Root>/A'
     *  Inport: '<Root>/Input1'
     */
    if ((uint16_T)controller_SUBSYSTEM_DW.is_active_c3_controller_SUBSYST == 0U)
    {
      controller_SUBSYSTEM_DW.is_active_c3_controller_SUBSYST = 1U;
      controller_SUBSYSTEM_B.s[0] = 0.0;
      controller_SUBSYSTEM_B.s[1] = 0.0;
      controller_SUBSYSTEM_B.s[2] = 0.0;
      controller_SUBSYSTEM_B.s[3] = 0.0;
    } else {
      controller_SUBSYSTEM_B.s[0] = ((controller_SUBSYSTEM_U.Input1[1] -
        controller_SUBSYSTEM_U.Input1[0]) * controller_SUBSYSTEM_U.A[4] +
        (controller_SUBSYSTEM_U.Input1[2] - controller_SUBSYSTEM_U.Input1[0]) *
        controller_SUBSYSTEM_U.A[8]) + (controller_SUBSYSTEM_U.Input1[3] -
        controller_SUBSYSTEM_U.Input1[0]) * controller_SUBSYSTEM_U.A[12];
      controller_SUBSYSTEM_B.s[1] = ((controller_SUBSYSTEM_U.Input1[0] -
        controller_SUBSYSTEM_U.Input1[1]) * controller_SUBSYSTEM_U.A[1] +
        (controller_SUBSYSTEM_U.Input1[2] - controller_SUBSYSTEM_U.Input1[1]) *
        controller_SUBSYSTEM_U.A[9]) + (controller_SUBSYSTEM_U.Input1[3] -
        controller_SUBSYSTEM_U.Input1[1]) * controller_SUBSYSTEM_U.A[13];
      controller_SUBSYSTEM_B.s[2] = ((controller_SUBSYSTEM_U.Input1[0] -
        controller_SUBSYSTEM_U.Input1[2]) * controller_SUBSYSTEM_U.A[2] +
        (controller_SUBSYSTEM_U.Input1[1] - controller_SUBSYSTEM_U.Input1[2]) *
        controller_SUBSYSTEM_U.A[6]) + (controller_SUBSYSTEM_U.Input1[3] -
        controller_SUBSYSTEM_U.Input1[2]) * controller_SUBSYSTEM_U.A[14];
      controller_SUBSYSTEM_B.s[3] = ((controller_SUBSYSTEM_U.Input1[0] -
        controller_SUBSYSTEM_U.Input1[3]) * controller_SUBSYSTEM_U.A[3] +
        (controller_SUBSYSTEM_U.Input1[1] - controller_SUBSYSTEM_U.Input1[3]) *
        controller_SUBSYSTEM_U.A[7]) + (controller_SUBSYSTEM_U.Input1[2] -
        controller_SUBSYSTEM_U.Input1[3]) * controller_SUBSYSTEM_U.A[11];
    }

    /* End of Chart: '<S1>/SIGMA' */
  }

  /* Sum: '<S1>/Add1' incorporates:
   *  Inport: '<Root>/B'
   *  Inport: '<Root>/C'
   *  Inport: '<Root>/H'
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/U'
   *  Product: '<S1>/Product'
   *  Product: '<S1>/Product1'
   *  Sum: '<S1>/Add'
   *  Sum: '<S1>/Subtract'
   */
  controller_SUBSYSTEM_B.Add1[0] = (controller_SUBSYSTEM_U.C[0] *
    controller_SUBSYSTEM_U.H[0] + controller_SUBSYSTEM_B.s[0]) +
    (controller_SUBSYSTEM_U.U - controller_SUBSYSTEM_U.Input1[0]) *
    controller_SUBSYSTEM_U.B[0];
  controller_SUBSYSTEM_B.Add1[1] = (controller_SUBSYSTEM_U.C[1] *
    controller_SUBSYSTEM_U.H[1] + controller_SUBSYSTEM_B.s[1]) +
    (controller_SUBSYSTEM_U.U - controller_SUBSYSTEM_U.Input1[1]) *
    controller_SUBSYSTEM_U.B[1];
  controller_SUBSYSTEM_B.Add1[2] = (controller_SUBSYSTEM_U.C[2] *
    controller_SUBSYSTEM_U.H[2] + controller_SUBSYSTEM_B.s[2]) +
    (controller_SUBSYSTEM_U.U - controller_SUBSYSTEM_U.Input1[2]) *
    controller_SUBSYSTEM_U.B[2];
  controller_SUBSYSTEM_B.Add1[3] = (controller_SUBSYSTEM_U.C[3] *
    controller_SUBSYSTEM_U.H[3] + controller_SUBSYSTEM_B.s[3]) +
    (controller_SUBSYSTEM_U.U - controller_SUBSYSTEM_U.Input1[3]) *
    controller_SUBSYSTEM_U.B[3];

  /* Integrator: '<S1>/Integrator' incorporates:
   *  Inport: '<Root>/X0'
   */
  if (controller_SUBSYSTEM_DW.Integrator_IWORK != 0) {
    controller_SUBSYSTEM_X.Integrator_CSTATE[0] = controller_SUBSYSTEM_U.X0[0];
    controller_SUBSYSTEM_X.Integrator_CSTATE[1] = controller_SUBSYSTEM_U.X0[1];
    controller_SUBSYSTEM_X.Integrator_CSTATE[2] = controller_SUBSYSTEM_U.X0[2];
    controller_SUBSYSTEM_X.Integrator_CSTATE[3] = controller_SUBSYSTEM_U.X0[3];
  }

  /* Outport: '<Root>/X' incorporates:
   *  Integrator: '<S1>/Integrator'
   */
  controller_SUBSYSTEM_Y.X[0] = controller_SUBSYSTEM_X.Integrator_CSTATE[0];
  controller_SUBSYSTEM_Y.X[1] = controller_SUBSYSTEM_X.Integrator_CSTATE[1];
  controller_SUBSYSTEM_Y.X[2] = controller_SUBSYSTEM_X.Integrator_CSTATE[2];
  controller_SUBSYSTEM_Y.X[3] = controller_SUBSYSTEM_X.Integrator_CSTATE[3];

  /* End of Outputs for SubSystem: '<Root>/controller_SUBSYSTEM' */
  if (rtmIsMajorTimeStep(controller_SUBSYSTEM_M)) {
    /* Update for Atomic SubSystem: '<Root>/controller_SUBSYSTEM' */
    /* Update for Integrator: '<S1>/Integrator' */
    controller_SUBSYSTEM_DW.Integrator_IWORK = 0;

    /* End of Update for SubSystem: '<Root>/controller_SUBSYSTEM' */
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(controller_SUBSYSTEM_M)) {
    rt_ertODEUpdateContinuousStates(&controller_SUBSYSTEM_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++controller_SUBSYSTEM_M->Timing.clockTick0;
    controller_SUBSYSTEM_M->Timing.t[0] = rtsiGetSolverStopTime
      (&controller_SUBSYSTEM_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.2s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.2, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      controller_SUBSYSTEM_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void controller_SUBSYSTEM_derivatives(void)
{
  XDot_controller_SUBSYSTEM_T *_rtXdot;
  _rtXdot = ((XDot_controller_SUBSYSTEM_T *) controller_SUBSYSTEM_M->derivs);

  /* Derivatives for Atomic SubSystem: '<Root>/controller_SUBSYSTEM' */
  /* Derivatives for Integrator: '<S1>/Integrator' incorporates:
   *  Sum: '<S1>/Add1'
   */
  _rtXdot->Integrator_CSTATE[0] = controller_SUBSYSTEM_B.Add1[0];
  _rtXdot->Integrator_CSTATE[1] = controller_SUBSYSTEM_B.Add1[1];
  _rtXdot->Integrator_CSTATE[2] = controller_SUBSYSTEM_B.Add1[2];
  _rtXdot->Integrator_CSTATE[3] = controller_SUBSYSTEM_B.Add1[3];

  /* End of Derivatives for SubSystem: '<Root>/controller_SUBSYSTEM' */
}

/* Model initialize function */
void controller_SUBSYSTEM_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&controller_SUBSYSTEM_M->solverInfo,
                          &controller_SUBSYSTEM_M->Timing.simTimeStep);
    rtsiSetTPtr(&controller_SUBSYSTEM_M->solverInfo, &rtmGetTPtr
                (controller_SUBSYSTEM_M));
    rtsiSetStepSizePtr(&controller_SUBSYSTEM_M->solverInfo,
                       &controller_SUBSYSTEM_M->Timing.stepSize0);
    rtsiSetdXPtr(&controller_SUBSYSTEM_M->solverInfo,
                 &controller_SUBSYSTEM_M->derivs);
    rtsiSetContStatesPtr(&controller_SUBSYSTEM_M->solverInfo, (real_T **)
                         &controller_SUBSYSTEM_M->contStates);
    rtsiSetNumContStatesPtr(&controller_SUBSYSTEM_M->solverInfo,
      &controller_SUBSYSTEM_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&controller_SUBSYSTEM_M->solverInfo,
      &controller_SUBSYSTEM_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&controller_SUBSYSTEM_M->solverInfo,
      &controller_SUBSYSTEM_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&controller_SUBSYSTEM_M->solverInfo,
      &controller_SUBSYSTEM_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&controller_SUBSYSTEM_M->solverInfo,
                          (&rtmGetErrorStatus(controller_SUBSYSTEM_M)));
    rtsiSetRTModelPtr(&controller_SUBSYSTEM_M->solverInfo,
                      controller_SUBSYSTEM_M);
  }

  rtsiSetSimTimeStep(&controller_SUBSYSTEM_M->solverInfo, MAJOR_TIME_STEP);
  controller_SUBSYSTEM_M->intgData.y = controller_SUBSYSTEM_M->odeY;
  controller_SUBSYSTEM_M->intgData.f[0] = controller_SUBSYSTEM_M->odeF[0];
  controller_SUBSYSTEM_M->intgData.f[1] = controller_SUBSYSTEM_M->odeF[1];
  controller_SUBSYSTEM_M->intgData.f[2] = controller_SUBSYSTEM_M->odeF[2];
  controller_SUBSYSTEM_M->contStates = ((X_controller_SUBSYSTEM_T *)
    &controller_SUBSYSTEM_X);
  rtsiSetSolverData(&controller_SUBSYSTEM_M->solverInfo, (void *)
                    &controller_SUBSYSTEM_M->intgData);
  rtsiSetSolverName(&controller_SUBSYSTEM_M->solverInfo,"ode3");
  rtmSetTPtr(controller_SUBSYSTEM_M, &controller_SUBSYSTEM_M->Timing.tArray[0]);
  controller_SUBSYSTEM_M->Timing.stepSize0 = 0.2;
  rtmSetFirstInitCond(controller_SUBSYSTEM_M, 1);

  /* SystemInitialize for Atomic SubSystem: '<Root>/controller_SUBSYSTEM' */
  /* InitializeConditions for Integrator: '<S1>/Integrator' */
  if (rtmIsFirstInitCond(controller_SUBSYSTEM_M)) {
    controller_SUBSYSTEM_X.Integrator_CSTATE[0] = 0.0;
    controller_SUBSYSTEM_X.Integrator_CSTATE[1] = 0.0;
    controller_SUBSYSTEM_X.Integrator_CSTATE[2] = 0.0;
    controller_SUBSYSTEM_X.Integrator_CSTATE[3] = 0.0;
  }

  controller_SUBSYSTEM_DW.Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S1>/Integrator' */
  /* End of SystemInitialize for SubSystem: '<Root>/controller_SUBSYSTEM' */

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(controller_SUBSYSTEM_M)) {
    rtmSetFirstInitCond(controller_SUBSYSTEM_M, 0);
  }
}

/* Model terminate function */
void controller_SUBSYSTEM_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
