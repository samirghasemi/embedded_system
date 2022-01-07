#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 1
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



/*
 * File: rtwtypes.h
 *
 * Code generated for Simulink model 'Q3'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Nov 19 15:48:45 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
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




/*
 * File: Q3_types.h
 *
 * Code generated for Simulink model 'Q3'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Nov 19 15:48:45 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Q3_types_h_
#define RTW_HEADER_Q3_types_h_

/* Model Code Variants */

/* Forward declaration for rtModel */
typedef struct tag_RTM_Q3_T RT_MODEL_Q3_T;

#endif                                 /* RTW_HEADER_Q3_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */






/*
 * File: Q3.h
 *
 * Code generated for Simulink model 'Q3'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Nov 19 15:48:45 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Q3_h_
#define RTW_HEADER_Q3_h_
#include <stddef.h>
#ifndef Q3_COMMON_INCLUDES_
#define Q3_COMMON_INCLUDES_
// #include "rtwtypes.h"
// #include "rtw_continuous.h"
// #include "rtw_solver.h"
#endif                                 /* Q3_COMMON_INCLUDES_ */

// #include "Q3_types.h"
// #include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_Q3;             /* '<Root>/Chart' */
  uint8_T is_c3_Q3;                    /* '<Root>/Chart' */
  uint8_T is_S1;                       /* '<Root>/Chart' */
  uint8_T was_S1;                      /* '<Root>/Chart' */
  uint8_T is_S2;                       /* '<Root>/Chart' */
  uint8_T is_S14;                      /* '<Root>/Chart' */
  uint8_T is_S15;                      /* '<Root>/Chart' */
  uint8_T is_S16;                      /* '<Root>/Chart' */
} DW_Q3_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T a;                            /* '<Root>/a' */
  real_T b;                            /* '<Root>/b' */
  real_T c;                            /* '<Root>/c' */
  real_T d;                            /* '<Root>/d' */
  real_T e;                            /* '<Root>/e' */
  real_T f;                            /* '<Root>/f' */
} ExtU_Q3_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T o10;                          /* '<Root>/o10' */
  real_T o12;                          /* '<Root>/o12' */
  real_T o3;                           /* '<Root>/o3' */
  real_T o4;                           /* '<Root>/o4' */
  real_T o5;                           /* '<Root>/o5' */
  real_T o7;                           /* '<Root>/o7' */
  real_T o8;                           /* '<Root>/o8' */
} ExtY_Q3_T;

/* Real-time Model Data Structure */
struct tag_RTM_Q3_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_Q3_T Q3_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Q3_T Q3_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Q3_T Q3_Y;

/* Model entry point functions */
extern void Q3_initialize(void);
extern void Q3_step(void);
extern void Q3_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Q3_T *const Q3_M;
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
 * '<Root>' : 'Q3'
 * '<S1>'   : 'Q3/Chart'
 */
#endif                                 /* RTW_HEADER_Q3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */








/*
 * File: Q3_private.h
 *
 * Code generated for Simulink model 'Q3'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Nov 19 15:48:45 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Q3_private_h_
#define RTW_HEADER_Q3_private_h_
// #include "rtwtypes.h"
#endif                                 /* RTW_HEADER_Q3_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */





/*
 * File: Q3.c
 *
 * Code generated for Simulink model 'Q3'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Nov 19 15:48:45 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

// #include "Q3.h"
// #include "Q3_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Q3_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define Q3_IN_S1                       ((uint8_T)1U)
#define Q3_IN_S10                      ((uint8_T)1U)
#define Q3_IN_S11                      ((uint8_T)2U)
#define Q3_IN_S12                      ((uint8_T)1U)
#define Q3_IN_S13                      ((uint8_T)2U)
#define Q3_IN_S2                       ((uint8_T)2U)
#define Q3_IN_S3                       ((uint8_T)3U)
#define Q3_IN_S4                       ((uint8_T)1U)
#define Q3_IN_S5                       ((uint8_T)2U)
#define Q3_IN_S6                       ((uint8_T)1U)
#define Q3_IN_S7                       ((uint8_T)2U)
#define Q3_IN_S8                       ((uint8_T)1U)
#define Q3_IN_S9                       ((uint8_T)2U)

/* Block states (default storage) */
DW_Q3_T Q3_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Q3_T Q3_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Q3_T Q3_Y;

/* Real-time model */
static RT_MODEL_Q3_T Q3_M_;
RT_MODEL_Q3_T *const Q3_M = &Q3_M_;

