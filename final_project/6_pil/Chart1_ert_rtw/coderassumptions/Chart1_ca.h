/*
 * File: Chart1_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef CHART1_CA_H
#define CHART1_CA_H

/* preprocessor validation checks */
#include "Chart1_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_Chart1_HWRes;
extern CA_PWS_TestResults CA_Chart1_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_Chart1_ExpHW;
extern CA_HWImpl CA_Chart1_ActHW;

/* entry point function to run tests */
void Chart1_caRunTests(void);

#endif                                 /* CHART1_CA_H */
