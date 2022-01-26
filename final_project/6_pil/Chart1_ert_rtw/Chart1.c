/*
 * File: Chart1.c
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

#include "Chart1.h"
#include "Chart1_private.h"

/* Named constants for Chart: '<Root>/Chart1' */
#define Chart1_IN_NO_ACTIVE_CHILD      ((uint8_T)0U)
#define Chart1_IN_s1_off               ((uint8_T)1U)
#define Chart1_IN_s1_off1              ((uint8_T)1U)
#define Chart1_IN_s1_on                ((uint8_T)2U)
#define Chart1_IN_s1_on1               ((uint8_T)2U)
#define Chart1_IN_s2_off               ((uint8_T)1U)
#define Chart1_IN_s2_on                ((uint8_T)2U)
#define Chart1_IN_s3_off               ((uint8_T)1U)
#define Chart1_IN_s3_on                ((uint8_T)2U)
#define Chart1_IN_s4_off               ((uint8_T)1U)
#define Chart1_IN_s4_on                ((uint8_T)2U)
#define Chart1_IN_st12                 ((uint8_T)1U)
#define Chart1_IN_st13                 ((uint8_T)2U)
#define Chart1_IN_st14                 ((uint8_T)3U)
#define Chart1_IN_st23                 ((uint8_T)4U)
#define Chart1_IN_st24                 ((uint8_T)5U)
#define Chart1_IN_st34                 ((uint8_T)6U)
#define Chart1_IN_start                ((uint8_T)7U)

/* Block states (default storage) */
DW_Chart1_T Chart1_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Chart1_T Chart1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Chart1_T Chart1_Y;

/* Real-time model */
static RT_MODEL_Chart1_T Chart1_M_;
RT_MODEL_Chart1_T *const Chart1_M = &Chart1_M_;

/* Forward declaration for local functions */
static void Chart1_st13(void);
static void Chart1_st14(void);
static void Chart1_st23(void);
static void Chart1_st24(void);
static void Chart1_st34(void);

/* Function for Chart: '<Root>/Chart1' */
static void Chart1_st13(void)
{
  /* Inport: '<Root>/x' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Chart1_U.x[2] - Chart1_U.x[1] >= Chart1_U.dif[1]) && (Chart1_U.x[1] <=
       Chart1_U.get[1])) {
    Chart1_DW.is_s3 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s1 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st12;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 2.0F;
    Chart1_DW.is_s1_f = Chart1_IN_s1_on1;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s2 = Chart1_IN_s2_on;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;
  } else if ((Chart1_U.x[2] - Chart1_U.x[3] >= Chart1_U.dif[3]) && (Chart1_U.x[3]
              <= Chart1_U.get[3])) {
    Chart1_DW.is_s3 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s1 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st14;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 4.0F;
    Chart1_DW.is_s1_i = Chart1_IN_s1_on;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s4 = Chart1_IN_s4_on;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 1.0F;
  } else if ((Chart1_U.x[0] - Chart1_U.x[1] >= Chart1_U.dif[1]) && (Chart1_U.x[1]
              <= Chart1_U.get[1])) {
    Chart1_DW.is_s3 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s1 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st23;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 2.0F;
    Chart1_Y.Room[1] = 3.0F;
    Chart1_DW.is_s2_l = Chart1_IN_s2_on;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;
    Chart1_DW.is_s3_j = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
  } else if ((Chart1_U.x[0] - Chart1_U.x[3] >= Chart1_U.dif[3]) && (Chart1_U.x[3]
              <= Chart1_U.get[3])) {
    Chart1_DW.is_s3 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s1 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st34;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 3.0F;
    Chart1_Y.Room[1] = 4.0F;
    Chart1_DW.is_s3_p = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
    Chart1_DW.is_s4_d = Chart1_IN_s4_on;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 1.0F;
  } else {
    if (Chart1_DW.is_s1 == Chart1_IN_s1_off) {
      /* Inport: '<Root>/on' */
      if (Chart1_U.x[0] <= Chart1_U.on[0]) {
        Chart1_DW.is_s1 = Chart1_IN_s1_on;

        /* Outport: '<Root>/h1' */
        Chart1_Y.h1 = 1.0F;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s1_on: */
    } else if (Chart1_U.x[0] >= Chart1_U.off[0]) {
      Chart1_DW.is_s1 = Chart1_IN_s1_off;

      /* Outport: '<Root>/h1' */
      Chart1_Y.h1 = 0.0F;
    }

    if (Chart1_DW.is_s3 == Chart1_IN_s3_off) {
      /* Inport: '<Root>/on' */
      if (Chart1_U.x[2] <= Chart1_U.on[2]) {
        Chart1_DW.is_s3 = Chart1_IN_s3_on;

        /* Outport: '<Root>/h3' */
        Chart1_Y.h3 = 1.0F;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s3_on: */
    } else if (Chart1_U.x[2] >= Chart1_U.off[2]) {
      Chart1_DW.is_s3 = Chart1_IN_s3_off;

      /* Outport: '<Root>/h3' */
      Chart1_Y.h3 = 0.0F;
    }
  }

  /* End of Inport: '<Root>/x' */
}

