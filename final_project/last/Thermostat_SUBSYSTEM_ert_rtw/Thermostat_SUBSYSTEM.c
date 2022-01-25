/*
 * File: Thermostat_SUBSYSTEM.c
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

#include "Thermostat_SUBSYSTEM.h"
#include "Thermostat_SUBSYSTEM_private.h"

/* Named constants for Chart: '<S1>/Chart' */
#define Thermostat_SUBSYSTEM_IN_s1_off ((uint8_T)1U)
#define Thermostat_SUBSYSTEM_IN_s1_off1 ((uint8_T)1U)
#define Thermostat_SUBSYSTEM_IN_s1_on  ((uint8_T)2U)
#define Thermostat_SUBSYSTEM_IN_s1_on1 ((uint8_T)2U)
#define Thermostat_SUBSYSTEM_IN_s2_off ((uint8_T)1U)
#define Thermostat_SUBSYSTEM_IN_s2_on  ((uint8_T)2U)
#define Thermostat_SUBSYSTEM_IN_s3_off ((uint8_T)1U)
#define Thermostat_SUBSYSTEM_IN_s3_on  ((uint8_T)2U)
#define Thermostat_SUBSYSTEM_IN_s4_off ((uint8_T)1U)
#define Thermostat_SUBSYSTEM_IN_s4_on  ((uint8_T)2U)
#define Thermostat_SUBSYSTEM_IN_st12   ((uint8_T)1U)
#define Thermostat_SUBSYSTEM_IN_st13   ((uint8_T)2U)
#define Thermostat_SUBSYSTEM_IN_st14   ((uint8_T)3U)
#define Thermostat_SUBSYSTEM_IN_st23   ((uint8_T)4U)
#define Thermostat_SUBSYSTEM_IN_st24   ((uint8_T)5U)
#define Thermostat_SUBSYSTEM_IN_st34   ((uint8_T)6U)
#define Thermostat_SUBSYSTEM_IN_start  ((uint8_T)7U)
#define Thermostat_S_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Block signals (default storage) */
B_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_B;

/* Block states (default storage) */
DW_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_Y;

/* Real-time model */
static RT_MODEL_Thermostat_SUBSYSTEM_T Thermostat_SUBSYSTEM_M_;
RT_MODEL_Thermostat_SUBSYSTEM_T *const Thermostat_SUBSYSTEM_M =
  &Thermostat_SUBSYSTEM_M_;

/* Forward declaration for local functions */
static void Thermostat_SUBSYSTEM_st13(void);
static void Thermostat_SUBSYSTEM_st14(void);
static void Thermostat_SUBSYSTEM_st23(void);
static void Thermostat_SUBSYSTEM_st24(void);
static void Thermostat_SUBSYSTEM_st34(void);

