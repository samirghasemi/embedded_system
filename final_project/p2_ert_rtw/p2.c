/*
 * File: p2.c
 *
 * Code generated for Simulink model 'p2'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 25 02:51:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "p2.h"
#include "p2_private.h"

/* Named constants for Chart: '<S1>/Chart' */
#define p2_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define p2_IN_s1_off                   ((uint8_T)1U)
#define p2_IN_s1_off1                  ((uint8_T)1U)
#define p2_IN_s1_on                    ((uint8_T)2U)
#define p2_IN_s1_on1                   ((uint8_T)2U)
#define p2_IN_s2_off                   ((uint8_T)1U)
#define p2_IN_s2_on                    ((uint8_T)2U)
#define p2_IN_s3_off                   ((uint8_T)1U)
#define p2_IN_s3_on                    ((uint8_T)2U)
#define p2_IN_s4_off                   ((uint8_T)1U)
#define p2_IN_s4_on                    ((uint8_T)2U)
#define p2_IN_st12                     ((uint8_T)1U)
#define p2_IN_st13                     ((uint8_T)2U)
#define p2_IN_st14                     ((uint8_T)3U)
#define p2_IN_st23                     ((uint8_T)4U)
#define p2_IN_st24                     ((uint8_T)5U)
#define p2_IN_st34                     ((uint8_T)6U)
#define p2_IN_start                    ((uint8_T)7U)

/* Block signals (default storage) */
B_p2_T p2_B;

/* Continuous states */
X_p2_T p2_X;

/* Block states (default storage) */
DW_p2_T p2_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_p2_T p2_Y;

/* Real-time model */
static RT_MODEL_p2_T p2_M_;
RT_MODEL_p2_T *const p2_M = &p2_M_;

/* Forward declaration for local functions */
static void p2_st13(const real_T X_ROOMTEMPREAD[4]);
static void p2_st14(const real_T X_ROOMTEMPREAD[4]);
static void p2_st23(const real_T X_ROOMTEMPREAD[4]);
static void p2_st24(const real_T X_ROOMTEMPREAD[4]);
static void p2_st34(const real_T X_ROOMTEMPREAD[4]);

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
  p2_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  p2_step();
  p2_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  p2_step();
  p2_derivatives();

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

/* Function for Chart: '<S1>/Chart' */
static void p2_st13(const real_T X_ROOMTEMPREAD[4])
{
  /* Constant: '<Root>/DIF_MATRIX1' incorporates:
   *  Constant: '<Root>/GET_MATRIX'
   */
  if ((X_ROOMTEMPREAD[2] - X_ROOMTEMPREAD[1] >= p2_P.DIF_MATRIX1_Value[1]) &&
      (X_ROOMTEMPREAD[1] <= p2_P.GET_MATRIX_Value[1])) {
    p2_DW.is_s3 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s1 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st12;
    p2_B.h3 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 2.0;
    p2_DW.is_s1_k = p2_IN_s1_on1;
    p2_B.h1 = 1.0;
    p2_DW.is_s2 = p2_IN_s2_on;
    p2_B.h2 = 1.0;
  } else if ((X_ROOMTEMPREAD[2] - X_ROOMTEMPREAD[3] >= p2_P.DIF_MATRIX1_Value[3])
             && (X_ROOMTEMPREAD[3] <= p2_P.GET_MATRIX_Value[3])) {
    p2_DW.is_s3 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s1 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st14;
    p2_B.h2 = 0.0;
    p2_B.h3 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 4.0;
    p2_DW.is_s1_o = p2_IN_s1_on;
    p2_B.h1 = 1.0;
    p2_DW.is_s4 = p2_IN_s4_on;
    p2_B.h4 = 1.0;
  } else if ((X_ROOMTEMPREAD[0] - X_ROOMTEMPREAD[1] >= p2_P.DIF_MATRIX1_Value[1])
             && (X_ROOMTEMPREAD[1] <= p2_P.GET_MATRIX_Value[1])) {
    p2_DW.is_s3 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s1 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st23;
    p2_B.h1 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 2.0;
    p2_B.Room[1] = 3.0;
    p2_DW.is_s2_j = p2_IN_s2_on;
    p2_B.h2 = 1.0;
    p2_DW.is_s3_i = p2_IN_s3_on;
    p2_B.h3 = 1.0;
  } else if ((X_ROOMTEMPREAD[0] - X_ROOMTEMPREAD[3] >= p2_P.DIF_MATRIX1_Value[3])
             && (X_ROOMTEMPREAD[3] <= p2_P.GET_MATRIX_Value[3])) {
    p2_DW.is_s3 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s1 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st34;
    p2_B.h1 = 0.0;
    p2_B.h2 = 0.0;
    p2_B.Room[0] = 3.0;
    p2_B.Room[1] = 4.0;
    p2_DW.is_s3_k = p2_IN_s3_on;
    p2_B.h3 = 1.0;
    p2_DW.is_s4_c = p2_IN_s4_on;
    p2_B.h4 = 1.0;
  } else {
    if (p2_DW.is_s1 == p2_IN_s1_off) {
      /* Constant: '<Root>/ON_MATRIX1' */
      if (X_ROOMTEMPREAD[0] <= p2_P.ON_MATRIX1_Value[0]) {
        p2_DW.is_s1 = p2_IN_s1_on;
        p2_B.h1 = 1.0;
      }

      /* Constant: '<Root>/OFF_MATRIX' */
      /* case IN_s1_on: */
    } else if (X_ROOMTEMPREAD[0] >= p2_P.OFF_MATRIX_Value[0]) {
      p2_DW.is_s1 = p2_IN_s1_off;
      p2_B.h1 = 0.0;
    }

    if (p2_DW.is_s3 == p2_IN_s3_off) {
      /* Constant: '<Root>/ON_MATRIX1' */
      if (X_ROOMTEMPREAD[2] <= p2_P.ON_MATRIX1_Value[2]) {
        p2_DW.is_s3 = p2_IN_s3_on;
        p2_B.h3 = 1.0;
      }

      /* Constant: '<Root>/OFF_MATRIX' */
      /* case IN_s3_on: */
    } else if (X_ROOMTEMPREAD[2] >= p2_P.OFF_MATRIX_Value[2]) {
      p2_DW.is_s3 = p2_IN_s3_off;
      p2_B.h3 = 0.0;
    }
  }

  /* End of Constant: '<Root>/DIF_MATRIX1' */
}

