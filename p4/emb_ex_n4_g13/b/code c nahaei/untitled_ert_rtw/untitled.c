/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Nov 19 20:55:08 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define untitled_IN_NO_ACTIVE_CHILD    ((uint8_T)0U)
#define untitled_IN_state1             ((uint8_T)1U)
#define untitled_IN_state10            ((uint8_T)1U)
#define untitled_IN_state11            ((uint8_T)2U)
#define untitled_IN_state12            ((uint8_T)1U)
#define untitled_IN_state13            ((uint8_T)2U)
#define untitled_IN_state2             ((uint8_T)2U)
#define untitled_IN_state3             ((uint8_T)3U)
#define untitled_IN_state4             ((uint8_T)1U)
#define untitled_IN_state5             ((uint8_T)2U)
#define untitled_IN_state6             ((uint8_T)1U)
#define untitled_IN_state7             ((uint8_T)2U)
#define untitled_IN_state8             ((uint8_T)1U)
#define untitled_IN_state9             ((uint8_T)2U)

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Forward declaration for local functions */
static void untitled_enter_internal_state1(void);

/* Function for Chart: '<Root>/Chart' */
static void untitled_enter_internal_state1(void)
{
  switch (untitled_DW.was_state1) {
   case untitled_IN_state4:
    untitled_DW.is_state1 = untitled_IN_state4;
    untitled_DW.was_state1 = untitled_IN_state4;

    /* Outport: '<Root>/out4' */
    untitled_Y.out4 = 1.0;
    break;

   case untitled_IN_state5:
    untitled_DW.is_state1 = untitled_IN_state5;
    untitled_DW.was_state1 = untitled_IN_state5;

    /* Outport: '<Root>/out5' */
    untitled_Y.out5 = 1.0;
    break;

   default:
    untitled_DW.is_state1 = untitled_IN_state4;
    untitled_DW.was_state1 = untitled_IN_state4;

    /* Outport: '<Root>/out4' */
    untitled_Y.out4 = 1.0;
    break;
  }
}