/* Function for Chart: '<S1>/Chart' */
static void Thermostat_SUBSYSTEM_st13(void)
{
  /* Inport: '<Root>/X' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Thermostat_SUBSYSTEM_U.X[2] - Thermostat_SUBSYSTEM_U.X[1] >=
       Thermostat_SUBSYSTEM_U.dif[1]) && (Thermostat_SUBSYSTEM_U.X[1] <=
       Thermostat_SUBSYSTEM_U.get[1])) {
    Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st12;
    Thermostat_SUBSYSTEM_B.h3 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 2.0;
    Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_SUBSYSTEM_IN_s1_on1;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_SUBSYSTEM_IN_s2_on;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[2] - Thermostat_SUBSYSTEM_U.X[3] >=
              Thermostat_SUBSYSTEM_U.dif[3]) && (Thermostat_SUBSYSTEM_U.X[3] <=
              Thermostat_SUBSYSTEM_U.get[3])) {
    Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st14;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.h3 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 4.0;
    Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_SUBSYSTEM_IN_s1_on;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_SUBSYSTEM_IN_s4_on;
    Thermostat_SUBSYSTEM_B.h4 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[0] - Thermostat_SUBSYSTEM_U.X[1] >=
              Thermostat_SUBSYSTEM_U.dif[1]) && (Thermostat_SUBSYSTEM_U.X[1] <=
              Thermostat_SUBSYSTEM_U.get[1])) {
    Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st23;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 2.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
    Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_SUBSYSTEM_IN_s2_on;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[0] - Thermostat_SUBSYSTEM_U.X[3] >=
              Thermostat_SUBSYSTEM_U.dif[3]) && (Thermostat_SUBSYSTEM_U.X[3] <=
              Thermostat_SUBSYSTEM_U.get[3])) {
    Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st34;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 3.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 4.0;
    Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_SUBSYSTEM_IN_s4_on;
    Thermostat_SUBSYSTEM_B.h4 = 1.0;
  } else {
    if (Thermostat_SUBSYSTEM_DW.is_s1 == Thermostat_SUBSYSTEM_IN_s1_off) {
      /* Inport: '<Root>/on' */
      if (Thermostat_SUBSYSTEM_U.X[0] <= Thermostat_SUBSYSTEM_U.on[0]) {
        Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_SUBSYSTEM_IN_s1_on;
        Thermostat_SUBSYSTEM_B.h1 = 1.0;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s1_on: */
    } else if (Thermostat_SUBSYSTEM_U.X[0] >= Thermostat_SUBSYSTEM_U.off[0]) {
      Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_SUBSYSTEM_IN_s1_off;
      Thermostat_SUBSYSTEM_B.h1 = 0.0;
    }

    if (Thermostat_SUBSYSTEM_DW.is_s3 == Thermostat_SUBSYSTEM_IN_s3_off) {
      /* Inport: '<Root>/on' */
      if (Thermostat_SUBSYSTEM_U.X[2] <= Thermostat_SUBSYSTEM_U.on[2]) {
        Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_SUBSYSTEM_IN_s3_on;
        Thermostat_SUBSYSTEM_B.h3 = 1.0;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s3_on: */
    } else if (Thermostat_SUBSYSTEM_U.X[2] >= Thermostat_SUBSYSTEM_U.off[2]) {
      Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_SUBSYSTEM_IN_s3_off;
      Thermostat_SUBSYSTEM_B.h3 = 0.0;
    }
  }

  /* End of Inport: '<Root>/X' */
}