/* Function for Chart: '<S1>/Chart' */
static void p2_st14(const real_T X_ROOMTEMPREAD[4])
{
  real_T tmp;

  /* Constant: '<Root>/DIF_MATRIX1' incorporates:
   *  Constant: '<Root>/GET_MATRIX'
   */
  if ((X_ROOMTEMPREAD[3] - X_ROOMTEMPREAD[2] >= p2_P.DIF_MATRIX1_Value[2]) &&
      (X_ROOMTEMPREAD[2] <= p2_P.GET_MATRIX_Value[2])) {
    p2_DW.is_s4 = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s1_o = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st13;
    p2_B.h2 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 3.0;
    p2_DW.is_s1 = p2_IN_s1_on;
    p2_B.h1 = 1.0;
    p2_DW.is_s3 = p2_IN_s3_on;
    p2_B.h3 = 1.0;
  } else {
    tmp = X_ROOMTEMPREAD[3] - X_ROOMTEMPREAD[1];
    if ((tmp >= p2_P.DIF_MATRIX1_Value[1]) && (X_ROOMTEMPREAD[1] <=
         p2_P.GET_MATRIX_Value[1])) {
      p2_DW.is_s4 = p2_IN_NO_ACTIVE_CHILD;
      p2_DW.is_s1_o = p2_IN_NO_ACTIVE_CHILD;
      p2_DW.is_c1_p2 = p2_IN_st12;
      p2_B.h3 = 0.0;
      p2_B.h4 = 0.0;
      p2_B.Room[0] = 1.0;
      p2_B.Room[1] = 2.0;
      p2_DW.is_s1_k = p2_IN_s1_on1;
      p2_B.h1 = 1.0;
      p2_DW.is_s2 = p2_IN_s2_on;
      p2_B.h2 = 1.0;
    } else if ((tmp >= p2_P.DIF_MATRIX1_Value[1]) && (X_ROOMTEMPREAD[1] <=
                p2_P.GET_MATRIX_Value[1])) {
      p2_DW.is_s4 = p2_IN_NO_ACTIVE_CHILD;
      p2_DW.is_s1_o = p2_IN_NO_ACTIVE_CHILD;
      p2_DW.is_c1_p2 = p2_IN_st24;
      p2_B.h1 = 0.0;
      p2_B.h3 = 0.0;
      p2_B.Room[0] = 1.0;
      p2_B.Room[1] = 3.0;
      p2_DW.is_s2_n = p2_IN_s2_on;
      p2_B.h2 = 1.0;
      p2_DW.is_s4_i = p2_IN_s4_on;
      p2_B.h4 = 1.0;
    } else if ((X_ROOMTEMPREAD[0] - X_ROOMTEMPREAD[2] >= p2_P.DIF_MATRIX1_Value
                [2]) && (X_ROOMTEMPREAD[2] <= p2_P.GET_MATRIX_Value[2])) {
      p2_DW.is_s4 = p2_IN_NO_ACTIVE_CHILD;
      p2_DW.is_s1_o = p2_IN_NO_ACTIVE_CHILD;
      p2_DW.is_c1_p2 = p2_IN_st34;
      p2_B.h1 = 0.0;
      p2_B.h2 = 0.0;
      p2_B.Room[0] = 3.0;
      p2_B.Room[1] = 4.0;
      p2_DW.is_s3_k = p2_IN_s3_on;
      p2_B.h3 = 1.0;
      p2_DW.is_s4_c = p2_IN_s4_on;
      p2_B.h4 = 1.0;
    } else {
      if (p2_DW.is_s1_o == p2_IN_s1_off) {
        /* Constant: '<Root>/ON_MATRIX1' */
        if (X_ROOMTEMPREAD[0] <= p2_P.ON_MATRIX1_Value[0]) {
          p2_DW.is_s1_o = p2_IN_s1_on;
          p2_B.h1 = 1.0;
        }

        /* Constant: '<Root>/OFF_MATRIX' */
        /* case IN_s1_on: */
      } else if (X_ROOMTEMPREAD[0] >= p2_P.OFF_MATRIX_Value[0]) {
        p2_DW.is_s1_o = p2_IN_s1_off;
        p2_B.h1 = 0.0;
      }

      if (p2_DW.is_s4 == p2_IN_s4_off) {
        /* Constant: '<Root>/ON_MATRIX1' */
        if (X_ROOMTEMPREAD[3] <= p2_P.ON_MATRIX1_Value[3]) {
          p2_DW.is_s4 = p2_IN_s4_on;
          p2_B.h4 = 1.0;
        }

        /* Constant: '<Root>/OFF_MATRIX' */
        /* case IN_s4_on: */
      } else if (X_ROOMTEMPREAD[3] >= p2_P.OFF_MATRIX_Value[3]) {
        p2_DW.is_s4 = p2_IN_s4_off;
        p2_B.h4 = 0.0;
      }
    }
  }

  /* End of Constant: '<Root>/DIF_MATRIX1' */
}

