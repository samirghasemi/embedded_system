/*
 * File: p2_1.c
 *
 * Code generated for Simulink model 'p2_1'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 25 13:28:05 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "p2_1.h"
#include "p2_1_private.h"
#include "p2_1_dt.h"

/* Named constants for Chart: '<S1>/Chart' */
#define p2_1_IN_s1_off                 (1UL)
#define p2_1_IN_s1_off1                (1UL)
#define p2_1_IN_s1_on                  (2UL)
#define p2_1_IN_s1_on1                 (2UL)
#define p2_1_IN_s2_off                 (1UL)
#define p2_1_IN_s2_on                  (2UL)
#define p2_1_IN_s3_off                 (1UL)
#define p2_1_IN_s3_on                  (2UL)
#define p2_1_IN_s4_off                 (1UL)
#define p2_1_IN_s4_on                  (2UL)
#define p2_1_IN_st12                   (1UL)
#define p2_1_IN_st13                   (2UL)
#define p2_1_IN_st14                   (3UL)
#define p2_1_IN_st23                   (4UL)
#define p2_1_IN_st24                   (5UL)
#define p2_1_IN_st34                   (6UL)
#define p2_1_IN_start                  (7UL)

/* Named constants for Chart: '<S2>/SIGMA' */
#define p2_1_IN_s3                     (1UL)

/* Block signals (default storage) */
B_p2_1_T p2_1_B;

/* Continuous states */
X_p2_1_T p2_1_X;

/* Block states (default storage) */
DW_p2_1_T p2_1_DW;

/* Real-time model */
static RT_MODEL_p2_1_T p2_1_M_;
RT_MODEL_p2_1_T *const p2_1_M = &p2_1_M_;

/* Forward declaration for local functions */
static void p2_1_st13(void);
static void p2_1_st14(void);
static void p2_1_st23(void);
static void p2_1_st24(void);
static void p2_1_st34(void);

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
  p2_1_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  p2_1_step();
  p2_1_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  p2_1_step();
  p2_1_derivatives();

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
static void p2_1_st13(void)
{
  if ((p2_1_B.X_ROOMTEMPREAD[2] - p2_1_B.X_ROOMTEMPREAD[1] >= p2_1_B.DIF_MATRIX
       [1]) && (p2_1_B.X_ROOMTEMPREAD[1] <= p2_1_B.GET_MATRIX[1])) {
    p2_1_DW.is_s3 = 0UL;
    p2_1_DW.is_active_s3 = 0U;
    p2_1_DW.is_s1 = 0UL;
    p2_1_DW.is_active_s1 = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st12;
    p2_1_B.h3 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 2.0;
    p2_1_DW.is_active_s1_e = 1U;
    p2_1_DW.is_s1_k = p2_1_IN_s1_on1;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s2 = 1U;
    p2_1_DW.is_s2 = p2_1_IN_s2_on;
    p2_1_B.h2 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[2] - p2_1_B.X_ROOMTEMPREAD[3] >=
              p2_1_B.DIF_MATRIX[3]) && (p2_1_B.X_ROOMTEMPREAD[3] <=
              p2_1_B.GET_MATRIX[3])) {
    p2_1_DW.is_s3 = 0UL;
    p2_1_DW.is_active_s3 = 0U;
    p2_1_DW.is_s1 = 0UL;
    p2_1_DW.is_active_s1 = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st14;
    p2_1_B.h2 = 0.0;
    p2_1_B.h3 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 4.0;
    p2_1_DW.is_active_s1_j = 1U;
    p2_1_DW.is_s1_o = p2_1_IN_s1_on;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s4 = 1U;
    p2_1_DW.is_s4 = p2_1_IN_s4_on;
    p2_1_B.h4 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[0] - p2_1_B.X_ROOMTEMPREAD[1] >=
              p2_1_B.DIF_MATRIX[1]) && (p2_1_B.X_ROOMTEMPREAD[1] <=
              p2_1_B.GET_MATRIX[1])) {
    p2_1_DW.is_s3 = 0UL;
    p2_1_DW.is_active_s3 = 0U;
    p2_1_DW.is_s1 = 0UL;
    p2_1_DW.is_active_s1 = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st23;
    p2_1_B.h1 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 2.0;
    p2_1_B.Room[1] = 3.0;
    p2_1_DW.is_active_s2_go = 1U;
    p2_1_DW.is_s2_a = p2_1_IN_s2_on;
    p2_1_B.h2 = 1.0;
    p2_1_DW.is_active_s3_o = 1U;
    p2_1_DW.is_s3_f = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[0] - p2_1_B.X_ROOMTEMPREAD[3] >=
              p2_1_B.DIF_MATRIX[3]) && (p2_1_B.X_ROOMTEMPREAD[3] <=
              p2_1_B.GET_MATRIX[3])) {
    p2_1_DW.is_s3 = 0UL;
    p2_1_DW.is_active_s3 = 0U;
    p2_1_DW.is_s1 = 0UL;
    p2_1_DW.is_active_s1 = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st34;
    p2_1_B.h1 = 0.0;
    p2_1_B.h2 = 0.0;
    p2_1_B.Room[0] = 3.0;
    p2_1_B.Room[1] = 4.0;
    p2_1_DW.is_active_s3_n = 1U;
    p2_1_DW.is_s3_m = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
    p2_1_DW.is_active_s4_d = 1U;
    p2_1_DW.is_s4_h = p2_1_IN_s4_on;
    p2_1_B.h4 = 1.0;
  } else {
    if (p2_1_DW.is_s1 == p2_1_IN_s1_off) {
      if (p2_1_B.X_ROOMTEMPREAD[0] <= p2_1_B.ON_MATRIX[0]) {
        p2_1_DW.is_s1 = p2_1_IN_s1_on;
        p2_1_B.h1 = 1.0;
      }

      /* case IN_s1_on: */
    } else if (p2_1_B.X_ROOMTEMPREAD[0] >= p2_1_B.OFF_MATRIX[0]) {
      p2_1_DW.is_s1 = p2_1_IN_s1_off;
      p2_1_B.h1 = 0.0;
    }

    if (p2_1_DW.is_s3 == p2_1_IN_s3_off) {
      if (p2_1_B.X_ROOMTEMPREAD[2] <= p2_1_B.ON_MATRIX[2]) {
        p2_1_DW.is_s3 = p2_1_IN_s3_on;
        p2_1_B.h3 = 1.0;
      }

      /* case IN_s3_on: */
    } else if (p2_1_B.X_ROOMTEMPREAD[2] >= p2_1_B.OFF_MATRIX[2]) {
      p2_1_DW.is_s3 = p2_1_IN_s3_off;
      p2_1_B.h3 = 0.0;
    }
  }
}

