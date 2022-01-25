/*
 * File: Thermostat_SUBSYSTEM_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "Thermostat_SUBSYSTEM_ca.h"

CA_HWImpl_TestResults CA_Thermostat_SUBSYSTEM_HWRes;
CA_PWS_TestResults CA_Thermostat_SUBSYSTEM_PWSRes;
const CA_HWImpl CA_Thermostat_SUBSYSTEM_ExpHW = {

#ifdef PORTABLE_WORDSIZES

  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  32,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  64,                                  /* BitPerPointer */
  64,                                  /* BitPerSizeT */
  64,                                  /* BitPerPtrDiffT */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */

#else

  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  16,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  16,                                  /* BitPerPointer */
  16,                                  /* BitPerSizeT */
  16,                                  /* BitPerPtrDiffT */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */

#endif

  0,                                   /* LongLongMode */
  1,                                   /* PortableWordSizes */
  "Atmel->AVR",                        /* HWDeviceType */
  0,                                   /* MemoryAtStartup */
  0,                                   /* DynamicMemoryAtStartup */
  0,                                   /* DenormalFlushToZero */
  0                                    /* DenormalAsZero */
};

CA_HWImpl CA_Thermostat_SUBSYSTEM_ActHW;
void Thermostat_SUBSYSTEM_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_Thermostat_SUBSYSTEM_ActHW,
    &CA_Thermostat_SUBSYSTEM_ExpHW, &CA_Thermostat_SUBSYSTEM_PWSRes);
  caVerifyHWImpl(&CA_Thermostat_SUBSYSTEM_ActHW, &CA_Thermostat_SUBSYSTEM_ExpHW,
                 &CA_Thermostat_SUBSYSTEM_HWRes);
}
