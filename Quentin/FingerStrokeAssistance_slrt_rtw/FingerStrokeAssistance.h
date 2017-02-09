/*
 * FingerStrokeAssistance.h
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

#ifndef RTW_HEADER_FingerStrokeAssistance_h_
#define RTW_HEADER_FingerStrokeAssistance_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef FingerStrokeAssistance_COMMON_INCLUDES_
# define FingerStrokeAssistance_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                                 /* FingerStrokeAssistance_COMMON_INCLUDES_ */

#include "FingerStrokeAssistance_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_FingerStrokeAssistance RT_MODEL_FingerStrokeAssistance_T

/* Definition for use in the target main file */
#define FingerStrokeAssistance_rtModel RT_MODEL_FingerStrokeAssistance_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S9>/MATLAB Function' */
typedef struct {
  real_T output1;                      /* '<S9>/MATLAB Function' */
  real_T output2;                      /* '<S9>/MATLAB Function' */
} B_MATLABFunction_FingerStroke_T;

/* Block signals for system '<S22>/gainramp' */
typedef struct {
  real_T val;                          /* '<S22>/gainramp' */
  real_T state1[4];                    /* '<S22>/gainramp' */
} B_gainramp_FingerStrokeAssist_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Delay[2];                     /* '<Root>/Delay' */
  real_T ManualSwitch3;                /* '<Root>/Manual Switch3' */
  real_T Uk1;                          /* '<S1>/Delay Input1' */
  real_T DataTypeConversion;           /* '<Root>/Data Type Conversion' */
  real_T DiscreteFilter;               /* '<Root>/Discrete Filter' */
  real_T DiscreteTimeIntegrator;       /* '<Root>/Discrete-Time Integrator' */
  real_T PCI6221ENC;                   /* '<S3>/PCI 6221 ENC ' */
  real_T PCI6221ENC1;                  /* '<S3>/PCI 6221 ENC 1' */
  real_T parLeftMode;                  /* '<S5>/parLeftMode' */
  real_T Saturation;                   /* '<S5>/Saturation' */
  real_T DigitalClock;                 /* '<S14>/Digital Clock' */
  real_T Memory1[2];                   /* '<S14>/Memory1' */
  real_T Memory;                       /* '<S14>/Memory' */
  real_T Gain1;                        /* '<S3>/Gain1' */
  real_T TSamp;                        /* '<S7>/TSamp' */
  real_T Uk1_d;                        /* '<S7>/UD' */
  real_T Diff;                         /* '<S7>/Diff' */
  real_T Gain;                         /* '<S3>/Gain' */
  real_T TSamp_i;                      /* '<S8>/TSamp' */
  real_T Uk1_m;                        /* '<S8>/UD' */
  real_T Diff_i;                       /* '<S8>/Diff' */
  real_T DiscreteTimeIntegrator_g;     /* '<S2>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1;      /* '<S2>/Discrete-Time Integrator1' */
  real_T ManualSwitch2;                /* '<Root>/Manual Switch2' */
  real_T Gain1_p;                      /* '<Root>/Gain1' */
  real_T MultiportSwitch;              /* '<Root>/Multiport Switch' */
  real_T PCI6221AD1_o1;                /* '<S3>/PCI-6221 AD1' */
  real_T PCI6221AD1_o2;                /* '<S3>/PCI-6221 AD1' */
  real_T PCI6221AD1_o3;                /* '<S3>/PCI-6221 AD1' */
  real_T PCI6221AD1_o4;                /* '<S3>/PCI-6221 AD1' */
  real_T PCI6221AD1_o5;                /* '<S3>/PCI-6221 AD1' */
  real_T PCI6221AD1_o6;                /* '<S3>/PCI-6221 AD1' */
  real_T PCI6221AD1_o7;                /* '<S3>/PCI-6221 AD1' */
  real_T PCI6221AD1_o8;                /* '<S3>/PCI-6221 AD1' */
  real_T Sum;                          /* '<S15>/Sum' */
  real_T gain;                         /* '<S15>/gain' */
  real_T parChangeRate;                /* '<S5>/parChangeRate' */
  real_T Saturation_m;                 /* '<S4>/Saturation' */
  real_T Memory_c[4];                  /* '<S22>/Memory' */
  real_T Sum_h[2];                     /* '<S4>/Sum' */
  real_T ProportionalGain[2];          /* '<S21>/Proportional Gain' */
  real_T Integrator[2];                /* '<S21>/Integrator' */
  real_T DerivativeGain[2];            /* '<S21>/Derivative Gain' */
  real_T Filter[2];                    /* '<S21>/Filter' */
  real_T SumD[2];                      /* '<S21>/SumD' */
  real_T FilterCoefficient[2];         /* '<S21>/Filter Coefficient' */
  real_T Sum_a[2];                     /* '<S21>/Sum' */
  real_T Product[2];                   /* '<S4>/Product' */
  real_T Gain_d;                       /* '<S4>/Gain' */
  real_T Gain1_a;                      /* '<S4>/Gain1' */
  real_T DigitalClock_f;               /* '<S6>/Digital Clock' */
  real_T sigTargetTime;                /* '<S6>/sigTargetTime' */
  real_T Saturation1;                  /* '<S23>/Saturation1' */
  real_T LowPass100Hz;                 /* '<S13>/Low Pass 100 Hz' */
  real_T LowPass100Hz1;                /* '<S13>/Low Pass 100 Hz1' */
  real_T Memory_n;                     /* '<S13>/Memory' */
  real_T Memory1_j;                    /* '<S13>/Memory1' */
  real_T IntegralGain[2];              /* '<S21>/Integral Gain' */
  real_T SineWave;                     /* '<Root>/Sine Wave' */
  real_T parTrajMode;                  /* '<S5>/parTrajMode' */
  real_T RoundingFunction;             /* '<S5>/Rounding Function' */
  real_T Saturation1_n;                /* '<S5>/Saturation1' */
  real_T parFixedDur;                  /* '<S5>/parFixedDur' */
  real_T Saturation2;                  /* '<S5>/Saturation2' */
  real_T Memory_g[4];                  /* '<S27>/Memory' */
  real_T parKp1;                       /* '<S5>/parKp1' */
  real_T Memory_i[4];                  /* '<S28>/Memory' */
  real_T parKp2;                       /* '<S5>/parKp2' */
  real_T Memory_e[4];                  /* '<S29>/Memory' */
  real_T parKd1;                       /* '<S5>/parKd1' */
  real_T Memory_o[4];                  /* '<S30>/Memory' */
  real_T parKd2;                       /* '<S5>/parKd2' */
  real_T Memory_nk[4];                 /* '<S31>/Memory' */
  real_T parKdV1;                      /* '<S5>/parKdV1' */
  real_T Memory_os[4];                 /* '<S32>/Memory' */
  real_T parKdV2;                      /* '<S5>/parKdV2' */
  real_T parFThresh;                   /* '<S5>/parFThresh' */
  real_T parForceTrigger;              /* '<S5>/parForceTrigger' */
  real_T parMarker;                    /* '<S5>/parMarker' */
  real_T parMaxTrajDur;                /* '<S5>/parMaxTrajDur' */
  real_T parPStop;                     /* '<S5>/parPStop' */
  real_T parVThresh;                   /* '<S5>/parVThresh' */
  real_T parWiggleAmp;                 /* '<S5>/parWiggleAmp' */
  real_T sigForce1;                    /* '<S6>/sigForce1' */
  real_T sigForce1Clean;               /* '<S6>/sigForce1Clean' */
  real_T sigForce2;                    /* '<S6>/sigForce2' */
  real_T sigForce2Clean;               /* '<S6>/sigForce2Clean' */
  real_T sigGravAccel;                 /* '<S6>/sigGravAccel' */
  real_T y;                            /* '<S23>/ramp' */
  real_T TmpSignalConversionAtSFunctionI[2];/* '<S23>/MATLAB Function' */
  real_T Force[2];                     /* '<S23>/MATLAB Function' */
  real_T encoder1;                     /* '<S14>/MATLAB Function' */
  real_T encoder2;                     /* '<S14>/MATLAB Function' */
  real_T summedVals[2];                /* '<S14>/MATLAB Function' */
  real_T nSamples;                     /* '<S14>/MATLAB Function' */
  real_T TmpSignalConversionAtSFunctio_g[5];/* '<S10>/MATLAB Function' */
  real_T output[5];                    /* '<S10>/MATLAB Function' */
  real_T ManualSwitch1;                /* '<Root>/Manual Switch1' */
  real_T Bias;                         /* '<Root>/Bias' */
  real_T Gain_c;                       /* '<Root>/Gain' */
  real_T Saturation_b;                 /* '<Root>/Saturation' */
  boolean_T FixPtRelationalOperator;   /* '<S1>/FixPt Relational Operator' */
  B_gainramp_FingerStrokeAssist_T sf_gainramp_a;/* '<S32>/gainramp' */
  B_gainramp_FingerStrokeAssist_T sf_gainramp_f;/* '<S31>/gainramp' */
  B_gainramp_FingerStrokeAssist_T sf_gainramp_b;/* '<S30>/gainramp' */
  B_gainramp_FingerStrokeAssist_T sf_gainramp_id;/* '<S29>/gainramp' */
  B_gainramp_FingerStrokeAssist_T sf_gainramp_i;/* '<S28>/gainramp' */
  B_gainramp_FingerStrokeAssist_T sf_gainramp_o;/* '<S27>/gainramp' */
  B_gainramp_FingerStrokeAssist_T sf_gainramp;/* '<S22>/gainramp' */
  B_MATLABFunction_FingerStroke_T sf_MATLABFunction_n;/* '<S12>/MATLAB Function' */
  B_MATLABFunction_FingerStroke_T sf_MATLABFunction;/* '<S11>/MATLAB Function' */
  B_MATLABFunction_FingerStroke_T sf_MATLABFunction_my;/* '<S9>/MATLAB Function' */
} B_FingerStrokeAssistance_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[2];              /* '<Root>/Delay' */
  real_T DelayInput1_DSTATE;           /* '<S1>/Delay Input1' */
  real_T DiscreteFilter_states;        /* '<Root>/Discrete Filter' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<Root>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S7>/UD' */
  real_T UD_DSTATE_i;                  /* '<S8>/UD' */
  real_T DiscreteTimeIntegrator_DSTATE_e;/* '<S2>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S2>/Discrete-Time Integrator1' */
  real_T Integrator_DSTATE[2];         /* '<S21>/Integrator' */
  real_T Filter_DSTATE[2];             /* '<S21>/Filter' */
  real_T LowPass100Hz_DSTATE[2];       /* '<S13>/Low Pass 100 Hz' */
  real_T LowPass100Hz1_DSTATE[2];      /* '<S13>/Low Pass 100 Hz1' */
  real_T DiscreteFilter_tmp;           /* '<Root>/Discrete Filter' */
  real_T Memory1_PreviousInput[2];     /* '<S14>/Memory1' */
  real_T Memory_PreviousInput;         /* '<S14>/Memory' */
  real_T Memory_PreviousInput_i[4];    /* '<S22>/Memory' */
  real_T Memory_PreviousInput_l;       /* '<S13>/Memory' */
  real_T Memory1_PreviousInput_d;      /* '<S13>/Memory1' */
  real_T lastSin;                      /* '<Root>/Sine Wave' */
  real_T lastCos;                      /* '<Root>/Sine Wave' */
  real_T Memory_PreviousInput_k[4];    /* '<S27>/Memory' */
  real_T Memory_PreviousInput_n[4];    /* '<S28>/Memory' */
  real_T Memory_PreviousInput_b[4];    /* '<S29>/Memory' */
  real_T Memory_PreviousInput_j[4];    /* '<S30>/Memory' */
  real_T Memory_PreviousInput_ix[4];   /* '<S31>/Memory' */
  real_T Memory_PreviousInput_c[4];    /* '<S32>/Memory' */
  real_T PCI6221DA_RWORK[6];           /* '<S3>/PCI-6221 DA' */
  void *PCI6221ENC_PWORK;              /* '<S3>/PCI 6221 ENC ' */
  void *PCI6221ENC1_PWORK;             /* '<S3>/PCI 6221 ENC 1' */
  void *PCI6221AD1_PWORK;              /* '<S3>/PCI-6221 AD1' */
  int32_T systemEnable;                /* '<Root>/Sine Wave' */
  int_T PCI6221AD1_IWORK[41];          /* '<S3>/PCI-6221 AD1' */
  int_T PCI6221DA_IWORK[41];           /* '<S3>/PCI-6221 DA' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S45>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_h;                 /* '<S44>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_b;                 /* '<S43>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_l;                 /* '<S46>/S-Function' */

  int8_T DiscreteTimeIntegrator_PrevRese;/* '<Root>/Discrete-Time Integrator' */
} DW_FingerStrokeAssistance_T;

