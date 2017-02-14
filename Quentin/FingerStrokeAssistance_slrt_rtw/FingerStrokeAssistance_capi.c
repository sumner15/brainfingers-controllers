/*
 * FingerStrokeAssistance_capi.c
 *
 * Code generation for model "FingerStrokeAssistance".
 *
 * Model version              : 1.770
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Mon Feb 13 12:47:36 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "FingerStrokeAssistance_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "FingerStrokeAssistance.h"
#include "FingerStrokeAssistance_capi.h"
#include "FingerStrokeAssistance_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("HL Controller/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("HL Controller/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("HL Controller/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("HL Controller/Manual Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("HL Controller/Delay"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 5, 0, TARGET_STRING("HL Controller/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("HL Controller/Discrete Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("LL Controller/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("LL Controller/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("LL Controller/Product"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 10, 0, TARGET_STRING("LL Controller/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("LL Controller/Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 12, 0, TARGET_STRING("Robot/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Robot/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Robot/PCI-6221 AD1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Robot/PCI-6221 AD1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Robot/PCI-6221 AD1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Robot/PCI-6221 AD1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Robot/PCI-6221 AD1/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Robot/PCI-6221 AD1/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Robot/PCI-6221 AD1/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Robot/PCI-6221 AD1/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("parameters/parChangeRate"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("parameters/parFThresh"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("parameters/parFixedDur"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("parameters/parForceTrigger"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("parameters/parKd1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("parameters/parKd2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("parameters/parKdV1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("parameters/parKdV2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING("parameters/parKp1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 0, TARGET_STRING("parameters/parKp2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING("parameters/parLeftMode"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 0, TARGET_STRING("parameters/parMarker"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING("parameters/parMaxTrajDur"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 0, TARGET_STRING("parameters/parPStop"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 38, 0, TARGET_STRING("parameters/parTrajMode"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 0, TARGET_STRING("parameters/parVThresh"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 40, 0, TARGET_STRING("parameters/parWiggleAmp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 41, 0, TARGET_STRING("parameters/Rounding Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 42, 0, TARGET_STRING("parameters/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 43, 0, TARGET_STRING("parameters/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 0, TARGET_STRING("parameters/Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 45, 0, TARGET_STRING("signals/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 46, 0, TARGET_STRING("signals/sigGravAccel"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 47, 0, TARGET_STRING("signals/sigTargetTime"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 48, 0, TARGET_STRING("LL Controller/Discrete PID Controller/Filter"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 49, 0, TARGET_STRING("LL Controller/Discrete PID Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 50, 0, TARGET_STRING("LL Controller/Discrete PID Controller/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 51, 0, TARGET_STRING(
    "LL Controller/Discrete PID Controller/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 52, 0, TARGET_STRING("LL Controller/Discrete PID Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 53, 0, TARGET_STRING(
    "LL Controller/Discrete PID Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 54, 0, TARGET_STRING("LL Controller/Discrete PID Controller/Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 55, 0, TARGET_STRING("LL Controller/Discrete PID Controller/SumD"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 56, 4, TARGET_STRING("LL Controller/gain transition/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 57, 4, TARGET_STRING("LL Controller/gain transition/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 58, 0, TARGET_STRING("LL Controller/gain transition/Memory"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 59, 5, TARGET_STRING("LL Controller/initial ramp/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 60, 6, TARGET_STRING("LL Controller/initial ramp/ramp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 0, TARGET_STRING("LL Controller/initial ramp/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 62, 7, TARGET_STRING("Robot/account for handedness/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 7, TARGET_STRING("Robot/account for handedness/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 64, 8, TARGET_STRING("Robot/account for handedness force/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 65, 9, TARGET_STRING("Robot/account for handedness1/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 66, 9, TARGET_STRING("Robot/account for handedness1/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 67, 10, TARGET_STRING("Robot/account for handedness2/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 68, 10, TARGET_STRING("Robot/account for handedness2/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 69, 0, TARGET_STRING("Robot/filtered force output/Low Pass 100 Hz"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 70, 0, TARGET_STRING("Robot/filtered force output/Low Pass 100 Hz1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 71, 0, TARGET_STRING("Robot/filtered force output/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Robot/filtered force output/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 73, 11, TARGET_STRING("Robot/get offsets/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 74, 11, TARGET_STRING("Robot/get offsets/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 75, 11, TARGET_STRING("Robot/get offsets/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 1, 0, 0 },

  { 76, 11, TARGET_STRING("Robot/get offsets/MATLAB Function/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Robot/get offsets/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 78, 0, TARGET_STRING("Robot/get offsets/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Robot/get offsets/Memory1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 80, 0, TARGET_STRING("Robot/gravDir/gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 0, TARGET_STRING("Robot/gravDir/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 82, 12, TARGET_STRING("parameters/gain transition/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 12, TARGET_STRING("parameters/gain transition/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 84, 0, TARGET_STRING("parameters/gain transition/Memory"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 85, 13, TARGET_STRING("parameters/gain transition1/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 86, 13, TARGET_STRING("parameters/gain transition1/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 87, 0, TARGET_STRING("parameters/gain transition1/Memory"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 88, 14, TARGET_STRING("parameters/gain transition2/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 89, 14, TARGET_STRING("parameters/gain transition2/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 90, 0, TARGET_STRING("parameters/gain transition2/Memory"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 91, 15, TARGET_STRING("parameters/gain transition3/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 92, 15, TARGET_STRING("parameters/gain transition3/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 93, 0, TARGET_STRING("parameters/gain transition3/Memory"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 94, 16, TARGET_STRING("parameters/gain transition4/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 95, 16, TARGET_STRING("parameters/gain transition4/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 96, 0, TARGET_STRING("parameters/gain transition4/Memory"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 97, 17, TARGET_STRING("parameters/gain transition5/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 98, 17, TARGET_STRING("parameters/gain transition5/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 99, 0, TARGET_STRING("parameters/gain transition5/Memory"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 100, TARGET_STRING("HL Controller/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 101, TARGET_STRING("HL Controller/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 102, TARGET_STRING("HL Controller/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 103, TARGET_STRING("HL Controller/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 104, TARGET_STRING("HL Controller/Force On"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 105, TARGET_STRING("HL Controller/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 106, TARGET_STRING("HL Controller/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 107, TARGET_STRING("HL Controller/Discrete-Time Integrator"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 108, TARGET_STRING("HL Controller/Discrete-Time Integrator"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 109, TARGET_STRING("HL Controller/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 110, TARGET_STRING("HL Controller/Manual Switch3"),
    TARGET_STRING("CurrentSetting"), 1, 0, 0 },

  { 111, TARGET_STRING("HL Controller/Delay"),
    TARGET_STRING("DelayLength"), 2, 0, 0 },

  { 112, TARGET_STRING("HL Controller/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 113, TARGET_STRING("HL Controller/Delay1"),
    TARGET_STRING("DelayLength"), 2, 0, 0 },

  { 114, TARGET_STRING("HL Controller/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 115, TARGET_STRING("HL Controller/Discrete Filter"),
    TARGET_STRING("Numerator"), 0, 4, 0 },

  { 116, TARGET_STRING("HL Controller/Discrete Filter"),
    TARGET_STRING("Denominator"), 0, 4, 0 },

  { 117, TARGET_STRING("HL Controller/Discrete Filter"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 118, TARGET_STRING("LL Controller/Discrete PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 119, TARGET_STRING("LL Controller/Discrete PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 120, TARGET_STRING("LL Controller/Discrete PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 121, TARGET_STRING("LL Controller/Discrete PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 122, TARGET_STRING("LL Controller/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 123, TARGET_STRING("LL Controller/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 124, TARGET_STRING("LL Controller/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 125, TARGET_STRING("LL Controller/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 126, TARGET_STRING("Robot/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 127, TARGET_STRING("Robot/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 128, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 129, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 130, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 131, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 132, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 133, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 134, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 135, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 136, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 137, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 138, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 139, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 140, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 141, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 142, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 143, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 144, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 145, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 146, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 147, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 148, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 149, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P2"), 0, 5, 0 },

  { 150, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P3"), 0, 5, 0 },

  { 151, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 152, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 153, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 154, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 155, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P1"), 0, 4, 0 },

  { 156, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P2"), 0, 4, 0 },

  { 157, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P3"), 0, 4, 0 },

  { 158, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P4"), 0, 4, 0 },

  { 159, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 160, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 161, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 162, TARGET_STRING("parameters/paremeters_ must_be_one"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 163, TARGET_STRING("parameters/parChangeRate"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 164, TARGET_STRING("parameters/parFThresh"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 165, TARGET_STRING("parameters/parFixedDur"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 166, TARGET_STRING("parameters/parForceTrigger"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 167, TARGET_STRING("parameters/parKd1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 168, TARGET_STRING("parameters/parKd2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 169, TARGET_STRING("parameters/parKdV1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 170, TARGET_STRING("parameters/parKdV2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 171, TARGET_STRING("parameters/parKp1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 172, TARGET_STRING("parameters/parKp2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 173, TARGET_STRING("parameters/parLeftMode"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 174, TARGET_STRING("parameters/parMarker"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 175, TARGET_STRING("parameters/parMaxTrajDur"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 176, TARGET_STRING("parameters/parPStop"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 177, TARGET_STRING("parameters/parTrajMode"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 178, TARGET_STRING("parameters/parVThresh"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 179, TARGET_STRING("parameters/parWiggleAmp"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 180, TARGET_STRING("parameters/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 181, TARGET_STRING("parameters/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 182, TARGET_STRING("parameters/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 183, TARGET_STRING("parameters/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 184, TARGET_STRING("parameters/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 185, TARGET_STRING("parameters/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 186, TARGET_STRING("signals/sigGravAccel"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 187, TARGET_STRING("signals/sigTargetTime"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 188, TARGET_STRING("LL Controller/Discrete PID Controller/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 189, TARGET_STRING("LL Controller/Discrete PID Controller/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 190, TARGET_STRING("LL Controller/Discrete PID Controller/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 191, TARGET_STRING("LL Controller/Discrete PID Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 192, TARGET_STRING("LL Controller/gain transition/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 193, TARGET_STRING("LL Controller/initial ramp/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 194, TARGET_STRING("LL Controller/initial ramp/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 195, TARGET_STRING("Robot/filtered force output/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 196, TARGET_STRING("Robot/filtered force output/Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 197, TARGET_STRING("Robot/get offsets/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 198, TARGET_STRING("Robot/get offsets/Memory1"),
    TARGET_STRING("X0"), 0, 4, 0 },

  { 199, TARGET_STRING("Robot/gravDir/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 200, TARGET_STRING("Robot/gravDir/gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 201, TARGET_STRING("parameters/gain transition/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 202, TARGET_STRING("parameters/gain transition1/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 203, TARGET_STRING("parameters/gain transition2/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 204, TARGET_STRING("parameters/gain transition3/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 205, TARGET_STRING("parameters/gain transition4/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 206, TARGET_STRING("parameters/gain transition5/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 207, TARGET_STRING("Alow"), 0, 7, 0 },

  { 208, TARGET_STRING("Blow"), 0, 1, 0 },

  { 209, TARGET_STRING("Clow"), 0, 4, 0 },

  { 210, TARGET_STRING("Dlow"), 0, 0, 0 },

  { 211, TARGET_STRING("x0low"), 0, 1, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &FingerStrokeAssistance_B.DiscreteTimeIntegrator,/* 0: Signal */
  &FingerStrokeAssistance_B.Gain1,     /* 1: Signal */
  &FingerStrokeAssistance_B.MultiportSwitch,/* 2: Signal */
  &FingerStrokeAssistance_B.ManualSwitch3,/* 3: Signal */
  &FingerStrokeAssistance_B.Delay[0],  /* 4: Signal */
  &FingerStrokeAssistance_B.Delay1,    /* 5: Signal */
  &FingerStrokeAssistance_B.DiscreteFilter,/* 6: Signal */
  &FingerStrokeAssistance_B.Gain_d,    /* 7: Signal */
  &FingerStrokeAssistance_B.Gain1_a,   /* 8: Signal */
  &FingerStrokeAssistance_B.Product[0],/* 9: Signal */
  &FingerStrokeAssistance_B.Saturation_m,/* 10: Signal */
  &FingerStrokeAssistance_B.Sum[0],    /* 11: Signal */
  &FingerStrokeAssistance_B.Gain,      /* 12: Signal */
  &FingerStrokeAssistance_B.Gain1_o,   /* 13: Signal */
  &FingerStrokeAssistance_B.PCI6221ENC,/* 14: Signal */
  &FingerStrokeAssistance_B.PCI6221ENC1,/* 15: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o1,/* 16: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o2,/* 17: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o3,/* 18: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o4,/* 19: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o5,/* 20: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o6,/* 21: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o7,/* 22: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o8,/* 23: Signal */
  &FingerStrokeAssistance_B.parChangeRate,/* 24: Signal */
  &FingerStrokeAssistance_B.parFThresh,/* 25: Signal */
  &FingerStrokeAssistance_B.parFixedDur,/* 26: Signal */
  &FingerStrokeAssistance_B.parForceTrigger,/* 27: Signal */
  &FingerStrokeAssistance_B.parKd1,    /* 28: Signal */
  &FingerStrokeAssistance_B.parKd2,    /* 29: Signal */
  &FingerStrokeAssistance_B.parKdV1,   /* 30: Signal */
  &FingerStrokeAssistance_B.parKdV2,   /* 31: Signal */
  &FingerStrokeAssistance_B.parKp1,    /* 32: Signal */
  &FingerStrokeAssistance_B.parKp2,    /* 33: Signal */
  &FingerStrokeAssistance_B.parLeftMode,/* 34: Signal */
  &FingerStrokeAssistance_B.parMarker, /* 35: Signal */
  &FingerStrokeAssistance_B.parMaxTrajDur,/* 36: Signal */
  &FingerStrokeAssistance_B.parPStop,  /* 37: Signal */
  &FingerStrokeAssistance_B.parTrajMode,/* 38: Signal */
  &FingerStrokeAssistance_B.parVThresh,/* 39: Signal */
  &FingerStrokeAssistance_B.parWiggleAmp,/* 40: Signal */
  &FingerStrokeAssistance_B.RoundingFunction,/* 41: Signal */
  &FingerStrokeAssistance_B.Saturation,/* 42: Signal */
  &FingerStrokeAssistance_B.Saturation1_n,/* 43: Signal */
  &FingerStrokeAssistance_B.Saturation2,/* 44: Signal */
  &FingerStrokeAssistance_B.DigitalClock_f,/* 45: Signal */
  &FingerStrokeAssistance_B.sigGravAccel,/* 46: Signal */
  &FingerStrokeAssistance_B.sigTargetTime,/* 47: Signal */
  &FingerStrokeAssistance_B.Filter[0], /* 48: Signal */
  &FingerStrokeAssistance_B.Integrator[0],/* 49: Signal */
  &FingerStrokeAssistance_B.DerivativeGain[0],/* 50: Signal */
  &FingerStrokeAssistance_B.FilterCoefficient[0],/* 51: Signal */
  &FingerStrokeAssistance_B.IntegralGain[0],/* 52: Signal */
  &FingerStrokeAssistance_B.ProportionalGain[0],/* 53: Signal */
  &FingerStrokeAssistance_B.Sum_a[0],  /* 54: Signal */
  &FingerStrokeAssistance_B.SumD[0],   /* 55: Signal */
  &FingerStrokeAssistance_B.sf_gainramp.val,/* 56: Signal */
  &FingerStrokeAssistance_B.sf_gainramp.state1[0],/* 57: Signal */
  &FingerStrokeAssistance_B.Memory_c[0],/* 58: Signal */
  &FingerStrokeAssistance_B.Force[0],  /* 59: Signal */
  &FingerStrokeAssistance_B.y,         /* 60: Signal */
  &FingerStrokeAssistance_B.Saturation1,/* 61: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction_my.output1,/* 62: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction_my.output2,/* 63: Signal */
  &FingerStrokeAssistance_B.output[0], /* 64: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction.output1,/* 65: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction.output2,/* 66: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction_n.output1,/* 67: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction_n.output2,/* 68: Signal */
  &FingerStrokeAssistance_B.LowPass100Hz,/* 69: Signal */
  &FingerStrokeAssistance_B.LowPass100Hz1,/* 70: Signal */
  &FingerStrokeAssistance_B.Memory_n,  /* 71: Signal */
  &FingerStrokeAssistance_B.Memory1_j, /* 72: Signal */
  &FingerStrokeAssistance_B.encoder1,  /* 73: Signal */
  &FingerStrokeAssistance_B.encoder2,  /* 74: Signal */
  &FingerStrokeAssistance_B.summedVals[0],/* 75: Signal */
  &FingerStrokeAssistance_B.nSamples,  /* 76: Signal */
  &FingerStrokeAssistance_B.DigitalClock,/* 77: Signal */
  &FingerStrokeAssistance_B.Memory,    /* 78: Signal */
  &FingerStrokeAssistance_B.Memory1[0],/* 79: Signal */
  &FingerStrokeAssistance_B.gain,      /* 80: Signal */
  &FingerStrokeAssistance_B.Sum_m,     /* 81: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_o.val,/* 82: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_o.state1[0],/* 83: Signal */
  &FingerStrokeAssistance_B.Memory_g[0],/* 84: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_i.val,/* 85: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_i.state1[0],/* 86: Signal */
  &FingerStrokeAssistance_B.Memory_i[0],/* 87: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_id.val,/* 88: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_id.state1[0],/* 89: Signal */
  &FingerStrokeAssistance_B.Memory_e[0],/* 90: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_b.val,/* 91: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_b.state1[0],/* 92: Signal */
  &FingerStrokeAssistance_B.Memory_o[0],/* 93: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_f.val,/* 94: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_f.state1[0],/* 95: Signal */
  &FingerStrokeAssistance_B.Memory_nk[0],/* 96: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_a.val,/* 97: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_a.state1[0],/* 98: Signal */
  &FingerStrokeAssistance_B.Memory_os[0],/* 99: Signal */
  &FingerStrokeAssistance_P.Constant_Value,/* 100: Block Parameter */
  &FingerStrokeAssistance_P.Constant1_Value,/* 101: Block Parameter */
  &FingerStrokeAssistance_P.Constant2_Value,/* 102: Block Parameter */
  &FingerStrokeAssistance_P.Constant3_Value,/* 103: Block Parameter */
  &FingerStrokeAssistance_P.ForceOn_Value,/* 104: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainval,/* 105: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC,/* 106: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_UpperSat,/* 107: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_LowerSat,/* 108: Block Parameter */
  &FingerStrokeAssistance_P.Gain1_Gain,/* 109: Block Parameter */
  &FingerStrokeAssistance_P.ManualSwitch3_CurrentSetting,/* 110: Block Parameter */
  &FingerStrokeAssistance_P.Delay_DelayLength,/* 111: Block Parameter */
  &FingerStrokeAssistance_P.Delay_InitialCondition,/* 112: Block Parameter */
  &FingerStrokeAssistance_P.Delay1_DelayLength,/* 113: Block Parameter */
  &FingerStrokeAssistance_P.Delay1_InitialCondition,/* 114: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteFilter_NumCoef[0],/* 115: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteFilter_DenCoef[0],/* 116: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteFilter_InitialStates,/* 117: Block Parameter */
  &FingerStrokeAssistance_P.DiscretePIDController_P,/* 118: Mask Parameter */
  &FingerStrokeAssistance_P.DiscretePIDController_I,/* 119: Mask Parameter */
  &FingerStrokeAssistance_P.DiscretePIDController_D,/* 120: Mask Parameter */
  &FingerStrokeAssistance_P.DiscretePIDController_N,/* 121: Mask Parameter */
  &FingerStrokeAssistance_P.Gain_Gain_m,/* 122: Block Parameter */
  &FingerStrokeAssistance_P.Gain1_Gain_dk,/* 123: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_UpperSat_f,/* 124: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_LowerSat_o,/* 125: Block Parameter */
  &FingerStrokeAssistance_P.Gain_Gain, /* 126: Block Parameter */
  &FingerStrokeAssistance_P.Gain1_Gain_d,/* 127: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P1,/* 128: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P2,/* 129: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P3,/* 130: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P4,/* 131: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P5,/* 132: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P6,/* 133: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P7,/* 134: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P8,/* 135: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P9,/* 136: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P10,/* 137: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P1,/* 138: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P2,/* 139: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P3,/* 140: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P4,/* 141: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P5,/* 142: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P6,/* 143: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P7,/* 144: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P8,/* 145: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P9,/* 146: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P10,/* 147: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P1[0],/* 148: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P2[0],/* 149: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P3[0],/* 150: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P4,/* 151: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P5,/* 152: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P6,/* 153: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P7,/* 154: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P1[0],/* 155: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P2[0],/* 156: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P3[0],/* 157: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P4[0],/* 158: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P5,/* 159: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P6,/* 160: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P7,/* 161: Block Parameter */
  &FingerStrokeAssistance_P.paremeters_must_be_one_Value,/* 162: Block Parameter */
  &FingerStrokeAssistance_P.parChangeRate_Gain,/* 163: Block Parameter */
  &FingerStrokeAssistance_P.parFThresh_Gain,/* 164: Block Parameter */
  &FingerStrokeAssistance_P.parFixedDur_Gain,/* 165: Block Parameter */
  &FingerStrokeAssistance_P.parForceTrigger_Gain,/* 166: Block Parameter */
  &FingerStrokeAssistance_P.parKd1_Gain,/* 167: Block Parameter */
  &FingerStrokeAssistance_P.parKd2_Gain,/* 168: Block Parameter */
  &FingerStrokeAssistance_P.parKdV1_Gain,/* 169: Block Parameter */
  &FingerStrokeAssistance_P.parKdV2_Gain,/* 170: Block Parameter */
  &FingerStrokeAssistance_P.parKp1_Gain,/* 171: Block Parameter */
  &FingerStrokeAssistance_P.parKp2_Gain,/* 172: Block Parameter */
  &FingerStrokeAssistance_P.parLeftMode_Gain,/* 173: Block Parameter */
  &FingerStrokeAssistance_P.parMarker_Gain,/* 174: Block Parameter */
  &FingerStrokeAssistance_P.parMaxTrajDur_Gain,/* 175: Block Parameter */
  &FingerStrokeAssistance_P.parPStop_Gain,/* 176: Block Parameter */
  &FingerStrokeAssistance_P.parTrajMode_Gain,/* 177: Block Parameter */
  &FingerStrokeAssistance_P.parVThresh_Gain,/* 178: Block Parameter */
  &FingerStrokeAssistance_P.parWiggleAmp_Gain,/* 179: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_UpperSat,/* 180: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_LowerSat,/* 181: Block Parameter */
  &FingerStrokeAssistance_P.Saturation1_UpperSat_k,/* 182: Block Parameter */
  &FingerStrokeAssistance_P.Saturation1_LowerSat_l,/* 183: Block Parameter */
  &FingerStrokeAssistance_P.Saturation2_UpperSat,/* 184: Block Parameter */
  &FingerStrokeAssistance_P.Saturation2_LowerSat,/* 185: Block Parameter */
  &FingerStrokeAssistance_P.sigGravAccel_Gain,/* 186: Block Parameter */
  &FingerStrokeAssistance_P.sigTargetTime_Gain,/* 187: Block Parameter */
  &FingerStrokeAssistance_P.Filter_gainval,/* 188: Block Parameter */
  &FingerStrokeAssistance_P.Filter_IC, /* 189: Block Parameter */
  &FingerStrokeAssistance_P.Integrator_gainval,/* 190: Block Parameter */
  &FingerStrokeAssistance_P.Integrator_IC,/* 191: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_e[0],/* 192: Block Parameter */
  &FingerStrokeAssistance_P.Saturation1_UpperSat,/* 193: Block Parameter */
  &FingerStrokeAssistance_P.Saturation1_LowerSat,/* 194: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_h,/* 195: Block Parameter */
  &FingerStrokeAssistance_P.Memory1_X0_a,/* 196: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0, /* 197: Block Parameter */
  &FingerStrokeAssistance_P.Memory1_X0[0],/* 198: Block Parameter */
  &FingerStrokeAssistance_P.Constant_Value_k,/* 199: Block Parameter */
  &FingerStrokeAssistance_P.gain_Gain, /* 200: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_g[0],/* 201: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_a[0],/* 202: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_b[0],/* 203: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_g0[0],/* 204: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_bp[0],/* 205: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_eq[0],/* 206: Block Parameter */
  &FingerStrokeAssistance_P.Alow[0],   /* 207: Model Parameter */
  &FingerStrokeAssistance_P.Blow[0],   /* 208: Model Parameter */
  &FingerStrokeAssistance_P.Clow[0],   /* 209: Model Parameter */
  &FingerStrokeAssistance_P.Dlow,      /* 210: Model Parameter */
  &FingerStrokeAssistance_P.x0low[0],  /* 211: Model Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 14, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  2,                                   /* 2 */
  1,                                   /* 3 */
  4,                                   /* 4 */
  1,                                   /* 5 */
  5,                                   /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  2,                                   /* 9 */
  1,                                   /* 10 */
  8,                                   /* 11 */
  1,                                   /* 12 */
  4,                                   /* 13 */
  2,                                   /* 14 */
  2                                    /* 15 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 100,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 107,
    rtModelParameters, 5 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1109938820U,
    1237293536U,
    2618323432U,
    555717925U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  FingerStrokeAssistance_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void FingerStrokeAssistance_InitializeDataMapInfo
  (RT_MODEL_FingerStrokeAssistance_T *const FingerStrokeAssistance_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(FingerStrokeAssistance_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(FingerStrokeAssistance_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(FingerStrokeAssistance_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(FingerStrokeAssistance_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(FingerStrokeAssistance_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  FingerStrokeAssistance_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(FingerStrokeAssistance_M);
  FingerStrokeAssistance_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_FingerStrokeAssistance_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(FingerStrokeAssistance_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(FingerStrokeAssistance_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(FingerStrokeAssistance_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void FingerStrokeAssistance_host_InitializeDataMapInfo
    (FingerStrokeAssistance_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: FingerStrokeAssistance_capi.c */