/* Function for Chart: '<S1>/Chart' */
static void p2_st23(const real_T X_ROOMTEMPREAD[4])
{
  /* Constant: '<Root>/DIF_MATRIX1' incorporates:
   *  Constant: '<Root>/GET_MATRIX'
   */
  if ((X_ROOMTEMPREAD[2] - X_ROOMTEMPREAD[0] >= p2_P.DIF_MATRIX1_Value[0]) &&
      (X_ROOMTEMPREAD[0] <= p2_P.GET_MATRIX_Value[0])) {
    p2_DW.is_s3_i = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s2_j = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st12;
    p2_B.h3 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 2.0;
    p2_DW.is_s1_k = p2_IN_s1_on1;
    p2_B.h1 = 1.0;
    p2_DW.is_s2 = p2_IN_s2_on;
    p2_B.h2 = 1.0;
  } else if ((X_ROOMTEMPREAD[1] - X_ROOMTEMPREAD[0] >= p2_P.DIF_MATRIX1_Value[0])
             && (X_ROOMTEMPREAD[0] <= p2_P.GET_MATRIX_Value[0])) {
    p2_DW.is_s3_i = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s2_j = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st13;
    p2_B.h2 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 3.0;
    p2_DW.is_s1 = p2_IN_s1_on;
    p2_B.h1 = 1.0;
    p2_DW.is_s3 = p2_IN_s3_on;
    p2_B.h3 = 1.0;
  } else if ((X_ROOMTEMPREAD[2] - X_ROOMTEMPREAD[3] >= p2_P.DIF_MATRIX1_Value[3])
             && (X_ROOMTEMPREAD[3] <= p2_P.GET_MATRIX_Value[3])) {
    p2_DW.is_s3_i = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s2_j = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st24;
    p2_B.h1 = 0.0;
    p2_B.h3 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 3.0;
    p2_DW.is_s2_n = p2_IN_s2_on;
    p2_B.h2 = 1.0;
    p2_DW.is_s4_i = p2_IN_s4_on;
    p2_B.h4 = 1.0;
  } else if ((X_ROOMTEMPREAD[1] - X_ROOMTEMPREAD[3] >= p2_P.DIF_MATRIX1_Value[3])
             && (X_ROOMTEMPREAD[3] <= p2_P.GET_MATRIX_Value[3])) {
    p2_DW.is_s3_i = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s2_j = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st34;
    p2_B.h1 = 0.0;
    p2_B.h2 = 0.0;
    p2_B.Room[0] = 3.0;
    p2_B.Room[1] = 4.0;
    p2_DW.is_s3_k = p2_IN_s3_on;
    p2_B.h3 = 1.0;
    p2_DW.is_s4_c = p2_IN_s4_on;
    p2_B.h4 = 1.0;
  } else {
    if (p2_DW.is_s2_j == p2_IN_s1_off) {
      /* Constant: '<Root>/ON_MATRIX1' */
      if (X_ROOMTEMPREAD[1] <= p2_P.ON_MATRIX1_Value[1]) {
        p2_DW.is_s2_j = p2_IN_s2_on;
        p2_B.h2 = 1.0;
      }

      /* Constant: '<Root>/OFF_MATRIX' */
      /* case IN_s2_on: */
    } else if (X_ROOMTEMPREAD[1] >= p2_P.OFF_MATRIX_Value[1]) {
      p2_DW.is_s2_j = p2_IN_s1_off;
      p2_B.h2 = 0.0;
    }

    if (p2_DW.is_s3_i == p2_IN_s3_off) {
      /* Constant: '<Root>/ON_MATRIX1' */
      if (X_ROOMTEMPREAD[2] <= p2_P.ON_MATRIX1_Value[2]) {
        p2_DW.is_s3_i = p2_IN_s3_on;
        p2_B.h3 = 1.0;
      }

      /* Constant: '<Root>/OFF_MATRIX' */
      /* case IN_s3_on: */
    } else if (X_ROOMTEMPREAD[2] >= p2_P.OFF_MATRIX_Value[2]) {
      p2_DW.is_s3_i = p2_IN_s3_off;
      p2_B.h3 = 0.0;
    }
  }

  /* End of Constant: '<Root>/DIF_MATRIX1' */
}