/* Function for Chart: '<Root>/Chart1' */
static void Chart1_st14(void)
{
  real32_T tmp;

  /* Inport: '<Root>/x' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Chart1_U.x[3] - Chart1_U.x[2] >= Chart1_U.dif[2]) && (Chart1_U.x[2] <=
       Chart1_U.get[2])) {
    Chart1_DW.is_s4 = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s1_i = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st13;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 3.0F;
    Chart1_DW.is_s1 = Chart1_IN_s1_on;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s3 = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
  } else {
    tmp = Chart1_U.x[3] - Chart1_U.x[1];
    if ((tmp >= Chart1_U.dif[1]) && (Chart1_U.x[1] <= Chart1_U.get[1])) {
      Chart1_DW.is_s4 = Chart1_IN_NO_ACTIVE_CHILD;
      Chart1_DW.is_s1_i = Chart1_IN_NO_ACTIVE_CHILD;
      Chart1_DW.is_c2_Chart1 = Chart1_IN_st12;

      /* Outport: '<Root>/h3' */
      Chart1_Y.h3 = 0.0F;

      /* Outport: '<Root>/h4' */
      Chart1_Y.h4 = 0.0F;

      /* Outport: '<Root>/Room' */
      Chart1_Y.Room[0] = 1.0F;
      Chart1_Y.Room[1] = 2.0F;
      Chart1_DW.is_s1_f = Chart1_IN_s1_on1;

      /* Outport: '<Root>/h1' */
      Chart1_Y.h1 = 1.0F;
      Chart1_DW.is_s2 = Chart1_IN_s2_on;

      /* Outport: '<Root>/h2' */
      Chart1_Y.h2 = 1.0F;
    } else if ((tmp >= Chart1_U.dif[1]) && (Chart1_U.x[1] <= Chart1_U.get[1])) {
      Chart1_DW.is_s4 = Chart1_IN_NO_ACTIVE_CHILD;
      Chart1_DW.is_s1_i = Chart1_IN_NO_ACTIVE_CHILD;
      Chart1_DW.is_c2_Chart1 = Chart1_IN_st24;

      /* Outport: '<Root>/h1' */
      Chart1_Y.h1 = 0.0F;

      /* Outport: '<Root>/h3' */
      Chart1_Y.h3 = 0.0F;

      /* Outport: '<Root>/Room' */
      Chart1_Y.Room[0] = 1.0F;
      Chart1_Y.Room[1] = 3.0F;
      Chart1_DW.is_s2_p = Chart1_IN_s2_on;

      /* Outport: '<Root>/h2' */
      Chart1_Y.h2 = 1.0F;
      Chart1_DW.is_s4_f = Chart1_IN_s4_on;

      /* Outport: '<Root>/h4' */
      Chart1_Y.h4 = 1.0F;
    } else if ((Chart1_U.x[0] - Chart1_U.x[2] >= Chart1_U.dif[2]) &&
               (Chart1_U.x[2] <= Chart1_U.get[2])) {
      Chart1_DW.is_s4 = Chart1_IN_NO_ACTIVE_CHILD;
      Chart1_DW.is_s1_i = Chart1_IN_NO_ACTIVE_CHILD;
      Chart1_DW.is_c2_Chart1 = Chart1_IN_st34;

      /* Outport: '<Root>/h1' */
      Chart1_Y.h1 = 0.0F;

      /* Outport: '<Root>/h2' */
      Chart1_Y.h2 = 0.0F;

      /* Outport: '<Root>/Room' */
      Chart1_Y.Room[0] = 3.0F;
      Chart1_Y.Room[1] = 4.0F;
      Chart1_DW.is_s3_p = Chart1_IN_s3_on;

      /* Outport: '<Root>/h3' */
      Chart1_Y.h3 = 1.0F;
      Chart1_DW.is_s4_d = Chart1_IN_s4_on;

      /* Outport: '<Root>/h4' */
      Chart1_Y.h4 = 1.0F;
    } else {
      if (Chart1_DW.is_s1_i == Chart1_IN_s1_off) {
        /* Inport: '<Root>/on' */
        if (Chart1_U.x[0] <= Chart1_U.on[0]) {
          Chart1_DW.is_s1_i = Chart1_IN_s1_on;

          /* Outport: '<Root>/h1' */
          Chart1_Y.h1 = 1.0F;
        }

        /* Inport: '<Root>/off' */
        /* case IN_s1_on: */
      } else if (Chart1_U.x[0] >= Chart1_U.off[0]) {
        Chart1_DW.is_s1_i = Chart1_IN_s1_off;

        /* Outport: '<Root>/h1' */
        Chart1_Y.h1 = 0.0F;
      }

      if (Chart1_DW.is_s4 == Chart1_IN_s4_off) {
        /* Inport: '<Root>/on' */
        if (Chart1_U.x[3] <= Chart1_U.on[3]) {
          Chart1_DW.is_s4 = Chart1_IN_s4_on;

          /* Outport: '<Root>/h4' */
          Chart1_Y.h4 = 1.0F;
        }

        /* Inport: '<Root>/off' */
        /* case IN_s4_on: */
      } else if (Chart1_U.x[3] >= Chart1_U.off[3]) {
        Chart1_DW.is_s4 = Chart1_IN_s4_off;

        /* Outport: '<Root>/h4' */
        Chart1_Y.h4 = 0.0F;
      }
    }
  }

  /* End of Inport: '<Root>/x' */
}

