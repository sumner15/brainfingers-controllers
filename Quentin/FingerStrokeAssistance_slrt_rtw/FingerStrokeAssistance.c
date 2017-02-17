/*
 * FingerStrokeAssistance.c
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

#include "rt_logging_mmi.h"
#include "FingerStrokeAssistance_capi.h"
#include "FingerStrokeAssistance.h"
#include "FingerStrokeAssistance_private.h"

/* Block signals (auto storage) */
B_FingerStrokeAssistance_T FingerStrokeAssistance_B;

/* Block states (auto storage) */
DW_FingerStrokeAssistance_T FingerStrokeAssistance_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_FingerStrokeAssistance_T FingerStrokeAssistance_PrevZCX;

/* Real-time model */
RT_MODEL_FingerStrokeAssistance_T FingerStrokeAssistance_M_;
RT_MODEL_FingerStrokeAssistance_T *const FingerStrokeAssistance_M =
  &FingerStrokeAssistance_M_;

/*
 * Output and update for atomic system:
 *    '<S13>/MATLAB Function'
 *    '<S15>/MATLAB Function'
 *    '<S16>/MATLAB Function'
 */
void FingerStrokeAssi_MATLABFunction(real_T rtu_input1, real_T rtu_input2,
  real_T rtu_leftyMode, B_MATLABFunction_FingerStroke_T *localB)
{
  /* MATLAB Function 'Robot/account for handedness/MATLAB Function': '<S19>:1' */
  /*  encoder 1 and output 1 relate to the blue mechanism */
  /*  encoder 2, output 2 and accel 2 relate to the gold mechanism */
  /*  in right hand mode, we want the gold mechanism to control the index finger */
  /*  in left hand mode, we want the blue mechanism to control the index finger */
  /*  we wallways want the index finger to be finger 1 */
  if (rtu_leftyMode == 1.0) {
    /* '<S19>:1:10' */
    /* '<S19>:1:11' */
    localB->output1 = rtu_input1;

    /* '<S19>:1:12' */
    localB->output2 = rtu_input2;
  } else {
    /* '<S19>:1:14' */
    localB->output1 = rtu_input2;

    /* '<S19>:1:15' */
    localB->output2 = rtu_input1;
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Output and update for atomic system:
 *    '<S23>/gainramp'
 *    '<S24>/gainramp'
 *    '<S25>/gainramp'
 *    '<S26>/gainramp'
 *    '<S27>/gainramp'
 *    '<S28>/gainramp'
 */
void FingerStrokeAssistance_gainramp(real_T rtu_tr, real_T rtu_valD, const
  real_T rtu_state[4], B_gainramp_FingerStrokeAssist_T *localB)
{
  real_T Rd;
  localB->state1[0] = rtu_state[0];
  localB->state1[1] = rtu_state[1];
  localB->state1[2] = rtu_state[2];
  localB->state1[3] = rtu_state[3];

  /* MATLAB Function 'parameters/gain transition/gainramp': '<S29>:1' */
  /*  state contains [valD_,val_,Ro_,t_] */
  /*  first we need to check if they have changed the desired Value */
  if (!(rtu_valD == rtu_state[0])) {
    /* '<S29>:1:6' */
    /* '<S29>:1:7' */
    localB->state1[0] = rtu_valD;

    /* '<S29>:1:8' */
    localB->state1[3] = 0.0;

    /* '<S29>:1:9' */
    localB->state1[2] = rtu_valD - rtu_state[1];
  }

  /* '<S29>:1:12' */
  /* '<S29>:1:13' */
  if ((localB->state1[3] <= rtu_tr) && (rtu_tr != 0.0)) {
    /* '<S29>:1:15' */
    /* '<S29>:1:16' */
    Rd = localB->state1[2] - ((10.0 * rt_powd_snf(localB->state1[3], 3.0) /
      rt_powd_snf(rtu_tr, 3.0) - 15.0 * rt_powd_snf(localB->state1[3], 4.0) /
      rt_powd_snf(rtu_tr, 4.0)) + 6.0 * rt_powd_snf(localB->state1[3], 5.0) /
      rt_powd_snf(rtu_tr, 5.0)) * localB->state1[2];
  } else {
    /* '<S29>:1:18' */
    Rd = 0.0;
  }

  /* '<S29>:1:21' */
  Rd = localB->state1[0] - Rd;

  /* '<S29>:1:22' */
  localB->state1[1] = Rd;

  /* '<S29>:1:23' */
  localB->state1[3] += 0.001;

  /* '<S29>:1:24' */
  localB->val = Rd;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model output function */
static void FingerStrokeAssistance_output(void)
{
  ZCEventType zcEvent;
  real_T u0;
  real_T u1;
  real_T u2;

  /* Reset subsysRan breadcrumbs */
  srClearBC(FingerStrokeAssistance_DW.TriggeredSubsystem_SubsysRanBC);

  /* UnitDelay: '<Root>/Unit Delay2' */
  FingerStrokeAssistance_B.UnitDelay2 =
    FingerStrokeAssistance_DW.UnitDelay2_DSTATE;

  /* UnitDelay: '<S1>/Delay Input1' */
  FingerStrokeAssistance_B.Uk1 = FingerStrokeAssistance_DW.DelayInput1_DSTATE;

  /* RelationalOperator: '<S1>/FixPt Relational Operator' */
  FingerStrokeAssistance_B.FixPtRelationalOperator =
    (FingerStrokeAssistance_B.UnitDelay2 != FingerStrokeAssistance_B.Uk1);

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  FingerStrokeAssistance_B.DataTypeConversion =
    FingerStrokeAssistance_B.FixPtRelationalOperator;

  /* DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  if (((FingerStrokeAssistance_B.DataTypeConversion > 0.0) &&
       (FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRese <= 0)) ||
      ((FingerStrokeAssistance_B.DataTypeConversion <= 0.0) &&
       (FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRese == 1))) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE =
      FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC;
  }

  FingerStrokeAssistance_B.DiscreteTimeIntegrator =
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE;

  /* End of DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */

  /* UnitDelay: '<Root>/Unit Delay' */
  FingerStrokeAssistance_B.UnitDelay =
    FingerStrokeAssistance_DW.UnitDelay_DSTATE;

  /* ManualSwitch: '<Root>/Main Switch' incorporates:
   *  Constant: '<Root>/standby-OFF'
   *  Constant: '<Root>/standby-ON'
   */
  if (FingerStrokeAssistance_P.MainSwitch_CurrentSetting == 1) {
    FingerStrokeAssistance_B.MainSwitch =
      FingerStrokeAssistance_P.standbyOFF_Value;
  } else {
    FingerStrokeAssistance_B.MainSwitch =
      FingerStrokeAssistance_P.standbyON_Value;
  }

  /* End of ManualSwitch: '<Root>/Main Switch' */

  /* Level2 S-Function Block: '<S5>/PCI 6221 ENC ' (encnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<S5>/PCI 6221 ENC 1' (encnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Gain: '<S6>/parLeftMode' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parLeftMode =
    FingerStrokeAssistance_P.parLeftMode_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Saturate: '<S6>/Saturation' */
  u0 = FingerStrokeAssistance_B.parLeftMode;
  u1 = FingerStrokeAssistance_P.Saturation_LowerSat;
  u2 = FingerStrokeAssistance_P.Saturation_UpperSat;
  if (u0 > u2) {
    FingerStrokeAssistance_B.Saturation = u2;
  } else if (u0 < u1) {
    FingerStrokeAssistance_B.Saturation = u1;
  } else {
    FingerStrokeAssistance_B.Saturation = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* MATLAB Function: '<S15>/MATLAB Function' */
  FingerStrokeAssi_MATLABFunction(FingerStrokeAssistance_B.PCI6221ENC,
    FingerStrokeAssistance_B.PCI6221ENC1, FingerStrokeAssistance_B.Saturation,
    &FingerStrokeAssistance_B.sf_MATLABFunction);

  /* Gain: '<S5>/Gain' */
  FingerStrokeAssistance_B.Gain[0] = FingerStrokeAssistance_P.Gain_Gain *
    FingerStrokeAssistance_B.sf_MATLABFunction.output1;
  FingerStrokeAssistance_B.Gain[1] = FingerStrokeAssistance_P.Gain_Gain *
    FingerStrokeAssistance_B.sf_MATLABFunction.output2;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  FingerStrokeAssistance_B.state = FingerStrokeAssistance_B.UnitDelay;

  /* MATLAB Function 'MATLAB Function': '<S4>:1' */
  /* '<S4>:1:3' */
  u0 = FingerStrokeAssistance_B.state;

  /* % Create Finite State Machine for FINGER Robot  */
  /* '<S4>:1:6' */
  FingerStrokeAssistance_B.ramp_switch = 0.0;

  /* '<S4>:1:7' */
  FingerStrokeAssistance_B.f_ref1 = 0.0;

  /* '<S4>:1:8' */
  FingerStrokeAssistance_B.f_ref2 = 0.0;

  /* '<S4>:1:9' */
  FingerStrokeAssistance_B.f_ref_lim = 0.0;

  /* '<S4>:1:10' */
  FingerStrokeAssistance_B.enc_trigger = 0.0;

  /* '<S4>:1:11' */
  FingerStrokeAssistance_B.pos_ref_Ulim = 0.0;

  /* '<S4>:1:12' */
  FingerStrokeAssistance_B.pos_ref_Llim = 0.0;

  /* UnitDelay: '<S5>/Unit Delay' */
  /* '<S4>:1:13' */
  FingerStrokeAssistance_B.UnitDelay_g[0] =
    FingerStrokeAssistance_DW.UnitDelay_DSTATE_h[0];

  /* Sum: '<S5>/Sum' */
  FingerStrokeAssistance_B.Sum[0] = FingerStrokeAssistance_B.Gain[0] -
    FingerStrokeAssistance_B.UnitDelay_g[0];

  /* SampleTimeMath: '<S11>/TSamp'
   *
   * About '<S11>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  FingerStrokeAssistance_B.TSamp[0] = FingerStrokeAssistance_B.Sum[0] *
    FingerStrokeAssistance_P.TSamp_WtEt;

  /* UnitDelay: '<S11>/UD' */
  FingerStrokeAssistance_B.Uk1_d[0] = FingerStrokeAssistance_DW.UD_DSTATE[0];

  /* Sum: '<S11>/Diff' */
  FingerStrokeAssistance_B.Diff[0] = FingerStrokeAssistance_B.TSamp[0] -
    FingerStrokeAssistance_B.Uk1_d[0];

  /* UnitDelay: '<Root>/Unit Delay3' */
  FingerStrokeAssistance_B.UnitDelay3[0] =
    FingerStrokeAssistance_DW.UnitDelay3_DSTATE[0];

  /* MATLAB Function: '<Root>/MATLAB Function' */
  FingerStrokeAssistance_B.pos_ref[0] = 0.0;

  /* UnitDelay: '<S5>/Unit Delay' */
  FingerStrokeAssistance_B.UnitDelay_g[1] =
    FingerStrokeAssistance_DW.UnitDelay_DSTATE_h[1];

  /* Sum: '<S5>/Sum' */
  FingerStrokeAssistance_B.Sum[1] = FingerStrokeAssistance_B.Gain[1] -
    FingerStrokeAssistance_B.UnitDelay_g[1];

  /* SampleTimeMath: '<S11>/TSamp'
   *
   * About '<S11>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  FingerStrokeAssistance_B.TSamp[1] = FingerStrokeAssistance_B.Sum[1] *
    FingerStrokeAssistance_P.TSamp_WtEt;

  /* UnitDelay: '<S11>/UD' */
  FingerStrokeAssistance_B.Uk1_d[1] = FingerStrokeAssistance_DW.UD_DSTATE[1];

  /* Sum: '<S11>/Diff' */
  FingerStrokeAssistance_B.Diff[1] = FingerStrokeAssistance_B.TSamp[1] -
    FingerStrokeAssistance_B.Uk1_d[1];

  /* UnitDelay: '<Root>/Unit Delay3' */
  FingerStrokeAssistance_B.UnitDelay3[1] =
    FingerStrokeAssistance_DW.UnitDelay3_DSTATE[1];

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant3'
   */
  FingerStrokeAssistance_B.pos_ref[1] = 0.0;
  switch ((int32_T)FingerStrokeAssistance_B.state) {
   case 1:
    /* standby phase  */
    /* '<S4>:1:18' */
    FingerStrokeAssistance_B.f_ref1 = 0.0;

    /*  establish reference force */
    /* '<S4>:1:19' */
    FingerStrokeAssistance_B.f_ref2 = 0.0;

    /*  establish reference force  */
    /* '<S4>:1:20' */
    FingerStrokeAssistance_B.f_ref_lim = 0.0;

    /*  establish limit for reference force  */
    if (FingerStrokeAssistance_B.MainSwitch == 1.0) {
      /* '<S4>:1:22' */
      /*  If the main switch is on proceed to next state */
      /* '<S4>:1:23' */
      u0 = 2.0;
    } else {
      /* '<S4>:1:25' */
      u0 = 1.0;
    }
    break;

   case 2:
    /* Move both linkage arms to position zero   */
    /* '<S4>:1:29' */
    FingerStrokeAssistance_B.ramp_switch = 1.0;

    /*  Define value of ramp switch */
    /* '<S4>:1:30' */
    FingerStrokeAssistance_B.f_ref1 =
      FingerStrokeAssistance_B.DiscreteTimeIntegrator *
      FingerStrokeAssistance_P.Constant3_Value;

    /*  Calculate reference force  */
    /* '<S4>:1:31' */
    FingerStrokeAssistance_B.f_ref2 =
      FingerStrokeAssistance_B.DiscreteTimeIntegrator *
      FingerStrokeAssistance_P.Constant3_Value;

    /* '<S4>:1:32' */
    FingerStrokeAssistance_B.f_ref_lim = 2.5;

    /*  re-establish limit for reference force  */
    if ((FingerStrokeAssistance_B.DiscreteTimeIntegrator > 10.0) &&
        (FingerStrokeAssistance_B.Diff[0] > -0.001)) {
      /* '<S4>:1:34' */
      /* '<S4>:1:35' */
      FingerStrokeAssistance_B.enc_trigger = 1.0;

      /* Calibrate Encoder */
      /* '<S4>:1:36' */
      FingerStrokeAssistance_B.ramp_switch = 0.0;

      /* '<S4>:1:37' */
      FingerStrokeAssistance_B.f_ref1 = 0.0;

      /* '<S4>:1:38' */
      FingerStrokeAssistance_B.f_ref2 = 0.0;

      /* '<S4>:1:39' */
      FingerStrokeAssistance_B.f_ref_lim = 2.5;

      /* '<S4>:1:40' */
      u0 = 3.0;
    }
    break;

   case 3:
    /* '<S4>:1:43' */
    u0 = 4.0;
    break;

   case 4:
    /* Move second finger to flex position  */
    /* '<S4>:1:46' */
    FingerStrokeAssistance_B.pos_ref[0] = 0.0;
    FingerStrokeAssistance_B.pos_ref[1] =
      FingerStrokeAssistance_B.DiscreteTimeIntegrator *
      FingerStrokeAssistance_P.Constant1_Value;

    /* '<S4>:1:47' */
    FingerStrokeAssistance_B.pos_ref_Ulim = 0.8;

    /* '<S4>:1:48' */
    FingerStrokeAssistance_B.pos_ref_Llim = 0.0;

    /* '<S4>:1:49' */
    FingerStrokeAssistance_B.f_ref1 = FingerStrokeAssistance_B.UnitDelay3[0];

    /* '<S4>:1:50' */
    FingerStrokeAssistance_B.f_ref2 = FingerStrokeAssistance_B.UnitDelay3[1];

    /* '<S4>:1:51' */
    FingerStrokeAssistance_B.ramp_switch = 1.0;

    /* '<S4>:1:52' */
    FingerStrokeAssistance_B.f_ref_lim = 2.5;

    /* case 4  %Operating Mode - Move second thumb linkage to flex position  */
    /*     f_ref1= 0; */
    /*     f_ref2= t_ramp*ip_ramp;  */
    /*     ramp_switch  = 1;  */
    /*     f_ref_lim = .8;  */
    /*      case 5 */
    /*          f_ref1 = 0;  */
    /*          f_ref2 = 0;  */
    /*          ramp_switch = 0;  */
    /*          f_ref_lim = 2.5;  */
    /*  set the limits for the robot while in this mode here  */
    /*  establish velocity limits here  */
    /*  Implement the PID controllers here  */
    /*  Imput Criteria to go from this mode to Emergency Shut Off Mode  */
    /*  case 41 %Operating Mode - Healthy Subjects */
    /* set the limits for the robot while in this mode here  */
    /* establish velocity limits here  */
    /* Implement the PID controllers here  */
    /* Imput Criteria to go from this mode to Emergency Shut Off Mode */
    /*  case 5 %Emergency Shut Off Mode */
    /*  If error occurs while in either operating case shut off robot  */
    /* case 6 % Turn off Robot Mode */
    /*  If movement ceases for x amount of time close program and shut */
    /*  off robot  */
    break;
  }

  FingerStrokeAssistance_B.state = u0;

  /* Gain: '<S3>/Gain' */
  FingerStrokeAssistance_B.Gain_b = FingerStrokeAssistance_P.Gain_Gain_o *
    FingerStrokeAssistance_B.f_ref_lim;

  /* RelationalOperator: '<S9>/LowerRelop1' */
  FingerStrokeAssistance_B.LowerRelop1[0] = (FingerStrokeAssistance_B.f_ref1 >
    FingerStrokeAssistance_B.f_ref_lim);
  FingerStrokeAssistance_B.LowerRelop1[1] = (FingerStrokeAssistance_B.f_ref2 >
    FingerStrokeAssistance_B.f_ref_lim);

  /* RelationalOperator: '<S9>/UpperRelop' */
  FingerStrokeAssistance_B.UpperRelop[0] = (FingerStrokeAssistance_B.f_ref1 <
    FingerStrokeAssistance_B.Gain_b);
  FingerStrokeAssistance_B.UpperRelop[1] = (FingerStrokeAssistance_B.f_ref2 <
    FingerStrokeAssistance_B.Gain_b);

  /* Switch: '<S9>/Switch' */
  if (FingerStrokeAssistance_B.UpperRelop[0]) {
    FingerStrokeAssistance_B.Switch[0] = FingerStrokeAssistance_B.Gain_b;
  } else {
    FingerStrokeAssistance_B.Switch[0] = FingerStrokeAssistance_B.f_ref1;
  }

  if (FingerStrokeAssistance_B.UpperRelop[1]) {
    FingerStrokeAssistance_B.Switch[1] = FingerStrokeAssistance_B.Gain_b;
  } else {
    FingerStrokeAssistance_B.Switch[1] = FingerStrokeAssistance_B.f_ref2;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Switch: '<S9>/Switch2' */
  if (FingerStrokeAssistance_B.LowerRelop1[0]) {
    FingerStrokeAssistance_B.Switch2[0] = FingerStrokeAssistance_B.f_ref_lim;
  } else {
    FingerStrokeAssistance_B.Switch2[0] = FingerStrokeAssistance_B.Switch[0];
  }

  /* RelationalOperator: '<S10>/LowerRelop1' */
  FingerStrokeAssistance_B.LowerRelop1_f[0] = (FingerStrokeAssistance_B.pos_ref
    [0] > FingerStrokeAssistance_B.pos_ref_Ulim);

  /* RelationalOperator: '<S10>/UpperRelop' */
  FingerStrokeAssistance_B.UpperRelop_o[0] = (FingerStrokeAssistance_B.pos_ref[0]
    < 0.0);

  /* Switch: '<S10>/Switch' */
  if (FingerStrokeAssistance_B.UpperRelop_o[0]) {
    FingerStrokeAssistance_B.Switch_g[0] = 0.0;
  } else {
    FingerStrokeAssistance_B.Switch_g[0] = FingerStrokeAssistance_B.pos_ref[0];
  }

  /* Switch: '<S10>/Switch2' */
  if (FingerStrokeAssistance_B.LowerRelop1_f[0]) {
    FingerStrokeAssistance_B.Switch2_d[0] =
      FingerStrokeAssistance_B.pos_ref_Ulim;
  } else {
    FingerStrokeAssistance_B.Switch2_d[0] = FingerStrokeAssistance_B.Switch_g[0];
  }

  /* Sum: '<S3>/Sum' */
  FingerStrokeAssistance_B.Sum_h[0] = FingerStrokeAssistance_B.Switch2_d[0] -
    FingerStrokeAssistance_B.Sum[0];

  /* Gain: '<S8>/Derivative Gain' */
  FingerStrokeAssistance_B.DerivativeGain[0] =
    FingerStrokeAssistance_P.DiscretePIDController_D *
    FingerStrokeAssistance_B.Sum_h[0];

  /* DiscreteIntegrator: '<S8>/Filter' */
  FingerStrokeAssistance_B.Filter[0] = FingerStrokeAssistance_DW.Filter_DSTATE[0];

  /* Sum: '<S8>/SumD' */
  FingerStrokeAssistance_B.SumD[0] = FingerStrokeAssistance_B.DerivativeGain[0]
    - FingerStrokeAssistance_B.Filter[0];

  /* Gain: '<S8>/Filter Coefficient' */
  FingerStrokeAssistance_B.FilterCoefficient[0] =
    FingerStrokeAssistance_P.DiscretePIDController_N *
    FingerStrokeAssistance_B.SumD[0];

  /* Gain: '<S8>/Integral Gain' */
  FingerStrokeAssistance_B.IntegralGain[0] =
    FingerStrokeAssistance_P.DiscretePIDController_I *
    FingerStrokeAssistance_B.Sum_h[0];

  /* DiscreteIntegrator: '<S8>/Integrator' */
  FingerStrokeAssistance_B.Integrator[0] =
    FingerStrokeAssistance_DW.Integrator_DSTATE[0];

  /* Gain: '<S8>/Proportional Gain' */
  FingerStrokeAssistance_B.ProportionalGain[0] =
    FingerStrokeAssistance_P.DiscretePIDController_P *
    FingerStrokeAssistance_B.Sum_h[0];

  /* Sum: '<S8>/Sum' */
  FingerStrokeAssistance_B.Sum_a[0] =
    (FingerStrokeAssistance_B.ProportionalGain[0] +
     FingerStrokeAssistance_B.Integrator[0]) +
    FingerStrokeAssistance_B.FilterCoefficient[0];

  /* Switch: '<S9>/Switch2' */
  if (FingerStrokeAssistance_B.LowerRelop1[1]) {
    FingerStrokeAssistance_B.Switch2[1] = FingerStrokeAssistance_B.f_ref_lim;
  } else {
    FingerStrokeAssistance_B.Switch2[1] = FingerStrokeAssistance_B.Switch[1];
  }

  /* RelationalOperator: '<S10>/LowerRelop1' */
  FingerStrokeAssistance_B.LowerRelop1_f[1] = (FingerStrokeAssistance_B.pos_ref
    [1] > FingerStrokeAssistance_B.pos_ref_Ulim);

  /* RelationalOperator: '<S10>/UpperRelop' */
  FingerStrokeAssistance_B.UpperRelop_o[1] = (FingerStrokeAssistance_B.pos_ref[1]
    < 0.0);

  /* Switch: '<S10>/Switch' */
  if (FingerStrokeAssistance_B.UpperRelop_o[1]) {
    FingerStrokeAssistance_B.Switch_g[1] = 0.0;
  } else {
    FingerStrokeAssistance_B.Switch_g[1] = FingerStrokeAssistance_B.pos_ref[1];
  }

  /* Switch: '<S10>/Switch2' */
  if (FingerStrokeAssistance_B.LowerRelop1_f[1]) {
    FingerStrokeAssistance_B.Switch2_d[1] =
      FingerStrokeAssistance_B.pos_ref_Ulim;
  } else {
    FingerStrokeAssistance_B.Switch2_d[1] = FingerStrokeAssistance_B.Switch_g[1];
  }

  /* Sum: '<S3>/Sum' */
  FingerStrokeAssistance_B.Sum_h[1] = FingerStrokeAssistance_B.Switch2_d[1] -
    FingerStrokeAssistance_B.Sum[1];

  /* Gain: '<S8>/Derivative Gain' */
  FingerStrokeAssistance_B.DerivativeGain[1] =
    FingerStrokeAssistance_P.DiscretePIDController_D *
    FingerStrokeAssistance_B.Sum_h[1];

  /* DiscreteIntegrator: '<S8>/Filter' */
  FingerStrokeAssistance_B.Filter[1] = FingerStrokeAssistance_DW.Filter_DSTATE[1];

  /* Sum: '<S8>/SumD' */
  FingerStrokeAssistance_B.SumD[1] = FingerStrokeAssistance_B.DerivativeGain[1]
    - FingerStrokeAssistance_B.Filter[1];

  /* Gain: '<S8>/Filter Coefficient' */
  FingerStrokeAssistance_B.FilterCoefficient[1] =
    FingerStrokeAssistance_P.DiscretePIDController_N *
    FingerStrokeAssistance_B.SumD[1];

  /* Gain: '<S8>/Integral Gain' */
  FingerStrokeAssistance_B.IntegralGain[1] =
    FingerStrokeAssistance_P.DiscretePIDController_I *
    FingerStrokeAssistance_B.Sum_h[1];

  /* DiscreteIntegrator: '<S8>/Integrator' */
  FingerStrokeAssistance_B.Integrator[1] =
    FingerStrokeAssistance_DW.Integrator_DSTATE[1];

  /* Gain: '<S8>/Proportional Gain' */
  FingerStrokeAssistance_B.ProportionalGain[1] =
    FingerStrokeAssistance_P.DiscretePIDController_P *
    FingerStrokeAssistance_B.Sum_h[1];

  /* Sum: '<S8>/Sum' */
  FingerStrokeAssistance_B.Sum_a[1] =
    (FingerStrokeAssistance_B.ProportionalGain[1] +
     FingerStrokeAssistance_B.Integrator[1]) +
    FingerStrokeAssistance_B.FilterCoefficient[1];

  /* Outputs for Triggered SubSystem: '<S5>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S12>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &FingerStrokeAssistance_PrevZCX.TriggeredSubsystem_Trig_ZCE,
                     (FingerStrokeAssistance_B.enc_trigger));
  if (zcEvent != NO_ZCEVENT) {
    /* Inport: '<S12>/In1' */
    FingerStrokeAssistance_B.In1[0] = FingerStrokeAssistance_B.Gain[0];
    FingerStrokeAssistance_B.In1[1] = FingerStrokeAssistance_B.Gain[1];
    FingerStrokeAssistance_DW.TriggeredSubsystem_SubsysRanBC = 4;
  }

  /* End of Outputs for SubSystem: '<S5>/Triggered Subsystem' */

  /* MATLAB Function: '<S13>/MATLAB Function' */
  FingerStrokeAssi_MATLABFunction(FingerStrokeAssistance_B.Switch2[0],
    FingerStrokeAssistance_B.Switch2[1], FingerStrokeAssistance_B.Saturation,
    &FingerStrokeAssistance_B.sf_MATLABFunction_m);

  /* Level2 S-Function Block: '<S5>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* DiscreteStateSpace: '<S17>/Low Pass 100 Hz' */
  FingerStrokeAssistance_B.LowPass100Hz = 0.0;
  FingerStrokeAssistance_B.LowPass100Hz += FingerStrokeAssistance_P.Clow[0] *
    FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[0];
  FingerStrokeAssistance_B.LowPass100Hz += FingerStrokeAssistance_P.Clow[1] *
    FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[1];
  FingerStrokeAssistance_B.LowPass100Hz += FingerStrokeAssistance_P.Dlow *
    FingerStrokeAssistance_B.Switch2[0];

  /* DiscreteStateSpace: '<S17>/Low Pass 100 Hz1' */
  FingerStrokeAssistance_B.LowPass100Hz1 = 0.0;
  FingerStrokeAssistance_B.LowPass100Hz1 += FingerStrokeAssistance_P.Clow[0] *
    FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[0];
  FingerStrokeAssistance_B.LowPass100Hz1 += FingerStrokeAssistance_P.Clow[1] *
    FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[1];
  FingerStrokeAssistance_B.LowPass100Hz1 += FingerStrokeAssistance_P.Dlow *
    FingerStrokeAssistance_B.Switch2[1];

  /* Memory: '<S17>/Memory' */
  FingerStrokeAssistance_B.Memory =
    FingerStrokeAssistance_DW.Memory_PreviousInput;

  /* Memory: '<S17>/Memory1' */
  FingerStrokeAssistance_B.Memory1 =
    FingerStrokeAssistance_DW.Memory1_PreviousInput;

  /* Level2 S-Function Block: '<S5>/PCI-6221 AD1' (adnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[3];
    sfcnOutputs(rts, 0);
  }

  /* Sum: '<S18>/Sum' incorporates:
   *  Constant: '<S18>/Constant'
   */
  FingerStrokeAssistance_B.Sum_m = FingerStrokeAssistance_B.PCI6221AD1_o2 -
    FingerStrokeAssistance_P.Constant_Value;

  /* Gain: '<S18>/gain' */
  FingerStrokeAssistance_B.gain = FingerStrokeAssistance_P.gain_Gain *
    FingerStrokeAssistance_B.Sum_m;

  /* SignalConversion: '<S20>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S14>/MATLAB Function'
   */
  FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[0] =
    FingerStrokeAssistance_B.PCI6221AD1_o4;
  FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[1] =
    FingerStrokeAssistance_B.PCI6221AD1_o5;
  FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[2] =
    FingerStrokeAssistance_B.PCI6221AD1_o6;
  FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[3] =
    FingerStrokeAssistance_B.PCI6221AD1_o7;
  FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[4] =
    FingerStrokeAssistance_B.PCI6221AD1_o8;

  /* MATLAB Function: '<S14>/MATLAB Function' */
  /* MATLAB Function 'Robot/account for handedness force/MATLAB Function': '<S20>:1' */
  /*  channel1 - gold tip */
  /*  channel2 - blue tip */
  /*  channel3 - gold base */
  /*  channel4 - blue base */
  /*  we wallways want the index finger to be finger 1 */
  if (FingerStrokeAssistance_B.Saturation == 1.0) {
    /* '<S20>:1:10' */
    /* '<S20>:1:11' */
    FingerStrokeAssistance_B.output[0] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[3];
    FingerStrokeAssistance_B.output[1] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[1];
    FingerStrokeAssistance_B.output[2] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[2];
    FingerStrokeAssistance_B.output[3] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[0];
    FingerStrokeAssistance_B.output[4] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[4];
  } else {
    /* '<S20>:1:13' */
    FingerStrokeAssistance_B.output[0] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[2];
    FingerStrokeAssistance_B.output[1] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[0];
    FingerStrokeAssistance_B.output[2] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[3];
    FingerStrokeAssistance_B.output[3] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[1];
    FingerStrokeAssistance_B.output[4] =
      FingerStrokeAssistance_B.TmpSignalConversionAtSFunctionI[4];

    /* output = [inp1(3,1); inp1(4,2); inp1(5)]; */
  }

  /* MATLAB Function: '<S16>/MATLAB Function' */
  FingerStrokeAssi_MATLABFunction(FingerStrokeAssistance_B.PCI6221AD1_o1,
    FingerStrokeAssistance_B.PCI6221AD1_o3, FingerStrokeAssistance_B.Saturation,
    &FingerStrokeAssistance_B.sf_MATLABFunction_n);

  /* UnitDelay: '<Root>/Unit Delay1' */
  FingerStrokeAssistance_B.UnitDelay1 =
    FingerStrokeAssistance_DW.UnitDelay1_DSTATE;

  /* Delay: '<S2>/Delay' */
  FingerStrokeAssistance_B.Delay[0] = FingerStrokeAssistance_DW.Delay_DSTATE[0];
  FingerStrokeAssistance_B.Delay[1] = FingerStrokeAssistance_DW.Delay_DSTATE[1];

  /* Delay: '<S2>/Delay1' */
  FingerStrokeAssistance_B.Delay1 = FingerStrokeAssistance_DW.Delay1_DSTATE;

  /* DiscreteFilter: '<S2>/Discrete Filter' */
  u0 = FingerStrokeAssistance_B.Delay[1];
  u0 -= FingerStrokeAssistance_P.DiscreteFilter_DenCoef[1] *
    FingerStrokeAssistance_DW.DiscreteFilter_states;
  u0 /= FingerStrokeAssistance_P.DiscreteFilter_DenCoef[0];
  FingerStrokeAssistance_DW.DiscreteFilter_tmp = u0;
  u0 = FingerStrokeAssistance_P.DiscreteFilter_NumCoef[0] *
    FingerStrokeAssistance_DW.DiscreteFilter_tmp;
  u0 += FingerStrokeAssistance_P.DiscreteFilter_NumCoef[1] *
    FingerStrokeAssistance_DW.DiscreteFilter_states;
  FingerStrokeAssistance_B.DiscreteFilter = u0;

  /* ManualSwitch: '<S2>/Manual Switch3' incorporates:
   *  Constant: '<S2>/Switch_Off'
   *  Constant: '<S2>/Switch_On'
   */
  if (FingerStrokeAssistance_P.ManualSwitch3_CurrentSetting == 1) {
    FingerStrokeAssistance_B.ManualSwitch3 =
      FingerStrokeAssistance_P.Switch_Off_Value;
  } else {
    FingerStrokeAssistance_B.ManualSwitch3 =
      FingerStrokeAssistance_P.Switch_On_Value;
  }

  /* End of ManualSwitch: '<S2>/Manual Switch3' */

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  if (((FingerStrokeAssistance_B.ManualSwitch3 > 0.0) &&
       (FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRe_i <= 0)) ||
      ((FingerStrokeAssistance_B.ManualSwitch3 <= 0.0) &&
       (FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRe_i == 1))) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i =
      FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC_h;
  }

  if (FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i >=
      FingerStrokeAssistance_P.DiscreteTimeIntegrator_UpperSat) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i =
      FingerStrokeAssistance_P.DiscreteTimeIntegrator_UpperSat;
  } else {
    if (FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i <=
        FingerStrokeAssistance_P.DiscreteTimeIntegrator_LowerSat) {
      FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i =
        FingerStrokeAssistance_P.DiscreteTimeIntegrator_LowerSat;
    }
  }

  FingerStrokeAssistance_B.DiscreteTimeIntegrator_i =
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i;

  /* End of DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */

  /* Gain: '<S2>/Gain1' */
  FingerStrokeAssistance_B.Gain1 = FingerStrokeAssistance_P.Gain1_Gain *
    FingerStrokeAssistance_B.DiscreteFilter;

  /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  if ((int32_T)FingerStrokeAssistance_B.Delay1 == 0) {
    FingerStrokeAssistance_B.MultiportSwitch =
      FingerStrokeAssistance_P.Constant2_Value;
  } else {
    FingerStrokeAssistance_B.MultiportSwitch =
      FingerStrokeAssistance_B.DiscreteTimeIntegrator_i;
  }

  /* End of MultiPortSwitch: '<S2>/Multiport Switch' */

  /* Constant: '<S2>/Constant' */
  FingerStrokeAssistance_B.Constant = FingerStrokeAssistance_P.Constant_Value_h;

  /* Gain: '<S6>/parTrajMode' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parTrajMode =
    FingerStrokeAssistance_P.parTrajMode_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Rounding: '<S6>/Rounding Function' */
  FingerStrokeAssistance_B.RoundingFunction = rt_roundd_snf
    (FingerStrokeAssistance_B.parTrajMode);

  /* Saturate: '<S6>/Saturation1' */
  u0 = FingerStrokeAssistance_B.RoundingFunction;
  u1 = FingerStrokeAssistance_P.Saturation1_LowerSat;
  u2 = FingerStrokeAssistance_P.Saturation1_UpperSat;
  if (u0 > u2) {
    FingerStrokeAssistance_B.Saturation1 = u2;
  } else if (u0 < u1) {
    FingerStrokeAssistance_B.Saturation1 = u1;
  } else {
    FingerStrokeAssistance_B.Saturation1 = u0;
  }

  /* End of Saturate: '<S6>/Saturation1' */

  /* Gain: '<S6>/parFixedDur' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parFixedDur =
    FingerStrokeAssistance_P.parFixedDur_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Saturate: '<S6>/Saturation2' */
  u0 = FingerStrokeAssistance_B.parFixedDur;
  u1 = FingerStrokeAssistance_P.Saturation2_LowerSat;
  u2 = FingerStrokeAssistance_P.Saturation2_UpperSat;
  if (u0 > u2) {
    FingerStrokeAssistance_B.Saturation2 = u2;
  } else if (u0 < u1) {
    FingerStrokeAssistance_B.Saturation2 = u1;
  } else {
    FingerStrokeAssistance_B.Saturation2 = u0;
  }

  /* End of Saturate: '<S6>/Saturation2' */

  /* Memory: '<S23>/Memory' */
  FingerStrokeAssistance_B.Memory_g[0] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_k[0];
  FingerStrokeAssistance_B.Memory_g[1] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_k[1];
  FingerStrokeAssistance_B.Memory_g[2] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_k[2];
  FingerStrokeAssistance_B.Memory_g[3] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_k[3];

  /* Gain: '<S6>/parChangeRate' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parChangeRate =
    FingerStrokeAssistance_P.parChangeRate_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Gain: '<S6>/parKp1' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parKp1 = FingerStrokeAssistance_P.parKp1_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* MATLAB Function: '<S23>/gainramp' */
  FingerStrokeAssistance_gainramp(FingerStrokeAssistance_B.parChangeRate,
    FingerStrokeAssistance_B.parKp1, FingerStrokeAssistance_B.Memory_g,
    &FingerStrokeAssistance_B.sf_gainramp);

  /* Memory: '<S24>/Memory' */
  FingerStrokeAssistance_B.Memory_i[0] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_n[0];
  FingerStrokeAssistance_B.Memory_i[1] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_n[1];
  FingerStrokeAssistance_B.Memory_i[2] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_n[2];
  FingerStrokeAssistance_B.Memory_i[3] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_n[3];

  /* Gain: '<S6>/parKp2' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parKp2 = FingerStrokeAssistance_P.parKp2_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* MATLAB Function: '<S24>/gainramp' */
  FingerStrokeAssistance_gainramp(FingerStrokeAssistance_B.parChangeRate,
    FingerStrokeAssistance_B.parKp2, FingerStrokeAssistance_B.Memory_i,
    &FingerStrokeAssistance_B.sf_gainramp_i);

  /* Memory: '<S25>/Memory' */
  FingerStrokeAssistance_B.Memory_e[0] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_b[0];
  FingerStrokeAssistance_B.Memory_e[1] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_b[1];
  FingerStrokeAssistance_B.Memory_e[2] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_b[2];
  FingerStrokeAssistance_B.Memory_e[3] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_b[3];

  /* Gain: '<S6>/parKd1' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parKd1 = FingerStrokeAssistance_P.parKd1_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* MATLAB Function: '<S25>/gainramp' */
  FingerStrokeAssistance_gainramp(FingerStrokeAssistance_B.parChangeRate,
    FingerStrokeAssistance_B.parKd1, FingerStrokeAssistance_B.Memory_e,
    &FingerStrokeAssistance_B.sf_gainramp_id);

  /* Memory: '<S26>/Memory' */
  FingerStrokeAssistance_B.Memory_o[0] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_j[0];
  FingerStrokeAssistance_B.Memory_o[1] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_j[1];
  FingerStrokeAssistance_B.Memory_o[2] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_j[2];
  FingerStrokeAssistance_B.Memory_o[3] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_j[3];

  /* Gain: '<S6>/parKd2' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parKd2 = FingerStrokeAssistance_P.parKd2_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* MATLAB Function: '<S26>/gainramp' */
  FingerStrokeAssistance_gainramp(FingerStrokeAssistance_B.parChangeRate,
    FingerStrokeAssistance_B.parKd2, FingerStrokeAssistance_B.Memory_o,
    &FingerStrokeAssistance_B.sf_gainramp_b);

  /* Memory: '<S27>/Memory' */
  FingerStrokeAssistance_B.Memory_n[0] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_i[0];
  FingerStrokeAssistance_B.Memory_n[1] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_i[1];
  FingerStrokeAssistance_B.Memory_n[2] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_i[2];
  FingerStrokeAssistance_B.Memory_n[3] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_i[3];

  /* Gain: '<S6>/parKdV1' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parKdV1 = FingerStrokeAssistance_P.parKdV1_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* MATLAB Function: '<S27>/gainramp' */
  FingerStrokeAssistance_gainramp(FingerStrokeAssistance_B.parChangeRate,
    FingerStrokeAssistance_B.parKdV1, FingerStrokeAssistance_B.Memory_n,
    &FingerStrokeAssistance_B.sf_gainramp_f);

  /* Memory: '<S28>/Memory' */
  FingerStrokeAssistance_B.Memory_os[0] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_c[0];
  FingerStrokeAssistance_B.Memory_os[1] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_c[1];
  FingerStrokeAssistance_B.Memory_os[2] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_c[2];
  FingerStrokeAssistance_B.Memory_os[3] =
    FingerStrokeAssistance_DW.Memory_PreviousInput_c[3];

  /* Gain: '<S6>/parKdV2' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parKdV2 = FingerStrokeAssistance_P.parKdV2_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* MATLAB Function: '<S28>/gainramp' */
  FingerStrokeAssistance_gainramp(FingerStrokeAssistance_B.parChangeRate,
    FingerStrokeAssistance_B.parKdV2, FingerStrokeAssistance_B.Memory_os,
    &FingerStrokeAssistance_B.sf_gainramp_a);

  /* Gain: '<S6>/parFThresh' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parFThresh = FingerStrokeAssistance_P.parFThresh_Gain
    * FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Gain: '<S6>/parForceTrigger' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parForceTrigger =
    FingerStrokeAssistance_P.parForceTrigger_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Gain: '<S6>/parMarker' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parMarker = FingerStrokeAssistance_P.parMarker_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Gain: '<S6>/parMaxTrajDur' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parMaxTrajDur =
    FingerStrokeAssistance_P.parMaxTrajDur_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Gain: '<S6>/parPStop' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parPStop = FingerStrokeAssistance_P.parPStop_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Gain: '<S6>/parVThresh' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parVThresh = FingerStrokeAssistance_P.parVThresh_Gain
    * FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* Gain: '<S6>/parWiggleAmp' incorporates:
   *  Constant: '<S6>/paremeters_ must_be_one'
   */
  FingerStrokeAssistance_B.parWiggleAmp =
    FingerStrokeAssistance_P.parWiggleAmp_Gain *
    FingerStrokeAssistance_P.paremeters_must_be_one_Value;

  /* ok to acquire for <S42>/S-Function */
  FingerStrokeAssistance_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S41>/S-Function */
  FingerStrokeAssistance_DW.SFunction_IWORK_h.AcquireOK = 1;

  /* DigitalClock: '<S7>/Digital Clock' */
  FingerStrokeAssistance_B.DigitalClock = FingerStrokeAssistance_M->Timing.t[0];

  /* Gain: '<S7>/sigTargetTime' */
  FingerStrokeAssistance_B.sigTargetTime =
    FingerStrokeAssistance_P.sigTargetTime_Gain *
    FingerStrokeAssistance_B.DigitalClock;

  /* ok to acquire for <S40>/S-Function */
  FingerStrokeAssistance_DW.SFunction_IWORK_hl.AcquireOK = 1;

  /* Gain: '<S7>/sigGravAccel' */
  FingerStrokeAssistance_B.sigGravAccel =
    FingerStrokeAssistance_P.sigGravAccel_Gain * FingerStrokeAssistance_B.gain;

  /* ok to acquire for <S39>/S-Function */
  FingerStrokeAssistance_DW.SFunction_IWORK_b.AcquireOK = 1;
}

/* Model update function */
static void FingerStrokeAssistance_update(void)
{
  real_T xnew;
  real_T xnew_0;
  real_T xnew_idx_0;

  /* Update for UnitDelay: '<Root>/Unit Delay2' */
  FingerStrokeAssistance_DW.UnitDelay2_DSTATE = FingerStrokeAssistance_B.state;

  /* Update for UnitDelay: '<S1>/Delay Input1' */
  FingerStrokeAssistance_DW.DelayInput1_DSTATE =
    FingerStrokeAssistance_B.UnitDelay2;

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE +=
    FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainval *
    FingerStrokeAssistance_B.UnitDelay1;
  if (FingerStrokeAssistance_B.DataTypeConversion > 0.0) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRese = 1;
  } else if (FingerStrokeAssistance_B.DataTypeConversion < 0.0) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRese = -1;
  } else if (FingerStrokeAssistance_B.DataTypeConversion == 0.0) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRese = 0;
  } else {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRese = 2;
  }

  /* End of Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  FingerStrokeAssistance_DW.UnitDelay_DSTATE = FingerStrokeAssistance_B.state;

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  FingerStrokeAssistance_DW.UnitDelay_DSTATE_h[0] =
    FingerStrokeAssistance_B.In1[0];

  /* Update for UnitDelay: '<S11>/UD' */
  FingerStrokeAssistance_DW.UD_DSTATE[0] = FingerStrokeAssistance_B.TSamp[0];

  /* Update for UnitDelay: '<Root>/Unit Delay3' */
  FingerStrokeAssistance_DW.UnitDelay3_DSTATE[0] =
    FingerStrokeAssistance_B.Sum_a[0];

  /* Update for DiscreteIntegrator: '<S8>/Filter' */
  FingerStrokeAssistance_DW.Filter_DSTATE[0] +=
    FingerStrokeAssistance_P.Filter_gainval *
    FingerStrokeAssistance_B.FilterCoefficient[0];

  /* Update for DiscreteIntegrator: '<S8>/Integrator' */
  FingerStrokeAssistance_DW.Integrator_DSTATE[0] +=
    FingerStrokeAssistance_P.Integrator_gainval *
    FingerStrokeAssistance_B.IntegralGain[0];

  /* Update for DiscreteStateSpace: '<S17>/Low Pass 100 Hz' */
  xnew_0 = FingerStrokeAssistance_P.Alow[0] *
    FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[0];
  xnew_0 += FingerStrokeAssistance_P.Alow[2] *
    FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[1];
  xnew_idx_0 = xnew_0;
  xnew_idx_0 += FingerStrokeAssistance_P.Blow[0] *
    FingerStrokeAssistance_B.Switch2[0];

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  FingerStrokeAssistance_DW.UnitDelay_DSTATE_h[1] =
    FingerStrokeAssistance_B.In1[1];

  /* Update for UnitDelay: '<S11>/UD' */
  FingerStrokeAssistance_DW.UD_DSTATE[1] = FingerStrokeAssistance_B.TSamp[1];

  /* Update for UnitDelay: '<Root>/Unit Delay3' */
  FingerStrokeAssistance_DW.UnitDelay3_DSTATE[1] =
    FingerStrokeAssistance_B.Sum_a[1];

  /* Update for DiscreteIntegrator: '<S8>/Filter' */
  FingerStrokeAssistance_DW.Filter_DSTATE[1] +=
    FingerStrokeAssistance_P.Filter_gainval *
    FingerStrokeAssistance_B.FilterCoefficient[1];

  /* Update for DiscreteIntegrator: '<S8>/Integrator' */
  FingerStrokeAssistance_DW.Integrator_DSTATE[1] +=
    FingerStrokeAssistance_P.Integrator_gainval *
    FingerStrokeAssistance_B.IntegralGain[1];

  /* Update for DiscreteStateSpace: '<S17>/Low Pass 100 Hz' */
  xnew_0 = FingerStrokeAssistance_P.Alow[1] *
    FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[0];
  xnew_0 += FingerStrokeAssistance_P.Alow[3] *
    FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[1];
  xnew_0 += FingerStrokeAssistance_P.Blow[1] * FingerStrokeAssistance_B.Switch2
    [0];
  FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[0] = xnew_idx_0;

  /* Update for DiscreteStateSpace: '<S17>/Low Pass 100 Hz1' */
  xnew = FingerStrokeAssistance_P.Alow[0] *
    FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[0];
  xnew += FingerStrokeAssistance_P.Alow[2] *
    FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[1];
  xnew_idx_0 = xnew;
  xnew_idx_0 += FingerStrokeAssistance_P.Blow[0] *
    FingerStrokeAssistance_B.Switch2[1];

  /* Update for DiscreteStateSpace: '<S17>/Low Pass 100 Hz' */
  FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[1] = xnew_0;

  /* Update for DiscreteStateSpace: '<S17>/Low Pass 100 Hz1' */
  xnew = FingerStrokeAssistance_P.Alow[1] *
    FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[0];
  xnew += FingerStrokeAssistance_P.Alow[3] *
    FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[1];
  xnew += FingerStrokeAssistance_P.Blow[1] * FingerStrokeAssistance_B.Switch2[1];

  /* Update for Memory: '<S17>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput =
    FingerStrokeAssistance_B.LowPass100Hz;

  /* Update for Memory: '<S17>/Memory1' */
  FingerStrokeAssistance_DW.Memory1_PreviousInput =
    FingerStrokeAssistance_B.LowPass100Hz1;

  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  FingerStrokeAssistance_DW.UnitDelay1_DSTATE =
    FingerStrokeAssistance_B.ramp_switch;

  /* Update for DiscreteStateSpace: '<S17>/Low Pass 100 Hz1' */
  FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[0] = xnew_idx_0;

  /* Update for Delay: '<S2>/Delay' */
  FingerStrokeAssistance_DW.Delay_DSTATE[0] = FingerStrokeAssistance_B.Sum_a[0];

  /* Update for DiscreteStateSpace: '<S17>/Low Pass 100 Hz1' */
  FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[1] = xnew;

  /* Update for Delay: '<S2>/Delay' */
  FingerStrokeAssistance_DW.Delay_DSTATE[1] = FingerStrokeAssistance_B.Sum_a[1];

  /* Update for Delay: '<S2>/Delay1' */
  FingerStrokeAssistance_DW.Delay1_DSTATE =
    FingerStrokeAssistance_B.ManualSwitch3;

  /* Update for DiscreteFilter: '<S2>/Discrete Filter' */
  FingerStrokeAssistance_DW.DiscreteFilter_states =
    FingerStrokeAssistance_DW.DiscreteFilter_tmp;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i +=
    FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainva_m *
    FingerStrokeAssistance_B.Gain1;
  if (FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i >=
      FingerStrokeAssistance_P.DiscreteTimeIntegrator_UpperSat) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i =
      FingerStrokeAssistance_P.DiscreteTimeIntegrator_UpperSat;
  } else {
    if (FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i <=
        FingerStrokeAssistance_P.DiscreteTimeIntegrator_LowerSat) {
      FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i =
        FingerStrokeAssistance_P.DiscreteTimeIntegrator_LowerSat;
    }
  }

  if (FingerStrokeAssistance_B.ManualSwitch3 > 0.0) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRe_i = 1;
  } else if (FingerStrokeAssistance_B.ManualSwitch3 < 0.0) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRe_i = -1;
  } else if (FingerStrokeAssistance_B.ManualSwitch3 == 0.0) {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRe_i = 0;
  } else {
    FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRe_i = 2;
  }

  /* End of Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */

  /* Update for Memory: '<S23>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_k[0] =
    FingerStrokeAssistance_B.sf_gainramp.state1[0];

  /* Update for Memory: '<S24>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_n[0] =
    FingerStrokeAssistance_B.sf_gainramp_i.state1[0];

  /* Update for Memory: '<S25>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_b[0] =
    FingerStrokeAssistance_B.sf_gainramp_id.state1[0];

  /* Update for Memory: '<S26>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_j[0] =
    FingerStrokeAssistance_B.sf_gainramp_b.state1[0];

  /* Update for Memory: '<S27>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_i[0] =
    FingerStrokeAssistance_B.sf_gainramp_f.state1[0];

  /* Update for Memory: '<S28>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_c[0] =
    FingerStrokeAssistance_B.sf_gainramp_a.state1[0];

  /* Update for Memory: '<S23>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_k[1] =
    FingerStrokeAssistance_B.sf_gainramp.state1[1];

  /* Update for Memory: '<S24>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_n[1] =
    FingerStrokeAssistance_B.sf_gainramp_i.state1[1];

  /* Update for Memory: '<S25>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_b[1] =
    FingerStrokeAssistance_B.sf_gainramp_id.state1[1];

  /* Update for Memory: '<S26>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_j[1] =
    FingerStrokeAssistance_B.sf_gainramp_b.state1[1];

  /* Update for Memory: '<S27>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_i[1] =
    FingerStrokeAssistance_B.sf_gainramp_f.state1[1];

  /* Update for Memory: '<S28>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_c[1] =
    FingerStrokeAssistance_B.sf_gainramp_a.state1[1];

  /* Update for Memory: '<S23>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_k[2] =
    FingerStrokeAssistance_B.sf_gainramp.state1[2];

  /* Update for Memory: '<S24>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_n[2] =
    FingerStrokeAssistance_B.sf_gainramp_i.state1[2];

  /* Update for Memory: '<S25>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_b[2] =
    FingerStrokeAssistance_B.sf_gainramp_id.state1[2];

  /* Update for Memory: '<S26>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_j[2] =
    FingerStrokeAssistance_B.sf_gainramp_b.state1[2];

  /* Update for Memory: '<S27>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_i[2] =
    FingerStrokeAssistance_B.sf_gainramp_f.state1[2];

  /* Update for Memory: '<S28>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_c[2] =
    FingerStrokeAssistance_B.sf_gainramp_a.state1[2];

  /* Update for Memory: '<S23>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_k[3] =
    FingerStrokeAssistance_B.sf_gainramp.state1[3];

  /* Update for Memory: '<S24>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_n[3] =
    FingerStrokeAssistance_B.sf_gainramp_i.state1[3];

  /* Update for Memory: '<S25>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_b[3] =
    FingerStrokeAssistance_B.sf_gainramp_id.state1[3];

  /* Update for Memory: '<S26>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_j[3] =
    FingerStrokeAssistance_B.sf_gainramp_b.state1[3];

  /* Update for Memory: '<S27>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_i[3] =
    FingerStrokeAssistance_B.sf_gainramp_f.state1[3];

  /* Update for Memory: '<S28>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_c[3] =
    FingerStrokeAssistance_B.sf_gainramp_a.state1[3];

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++FingerStrokeAssistance_M->Timing.clockTick0)) {
    ++FingerStrokeAssistance_M->Timing.clockTickH0;
  }

  FingerStrokeAssistance_M->Timing.t[0] =
    FingerStrokeAssistance_M->Timing.clockTick0 *
    FingerStrokeAssistance_M->Timing.stepSize0 +
    FingerStrokeAssistance_M->Timing.clockTickH0 *
    FingerStrokeAssistance_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void FingerStrokeAssistance_initialize(void)
{
  /* Level2 S-Function Block: '<S5>/PCI 6221 ENC ' (encnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S5>/PCI 6221 ENC 1' (encnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S5>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S5>/PCI-6221 AD1' (adnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S42>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("MATLAB Function/p3"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Robot/account for handedness1/MATLAB Function/p1"));
        rl32eAddSignal(3, rl32eGetSignalNo("Robot/Gain/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo("Robot/Sum/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo("MATLAB Function/p1"));
        rl32eAddSignal(3, rl32eGetSignalNo("Discrete-Time Integrator"));
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("MATLAB Function/p3"),
          "f_ref2:%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Robot/account for handedness1/MATLAB Function/p1"),"enc_raw:%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Robot/Gain/s1"),
          "enc_norm:%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Robot/Sum/s1"),"pos:%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("MATLAB Function/p1"),
          "state:%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Discrete-Time Integrator"),
          "op_trigger:%15.6f");
        rl32eSetScope(3, 4, 10);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("MATLAB Function/p3"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 0.0);
        rl32eSetTargetScope(3, 11, 0.03);
        rl32eSetTargetScope(3, 10, 0.1);
        xpceScopeAcqOK(3, &FingerStrokeAssistance_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* S-Function Block: <S41>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("HL Controller/Multiport Switch"));
        rl32eAddSignal(4, rl32eGetSignalNo("Robot/Sum/s1"));
        rl32eAddSignal(4, rl32eGetSignalNo("LL Controller/Sum/s1"));
        rl32eSetScope(4, 4, 2000);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("HL Controller/Multiport Switch"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 3.0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 1.0);
        xpceScopeAcqOK(4, &FingerStrokeAssistance_DW.SFunction_IWORK_h.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S40>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("signals/sigGravAccel"));
        rl32eSetScope(2, 4, 2000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("signals/sigGravAccel"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 3.0);
        rl32eSetTargetScope(2, 11, -1.0);
        rl32eSetTargetScope(2, 10, 1.0);
        xpceScopeAcqOK(2,
                       &FingerStrokeAssistance_DW.SFunction_IWORK_hl.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S39>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo(
          "LL Controller/Discrete PID Controller/Sum/s1"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "LL Controller/Discrete PID Controller/Sum/s2"));
        rl32eSetScope(1, 4, 2000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo(
          "LL Controller/Discrete PID Controller/Sum/s1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 3.0);
        rl32eSetTargetScope(1, 11, -1.0);
        rl32eSetTargetScope(1, 10, 1.0);
        xpceScopeAcqOK(1, &FingerStrokeAssistance_DW.SFunction_IWORK_b.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  FingerStrokeAssistance_PrevZCX.TriggeredSubsystem_Trig_ZCE =
    UNINITIALIZED_ZCSIG;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
  FingerStrokeAssistance_DW.UnitDelay2_DSTATE =
    FingerStrokeAssistance_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Delay Input1' */
  FingerStrokeAssistance_DW.DelayInput1_DSTATE =
    FingerStrokeAssistance_P.DetectChange_vinit;

  /* InitializeConditions for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE =
    FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC;
  FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRese = 2;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  FingerStrokeAssistance_DW.UnitDelay_DSTATE =
    FingerStrokeAssistance_P.UnitDelay_InitialCondition;

  /* InitializeConditions for Memory: '<S17>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput =
    FingerStrokeAssistance_P.Memory_X0;

  /* InitializeConditions for Memory: '<S17>/Memory1' */
  FingerStrokeAssistance_DW.Memory1_PreviousInput =
    FingerStrokeAssistance_P.Memory1_X0;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  FingerStrokeAssistance_DW.UnitDelay1_DSTATE =
    FingerStrokeAssistance_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  FingerStrokeAssistance_DW.UnitDelay_DSTATE_h[0] =
    FingerStrokeAssistance_P.UnitDelay_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S11>/UD' */
  FingerStrokeAssistance_DW.UD_DSTATE[0] =
    FingerStrokeAssistance_P.DiscreteDerivative_ICPrevScaled;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay3' */
  FingerStrokeAssistance_DW.UnitDelay3_DSTATE[0] =
    FingerStrokeAssistance_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Filter' */
  FingerStrokeAssistance_DW.Filter_DSTATE[0] =
    FingerStrokeAssistance_P.Filter_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Integrator' */
  FingerStrokeAssistance_DW.Integrator_DSTATE[0] =
    FingerStrokeAssistance_P.Integrator_IC;

  /* InitializeConditions for DiscreteStateSpace: '<S17>/Low Pass 100 Hz' */
  FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[0] =
    FingerStrokeAssistance_P.x0low[0];

  /* InitializeConditions for DiscreteStateSpace: '<S17>/Low Pass 100 Hz1' */
  FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[0] =
    FingerStrokeAssistance_P.x0low[0];

  /* InitializeConditions for Delay: '<S2>/Delay' */
  FingerStrokeAssistance_DW.Delay_DSTATE[0] =
    FingerStrokeAssistance_P.Delay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  FingerStrokeAssistance_DW.UnitDelay_DSTATE_h[1] =
    FingerStrokeAssistance_P.UnitDelay_InitialCondition_e;

  /* InitializeConditions for UnitDelay: '<S11>/UD' */
  FingerStrokeAssistance_DW.UD_DSTATE[1] =
    FingerStrokeAssistance_P.DiscreteDerivative_ICPrevScaled;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay3' */
  FingerStrokeAssistance_DW.UnitDelay3_DSTATE[1] =
    FingerStrokeAssistance_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Filter' */
  FingerStrokeAssistance_DW.Filter_DSTATE[1] =
    FingerStrokeAssistance_P.Filter_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Integrator' */
  FingerStrokeAssistance_DW.Integrator_DSTATE[1] =
    FingerStrokeAssistance_P.Integrator_IC;

  /* InitializeConditions for DiscreteStateSpace: '<S17>/Low Pass 100 Hz' */
  FingerStrokeAssistance_DW.LowPass100Hz_DSTATE[1] =
    FingerStrokeAssistance_P.x0low[1];

  /* InitializeConditions for DiscreteStateSpace: '<S17>/Low Pass 100 Hz1' */
  FingerStrokeAssistance_DW.LowPass100Hz1_DSTATE[1] =
    FingerStrokeAssistance_P.x0low[1];

  /* InitializeConditions for Delay: '<S2>/Delay' */
  FingerStrokeAssistance_DW.Delay_DSTATE[1] =
    FingerStrokeAssistance_P.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S2>/Delay1' */
  FingerStrokeAssistance_DW.Delay1_DSTATE =
    FingerStrokeAssistance_P.Delay1_InitialCondition;

  /* InitializeConditions for DiscreteFilter: '<S2>/Discrete Filter' */
  FingerStrokeAssistance_DW.DiscreteFilter_states =
    FingerStrokeAssistance_P.DiscreteFilter_InitialStates;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  FingerStrokeAssistance_DW.DiscreteTimeIntegrator_DSTATE_i =
    FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC_h;
  FingerStrokeAssistance_DW.DiscreteTimeIntegrator_PrevRe_i = 2;

  /* InitializeConditions for Memory: '<S23>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_k[0] =
    FingerStrokeAssistance_P.Memory_X0_g[0];

  /* InitializeConditions for Memory: '<S24>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_n[0] =
    FingerStrokeAssistance_P.Memory_X0_a[0];

  /* InitializeConditions for Memory: '<S25>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_b[0] =
    FingerStrokeAssistance_P.Memory_X0_b[0];

  /* InitializeConditions for Memory: '<S26>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_j[0] =
    FingerStrokeAssistance_P.Memory_X0_g0[0];

  /* InitializeConditions for Memory: '<S27>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_i[0] =
    FingerStrokeAssistance_P.Memory_X0_bp[0];

  /* InitializeConditions for Memory: '<S28>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_c[0] =
    FingerStrokeAssistance_P.Memory_X0_e[0];

  /* InitializeConditions for Memory: '<S23>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_k[1] =
    FingerStrokeAssistance_P.Memory_X0_g[1];

  /* InitializeConditions for Memory: '<S24>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_n[1] =
    FingerStrokeAssistance_P.Memory_X0_a[1];

  /* InitializeConditions for Memory: '<S25>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_b[1] =
    FingerStrokeAssistance_P.Memory_X0_b[1];

  /* InitializeConditions for Memory: '<S26>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_j[1] =
    FingerStrokeAssistance_P.Memory_X0_g0[1];

  /* InitializeConditions for Memory: '<S27>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_i[1] =
    FingerStrokeAssistance_P.Memory_X0_bp[1];

  /* InitializeConditions for Memory: '<S28>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_c[1] =
    FingerStrokeAssistance_P.Memory_X0_e[1];

  /* InitializeConditions for Memory: '<S23>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_k[2] =
    FingerStrokeAssistance_P.Memory_X0_g[2];

  /* InitializeConditions for Memory: '<S24>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_n[2] =
    FingerStrokeAssistance_P.Memory_X0_a[2];

  /* InitializeConditions for Memory: '<S25>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_b[2] =
    FingerStrokeAssistance_P.Memory_X0_b[2];

  /* InitializeConditions for Memory: '<S26>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_j[2] =
    FingerStrokeAssistance_P.Memory_X0_g0[2];

  /* InitializeConditions for Memory: '<S27>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_i[2] =
    FingerStrokeAssistance_P.Memory_X0_bp[2];

  /* InitializeConditions for Memory: '<S28>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_c[2] =
    FingerStrokeAssistance_P.Memory_X0_e[2];

  /* InitializeConditions for Memory: '<S23>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_k[3] =
    FingerStrokeAssistance_P.Memory_X0_g[3];

  /* InitializeConditions for Memory: '<S24>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_n[3] =
    FingerStrokeAssistance_P.Memory_X0_a[3];

  /* InitializeConditions for Memory: '<S25>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_b[3] =
    FingerStrokeAssistance_P.Memory_X0_b[3];

  /* InitializeConditions for Memory: '<S26>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_j[3] =
    FingerStrokeAssistance_P.Memory_X0_g0[3];

  /* InitializeConditions for Memory: '<S27>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_i[3] =
    FingerStrokeAssistance_P.Memory_X0_bp[3];

  /* InitializeConditions for Memory: '<S28>/Memory' */
  FingerStrokeAssistance_DW.Memory_PreviousInput_c[3] =
    FingerStrokeAssistance_P.Memory_X0_e[3];

  /* SystemInitialize for Triggered SubSystem: '<S5>/Triggered Subsystem' */
  /* SystemInitialize for Outport: '<S12>/Out1' */
  FingerStrokeAssistance_B.In1[0] = FingerStrokeAssistance_P.Out1_Y0;
  FingerStrokeAssistance_B.In1[1] = FingerStrokeAssistance_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S5>/Triggered Subsystem' */
}