/* Function for Chart: '<S1>/Chart' */
static void Thermostat_SUBSYSTEM_st14(void)
{
  real_T tmp;

  /* Inport: '<Root>/X' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Thermostat_SUBSYSTEM_U.X[3] - Thermostat_SUBSYSTEM_U.X[2] >=
       Thermostat_SUBSYSTEM_U.dif[2]) && (Thermostat_SUBSYSTEM_U.X[2] <=
       Thermostat_SUBSYSTEM_U.get[2])) {
    Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st13;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
    Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_SUBSYSTEM_IN_s1_on;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
  } else {
    tmp = Thermostat_SUBSYSTEM_U.X[3] - Thermostat_SUBSYSTEM_U.X[1];
    if ((tmp >= Thermostat_SUBSYSTEM_U.dif[1]) && (Thermostat_SUBSYSTEM_U.X[1] <=
         Thermostat_SUBSYSTEM_U.get[1])) {
      Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_S_IN_NO_ACTIVE_CHILD;
      Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_S_IN_NO_ACTIVE_CHILD;
      Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
        Thermostat_SUBSYSTEM_IN_st12;
      Thermostat_SUBSYSTEM_B.h3 = 0.0;
      Thermostat_SUBSYSTEM_B.h4 = 0.0;
      Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
      Thermostat_SUBSYSTEM_B.Room[1] = 2.0;
      Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_SUBSYSTEM_IN_s1_on1;
      Thermostat_SUBSYSTEM_B.h1 = 1.0;
      Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_SUBSYSTEM_IN_s2_on;
      Thermostat_SUBSYSTEM_B.h2 = 1.0;
    } else if ((tmp >= Thermostat_SUBSYSTEM_U.dif[1]) &&
               (Thermostat_SUBSYSTEM_U.X[1] <= Thermostat_SUBSYSTEM_U.get[1])) {
      Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_S_IN_NO_ACTIVE_CHILD;
      Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_S_IN_NO_ACTIVE_CHILD;
      Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
        Thermostat_SUBSYSTEM_IN_st24;
      Thermostat_SUBSYSTEM_B.h1 = 0.0;
      Thermostat_SUBSYSTEM_B.h3 = 0.0;
      Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
      Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
      Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_SUBSYSTEM_IN_s2_on;
      Thermostat_SUBSYSTEM_B.h2 = 1.0;
      Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_SUBSYSTEM_IN_s4_on;
      Thermostat_SUBSYSTEM_B.h4 = 1.0;
    } else if ((Thermostat_SUBSYSTEM_U.X[0] - Thermostat_SUBSYSTEM_U.X[2] >=
                Thermostat_SUBSYSTEM_U.dif[2]) && (Thermostat_SUBSYSTEM_U.X[2] <=
                Thermostat_SUBSYSTEM_U.get[2])) {
      Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_S_IN_NO_ACTIVE_CHILD;
      Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_S_IN_NO_ACTIVE_CHILD;
      Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
        Thermostat_SUBSYSTEM_IN_st34;
      Thermostat_SUBSYSTEM_B.h1 = 0.0;
      Thermostat_SUBSYSTEM_B.h2 = 0.0;
      Thermostat_SUBSYSTEM_B.Room[0] = 3.0;
      Thermostat_SUBSYSTEM_B.Room[1] = 4.0;
      Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_SUBSYSTEM_IN_s3_on;
      Thermostat_SUBSYSTEM_B.h3 = 1.0;
      Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_SUBSYSTEM_IN_s4_on;
      Thermostat_SUBSYSTEM_B.h4 = 1.0;
    } else {
      if (Thermostat_SUBSYSTEM_DW.is_s1_o == Thermostat_SUBSYSTEM_IN_s1_off) {
        /* Inport: '<Root>/on' */
        if (Thermostat_SUBSYSTEM_U.X[0] <= Thermostat_SUBSYSTEM_U.on[0]) {
          Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_SUBSYSTEM_IN_s1_on;
          Thermostat_SUBSYSTEM_B.h1 = 1.0;
        }

        /* Inport: '<Root>/off' */
        /* case IN_s1_on: */
      } else if (Thermostat_SUBSYSTEM_U.X[0] >= Thermostat_SUBSYSTEM_U.off[0]) {
        Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_SUBSYSTEM_IN_s1_off;
        Thermostat_SUBSYSTEM_B.h1 = 0.0;
      }

      if (Thermostat_SUBSYSTEM_DW.is_s4 == Thermostat_SUBSYSTEM_IN_s4_off) {
        /* Inport: '<Root>/on' */
        if (Thermostat_SUBSYSTEM_U.X[3] <= Thermostat_SUBSYSTEM_U.on[3]) {
          Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_SUBSYSTEM_IN_s4_on;
          Thermostat_SUBSYSTEM_B.h4 = 1.0;
        }

        /* Inport: '<Root>/off' */
        /* case IN_s4_on: */
      } else if (Thermostat_SUBSYSTEM_U.X[3] >= Thermostat_SUBSYSTEM_U.off[3]) {
        Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_SUBSYSTEM_IN_s4_off;
        Thermostat_SUBSYSTEM_B.h4 = 0.0;
      }
    }
  }

  /* End of Inport: '<Root>/X' */
}