/* Function for Chart: '<Root>/Chart1' */
static void Chart1_st23(void)
{
  /* Inport: '<Root>/x' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Chart1_U.x[2] - Chart1_U.x[0] >= Chart1_U.dif[0]) && (Chart1_U.x[0] <=
       Chart1_U.get[0])) {
    Chart1_DW.is_s3_j = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s2_l = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st12;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 2.0F;
    Chart1_DW.is_s1_f = Chart1_IN_s1_on1;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s2 = Chart1_IN_s2_on;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;
  } else if ((Chart1_U.x[1] - Chart1_U.x[0] >= Chart1_U.dif[0]) && (Chart1_U.x[0]
              <= Chart1_U.get[0])) {
    Chart1_DW.is_s3_j = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s2_l = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st13;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 3.0F;
    Chart1_DW.is_s1 = Chart1_IN_s1_on;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s3 = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
  } else if ((Chart1_U.x[2] - Chart1_U.x[3] >= Chart1_U.dif[3]) && (Chart1_U.x[3]
              <= Chart1_U.get[3])) {
    Chart1_DW.is_s3_j = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s2_l = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st24;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 3.0F;
    Chart1_DW.is_s2_p = Chart1_IN_s2_on;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;
    Chart1_DW.is_s4_f = Chart1_IN_s4_on;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 1.0F;
  } else if ((Chart1_U.x[1] - Chart1_U.x[3] >= Chart1_U.dif[3]) && (Chart1_U.x[3]
              <= Chart1_U.get[3])) {
    Chart1_DW.is_s3_j = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s2_l = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st34;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 3.0F;
    Chart1_Y.Room[1] = 4.0F;
    Chart1_DW.is_s3_p = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
    Chart1_DW.is_s4_d = Chart1_IN_s4_on;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 1.0F;
  } else {
    if (Chart1_DW.is_s2_l == Chart1_IN_s1_off) {
      /* Inport: '<Root>/on' */
      if (Chart1_U.x[1] <= Chart1_U.on[1]) {
        Chart1_DW.is_s2_l = Chart1_IN_s2_on;

        /* Outport: '<Root>/h2' */
        Chart1_Y.h2 = 1.0F;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s2_on: */
    } else if (Chart1_U.x[1] >= Chart1_U.off[1]) {
      Chart1_DW.is_s2_l = Chart1_IN_s1_off;

      /* Outport: '<Root>/h2' */
      Chart1_Y.h2 = 0.0F;
    }

    if (Chart1_DW.is_s3_j == Chart1_IN_s3_off) {
      /* Inport: '<Root>/on' */
      if (Chart1_U.x[2] <= Chart1_U.on[2]) {
        Chart1_DW.is_s3_j = Chart1_IN_s3_on;

        /* Outport: '<Root>/h3' */
        Chart1_Y.h3 = 1.0F;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s3_on: */
    } else if (Chart1_U.x[2] >= Chart1_U.off[2]) {
      Chart1_DW.is_s3_j = Chart1_IN_s3_off;

      /* Outport: '<Root>/h3' */
      Chart1_Y.h3 = 0.0F;
    }
  }

  /* End of Inport: '<Root>/x' */
}