/* Function for Chart: '<S1>/Chart' */
static void p2_1_st14(void)
{
  real_T tmp;
  if ((p2_1_B.X_ROOMTEMPREAD[3] - p2_1_B.X_ROOMTEMPREAD[2] >= p2_1_B.DIF_MATRIX
       [2]) && (p2_1_B.X_ROOMTEMPREAD[2] <= p2_1_B.GET_MATRIX[2])) {
    p2_1_DW.is_s4 = 0UL;
    p2_1_DW.is_active_s4 = 0U;
    p2_1_DW.is_s1_o = 0UL;
    p2_1_DW.is_active_s1_j = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st13;
    p2_1_B.h2 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 3.0;
    p2_1_DW.is_active_s1 = 1U;
    p2_1_DW.is_s1 = p2_1_IN_s1_on;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s3 = 1U;
    p2_1_DW.is_s3 = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
  } else {
    tmp = p2_1_B.X_ROOMTEMPREAD[3] - p2_1_B.X_ROOMTEMPREAD[1];
    if ((tmp >= p2_1_B.DIF_MATRIX[1]) && (p2_1_B.X_ROOMTEMPREAD[1] <=
         p2_1_B.GET_MATRIX[1])) {
      p2_1_DW.is_s4 = 0UL;
      p2_1_DW.is_active_s4 = 0U;
      p2_1_DW.is_s1_o = 0UL;
      p2_1_DW.is_active_s1_j = 0U;
      p2_1_DW.is_c1_p2_1 = p2_1_IN_st12;
      p2_1_B.h3 = 0.0;
      p2_1_B.h4 = 0.0;
      p2_1_B.Room[0] = 1.0;
      p2_1_B.Room[1] = 2.0;
      p2_1_DW.is_active_s1_e = 1U;
      p2_1_DW.is_s1_k = p2_1_IN_s1_on1;
      p2_1_B.h1 = 1.0;
      p2_1_DW.is_active_s2 = 1U;
      p2_1_DW.is_s2 = p2_1_IN_s2_on;
      p2_1_B.h2 = 1.0;
    } else if ((tmp >= p2_1_B.DIF_MATRIX[1]) && (p2_1_B.X_ROOMTEMPREAD[1] <=
                p2_1_B.GET_MATRIX[1])) {
      p2_1_DW.is_s4 = 0UL;
      p2_1_DW.is_active_s4 = 0U;
      p2_1_DW.is_s1_o = 0UL;
      p2_1_DW.is_active_s1_j = 0U;
      p2_1_DW.is_c1_p2_1 = p2_1_IN_st24;
      p2_1_B.h1 = 0.0;
      p2_1_B.h3 = 0.0;
      p2_1_B.Room[0] = 1.0;
      p2_1_B.Room[1] = 3.0;
      p2_1_DW.is_active_s2_g = 1U;
      p2_1_DW.is_s2_d = p2_1_IN_s2_on;
      p2_1_B.h2 = 1.0;
      p2_1_DW.is_active_s4_k = 1U;
      p2_1_DW.is_s4_o = p2_1_IN_s4_on;
      p2_1_B.h4 = 1.0;
    } else if ((p2_1_B.X_ROOMTEMPREAD[0] - p2_1_B.X_ROOMTEMPREAD[2] >=
                p2_1_B.DIF_MATRIX[2]) && (p2_1_B.X_ROOMTEMPREAD[2] <=
                p2_1_B.GET_MATRIX[2])) {
      p2_1_DW.is_s4 = 0UL;
      p2_1_DW.is_active_s4 = 0U;
      p2_1_DW.is_s1_o = 0UL;
      p2_1_DW.is_active_s1_j = 0U;
      p2_1_DW.is_c1_p2_1 = p2_1_IN_st34;
      p2_1_B.h1 = 0.0;
      p2_1_B.h2 = 0.0;
      p2_1_B.Room[0] = 3.0;
      p2_1_B.Room[1] = 4.0;
      p2_1_DW.is_active_s3_n = 1U;
      p2_1_DW.is_s3_m = p2_1_IN_s3_on;
      p2_1_B.h3 = 1.0;
      p2_1_DW.is_active_s4_d = 1U;
      p2_1_DW.is_s4_h = p2_1_IN_s4_on;
      p2_1_B.h4 = 1.0;
    } else {
      if (p2_1_DW.is_s1_o == p2_1_IN_s1_off) {
        if (p2_1_B.X_ROOMTEMPREAD[0] <= p2_1_B.ON_MATRIX[0]) {
          p2_1_DW.is_s1_o = p2_1_IN_s1_on;
          p2_1_B.h1 = 1.0;
        }

        /* case IN_s1_on: */
      } else if (p2_1_B.X_ROOMTEMPREAD[0] >= p2_1_B.OFF_MATRIX[0]) {
        p2_1_DW.is_s1_o = p2_1_IN_s1_off;
        p2_1_B.h1 = 0.0;
      }

      if (p2_1_DW.is_s4 == p2_1_IN_s4_off) {
        if (p2_1_B.X_ROOMTEMPREAD[3] <= p2_1_B.ON_MATRIX[3]) {
          p2_1_DW.is_s4 = p2_1_IN_s4_on;
          p2_1_B.h4 = 1.0;
        }

        /* case IN_s4_on: */
      } else if (p2_1_B.X_ROOMTEMPREAD[3] >= p2_1_B.OFF_MATRIX[3]) {
        p2_1_DW.is_s4 = p2_1_IN_s4_off;
        p2_1_B.h4 = 0.0;
      }
    }
  }
}