/* Function for Chart: '<S1>/Chart' */
static void Thermostat_SUBSYSTEM_st23(void)
{
  /* Inport: '<Root>/X' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Thermostat_SUBSYSTEM_U.X[2] - Thermostat_SUBSYSTEM_U.X[0] >=
       Thermostat_SUBSYSTEM_U.dif[0]) && (Thermostat_SUBSYSTEM_U.X[0] <=
       Thermostat_SUBSYSTEM_U.get[0])) {
    Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st12;
    Thermostat_SUBSYSTEM_B.h3 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 2.0;
    Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_SUBSYSTEM_IN_s1_on1;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_SUBSYSTEM_IN_s2_on;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[1] - Thermostat_SUBSYSTEM_U.X[0] >=
              Thermostat_SUBSYSTEM_U.dif[0]) && (Thermostat_SUBSYSTEM_U.X[0] <=
              Thermostat_SUBSYSTEM_U.get[0])) {
    Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st13;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
    Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_SUBSYSTEM_IN_s1_on;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[2] - Thermostat_SUBSYSTEM_U.X[3] >=
              Thermostat_SUBSYSTEM_U.dif[3]) && (Thermostat_SUBSYSTEM_U.X[3] <=
              Thermostat_SUBSYSTEM_U.get[3])) {
    Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st24;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h3 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
    Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_SUBSYSTEM_IN_s2_on;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_SUBSYSTEM_IN_s4_on;
    Thermostat_SUBSYSTEM_B.h4 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[1] - Thermostat_SUBSYSTEM_U.X[3] >=
              Thermostat_SUBSYSTEM_U.dif[3]) && (Thermostat_SUBSYSTEM_U.X[3] <=
              Thermostat_SUBSYSTEM_U.get[3])) {
    Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st34;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 3.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 4.0;
    Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_SUBSYSTEM_IN_s4_on;
    Thermostat_SUBSYSTEM_B.h4 = 1.0;
  } else {
    if (Thermostat_SUBSYSTEM_DW.is_s2_j == Thermostat_SUBSYSTEM_IN_s1_off) {
      /* Inport: '<Root>/on' */
      if (Thermostat_SUBSYSTEM_U.X[1] <= Thermostat_SUBSYSTEM_U.on[1]) {
        Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_SUBSYSTEM_IN_s2_on;
        Thermostat_SUBSYSTEM_B.h2 = 1.0;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s2_on: */
    } else if (Thermostat_SUBSYSTEM_U.X[1] >= Thermostat_SUBSYSTEM_U.off[1]) {
      Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_SUBSYSTEM_IN_s1_off;
      Thermostat_SUBSYSTEM_B.h2 = 0.0;
    }

    if (Thermostat_SUBSYSTEM_DW.is_s3_i == Thermostat_SUBSYSTEM_IN_s3_off) {
      /* Inport: '<Root>/on' */
      if (Thermostat_SUBSYSTEM_U.X[2] <= Thermostat_SUBSYSTEM_U.on[2]) {
        Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_SUBSYSTEM_IN_s3_on;
        Thermostat_SUBSYSTEM_B.h3 = 1.0;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s3_on: */
    } else if (Thermostat_SUBSYSTEM_U.X[2] >= Thermostat_SUBSYSTEM_U.off[2]) {
      Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_SUBSYSTEM_IN_s3_off;
      Thermostat_SUBSYSTEM_B.h3 = 0.0;
    }
  }

  /* End of Inport: '<Root>/X' */
}