/* Function for Chart: '<Root>/Chart1' */
static void Chart1_st24(void)
{
  /* Inport: '<Root>/x' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Chart1_U.x[3] - Chart1_U.x[0] >= Chart1_U.dif[0]) && (Chart1_U.x[0] <=
       Chart1_U.get[0])) {
    Chart1_DW.is_s4_f = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s2_p = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st12;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 2.0F;
    Chart1_DW.is_s1_f = Chart1_IN_s1_on1;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s2 = Chart1_IN_s2_on;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;
  } else if ((Chart1_U.x[1] - Chart1_U.x[3] >= Chart1_U.dif[3]) && (Chart1_U.x[3]
              <= Chart1_U.get[3])) {
    Chart1_DW.is_s4_f = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s2_p = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st14;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 4.0F;
    Chart1_DW.is_s1_i = Chart1_IN_s1_on;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s4 = Chart1_IN_s4_on;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 1.0F;
  } else if ((Chart1_U.x[3] - Chart1_U.x[2] >= Chart1_U.dif[2]) && (Chart1_U.x[2]
              <= Chart1_U.get[2])) {
    Chart1_DW.is_s4_f = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s2_p = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st23;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 2.0F;
    Chart1_Y.Room[1] = 3.0F;
    Chart1_DW.is_s2_l = Chart1_IN_s2_on;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;
    Chart1_DW.is_s3_j = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
  } else if ((Chart1_U.x[1] - Chart1_U.x[2] >= Chart1_U.dif[2]) && (Chart1_U.x[2]
              <= Chart1_U.get[2])) {
    Chart1_DW.is_s4_f = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s2_p = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st34;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 3.0F;
    Chart1_Y.Room[1] = 4.0F;
    Chart1_DW.is_s3_p = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
    Chart1_DW.is_s4_d = Chart1_IN_s4_on;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 1.0F;
  } else {
    if (Chart1_DW.is_s2_p == Chart1_IN_s2_off) {
      /* Inport: '<Root>/on' */
      if (Chart1_U.x[1] <= Chart1_U.on[1]) {
        Chart1_DW.is_s2_p = Chart1_IN_s2_on;

        /* Outport: '<Root>/h2' */
        Chart1_Y.h2 = 1.0F;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s2_on: */
    } else if (Chart1_U.x[1] >= Chart1_U.off[1]) {
      Chart1_DW.is_s2_p = Chart1_IN_s2_off;

      /* Outport: '<Root>/h2' */
      Chart1_Y.h2 = 0.0F;
    }

    if (Chart1_DW.is_s4_f == Chart1_IN_s4_off) {
      /* Inport: '<Root>/on' */
      if (Chart1_U.x[3] <= Chart1_U.on[3]) {
        Chart1_DW.is_s4_f = Chart1_IN_s4_on;

        /* Outport: '<Root>/h4' */
        Chart1_Y.h4 = 1.0F;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s4_on: */
    } else if (Chart1_U.x[3] >= Chart1_U.off[3]) {
      Chart1_DW.is_s4_f = Chart1_IN_s4_off;

      /* Outport: '<Root>/h4' */
      Chart1_Y.h4 = 0.0F;
    }
  }

  /* End of Inport: '<Root>/x' */
}

