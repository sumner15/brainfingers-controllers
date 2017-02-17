/*
 * FingerStrokeAssistance_tgtconn.c
 *
 * Code generation for model "FingerStrokeAssistance".
 *
 * Model version              : 1.871
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Thu Feb 16 18:07:07 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtwtypes.h"
#define EXTERN_C
#include "xpcimports.h"

EXTERN_C void TgtConnBackgroundTask()
{
}

EXTERN_C const char *TgtConnInit(int_T argc, char_T *argv[])
{
  const char *result = NULL;           /* assume success */

  {
    (void)getCommService();
  }

  if (startToAsyncQueueTgtAppSvc()) {
    result = "Could not start ToAsyncQueue app service";
    return(result);
  }

  return(result);
}

EXTERN_C void TgtConnTerm()
{
  terminateToAsyncQueueTgtAppSvc();
}

EXTERN_C void TgtConnPreStep(int_T tid)
{
}

EXTERN_C void TgtConnPostStep(int_T tid)
{
}

/* EOF: FingerStrokeAssistance_tgtconn.c */
