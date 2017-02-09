/*
 * FingerStrokeAssistance_capi.c
 *
 * Code generation for model "FingerStrokeAssistance".
 *
 * Model version              : 1.765
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Wed Feb 08 18:32:25 2017
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
  { 0, 2, TARGET_STRING("Bias"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 2, TARGET_STRING("Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Multiport Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 2, TARGET_STRING("Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("Sine Wave"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 3, TARGET_STRING("Manual Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("Manual Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Manual Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("Delay"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 12, 0, TARGET_STRING("Discrete Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Detect Change/FixPt Relational Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Detect Change/Delay Input1"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Feedback/Discrete-Time Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Feedback/Discrete-Time Integrator1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Robot/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("Robot/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Robot/PCI-6221 AD1/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Robot/PCI-6221 AD1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("Robot/PCI-6221 AD1/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("Robot/PCI-6221 AD1/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("Robot/PCI-6221 AD1/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Robot/PCI-6221 AD1/p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("Robot/PCI-6221 AD1/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Robot/PCI-6221 AD1/p8"),
    TARGET_STRING(""), 7, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("controller/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("controller/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("controller/Product"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 32, 0, TARGET_STRING("controller/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 0, TARGET_STRING("controller/Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 34, 0, TARGET_STRING("parameters/parChangeRate"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 0, TARGET_STRING("parameters/parFThresh"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING("parameters/parFixedDur"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 0, TARGET_STRING("parameters/parForceTrigger"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 38, 0, TARGET_STRING("parameters/parKd1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 0, TARGET_STRING("parameters/parKd2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 40, 0, TARGET_STRING("parameters/parKdV1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 41, 0, TARGET_STRING("parameters/parKdV2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 42, 0, TARGET_STRING("parameters/parKp1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 43, 0, TARGET_STRING("parameters/parKp2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 0, TARGET_STRING("parameters/parLeftMode"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 45, 0, TARGET_STRING("parameters/parMarker"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 46, 0, TARGET_STRING("parameters/parMaxTrajDur"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 47, 0, TARGET_STRING("parameters/parPStop"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 48, 0, TARGET_STRING("parameters/parTrajMode"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 49, 0, TARGET_STRING("parameters/parVThresh"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 50, 0, TARGET_STRING("parameters/parWiggleAmp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 51, 0, TARGET_STRING("parameters/Rounding Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 52, 0, TARGET_STRING("parameters/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 53, 0, TARGET_STRING("parameters/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 54, 0, TARGET_STRING("parameters/Saturation2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 55, 0, TARGET_STRING("signals/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 56, 0, TARGET_STRING("signals/sigForce1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 57, 0, TARGET_STRING("signals/sigForce1Clean"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 58, 0, TARGET_STRING("signals/sigForce2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 0, TARGET_STRING("signals/sigForce2Clean"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 60, 0, TARGET_STRING("signals/sigGravAccel"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 61, 0, TARGET_STRING("signals/sigTargetTime"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Feedback/Discrete Derivative/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 0, TARGET_STRING("Feedback/Discrete Derivative/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 64, 0, TARGET_STRING("Feedback/Discrete Derivative/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 65, 0, TARGET_STRING("Feedback/Discrete Derivative1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 66, 0, TARGET_STRING("Feedback/Discrete Derivative1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 67, 0, TARGET_STRING("Feedback/Discrete Derivative1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 68, 6, TARGET_STRING("Robot/account for handedness/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 69, 6, TARGET_STRING("Robot/account for handedness/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 70, 7, TARGET_STRING("Robot/account for handedness force/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 71, 8, TARGET_STRING("Robot/account for handedness1/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 72, 8, TARGET_STRING("Robot/account for handedness1/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 73, 9, TARGET_STRING("Robot/account for handedness2/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 74, 9, TARGET_STRING("Robot/account for handedness2/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 75, 0, TARGET_STRING("Robot/filtered force output/Low Pass 100 Hz"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 76, 0, TARGET_STRING("Robot/filtered force output/Low Pass 100 Hz1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Robot/filtered force output/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 78, 0, TARGET_STRING("Robot/filtered force output/Memory1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 10, TARGET_STRING("Robot/get offsets/MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 80, 10, TARGET_STRING("Robot/get offsets/MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 81, 10, TARGET_STRING("Robot/get offsets/MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 1, 0, 0 },

  { 82, 10, TARGET_STRING("Robot/get offsets/MATLAB Function/p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 83, 0, TARGET_STRING("Robot/get offsets/Digital Clock"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 84, 0, TARGET_STRING("Robot/get offsets/Memory"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 85, 0, TARGET_STRING("Robot/get offsets/Memory1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 86, 0, TARGET_STRING("Robot/gravDir/gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 0, TARGET_STRING("Robot/gravDir/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 88, 0, TARGET_STRING("controller/Discrete PID Controller/Filter"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 89, 0, TARGET_STRING("controller/Discrete PID Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 90, 0, TARGET_STRING("controller/Discrete PID Controller/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 91, 0, TARGET_STRING("controller/Discrete PID Controller/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 92, 0, TARGET_STRING("controller/Discrete PID Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 93, 0, TARGET_STRING("controller/Discrete PID Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 94, 0, TARGET_STRING("controller/Discrete PID Controller/Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 95, 0, TARGET_STRING("controller/Discrete PID Controller/SumD"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 96, 11, TARGET_STRING("controller/gain transition/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 97, 11, TARGET_STRING("controller/gain transition/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 98, 0, TARGET_STRING("controller/gain transition/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 99, 12, TARGET_STRING("controller/initial ramp/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 100, 13, TARGET_STRING("controller/initial ramp/ramp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 101, 0, TARGET_STRING("controller/initial ramp/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 102, 14, TARGET_STRING("parameters/gain transition/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 103, 14, TARGET_STRING("parameters/gain transition/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 104, 0, TARGET_STRING("parameters/gain transition/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 105, 15, TARGET_STRING("parameters/gain transition1/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 106, 15, TARGET_STRING("parameters/gain transition1/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 107, 0, TARGET_STRING("parameters/gain transition1/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 108, 16, TARGET_STRING("parameters/gain transition2/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 109, 16, TARGET_STRING("parameters/gain transition2/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 110, 0, TARGET_STRING("parameters/gain transition2/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 111, 17, TARGET_STRING("parameters/gain transition3/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 112, 17, TARGET_STRING("parameters/gain transition3/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 113, 0, TARGET_STRING("parameters/gain transition3/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 114, 18, TARGET_STRING("parameters/gain transition4/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 115, 18, TARGET_STRING("parameters/gain transition4/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 116, 0, TARGET_STRING("parameters/gain transition4/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 117, 19, TARGET_STRING("parameters/gain transition5/gainramp/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 118, 19, TARGET_STRING("parameters/gain transition5/gainramp/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 119, 0, TARGET_STRING("parameters/gain transition5/Memory"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 120, TARGET_STRING("Detect Change"),
    TARGET_STRING("vinit"), 0, 0, 0 },

  { 121, TARGET_STRING("Bias"),
    TARGET_STRING("Bias"), 0, 0, 0 },

  { 122, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 123, TARGET_STRING("Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 124, TARGET_STRING("Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 125, TARGET_STRING("Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 126, TARGET_STRING("Force On"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 127, TARGET_STRING("Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 128, TARGET_STRING("Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 129, TARGET_STRING("Discrete-Time Integrator"),
    TARGET_STRING("UpperSaturationLimit"), 0, 0, 0 },

  { 130, TARGET_STRING("Discrete-Time Integrator"),
    TARGET_STRING("LowerSaturationLimit"), 0, 0, 0 },

  { 131, TARGET_STRING("Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 132, TARGET_STRING("Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 133, TARGET_STRING("Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 134, TARGET_STRING("Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 135, TARGET_STRING("Sine Wave"),
    TARGET_STRING("Amplitude"), 0, 0, 0 },

  { 136, TARGET_STRING("Sine Wave"),
    TARGET_STRING("Bias"), 0, 0, 0 },

  { 137, TARGET_STRING("Sine Wave"),
    TARGET_STRING("Frequency"), 0, 0, 0 },

  { 138, TARGET_STRING("Sine Wave"),
    TARGET_STRING("SinH"), 0, 0, 0 },

  { 139, TARGET_STRING("Sine Wave"),
    TARGET_STRING("CosH"), 0, 0, 0 },

  { 140, TARGET_STRING("Sine Wave"),
    TARGET_STRING("SinPhi"), 0, 0, 0 },

  { 141, TARGET_STRING("Sine Wave"),
    TARGET_STRING("CosPhi"), 0, 0, 0 },

  { 142, TARGET_STRING("Manual Switch1"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 143, TARGET_STRING("Manual Switch2"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 144, TARGET_STRING("Manual Switch3"),
    TARGET_STRING("CurrentSetting"), 2, 0, 0 },

  { 145, TARGET_STRING("Delay"),
    TARGET_STRING("DelayLength"), 3, 0, 0 },

  { 146, TARGET_STRING("Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 147, TARGET_STRING("Discrete Filter"),
    TARGET_STRING("Numerator"), 0, 4, 0 },

  { 148, TARGET_STRING("Discrete Filter"),
    TARGET_STRING("Denominator"), 0, 4, 0 },

  { 149, TARGET_STRING("Discrete Filter"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 150, TARGET_STRING("Feedback/Discrete Derivative"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 151, TARGET_STRING("Feedback/Discrete Derivative1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 152, TARGET_STRING("Feedback/Discrete-Time Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 153, TARGET_STRING("Feedback/Discrete-Time Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 154, TARGET_STRING("Feedback/Discrete-Time Integrator1"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 155, TARGET_STRING("Feedback/Discrete-Time Integrator1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 156, TARGET_STRING("Robot/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 157, TARGET_STRING("Robot/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 158, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 159, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 160, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 161, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 162, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 163, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 164, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 165, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 166, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 167, TARGET_STRING("Robot/PCI 6221 ENC "),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 168, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 169, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 170, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 171, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 172, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 173, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 174, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 175, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 176, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 177, TARGET_STRING("Robot/PCI 6221 ENC 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 178, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 179, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P2"), 0, 5, 0 },

  { 180, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P3"), 0, 5, 0 },

  { 181, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 182, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 183, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 184, TARGET_STRING("Robot/PCI-6221 AD1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 185, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P1"), 0, 4, 0 },

  { 186, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P2"), 0, 4, 0 },

  { 187, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P3"), 0, 4, 0 },

  { 188, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P4"), 0, 4, 0 },

  { 189, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 190, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 191, TARGET_STRING("Robot/PCI-6221 DA"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 192, TARGET_STRING("controller/Discrete PID Controller"),
    TARGET_STRING("P"), 0, 0, 0 },

  { 193, TARGET_STRING("controller/Discrete PID Controller"),
    TARGET_STRING("I"), 0, 0, 0 },

  { 194, TARGET_STRING("controller/Discrete PID Controller"),
    TARGET_STRING("D"), 0, 0, 0 },

  { 195, TARGET_STRING("controller/Discrete PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 196, TARGET_STRING("controller/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 197, TARGET_STRING("controller/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 198, TARGET_STRING("controller/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 199, TARGET_STRING("controller/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 200, TARGET_STRING("parameters/paremeters_ must_be_one"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 201, TARGET_STRING("parameters/parChangeRate"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 202, TARGET_STRING("parameters/parFThresh"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 203, TARGET_STRING("parameters/parFixedDur"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 204, TARGET_STRING("parameters/parForceTrigger"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 205, TARGET_STRING("parameters/parKd1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 206, TARGET_STRING("parameters/parKd2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 207, TARGET_STRING("parameters/parKdV1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 208, TARGET_STRING("parameters/parKdV2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 209, TARGET_STRING("parameters/parKp1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 210, TARGET_STRING("parameters/parKp2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 211, TARGET_STRING("parameters/parLeftMode"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 212, TARGET_STRING("parameters/parMarker"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 213, TARGET_STRING("parameters/parMaxTrajDur"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 214, TARGET_STRING("parameters/parPStop"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 215, TARGET_STRING("parameters/parTrajMode"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 216, TARGET_STRING("parameters/parVThresh"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 217, TARGET_STRING("parameters/parWiggleAmp"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 218, TARGET_STRING("parameters/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 219, TARGET_STRING("parameters/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 220, TARGET_STRING("parameters/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 221, TARGET_STRING("parameters/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 222, TARGET_STRING("parameters/Saturation2"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 223, TARGET_STRING("parameters/Saturation2"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 224, TARGET_STRING("signals/sigForce1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 225, TARGET_STRING("signals/sigForce1Clean"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 226, TARGET_STRING("signals/sigForce2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 227, TARGET_STRING("signals/sigForce2Clean"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 228, TARGET_STRING("signals/sigGravAccel"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 229, TARGET_STRING("signals/sigTargetTime"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 230, TARGET_STRING("Feedback/Discrete Derivative/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 231, TARGET_STRING("Feedback/Discrete Derivative1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 232, TARGET_STRING("Robot/filtered force output/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 233, TARGET_STRING("Robot/filtered force output/Memory1"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 234, TARGET_STRING("Robot/get offsets/Memory"),
    TARGET_STRING("X0"), 0, 0, 0 },

  { 235, TARGET_STRING("Robot/get offsets/Memory1"),
    TARGET_STRING("X0"), 0, 4, 0 },

  { 236, TARGET_STRING("Robot/gravDir/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 237, TARGET_STRING("Robot/gravDir/gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 238, TARGET_STRING("controller/Discrete PID Controller/Filter"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 239, TARGET_STRING("controller/Discrete PID Controller/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 240, TARGET_STRING("controller/Discrete PID Controller/Integrator"),
    TARGET_STRING("gainval"), 0, 0, 0 },

  { 241, TARGET_STRING("controller/Discrete PID Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 242, TARGET_STRING("controller/gain transition/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 243, TARGET_STRING("controller/initial ramp/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 244, TARGET_STRING("controller/initial ramp/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 245, TARGET_STRING("parameters/gain transition/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 246, TARGET_STRING("parameters/gain transition1/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 247, TARGET_STRING("parameters/gain transition2/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 248, TARGET_STRING("parameters/gain transition3/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 249, TARGET_STRING("parameters/gain transition4/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  { 250, TARGET_STRING("parameters/gain transition5/Memory"),
    TARGET_STRING("X0"), 0, 6, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 251, TARGET_STRING("Alow"), 0, 7, 0 },

  { 252, TARGET_STRING("Blow"), 0, 1, 0 },

  { 253, TARGET_STRING("Clow"), 0, 4, 0 },

  { 254, TARGET_STRING("Dlow"), 0, 0, 0 },

  { 255, TARGET_STRING("x0low"), 0, 1, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &FingerStrokeAssistance_B.Bias,      /* 0: Signal */
  &FingerStrokeAssistance_B.DataTypeConversion,/* 1: Signal */
  &FingerStrokeAssistance_B.DiscreteTimeIntegrator,/* 2: Signal */
  &FingerStrokeAssistance_B.Gain_c,    /* 3: Signal */
  &FingerStrokeAssistance_B.Gain1_p,   /* 4: Signal */
  &FingerStrokeAssistance_B.MultiportSwitch,/* 5: Signal */
  &FingerStrokeAssistance_B.Saturation_b,/* 6: Signal */
  &FingerStrokeAssistance_B.SineWave,  /* 7: Signal */
  &FingerStrokeAssistance_B.ManualSwitch1,/* 8: Signal */
  &FingerStrokeAssistance_B.ManualSwitch2,/* 9: Signal */
  &FingerStrokeAssistance_B.ManualSwitch3,/* 10: Signal */
  &FingerStrokeAssistance_B.Delay[0],  /* 11: Signal */
  &FingerStrokeAssistance_B.DiscreteFilter,/* 12: Signal */
  &FingerStrokeAssistance_B.FixPtRelationalOperator,/* 13: Signal */
  &FingerStrokeAssistance_B.Uk1,       /* 14: Signal */
  &FingerStrokeAssistance_B.DiscreteTimeIntegrator_g,/* 15: Signal */
  &FingerStrokeAssistance_B.DiscreteTimeIntegrator1,/* 16: Signal */
  &FingerStrokeAssistance_B.Gain,      /* 17: Signal */
  &FingerStrokeAssistance_B.Gain1,     /* 18: Signal */
  &FingerStrokeAssistance_B.PCI6221ENC,/* 19: Signal */
  &FingerStrokeAssistance_B.PCI6221ENC1,/* 20: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o1,/* 21: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o2,/* 22: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o3,/* 23: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o4,/* 24: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o5,/* 25: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o6,/* 26: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o7,/* 27: Signal */
  &FingerStrokeAssistance_B.PCI6221AD1_o8,/* 28: Signal */
  &FingerStrokeAssistance_B.Gain_d,    /* 29: Signal */
  &FingerStrokeAssistance_B.Gain1_a,   /* 30: Signal */
  &FingerStrokeAssistance_B.Product[0],/* 31: Signal */
  &FingerStrokeAssistance_B.Saturation_m,/* 32: Signal */
  &FingerStrokeAssistance_B.Sum_h[0],  /* 33: Signal */
  &FingerStrokeAssistance_B.parChangeRate,/* 34: Signal */
  &FingerStrokeAssistance_B.parFThresh,/* 35: Signal */
  &FingerStrokeAssistance_B.parFixedDur,/* 36: Signal */
  &FingerStrokeAssistance_B.parForceTrigger,/* 37: Signal */
  &FingerStrokeAssistance_B.parKd1,    /* 38: Signal */
  &FingerStrokeAssistance_B.parKd2,    /* 39: Signal */
  &FingerStrokeAssistance_B.parKdV1,   /* 40: Signal */
  &FingerStrokeAssistance_B.parKdV2,   /* 41: Signal */
  &FingerStrokeAssistance_B.parKp1,    /* 42: Signal */
  &FingerStrokeAssistance_B.parKp2,    /* 43: Signal */
  &FingerStrokeAssistance_B.parLeftMode,/* 44: Signal */
  &FingerStrokeAssistance_B.parMarker, /* 45: Signal */
  &FingerStrokeAssistance_B.parMaxTrajDur,/* 46: Signal */
  &FingerStrokeAssistance_B.parPStop,  /* 47: Signal */
  &FingerStrokeAssistance_B.parTrajMode,/* 48: Signal */
  &FingerStrokeAssistance_B.parVThresh,/* 49: Signal */
  &FingerStrokeAssistance_B.parWiggleAmp,/* 50: Signal */
  &FingerStrokeAssistance_B.RoundingFunction,/* 51: Signal */
  &FingerStrokeAssistance_B.Saturation,/* 52: Signal */
  &FingerStrokeAssistance_B.Saturation1_n,/* 53: Signal */
  &FingerStrokeAssistance_B.Saturation2,/* 54: Signal */
  &FingerStrokeAssistance_B.DigitalClock_f,/* 55: Signal */
  &FingerStrokeAssistance_B.sigForce1, /* 56: Signal */
  &FingerStrokeAssistance_B.sigForce1Clean,/* 57: Signal */
  &FingerStrokeAssistance_B.sigForce2, /* 58: Signal */
  &FingerStrokeAssistance_B.sigForce2Clean,/* 59: Signal */
  &FingerStrokeAssistance_B.sigGravAccel,/* 60: Signal */
  &FingerStrokeAssistance_B.sigTargetTime,/* 61: Signal */
  &FingerStrokeAssistance_B.Diff,      /* 62: Signal */
  &FingerStrokeAssistance_B.TSamp,     /* 63: Signal */
  &FingerStrokeAssistance_B.Uk1_d,     /* 64: Signal */
  &FingerStrokeAssistance_B.Diff_i,    /* 65: Signal */
  &FingerStrokeAssistance_B.TSamp_i,   /* 66: Signal */
  &FingerStrokeAssistance_B.Uk1_m,     /* 67: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction_my.output1,/* 68: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction_my.output2,/* 69: Signal */
  &FingerStrokeAssistance_B.output[0], /* 70: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction.output1,/* 71: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction.output2,/* 72: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction_n.output1,/* 73: Signal */
  &FingerStrokeAssistance_B.sf_MATLABFunction_n.output2,/* 74: Signal */
  &FingerStrokeAssistance_B.LowPass100Hz,/* 75: Signal */
  &FingerStrokeAssistance_B.LowPass100Hz1,/* 76: Signal */
  &FingerStrokeAssistance_B.Memory_n,  /* 77: Signal */
  &FingerStrokeAssistance_B.Memory1_j, /* 78: Signal */
  &FingerStrokeAssistance_B.encoder1,  /* 79: Signal */
  &FingerStrokeAssistance_B.encoder2,  /* 80: Signal */
  &FingerStrokeAssistance_B.summedVals[0],/* 81: Signal */
  &FingerStrokeAssistance_B.nSamples,  /* 82: Signal */
  &FingerStrokeAssistance_B.DigitalClock,/* 83: Signal */
  &FingerStrokeAssistance_B.Memory,    /* 84: Signal */
  &FingerStrokeAssistance_B.Memory1[0],/* 85: Signal */
  &FingerStrokeAssistance_B.gain,      /* 86: Signal */
  &FingerStrokeAssistance_B.Sum,       /* 87: Signal */
  &FingerStrokeAssistance_B.Filter[0], /* 88: Signal */
  &FingerStrokeAssistance_B.Integrator[0],/* 89: Signal */
  &FingerStrokeAssistance_B.DerivativeGain[0],/* 90: Signal */
  &FingerStrokeAssistance_B.FilterCoefficient[0],/* 91: Signal */
  &FingerStrokeAssistance_B.IntegralGain[0],/* 92: Signal */
  &FingerStrokeAssistance_B.ProportionalGain[0],/* 93: Signal */
  &FingerStrokeAssistance_B.Sum_a[0],  /* 94: Signal */
  &FingerStrokeAssistance_B.SumD[0],   /* 95: Signal */
  &FingerStrokeAssistance_B.sf_gainramp.val,/* 96: Signal */
  &FingerStrokeAssistance_B.sf_gainramp.state1[0],/* 97: Signal */
  &FingerStrokeAssistance_B.Memory_c[0],/* 98: Signal */
  &FingerStrokeAssistance_B.Force[0],  /* 99: Signal */
  &FingerStrokeAssistance_B.y,         /* 100: Signal */
  &FingerStrokeAssistance_B.Saturation1,/* 101: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_o.val,/* 102: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_o.state1[0],/* 103: Signal */
  &FingerStrokeAssistance_B.Memory_g[0],/* 104: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_i.val,/* 105: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_i.state1[0],/* 106: Signal */
  &FingerStrokeAssistance_B.Memory_i[0],/* 107: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_id.val,/* 108: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_id.state1[0],/* 109: Signal */
  &FingerStrokeAssistance_B.Memory_e[0],/* 110: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_b.val,/* 111: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_b.state1[0],/* 112: Signal */
  &FingerStrokeAssistance_B.Memory_o[0],/* 113: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_f.val,/* 114: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_f.state1[0],/* 115: Signal */
  &FingerStrokeAssistance_B.Memory_nk[0],/* 116: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_a.val,/* 117: Signal */
  &FingerStrokeAssistance_B.sf_gainramp_a.state1[0],/* 118: Signal */
  &FingerStrokeAssistance_B.Memory_os[0],/* 119: Signal */
  &FingerStrokeAssistance_P.DetectChange_vinit,/* 120: Mask Parameter */
  &FingerStrokeAssistance_P.Bias_Bias, /* 121: Block Parameter */
  &FingerStrokeAssistance_P.Constant_Value,/* 122: Block Parameter */
  &FingerStrokeAssistance_P.Constant1_Value,/* 123: Block Parameter */
  &FingerStrokeAssistance_P.Constant2_Value,/* 124: Block Parameter */
  &FingerStrokeAssistance_P.Constant3_Value,/* 125: Block Parameter */
  &FingerStrokeAssistance_P.ForceOn_Value,/* 126: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainval,/* 127: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC,/* 128: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_UpperSat,/* 129: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_LowerSat,/* 130: Block Parameter */
  &FingerStrokeAssistance_P.Gain_Gain, /* 131: Block Parameter */
  &FingerStrokeAssistance_P.Gain1_Gain_n,/* 132: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_UpperSat,/* 133: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_LowerSat,/* 134: Block Parameter */
  &FingerStrokeAssistance_P.SineWave_Amp,/* 135: Block Parameter */
  &FingerStrokeAssistance_P.SineWave_Bias,/* 136: Block Parameter */
  &FingerStrokeAssistance_P.SineWave_Freq,/* 137: Block Parameter */
  &FingerStrokeAssistance_P.SineWave_Hsin,/* 138: Block Parameter */
  &FingerStrokeAssistance_P.SineWave_HCos,/* 139: Block Parameter */
  &FingerStrokeAssistance_P.SineWave_PSin,/* 140: Block Parameter */
  &FingerStrokeAssistance_P.SineWave_PCos,/* 141: Block Parameter */
  &FingerStrokeAssistance_P.ManualSwitch1_CurrentSetting,/* 142: Block Parameter */
  &FingerStrokeAssistance_P.ManualSwitch2_CurrentSetting,/* 143: Block Parameter */
  &FingerStrokeAssistance_P.ManualSwitch3_CurrentSetting,/* 144: Block Parameter */
  &FingerStrokeAssistance_P.Delay_DelayLength,/* 145: Block Parameter */
  &FingerStrokeAssistance_P.Delay_InitialCondition,/* 146: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteFilter_NumCoef[0],/* 147: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteFilter_DenCoef[0],/* 148: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteFilter_InitialStates,/* 149: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteDerivative_ICPrevScaled,/* 150: Mask Parameter */
  &FingerStrokeAssistance_P.DiscreteDerivative1_ICPrevScale,/* 151: Mask Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainva_n,/* 152: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC_k,/* 153: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator1_gainval,/* 154: Block Parameter */
  &FingerStrokeAssistance_P.DiscreteTimeIntegrator1_IC,/* 155: Block Parameter */
  &FingerStrokeAssistance_P.Gain_Gain_f,/* 156: Block Parameter */
  &FingerStrokeAssistance_P.Gain1_Gain,/* 157: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P1,/* 158: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P2,/* 159: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P3,/* 160: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P4,/* 161: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P5,/* 162: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P6,/* 163: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P7,/* 164: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P8,/* 165: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P9,/* 166: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC_P10,/* 167: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P1,/* 168: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P2,/* 169: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P3,/* 170: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P4,/* 171: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P5,/* 172: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P6,/* 173: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P7,/* 174: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P8,/* 175: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P9,/* 176: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221ENC1_P10,/* 177: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P1[0],/* 178: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P2[0],/* 179: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P3[0],/* 180: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P4,/* 181: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P5,/* 182: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P6,/* 183: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221AD1_P7,/* 184: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P1[0],/* 185: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P2[0],/* 186: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P3[0],/* 187: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P4[0],/* 188: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P5,/* 189: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P6,/* 190: Block Parameter */
  &FingerStrokeAssistance_P.PCI6221DA_P7,/* 191: Block Parameter */
  &FingerStrokeAssistance_P.DiscretePIDController_P,/* 192: Mask Parameter */
  &FingerStrokeAssistance_P.DiscretePIDController_I,/* 193: Mask Parameter */
  &FingerStrokeAssistance_P.DiscretePIDController_D,/* 194: Mask Parameter */
  &FingerStrokeAssistance_P.DiscretePIDController_N,/* 195: Mask Parameter */
  &FingerStrokeAssistance_P.Gain_Gain_m,/* 196: Block Parameter */
  &FingerStrokeAssistance_P.Gain1_Gain_d,/* 197: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_UpperSat_f,/* 198: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_LowerSat_o,/* 199: Block Parameter */
  &FingerStrokeAssistance_P.paremeters_must_be_one_Value,/* 200: Block Parameter */
  &FingerStrokeAssistance_P.parChangeRate_Gain,/* 201: Block Parameter */
  &FingerStrokeAssistance_P.parFThresh_Gain,/* 202: Block Parameter */
  &FingerStrokeAssistance_P.parFixedDur_Gain,/* 203: Block Parameter */
  &FingerStrokeAssistance_P.parForceTrigger_Gain,/* 204: Block Parameter */
  &FingerStrokeAssistance_P.parKd1_Gain,/* 205: Block Parameter */
  &FingerStrokeAssistance_P.parKd2_Gain,/* 206: Block Parameter */
  &FingerStrokeAssistance_P.parKdV1_Gain,/* 207: Block Parameter */
  &FingerStrokeAssistance_P.parKdV2_Gain,/* 208: Block Parameter */
  &FingerStrokeAssistance_P.parKp1_Gain,/* 209: Block Parameter */
  &FingerStrokeAssistance_P.parKp2_Gain,/* 210: Block Parameter */
  &FingerStrokeAssistance_P.parLeftMode_Gain,/* 211: Block Parameter */
  &FingerStrokeAssistance_P.parMarker_Gain,/* 212: Block Parameter */
  &FingerStrokeAssistance_P.parMaxTrajDur_Gain,/* 213: Block Parameter */
  &FingerStrokeAssistance_P.parPStop_Gain,/* 214: Block Parameter */
  &FingerStrokeAssistance_P.parTrajMode_Gain,/* 215: Block Parameter */
  &FingerStrokeAssistance_P.parVThresh_Gain,/* 216: Block Parameter */
  &FingerStrokeAssistance_P.parWiggleAmp_Gain,/* 217: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_UpperSat_h,/* 218: Block Parameter */
  &FingerStrokeAssistance_P.Saturation_LowerSat_h,/* 219: Block Parameter */
  &FingerStrokeAssistance_P.Saturation1_UpperSat_k,/* 220: Block Parameter */
  &FingerStrokeAssistance_P.Saturation1_LowerSat_l,/* 221: Block Parameter */
  &FingerStrokeAssistance_P.Saturation2_UpperSat,/* 222: Block Parameter */
  &FingerStrokeAssistance_P.Saturation2_LowerSat,/* 223: Block Parameter */
  &FingerStrokeAssistance_P.sigForce1_Gain,/* 224: Block Parameter */
  &FingerStrokeAssistance_P.sigForce1Clean_Gain,/* 225: Block Parameter */
  &FingerStrokeAssistance_P.sigForce2_Gain,/* 226: Block Parameter */
  &FingerStrokeAssistance_P.sigForce2Clean_Gain,/* 227: Block Parameter */
  &FingerStrokeAssistance_P.sigGravAccel_Gain,/* 228: Block Parameter */
  &FingerStrokeAssistance_P.sigTargetTime_Gain,/* 229: Block Parameter */
  &FingerStrokeAssistance_P.TSamp_WtEt,/* 230: Block Parameter */
  &FingerStrokeAssistance_P.TSamp_WtEt_k,/* 231: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_h,/* 232: Block Parameter */
  &FingerStrokeAssistance_P.Memory1_X0_a,/* 233: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0, /* 234: Block Parameter */
  &FingerStrokeAssistance_P.Memory1_X0[0],/* 235: Block Parameter */
  &FingerStrokeAssistance_P.Constant_Value_k,/* 236: Block Parameter */
  &FingerStrokeAssistance_P.gain_Gain, /* 237: Block Parameter */
  &FingerStrokeAssistance_P.Filter_gainval,/* 238: Block Parameter */
  &FingerStrokeAssistance_P.Filter_IC, /* 239: Block Parameter */
  &FingerStrokeAssistance_P.Integrator_gainval,/* 240: Block Parameter */
  &FingerStrokeAssistance_P.Integrator_IC,/* 241: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_e[0],/* 242: Block Parameter */
  &FingerStrokeAssistance_P.Saturation1_UpperSat,/* 243: Block Parameter */
  &FingerStrokeAssistance_P.Saturation1_LowerSat,/* 244: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_g[0],/* 245: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_a[0],/* 246: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_b[0],/* 247: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_g0[0],/* 248: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_bp[0],/* 249: Block Parameter */
  &FingerStrokeAssistance_P.Memory_X0_eq[0],/* 250: Block Parameter */
  &FingerStrokeAssistance_P.Alow[0],   /* 251: Model Parameter */
  &FingerStrokeAssistance_P.Blow[0],   /* 252: Model Parameter */
  &FingerStrokeAssistance_P.Clow[0],   /* 253: Model Parameter */
  &FingerStrokeAssistance_P.Dlow,      /* 254: Model Parameter */
  &FingerStrokeAssistance_P.x0low[0],  /* 255: Model Parameter */
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

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

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
  5,                                   /* 4 */
  1,                                   /* 5 */
  4,                                   /* 6 */
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
  { rtBlockSignals, 120,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 131,
    rtModelParameters, 5 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1243580292U,
    2864936589U,
    2203602391U,
    1178544799U },
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