/* Function for Chart: '<S1>/Chart' */
static void p2_st24(const real_T X_ROOMTEMPREAD[4])
{
  /* Constant: '<Root>/DIF_MATRIX1' incorporates:
   *  Constant: '<Root>/GET_MATRIX'
   */
  if ((X_ROOMTEMPREAD[3] - X_ROOMTEMPREAD[0] >= p2_P.DIF_MATRIX1_Value[0]) &&
      (X_ROOMTEMPREAD[0] <= p2_P.GET_MATRIX_Value[0])) {
    p2_DW.is_s4_i = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s2_n = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st12;
    p2_B.h3 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 2.0;
    p2_DW.is_s1_k = p2_IN_s1_on1;
    p2_B.h1 = 1.0;
    p2_DW.is_s2 = p2_IN_s2_on;
    p2_B.h2 = 1.0;
  } else if ((X_ROOMTEMPREAD[1] - X_ROOMTEMPREAD[3] >= p2_P.DIF_MATRIX1_Value[3])
             && (X_ROOMTEMPREAD[3] <= p2_P.GET_MATRIX_Value[3])) {
    p2_DW.is_s4_i = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s2_n = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st14;
    p2_B.h2 = 0.0;
    p2_B.h3 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 4.0;
    p2_DW.is_s1_o = p2_IN_s1_on;
    p2_B.h1 = 1.0;
    p2_DW.is_s4 = p2_IN_s4_on;
    p2_B.h4 = 1.0;
  } else if ((X_ROOMTEMPREAD[3] - X_ROOMTEMPREAD[2] >= p2_P.DIF_MATRIX1_Value[2])
             && (X_ROOMTEMPREAD[2] <= p2_P.GET_MATRIX_Value[2])) {
    p2_DW.is_s4_i = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s2_n = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st23;
    p2_B.h1 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 2.0;
    p2_B.Room[1] = 3.0;
    p2_DW.is_s2_j = p2_IN_s2_on;
    p2_B.h2 = 1.0;
    p2_DW.is_s3_i = p2_IN_s3_on;
    p2_B.h3 = 1.0;
  } else if ((X_ROOMTEMPREAD[1] - X_ROOMTEMPREAD[2] >= p2_P.DIF_MATRIX1_Value[2])
             && (X_ROOMTEMPREAD[2] <= p2_P.GET_MATRIX_Value[2])) {
    p2_DW.is_s4_i = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s2_n = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st34;
    p2_B.h1 = 0.0;
    p2_B.h2 = 0.0;
    p2_B.Room[0] = 3.0;
    p2_B.Room[1] = 4.0;
    p2_DW.is_s3_k = p2_IN_s3_on;
    p2_B.h3 = 1.0;
    p2_DW.is_s4_c = p2_IN_s4_on;
    p2_B.h4 = 1.0;
  } else {
    if (p2_DW.is_s2_n == p2_IN_s2_off) {
      /* Constant: '<Root>/ON_MATRIX1' */
      if (X_ROOMTEMPREAD[1] <= p2_P.ON_MATRIX1_Value[1]) {
        p2_DW.is_s2_n = p2_IN_s2_on;
        p2_B.h2 = 1.0;
      }

      /* Constant: '<Root>/OFF_MATRIX' */
      /* case IN_s2_on: */
    } else if (X_ROOMTEMPREAD[1] >= p2_P.OFF_MATRIX_Value[1]) {
      p2_DW.is_s2_n = p2_IN_s2_off;
      p2_B.h2 = 0.0;
    }

    if (p2_DW.is_s4_i == p2_IN_s4_off) {
      /* Constant: '<Root>/ON_MATRIX1' */
      if (X_ROOMTEMPREAD[3] <= p2_P.ON_MATRIX1_Value[3]) {
        p2_DW.is_s4_i = p2_IN_s4_on;
        p2_B.h4 = 1.0;
      }

      /* Constant: '<Root>/OFF_MATRIX' */
      /* case IN_s4_on: */
    } else if (X_ROOMTEMPREAD[3] >= p2_P.OFF_MATRIX_Value[3]) {
      p2_DW.is_s4_i = p2_IN_s4_off;
      p2_B.h4 = 0.0;
    }
  }

  /* End of Constant: '<Root>/DIF_MATRIX1' */
}

