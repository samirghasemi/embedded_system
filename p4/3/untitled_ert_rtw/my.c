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

/*
 * File: untitled.h
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

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#include <stddef.h>
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
/*
 * File: rtwtypes.h
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

#ifndef RTWTYPES_H
#define RTWTYPES_H

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

/*=======================================================================*
 * Target hardware information
 *   Device type: Atmel->AVR
 *   Number of bits:     char:   8    short:   16    int:  16
 *                       long:  32
 *                       native word size:   8
 *   Byte ordering: LittleEndian
 *   Signed integer division rounds to: Zero
 *   Shift right on a signed integer as arithmetic shift: on
 *=======================================================================*/

/*=======================================================================*
 * Fixed width word size data types:                                     *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
 *=======================================================================*/
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef int int16_T;
typedef unsigned int uint16_T;
typedef long int32_T;
typedef unsigned long uint32_T;
typedef float real32_T;
typedef double real64_T;

/*===========================================================================*
 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
 *                           real_T, time_T, ulong_T.                        *
 *===========================================================================*/
typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;

/*===========================================================================*
 * Complex number type definitions                                           *
 *===========================================================================*/
#define CREAL_T

typedef struct {
  real32_T re;
  real32_T im;
} creal32_T;

typedef struct {
  real64_T re;
  real64_T im;
} creal64_T;

typedef struct {
  real_T re;
  real_T im;
} creal_T;

#define CINT8_T

typedef struct {
  int8_T re;
  int8_T im;
} cint8_T;

#define CUINT8_T

typedef struct {
  uint8_T re;
  uint8_T im;
} cuint8_T;

#define CINT16_T

typedef struct {
  int16_T re;
  int16_T im;
} cint16_T;

#define CUINT16_T

typedef struct {
  uint16_T re;
  uint16_T im;
} cuint16_T;

#define CINT32_T

typedef struct {
  int32_T re;
  int32_T im;
} cint32_T;

#define CUINT32_T

typedef struct {
  uint32_T re;
  uint32_T im;
} cuint32_T;

/*=======================================================================*
 * Min and Max:                                                          *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *=======================================================================*/
#define MAX_int8_T                     ((int8_T)(127))
#define MIN_int8_T                     ((int8_T)(-128))
#define MAX_uint8_T                    ((uint8_T)(255U))
#define MAX_int16_T                    ((int16_T)(32767))
#define MIN_int16_T                    ((int16_T)(-32768))
#define MAX_uint16_T                   ((uint16_T)(65535U))
#define MAX_int32_T                    ((int32_T)(2147483647L))
#define MIN_int32_T                    ((int32_T)(-2147483647L-1L))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFUL))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

#endif                                 /* untitled_COMMON_INCLUDES_ */

/*
 * File: untitled_types.h
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

#ifndef RTW_HEADER_untitled_types_h_
#define RTW_HEADER_untitled_types_h_

/* Model Code Variants */

/* Forward declaration for rtModel */
typedef struct tag_RTM_untitled_T RT_MODEL_untitled_T;