/* Function for Chart: '<S1>/Chart' */
static void Thermostat_SUBSYSTEM_st24(void)
{
  /* Inport: '<Root>/X' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Thermostat_SUBSYSTEM_U.X[3] - Thermostat_SUBSYSTEM_U.X[0] >=
       Thermostat_SUBSYSTEM_U.dif[0]) && (Thermostat_SUBSYSTEM_U.X[0] <=
       Thermostat_SUBSYSTEM_U.get[0])) {
    Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st12;
    Thermostat_SUBSYSTEM_B.h3 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 2.0;
    Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_SUBSYSTEM_IN_s1_on1;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_SUBSYSTEM_IN_s2_on;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[1] - Thermostat_SUBSYSTEM_U.X[3] >=
              Thermostat_SUBSYSTEM_U.dif[3]) && (Thermostat_SUBSYSTEM_U.X[3] <=
              Thermostat_SUBSYSTEM_U.get[3])) {
    Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st14;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.h3 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 4.0;
    Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_SUBSYSTEM_IN_s1_on;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_SUBSYSTEM_IN_s4_on;
    Thermostat_SUBSYSTEM_B.h4 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[3] - Thermostat_SUBSYSTEM_U.X[2] >=
              Thermostat_SUBSYSTEM_U.dif[2]) && (Thermostat_SUBSYSTEM_U.X[2] <=
              Thermostat_SUBSYSTEM_U.get[2])) {
    Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st23;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 2.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
    Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_SUBSYSTEM_IN_s2_on;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[1] - Thermostat_SUBSYSTEM_U.X[2] >=
              Thermostat_SUBSYSTEM_U.dif[2]) && (Thermostat_SUBSYSTEM_U.X[2] <=
              Thermostat_SUBSYSTEM_U.get[2])) {
    Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st34;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 3.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 4.0;
    Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_SUBSYSTEM_IN_s4_on;
    Thermostat_SUBSYSTEM_B.h4 = 1.0;
  } else {
    if (Thermostat_SUBSYSTEM_DW.is_s2_n == Thermostat_SUBSYSTEM_IN_s2_off) {
      /* Inport: '<Root>/on' */
      if (Thermostat_SUBSYSTEM_U.X[1] <= Thermostat_SUBSYSTEM_U.on[1]) {
        Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_SUBSYSTEM_IN_s2_on;
        Thermostat_SUBSYSTEM_B.h2 = 1.0;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s2_on: */
    } else if (Thermostat_SUBSYSTEM_U.X[1] >= Thermostat_SUBSYSTEM_U.off[1]) {
      Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_SUBSYSTEM_IN_s2_off;
      Thermostat_SUBSYSTEM_B.h2 = 0.0;
    }

    if (Thermostat_SUBSYSTEM_DW.is_s4_i == Thermostat_SUBSYSTEM_IN_s4_off) {
      /* Inport: '<Root>/on' */
      if (Thermostat_SUBSYSTEM_U.X[3] <= Thermostat_SUBSYSTEM_U.on[3]) {
        Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_SUBSYSTEM_IN_s4_on;
        Thermostat_SUBSYSTEM_B.h4 = 1.0;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s4_on: */
    } else if (Thermostat_SUBSYSTEM_U.X[3] >= Thermostat_SUBSYSTEM_U.off[3]) {
      Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_SUBSYSTEM_IN_s4_off;
      Thermostat_SUBSYSTEM_B.h4 = 0.0;
    }
  }

  /* End of Inport: '<Root>/X' */
}

