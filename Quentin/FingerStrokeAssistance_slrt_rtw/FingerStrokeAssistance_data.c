/*
 * FingerStrokeAssistance_data.c
 *
 * Code generation for model "FingerStrokeAssistance".
 *
 * Model version              : 1.1036
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Wed Feb 22 11:31:57 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FingerStrokeAssistance.h"
#include "FingerStrokeAssistance_private.h"

/* Block parameters (auto storage) */
P_FingerStrokeAssistance_T FingerStrokeAssistance_P = {
  /*  Variable: Alow
   * Referenced by:
   *   '<S20>/Low Pass 100 Hz'
   *   '<S20>/Low Pass 100 Hz1'
   */
  { 0.97351956087880709, 0.018600534405527915, -0.018600534405527919,
    0.9998246889024921 },

  /*  Variable: Blow
   * Referenced by:
   *   '<S20>/Low Pass 100 Hz'
   *   '<S20>/Low Pass 100 Hz1'
   */
  { 0.02630512802368495, 0.00024792733173036719 },

  /*  Variable: Clow
   * Referenced by:
   *   '<S20>/Low Pass 100 Hz'
   *   '<S20>/Low Pass 100 Hz1'
   */
  { 0.0065762820059212393, 0.707044799353615 },
  8.7655548754014668E-5,               /* Variable: Dlow
                                        * Referenced by:
                                        *   '<S20>/Low Pass 100 Hz'
                                        *   '<S20>/Low Pass 100 Hz1'
                                        */

  /*  Variable: x0low
   * Referenced by:
   *   '<S20>/Low Pass 100 Hz'
   *   '<S20>/Low Pass 100 Hz1'
   */
  { -0.0, 0.0 },
  0.7,                                 /* Mask Parameter: DiscretePIDController_D
                                        * Referenced by: '<S11>/Derivative Gain'
                                        */
  0.0,                                 /* Mask Parameter: DiscretePIDController_I
                                        * Referenced by: '<S11>/Integral Gain'
                                        */
  0.0,                                 /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                        * Referenced by: '<S13>/UD'
                                        */
  100.0,                               /* Mask Parameter: DiscretePIDController_N
                                        * Referenced by: '<S11>/Filter Coefficient'
                                        */
  10.0,                                /* Mask Parameter: DiscretePIDController_P
                                        * Referenced by: '<S11>/Proportional Gain'
                                        */
  0.0,                                 /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S26>/Delay Input1'
                                        */
  0.0,                                 /* Mask Parameter: DetectChange_vinit_d
                                        * Referenced by: '<S27>/Delay Input1'
                                        */
  0.0,                                 /* Mask Parameter: DetectChange_vinit_dl
                                        * Referenced by: '<S10>/Delay Input1'
                                        */
  0.0,                                 /* Expression: [0]
                                        * Referenced by: '<S15>/Out1'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  -0.1,                                /* Expression: -0.1
                                        * Referenced by: '<Root>/Constant3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay2'
                                        */
  0.001,                               /* Computed Parameter: DiscreteTimeIntegrator_gainval
                                        * Referenced by: '<S6>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Unit Delay2'
                                        */
  0.001,                               /* Computed Parameter: DiscreteTimeIntegrator_gainva_b
                                        * Referenced by: '<S7>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Discrete-Time Integrator'
                                        */

  /*  Computed Parameter: PCI6221ENC_P1_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: device
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P2_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: channel
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P3_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: countMode
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P4_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initCount
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P5_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: reload
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P6_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: indexPhase
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P7_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: filter
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P8_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: outmask
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P9_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampleTime
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC_P10_Size
   * Referenced by: '<S5>/PCI 6221 ENC '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S5>/PCI 6221 ENC '
                                        */

  /*  Computed Parameter: PCI6221ENC1_P1_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: device
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P2_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P3_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: countMode
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P4_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initCount
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P5_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: reload
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P6_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: indexPhase
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P7_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: filter
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P8_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: outmask
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P9_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampleTime
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */

  /*  Computed Parameter: PCI6221ENC1_P10_Size
   * Referenced by: '<S5>/PCI 6221 ENC 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S5>/PCI 6221 ENC 1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/paremeters_ must_be_one'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/parLeftMode'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Saturation'
                                        */
  0.00022222222222222223,              /* Expression: 1/4500.0
                                        * Referenced by: '<S5>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay1'
                                        */
  0.001,                               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S11>/Filter'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S11>/Filter'
                                        */
  0.001,                               /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S11>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S11>/Integrator'
                                        */
  1000.0,                              /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S13>/TSamp'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S5>/Gain1'
                                        */

  /*  Computed Parameter: PCI6221DA_P1_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: channel
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: PCI6221DA_P2_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: range
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6221DA_P3_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: reset
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 1.0 },

  /*  Computed Parameter: PCI6221DA_P4_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: initValue
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6221DA_P5_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S5>/PCI-6221 DA'
                                        */

  /*  Computed Parameter: PCI6221DA_P6_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S5>/PCI-6221 DA'
                                        */

  /*  Computed Parameter: PCI6221DA_P7_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S5>/PCI-6221 DA'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Memory'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Memory1'
                                        */
  1.5,                                 /* Expression: 1.5
                                        * Referenced by: '<S21>/Constant'
                                        */

  /*  Computed Parameter: PCI6221AD1_P1_Size
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 1.0, 8.0 },

  /*  Expression: channel
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 },

  /*  Computed Parameter: PCI6221AD1_P2_Size
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 1.0, 8.0 },

  /*  Expression: range
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCI6221AD1_P3_Size
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 1.0, 8.0 },

  /*  Expression: coupling
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0 },

  /*  Computed Parameter: PCI6221AD1_P4_Size
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 1.0, 1.0 },
  5.0E-6,                              /* Expression: scantime
                                        * Referenced by: '<S5>/PCI-6221 AD1'
                                        */

  /*  Computed Parameter: PCI6221AD1_P5_Size
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S5>/PCI-6221 AD1'
                                        */

  /*  Computed Parameter: PCI6221AD1_P6_Size
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S5>/PCI-6221 AD1'
                                        */

  /*  Computed Parameter: PCI6221AD1_P7_Size
   * Referenced by: '<S5>/PCI-6221 AD1'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S5>/PCI-6221 AD1'
                                        */
  0.172,                               /* Expression: .172
                                        * Referenced by: '<S21>/gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Unit Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Unit Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Delay'
                                        */

  /*  Expression: [b_hp]
   * Referenced by: '<S1>/Discrete Filter'
   */
  { 0.99968593938935957, -0.99968593938935957 },

  /*  Expression: [a_hp]
   * Referenced by: '<S1>/Discrete Filter'
   */
  { 1.0, -0.99937187877871914 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Discrete Filter'
                                        */
  0.001,                               /* Computed Parameter: DiscreteTimeIntegrator_gainva_m
                                        * Referenced by: '<S1>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Discrete-Time Integrator'
                                        */
  0.9,                                 /* Expression: 0.9
                                        * Referenced by: '<S1>/Discrete-Time Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Discrete-Time Integrator'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S1>/Gain1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/parTrajMode'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S8>/parFixedDur'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S8>/Saturation2'
                                        */
  0.25,                                /* Expression: .25
                                        * Referenced by: '<S8>/Saturation2'
                                        */

  /*  Expression: zeros(1,4)
   * Referenced by: '<S28>/Memory'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  0.05,                                /* Expression: .05
                                        * Referenced by: '<S8>/parChangeRate'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/parKp1'
                                        */

  /*  Expression: zeros(1,4)
   * Referenced by: '<S29>/Memory'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/parKp2'
                                        */

  /*  Expression: zeros(1,4)
   * Referenced by: '<S30>/Memory'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S8>/parKd1'
                                        */

  /*  Expression: zeros(1,4)
   * Referenced by: '<S31>/Memory'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S8>/parKd2'
                                        */

  /*  Expression: zeros(1,4)
   * Referenced by: '<S32>/Memory'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S8>/parKdV1'
                                        */

  /*  Expression: zeros(1,4)
   * Referenced by: '<S33>/Memory'
   */
  { 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S8>/parKdV2'
                                        */
  0.25,                                /* Expression: 0.25
                                        * Referenced by: '<S8>/parFThresh'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/parForceTrigger'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/parMarker'
                                        */
  0.4,                                 /* Expression: .4
                                        * Referenced by: '<S8>/parMaxTrajDur'
                                        */
  0.75,                                /* Expression: 0.75
                                        * Referenced by: '<S8>/parPStop'
                                        */
  0.375,                               /* Expression: .375
                                        * Referenced by: '<S8>/parVThresh'
                                        */
  0.5,                                 /* Expression: .5
                                        * Referenced by: '<S8>/parWiggleAmp'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S1>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S1>/Delay'
                                        */
  0                                    /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S4>/Constant'
                                        */
};
