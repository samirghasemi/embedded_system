/*
 * File: coder_assumptions.h
 *
 * Abstract: Coder assumptions header file
 */

#ifndef CODER_ASSUMPTIONS_H
#define CODER_ASSUMPTIONS_H

/* include model specific checks */
#include "Thermostat_SUBSYSTEM_ca.h"

/* global results variable mapping for static code */
#define CA_Expected_HWImpl             CA_Thermostat_SUBSYSTEM_ExpHW
#define CA_Actual_HWImpl               CA_Thermostat_SUBSYSTEM_ActHW
#define CA_HWImpl_Results              CA_Thermostat_SUBSYSTEM_HWRes
#define CA_PortableWordSizes_Results   CA_Thermostat_SUBSYSTEM_PWSRes

/* entry point function mapping for static code */
#define CA_Run_Tests                   Thermostat_SUBSYSTEM_caRunTests
#endif                                 /* CODER_ASSUMPTIONS_H */