/* Function for Chart: '<S1>/Chart' */
static void Thermostat_SUBSYSTEM_st34(void)
{
  /* Inport: '<Root>/X' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Thermostat_SUBSYSTEM_U.X[3] - Thermostat_SUBSYSTEM_U.X[0] >=
       Thermostat_SUBSYSTEM_U.dif[0]) && (Thermostat_SUBSYSTEM_U.X[0] <=
       Thermostat_SUBSYSTEM_U.get[0])) {
    Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st13;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
    Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_SUBSYSTEM_IN_s1_on;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[2] - Thermostat_SUBSYSTEM_U.X[0] >=
              Thermostat_SUBSYSTEM_U.dif[0]) && (Thermostat_SUBSYSTEM_U.X[0] <=
              Thermostat_SUBSYSTEM_U.get[0])) {
    Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st14;
    Thermostat_SUBSYSTEM_B.h2 = 0.0;
    Thermostat_SUBSYSTEM_B.h3 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 4.0;
    Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_SUBSYSTEM_IN_s1_on;
    Thermostat_SUBSYSTEM_B.h1 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_SUBSYSTEM_IN_s4_on;
    Thermostat_SUBSYSTEM_B.h4 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[3] - Thermostat_SUBSYSTEM_U.X[1] >=
              Thermostat_SUBSYSTEM_U.dif[1]) && (Thermostat_SUBSYSTEM_U.X[1] <=
              Thermostat_SUBSYSTEM_U.get[1])) {
    Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st23;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 2.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
    Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_SUBSYSTEM_IN_s2_on;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_SUBSYSTEM_IN_s3_on;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
  } else if ((Thermostat_SUBSYSTEM_U.X[2] - Thermostat_SUBSYSTEM_U.X[1] >=
              Thermostat_SUBSYSTEM_U.dif[1]) && (Thermostat_SUBSYSTEM_U.X[1] <=
              Thermostat_SUBSYSTEM_U.get[1])) {
    Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_S_IN_NO_ACTIVE_CHILD;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_st24;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h3 = 0.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
    Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_SUBSYSTEM_IN_s2_on;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
    Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_SUBSYSTEM_IN_s4_on;
    Thermostat_SUBSYSTEM_B.h4 = 1.0;
  } else {
    if (Thermostat_SUBSYSTEM_DW.is_s3_k == Thermostat_SUBSYSTEM_IN_s3_off) {
      /* Inport: '<Root>/on' */
      if (Thermostat_SUBSYSTEM_U.X[2] <= Thermostat_SUBSYSTEM_U.on[2]) {
        Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_SUBSYSTEM_IN_s3_on;
        Thermostat_SUBSYSTEM_B.h3 = 1.0;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s3_on: */
    } else if (Thermostat_SUBSYSTEM_U.X[2] >= Thermostat_SUBSYSTEM_U.off[2]) {
      Thermostat_SUBSYSTEM_DW.is_s3_k = Thermostat_SUBSYSTEM_IN_s3_off;
      Thermostat_SUBSYSTEM_B.h3 = 0.0;
    }

    if (Thermostat_SUBSYSTEM_DW.is_s4_c == Thermostat_SUBSYSTEM_IN_s4_off) {
      /* Inport: '<Root>/on' */
      if (Thermostat_SUBSYSTEM_U.X[3] <= Thermostat_SUBSYSTEM_U.on[3]) {
        Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_SUBSYSTEM_IN_s4_on;
        Thermostat_SUBSYSTEM_B.h4 = 1.0;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s4_on: */
    } else if (Thermostat_SUBSYSTEM_U.X[3] >= Thermostat_SUBSYSTEM_U.off[3]) {
      Thermostat_SUBSYSTEM_DW.is_s4_c = Thermostat_SUBSYSTEM_IN_s4_off;
      Thermostat_SUBSYSTEM_B.h4 = 0.0;
    }
  }

  /* End of Inport: '<Root>/X' */
}