#endif                                 /* RTW_HEADER_untitled_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 0
#include "arduinoAVRScheduler.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE Arduino Uno
#define MW_CONNECTIONINFO_SERIAL_IPADDRESS codertarget.arduinobase.registry.getLoopbackIP;
#define MW_CONNECTIONINFO_SERIAL_PORT 17725
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 0
#define MW_CONNECTIONINFO_TCPIP_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Ethernet')
#define MW_CONNECTIONINFO_TCPIP_PORT 17725
#define MW_CONNECTIONINFO_TCPIP_VERBOSE 0
#define MW_CONNECTIONINFO_WIFI_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Wifi')
#define MW_CONNECTIONINFO_WIFI_PORT 17725
#define MW_CONNECTIONINFO_WIFI_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONSERIAL_BAUDRATE codertarget.arduinobase.registry.getBaudRate
#define MW_CONNECTIONINFO_XCPONSERIAL_COMPORT codertarget.arduinobase.internal.getExternalModeMexArgs('Serial')
#define MW_CONNECTIONINFO_XCPONSERIAL_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONTCPIP_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Ethernet')
#define MW_CONNECTIONINFO_XCPONTCPIP_PORT 17725
#define MW_CONNECTIONINFO_XCPONTCPIP_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONWIFI_IPADDRESS codertarget.arduinobase.internal.getExternalModeMexArgs('Wifi')
#define MW_CONNECTIONINFO_XCPONWIFI_PORT 17725
#define MW_CONNECTIONINFO_XCPONWIFI_VERBOSE 0
#define MW_EXTMODE_CONFIGURATION Serial
#define MW_EXTMODE_COMPORTBAUD 921600
#define MW_EXTMODE_HOSTINTERFACE 0
#define MW_EXTMODE_SIGNALBUFFERSIZE 250.000000
#define MW_RTOS Baremetal
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_RUNTIME_DISABLEPARALLELBUILD 0
#define MW_RUNTIME_FORCEBUILDSTATICLIBRARY 0
#define MW_HOSTCOMPORT_SET_HOST_COM_PORT 0
#define MW_HOSTCOMPORT_COM_PORT_NUMBER 1
#define MW_SIMULINKIO_ENABLE_SIMULINKIO 1
#define MW_OVERRUNDETECTION_ENABLE_OVERRUN_DETECTION 0
#define MW_OVERRUNDETECTION_DIGITAL_OUTPUT_TO_SET_ON_OVERRUN 13
#define MW_ANALOGINREFVOLTAGE_ANALOG_INPUT_REFERENCE_VOLTAGE 0.000000
#define MW_SERIAL_SERIAL0_BAUD_RATE 3
#define MW_I2C_I2C0BUSSPEEDHZ 100000
#define MW_SPI_SPI_CLOCK_OUT_FREQUENCY 1
#define MW_SPI_SPI_MODE 0
#define MW_SPI_SPI_BITORDER 0
#define MW_SPI_SDSLAVESELECT 4.000000
#define MW_SPI_CANCHIPSELECT 9.000000
#define MW_ETHERNET_DISABLE_DHCP_ETHERNET 0
#define MW_ETHERNET_LOCAL_IP_ADDRESS 192.168.0.20
#define MW_ETHERNET_LOCAL_MAC_ADDRESS DE:AD:BE:EF:FE:ED
#define MW_WIFI_WIFI_HARDWARE 0
#define MW_WIFI_DISABLE_DHCP_WIFI 0
#define MW_WIFI_WIFI_IP_ADDRESS 192.168.1.20
#define MW_WIFI_WIFI_SSID yourNetwork
#define MW_WIFI_SET_WIFI_ENCRYPTION 0
#define MW_WIFI_WIFI_WEP_KEY D0D0DEADF00DABBADEAFBEADED
#define MW_WIFI_WIFI_WEP_KEY_INDEX 0
#define MW_WIFI_WIFI_WPA_PASSWORD secretPassword
#define MW_WIFI_WIFI_ESP8266_HW_SERIAL_PORT 0
#define MW_THINGSPEAK_ENABLE_CUSTOMSERVER 48
#define MW_THINGSPEAK_IP_ADDRESS 184.106.153.149
#define MW_THINGSPEAK_PORT 80
#define MW_CAN_CANBUSSPEED 10
#define MW_CAN_CANOSCILLATORFREQUENCY 1
#define MW_CAN_INTERRUPTPIN 2.000000
#define MW_CAN_ALLOWALLFILTER 0
#define MW_CAN_BUFFER0IDTYPE 0
#define MW_CAN_ACCEPTANCEMASK0_NOR 0
#define MW_CAN_ACCEPTANCEFILTER0_NOR 255
#define MW_CAN_ACCEPTANCEFILTER1_NOR 255
#define MW_CAN_ACCEPTANCEMASK0_EXT 0
#define MW_CAN_ACCEPTANCEFILTER0_EXT 255
#define MW_CAN_ACCEPTANCEFILTER1_EXT 255
#define MW_CAN_BUFFER1IDTYPE 0
#define MW_CAN_ACCEPTANCEMASK1_NOR 0
#define MW_CAN_ACCEPTANCEFILTER2_NOR 255
#define MW_CAN_ACCEPTANCEFILTER3_NOR 255
#define MW_CAN_ACCEPTANCEFILTER4_NOR 255
#define MW_CAN_ACCEPTANCEFILTER5_NOR 255
#define MW_CAN_ACCEPTANCEMASK1_EXT 0
#define MW_CAN_ACCEPTANCEFILTER2_EXT 255
#define MW_CAN_ACCEPTANCEFILTER3_EXT 255
#define MW_CAN_ACCEPTANCEFILTER4_EXT 255
#define MW_CAN_ACCEPTANCEFILTER5_EXT 255
#define MW_MODBUS_MODBUS_COMMS 0
#define MW_MODBUS_MODBUS_MODE 0
#define MW_MODBUS_MODBUS_SLAVEID 1
#define MW_MODBUS_MODBUS_CONFIGCOIL 49
#define MW_MODBUS_MODBUS_COILADDR 0
#define MW_MODBUS_MODBUS_COILNUM 1
#define MW_MODBUS_MODBUS_CONFIGINPUT 49
#define MW_MODBUS_MODBUS_INPUTADDR 0
#define MW_MODBUS_MODBUS_INPUTNUM 1
#define MW_MODBUS_MODBUS_CONFIGHOLDINGREG 49
#define MW_MODBUS_MODBUS_HOLDINGREGADDR 0
#define MW_MODBUS_MODBUS_HOLDINGREGNUM 1
#define MW_MODBUS_MODBUS_CONFIGINPUTREG 49
#define MW_MODBUS_MODBUS_INPUTREGADDR 0
#define MW_MODBUS_MODBUS_INPUTREGNUM 1
#define MW_MODBUS_MODBUS_MASTERTIMEOUT 100
#define MW_RS485_RS485_SERIAL 0
#define MW_RS485_RS485_BAUD 9600
#define MW_RS485_RS485_CONFIG 3
#define MW_RS485_RS485_DEPIN 8
#define MW_RS485_RS485_REPIN 9
#define MW_DISPLAY_ENABLECODEGEN 0
#define MW_DISPLAY_APPLAUNCHBUTTON 
#define MW_DATAVERSION 2016.02
#define MW_DASHBOARDCODEGENINFO_ENABLECODEGEN 0
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_CODEGEN 1
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_BLOCKCLASS codertarget.targetHiddenBlkInsert.internal.circularGauge
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_REGFCN codertarget.arduinobase.blocks.registerDashboardBlk
#define MW_DASHBOARDCODEGENINFO_CIRCULARGAUGE_VALIDATEFCN codertarget.targetHiddenBlkInsert.internal.isDashboardBlockCodegenEnabled
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_CODEGEN 1
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_BLOCKCLASS codertarget.targetHiddenBlkInsert.internal.lcdTextDisplay
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_REGFCN codertarget.arduinobase.blocks.registerDashboardBlk
#define MW_DASHBOARDCODEGENINFO_DISPLAYBLOCK_VALIDATEFCN codertarget.targetHiddenBlkInsert.internal.isDashboardBlockCodegenEnabled

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif


/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_untitled;       /* '<Root>/Chart' */
  uint8_T is_c3_untitled;              /* '<Root>/Chart' */
  uint8_T is_state2;                   /* '<Root>/Chart' */
  uint8_T is_d;                        /* '<Root>/Chart' */
  uint8_T is_e;                        /* '<Root>/Chart' */
  uint8_T is_f;                        /* '<Root>/Chart' */
  uint8_T is_state1;                   /* '<Root>/Chart' */
  uint8_T was_state1;                  /* '<Root>/Chart' */
} DW_untitled_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T a;                            /* '<Root>/a' */
  real_T b;                            /* '<Root>/b' */
  real_T c;                            /* '<Root>/c' */
  real_T d;                            /* '<Root>/d' */
  real_T e;                            /* '<Root>/e' */
  real_T f;                            /* '<Root>/f' */
} ExtU_untitled_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T out10;                        /* '<Root>/out10' */
  real_T out11;                        /* '<Root>/out11' */
  real_T out3;                         /* '<Root>/out3' */
  real_T out4;                         /* '<Root>/out4' */
  real_T out5;                         /* '<Root>/out5' */
  real_T out7;                         /* '<Root>/out7' */
  real_T out8;                         /* '<Root>/out8' */
} ExtY_untitled_T;

/* Real-time Model Data Structure */
struct tag_RTM_untitled_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_untitled_T untitled_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_untitled_T untitled_Y;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);
extern void untitled_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled_T *const untitled_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<S1>'   : 'untitled/Chart'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: untitled_private.h
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

#ifndef RTW_HEADER_untitled_private_h_
#define RTW_HEADER_untitled_private_h_
#endif                                 /* RTW_HEADER_untitled_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


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
