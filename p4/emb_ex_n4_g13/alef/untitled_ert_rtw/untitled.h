/*
 * File: untitled.h
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Nov 19 13:07:41 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T In1;                        /* '<Root>/In1' */
  real32_T In2;                        /* '<Root>/In2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Out1;                       /* '<Root>/Out1' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);

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
 * '<Root>' : 'untitled'
 */

/*-
 * Requirements for '<Root>': untitled
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