/* Model step function */
void Thermostat_SUBSYSTEM_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Thermostat_SUBSYSTEM' */
  /* Chart: '<S1>/Chart' incorporates:
   *  Inport: '<Root>/X'
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   *  Inport: '<Root>/off'
   *  Inport: '<Root>/on'
   */
  if ((uint16_T)Thermostat_SUBSYSTEM_DW.is_active_c1_Thermostat_SUBSYST == 0U) {
    Thermostat_SUBSYSTEM_DW.is_active_c1_Thermostat_SUBSYST = 1U;
    Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
      Thermostat_SUBSYSTEM_IN_start;
    Thermostat_SUBSYSTEM_B.h1 = 0.0;
    Thermostat_SUBSYSTEM_B.h4 = 0.0;
    Thermostat_SUBSYSTEM_B.h2 = 1.0;
    Thermostat_SUBSYSTEM_B.h3 = 1.0;
    Thermostat_SUBSYSTEM_B.Room[0] = 2.0;
    Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
  } else {
    switch (Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM) {
     case Thermostat_SUBSYSTEM_IN_st12:
      if ((Thermostat_SUBSYSTEM_U.X[1] - Thermostat_SUBSYSTEM_U.X[2] >=
           Thermostat_SUBSYSTEM_U.dif[2]) && (Thermostat_SUBSYSTEM_U.X[2] <=
           Thermostat_SUBSYSTEM_U.get[2])) {
        Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_S_IN_NO_ACTIVE_CHILD;
        Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_S_IN_NO_ACTIVE_CHILD;
        Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
          Thermostat_SUBSYSTEM_IN_st13;
        Thermostat_SUBSYSTEM_B.h2 = 0.0;
        Thermostat_SUBSYSTEM_B.h4 = 0.0;
        Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
        Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
        Thermostat_SUBSYSTEM_DW.is_s1 = Thermostat_SUBSYSTEM_IN_s1_on;
        Thermostat_SUBSYSTEM_B.h1 = 1.0;
        Thermostat_SUBSYSTEM_DW.is_s3 = Thermostat_SUBSYSTEM_IN_s3_on;
        Thermostat_SUBSYSTEM_B.h3 = 1.0;
      } else if ((Thermostat_SUBSYSTEM_U.X[0] - Thermostat_SUBSYSTEM_U.X[2] >=
                  Thermostat_SUBSYSTEM_U.dif[2]) && (Thermostat_SUBSYSTEM_U.X[2]
                  <= Thermostat_SUBSYSTEM_U.get[2])) {
        Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_S_IN_NO_ACTIVE_CHILD;
        Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_S_IN_NO_ACTIVE_CHILD;
        Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
          Thermostat_SUBSYSTEM_IN_st23;
        Thermostat_SUBSYSTEM_B.h1 = 0.0;
        Thermostat_SUBSYSTEM_B.h4 = 0.0;
        Thermostat_SUBSYSTEM_B.Room[0] = 2.0;
        Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
        Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_SUBSYSTEM_IN_s2_on;
        Thermostat_SUBSYSTEM_B.h2 = 1.0;
        Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_SUBSYSTEM_IN_s3_on;
        Thermostat_SUBSYSTEM_B.h3 = 1.0;
      } else if ((Thermostat_SUBSYSTEM_U.X[1] - Thermostat_SUBSYSTEM_U.X[3] >=
                  Thermostat_SUBSYSTEM_U.dif[3]) && (Thermostat_SUBSYSTEM_U.X[3]
                  <= Thermostat_SUBSYSTEM_U.get[3])) {
        Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_S_IN_NO_ACTIVE_CHILD;
        Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_S_IN_NO_ACTIVE_CHILD;
        Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
          Thermostat_SUBSYSTEM_IN_st14;
        Thermostat_SUBSYSTEM_B.h2 = 0.0;
        Thermostat_SUBSYSTEM_B.h3 = 0.0;
        Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
        Thermostat_SUBSYSTEM_B.Room[1] = 4.0;
        Thermostat_SUBSYSTEM_DW.is_s1_o = Thermostat_SUBSYSTEM_IN_s1_on;
        Thermostat_SUBSYSTEM_B.h1 = 1.0;
        Thermostat_SUBSYSTEM_DW.is_s4 = Thermostat_SUBSYSTEM_IN_s4_on;
        Thermostat_SUBSYSTEM_B.h4 = 1.0;
      } else if ((Thermostat_SUBSYSTEM_U.X[0] - Thermostat_SUBSYSTEM_U.X[3] >=
                  Thermostat_SUBSYSTEM_U.dif[3]) && (Thermostat_SUBSYSTEM_U.X[3]
                  <= Thermostat_SUBSYSTEM_U.get[3])) {
        Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_S_IN_NO_ACTIVE_CHILD;
        Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_S_IN_NO_ACTIVE_CHILD;
        Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
          Thermostat_SUBSYSTEM_IN_st24;
        Thermostat_SUBSYSTEM_B.h1 = 0.0;
        Thermostat_SUBSYSTEM_B.h3 = 0.0;
        Thermostat_SUBSYSTEM_B.Room[0] = 1.0;
        Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
        Thermostat_SUBSYSTEM_DW.is_s2_n = Thermostat_SUBSYSTEM_IN_s2_on;
        Thermostat_SUBSYSTEM_B.h2 = 1.0;
        Thermostat_SUBSYSTEM_DW.is_s4_i = Thermostat_SUBSYSTEM_IN_s4_on;
        Thermostat_SUBSYSTEM_B.h4 = 1.0;
      } else {
        if (Thermostat_SUBSYSTEM_DW.is_s1_k == Thermostat_SUBSYSTEM_IN_s1_off) {
          if (Thermostat_SUBSYSTEM_U.X[0] <= Thermostat_SUBSYSTEM_U.on[0]) {
            Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_SUBSYSTEM_IN_s1_on1;
            Thermostat_SUBSYSTEM_B.h1 = 1.0;
          }

          /* case IN_s1_on1: */
        } else if (Thermostat_SUBSYSTEM_U.X[0] >= Thermostat_SUBSYSTEM_U.off[0])
        {
          Thermostat_SUBSYSTEM_DW.is_s1_k = Thermostat_SUBSYSTEM_IN_s1_off;
          Thermostat_SUBSYSTEM_B.h1 = 0.0;
        }

        if (Thermostat_SUBSYSTEM_DW.is_s2 == Thermostat_SUBSYSTEM_IN_s1_off1) {
          if (Thermostat_SUBSYSTEM_U.X[1] <= Thermostat_SUBSYSTEM_U.on[1]) {
            Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_SUBSYSTEM_IN_s2_on;
            Thermostat_SUBSYSTEM_B.h2 = 1.0;
          }

          /* case IN_s2_on: */
        } else if (Thermostat_SUBSYSTEM_U.X[1] >= Thermostat_SUBSYSTEM_U.off[1])
        {
          Thermostat_SUBSYSTEM_DW.is_s2 = Thermostat_SUBSYSTEM_IN_s1_off1;
          Thermostat_SUBSYSTEM_B.h2 = 0.0;
        }
      }
      break;

     case Thermostat_SUBSYSTEM_IN_st13:
      Thermostat_SUBSYSTEM_st13();
      break;

     case Thermostat_SUBSYSTEM_IN_st14:
      Thermostat_SUBSYSTEM_st14();
      break;

     case Thermostat_SUBSYSTEM_IN_st23:
      Thermostat_SUBSYSTEM_st23();
      break;

     case Thermostat_SUBSYSTEM_IN_st24:
      Thermostat_SUBSYSTEM_st24();
      break;

     case Thermostat_SUBSYSTEM_IN_st34:
      Thermostat_SUBSYSTEM_st34();
      break;

     default:
      /* case IN_start: */
      Thermostat_SUBSYSTEM_DW.is_c1_Thermostat_SUBSYSTEM =
        Thermostat_SUBSYSTEM_IN_st23;
      Thermostat_SUBSYSTEM_B.h1 = 0.0;
      Thermostat_SUBSYSTEM_B.h4 = 0.0;
      Thermostat_SUBSYSTEM_B.Room[0] = 2.0;
      Thermostat_SUBSYSTEM_B.Room[1] = 3.0;
      Thermostat_SUBSYSTEM_DW.is_s2_j = Thermostat_SUBSYSTEM_IN_s2_on;
      Thermostat_SUBSYSTEM_B.h2 = 1.0;
      Thermostat_SUBSYSTEM_DW.is_s3_i = Thermostat_SUBSYSTEM_IN_s3_on;
      Thermostat_SUBSYSTEM_B.h3 = 1.0;
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */
  /* End of Outputs for SubSystem: '<Root>/Thermostat_SUBSYSTEM' */

  /* Outport: '<Root>/H' */
  Thermostat_SUBSYSTEM_Y.H[0] = Thermostat_SUBSYSTEM_B.h1;
  Thermostat_SUBSYSTEM_Y.H[1] = Thermostat_SUBSYSTEM_B.h2;
  Thermostat_SUBSYSTEM_Y.H[2] = Thermostat_SUBSYSTEM_B.h3;
  Thermostat_SUBSYSTEM_Y.H[3] = Thermostat_SUBSYSTEM_B.h4;

  /* Outport: '<Root>/Heater1' */
  Thermostat_SUBSYSTEM_Y.Heater1 = Thermostat_SUBSYSTEM_B.Room[0];

  /* Outport: '<Root>/Heater2' */
  Thermostat_SUBSYSTEM_Y.Heater2 = Thermostat_SUBSYSTEM_B.Room[1];
}

/* Model initialize function */
void Thermostat_SUBSYSTEM_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Thermostat_SUBSYSTEM_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