/* Model step function */
void Q3_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/a'
   *  Inport: '<Root>/b'
   *  Inport: '<Root>/c'
   *  Inport: '<Root>/d'
   *  Inport: '<Root>/e'
   *  Inport: '<Root>/f'
   */
  if (Q3_DW.is_active_c3_Q3 == 0U) {
    Q3_DW.is_active_c3_Q3 = 1U;
    Q3_DW.is_c3_Q3 = Q3_IN_S1;
    switch (Q3_DW.was_S1) {
     case Q3_IN_S4:
      Q3_DW.is_S1 = Q3_IN_S4;
      Q3_DW.was_S1 = Q3_IN_S4;

      /* Outport: '<Root>/o4' */
      Q3_Y.o4 = 1.0;
      break;

     case Q3_IN_S5:
      Q3_DW.is_S1 = Q3_IN_S5;
      Q3_DW.was_S1 = Q3_IN_S5;

      /* Outport: '<Root>/o5' */
      Q3_Y.o5 = 1.0;
      break;

     default:
      Q3_DW.is_S1 = Q3_IN_S4;
      Q3_DW.was_S1 = Q3_IN_S4;

      /* Outport: '<Root>/o4' */
      Q3_Y.o4 = 1.0;
      break;
    }
  } else {
    switch (Q3_DW.is_c3_Q3) {
     case Q3_IN_S1:
      if (Q3_U.d == 1.0) {
        switch (Q3_DW.is_S1) {
         case Q3_IN_S4:
          /* Outport: '<Root>/o4' */
          Q3_Y.o4 = 0.0;
          Q3_DW.is_S1 = Q3_IN_NO_ACTIVE_CHILD;
          break;

         case Q3_IN_S5:
          /* Outport: '<Root>/o5' */
          Q3_Y.o5 = 0.0;
          Q3_DW.is_S1 = Q3_IN_NO_ACTIVE_CHILD;
          break;
        }

        Q3_DW.is_c3_Q3 = Q3_IN_S3;

        /* Outport: '<Root>/o3' */
        Q3_Y.o3 = 1.0;
      } else if (Q3_U.f == 1.0) {
        switch (Q3_DW.is_S1) {
         case Q3_IN_S4:
          /* Outport: '<Root>/o4' */
          Q3_Y.o4 = 0.0;
          Q3_DW.is_S1 = Q3_IN_NO_ACTIVE_CHILD;
          break;

         case Q3_IN_S5:
          /* Outport: '<Root>/o5' */
          Q3_Y.o5 = 0.0;
          Q3_DW.is_S1 = Q3_IN_NO_ACTIVE_CHILD;
          break;
        }

        Q3_DW.is_c3_Q3 = Q3_IN_S2;
        Q3_DW.is_S2 = Q3_IN_S6;
        Q3_DW.is_S14 = Q3_IN_S9;
        Q3_DW.is_S15 = Q3_IN_S11;
        Q3_DW.is_S16 = Q3_IN_S13;
      } else if (Q3_DW.is_S1 == Q3_IN_S4) {
        if (Q3_U.b == 1.0) {
          /* Outport: '<Root>/o4' */
          Q3_Y.o4 = 0.0;
          Q3_DW.is_S1 = Q3_IN_S5;
          Q3_DW.was_S1 = Q3_IN_S5;

          /* Outport: '<Root>/o5' */
          Q3_Y.o5 = 1.0;
        }

        /* case IN_S5: */
      } else if (Q3_U.a == 1.0) {
        /* Outport: '<Root>/o5' */
        Q3_Y.o5 = 0.0;
        Q3_DW.is_S1 = Q3_IN_S4;
        Q3_DW.was_S1 = Q3_IN_S4;

        /* Outport: '<Root>/o4' */
        Q3_Y.o4 = 1.0;
      }
      break;

     case Q3_IN_S2:
      if (Q3_DW.is_S2 == Q3_IN_S6) {
        if (Q3_U.d == 1.0) {
          if (Q3_DW.is_S16 == Q3_IN_S12) {
            /* Outport: '<Root>/o12' */
            Q3_Y.o12 = 0.0;
            Q3_DW.is_S16 = Q3_IN_NO_ACTIVE_CHILD;
          } else {
            Q3_DW.is_S16 = Q3_IN_NO_ACTIVE_CHILD;
          }

          if (Q3_DW.is_S15 == Q3_IN_S10) {
            /* Outport: '<Root>/o10' */
            Q3_Y.o10 = 0.0;
            Q3_DW.is_S15 = Q3_IN_NO_ACTIVE_CHILD;
          } else {
            Q3_DW.is_S15 = Q3_IN_NO_ACTIVE_CHILD;
          }

          if (Q3_DW.is_S14 == Q3_IN_S8) {
            /* Outport: '<Root>/o8' */
            Q3_Y.o8 = 0.0;
            Q3_DW.is_S14 = Q3_IN_NO_ACTIVE_CHILD;
          } else {
            Q3_DW.is_S14 = Q3_IN_NO_ACTIVE_CHILD;
          }

          Q3_DW.is_S2 = Q3_IN_S7;

          /* Outport: '<Root>/o7' */
          Q3_Y.o7 = 1.0;
        } else {
          if (Q3_DW.is_S14 == Q3_IN_S8) {
            if (Q3_U.b == 1.0) {
              /* Outport: '<Root>/o8' */
              Q3_Y.o8 = 0.0;
              Q3_DW.is_S14 = Q3_IN_S9;
            }

            /* case IN_S9: */
          } else if (Q3_U.a == 1.0) {
            Q3_DW.is_S14 = Q3_IN_S8;

            /* Outport: '<Root>/o8' */
            Q3_Y.o8 = 1.0;
          }

          if (Q3_DW.is_S15 == Q3_IN_S10) {
            if (Q3_U.c == 1.0) {
              /* Outport: '<Root>/o10' */
              Q3_Y.o10 = 0.0;
              Q3_DW.is_S15 = Q3_IN_S11;
            }

            /* case IN_S11: */
          } else if (Q3_U.c == 1.0) {
            Q3_DW.is_S15 = Q3_IN_S10;

            /* Outport: '<Root>/o10' */
            Q3_Y.o10 = 1.0;
          }

          if (Q3_DW.is_S16 == Q3_IN_S12) {
            if (Q3_U.a == 1.0) {
              /* Outport: '<Root>/o12' */
              Q3_Y.o12 = 0.0;
              Q3_DW.is_S16 = Q3_IN_S13;
            }

            /* case IN_S13: */
          } else if (Q3_U.c == 1.0) {
            Q3_DW.is_S16 = Q3_IN_S12;

            /* Outport: '<Root>/o12' */
            Q3_Y.o12 = 1.0;
          }
        }

        /* case IN_S7: */
      } else if (Q3_U.e == 1.0) {
        /* Outport: '<Root>/o7' */
        Q3_Y.o7 = 0.0;
        Q3_DW.is_S2 = Q3_IN_S6;
        Q3_DW.is_S14 = Q3_IN_S9;
        Q3_DW.is_S15 = Q3_IN_S11;
        Q3_DW.is_S16 = Q3_IN_S13;
      } else if (Q3_U.b == 1.0) {
        /* Outport: '<Root>/o7' */
        Q3_Y.o7 = 0.0;
        Q3_DW.is_S2 = Q3_IN_NO_ACTIVE_CHILD;
        Q3_DW.is_c3_Q3 = Q3_IN_S1;
        switch (Q3_DW.was_S1) {
         case Q3_IN_S4:
          Q3_DW.is_S1 = Q3_IN_S4;
          Q3_DW.was_S1 = Q3_IN_S4;

          /* Outport: '<Root>/o4' */
          Q3_Y.o4 = 1.0;
          break;

         case Q3_IN_S5:
          Q3_DW.is_S1 = Q3_IN_S5;
          Q3_DW.was_S1 = Q3_IN_S5;

          /* Outport: '<Root>/o5' */
          Q3_Y.o5 = 1.0;
          break;

         default:
          Q3_DW.is_S1 = Q3_IN_S4;
          Q3_DW.was_S1 = Q3_IN_S4;

          /* Outport: '<Root>/o4' */
          Q3_Y.o4 = 1.0;
          break;
        }
      }
      break;

     default:
      /* case IN_S3: */
      if (Q3_U.e == 1.0) {
        /* Outport: '<Root>/o3' */
        Q3_Y.o3 = 0.0;
        Q3_DW.is_c3_Q3 = Q3_IN_S1;
        Q3_DW.is_S1 = Q3_IN_S5;
        Q3_DW.was_S1 = Q3_IN_S5;

        /* Outport: '<Root>/o5' */
        Q3_Y.o5 = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Q3_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Q3_terminate(void)
{
  /* (no terminate code required) */
}



/////////////////////////////////////////////////////////////////////////////////////

#include <Arduino.h>
#include <unity.h>

// inputs
int a = A0;
int b = A1;
int c = A2;
int d = A3;
int e = A4;
int f = A5;

int tempf = 4;
int tempc = 2;

// ouputs
int o3 = 7;
int o4 = 8;
int o5 = 9;
int o7 = 10;
int o8 = 11;
int o10 = 12;
int o12 = 13;

void unity_help(int _a, int _b, int _c, int _d, int _e, int _f){  
//   Q3_U.a = digitalRead(a);
//   Q3_U.b = digitalRead(b);
//   Q3_U.c = digitalRead(c);
//   Q3_U.d = digitalRead(d);
//   Q3_U.e = digitalRead(e);
//   Q3_U.f = digitalRead(f);

  Q3_U.a = _a;
  Q3_U.b = _b;
  Q3_U.c = _c;
  Q3_U.d = _d;
  Q3_U.e = _e;
  Q3_U.f = _f;
  
  digitalWrite(o3,  Q3_Y.o3);
  digitalWrite(o4,  Q3_Y.o4);
  digitalWrite(o5,  Q3_Y.o5);
  digitalWrite(o7,  Q3_Y.o7);
  digitalWrite(o8,  Q3_Y.o8);
  digitalWrite(o10, Q3_Y.o10);
  digitalWrite(o12, Q3_Y.o12);

  Q3_step();
  delay(500);
}


void test_reset(void) {
    unity_help(LOW, LOW, LOW, LOW, LOW, LOW);
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o4)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o3));  
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o5)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o7)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o8)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o10)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o12)); 
} 