/* Function for Chart: '<S1>/Chart' */
static void p2_1_st23(void)
{
  if ((p2_1_B.X_ROOMTEMPREAD[2] - p2_1_B.X_ROOMTEMPREAD[0] >= p2_1_B.DIF_MATRIX
       [0]) && (p2_1_B.X_ROOMTEMPREAD[0] <= p2_1_B.GET_MATRIX[0])) {
    p2_1_DW.is_s3_f = 0UL;
    p2_1_DW.is_active_s3_o = 0U;
    p2_1_DW.is_s2_a = 0UL;
    p2_1_DW.is_active_s2_go = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st12;
    p2_1_B.h3 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 2.0;
    p2_1_DW.is_active_s1_e = 1U;
    p2_1_DW.is_s1_k = p2_1_IN_s1_on1;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s2 = 1U;
    p2_1_DW.is_s2 = p2_1_IN_s2_on;
    p2_1_B.h2 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[1] - p2_1_B.X_ROOMTEMPREAD[0] >=
              p2_1_B.DIF_MATRIX[0]) && (p2_1_B.X_ROOMTEMPREAD[0] <=
              p2_1_B.GET_MATRIX[0])) {
    p2_1_DW.is_s3_f = 0UL;
    p2_1_DW.is_active_s3_o = 0U;
    p2_1_DW.is_s2_a = 0UL;
    p2_1_DW.is_active_s2_go = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st13;
    p2_1_B.h2 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 3.0;
    p2_1_DW.is_active_s1 = 1U;
    p2_1_DW.is_s1 = p2_1_IN_s1_on;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s3 = 1U;
    p2_1_DW.is_s3 = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[2] - p2_1_B.X_ROOMTEMPREAD[3] >=
              p2_1_B.DIF_MATRIX[3]) && (p2_1_B.X_ROOMTEMPREAD[3] <=
              p2_1_B.GET_MATRIX[3])) {
    p2_1_DW.is_s3_f = 0UL;
    p2_1_DW.is_active_s3_o = 0U;
    p2_1_DW.is_s2_a = 0UL;
    p2_1_DW.is_active_s2_go = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st24;
    p2_1_B.h1 = 0.0;
    p2_1_B.h3 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 3.0;
    p2_1_DW.is_active_s2_g = 1U;
    p2_1_DW.is_s2_d = p2_1_IN_s2_on;
    p2_1_B.h2 = 1.0;
    p2_1_DW.is_active_s4_k = 1U;
    p2_1_DW.is_s4_o = p2_1_IN_s4_on;
    p2_1_B.h4 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[1] - p2_1_B.X_ROOMTEMPREAD[3] >=
              p2_1_B.DIF_MATRIX[3]) && (p2_1_B.X_ROOMTEMPREAD[3] <=
              p2_1_B.GET_MATRIX[3])) {
    p2_1_DW.is_s3_f = 0UL;
    p2_1_DW.is_active_s3_o = 0U;
    p2_1_DW.is_s2_a = 0UL;
    p2_1_DW.is_active_s2_go = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st34;
    p2_1_B.h1 = 0.0;
    p2_1_B.h2 = 0.0;
    p2_1_B.Room[0] = 3.0;
    p2_1_B.Room[1] = 4.0;
    p2_1_DW.is_active_s3_n = 1U;
    p2_1_DW.is_s3_m = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
    p2_1_DW.is_active_s4_d = 1U;
    p2_1_DW.is_s4_h = p2_1_IN_s4_on;
    p2_1_B.h4 = 1.0;
  } else {
    if (p2_1_DW.is_s2_a == p2_1_IN_s1_off) {
      if (p2_1_B.X_ROOMTEMPREAD[1] <= p2_1_B.ON_MATRIX[1]) {
        p2_1_DW.is_s2_a = p2_1_IN_s2_on;
        p2_1_B.h2 = 1.0;
      }

      /* case IN_s2_on: */
    } else if (p2_1_B.X_ROOMTEMPREAD[1] >= p2_1_B.OFF_MATRIX[1]) {
      p2_1_DW.is_s2_a = p2_1_IN_s1_off;
      p2_1_B.h2 = 0.0;
    }

    if (p2_1_DW.is_s3_f == p2_1_IN_s3_off) {
      if (p2_1_B.X_ROOMTEMPREAD[2] <= p2_1_B.ON_MATRIX[2]) {
        p2_1_DW.is_s3_f = p2_1_IN_s3_on;
        p2_1_B.h3 = 1.0;
      }

      /* case IN_s3_on: */
    } else if (p2_1_B.X_ROOMTEMPREAD[2] >= p2_1_B.OFF_MATRIX[2]) {
      p2_1_DW.is_s3_f = p2_1_IN_s3_off;
      p2_1_B.h3 = 0.0;
    }
  }
}

/* Function for Chart: '<S1>/Chart' */
static void p2_1_st24(void)
{
  if ((p2_1_B.X_ROOMTEMPREAD[3] - p2_1_B.X_ROOMTEMPREAD[0] >= p2_1_B.DIF_MATRIX
       [0]) && (p2_1_B.X_ROOMTEMPREAD[0] <= p2_1_B.GET_MATRIX[0])) {
    p2_1_DW.is_s4_o = 0UL;
    p2_1_DW.is_active_s4_k = 0U;
    p2_1_DW.is_s2_d = 0UL;
    p2_1_DW.is_active_s2_g = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st12;
    p2_1_B.h3 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 2.0;
    p2_1_DW.is_active_s1_e = 1U;
    p2_1_DW.is_s1_k = p2_1_IN_s1_on1;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s2 = 1U;
    p2_1_DW.is_s2 = p2_1_IN_s2_on;
    p2_1_B.h2 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[1] - p2_1_B.X_ROOMTEMPREAD[3] >=
              p2_1_B.DIF_MATRIX[3]) && (p2_1_B.X_ROOMTEMPREAD[3] <=
              p2_1_B.GET_MATRIX[3])) {
    p2_1_DW.is_s4_o = 0UL;
    p2_1_DW.is_active_s4_k = 0U;
    p2_1_DW.is_s2_d = 0UL;
    p2_1_DW.is_active_s2_g = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st14;
    p2_1_B.h2 = 0.0;
    p2_1_B.h3 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 4.0;
    p2_1_DW.is_active_s1_j = 1U;
    p2_1_DW.is_s1_o = p2_1_IN_s1_on;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s4 = 1U;
    p2_1_DW.is_s4 = p2_1_IN_s4_on;
    p2_1_B.h4 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[3] - p2_1_B.X_ROOMTEMPREAD[2] >=
              p2_1_B.DIF_MATRIX[2]) && (p2_1_B.X_ROOMTEMPREAD[2] <=
              p2_1_B.GET_MATRIX[2])) {
    p2_1_DW.is_s4_o = 0UL;
    p2_1_DW.is_active_s4_k = 0U;
    p2_1_DW.is_s2_d = 0UL;
    p2_1_DW.is_active_s2_g = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st23;
    p2_1_B.h1 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 2.0;
    p2_1_B.Room[1] = 3.0;
    p2_1_DW.is_active_s2_go = 1U;
    p2_1_DW.is_s2_a = p2_1_IN_s2_on;
    p2_1_B.h2 = 1.0;
    p2_1_DW.is_active_s3_o = 1U;
    p2_1_DW.is_s3_f = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[1] - p2_1_B.X_ROOMTEMPREAD[2] >=
              p2_1_B.DIF_MATRIX[2]) && (p2_1_B.X_ROOMTEMPREAD[2] <=
              p2_1_B.GET_MATRIX[2])) {
    p2_1_DW.is_s4_o = 0UL;
    p2_1_DW.is_active_s4_k = 0U;
    p2_1_DW.is_s2_d = 0UL;
    p2_1_DW.is_active_s2_g = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st34;
    p2_1_B.h1 = 0.0;
    p2_1_B.h2 = 0.0;
    p2_1_B.Room[0] = 3.0;
    p2_1_B.Room[1] = 4.0;
    p2_1_DW.is_active_s3_n = 1U;
    p2_1_DW.is_s3_m = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
    p2_1_DW.is_active_s4_d = 1U;
    p2_1_DW.is_s4_h = p2_1_IN_s4_on;
    p2_1_B.h4 = 1.0;
  } else {
    if (p2_1_DW.is_s2_d == p2_1_IN_s2_off) {
      if (p2_1_B.X_ROOMTEMPREAD[1] <= p2_1_B.ON_MATRIX[1]) {
        p2_1_DW.is_s2_d = p2_1_IN_s2_on;
        p2_1_B.h2 = 1.0;
      }

      /* case IN_s2_on: */
    } else if (p2_1_B.X_ROOMTEMPREAD[1] >= p2_1_B.OFF_MATRIX[1]) {
      p2_1_DW.is_s2_d = p2_1_IN_s2_off;
      p2_1_B.h2 = 0.0;
    }

    if (p2_1_DW.is_s4_o == p2_1_IN_s4_off) {
      if (p2_1_B.X_ROOMTEMPREAD[3] <= p2_1_B.ON_MATRIX[3]) {
        p2_1_DW.is_s4_o = p2_1_IN_s4_on;
        p2_1_B.h4 = 1.0;
      }

      /* case IN_s4_on: */
    } else if (p2_1_B.X_ROOMTEMPREAD[3] >= p2_1_B.OFF_MATRIX[3]) {
      p2_1_DW.is_s4_o = p2_1_IN_s4_off;
      p2_1_B.h4 = 0.0;
    }
  }
}