/* Model terminate function */
static void FingerStrokeAssistance_terminate(void)
{
  /* Level2 S-Function Block: '<S5>/PCI 6221 ENC ' (encnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S5>/PCI 6221 ENC 1' (encnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S5>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S5>/PCI-6221 AD1' (adnipcim) */
  {
    SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[3];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  FingerStrokeAssistance_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  FingerStrokeAssistance_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  FingerStrokeAssistance_initialize();
}

void MdlTerminate(void)
{
  FingerStrokeAssistance_terminate();
}

/* Registration function */
RT_MODEL_FingerStrokeAssistance_T *FingerStrokeAssistance(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)FingerStrokeAssistance_M, 0,
                sizeof(RT_MODEL_FingerStrokeAssistance_T));
  rtsiSetSolverName(&FingerStrokeAssistance_M->solverInfo,"FixedStepDiscrete");
  FingerStrokeAssistance_M->solverInfoPtr =
    (&FingerStrokeAssistance_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = FingerStrokeAssistance_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    FingerStrokeAssistance_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    FingerStrokeAssistance_M->Timing.sampleTimes =
      (&FingerStrokeAssistance_M->Timing.sampleTimesArray[0]);
    FingerStrokeAssistance_M->Timing.offsetTimes =
      (&FingerStrokeAssistance_M->Timing.offsetTimesArray[0]);

    /* task periods */
    FingerStrokeAssistance_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    FingerStrokeAssistance_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(FingerStrokeAssistance_M, &FingerStrokeAssistance_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = FingerStrokeAssistance_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    FingerStrokeAssistance_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(FingerStrokeAssistance_M, -1);
  FingerStrokeAssistance_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    FingerStrokeAssistance_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(FingerStrokeAssistance_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(FingerStrokeAssistance_M->rtwLogInfo, (NULL));
    rtliSetLogT(FingerStrokeAssistance_M->rtwLogInfo, "tout");
    rtliSetLogX(FingerStrokeAssistance_M->rtwLogInfo, "");
    rtliSetLogXFinal(FingerStrokeAssistance_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(FingerStrokeAssistance_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(FingerStrokeAssistance_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(FingerStrokeAssistance_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(FingerStrokeAssistance_M->rtwLogInfo, 1);
    rtliSetLogY(FingerStrokeAssistance_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(FingerStrokeAssistance_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(FingerStrokeAssistance_M->rtwLogInfo, (NULL));
  }

  FingerStrokeAssistance_M->solverInfoPtr =
    (&FingerStrokeAssistance_M->solverInfo);
  FingerStrokeAssistance_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&FingerStrokeAssistance_M->solverInfo, 0.001);
  rtsiSetSolverMode(&FingerStrokeAssistance_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  FingerStrokeAssistance_M->ModelData.blockIO = ((void *)
    &FingerStrokeAssistance_B);
  (void) memset(((void *) &FingerStrokeAssistance_B), 0,
                sizeof(B_FingerStrokeAssistance_T));

  /* parameters */
  FingerStrokeAssistance_M->ModelData.defaultParam = ((real_T *)
    &FingerStrokeAssistance_P);

  /* states (dwork) */
  FingerStrokeAssistance_M->ModelData.dwork = ((void *)
    &FingerStrokeAssistance_DW);
  (void) memset((void *)&FingerStrokeAssistance_DW, 0,
                sizeof(DW_FingerStrokeAssistance_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  FingerStrokeAssistance_InitializeDataMapInfo(FingerStrokeAssistance_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &FingerStrokeAssistance_M->NonInlinedSFcns.sfcnInfo;
    FingerStrokeAssistance_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(FingerStrokeAssistance_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &FingerStrokeAssistance_M->Sizes.numSampTimes);
    FingerStrokeAssistance_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (FingerStrokeAssistance_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   FingerStrokeAssistance_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(FingerStrokeAssistance_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(FingerStrokeAssistance_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (FingerStrokeAssistance_M));
    rtssSetStepSizePtr(sfcnInfo, &FingerStrokeAssistance_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (FingerStrokeAssistance_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &FingerStrokeAssistance_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &FingerStrokeAssistance_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &FingerStrokeAssistance_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &FingerStrokeAssistance_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &FingerStrokeAssistance_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &FingerStrokeAssistance_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &FingerStrokeAssistance_M->solverInfoPtr);
  }

  FingerStrokeAssistance_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) memset((void *)
                  &FingerStrokeAssistance_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  4*sizeof(SimStruct));
    FingerStrokeAssistance_M->childSfunctions =
      (&FingerStrokeAssistance_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    FingerStrokeAssistance_M->childSfunctions[0] =
      (&FingerStrokeAssistance_M->NonInlinedSFcns.childSFunctions[0]);
    FingerStrokeAssistance_M->childSfunctions[1] =
      (&FingerStrokeAssistance_M->NonInlinedSFcns.childSFunctions[1]);
    FingerStrokeAssistance_M->childSfunctions[2] =
      (&FingerStrokeAssistance_M->NonInlinedSFcns.childSFunctions[2]);
    FingerStrokeAssistance_M->childSfunctions[3] =
      (&FingerStrokeAssistance_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: FingerStrokeAssistance/<S5>/PCI 6221 ENC  (encnipcim) */
    {
      SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &FingerStrokeAssistance_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, FingerStrokeAssistance_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FingerStrokeAssistance_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FingerStrokeAssistance_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FingerStrokeAssistance_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &FingerStrokeAssistance_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221ENC));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI 6221 ENC ");
      ssSetPath(rts, "FingerStrokeAssistance/Robot/PCI 6221 ENC ");
      ssSetRTModel(rts,FingerStrokeAssistance_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC_P10_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &FingerStrokeAssistance_DW.PCI6221ENC_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FingerStrokeAssistance_DW.PCI6221ENC_PWORK);
      }

      /* registration */
      encnipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: FingerStrokeAssistance/<S5>/PCI 6221 ENC 1 (encnipcim) */
    {
      SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &FingerStrokeAssistance_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, FingerStrokeAssistance_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FingerStrokeAssistance_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FingerStrokeAssistance_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FingerStrokeAssistance_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &FingerStrokeAssistance_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221ENC1));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI 6221 ENC 1");
      ssSetPath(rts, "FingerStrokeAssistance/Robot/PCI 6221 ENC 1");
      ssSetRTModel(rts,FingerStrokeAssistance_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221ENC1_P10_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &FingerStrokeAssistance_DW.PCI6221ENC1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FingerStrokeAssistance_DW.PCI6221ENC1_PWORK);
      }

      /* registration */
      encnipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: FingerStrokeAssistance/<S5>/PCI-6221 DA (danipcim) */
    {
      SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &FingerStrokeAssistance_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, FingerStrokeAssistance_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FingerStrokeAssistance_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FingerStrokeAssistance_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FingerStrokeAssistance_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &FingerStrokeAssistance_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &FingerStrokeAssistance_B.sf_MATLABFunction_m.output1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.UPtrs1;
          sfcnUPtrs[0] = &FingerStrokeAssistance_B.sf_MATLABFunction_m.output2;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 DA");
      ssSetPath(rts, "FingerStrokeAssistance/Robot/PCI-6221 DA");
      ssSetRTModel(rts,FingerStrokeAssistance_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221DA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221DA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221DA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221DA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221DA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221DA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221DA_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &FingerStrokeAssistance_DW.PCI6221DA_RWORK[0]);
      ssSetIWork(rts, (int_T *) &FingerStrokeAssistance_DW.PCI6221DA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FingerStrokeAssistance_DW.PCI6221DA_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 41);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &FingerStrokeAssistance_DW.PCI6221DA_IWORK[0]);
      }

      /* registration */
      danipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: FingerStrokeAssistance/<S5>/PCI-6221 AD1 (adnipcim) */
    {
      SimStruct *rts = FingerStrokeAssistance_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &FingerStrokeAssistance_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, FingerStrokeAssistance_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &FingerStrokeAssistance_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &FingerStrokeAssistance_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &FingerStrokeAssistance_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &FingerStrokeAssistance_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221AD1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221AD1_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221AD1_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221AD1_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221AD1_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221AD1_o6));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221AD1_o7));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((real_T *)
            &FingerStrokeAssistance_B.PCI6221AD1_o8));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 AD1");
      ssSetPath(rts, "FingerStrokeAssistance/Robot/PCI-6221 AD1");
      ssSetRTModel(rts,FingerStrokeAssistance_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221AD1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221AD1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221AD1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221AD1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221AD1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221AD1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       FingerStrokeAssistance_P.PCI6221AD1_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &FingerStrokeAssistance_DW.PCI6221AD1_IWORK[0]);
      ssSetPWork(rts, (void **) &FingerStrokeAssistance_DW.PCI6221AD1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &FingerStrokeAssistance_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 41);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &FingerStrokeAssistance_DW.PCI6221AD1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &FingerStrokeAssistance_DW.PCI6221AD1_PWORK);
      }

      /* registration */
      adnipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  FingerStrokeAssistance_M->Sizes.numContStates = (0);/* Number of continuous states */
  FingerStrokeAssistance_M->Sizes.numY = (0);/* Number of model outputs */
  FingerStrokeAssistance_M->Sizes.numU = (0);/* Number of model inputs */
  FingerStrokeAssistance_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  FingerStrokeAssistance_M->Sizes.numSampTimes = (1);/* Number of sample times */
  FingerStrokeAssistance_M->Sizes.numBlocks = (122);/* Number of blocks */
  FingerStrokeAssistance_M->Sizes.numBlockIO = (117);/* Number of block outputs */
  FingerStrokeAssistance_M->Sizes.numBlockPrms = (237);/* Sum of parameter "widths" */
  return FingerStrokeAssistance_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