void test_set_f_high(void) {
    // digitalWrite(f, HIGH);
    unity_help(LOW, LOW, LOW, LOW, LOW, HIGH);
    TEST_ASSERT_EQUAL(LOW, digitalRead(o4)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o3));  
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o5)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o7)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o8)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o10)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o12)); 
}

void test_set_c_high(void) {
    // digitalWrite(c, HIGH);
    unity_help(LOW, LOW, HIGH, LOW, LOW, LOW);
    
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o4)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o3));  
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o5)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o7)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o8)); 
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o10)); 
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o12)); 
}


void test_set_b_high(void) {
    // digitalWrite(b, HIGH);
    unity_help(LOW, HIGH, LOW, LOW, LOW, LOW);

    TEST_ASSERT_EQUAL(LOW,  digitalRead(o4)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o3));  
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o5)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o7)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o8)); 
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o10)); 
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o12)); 
}

void test_set_f_high_2(void) {
    // digitalWrite(f, HIGH);
    unity_help(LOW, LOW, LOW, LOW, LOW, HIGH);
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o4)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o3));  
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o5)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o7)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o8)); 
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o10)); 
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o12)); 
}


void test_set_d_high(void) {
    // digitalWrite(d, HIGH);
    unity_help(LOW, LOW, LOW, HIGH, LOW, LOW);
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o4)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o3));  
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o5)); 
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o7)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o8)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o10)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o12)); 
}