/* Function for Chart: '<Root>/Chart1' */
static void Chart1_st34(void)
{
  /* Inport: '<Root>/x' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   */
  if ((Chart1_U.x[3] - Chart1_U.x[0] >= Chart1_U.dif[0]) && (Chart1_U.x[0] <=
       Chart1_U.get[0])) {
    Chart1_DW.is_s4_d = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s3_p = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st13;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 3.0F;
    Chart1_DW.is_s1 = Chart1_IN_s1_on;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s3 = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
  } else if ((Chart1_U.x[2] - Chart1_U.x[0] >= Chart1_U.dif[0]) && (Chart1_U.x[0]
              <= Chart1_U.get[0])) {
    Chart1_DW.is_s4_d = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s3_p = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st14;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 0.0F;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 4.0F;
    Chart1_DW.is_s1_i = Chart1_IN_s1_on;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 1.0F;
    Chart1_DW.is_s4 = Chart1_IN_s4_on;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 1.0F;
  } else if ((Chart1_U.x[3] - Chart1_U.x[1] >= Chart1_U.dif[1]) && (Chart1_U.x[1]
              <= Chart1_U.get[1])) {
    Chart1_DW.is_s4_d = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s3_p = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st23;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 2.0F;
    Chart1_Y.Room[1] = 3.0F;
    Chart1_DW.is_s2_l = Chart1_IN_s2_on;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;
    Chart1_DW.is_s3_j = Chart1_IN_s3_on;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;
  } else if ((Chart1_U.x[2] - Chart1_U.x[1] >= Chart1_U.dif[1]) && (Chart1_U.x[1]
              <= Chart1_U.get[1])) {
    Chart1_DW.is_s4_d = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_s3_p = Chart1_IN_NO_ACTIVE_CHILD;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_st24;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 0.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 1.0F;
    Chart1_Y.Room[1] = 3.0F;
    Chart1_DW.is_s2_p = Chart1_IN_s2_on;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;
    Chart1_DW.is_s4_f = Chart1_IN_s4_on;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 1.0F;
  } else {
    if (Chart1_DW.is_s3_p == Chart1_IN_s3_off) {
      /* Inport: '<Root>/on' */
      if (Chart1_U.x[2] <= Chart1_U.on[2]) {
        Chart1_DW.is_s3_p = Chart1_IN_s3_on;

        /* Outport: '<Root>/h3' */
        Chart1_Y.h3 = 1.0F;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s3_on: */
    } else if (Chart1_U.x[2] >= Chart1_U.off[2]) {
      Chart1_DW.is_s3_p = Chart1_IN_s3_off;

      /* Outport: '<Root>/h3' */
      Chart1_Y.h3 = 0.0F;
    }

    if (Chart1_DW.is_s4_d == Chart1_IN_s4_off) {
      /* Inport: '<Root>/on' */
      if (Chart1_U.x[3] <= Chart1_U.on[3]) {
        Chart1_DW.is_s4_d = Chart1_IN_s4_on;

        /* Outport: '<Root>/h4' */
        Chart1_Y.h4 = 1.0F;
      }

      /* Inport: '<Root>/off' */
      /* case IN_s4_on: */
    } else if (Chart1_U.x[3] >= Chart1_U.off[3]) {
      Chart1_DW.is_s4_d = Chart1_IN_s4_off;

      /* Outport: '<Root>/h4' */
      Chart1_Y.h4 = 0.0F;
    }
  }

  /* End of Inport: '<Root>/x' */
}

/* Model step function */
void Chart1_step(void)
{
  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/dif'
   *  Inport: '<Root>/get'
   *  Inport: '<Root>/off'
   *  Inport: '<Root>/on'
   *  Inport: '<Root>/x'
   */
  if (Chart1_DW.is_active_c2_Chart1 == 0U) {
    Chart1_DW.is_active_c2_Chart1 = 1U;
    Chart1_DW.is_c2_Chart1 = Chart1_IN_start;

    /* Outport: '<Root>/h1' */
    Chart1_Y.h1 = 0.0F;

    /* Outport: '<Root>/h4' */
    Chart1_Y.h4 = 0.0F;

    /* Outport: '<Root>/h2' */
    Chart1_Y.h2 = 1.0F;

    /* Outport: '<Root>/h3' */
    Chart1_Y.h3 = 1.0F;

    /* Outport: '<Root>/Room' */
    Chart1_Y.Room[0] = 2.0F;
    Chart1_Y.Room[1] = 3.0F;
  } else {
    switch (Chart1_DW.is_c2_Chart1) {
     case Chart1_IN_st12:
      if ((Chart1_U.x[1] - Chart1_U.x[2] >= Chart1_U.dif[2]) && (Chart1_U.x[2] <=
           Chart1_U.get[2])) {
        Chart1_DW.is_s2 = Chart1_IN_NO_ACTIVE_CHILD;
        Chart1_DW.is_s1_f = Chart1_IN_NO_ACTIVE_CHILD;
        Chart1_DW.is_c2_Chart1 = Chart1_IN_st13;

        /* Outport: '<Root>/h2' */
        Chart1_Y.h2 = 0.0F;

        /* Outport: '<Root>/h4' */
        Chart1_Y.h4 = 0.0F;

        /* Outport: '<Root>/Room' */
        Chart1_Y.Room[0] = 1.0F;
        Chart1_Y.Room[1] = 3.0F;
        Chart1_DW.is_s1 = Chart1_IN_s1_on;

        /* Outport: '<Root>/h1' */
        Chart1_Y.h1 = 1.0F;
        Chart1_DW.is_s3 = Chart1_IN_s3_on;

        /* Outport: '<Root>/h3' */
        Chart1_Y.h3 = 1.0F;
      } else if ((Chart1_U.x[0] - Chart1_U.x[2] >= Chart1_U.dif[2]) &&
                 (Chart1_U.x[2] <= Chart1_U.get[2])) {
        Chart1_DW.is_s2 = Chart1_IN_NO_ACTIVE_CHILD;
        Chart1_DW.is_s1_f = Chart1_IN_NO_ACTIVE_CHILD;
        Chart1_DW.is_c2_Chart1 = Chart1_IN_st23;

        /* Outport: '<Root>/h1' */
        Chart1_Y.h1 = 0.0F;

        /* Outport: '<Root>/h4' */
        Chart1_Y.h4 = 0.0F;

        /* Outport: '<Root>/Room' */
        Chart1_Y.Room[0] = 2.0F;
        Chart1_Y.Room[1] = 3.0F;
        Chart1_DW.is_s2_l = Chart1_IN_s2_on;

        /* Outport: '<Root>/h2' */
        Chart1_Y.h2 = 1.0F;
        Chart1_DW.is_s3_j = Chart1_IN_s3_on;

        /* Outport: '<Root>/h3' */
        Chart1_Y.h3 = 1.0F;
      } else if ((Chart1_U.x[1] - Chart1_U.x[3] >= Chart1_U.dif[3]) &&
                 (Chart1_U.x[3] <= Chart1_U.get[3])) {
        Chart1_DW.is_s2 = Chart1_IN_NO_ACTIVE_CHILD;
        Chart1_DW.is_s1_f = Chart1_IN_NO_ACTIVE_CHILD;
        Chart1_DW.is_c2_Chart1 = Chart1_IN_st14;

        /* Outport: '<Root>/h2' */
        Chart1_Y.h2 = 0.0F;

        /* Outport: '<Root>/h3' */
        Chart1_Y.h3 = 0.0F;

        /* Outport: '<Root>/Room' */
        Chart1_Y.Room[0] = 1.0F;
        Chart1_Y.Room[1] = 4.0F;
        Chart1_DW.is_s1_i = Chart1_IN_s1_on;

        /* Outport: '<Root>/h1' */
        Chart1_Y.h1 = 1.0F;
        Chart1_DW.is_s4 = Chart1_IN_s4_on;

        /* Outport: '<Root>/h4' */
        Chart1_Y.h4 = 1.0F;
      } else if ((Chart1_U.x[0] - Chart1_U.x[3] >= Chart1_U.dif[3]) &&
                 (Chart1_U.x[3] <= Chart1_U.get[3])) {
        Chart1_DW.is_s2 = Chart1_IN_NO_ACTIVE_CHILD;
        Chart1_DW.is_s1_f = Chart1_IN_NO_ACTIVE_CHILD;
        Chart1_DW.is_c2_Chart1 = Chart1_IN_st24;

        /* Outport: '<Root>/h1' */
        Chart1_Y.h1 = 0.0F;

        /* Outport: '<Root>/h3' */
        Chart1_Y.h3 = 0.0F;

        /* Outport: '<Root>/Room' */
        Chart1_Y.Room[0] = 1.0F;
        Chart1_Y.Room[1] = 3.0F;
        Chart1_DW.is_s2_p = Chart1_IN_s2_on;

        /* Outport: '<Root>/h2' */
        Chart1_Y.h2 = 1.0F;
        Chart1_DW.is_s4_f = Chart1_IN_s4_on;

        /* Outport: '<Root>/h4' */
        Chart1_Y.h4 = 1.0F;
      } else {
        if (Chart1_DW.is_s1_f == Chart1_IN_s1_off) {
          if (Chart1_U.x[0] <= Chart1_U.on[0]) {
            Chart1_DW.is_s1_f = Chart1_IN_s1_on1;

            /* Outport: '<Root>/h1' */
            Chart1_Y.h1 = 1.0F;
          }

          /* case IN_s1_on1: */
        } else if (Chart1_U.x[0] >= Chart1_U.off[0]) {
          Chart1_DW.is_s1_f = Chart1_IN_s1_off;

          /* Outport: '<Root>/h1' */
          Chart1_Y.h1 = 0.0F;
        }

        if (Chart1_DW.is_s2 == Chart1_IN_s1_off1) {
          if (Chart1_U.x[1] <= Chart1_U.on[1]) {
            Chart1_DW.is_s2 = Chart1_IN_s2_on;

            /* Outport: '<Root>/h2' */
            Chart1_Y.h2 = 1.0F;
          }

          /* case IN_s2_on: */
        } else if (Chart1_U.x[1] >= Chart1_U.off[1]) {
          Chart1_DW.is_s2 = Chart1_IN_s1_off1;

          /* Outport: '<Root>/h2' */
          Chart1_Y.h2 = 0.0F;
        }
      }
      break;

     case Chart1_IN_st13:
      Chart1_st13();
      break;

     case Chart1_IN_st14:
      Chart1_st14();
      break;

     case Chart1_IN_st23:
      Chart1_st23();
      break;

     case Chart1_IN_st24:
      Chart1_st24();
      break;

     case Chart1_IN_st34:
      Chart1_st34();
      break;

     default:
      /* case IN_start: */
      Chart1_DW.is_c2_Chart1 = Chart1_IN_st23;

      /* Outport: '<Root>/h1' */
      Chart1_Y.h1 = 0.0F;

      /* Outport: '<Root>/h4' */
      Chart1_Y.h4 = 0.0F;

      /* Outport: '<Root>/Room' */
      Chart1_Y.Room[0] = 2.0F;
      Chart1_Y.Room[1] = 3.0F;
      Chart1_DW.is_s2_l = Chart1_IN_s2_on;

      /* Outport: '<Root>/h2' */
      Chart1_Y.h2 = 1.0F;
      Chart1_DW.is_s3_j = Chart1_IN_s3_on;

      /* Outport: '<Root>/h3' */
      Chart1_Y.h3 = 1.0F;
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void Chart1_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Chart1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
