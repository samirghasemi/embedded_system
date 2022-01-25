/*
 * File: Thermostat_SUBSYSTEM_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef THERMOSTAT_SUBSYSTEM_CA_H
#define THERMOSTAT_SUBSYSTEM_CA_H

/* preprocessor validation checks */
#include "Thermostat_SUBSYSTEM_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_Thermostat_SUBSYSTEM_HWRes;
extern CA_PWS_TestResults CA_Thermostat_SUBSYSTEM_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_Thermostat_SUBSYSTEM_ExpHW;
extern CA_HWImpl CA_Thermostat_SUBSYSTEM_ActHW;

/* entry point function to run tests */
void Thermostat_SUBSYSTEM_caRunTests(void);

#endif                                 /* THERMOSTAT_SUBSYSTEM_CA_H */