void test_set_a_high(void) {
    // digitalWrite(a, HIGH);
    unity_help(HIGH, LOW, LOW, LOW, LOW, LOW);
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o4)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o3));  
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o5)); 
    TEST_ASSERT_EQUAL(HIGH, digitalRead(o7)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o8)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o10)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o12)); 
}


void test_set_e_high(void) {
    // digitalWrite(e, HIGH);
    unity_help(LOW, LOW, LOW, LOW, HIGH, LOW);
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o4)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o3));  
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o5)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o7)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o8)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o10)); 
    TEST_ASSERT_EQUAL(LOW,  digitalRead(o12)); 
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();    // IMPORTANT LINE!
    // RUN_TEST(test_led_builtin_pin_number);

    Q3_initialize();

    pinMode(a, INPUT);
    pinMode(b, INPUT);
    pinMode(c, INPUT);
    pinMode(d, INPUT);
    pinMode(e, INPUT);
    pinMode(f, INPUT);
    pinMode(tempf, INPUT);
    pinMode(tempc, INPUT);

    pinMode(o3, OUTPUT);
    pinMode(o4, OUTPUT);
    pinMode(o5, OUTPUT);
    pinMode(o7, OUTPUT);
    pinMode(o8, OUTPUT);
    pinMode(o10, OUTPUT);
    pinMode(o12, OUTPUT);
}

uint8_t i = 0;
uint8_t max_blinks = 11;

void loop() {
    if (i == 0){
        RUN_TEST(test_reset);
        i++;
    }
    else if (i == 1){
        RUN_TEST(test_set_f_high);
        i++;
    }
    else if (i == 2){
        RUN_TEST(test_set_c_high);
        i++;
    }
    else if (i == 3){
        RUN_TEST(test_set_b_high);
        i++;
    }
    else if (i == 4){
        RUN_TEST(test_set_b_high);
        i++;
    }
    else if (i == 5){
        RUN_TEST(test_set_f_high_2);
        i++;
    }
    else if (i == 6){
        RUN_TEST(test_set_b_high);
        i++;
    }
    else if (i == 7){
        RUN_TEST(test_set_d_high);
        i++;
    }
    else if (i == 8){
        RUN_TEST(test_set_a_high);
        i++;
    }
    else if (i == 9){
        RUN_TEST(test_set_e_high);
        i++;
    }
    else if (i == 10){
        RUN_TEST(test_set_f_high);
        i++;
    }
    else if (i == 11){
        UNITY_END();
    }
}