/* Function for Chart: '<S1>/Chart' */
static void p2_1_st34(void)
{
  if ((p2_1_B.X_ROOMTEMPREAD[3] - p2_1_B.X_ROOMTEMPREAD[0] >= p2_1_B.DIF_MATRIX
       [0]) && (p2_1_B.X_ROOMTEMPREAD[0] <= p2_1_B.GET_MATRIX[0])) {
    p2_1_DW.is_s4_h = 0UL;
    p2_1_DW.is_active_s4_d = 0U;
    p2_1_DW.is_s3_m = 0UL;
    p2_1_DW.is_active_s3_n = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st13;
    p2_1_B.h2 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 3.0;
    p2_1_DW.is_active_s1 = 1U;
    p2_1_DW.is_s1 = p2_1_IN_s1_on;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s3 = 1U;
    p2_1_DW.is_s3 = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[2] - p2_1_B.X_ROOMTEMPREAD[0] >=
              p2_1_B.DIF_MATRIX[0]) && (p2_1_B.X_ROOMTEMPREAD[0] <=
              p2_1_B.GET_MATRIX[0])) {
    p2_1_DW.is_s4_h = 0UL;
    p2_1_DW.is_active_s4_d = 0U;
    p2_1_DW.is_s3_m = 0UL;
    p2_1_DW.is_active_s3_n = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st14;
    p2_1_B.h2 = 0.0;
    p2_1_B.h3 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 4.0;
    p2_1_DW.is_active_s1_j = 1U;
    p2_1_DW.is_s1_o = p2_1_IN_s1_on;
    p2_1_B.h1 = 1.0;
    p2_1_DW.is_active_s4 = 1U;
    p2_1_DW.is_s4 = p2_1_IN_s4_on;
    p2_1_B.h4 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[3] - p2_1_B.X_ROOMTEMPREAD[1] >=
              p2_1_B.DIF_MATRIX[1]) && (p2_1_B.X_ROOMTEMPREAD[1] <=
              p2_1_B.GET_MATRIX[1])) {
    p2_1_DW.is_s4_h = 0UL;
    p2_1_DW.is_active_s4_d = 0U;
    p2_1_DW.is_s3_m = 0UL;
    p2_1_DW.is_active_s3_n = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st23;
    p2_1_B.h1 = 0.0;
    p2_1_B.h4 = 0.0;
    p2_1_B.Room[0] = 2.0;
    p2_1_B.Room[1] = 3.0;
    p2_1_DW.is_active_s2_go = 1U;
    p2_1_DW.is_s2_a = p2_1_IN_s2_on;
    p2_1_B.h2 = 1.0;
    p2_1_DW.is_active_s3_o = 1U;
    p2_1_DW.is_s3_f = p2_1_IN_s3_on;
    p2_1_B.h3 = 1.0;
  } else if ((p2_1_B.X_ROOMTEMPREAD[2] - p2_1_B.X_ROOMTEMPREAD[1] >=
              p2_1_B.DIF_MATRIX[1]) && (p2_1_B.X_ROOMTEMPREAD[1] <=
              p2_1_B.GET_MATRIX[1])) {
    p2_1_DW.is_s4_h = 0UL;
    p2_1_DW.is_active_s4_d = 0U;
    p2_1_DW.is_s3_m = 0UL;
    p2_1_DW.is_active_s3_n = 0U;
    p2_1_DW.is_c1_p2_1 = p2_1_IN_st24;
    p2_1_B.h1 = 0.0;
    p2_1_B.h3 = 0.0;
    p2_1_B.Room[0] = 1.0;
    p2_1_B.Room[1] = 3.0;
    p2_1_DW.is_active_s2_g = 1U;
    p2_1_DW.is_s2_d = p2_1_IN_s2_on;
    p2_1_B.h2 = 1.0;
    p2_1_DW.is_active_s4_k = 1U;
    p2_1_DW.is_s4_o = p2_1_IN_s4_on;
    p2_1_B.h4 = 1.0;
  } else {
    if (p2_1_DW.is_s3_m == p2_1_IN_s3_off) {
      if (p2_1_B.X_ROOMTEMPREAD[2] <= p2_1_B.ON_MATRIX[2]) {
        p2_1_DW.is_s3_m = p2_1_IN_s3_on;
        p2_1_B.h3 = 1.0;
      }

      /* case IN_s3_on: */
    } else if (p2_1_B.X_ROOMTEMPREAD[2] >= p2_1_B.OFF_MATRIX[2]) {
      p2_1_DW.is_s3_m = p2_1_IN_s3_off;
      p2_1_B.h3 = 0.0;
    }

    if (p2_1_DW.is_s4_h == p2_1_IN_s4_off) {
      if (p2_1_B.X_ROOMTEMPREAD[3] <= p2_1_B.ON_MATRIX[3]) {
        p2_1_DW.is_s4_h = p2_1_IN_s4_on;
        p2_1_B.h4 = 1.0;
      }

      /* case IN_s4_on: */
    } else if (p2_1_B.X_ROOMTEMPREAD[3] >= p2_1_B.OFF_MATRIX[3]) {
      p2_1_DW.is_s4_h = p2_1_IN_s4_off;
      p2_1_B.h4 = 0.0;
    }
  }
}