/* Model step function */
void untitled_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/a'
   *  Inport: '<Root>/b'
   *  Inport: '<Root>/c'
   *  Inport: '<Root>/d'
   *  Inport: '<Root>/e'
   *  Inport: '<Root>/f'
   */
  if (untitled_DW.is_active_c3_untitled == 0U) {
    untitled_DW.is_active_c3_untitled = 1U;
    untitled_DW.is_c3_untitled = untitled_IN_state1;
    untitled_enter_internal_state1();
  } else {
    switch (untitled_DW.is_c3_untitled) {
     case untitled_IN_state1:
      if (untitled_U.f == 1.0) {
        switch (untitled_DW.is_state1) {
         case untitled_IN_state4:
          /* Outport: '<Root>/out4' */
          untitled_Y.out4 = 0.0;
          untitled_DW.is_state1 = untitled_IN_NO_ACTIVE_CHILD;
          break;

         case untitled_IN_state5:
          /* Outport: '<Root>/out5' */
          untitled_Y.out5 = 0.0;
          untitled_DW.is_state1 = untitled_IN_NO_ACTIVE_CHILD;
          break;
        }

        untitled_DW.is_c3_untitled = untitled_IN_state2;
        untitled_DW.is_state2 = untitled_IN_state6;
        untitled_DW.is_e = untitled_IN_state11;
        untitled_DW.is_f = untitled_IN_state13;
        untitled_DW.is_d = untitled_IN_state9;
      } else if (untitled_U.d == 1.0) {
        switch (untitled_DW.is_state1) {
         case untitled_IN_state4:
          /* Outport: '<Root>/out4' */
          untitled_Y.out4 = 0.0;
          untitled_DW.is_state1 = untitled_IN_NO_ACTIVE_CHILD;
          break;

         case untitled_IN_state5:
          /* Outport: '<Root>/out5' */
          untitled_Y.out5 = 0.0;
          untitled_DW.is_state1 = untitled_IN_NO_ACTIVE_CHILD;
          break;
        }

        untitled_DW.is_c3_untitled = untitled_IN_state3;

        /* Outport: '<Root>/out3' */
        untitled_Y.out3 = 1.0;
      } else if (untitled_DW.is_state1 == untitled_IN_state4) {
        if (untitled_U.b == 1.0) {
          /* Outport: '<Root>/out4' */
          untitled_Y.out4 = 0.0;
          untitled_DW.is_state1 = untitled_IN_state5;
          untitled_DW.was_state1 = untitled_IN_state5;

          /* Outport: '<Root>/out5' */
          untitled_Y.out5 = 1.0;
        } else {
          /* Outport: '<Root>/out4' */
          untitled_Y.out4 = 1.0;
        }

        /* case IN_state5: */
      } else if (untitled_U.a == 1.0) {
        /* Outport: '<Root>/out5' */
        untitled_Y.out5 = 0.0;
        untitled_DW.is_state1 = untitled_IN_state4;
        untitled_DW.was_state1 = untitled_IN_state4;

        /* Outport: '<Root>/out4' */
        untitled_Y.out4 = 1.0;
      } else {
        /* Outport: '<Root>/out5' */
        untitled_Y.out5 = 1.0;
      }
      break;

     case untitled_IN_state2:
      if (untitled_DW.is_state2 == untitled_IN_state6) {
        if (untitled_U.d == 1.0) {
          if (untitled_DW.is_d == untitled_IN_state8) {
            /* Outport: '<Root>/out8' */
            untitled_Y.out8 = 0.0;
            untitled_DW.is_d = untitled_IN_NO_ACTIVE_CHILD;
          } else {
            untitled_DW.is_d = untitled_IN_NO_ACTIVE_CHILD;
          }

          if (untitled_DW.is_f == untitled_IN_state12) {
            /* Outport: '<Root>/out11' */
            untitled_Y.out11 = 0.0;
            untitled_DW.is_f = untitled_IN_NO_ACTIVE_CHILD;
          } else {
            untitled_DW.is_f = untitled_IN_NO_ACTIVE_CHILD;
          }

          if (untitled_DW.is_e == untitled_IN_state10) {
            /* Outport: '<Root>/out10' */
            untitled_Y.out10 = 0.0;
            untitled_DW.is_e = untitled_IN_NO_ACTIVE_CHILD;
          } else {
            untitled_DW.is_e = untitled_IN_NO_ACTIVE_CHILD;
          }

          untitled_DW.is_state2 = untitled_IN_state7;

          /* Outport: '<Root>/out7' */
          untitled_Y.out7 = 1.0;
        } else {
          if (untitled_DW.is_e == untitled_IN_state10) {
            if (untitled_U.c == 1.0) {
              /* Outport: '<Root>/out10' */
              untitled_Y.out10 = 0.0;
              untitled_DW.is_e = untitled_IN_state11;
            } else {
              /* Outport: '<Root>/out10' */
              untitled_Y.out10 = 1.0;
            }

            /* case IN_state11: */
          } else if (untitled_U.c == 1.0) {
            untitled_DW.is_e = untitled_IN_state10;

            /* Outport: '<Root>/out10' */
            untitled_Y.out10 = 1.0;
          }

          if (untitled_DW.is_f == untitled_IN_state12) {
            if (untitled_U.a == 1.0) {
              /* Outport: '<Root>/out11' */
              untitled_Y.out11 = 0.0;
              untitled_DW.is_f = untitled_IN_state13;
            } else {
              /* Outport: '<Root>/out11' */
              untitled_Y.out11 = 1.0;
            }

            /* case IN_state13: */
          } else if (untitled_U.c == 1.0) {
            untitled_DW.is_f = untitled_IN_state12;

            /* Outport: '<Root>/out11' */
            untitled_Y.out11 = 1.0;
          }

          if (untitled_DW.is_d == untitled_IN_state8) {
            if (untitled_U.b == 1.0) {
              /* Outport: '<Root>/out8' */
              untitled_Y.out8 = 0.0;
              untitled_DW.is_d = untitled_IN_state9;
            } else {
              /* Outport: '<Root>/out8' */
              untitled_Y.out8 = 1.0;
            }

            /* case IN_state9: */
          } else if (untitled_U.a == 1.0) {
            untitled_DW.is_d = untitled_IN_state8;

            /* Outport: '<Root>/out8' */
            untitled_Y.out8 = 1.0;
          }
        }

        /* case IN_state7: */
      } else if (untitled_U.b == 1.0) {
        /* Outport: '<Root>/out7' */
        untitled_Y.out7 = 0.0;
        untitled_DW.is_state2 = untitled_IN_NO_ACTIVE_CHILD;
        untitled_DW.is_c3_untitled = untitled_IN_state1;
        untitled_enter_internal_state1();
      } else if (untitled_U.e == 1.0) {
        /* Outport: '<Root>/out7' */
        untitled_Y.out7 = 0.0;
        untitled_DW.is_state2 = untitled_IN_state6;
        untitled_DW.is_e = untitled_IN_state11;
        untitled_DW.is_f = untitled_IN_state13;
        untitled_DW.is_d = untitled_IN_state9;
      } else {
        /* Outport: '<Root>/out7' */
        untitled_Y.out7 = 1.0;
      }
      break;

     default:
      /* case IN_state3: */
      if (untitled_U.e == 1.0) {
        /* Outport: '<Root>/out3' */
        untitled_Y.out3 = 0.0;
        untitled_DW.is_c3_untitled = untitled_IN_state1;
        untitled_DW.is_state1 = untitled_IN_state5;
        untitled_DW.was_state1 = untitled_IN_state5;

        /* Outport: '<Root>/out5' */
        untitled_Y.out5 = 1.0;
      } else {
        /* Outport: '<Root>/out3' */
        untitled_Y.out3 = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