/* Function for Chart: '<S1>/Chart' */
static void p2_st34(const real_T X_ROOMTEMPREAD[4])
{
  /* Constant: '<Root>/DIF_MATRIX1' incorporates:
   *  Constant: '<Root>/GET_MATRIX'
   */
  if ((X_ROOMTEMPREAD[3] - X_ROOMTEMPREAD[0] >= p2_P.DIF_MATRIX1_Value[0]) &&
      (X_ROOMTEMPREAD[0] <= p2_P.GET_MATRIX_Value[0])) {
    p2_DW.is_s4_c = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s3_k = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st13;
    p2_B.h2 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 3.0;
    p2_DW.is_s1 = p2_IN_s1_on;
    p2_B.h1 = 1.0;
    p2_DW.is_s3 = p2_IN_s3_on;
    p2_B.h3 = 1.0;
  } else if ((X_ROOMTEMPREAD[2] - X_ROOMTEMPREAD[0] >= p2_P.DIF_MATRIX1_Value[0])
             && (X_ROOMTEMPREAD[0] <= p2_P.GET_MATRIX_Value[0])) {
    p2_DW.is_s4_c = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s3_k = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st14;
    p2_B.h2 = 0.0;
    p2_B.h3 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 4.0;
    p2_DW.is_s1_o = p2_IN_s1_on;
    p2_B.h1 = 1.0;
    p2_DW.is_s4 = p2_IN_s4_on;
    p2_B.h4 = 1.0;
  } else if ((X_ROOMTEMPREAD[3] - X_ROOMTEMPREAD[1] >= p2_P.DIF_MATRIX1_Value[1])
             && (X_ROOMTEMPREAD[1] <= p2_P.GET_MATRIX_Value[1])) {
    p2_DW.is_s4_c = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s3_k = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st23;
    p2_B.h1 = 0.0;
    p2_B.h4 = 0.0;
    p2_B.Room[0] = 2.0;
    p2_B.Room[1] = 3.0;
    p2_DW.is_s2_j = p2_IN_s2_on;
    p2_B.h2 = 1.0;
    p2_DW.is_s3_i = p2_IN_s3_on;
    p2_B.h3 = 1.0;
  } else if ((X_ROOMTEMPREAD[2] - X_ROOMTEMPREAD[1] >= p2_P.DIF_MATRIX1_Value[1])
             && (X_ROOMTEMPREAD[1] <= p2_P.GET_MATRIX_Value[1])) {
    p2_DW.is_s4_c = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_s3_k = p2_IN_NO_ACTIVE_CHILD;
    p2_DW.is_c1_p2 = p2_IN_st24;
    p2_B.h1 = 0.0;
    p2_B.h3 = 0.0;
    p2_B.Room[0] = 1.0;
    p2_B.Room[1] = 3.0;
    p2_DW.is_s2_n = p2_IN_s2_on;
    p2_B.h2 = 1.0;
    p2_DW.is_s4_i = p2_IN_s4_on;
    p2_B.h4 = 1.0;
  } else {
    if (p2_DW.is_s3_k == p2_IN_s3_off) {
      /* Constant: '<Root>/ON_MATRIX1' */
      if (X_ROOMTEMPREAD[2] <= p2_P.ON_MATRIX1_Value[2]) {
        p2_DW.is_s3_k = p2_IN_s3_on;
        p2_B.h3 = 1.0;
      }

      /* Constant: '<Root>/OFF_MATRIX' */
      /* case IN_s3_on: */
    } else if (X_ROOMTEMPREAD[2] >= p2_P.OFF_MATRIX_Value[2]) {
      p2_DW.is_s3_k = p2_IN_s3_off;
      p2_B.h3 = 0.0;
    }

    if (p2_DW.is_s4_c == p2_IN_s4_off) {
      /* Constant: '<Root>/ON_MATRIX1' */
      if (X_ROOMTEMPREAD[3] <= p2_P.ON_MATRIX1_Value[3]) {
        p2_DW.is_s4_c = p2_IN_s4_on;
        p2_B.h4 = 1.0;
      }

      /* Constant: '<Root>/OFF_MATRIX' */
      /* case IN_s4_on: */
    } else if (X_ROOMTEMPREAD[3] >= p2_P.OFF_MATRIX_Value[3]) {
      p2_DW.is_s4_c = p2_IN_s4_off;
      p2_B.h4 = 0.0;
    }
  }

  /* End of Constant: '<Root>/DIF_MATRIX1' */
}