/* Model step function */
void p2_1_step(void)
{
  if (rtmIsMajorTimeStep(p2_1_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&p2_1_M->solverInfo,((p2_1_M->Timing.clockTick0+1)*
      p2_1_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(p2_1_M)) {
    p2_1_M->Timing.t[0] = rtsiGetT(&p2_1_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(p2_1_M)) {
    /* Constant: '<Root>/X0_MATRIX' */
    p2_1_B.X0_MATRIX[0] = p2_1_P.X0_MATRIX_Value[0];
    p2_1_B.X0_MATRIX[1] = p2_1_P.X0_MATRIX_Value[1];
    p2_1_B.X0_MATRIX[2] = p2_1_P.X0_MATRIX_Value[2];
    p2_1_B.X0_MATRIX[3] = p2_1_P.X0_MATRIX_Value[3];

    /* Constant: '<Root>/ON_MATRIX' */
    p2_1_B.ON_MATRIX[0] = p2_1_P.ON_MATRIX_Value[0];

    /* Constant: '<Root>/OFF_MATRIX' */
    p2_1_B.OFF_MATRIX[0] = p2_1_P.OFF_MATRIX_Value[0];

    /* Constant: '<Root>/DIF_MATRIX' */
    p2_1_B.DIF_MATRIX[0] = p2_1_P.DIF_MATRIX_Value[0];

    /* Constant: '<Root>/GET_MATRIX' */
    p2_1_B.GET_MATRIX[0] = p2_1_P.GET_MATRIX_Value[0];

    /* Constant: '<Root>/ON_MATRIX' */
    p2_1_B.ON_MATRIX[1] = p2_1_P.ON_MATRIX_Value[1];

    /* Constant: '<Root>/OFF_MATRIX' */
    p2_1_B.OFF_MATRIX[1] = p2_1_P.OFF_MATRIX_Value[1];

    /* Constant: '<Root>/DIF_MATRIX' */
    p2_1_B.DIF_MATRIX[1] = p2_1_P.DIF_MATRIX_Value[1];

    /* Constant: '<Root>/GET_MATRIX' */
    p2_1_B.GET_MATRIX[1] = p2_1_P.GET_MATRIX_Value[1];

    /* Constant: '<Root>/ON_MATRIX' */
    p2_1_B.ON_MATRIX[2] = p2_1_P.ON_MATRIX_Value[2];

    /* Constant: '<Root>/OFF_MATRIX' */
    p2_1_B.OFF_MATRIX[2] = p2_1_P.OFF_MATRIX_Value[2];

    /* Constant: '<Root>/DIF_MATRIX' */
    p2_1_B.DIF_MATRIX[2] = p2_1_P.DIF_MATRIX_Value[2];

    /* Constant: '<Root>/GET_MATRIX' */
    p2_1_B.GET_MATRIX[2] = p2_1_P.GET_MATRIX_Value[2];

    /* Constant: '<Root>/ON_MATRIX' */
    p2_1_B.ON_MATRIX[3] = p2_1_P.ON_MATRIX_Value[3];

    /* Constant: '<Root>/OFF_MATRIX' */
    p2_1_B.OFF_MATRIX[3] = p2_1_P.OFF_MATRIX_Value[3];

    /* Constant: '<Root>/DIF_MATRIX' */
    p2_1_B.DIF_MATRIX[3] = p2_1_P.DIF_MATRIX_Value[3];

    /* Constant: '<Root>/GET_MATRIX' */
    p2_1_B.GET_MATRIX[3] = p2_1_P.GET_MATRIX_Value[3];
  }

  /* Integrator: '<S2>/Integrator' */
  if (p2_1_DW.Integrator_IWORK != 0) {
    p2_1_X.Integrator_CSTATE[0] = p2_1_B.X0_MATRIX[0];
    p2_1_X.Integrator_CSTATE[1] = p2_1_B.X0_MATRIX[1];
    p2_1_X.Integrator_CSTATE[2] = p2_1_B.X0_MATRIX[2];
    p2_1_X.Integrator_CSTATE[3] = p2_1_B.X0_MATRIX[3];
  }

  /* DataStoreRead: '<Root>/X_ROOMTEMP READ' incorporates:
   *  Integrator: '<S2>/Integrator'
   */
  p2_1_B.X_ROOMTEMPREAD[0] = p2_1_X.Integrator_CSTATE[0];
  p2_1_B.X_ROOMTEMPREAD[1] = p2_1_X.Integrator_CSTATE[1];
  p2_1_B.X_ROOMTEMPREAD[2] = p2_1_X.Integrator_CSTATE[2];
  p2_1_B.X_ROOMTEMPREAD[3] = p2_1_X.Integrator_CSTATE[3];
  if (rtmIsMajorTimeStep(p2_1_M)) {
    /* Chart: '<S1>/Chart' */
    if (p2_1_DW.is_active_c1_p2_1 == 0U) {
      p2_1_DW.is_active_c1_p2_1 = 1U;
      p2_1_DW.is_c1_p2_1 = p2_1_IN_start;
      p2_1_B.h1 = 0.0;
      p2_1_B.h4 = 0.0;
      p2_1_B.h2 = 1.0;
      p2_1_B.h3 = 1.0;
      p2_1_B.Room[0] = 2.0;
      p2_1_B.Room[1] = 3.0;
    } else {
      switch (p2_1_DW.is_c1_p2_1) {
       case p2_1_IN_st12:
        if ((p2_1_B.X_ROOMTEMPREAD[1] - p2_1_B.X_ROOMTEMPREAD[2] >=
             p2_1_B.DIF_MATRIX[2]) && (p2_1_B.X_ROOMTEMPREAD[2] <=
             p2_1_B.GET_MATRIX[2])) {
          p2_1_DW.is_s2 = 0UL;
          p2_1_DW.is_active_s2 = 0U;
          p2_1_DW.is_s1_k = 0UL;
          p2_1_DW.is_active_s1_e = 0U;
          p2_1_DW.is_c1_p2_1 = p2_1_IN_st13;
          p2_1_B.h2 = 0.0;
          p2_1_B.h4 = 0.0;
          p2_1_B.Room[0] = 1.0;
          p2_1_B.Room[1] = 3.0;
          p2_1_DW.is_active_s1 = 1U;
          p2_1_DW.is_s1 = p2_1_IN_s1_on;
          p2_1_B.h1 = 1.0;
          p2_1_DW.is_active_s3 = 1U;
          p2_1_DW.is_s3 = p2_1_IN_s3_on;
          p2_1_B.h3 = 1.0;
        } else if ((p2_1_B.X_ROOMTEMPREAD[0] - p2_1_B.X_ROOMTEMPREAD[2] >=
                    p2_1_B.DIF_MATRIX[2]) && (p2_1_B.X_ROOMTEMPREAD[2] <=
                    p2_1_B.GET_MATRIX[2])) {
          p2_1_DW.is_s2 = 0UL;
          p2_1_DW.is_active_s2 = 0U;
          p2_1_DW.is_s1_k = 0UL;
          p2_1_DW.is_active_s1_e = 0U;
          p2_1_DW.is_c1_p2_1 = p2_1_IN_st23;
          p2_1_B.h1 = 0.0;
          p2_1_B.h4 = 0.0;
          p2_1_B.Room[0] = 2.0;
          p2_1_B.Room[1] = 3.0;
          p2_1_DW.is_active_s2_go = 1U;
          p2_1_DW.is_s2_a = p2_1_IN_s2_on;
          p2_1_B.h2 = 1.0;
          p2_1_DW.is_active_s3_o = 1U;
          p2_1_DW.is_s3_f = p2_1_IN_s3_on;
          p2_1_B.h3 = 1.0;
        } else if ((p2_1_B.X_ROOMTEMPREAD[1] - p2_1_B.X_ROOMTEMPREAD[3] >=
                    p2_1_B.DIF_MATRIX[3]) && (p2_1_B.X_ROOMTEMPREAD[3] <=
                    p2_1_B.GET_MATRIX[3])) {
          p2_1_DW.is_s2 = 0UL;
          p2_1_DW.is_active_s2 = 0U;
          p2_1_DW.is_s1_k = 0UL;
          p2_1_DW.is_active_s1_e = 0U;
          p2_1_DW.is_c1_p2_1 = p2_1_IN_st14;
          p2_1_B.h2 = 0.0;
          p2_1_B.h3 = 0.0;
          p2_1_B.Room[0] = 1.0;
          p2_1_B.Room[1] = 4.0;
          p2_1_DW.is_active_s1_j = 1U;
          p2_1_DW.is_s1_o = p2_1_IN_s1_on;
          p2_1_B.h1 = 1.0;
          p2_1_DW.is_active_s4 = 1U;
          p2_1_DW.is_s4 = p2_1_IN_s4_on;
          p2_1_B.h4 = 1.0;
        } else if ((p2_1_B.X_ROOMTEMPREAD[0] - p2_1_B.X_ROOMTEMPREAD[3] >=
                    p2_1_B.DIF_MATRIX[3]) && (p2_1_B.X_ROOMTEMPREAD[3] <=
                    p2_1_B.GET_MATRIX[3])) {
          p2_1_DW.is_s2 = 0UL;
          p2_1_DW.is_active_s2 = 0U;
          p2_1_DW.is_s1_k = 0UL;
          p2_1_DW.is_active_s1_e = 0U;
          p2_1_DW.is_c1_p2_1 = p2_1_IN_st24;
          p2_1_B.h1 = 0.0;
          p2_1_B.h3 = 0.0;
          p2_1_B.Room[0] = 1.0;
          p2_1_B.Room[1] = 3.0;
          p2_1_DW.is_active_s2_g = 1U;
          p2_1_DW.is_s2_d = p2_1_IN_s2_on;
          p2_1_B.h2 = 1.0;
          p2_1_DW.is_active_s4_k = 1U;
          p2_1_DW.is_s4_o = p2_1_IN_s4_on;
          p2_1_B.h4 = 1.0;
        } else {
          if (p2_1_DW.is_s1_k == p2_1_IN_s1_off) {
            if (p2_1_B.X_ROOMTEMPREAD[0] <= p2_1_B.ON_MATRIX[0]) {
              p2_1_DW.is_s1_k = p2_1_IN_s1_on1;
              p2_1_B.h1 = 1.0;
            }

            /* case IN_s1_on1: */
          } else if (p2_1_B.X_ROOMTEMPREAD[0] >= p2_1_B.OFF_MATRIX[0]) {
            p2_1_DW.is_s1_k = p2_1_IN_s1_off;
            p2_1_B.h1 = 0.0;
          }

          if (p2_1_DW.is_s2 == p2_1_IN_s1_off1) {
            if (p2_1_B.X_ROOMTEMPREAD[1] <= p2_1_B.ON_MATRIX[1]) {
              p2_1_DW.is_s2 = p2_1_IN_s2_on;
              p2_1_B.h2 = 1.0;
            }

            /* case IN_s2_on: */
          } else if (p2_1_B.X_ROOMTEMPREAD[1] >= p2_1_B.OFF_MATRIX[1]) {
            p2_1_DW.is_s2 = p2_1_IN_s1_off1;
            p2_1_B.h2 = 0.0;
          }
        }
        break;

       case p2_1_IN_st13:
        p2_1_st13();
        break;

       case p2_1_IN_st14:
        p2_1_st14();
        break;

       case p2_1_IN_st23:
        p2_1_st23();
        break;

       case p2_1_IN_st24:
        p2_1_st24();
        break;

       case p2_1_IN_st34:
        p2_1_st34();
        break;

       default:
        /* case IN_start: */
        p2_1_DW.is_c1_p2_1 = p2_1_IN_st23;
        p2_1_B.h1 = 0.0;
        p2_1_B.h4 = 0.0;
        p2_1_B.Room[0] = 2.0;
        p2_1_B.Room[1] = 3.0;
        p2_1_DW.is_active_s2_go = 1U;
        p2_1_DW.is_s2_a = p2_1_IN_s2_on;
        p2_1_B.h2 = 1.0;
        p2_1_DW.is_active_s3_o = 1U;
        p2_1_DW.is_s3_f = p2_1_IN_s3_on;
        p2_1_B.h3 = 1.0;
        break;
      }
    }

    /* End of Chart: '<S1>/Chart' */
    /* Constant: '<Root>/A_MATRIX' */
    memcpy(&p2_1_B.A_MATRIX[0], &p2_1_P.A_MATRIX_Value[0], sizeof(real_T) << 4U);
  }

  /* DataStoreRead: '<Root>/X_ROOMTEMP READ1' incorporates:
   *  Integrator: '<S2>/Integrator'
   */
  p2_1_B.X_ROOMTEMPREAD1[0] = p2_1_X.Integrator_CSTATE[0];
  p2_1_B.X_ROOMTEMPREAD1[1] = p2_1_X.Integrator_CSTATE[1];
  p2_1_B.X_ROOMTEMPREAD1[2] = p2_1_X.Integrator_CSTATE[2];
  p2_1_B.X_ROOMTEMPREAD1[3] = p2_1_X.Integrator_CSTATE[3];
  if (rtmIsMajorTimeStep(p2_1_M)) {
    /* Chart: '<S2>/SIGMA' incorporates:
     *  Constant: '<Root>/A_MATRIX'
     */
    if (p2_1_DW.is_active_c3_p2_1 == 0U) {
      p2_1_DW.is_active_c3_p2_1 = 1U;
      p2_1_B.s[0] = 0.0;
      p2_1_B.s[1] = 0.0;
      p2_1_B.s[2] = 0.0;
      p2_1_B.s[3] = 0.0;
      p2_1_DW.is_c3_p2_1 = p2_1_IN_s3;
    } else {
      p2_1_B.s[0] = ((p2_1_B.X_ROOMTEMPREAD1[1] - p2_1_B.X_ROOMTEMPREAD1[0]) *
                     p2_1_B.A_MATRIX[4] + (p2_1_B.X_ROOMTEMPREAD1[2] -
        p2_1_B.X_ROOMTEMPREAD1[0]) * p2_1_B.A_MATRIX[8]) +
        (p2_1_B.X_ROOMTEMPREAD1[3] - p2_1_B.X_ROOMTEMPREAD1[0]) *
        p2_1_B.A_MATRIX[12];
      p2_1_B.s[1] = ((p2_1_B.X_ROOMTEMPREAD1[0] - p2_1_B.X_ROOMTEMPREAD1[1]) *
                     p2_1_B.A_MATRIX[1] + (p2_1_B.X_ROOMTEMPREAD1[2] -
        p2_1_B.X_ROOMTEMPREAD1[1]) * p2_1_B.A_MATRIX[9]) +
        (p2_1_B.X_ROOMTEMPREAD1[3] - p2_1_B.X_ROOMTEMPREAD1[1]) *
        p2_1_B.A_MATRIX[13];
      p2_1_B.s[2] = ((p2_1_B.X_ROOMTEMPREAD1[0] - p2_1_B.X_ROOMTEMPREAD1[2]) *
                     p2_1_B.A_MATRIX[2] + (p2_1_B.X_ROOMTEMPREAD1[1] -
        p2_1_B.X_ROOMTEMPREAD1[2]) * p2_1_B.A_MATRIX[6]) +
        (p2_1_B.X_ROOMTEMPREAD1[3] - p2_1_B.X_ROOMTEMPREAD1[2]) *
        p2_1_B.A_MATRIX[14];
      p2_1_B.s[3] = ((p2_1_B.X_ROOMTEMPREAD1[0] - p2_1_B.X_ROOMTEMPREAD1[3]) *
                     p2_1_B.A_MATRIX[3] + (p2_1_B.X_ROOMTEMPREAD1[1] -
        p2_1_B.X_ROOMTEMPREAD1[3]) * p2_1_B.A_MATRIX[7]) +
        (p2_1_B.X_ROOMTEMPREAD1[2] - p2_1_B.X_ROOMTEMPREAD1[3]) *
        p2_1_B.A_MATRIX[11];
    }

    /* End of Chart: '<S2>/SIGMA' */

    /* Sum: '<S2>/Add' incorporates:
     *  Constant: '<Root>/C_MATRIX'
     *  Product: '<S2>/Product'
     */
    p2_1_B.Add[0] = p2_1_P.C_MATRIX_Value[0] * p2_1_B.h1 + p2_1_B.s[0];
    p2_1_B.Add[1] = p2_1_P.C_MATRIX_Value[1] * p2_1_B.h2 + p2_1_B.s[1];
    p2_1_B.Add[2] = p2_1_P.C_MATRIX_Value[2] * p2_1_B.h3 + p2_1_B.s[2];
    p2_1_B.Add[3] = p2_1_P.C_MATRIX_Value[3] * p2_1_B.h4 + p2_1_B.s[3];
  }

  /* Sum: '<S2>/Add1' incorporates:
   *  Constant: '<Root>/B_MATRIX'
   *  Constant: '<Root>/U_TEMP'
   *  Product: '<S2>/Product1'
   *  Sum: '<S2>/Add'
   *  Sum: '<S2>/Subtract'
   */
  p2_1_B.Add1[0] = (p2_1_P.U_TEMP_Value - p2_1_B.X_ROOMTEMPREAD1[0]) *
    p2_1_P.B_MATRIX_Value[0] + p2_1_B.Add[0];
  p2_1_B.Add1[1] = (p2_1_P.U_TEMP_Value - p2_1_B.X_ROOMTEMPREAD1[1]) *
    p2_1_P.B_MATRIX_Value[1] + p2_1_B.Add[1];
  p2_1_B.Add1[2] = (p2_1_P.U_TEMP_Value - p2_1_B.X_ROOMTEMPREAD1[2]) *
    p2_1_P.B_MATRIX_Value[2] + p2_1_B.Add[2];
  p2_1_B.Add1[3] = (p2_1_P.U_TEMP_Value - p2_1_B.X_ROOMTEMPREAD1[3]) *
    p2_1_P.B_MATRIX_Value[3] + p2_1_B.Add[3];
  if (rtmIsMajorTimeStep(p2_1_M)) {
    /* DataStoreRead: '<Root>/X_ROOMTEMP READ2' incorporates:
     *  Integrator: '<S2>/Integrator'
     */
    p2_1_B.X_ROOMTEMPREAD2[0] = p2_1_X.Integrator_CSTATE[0];
    p2_1_B.X_ROOMTEMPREAD2[1] = p2_1_X.Integrator_CSTATE[1];
    p2_1_B.X_ROOMTEMPREAD2[2] = p2_1_X.Integrator_CSTATE[2];
    p2_1_B.X_ROOMTEMPREAD2[3] = p2_1_X.Integrator_CSTATE[3];
  }

  if (rtmIsMajorTimeStep(p2_1_M)) {
    /* Update for Integrator: '<S2>/Integrator' */
    p2_1_DW.Integrator_IWORK = 0;

    /* External mode */
    rtExtModeUploadCheckTrigger(2);

    {                                  /* Sample time: [0.0s, 0.0s] */
      rtExtModeUpload(0, (real_T)p2_1_M->Timing.t[0]);
    }

    if (rtmIsMajorTimeStep(p2_1_M)) {  /* Sample time: [0.2s, 0.0s] */
      rtExtModeUpload(1, (real_T)((p2_1_M->Timing.clockTick1) * 0.2));
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(p2_1_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(p2_1_M)!=-1) &&
          !((rtmGetTFinal(p2_1_M)-((p2_1_M->Timing.clockTick1) * 0.2)) >
            ((p2_1_M->Timing.clockTick1) * 0.2) * (DBL_EPSILON))) {
        rtmSetErrorStatus(p2_1_M, "Simulation finished");
      }

      if (rtmGetStopRequested(p2_1_M)) {
        rtmSetErrorStatus(p2_1_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&p2_1_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++p2_1_M->Timing.clockTick0;
    p2_1_M->Timing.t[0] = rtsiGetSolverStopTime(&p2_1_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.2s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.2, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      p2_1_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void p2_1_derivatives(void)
{
  XDot_p2_1_T *_rtXdot;
  _rtXdot = ((XDot_p2_1_T *) p2_1_M->derivs);

  /* Derivatives for Integrator: '<S2>/Integrator' incorporates:
   *  Sum: '<S2>/Add1'
   */
  _rtXdot->Integrator_CSTATE[0] = p2_1_B.Add1[0];
  _rtXdot->Integrator_CSTATE[1] = p2_1_B.Add1[1];
  _rtXdot->Integrator_CSTATE[2] = p2_1_B.Add1[2];
  _rtXdot->Integrator_CSTATE[3] = p2_1_B.Add1[3];
}

/* Model initialize function */
void p2_1_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&p2_1_M->solverInfo, &p2_1_M->Timing.simTimeStep);
    rtsiSetTPtr(&p2_1_M->solverInfo, &rtmGetTPtr(p2_1_M));
    rtsiSetStepSizePtr(&p2_1_M->solverInfo, &p2_1_M->Timing.stepSize0);
    rtsiSetdXPtr(&p2_1_M->solverInfo, &p2_1_M->derivs);
    rtsiSetContStatesPtr(&p2_1_M->solverInfo, (real_T **) &p2_1_M->contStates);
    rtsiSetNumContStatesPtr(&p2_1_M->solverInfo, &p2_1_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&p2_1_M->solverInfo,
      &p2_1_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&p2_1_M->solverInfo,
      &p2_1_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&p2_1_M->solverInfo,
      &p2_1_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&p2_1_M->solverInfo, (&rtmGetErrorStatus(p2_1_M)));
    rtsiSetRTModelPtr(&p2_1_M->solverInfo, p2_1_M);
  }

  rtsiSetSimTimeStep(&p2_1_M->solverInfo, MAJOR_TIME_STEP);
  p2_1_M->intgData.y = p2_1_M->odeY;
  p2_1_M->intgData.f[0] = p2_1_M->odeF[0];
  p2_1_M->intgData.f[1] = p2_1_M->odeF[1];
  p2_1_M->intgData.f[2] = p2_1_M->odeF[2];
  p2_1_M->contStates = ((X_p2_1_T *) &p2_1_X);
  rtsiSetSolverData(&p2_1_M->solverInfo, (void *)&p2_1_M->intgData);
  rtsiSetSolverName(&p2_1_M->solverInfo,"ode3");
  rtmSetTPtr(p2_1_M, &p2_1_M->Timing.tArray[0]);
  rtmSetTFinal(p2_1_M, -1);
  p2_1_M->Timing.stepSize0 = 0.2;
  rtmSetFirstInitCond(p2_1_M, 1);

  /* External mode info */
  p2_1_M->Sizes.checksums[0] = (2971225750U);
  p2_1_M->Sizes.checksums[1] = (1699759376U);
  p2_1_M->Sizes.checksums[2] = (3929936345U);
  p2_1_M->Sizes.checksums[3] = (3020429737U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    p2_1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(p2_1_M->extModeInfo,
      &p2_1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(p2_1_M->extModeInfo, p2_1_M->Sizes.checksums);
    rteiSetTPtr(p2_1_M->extModeInfo, rtmGetTPtr(p2_1_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    p2_1_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for Constant: '<Root>/X0_MATRIX' */
  p2_1_B.X0_MATRIX[0] = p2_1_P.X0_MATRIX_Value[0];

  /* Start for Constant: '<Root>/ON_MATRIX' */
  p2_1_B.ON_MATRIX[0] = p2_1_P.ON_MATRIX_Value[0];

  /* Start for Constant: '<Root>/OFF_MATRIX' */
  p2_1_B.OFF_MATRIX[0] = p2_1_P.OFF_MATRIX_Value[0];

  /* Start for Constant: '<Root>/DIF_MATRIX' */
  p2_1_B.DIF_MATRIX[0] = p2_1_P.DIF_MATRIX_Value[0];

  /* Start for Constant: '<Root>/GET_MATRIX' */
  p2_1_B.GET_MATRIX[0] = p2_1_P.GET_MATRIX_Value[0];

  /* Start for Constant: '<Root>/X0_MATRIX' */
  p2_1_B.X0_MATRIX[1] = p2_1_P.X0_MATRIX_Value[1];

  /* Start for Constant: '<Root>/ON_MATRIX' */
  p2_1_B.ON_MATRIX[1] = p2_1_P.ON_MATRIX_Value[1];

  /* Start for Constant: '<Root>/OFF_MATRIX' */
  p2_1_B.OFF_MATRIX[1] = p2_1_P.OFF_MATRIX_Value[1];

  /* Start for Constant: '<Root>/DIF_MATRIX' */
  p2_1_B.DIF_MATRIX[1] = p2_1_P.DIF_MATRIX_Value[1];

  /* Start for Constant: '<Root>/GET_MATRIX' */
  p2_1_B.GET_MATRIX[1] = p2_1_P.GET_MATRIX_Value[1];

  /* Start for Constant: '<Root>/X0_MATRIX' */
  p2_1_B.X0_MATRIX[2] = p2_1_P.X0_MATRIX_Value[2];

  /* Start for Constant: '<Root>/ON_MATRIX' */
  p2_1_B.ON_MATRIX[2] = p2_1_P.ON_MATRIX_Value[2];

  /* Start for Constant: '<Root>/OFF_MATRIX' */
  p2_1_B.OFF_MATRIX[2] = p2_1_P.OFF_MATRIX_Value[2];

  /* Start for Constant: '<Root>/DIF_MATRIX' */
  p2_1_B.DIF_MATRIX[2] = p2_1_P.DIF_MATRIX_Value[2];

  /* Start for Constant: '<Root>/GET_MATRIX' */
  p2_1_B.GET_MATRIX[2] = p2_1_P.GET_MATRIX_Value[2];

  /* Start for Constant: '<Root>/X0_MATRIX' */
  p2_1_B.X0_MATRIX[3] = p2_1_P.X0_MATRIX_Value[3];

  /* Start for Constant: '<Root>/ON_MATRIX' */
  p2_1_B.ON_MATRIX[3] = p2_1_P.ON_MATRIX_Value[3];

  /* Start for Constant: '<Root>/OFF_MATRIX' */
  p2_1_B.OFF_MATRIX[3] = p2_1_P.OFF_MATRIX_Value[3];

  /* Start for Constant: '<Root>/DIF_MATRIX' */
  p2_1_B.DIF_MATRIX[3] = p2_1_P.DIF_MATRIX_Value[3];

  /* Start for Constant: '<Root>/GET_MATRIX' */
  p2_1_B.GET_MATRIX[3] = p2_1_P.GET_MATRIX_Value[3];

  /* Start for Constant: '<Root>/A_MATRIX' */
  memcpy(&p2_1_B.A_MATRIX[0], &p2_1_P.A_MATRIX_Value[0], sizeof(real_T) << 4U);

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  if (rtmIsFirstInitCond(p2_1_M)) {
    p2_1_X.Integrator_CSTATE[0] = 16.5;
    p2_1_X.Integrator_CSTATE[1] = 16.5;
    p2_1_X.Integrator_CSTATE[2] = 16.5;
    p2_1_X.Integrator_CSTATE[3] = 16.5;
  }

  p2_1_DW.Integrator_IWORK = 1;

  /* End of InitializeConditions for Integrator: '<S2>/Integrator' */

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(p2_1_M)) {
    rtmSetFirstInitCond(p2_1_M, 0);
  }
}

/* Model terminate function */
void p2_1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
