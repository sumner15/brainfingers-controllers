/*
 * FingerStrokeAssistance_private.h
 *
 * Code generation for model "FingerStrokeAssistance".
 *
 * Model version              : 1.1046
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Thu Feb 23 15:35:38 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FingerStrokeAssistance_private_h_
#define RTW_HEADER_FingerStrokeAssistance_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "FingerStrokeAssistance.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void encnipcim(SimStruct *rts);
extern void danipcim(SimStruct *rts);
extern void adnipcim(SimStruct *rts);
extern void FingerStrokeAssi_MATLABFunction(real_T rtu_input1, real_T rtu_input2,
  real_T rtu_leftyMode, B_MATLABFunction_FingerStroke_T *localB);
extern void FingerStrokeAssistance_gainramp(real_T rtu_tr, real_T rtu_valD,
  const real_T rtu_state[4], B_gainramp_FingerStrokeAssist_T *localB);

#endif                                 /* RTW_HEADER_FingerStrokeAssistance_private_h_ */