/* Model step function */
void p2_step(void)
{
  if (rtmIsMajorTimeStep(p2_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&p2_M->solverInfo,((p2_M->Timing.clockTick0+1)*
      p2_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(p2_M)) {
    p2_M->Timing.t[0] = rtsiGetT(&p2_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(p2_M)) {
    /* Constant: '<Root>/X0_MATRIX' */
    p2_B.X0_MATRIX[0] = p2_P.X0_MATRIX_Value[0];
    p2_B.X0_MATRIX[1] = p2_P.X0_MATRIX_Value[1];
    p2_B.X0_MATRIX[2] = p2_P.X0_MATRIX_Value[2];
    p2_B.X0_MATRIX[3] = p2_P.X0_MATRIX_Value[3];
  }

  /* Integrator: '<S2>/Integrator' */
  if (p2_DW.Integrator_IWORK != 0) {
    p2_X.Integrator_CSTATE[0] = p2_B.X0_MATRIX[0];
    p2_X.Integrator_CSTATE[1] = p2_B.X0_MATRIX[1];
    p2_X.Integrator_CSTATE[2] = p2_B.X0_MATRIX[2];
    p2_X.Integrator_CSTATE[3] = p2_B.X0_MATRIX[3];
  }

  if (rtmIsMajorTimeStep(p2_M)) {
    /* Chart: '<S1>/Chart' incorporates:
     *  Constant: '<Root>/DIF_MATRIX1'
     *  Constant: '<Root>/GET_MATRIX'
     *  Constant: '<Root>/OFF_MATRIX'
     *  Constant: '<Root>/ON_MATRIX1'
     *  Integrator: '<S2>/Integrator'
     */
    if (p2_DW.is_active_c1_p2 == 0U) {
      p2_DW.is_active_c1_p2 = 1U;
      p2_DW.is_c1_p2 = p2_IN_start;
      p2_B.h1 = 0.0;
      p2_B.h4 = 0.0;
      p2_B.h2 = 1.0;
      p2_B.h3 = 1.0;
    } else {
      switch (p2_DW.is_c1_p2) {
       case p2_IN_st12:
        if ((p2_X.Integrator_CSTATE[1] - p2_X.Integrator_CSTATE[2] >=
             p2_P.DIF_MATRIX1_Value[2]) && (p2_X.Integrator_CSTATE[2] <=
             p2_P.GET_MATRIX_Value[2])) {
          p2_DW.is_s2 = p2_IN_NO_ACTIVE_CHILD;
          p2_DW.is_s1_k = p2_IN_NO_ACTIVE_CHILD;
          p2_DW.is_c1_p2 = p2_IN_st13;
          p2_B.h2 = 0.0;
          p2_B.h4 = 0.0;
          p2_B.Room[0] = 1.0;
          p2_B.Room[1] = 3.0;
          p2_DW.is_s1 = p2_IN_s1_on;
          p2_B.h1 = 1.0;
          p2_DW.is_s3 = p2_IN_s3_on;
          p2_B.h3 = 1.0;
        } else if ((p2_X.Integrator_CSTATE[0] - p2_X.Integrator_CSTATE[2] >=
                    p2_P.DIF_MATRIX1_Value[2]) && (p2_X.Integrator_CSTATE[2] <=
                    p2_P.GET_MATRIX_Value[2])) {
          p2_DW.is_s2 = p2_IN_NO_ACTIVE_CHILD;
          p2_DW.is_s1_k = p2_IN_NO_ACTIVE_CHILD;
          p2_DW.is_c1_p2 = p2_IN_st23;
          p2_B.h1 = 0.0;
          p2_B.h4 = 0.0;
          p2_B.Room[0] = 2.0;
          p2_B.Room[1] = 3.0;
          p2_DW.is_s2_j = p2_IN_s2_on;
          p2_B.h2 = 1.0;
          p2_DW.is_s3_i = p2_IN_s3_on;
          p2_B.h3 = 1.0;
        } else if ((p2_X.Integrator_CSTATE[1] - p2_X.Integrator_CSTATE[3] >=
                    p2_P.DIF_MATRIX1_Value[3]) && (p2_X.Integrator_CSTATE[3] <=
                    p2_P.GET_MATRIX_Value[3])) {
          p2_DW.is_s2 = p2_IN_NO_ACTIVE_CHILD;
          p2_DW.is_s1_k = p2_IN_NO_ACTIVE_CHILD;
          p2_DW.is_c1_p2 = p2_IN_st14;
          p2_B.h2 = 0.0;
          p2_B.h3 = 0.0;
          p2_B.Room[0] = 1.0;
          p2_B.Room[1] = 4.0;
          p2_DW.is_s1_o = p2_IN_s1_on;
          p2_B.h1 = 1.0;
          p2_DW.is_s4 = p2_IN_s4_on;
          p2_B.h4 = 1.0;
        } else if ((p2_X.Integrator_CSTATE[0] - p2_X.Integrator_CSTATE[3] >=
                    p2_P.DIF_MATRIX1_Value[3]) && (p2_X.Integrator_CSTATE[3] <=
                    p2_P.GET_MATRIX_Value[3])) {
          p2_DW.is_s2 = p2_IN_NO_ACTIVE_CHILD;
          p2_DW.is_s1_k = p2_IN_NO_ACTIVE_CHILD;
          p2_DW.is_c1_p2 = p2_IN_st24;
          p2_B.h1 = 0.0;
          p2_B.h3 = 0.0;
          p2_B.Room[0] = 1.0;
          p2_B.Room[1] = 3.0;
          p2_DW.is_s2_n = p2_IN_s2_on;
          p2_B.h2 = 1.0;
          p2_DW.is_s4_i = p2_IN_s4_on;
          p2_B.h4 = 1.0;
        } else {
          if (p2_DW.is_s1_k == p2_IN_s1_off) {
            if (p2_X.Integrator_CSTATE[0] <= p2_P.ON_MATRIX1_Value[0]) {
              p2_DW.is_s1_k = p2_IN_s1_on1;
              p2_B.h1 = 1.0;
            }

            /* case IN_s1_on1: */
          } else if (p2_X.Integrator_CSTATE[0] >= p2_P.OFF_MATRIX_Value[0]) {
            p2_DW.is_s1_k = p2_IN_s1_off;
            p2_B.h1 = 0.0;
          }

          if (p2_DW.is_s2 == p2_IN_s1_off1) {
            if (p2_X.Integrator_CSTATE[1] <= p2_P.ON_MATRIX1_Value[1]) {
              p2_DW.is_s2 = p2_IN_s2_on;
              p2_B.h2 = 1.0;
            }

            /* case IN_s2_on: */
          } else if (p2_X.Integrator_CSTATE[1] >= p2_P.OFF_MATRIX_Value[1]) {
            p2_DW.is_s2 = p2_IN_s1_off1;
            p2_B.h2 = 0.0;
          }
        }
        break;

       case p2_IN_st13:
        p2_st13(p2_X.Integrator_CSTATE);
        break;

       case p2_IN_st14:
        p2_st14(p2_X.Integrator_CSTATE);
        break;

       case p2_IN_st23:
        p2_st23(p2_X.Integrator_CSTATE);
        break;

       case p2_IN_st24:
        p2_st24(p2_X.Integrator_CSTATE);
        break;

       case p2_IN_st34:
        p2_st34(p2_X.Integrator_CSTATE);
        break;

       default:
        /* case IN_start: */
        p2_DW.is_c1_p2 = p2_IN_st23;
        p2_B.h1 = 0.0;
        p2_B.h4 = 0.0;
        p2_B.Room[0] = 2.0;
        p2_B.Room[1] = 3.0;
        p2_DW.is_s2_j = p2_IN_s2_on;
        p2_B.h2 = 1.0;
        p2_DW.is_s3_i = p2_IN_s3_on;
        p2_B.h3 = 1.0;
        break;
      }
    }

    /* End of Chart: '<S1>/Chart' */

    /* Outport: '<Root>/H_OUTPUT' */
    p2_Y.H_OUTPUT[0] = p2_B.h1;
    p2_Y.H_OUTPUT[1] = p2_B.h2;
    p2_Y.H_OUTPUT[2] = p2_B.h3;
    p2_Y.H_OUTPUT[3] = p2_B.h4;

    /* Outport: '<Root>/HEATER1_OUTPUT' */
    p2_Y.HEATER1_OUTPUT = p2_B.Room[0];

    /* Outport: '<Root>/HEATER2_OUTPUT' */
    p2_Y.HEATER2_OUTPUT = p2_B.Room[1];
  }

  /* Outport: '<Root>/X_OUTPUT' incorporates:
   *  Integrator: '<S2>/Integrator'
   */
  p2_Y.X_OUTPUT[0] = p2_X.Integrator_CSTATE[0];
  p2_Y.X_OUTPUT[1] = p2_X.Integrator_CSTATE[1];
  p2_Y.X_OUTPUT[2] = p2_X.Integrator_CSTATE[2];
  p2_Y.X_OUTPUT[3] = p2_X.Integrator_CSTATE[3];
  if (rtmIsMajorTimeStep(p2_M)) {
    /* Chart: '<S2>/SIGMA' incorporates:
     *  Constant: '<Root>/A_MATRIX'
     *  Integrator: '<S2>/Integrator'
     */
    if (p2_DW.is_active_c3_p2 == 0U) {
      p2_DW.is_active_c3_p2 = 1U;
      p2_B.s[0] = 0.0;
      p2_B.s[1] = 0.0;
      p2_B.s[2] = 0.0;
      p2_B.s[3] = 0.0;
    } else {
      p2_B.s[0] = ((p2_X.Integrator_CSTATE[1] - p2_X.Integrator_CSTATE[0]) *
                   p2_P.A_MATRIX_Value[4] + (p2_X.Integrator_CSTATE[2] -
        p2_X.Integrator_CSTATE[0]) * p2_P.A_MATRIX_Value[8]) +
        (p2_X.Integrator_CSTATE[3] - p2_X.Integrator_CSTATE[0]) *
        p2_P.A_MATRIX_Value[12];
      p2_B.s[1] = ((p2_X.Integrator_CSTATE[0] - p2_X.Integrator_CSTATE[1]) *
                   p2_P.A_MATRIX_Value[1] + (p2_X.Integrator_CSTATE[2] -
        p2_X.Integrator_CSTATE[1]) * p2_P.A_MATRIX_Value[9]) +
        (p2_X.Integrator_CSTATE[3] - p2_X.Integrator_CSTATE[1]) *
        p2_P.A_MATRIX_Value[13];
      p2_B.s[2] = ((p2_X.Integrator_CSTATE[0] - p2_X.Integrator_CSTATE[2]) *
                   p2_P.A_MATRIX_Value[2] + (p2_X.Integrator_CSTATE[1] -
        p2_X.Integrator_CSTATE[2]) * p2_P.A_MATRIX_Value[6]) +
        (p2_X.Integrator_CSTATE[3] - p2_X.Integrator_CSTATE[2]) *
        p2_P.A_MATRIX_Value[14];
      p2_B.s[3] = ((p2_X.Integrator_CSTATE[0] - p2_X.Integrator_CSTATE[3]) *
                   p2_P.A_MATRIX_Value[3] + (p2_X.Integrator_CSTATE[1] -
        p2_X.Integrator_CSTATE[3]) * p2_P.A_MATRIX_Value[7]) +
        (p2_X.Integrator_CSTATE[2] - p2_X.Integrator_CSTATE[3]) *
        p2_P.A_MATRIX_Value[11];
    }

    /* End of Chart: '<S2>/SIGMA' */

    /* Sum: '<S2>/Add' incorporates:
     *  Constant: '<Root>/C_MATRIX'
     *  Product: '<S2>/Product'
     */
    p2_B.Add[0] = p2_P.C_MATRIX_Value[0] * p2_B.h1 + p2_B.s[0];
    p2_B.Add[1] = p2_P.C_MATRIX_Value[1] * p2_B.h2 + p2_B.s[1];
    p2_B.Add[2] = p2_P.C_MATRIX_Value[2] * p2_B.h3 + p2_B.s[2];
    p2_B.Add[3] = p2_P.C_MATRIX_Value[3] * p2_B.h4 + p2_B.s[3];
  }

  /* Sum: '<S2>/Add1' incorporates:
   *  Constant: '<Root>/B_MATRIX'
   *  Constant: '<Root>/U_TEMP'
   *  Integrator: '<S2>/Integrator'
   *  Product: '<S2>/Product1'
   *  Sum: '<S2>/Add'
   *  Sum: '<S2>/Subtract'
   */
  p2_B.Add1[0] = (p2_P.U_TEMP_Value - p2_X.Integrator_CSTATE[0]) *
    p2_P.B_MATRIX_Value[0] + p2_B.Add[0];
  p2_B.Add1[1] = (p2_P.U_TEMP_Value - p2_X.Integrator_CSTATE[1]) *
    p2_P.B_MATRIX_Value[1] + p2_B.Add[1];
  p2_B.Add1[2] = (p2_P.U_TEMP_Value - p2_X.Integrator_CSTATE[2]) *
    p2_P.B_MATRIX_Value[2] + p2_B.Add[2];
  p2_B.Add1[3] = (p2_P.U_TEMP_Value - p2_X.Integrator_CSTATE[3]) *
    p2_P.B_MATRIX_Value[3] + p2_B.Add[3];
  if (rtmIsMajorTimeStep(p2_M)) {
    /* Update for Integrator: '<S2>/Integrator' */
    p2_DW.Integrator_IWORK = 0;
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(p2_M)) {
    rt_ertODEUpdateContinuousStates(&p2_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++p2_M->Timing.clockTick0;
    p2_M->Timing.t[0] = rtsiGetSolverStopTime(&p2_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.2s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.2, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      p2_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void p2_derivatives(void)
{
  XDot_p2_T *_rtXdot;
  _rtXdot = ((XDot_p2_T *) p2_M->derivs);

  /* Derivatives for Integrator: '<S2>/Integrator' incorporates:
   *  Sum: '<S2>/Add1'
   */
  _rtXdot->Integrator_CSTATE[0] = p2_B.Add1[0];
  _rtXdot->Integrator_CSTATE[1] = p2_B.Add1[1];
  _rtXdot->Integrator_CSTATE[2] = p2_B.Add1[2];
  _rtXdot->Integrator_CSTATE[3] = p2_B.Add1[3];
}

/* Model initialize function */
void p2_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&p2_M->solverInfo, &p2_M->Timing.simTimeStep);
    rtsiSetTPtr(&p2_M->solverInfo, &rtmGetTPtr(p2_M));
    rtsiSetStepSizePtr(&p2_M->solverInfo, &p2_M->Timing.stepSize0);
    rtsiSetdXPtr(&p2_M->solverInfo, &p2_M->derivs);
    rtsiSetContStatesPtr(&p2_M->solverInfo, (real_T **) &p2_M->contStates);
    rtsiSetNumContStatesPtr(&p2_M->solverInfo, &p2_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&p2_M->solverInfo,
      &p2_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&p2_M->solverInfo,
      &p2_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&p2_M->solverInfo,
      &p2_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&p2_M->solverInfo, (&rtmGetErrorStatus(p2_M)));
    rtsiSetRTModelPtr(&p2_M->solverInfo, p2_M);
  }

  rtsiSetSimTimeStep(&p2_M->solverInfo, MAJOR_TIME_STEP);
  p2_M->intgData.y = p2_M->odeY;
  p2_M->intgData.f[0] = p2_M->odeF[0];
  p2_M->intgData.f[1] = p2_M->odeF[1];
  p2_M->intgData.f[2] = p2_M->odeF[2];
  p2_M->contStates = ((X_p2_T *) &p2_X);
  rtsiSetSolverData(&p2_M->solverInfo, (void *)&p2_M->intgData);
  rtsiSetSolverName(&p2_M->solverInfo,"ode3");
  rtmSetTPtr(p2_M, &p2_M->Timing.tArray[0]);
  p2_M->Timing.stepSize0 = 0.2;
  rtmSetFirstInitCond(p2_M, 1);

  /* Start for Constant: '<Root>/X0_MATRIX' */
  p2_B.X0_MATRIX[0] = p2_P.X0_MATRIX_Value[0];
  p2_B.X0_MATRIX[1] = p2_P.X0_MATRIX_Value[1];
  p2_B.X0_MATRIX[2] = p2_P.X0_MATRIX_Value[2];
  p2_B.X0_MATRIX[3] = p2_P.X0_MATRIX_Value[3];

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  if (rtmIsFirstInitCond(p2_M)) {
    p2_X.Integrator_CSTATE[0] = 16.5;
    p2_X.Integrator_CSTATE[1] = 16.5;
    p2_X.Integrator_CSTATE[2] = 16.5;
    p2_X.Integrator_CSTATE[3] = 16.5;
  }

  p2_DW.Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S2>/Integrator' */

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(p2_M)) {
    rtmSetFirstInitCond(p2_M, 0);
  }
}

/* Model terminate function */
void p2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
