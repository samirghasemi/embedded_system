/*
 * File: Chart1_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "Chart1_ca.h"

CA_HWImpl_TestResults CA_Chart1_HWRes;
CA_PWS_TestResults CA_Chart1_PWSRes;
const CA_HWImpl CA_Chart1_ExpHW = {
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
  0,                                   /* LongLongMode */
  0,                                   /* PortableWordSizes */
  "Atmel->AVR",                        /* HWDeviceType */
  0,                                   /* MemoryAtStartup */
  0,                                   /* DynamicMemoryAtStartup */
  0,                                   /* DenormalFlushToZero */
  0                                    /* DenormalAsZero */
};

CA_HWImpl CA_Chart1_ActHW;
void Chart1_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_Chart1_ActHW, &CA_Chart1_ExpHW,
    &CA_Chart1_PWSRes);
  caVerifyHWImpl(&CA_Chart1_ActHW, &CA_Chart1_ExpHW, &CA_Chart1_HWRes);
}