/* Backward compatible GRT Identifiers */
#define rtB                            FingerStrokeAssistance_B
#define BlockIO                        B_FingerStrokeAssistance_T
#define rtP                            FingerStrokeAssistance_P
#define Parameters                     P_FingerStrokeAssistance_T
#define rtDWork                        FingerStrokeAssistance_DW
#define D_Work                         DW_FingerStrokeAssistance_T

/* Parameters (auto storage) */
struct P_FingerStrokeAssistance_T_ {
  real_T Alow[4];                      /* Variable: Alow
                                        * Referenced by:
                                        *   '<S13>/Low Pass 100 Hz'
                                        *   '<S13>/Low Pass 100 Hz1'
                                        */
  real_T Blow[2];                      /* Variable: Blow
                                        * Referenced by:
                                        *   '<S13>/Low Pass 100 Hz'
                                        *   '<S13>/Low Pass 100 Hz1'
                                        */
  real_T Clow[2];                      /* Variable: Clow
                                        * Referenced by:
                                        *   '<S13>/Low Pass 100 Hz'
                                        *   '<S13>/Low Pass 100 Hz1'
                                        */
  real_T Dlow;                         /* Variable: Dlow
                                        * Referenced by:
                                        *   '<S13>/Low Pass 100 Hz'
                                        *   '<S13>/Low Pass 100 Hz1'
                                        */
  real_T x0low[2];                     /* Variable: x0low
                                        * Referenced by:
                                        *   '<S13>/Low Pass 100 Hz'
                                        *   '<S13>/Low Pass 100 Hz1'
                                        */
  real_T DiscretePIDController_D;      /* Mask Parameter: DiscretePIDController_D
                                        * Referenced by: '<S21>/Derivative Gain'
                                        */
  real_T DiscretePIDController_I;      /* Mask Parameter: DiscretePIDController_I
                                        * Referenced by: '<S21>/Integral Gain'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S7>/UD'
                                          */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S8>/UD'
                                          */
  real_T DiscretePIDController_N;      /* Mask Parameter: DiscretePIDController_N
                                        * Referenced by: '<S21>/Filter Coefficient'
                                        */
  real_T DiscretePIDController_P;      /* Mask Parameter: DiscretePIDController_P
                                        * Referenced by: '<S21>/Proportional Gain'
                                        */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S1>/Delay Input1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Bias_Bias;                    /* Expression: 0
                                        * Referenced by: '<Root>/Bias'
                                        */
  real_T Gain_Gain;                    /* Expression: -0.7
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 0.9
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0.1
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Constant3_Value;              /* Expression: 2
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<Root>/Delay'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T DiscreteFilter_NumCoef[2];    /* Expression: [b_hp]
                                        * Referenced by: '<Root>/Discrete Filter'
                                        */
  real_T DiscreteFilter_DenCoef[2];    /* Expression: [a_hp]
                                        * Referenced by: '<Root>/Discrete Filter'
                                        */
  real_T DiscreteFilter_InitialStates; /* Expression: 0
                                        * Referenced by: '<Root>/Discrete Filter'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<Root>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0.1
                                        * Referenced by: '<Root>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 0.9
                                          * Referenced by: '<Root>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: 0.1
                                          * Referenced by: '<Root>/Discrete-Time Integrator'
                                          */
  real_T PCI6221ENC_P1_Size[2];        /* Computed Parameter: PCI6221ENC_P1_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P1;                /* Expression: device
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P2_Size[2];        /* Computed Parameter: PCI6221ENC_P2_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P2;                /* Expression: channel
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P3_Size[2];        /* Computed Parameter: PCI6221ENC_P3_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P3;                /* Expression: countMode
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P4_Size[2];        /* Computed Parameter: PCI6221ENC_P4_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P4;                /* Expression: initCount
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P5_Size[2];        /* Computed Parameter: PCI6221ENC_P5_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P5;                /* Expression: reload
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P6_Size[2];        /* Computed Parameter: PCI6221ENC_P6_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P6;                /* Expression: indexPhase
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P7_Size[2];        /* Computed Parameter: PCI6221ENC_P7_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P7;                /* Expression: filter
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P8_Size[2];        /* Computed Parameter: PCI6221ENC_P8_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P8;                /* Expression: outmask
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P9_Size[2];        /* Computed Parameter: PCI6221ENC_P9_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P9;                /* Expression: sampleTime
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P10_Size[2];       /* Computed Parameter: PCI6221ENC_P10_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC_P10;               /* Expression: slot
                                        * Referenced by: '<S3>/PCI 6221 ENC '
                                        */
  real_T PCI6221ENC1_P1_Size[2];       /* Computed Parameter: PCI6221ENC1_P1_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P1;               /* Expression: device
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P2_Size[2];       /* Computed Parameter: PCI6221ENC1_P2_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P2;               /* Expression: channel
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P3_Size[2];       /* Computed Parameter: PCI6221ENC1_P3_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P3;               /* Expression: countMode
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P4_Size[2];       /* Computed Parameter: PCI6221ENC1_P4_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P4;               /* Expression: initCount
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P5_Size[2];       /* Computed Parameter: PCI6221ENC1_P5_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P5;               /* Expression: reload
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P6_Size[2];       /* Computed Parameter: PCI6221ENC1_P6_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P6;               /* Expression: indexPhase
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P7_Size[2];       /* Computed Parameter: PCI6221ENC1_P7_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P7;               /* Expression: filter
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P8_Size[2];       /* Computed Parameter: PCI6221ENC1_P8_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P8;               /* Expression: outmask
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P9_Size[2];       /* Computed Parameter: PCI6221ENC1_P9_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P9;               /* Expression: sampleTime
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P10_Size[2];      /* Computed Parameter: PCI6221ENC1_P10_Size
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T PCI6221ENC1_P10;              /* Expression: slot
                                        * Referenced by: '<S3>/PCI 6221 ENC 1'
                                        */
  real_T paremeters_must_be_one_Value; /* Expression: 1
                                        * Referenced by: '<S5>/paremeters_ must_be_one'
                                        */
  real_T parLeftMode_Gain;             /* Expression: 0
                                        * Referenced by: '<S5>/parLeftMode'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 1
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: 0
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Memory1_X0[2];                /* Expression: [0,0]
                                        * Referenced by: '<S14>/Memory1'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S14>/Memory'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/4500.0
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S7>/TSamp'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 1/4500.0
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T TSamp_WtEt_k;                 /* Computed Parameter: TSamp_WtEt_k
                                        * Referenced by: '<S8>/TSamp'
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;/* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                                          * Referenced by: '<S2>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_k;  /* Expression: 0
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S2>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S2>/Discrete-Time Integrator1'
                                        */
  real_T ForceOn_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/Force On'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: -1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant_Value_k;             /* Expression: 1.5
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T PCI6221AD1_P1_Size[2];        /* Computed Parameter: PCI6221AD1_P1_Size
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P1[8];             /* Expression: channel
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P2_Size[2];        /* Computed Parameter: PCI6221AD1_P2_Size
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P2[8];             /* Expression: range
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P3_Size[2];        /* Computed Parameter: PCI6221AD1_P3_Size
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P3[8];             /* Expression: coupling
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P4_Size[2];        /* Computed Parameter: PCI6221AD1_P4_Size
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P4;                /* Expression: scantime
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P5_Size[2];        /* Computed Parameter: PCI6221AD1_P5_Size
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P5;                /* Expression: sampletime
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P6_Size[2];        /* Computed Parameter: PCI6221AD1_P6_Size
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P6;                /* Expression: slot
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P7_Size[2];        /* Computed Parameter: PCI6221AD1_P7_Size
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T PCI6221AD1_P7;                /* Expression: boardType
                                        * Referenced by: '<S3>/PCI-6221 AD1'
                                        */
  real_T gain_Gain;                    /* Expression: .172
                                        * Referenced by: '<S15>/gain'
                                        */
  real_T parChangeRate_Gain;           /* Expression: .05
                                        * Referenced by: '<S5>/parChangeRate'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: 1
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: 0
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Memory_X0_e[4];               /* Expression: zeros(1,4)
                                        * Referenced by: '<S22>/Memory'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S21>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S21>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S21>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S21>/Filter'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 1
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T sigTargetTime_Gain;           /* Expression: 1
                                        * Referenced by: '<S6>/sigTargetTime'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 2.5
                                        * Referenced by: '<S23>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -2.5
                                        * Referenced by: '<S23>/Saturation1'
                                        */
  real_T PCI6221DA_P1_Size[2];         /* Computed Parameter: PCI6221DA_P1_Size
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P1[2];              /* Expression: channel
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P2_Size[2];         /* Computed Parameter: PCI6221DA_P2_Size
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P2[2];              /* Expression: range
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P3_Size[2];         /* Computed Parameter: PCI6221DA_P3_Size
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P3[2];              /* Expression: reset
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P4_Size[2];         /* Computed Parameter: PCI6221DA_P4_Size
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P4[2];              /* Expression: initValue
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P5_Size[2];         /* Computed Parameter: PCI6221DA_P5_Size
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P5;                 /* Expression: sampletime
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P6_Size[2];         /* Computed Parameter: PCI6221DA_P6_Size
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P6;                 /* Expression: slot
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P7_Size[2];         /* Computed Parameter: PCI6221DA_P7_Size
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P7;                 /* Expression: boardType
                                        * Referenced by: '<S3>/PCI-6221 DA'
                                        */
  real_T Memory_X0_h;                  /* Expression: 0
                                        * Referenced by: '<S13>/Memory'
                                        */
  real_T Memory1_X0_a;                 /* Expression: 0
                                        * Referenced by: '<S13>/Memory1'
                                        */
  real_T SineWave_Amp;                 /* Expression: 0.5
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0.5
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 0.5
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Hsin;                /* Computed Parameter: SineWave_Hsin
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_HCos;                /* Computed Parameter: SineWave_HCos
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_PSin;                /* Computed Parameter: SineWave_PSin
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_PCos;                /* Computed Parameter: SineWave_PCos
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T parTrajMode_Gain;             /* Expression: 1
                                        * Referenced by: '<S5>/parTrajMode'
                                        */
  real_T Saturation1_UpperSat_k;       /* Expression: 4
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_l;       /* Expression: 1
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T parFixedDur_Gain;             /* Expression: 3
                                        * Referenced by: '<S5>/parFixedDur'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S5>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: .25
                                        * Referenced by: '<S5>/Saturation2'
                                        */
  real_T Memory_X0_g[4];               /* Expression: zeros(1,4)
                                        * Referenced by: '<S27>/Memory'
                                        */
  real_T parKp1_Gain;                  /* Expression: 0
                                        * Referenced by: '<S5>/parKp1'
                                        */
  real_T Memory_X0_a[4];               /* Expression: zeros(1,4)
                                        * Referenced by: '<S28>/Memory'
                                        */
  real_T parKp2_Gain;                  /* Expression: 0
                                        * Referenced by: '<S5>/parKp2'
                                        */
  real_T Memory_X0_b[4];               /* Expression: zeros(1,4)
                                        * Referenced by: '<S29>/Memory'
                                        */
  real_T parKd1_Gain;                  /* Expression: 0.0
                                        * Referenced by: '<S5>/parKd1'
                                        */
  real_T Memory_X0_g0[4];              /* Expression: zeros(1,4)
                                        * Referenced by: '<S30>/Memory'
                                        */
  real_T parKd2_Gain;                  /* Expression: 0.0
                                        * Referenced by: '<S5>/parKd2'
                                        */
  real_T Memory_X0_bp[4];              /* Expression: zeros(1,4)
                                        * Referenced by: '<S31>/Memory'
                                        */
  real_T parKdV1_Gain;                 /* Expression: 0.0
                                        * Referenced by: '<S5>/parKdV1'
                                        */
  real_T Memory_X0_eq[4];              /* Expression: zeros(1,4)
                                        * Referenced by: '<S32>/Memory'
                                        */
  real_T parKdV2_Gain;                 /* Expression: 0.0
                                        * Referenced by: '<S5>/parKdV2'
                                        */
  real_T parFThresh_Gain;              /* Expression: 0.25
                                        * Referenced by: '<S5>/parFThresh'
                                        */
  real_T parForceTrigger_Gain;         /* Expression: 0
                                        * Referenced by: '<S5>/parForceTrigger'
                                        */
  real_T parMarker_Gain;               /* Expression: 0
                                        * Referenced by: '<S5>/parMarker'
                                        */
  real_T parMaxTrajDur_Gain;           /* Expression: .4
                                        * Referenced by: '<S5>/parMaxTrajDur'
                                        */
  real_T parPStop_Gain;                /* Expression: 0.75
                                        * Referenced by: '<S5>/parPStop'
                                        */
  real_T parVThresh_Gain;              /* Expression: .375
                                        * Referenced by: '<S5>/parVThresh'
                                        */
  real_T parWiggleAmp_Gain;            /* Expression: .5
                                        * Referenced by: '<S5>/parWiggleAmp'
                                        */
  real_T sigForce1_Gain;               /* Expression: 1
                                        * Referenced by: '<S6>/sigForce1'
                                        */
  real_T sigForce1Clean_Gain;          /* Expression: 1
                                        * Referenced by: '<S6>/sigForce1Clean'
                                        */
  real_T sigForce2_Gain;               /* Expression: 1
                                        * Referenced by: '<S6>/sigForce2'
                                        */
  real_T sigForce2Clean_Gain;          /* Expression: 1
                                        * Referenced by: '<S6>/sigForce2Clean'
                                        */
  real_T sigGravAccel_Gain;            /* Expression: 1
                                        * Referenced by: '<S6>/sigGravAccel'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<Root>/Delay'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch1'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch3'
                                        */
  uint8_T ManualSwitch2_CurrentSetting;/* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_FingerStrokeAssistance_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[4];
    SimStruct *childSFunctionPtrs[4];
    struct _ssBlkInfo2 blkInfo2[4];
    struct _ssSFcnModelMethods2 methods2[4];
    struct _ssSFcnModelMethods3 methods3[4];
    struct _ssStatesInfo2 statesInfo2[4];
    ssPeriodicStatesInfo periodicStatesInfo[4];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[8];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;
  } NonInlinedSFcns;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_FingerStrokeAssistance_T FingerStrokeAssistance_P;

/* Block signals (auto storage) */
extern B_FingerStrokeAssistance_T FingerStrokeAssistance_B;

/* Block states (auto storage) */
extern DW_FingerStrokeAssistance_T FingerStrokeAssistance_DW;

/*====================*
 * External functions *
 *====================*/
extern FingerStrokeAssistance_rtModel *FingerStrokeAssistance(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  FingerStrokeAssistance_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_FingerStrokeAssistance_T *const FingerStrokeAssistance_M;

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
 * '<Root>' : 'FingerStrokeAssistance'
 * '<S1>'   : 'FingerStrokeAssistance/Detect Change'
 * '<S2>'   : 'FingerStrokeAssistance/Feedback'
 * '<S3>'   : 'FingerStrokeAssistance/Robot'
 * '<S4>'   : 'FingerStrokeAssistance/controller'
 * '<S5>'   : 'FingerStrokeAssistance/parameters'
 * '<S6>'   : 'FingerStrokeAssistance/signals'
 * '<S7>'   : 'FingerStrokeAssistance/Feedback/Discrete Derivative'
 * '<S8>'   : 'FingerStrokeAssistance/Feedback/Discrete Derivative1'
 * '<S9>'   : 'FingerStrokeAssistance/Robot/account for handedness'
 * '<S10>'  : 'FingerStrokeAssistance/Robot/account for handedness force'
 * '<S11>'  : 'FingerStrokeAssistance/Robot/account for handedness1'
 * '<S12>'  : 'FingerStrokeAssistance/Robot/account for handedness2'
 * '<S13>'  : 'FingerStrokeAssistance/Robot/filtered force output'
 * '<S14>'  : 'FingerStrokeAssistance/Robot/get offsets'
 * '<S15>'  : 'FingerStrokeAssistance/Robot/gravDir'
 * '<S16>'  : 'FingerStrokeAssistance/Robot/account for handedness/MATLAB Function'
 * '<S17>'  : 'FingerStrokeAssistance/Robot/account for handedness force/MATLAB Function'
 * '<S18>'  : 'FingerStrokeAssistance/Robot/account for handedness1/MATLAB Function'
 * '<S19>'  : 'FingerStrokeAssistance/Robot/account for handedness2/MATLAB Function'
 * '<S20>'  : 'FingerStrokeAssistance/Robot/get offsets/MATLAB Function'
 * '<S21>'  : 'FingerStrokeAssistance/controller/Discrete PID Controller'
 * '<S22>'  : 'FingerStrokeAssistance/controller/gain transition'
 * '<S23>'  : 'FingerStrokeAssistance/controller/initial ramp'
 * '<S24>'  : 'FingerStrokeAssistance/controller/gain transition/gainramp'
 * '<S25>'  : 'FingerStrokeAssistance/controller/initial ramp/MATLAB Function'
 * '<S26>'  : 'FingerStrokeAssistance/controller/initial ramp/ramp'
 * '<S27>'  : 'FingerStrokeAssistance/parameters/gain transition'
 * '<S28>'  : 'FingerStrokeAssistance/parameters/gain transition1'
 * '<S29>'  : 'FingerStrokeAssistance/parameters/gain transition2'
 * '<S30>'  : 'FingerStrokeAssistance/parameters/gain transition3'
 * '<S31>'  : 'FingerStrokeAssistance/parameters/gain transition4'
 * '<S32>'  : 'FingerStrokeAssistance/parameters/gain transition5'
 * '<S33>'  : 'FingerStrokeAssistance/parameters/gain transition/gainramp'
 * '<S34>'  : 'FingerStrokeAssistance/parameters/gain transition1/gainramp'
 * '<S35>'  : 'FingerStrokeAssistance/parameters/gain transition2/gainramp'
 * '<S36>'  : 'FingerStrokeAssistance/parameters/gain transition3/gainramp'
 * '<S37>'  : 'FingerStrokeAssistance/parameters/gain transition4/gainramp'
 * '<S38>'  : 'FingerStrokeAssistance/parameters/gain transition5/gainramp'
 * '<S39>'  : 'FingerStrokeAssistance/signals/Scope (xPC) '
 * '<S40>'  : 'FingerStrokeAssistance/signals/Scope (xPC) 1'
 * '<S41>'  : 'FingerStrokeAssistance/signals/Scope (xPC) 2'
 * '<S42>'  : 'FingerStrokeAssistance/signals/Scope (xPC) 3'
 * '<S43>'  : 'FingerStrokeAssistance/signals/Scope (xPC) 4'
 * '<S44>'  : 'FingerStrokeAssistance/signals/Scope (xPC) 5'
 * '<S45>'  : 'FingerStrokeAssistance/signals/Scope (xPC) 6'
 * '<S46>'  : 'FingerStrokeAssistance/signals/Scope (xPC) 7'
 */
#endif                                 /* RTW_HEADER_FingerStrokeAssistance_h_ */
