function pt=FingerStrokeAssistancept
pt = [];

  
pt(1).blockname = 'Detect Change';
pt(1).paramname = 'vinit';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'FingerStrokeAssistance_P.DetectChange_vinit';
pt(1).baseaddr   = '&FingerStrokeAssistance_P.DetectChange_vinit';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Constant1';
pt(2).paramname = 'Value';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'FingerStrokeAssistance_P.Constant1_Value';
pt(2).baseaddr   = '&FingerStrokeAssistance_P.Constant1_Value';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'Constant3';
pt(3).paramname = 'Value';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'FingerStrokeAssistance_P.Constant3_Value';
pt(3).baseaddr   = '&FingerStrokeAssistance_P.Constant3_Value';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'standby-OFF';
pt(4).paramname = 'Value';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'FingerStrokeAssistance_P.standbyOFF_Value';
pt(4).baseaddr   = '&FingerStrokeAssistance_P.standbyOFF_Value';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'standby-ON';
pt(5).paramname = 'Value';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'FingerStrokeAssistance_P.standbyON_Value';
pt(5).baseaddr   = '&FingerStrokeAssistance_P.standbyON_Value';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'Discrete-Time Integrator';
pt(6).paramname = 'gainval';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainval';
pt(6).baseaddr   = '&FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainval';
pt(6).dtname     = 'real_T';



  
pt(7).blockname = 'Discrete-Time Integrator';
pt(7).paramname = 'InitialCondition';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC';
pt(7).baseaddr   = '&FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC';
pt(7).dtname     = 'real_T';



  
pt(8).blockname = 'Main Switch';
pt(8).paramname = 'CurrentSetting';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_UINT8';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'FingerStrokeAssistance_P.MainSwitch_CurrentSetting';
pt(8).baseaddr   = '&FingerStrokeAssistance_P.MainSwitch_CurrentSetting';
pt(8).dtname     = 'uint8_T';



  
pt(9).blockname = 'Unit Delay';
pt(9).paramname = 'InitialCondition';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'FingerStrokeAssistance_P.UnitDelay_InitialCondition';
pt(9).baseaddr   = '&FingerStrokeAssistance_P.UnitDelay_InitialCondition';
pt(9).dtname     = 'real_T';



  
pt(10).blockname = 'Unit Delay1';
pt(10).paramname = 'InitialCondition';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'FingerStrokeAssistance_P.UnitDelay1_InitialCondition';
pt(10).baseaddr   = '&FingerStrokeAssistance_P.UnitDelay1_InitialCondition';
pt(10).dtname     = 'real_T';



  
pt(11).blockname = 'Unit Delay2';
pt(11).paramname = 'InitialCondition';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'FingerStrokeAssistance_P.UnitDelay2_InitialCondition';
pt(11).baseaddr   = '&FingerStrokeAssistance_P.UnitDelay2_InitialCondition';
pt(11).dtname     = 'real_T';



  
pt(12).blockname = 'Unit Delay3';
pt(12).paramname = 'InitialCondition';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'FingerStrokeAssistance_P.UnitDelay3_InitialCondition';
pt(12).baseaddr   = '&FingerStrokeAssistance_P.UnitDelay3_InitialCondition';
pt(12).dtname     = 'real_T';



  
pt(13).blockname = 'HL Controller/Constant';
pt(13).paramname = 'Value';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'FingerStrokeAssistance_P.Constant_Value_h';
pt(13).baseaddr   = '&FingerStrokeAssistance_P.Constant_Value_h';
pt(13).dtname     = 'real_T';



  
pt(14).blockname = 'HL Controller/Constant2';
pt(14).paramname = 'Value';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'FingerStrokeAssistance_P.Constant2_Value';
pt(14).baseaddr   = '&FingerStrokeAssistance_P.Constant2_Value';
pt(14).dtname     = 'real_T';



  
pt(15).blockname = 'HL Controller/Switch_Off';
pt(15).paramname = 'Value';
pt(15).class     = 'scalar';
pt(15).nrows     = 1;
pt(15).ncols     = 1;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'FingerStrokeAssistance_P.Switch_Off_Value';
pt(15).baseaddr   = '&FingerStrokeAssistance_P.Switch_Off_Value';
pt(15).dtname     = 'real_T';



  
pt(16).blockname = 'HL Controller/Switch_On';
pt(16).paramname = 'Value';
pt(16).class     = 'scalar';
pt(16).nrows     = 1;
pt(16).ncols     = 1;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'FingerStrokeAssistance_P.Switch_On_Value';
pt(16).baseaddr   = '&FingerStrokeAssistance_P.Switch_On_Value';
pt(16).dtname     = 'real_T';



  
pt(17).blockname = 'HL Controller/Discrete-Time Integrator';
pt(17).paramname = 'gainval';
pt(17).class     = 'scalar';
pt(17).nrows     = 1;
pt(17).ncols     = 1;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';
pt(17).isStruct  = false;
pt(17).symbol     = 'FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainva_m';
pt(17).baseaddr   = '&FingerStrokeAssistance_P.DiscreteTimeIntegrator_gainva_m';
pt(17).dtname     = 'real_T';



  
pt(18).blockname = 'HL Controller/Discrete-Time Integrator';
pt(18).paramname = 'InitialCondition';
pt(18).class     = 'scalar';
pt(18).nrows     = 1;
pt(18).ncols     = 1;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';
pt(18).isStruct  = false;
pt(18).symbol     = 'FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC_h';
pt(18).baseaddr   = '&FingerStrokeAssistance_P.DiscreteTimeIntegrator_IC_h';
pt(18).dtname     = 'real_T';



  
pt(19).blockname = 'HL Controller/Discrete-Time Integrator';
pt(19).paramname = 'UpperSaturationLimit';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';
pt(19).isStruct  = false;
pt(19).symbol     = 'FingerStrokeAssistance_P.DiscreteTimeIntegrator_UpperSat';
pt(19).baseaddr   = '&FingerStrokeAssistance_P.DiscreteTimeIntegrator_UpperSat';
pt(19).dtname     = 'real_T';



  
pt(20).blockname = 'HL Controller/Discrete-Time Integrator';
pt(20).paramname = 'LowerSaturationLimit';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';
pt(20).isStruct  = false;
pt(20).symbol     = 'FingerStrokeAssistance_P.DiscreteTimeIntegrator_LowerSat';
pt(20).baseaddr   = '&FingerStrokeAssistance_P.DiscreteTimeIntegrator_LowerSat';
pt(20).dtname     = 'real_T';



  
pt(21).blockname = 'HL Controller/Gain1';
pt(21).paramname = 'Gain';
pt(21).class     = 'scalar';
pt(21).nrows     = 1;
pt(21).ncols     = 1;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';
pt(21).isStruct  = false;
pt(21).symbol     = 'FingerStrokeAssistance_P.Gain1_Gain';
pt(21).baseaddr   = '&FingerStrokeAssistance_P.Gain1_Gain';
pt(21).dtname     = 'real_T';



  
pt(22).blockname = 'HL Controller/Manual Switch3';
pt(22).paramname = 'CurrentSetting';
pt(22).class     = 'scalar';
pt(22).nrows     = 1;
pt(22).ncols     = 1;
pt(22).subsource = 'SS_UINT8';
pt(22).ndims     = '2';
pt(22).size      = '[]';
pt(22).isStruct  = false;
pt(22).symbol     = 'FingerStrokeAssistance_P.ManualSwitch3_CurrentSetting';
pt(22).baseaddr   = '&FingerStrokeAssistance_P.ManualSwitch3_CurrentSetting';
pt(22).dtname     = 'uint8_T';



  
pt(23).blockname = 'HL Controller/Delay';
pt(23).paramname = 'DelayLength';
pt(23).class     = 'scalar';
pt(23).nrows     = 1;
pt(23).ncols     = 1;
pt(23).subsource = 'SS_UINT32';
pt(23).ndims     = '2';
pt(23).size      = '[]';
pt(23).isStruct  = false;
pt(23).symbol     = 'FingerStrokeAssistance_P.Delay_DelayLength';
pt(23).baseaddr   = '&FingerStrokeAssistance_P.Delay_DelayLength';
pt(23).dtname     = 'uint32_T';



  
pt(24).blockname = 'HL Controller/Delay';
pt(24).paramname = 'InitialCondition';
pt(24).class     = 'scalar';
pt(24).nrows     = 1;
pt(24).ncols     = 1;
pt(24).subsource = 'SS_DOUBLE';
pt(24).ndims     = '2';
pt(24).size      = '[]';
pt(24).isStruct  = false;
pt(24).symbol     = 'FingerStrokeAssistance_P.Delay_InitialCondition';
pt(24).baseaddr   = '&FingerStrokeAssistance_P.Delay_InitialCondition';
pt(24).dtname     = 'real_T';



  
pt(25).blockname = 'HL Controller/Delay1';
pt(25).paramname = 'DelayLength';
pt(25).class     = 'scalar';
pt(25).nrows     = 1;
pt(25).ncols     = 1;
pt(25).subsource = 'SS_UINT32';
pt(25).ndims     = '2';
pt(25).size      = '[]';
pt(25).isStruct  = false;
pt(25).symbol     = 'FingerStrokeAssistance_P.Delay1_DelayLength';
pt(25).baseaddr   = '&FingerStrokeAssistance_P.Delay1_DelayLength';
pt(25).dtname     = 'uint32_T';



  
pt(26).blockname = 'HL Controller/Delay1';
pt(26).paramname = 'InitialCondition';
pt(26).class     = 'scalar';
pt(26).nrows     = 1;
pt(26).ncols     = 1;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';
pt(26).isStruct  = false;
pt(26).symbol     = 'FingerStrokeAssistance_P.Delay1_InitialCondition';
pt(26).baseaddr   = '&FingerStrokeAssistance_P.Delay1_InitialCondition';
pt(26).dtname     = 'real_T';



  
pt(27).blockname = 'HL Controller/Discrete Filter';
pt(27).paramname = 'Numerator';
pt(27).class     = 'vector';
pt(27).nrows     = 1;
pt(27).ncols     = 2;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';
pt(27).isStruct  = false;
pt(27).symbol     = 'FingerStrokeAssistance_P.DiscreteFilter_NumCoef';
pt(27).baseaddr   = '&FingerStrokeAssistance_P.DiscreteFilter_NumCoef[0]';
pt(27).dtname     = 'real_T';



  
pt(28).blockname = 'HL Controller/Discrete Filter';
pt(28).paramname = 'Denominator';
pt(28).class     = 'vector';
pt(28).nrows     = 1;
pt(28).ncols     = 2;
pt(28).subsource = 'SS_DOUBLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';
pt(28).isStruct  = false;
pt(28).symbol     = 'FingerStrokeAssistance_P.DiscreteFilter_DenCoef';
pt(28).baseaddr   = '&FingerStrokeAssistance_P.DiscreteFilter_DenCoef[0]';
pt(28).dtname     = 'real_T';



  
pt(29).blockname = 'HL Controller/Discrete Filter';
pt(29).paramname = 'InitialStates';
pt(29).class     = 'scalar';
pt(29).nrows     = 1;
pt(29).ncols     = 1;
pt(29).subsource = 'SS_DOUBLE';
pt(29).ndims     = '2';
pt(29).size      = '[]';
pt(29).isStruct  = false;
pt(29).symbol     = 'FingerStrokeAssistance_P.DiscreteFilter_InitialStates';
pt(29).baseaddr   = '&FingerStrokeAssistance_P.DiscreteFilter_InitialStates';
pt(29).dtname     = 'real_T';



  
pt(30).blockname = 'LL Controller/Discrete PID Controller';
pt(30).paramname = 'P';
pt(30).class     = 'scalar';
pt(30).nrows     = 1;
pt(30).ncols     = 1;
pt(30).subsource = 'SS_DOUBLE';
pt(30).ndims     = '2';
pt(30).size      = '[]';
pt(30).isStruct  = false;
pt(30).symbol     = 'FingerStrokeAssistance_P.DiscretePIDController_P';
pt(30).baseaddr   = '&FingerStrokeAssistance_P.DiscretePIDController_P';
pt(30).dtname     = 'real_T';



  
pt(31).blockname = 'LL Controller/Discrete PID Controller';
pt(31).paramname = 'I';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_DOUBLE';
pt(31).ndims     = '2';
pt(31).size      = '[]';
pt(31).isStruct  = false;
pt(31).symbol     = 'FingerStrokeAssistance_P.DiscretePIDController_I';
pt(31).baseaddr   = '&FingerStrokeAssistance_P.DiscretePIDController_I';
pt(31).dtname     = 'real_T';



  
pt(32).blockname = 'LL Controller/Discrete PID Controller';
pt(32).paramname = 'D';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_DOUBLE';
pt(32).ndims     = '2';
pt(32).size      = '[]';
pt(32).isStruct  = false;
pt(32).symbol     = 'FingerStrokeAssistance_P.DiscretePIDController_D';
pt(32).baseaddr   = '&FingerStrokeAssistance_P.DiscretePIDController_D';
pt(32).dtname     = 'real_T';



  
pt(33).blockname = 'LL Controller/Discrete PID Controller';
pt(33).paramname = 'N';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_DOUBLE';
pt(33).ndims     = '2';
pt(33).size      = '[]';
pt(33).isStruct  = false;
pt(33).symbol     = 'FingerStrokeAssistance_P.DiscretePIDController_N';
pt(33).baseaddr   = '&FingerStrokeAssistance_P.DiscretePIDController_N';
pt(33).dtname     = 'real_T';



  
pt(34).blockname = 'LL Controller/Gain';
pt(34).paramname = 'Gain';
pt(34).class     = 'scalar';
pt(34).nrows     = 1;
pt(34).ncols     = 1;
pt(34).subsource = 'SS_DOUBLE';
pt(34).ndims     = '2';
pt(34).size      = '[]';
pt(34).isStruct  = false;
pt(34).symbol     = 'FingerStrokeAssistance_P.Gain_Gain_o';
pt(34).baseaddr   = '&FingerStrokeAssistance_P.Gain_Gain_o';
pt(34).dtname     = 'real_T';



  
pt(35).blockname = 'Robot/Discrete Derivative';
pt(35).paramname = 'ICPrevScaledInput';
pt(35).class     = 'scalar';
pt(35).nrows     = 1;
pt(35).ncols     = 1;
pt(35).subsource = 'SS_DOUBLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';
pt(35).isStruct  = false;
pt(35).symbol     = 'FingerStrokeAssistance_P.DiscreteDerivative_ICPrevScaled';
pt(35).baseaddr   = '&FingerStrokeAssistance_P.DiscreteDerivative_ICPrevScaled';
pt(35).dtname     = 'real_T';



  
pt(36).blockname = 'Robot/Gain';
pt(36).paramname = 'Gain';
pt(36).class     = 'scalar';
pt(36).nrows     = 1;
pt(36).ncols     = 1;
pt(36).subsource = 'SS_DOUBLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';
pt(36).isStruct  = false;
pt(36).symbol     = 'FingerStrokeAssistance_P.Gain_Gain';
pt(36).baseaddr   = '&FingerStrokeAssistance_P.Gain_Gain';
pt(36).dtname     = 'real_T';



  
pt(37).blockname = 'Robot/PCI 6221 ENC ';
pt(37).paramname = 'P1';
pt(37).class     = 'scalar';
pt(37).nrows     = 1;
pt(37).ncols     = 1;
pt(37).subsource = 'SS_DOUBLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';
pt(37).isStruct  = false;
pt(37).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P1';
pt(37).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P1';
pt(37).dtname     = 'real_T';



  
pt(38).blockname = 'Robot/PCI 6221 ENC ';
pt(38).paramname = 'P2';
pt(38).class     = 'scalar';
pt(38).nrows     = 1;
pt(38).ncols     = 1;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';
pt(38).isStruct  = false;
pt(38).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P2';
pt(38).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P2';
pt(38).dtname     = 'real_T';



  
pt(39).blockname = 'Robot/PCI 6221 ENC ';
pt(39).paramname = 'P3';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_DOUBLE';
pt(39).ndims     = '2';
pt(39).size      = '[]';
pt(39).isStruct  = false;
pt(39).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P3';
pt(39).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P3';
pt(39).dtname     = 'real_T';



  
pt(40).blockname = 'Robot/PCI 6221 ENC ';
pt(40).paramname = 'P4';
pt(40).class     = 'scalar';
pt(40).nrows     = 1;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_DOUBLE';
pt(40).ndims     = '2';
pt(40).size      = '[]';
pt(40).isStruct  = false;
pt(40).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P4';
pt(40).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P4';
pt(40).dtname     = 'real_T';



  
pt(41).blockname = 'Robot/PCI 6221 ENC ';
pt(41).paramname = 'P5';
pt(41).class     = 'scalar';
pt(41).nrows     = 1;
pt(41).ncols     = 1;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';
pt(41).isStruct  = false;
pt(41).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P5';
pt(41).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P5';
pt(41).dtname     = 'real_T';



  
pt(42).blockname = 'Robot/PCI 6221 ENC ';
pt(42).paramname = 'P6';
pt(42).class     = 'scalar';
pt(42).nrows     = 1;
pt(42).ncols     = 1;
pt(42).subsource = 'SS_DOUBLE';
pt(42).ndims     = '2';
pt(42).size      = '[]';
pt(42).isStruct  = false;
pt(42).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P6';
pt(42).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P6';
pt(42).dtname     = 'real_T';



  
pt(43).blockname = 'Robot/PCI 6221 ENC ';
pt(43).paramname = 'P7';
pt(43).class     = 'scalar';
pt(43).nrows     = 1;
pt(43).ncols     = 1;
pt(43).subsource = 'SS_DOUBLE';
pt(43).ndims     = '2';
pt(43).size      = '[]';
pt(43).isStruct  = false;
pt(43).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P7';
pt(43).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P7';
pt(43).dtname     = 'real_T';



  
pt(44).blockname = 'Robot/PCI 6221 ENC ';
pt(44).paramname = 'P8';
pt(44).class     = 'scalar';
pt(44).nrows     = 1;
pt(44).ncols     = 1;
pt(44).subsource = 'SS_DOUBLE';
pt(44).ndims     = '2';
pt(44).size      = '[]';
pt(44).isStruct  = false;
pt(44).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P8';
pt(44).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P8';
pt(44).dtname     = 'real_T';



  
pt(45).blockname = 'Robot/PCI 6221 ENC ';
pt(45).paramname = 'P9';
pt(45).class     = 'scalar';
pt(45).nrows     = 1;
pt(45).ncols     = 1;
pt(45).subsource = 'SS_DOUBLE';
pt(45).ndims     = '2';
pt(45).size      = '[]';
pt(45).isStruct  = false;
pt(45).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P9';
pt(45).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P9';
pt(45).dtname     = 'real_T';



  
pt(46).blockname = 'Robot/PCI 6221 ENC ';
pt(46).paramname = 'P10';
pt(46).class     = 'scalar';
pt(46).nrows     = 1;
pt(46).ncols     = 1;
pt(46).subsource = 'SS_DOUBLE';
pt(46).ndims     = '2';
pt(46).size      = '[]';
pt(46).isStruct  = false;
pt(46).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC_P10';
pt(46).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC_P10';
pt(46).dtname     = 'real_T';



  
pt(47).blockname = 'Robot/PCI 6221 ENC 1';
pt(47).paramname = 'P1';
pt(47).class     = 'scalar';
pt(47).nrows     = 1;
pt(47).ncols     = 1;
pt(47).subsource = 'SS_DOUBLE';
pt(47).ndims     = '2';
pt(47).size      = '[]';
pt(47).isStruct  = false;
pt(47).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P1';
pt(47).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P1';
pt(47).dtname     = 'real_T';



  
pt(48).blockname = 'Robot/PCI 6221 ENC 1';
pt(48).paramname = 'P2';
pt(48).class     = 'scalar';
pt(48).nrows     = 1;
pt(48).ncols     = 1;
pt(48).subsource = 'SS_DOUBLE';
pt(48).ndims     = '2';
pt(48).size      = '[]';
pt(48).isStruct  = false;
pt(48).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P2';
pt(48).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P2';
pt(48).dtname     = 'real_T';



  
pt(49).blockname = 'Robot/PCI 6221 ENC 1';
pt(49).paramname = 'P3';
pt(49).class     = 'scalar';
pt(49).nrows     = 1;
pt(49).ncols     = 1;
pt(49).subsource = 'SS_DOUBLE';
pt(49).ndims     = '2';
pt(49).size      = '[]';
pt(49).isStruct  = false;
pt(49).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P3';
pt(49).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P3';
pt(49).dtname     = 'real_T';



  
pt(50).blockname = 'Robot/PCI 6221 ENC 1';
pt(50).paramname = 'P4';
pt(50).class     = 'scalar';
pt(50).nrows     = 1;
pt(50).ncols     = 1;
pt(50).subsource = 'SS_DOUBLE';
pt(50).ndims     = '2';
pt(50).size      = '[]';
pt(50).isStruct  = false;
pt(50).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P4';
pt(50).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P4';
pt(50).dtname     = 'real_T';



  
pt(51).blockname = 'Robot/PCI 6221 ENC 1';
pt(51).paramname = 'P5';
pt(51).class     = 'scalar';
pt(51).nrows     = 1;
pt(51).ncols     = 1;
pt(51).subsource = 'SS_DOUBLE';
pt(51).ndims     = '2';
pt(51).size      = '[]';
pt(51).isStruct  = false;
pt(51).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P5';
pt(51).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P5';
pt(51).dtname     = 'real_T';



  
pt(52).blockname = 'Robot/PCI 6221 ENC 1';
pt(52).paramname = 'P6';
pt(52).class     = 'scalar';
pt(52).nrows     = 1;
pt(52).ncols     = 1;
pt(52).subsource = 'SS_DOUBLE';
pt(52).ndims     = '2';
pt(52).size      = '[]';
pt(52).isStruct  = false;
pt(52).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P6';
pt(52).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P6';
pt(52).dtname     = 'real_T';



  
pt(53).blockname = 'Robot/PCI 6221 ENC 1';
pt(53).paramname = 'P7';
pt(53).class     = 'scalar';
pt(53).nrows     = 1;
pt(53).ncols     = 1;
pt(53).subsource = 'SS_DOUBLE';
pt(53).ndims     = '2';
pt(53).size      = '[]';
pt(53).isStruct  = false;
pt(53).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P7';
pt(53).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P7';
pt(53).dtname     = 'real_T';



  
pt(54).blockname = 'Robot/PCI 6221 ENC 1';
pt(54).paramname = 'P8';
pt(54).class     = 'scalar';
pt(54).nrows     = 1;
pt(54).ncols     = 1;
pt(54).subsource = 'SS_DOUBLE';
pt(54).ndims     = '2';
pt(54).size      = '[]';
pt(54).isStruct  = false;
pt(54).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P8';
pt(54).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P8';
pt(54).dtname     = 'real_T';



  
pt(55).blockname = 'Robot/PCI 6221 ENC 1';
pt(55).paramname = 'P9';
pt(55).class     = 'scalar';
pt(55).nrows     = 1;
pt(55).ncols     = 1;
pt(55).subsource = 'SS_DOUBLE';
pt(55).ndims     = '2';
pt(55).size      = '[]';
pt(55).isStruct  = false;
pt(55).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P9';
pt(55).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P9';
pt(55).dtname     = 'real_T';



  
pt(56).blockname = 'Robot/PCI 6221 ENC 1';
pt(56).paramname = 'P10';
pt(56).class     = 'scalar';
pt(56).nrows     = 1;
pt(56).ncols     = 1;
pt(56).subsource = 'SS_DOUBLE';
pt(56).ndims     = '2';
pt(56).size      = '[]';
pt(56).isStruct  = false;
pt(56).symbol     = 'FingerStrokeAssistance_P.PCI6221ENC1_P10';
pt(56).baseaddr   = '&FingerStrokeAssistance_P.PCI6221ENC1_P10';
pt(56).dtname     = 'real_T';



  
pt(57).blockname = 'Robot/PCI-6221 AD1';
pt(57).paramname = 'P1';
pt(57).class     = 'vector';
pt(57).nrows     = 1;
pt(57).ncols     = 8;
pt(57).subsource = 'SS_DOUBLE';
pt(57).ndims     = '2';
pt(57).size      = '[]';
pt(57).isStruct  = false;
pt(57).symbol     = 'FingerStrokeAssistance_P.PCI6221AD1_P1';
pt(57).baseaddr   = '&FingerStrokeAssistance_P.PCI6221AD1_P1[0]';
pt(57).dtname     = 'real_T';



  
pt(58).blockname = 'Robot/PCI-6221 AD1';
pt(58).paramname = 'P2';
pt(58).class     = 'vector';
pt(58).nrows     = 1;
pt(58).ncols     = 8;
pt(58).subsource = 'SS_DOUBLE';
pt(58).ndims     = '2';
pt(58).size      = '[]';
pt(58).isStruct  = false;
pt(58).symbol     = 'FingerStrokeAssistance_P.PCI6221AD1_P2';
pt(58).baseaddr   = '&FingerStrokeAssistance_P.PCI6221AD1_P2[0]';
pt(58).dtname     = 'real_T';



  
pt(59).blockname = 'Robot/PCI-6221 AD1';
pt(59).paramname = 'P3';
pt(59).class     = 'vector';
pt(59).nrows     = 1;
pt(59).ncols     = 8;
pt(59).subsource = 'SS_DOUBLE';
pt(59).ndims     = '2';
pt(59).size      = '[]';
pt(59).isStruct  = false;
pt(59).symbol     = 'FingerStrokeAssistance_P.PCI6221AD1_P3';
pt(59).baseaddr   = '&FingerStrokeAssistance_P.PCI6221AD1_P3[0]';
pt(59).dtname     = 'real_T';



  
pt(60).blockname = 'Robot/PCI-6221 AD1';
pt(60).paramname = 'P4';
pt(60).class     = 'scalar';
pt(60).nrows     = 1;
pt(60).ncols     = 1;
pt(60).subsource = 'SS_DOUBLE';
pt(60).ndims     = '2';
pt(60).size      = '[]';
pt(60).isStruct  = false;
pt(60).symbol     = 'FingerStrokeAssistance_P.PCI6221AD1_P4';
pt(60).baseaddr   = '&FingerStrokeAssistance_P.PCI6221AD1_P4';
pt(60).dtname     = 'real_T';



  
pt(61).blockname = 'Robot/PCI-6221 AD1';
pt(61).paramname = 'P5';
pt(61).class     = 'scalar';
pt(61).nrows     = 1;
pt(61).ncols     = 1;
pt(61).subsource = 'SS_DOUBLE';
pt(61).ndims     = '2';
pt(61).size      = '[]';
pt(61).isStruct  = false;
pt(61).symbol     = 'FingerStrokeAssistance_P.PCI6221AD1_P5';
pt(61).baseaddr   = '&FingerStrokeAssistance_P.PCI6221AD1_P5';
pt(61).dtname     = 'real_T';



  
pt(62).blockname = 'Robot/PCI-6221 AD1';
pt(62).paramname = 'P6';
pt(62).class     = 'scalar';
pt(62).nrows     = 1;
pt(62).ncols     = 1;
pt(62).subsource = 'SS_DOUBLE';
pt(62).ndims     = '2';
pt(62).size      = '[]';
pt(62).isStruct  = false;
pt(62).symbol     = 'FingerStrokeAssistance_P.PCI6221AD1_P6';
pt(62).baseaddr   = '&FingerStrokeAssistance_P.PCI6221AD1_P6';
pt(62).dtname     = 'real_T';



  
pt(63).blockname = 'Robot/PCI-6221 AD1';
pt(63).paramname = 'P7';
pt(63).class     = 'scalar';
pt(63).nrows     = 1;
pt(63).ncols     = 1;
pt(63).subsource = 'SS_DOUBLE';
pt(63).ndims     = '2';
pt(63).size      = '[]';
pt(63).isStruct  = false;
pt(63).symbol     = 'FingerStrokeAssistance_P.PCI6221AD1_P7';
pt(63).baseaddr   = '&FingerStrokeAssistance_P.PCI6221AD1_P7';
pt(63).dtname     = 'real_T';



  
pt(64).blockname = 'Robot/PCI-6221 DA';
pt(64).paramname = 'P1';
pt(64).class     = 'vector';
pt(64).nrows     = 1;
pt(64).ncols     = 2;
pt(64).subsource = 'SS_DOUBLE';
pt(64).ndims     = '2';
pt(64).size      = '[]';
pt(64).isStruct  = false;
pt(64).symbol     = 'FingerStrokeAssistance_P.PCI6221DA_P1';
pt(64).baseaddr   = '&FingerStrokeAssistance_P.PCI6221DA_P1[0]';
pt(64).dtname     = 'real_T';



  
pt(65).blockname = 'Robot/PCI-6221 DA';
pt(65).paramname = 'P2';
pt(65).class     = 'vector';
pt(65).nrows     = 1;
pt(65).ncols     = 2;
pt(65).subsource = 'SS_DOUBLE';
pt(65).ndims     = '2';
pt(65).size      = '[]';
pt(65).isStruct  = false;
pt(65).symbol     = 'FingerStrokeAssistance_P.PCI6221DA_P2';
pt(65).baseaddr   = '&FingerStrokeAssistance_P.PCI6221DA_P2[0]';
pt(65).dtname     = 'real_T';



  
pt(66).blockname = 'Robot/PCI-6221 DA';
pt(66).paramname = 'P3';
pt(66).class     = 'vector';
pt(66).nrows     = 1;
pt(66).ncols     = 2;
pt(66).subsource = 'SS_DOUBLE';
pt(66).ndims     = '2';
pt(66).size      = '[]';
pt(66).isStruct  = false;
pt(66).symbol     = 'FingerStrokeAssistance_P.PCI6221DA_P3';
pt(66).baseaddr   = '&FingerStrokeAssistance_P.PCI6221DA_P3[0]';
pt(66).dtname     = 'real_T';



  
pt(67).blockname = 'Robot/PCI-6221 DA';
pt(67).paramname = 'P4';
pt(67).class     = 'vector';
pt(67).nrows     = 1;
pt(67).ncols     = 2;
pt(67).subsource = 'SS_DOUBLE';
pt(67).ndims     = '2';
pt(67).size      = '[]';
pt(67).isStruct  = false;
pt(67).symbol     = 'FingerStrokeAssistance_P.PCI6221DA_P4';
pt(67).baseaddr   = '&FingerStrokeAssistance_P.PCI6221DA_P4[0]';
pt(67).dtname     = 'real_T';



  
pt(68).blockname = 'Robot/PCI-6221 DA';
pt(68).paramname = 'P5';
pt(68).class     = 'scalar';
pt(68).nrows     = 1;
pt(68).ncols     = 1;
pt(68).subsource = 'SS_DOUBLE';
pt(68).ndims     = '2';
pt(68).size      = '[]';
pt(68).isStruct  = false;
pt(68).symbol     = 'FingerStrokeAssistance_P.PCI6221DA_P5';
pt(68).baseaddr   = '&FingerStrokeAssistance_P.PCI6221DA_P5';
pt(68).dtname     = 'real_T';



  
pt(69).blockname = 'Robot/PCI-6221 DA';
pt(69).paramname = 'P6';
pt(69).class     = 'scalar';
pt(69).nrows     = 1;
pt(69).ncols     = 1;
pt(69).subsource = 'SS_DOUBLE';
pt(69).ndims     = '2';
pt(69).size      = '[]';
pt(69).isStruct  = false;
pt(69).symbol     = 'FingerStrokeAssistance_P.PCI6221DA_P6';
pt(69).baseaddr   = '&FingerStrokeAssistance_P.PCI6221DA_P6';
pt(69).dtname     = 'real_T';



  
pt(70).blockname = 'Robot/PCI-6221 DA';
pt(70).paramname = 'P7';
pt(70).class     = 'scalar';
pt(70).nrows     = 1;
pt(70).ncols     = 1;
pt(70).subsource = 'SS_DOUBLE';
pt(70).ndims     = '2';
pt(70).size      = '[]';
pt(70).isStruct  = false;
pt(70).symbol     = 'FingerStrokeAssistance_P.PCI6221DA_P7';
pt(70).baseaddr   = '&FingerStrokeAssistance_P.PCI6221DA_P7';
pt(70).dtname     = 'real_T';



  
pt(71).blockname = 'Robot/Unit Delay';
pt(71).paramname = 'InitialCondition';
pt(71).class     = 'scalar';
pt(71).nrows     = 1;
pt(71).ncols     = 1;
pt(71).subsource = 'SS_DOUBLE';
pt(71).ndims     = '2';
pt(71).size      = '[]';
pt(71).isStruct  = false;
pt(71).symbol     = 'FingerStrokeAssistance_P.UnitDelay_InitialCondition_e';
pt(71).baseaddr   = '&FingerStrokeAssistance_P.UnitDelay_InitialCondition_e';
pt(71).dtname     = 'real_T';



  
pt(72).blockname = 'parameters/paremeters_ must_be_one';
pt(72).paramname = 'Value';
pt(72).class     = 'scalar';
pt(72).nrows     = 1;
pt(72).ncols     = 1;
pt(72).subsource = 'SS_DOUBLE';
pt(72).ndims     = '2';
pt(72).size      = '[]';
pt(72).isStruct  = false;
pt(72).symbol     = 'FingerStrokeAssistance_P.paremeters_must_be_one_Value';
pt(72).baseaddr   = '&FingerStrokeAssistance_P.paremeters_must_be_one_Value';
pt(72).dtname     = 'real_T';



  
pt(73).blockname = 'parameters/parChangeRate';
pt(73).paramname = 'Gain';
pt(73).class     = 'scalar';
pt(73).nrows     = 1;
pt(73).ncols     = 1;
pt(73).subsource = 'SS_DOUBLE';
pt(73).ndims     = '2';
pt(73).size      = '[]';
pt(73).isStruct  = false;
pt(73).symbol     = 'FingerStrokeAssistance_P.parChangeRate_Gain';
pt(73).baseaddr   = '&FingerStrokeAssistance_P.parChangeRate_Gain';
pt(73).dtname     = 'real_T';



  
pt(74).blockname = 'parameters/parFThresh';
pt(74).paramname = 'Gain';
pt(74).class     = 'scalar';
pt(74).nrows     = 1;
pt(74).ncols     = 1;
pt(74).subsource = 'SS_DOUBLE';
pt(74).ndims     = '2';
pt(74).size      = '[]';
pt(74).isStruct  = false;
pt(74).symbol     = 'FingerStrokeAssistance_P.parFThresh_Gain';
pt(74).baseaddr   = '&FingerStrokeAssistance_P.parFThresh_Gain';
pt(74).dtname     = 'real_T';



  
pt(75).blockname = 'parameters/parFixedDur';
pt(75).paramname = 'Gain';
pt(75).class     = 'scalar';
pt(75).nrows     = 1;
pt(75).ncols     = 1;
pt(75).subsource = 'SS_DOUBLE';
pt(75).ndims     = '2';
pt(75).size      = '[]';
pt(75).isStruct  = false;
pt(75).symbol     = 'FingerStrokeAssistance_P.parFixedDur_Gain';
pt(75).baseaddr   = '&FingerStrokeAssistance_P.parFixedDur_Gain';
pt(75).dtname     = 'real_T';



  
pt(76).blockname = 'parameters/parForceTrigger';
pt(76).paramname = 'Gain';
pt(76).class     = 'scalar';
pt(76).nrows     = 1;
pt(76).ncols     = 1;
pt(76).subsource = 'SS_DOUBLE';
pt(76).ndims     = '2';
pt(76).size      = '[]';
pt(76).isStruct  = false;
pt(76).symbol     = 'FingerStrokeAssistance_P.parForceTrigger_Gain';
pt(76).baseaddr   = '&FingerStrokeAssistance_P.parForceTrigger_Gain';
pt(76).dtname     = 'real_T';



  
pt(77).blockname = 'parameters/parKd1';
pt(77).paramname = 'Gain';
pt(77).class     = 'scalar';
pt(77).nrows     = 1;
pt(77).ncols     = 1;
pt(77).subsource = 'SS_DOUBLE';
pt(77).ndims     = '2';
pt(77).size      = '[]';
pt(77).isStruct  = false;
pt(77).symbol     = 'FingerStrokeAssistance_P.parKd1_Gain';
pt(77).baseaddr   = '&FingerStrokeAssistance_P.parKd1_Gain';
pt(77).dtname     = 'real_T';



  
pt(78).blockname = 'parameters/parKd2';
pt(78).paramname = 'Gain';
pt(78).class     = 'scalar';
pt(78).nrows     = 1;
pt(78).ncols     = 1;
pt(78).subsource = 'SS_DOUBLE';
pt(78).ndims     = '2';
pt(78).size      = '[]';
pt(78).isStruct  = false;
pt(78).symbol     = 'FingerStrokeAssistance_P.parKd2_Gain';
pt(78).baseaddr   = '&FingerStrokeAssistance_P.parKd2_Gain';
pt(78).dtname     = 'real_T';



  
pt(79).blockname = 'parameters/parKdV1';
pt(79).paramname = 'Gain';
pt(79).class     = 'scalar';
pt(79).nrows     = 1;
pt(79).ncols     = 1;
pt(79).subsource = 'SS_DOUBLE';
pt(79).ndims     = '2';
pt(79).size      = '[]';
pt(79).isStruct  = false;
pt(79).symbol     = 'FingerStrokeAssistance_P.parKdV1_Gain';
pt(79).baseaddr   = '&FingerStrokeAssistance_P.parKdV1_Gain';
pt(79).dtname     = 'real_T';



  
pt(80).blockname = 'parameters/parKdV2';
pt(80).paramname = 'Gain';
pt(80).class     = 'scalar';
pt(80).nrows     = 1;
pt(80).ncols     = 1;
pt(80).subsource = 'SS_DOUBLE';
pt(80).ndims     = '2';
pt(80).size      = '[]';
pt(80).isStruct  = false;
pt(80).symbol     = 'FingerStrokeAssistance_P.parKdV2_Gain';
pt(80).baseaddr   = '&FingerStrokeAssistance_P.parKdV2_Gain';
pt(80).dtname     = 'real_T';



  
pt(81).blockname = 'parameters/parKp1';
pt(81).paramname = 'Gain';
pt(81).class     = 'scalar';
pt(81).nrows     = 1;
pt(81).ncols     = 1;
pt(81).subsource = 'SS_DOUBLE';
pt(81).ndims     = '2';
pt(81).size      = '[]';
pt(81).isStruct  = false;
pt(81).symbol     = 'FingerStrokeAssistance_P.parKp1_Gain';
pt(81).baseaddr   = '&FingerStrokeAssistance_P.parKp1_Gain';
pt(81).dtname     = 'real_T';



  
pt(82).blockname = 'parameters/parKp2';
pt(82).paramname = 'Gain';
pt(82).class     = 'scalar';
pt(82).nrows     = 1;
pt(82).ncols     = 1;
pt(82).subsource = 'SS_DOUBLE';
pt(82).ndims     = '2';
pt(82).size      = '[]';
pt(82).isStruct  = false;
pt(82).symbol     = 'FingerStrokeAssistance_P.parKp2_Gain';
pt(82).baseaddr   = '&FingerStrokeAssistance_P.parKp2_Gain';
pt(82).dtname     = 'real_T';



  
pt(83).blockname = 'parameters/parLeftMode';
pt(83).paramname = 'Gain';
pt(83).class     = 'scalar';
pt(83).nrows     = 1;
pt(83).ncols     = 1;
pt(83).subsource = 'SS_DOUBLE';
pt(83).ndims     = '2';
pt(83).size      = '[]';
pt(83).isStruct  = false;
pt(83).symbol     = 'FingerStrokeAssistance_P.parLeftMode_Gain';
pt(83).baseaddr   = '&FingerStrokeAssistance_P.parLeftMode_Gain';
pt(83).dtname     = 'real_T';



  
pt(84).blockname = 'parameters/parMarker';
pt(84).paramname = 'Gain';
pt(84).class     = 'scalar';
pt(84).nrows     = 1;
pt(84).ncols     = 1;
pt(84).subsource = 'SS_DOUBLE';
pt(84).ndims     = '2';
pt(84).size      = '[]';
pt(84).isStruct  = false;
pt(84).symbol     = 'FingerStrokeAssistance_P.parMarker_Gain';
pt(84).baseaddr   = '&FingerStrokeAssistance_P.parMarker_Gain';
pt(84).dtname     = 'real_T';



  
pt(85).blockname = 'parameters/parMaxTrajDur';
pt(85).paramname = 'Gain';
pt(85).class     = 'scalar';
pt(85).nrows     = 1;
pt(85).ncols     = 1;
pt(85).subsource = 'SS_DOUBLE';
pt(85).ndims     = '2';
pt(85).size      = '[]';
pt(85).isStruct  = false;
pt(85).symbol     = 'FingerStrokeAssistance_P.parMaxTrajDur_Gain';
pt(85).baseaddr   = '&FingerStrokeAssistance_P.parMaxTrajDur_Gain';
pt(85).dtname     = 'real_T';



  
pt(86).blockname = 'parameters/parPStop';
pt(86).paramname = 'Gain';
pt(86).class     = 'scalar';
pt(86).nrows     = 1;
pt(86).ncols     = 1;
pt(86).subsource = 'SS_DOUBLE';
pt(86).ndims     = '2';
pt(86).size      = '[]';
pt(86).isStruct  = false;
pt(86).symbol     = 'FingerStrokeAssistance_P.parPStop_Gain';
pt(86).baseaddr   = '&FingerStrokeAssistance_P.parPStop_Gain';
pt(86).dtname     = 'real_T';



  
pt(87).blockname = 'parameters/parTrajMode';
pt(87).paramname = 'Gain';
pt(87).class     = 'scalar';
pt(87).nrows     = 1;
pt(87).ncols     = 1;
pt(87).subsource = 'SS_DOUBLE';
pt(87).ndims     = '2';
pt(87).size      = '[]';
pt(87).isStruct  = false;
pt(87).symbol     = 'FingerStrokeAssistance_P.parTrajMode_Gain';
pt(87).baseaddr   = '&FingerStrokeAssistance_P.parTrajMode_Gain';
pt(87).dtname     = 'real_T';



  
pt(88).blockname = 'parameters/parVThresh';
pt(88).paramname = 'Gain';
pt(88).class     = 'scalar';
pt(88).nrows     = 1;
pt(88).ncols     = 1;
pt(88).subsource = 'SS_DOUBLE';
pt(88).ndims     = '2';
pt(88).size      = '[]';
pt(88).isStruct  = false;
pt(88).symbol     = 'FingerStrokeAssistance_P.parVThresh_Gain';
pt(88).baseaddr   = '&FingerStrokeAssistance_P.parVThresh_Gain';
pt(88).dtname     = 'real_T';



  
pt(89).blockname = 'parameters/parWiggleAmp';
pt(89).paramname = 'Gain';
pt(89).class     = 'scalar';
pt(89).nrows     = 1;
pt(89).ncols     = 1;
pt(89).subsource = 'SS_DOUBLE';
pt(89).ndims     = '2';
pt(89).size      = '[]';
pt(89).isStruct  = false;
pt(89).symbol     = 'FingerStrokeAssistance_P.parWiggleAmp_Gain';
pt(89).baseaddr   = '&FingerStrokeAssistance_P.parWiggleAmp_Gain';
pt(89).dtname     = 'real_T';



  
pt(90).blockname = 'parameters/Saturation';
pt(90).paramname = 'UpperLimit';
pt(90).class     = 'scalar';
pt(90).nrows     = 1;
pt(90).ncols     = 1;
pt(90).subsource = 'SS_DOUBLE';
pt(90).ndims     = '2';
pt(90).size      = '[]';
pt(90).isStruct  = false;
pt(90).symbol     = 'FingerStrokeAssistance_P.Saturation_UpperSat';
pt(90).baseaddr   = '&FingerStrokeAssistance_P.Saturation_UpperSat';
pt(90).dtname     = 'real_T';



  
pt(91).blockname = 'parameters/Saturation';
pt(91).paramname = 'LowerLimit';
pt(91).class     = 'scalar';
pt(91).nrows     = 1;
pt(91).ncols     = 1;
pt(91).subsource = 'SS_DOUBLE';
pt(91).ndims     = '2';
pt(91).size      = '[]';
pt(91).isStruct  = false;
pt(91).symbol     = 'FingerStrokeAssistance_P.Saturation_LowerSat';
pt(91).baseaddr   = '&FingerStrokeAssistance_P.Saturation_LowerSat';
pt(91).dtname     = 'real_T';



  
pt(92).blockname = 'parameters/Saturation1';
pt(92).paramname = 'UpperLimit';
pt(92).class     = 'scalar';
pt(92).nrows     = 1;
pt(92).ncols     = 1;
pt(92).subsource = 'SS_DOUBLE';
pt(92).ndims     = '2';
pt(92).size      = '[]';
pt(92).isStruct  = false;
pt(92).symbol     = 'FingerStrokeAssistance_P.Saturation1_UpperSat';
pt(92).baseaddr   = '&FingerStrokeAssistance_P.Saturation1_UpperSat';
pt(92).dtname     = 'real_T';



  
pt(93).blockname = 'parameters/Saturation1';
pt(93).paramname = 'LowerLimit';
pt(93).class     = 'scalar';
pt(93).nrows     = 1;
pt(93).ncols     = 1;
pt(93).subsource = 'SS_DOUBLE';
pt(93).ndims     = '2';
pt(93).size      = '[]';
pt(93).isStruct  = false;
pt(93).symbol     = 'FingerStrokeAssistance_P.Saturation1_LowerSat';
pt(93).baseaddr   = '&FingerStrokeAssistance_P.Saturation1_LowerSat';
pt(93).dtname     = 'real_T';



  
pt(94).blockname = 'parameters/Saturation2';
pt(94).paramname = 'UpperLimit';
pt(94).class     = 'scalar';
pt(94).nrows     = 1;
pt(94).ncols     = 1;
pt(94).subsource = 'SS_DOUBLE';
pt(94).ndims     = '2';
pt(94).size      = '[]';
pt(94).isStruct  = false;
pt(94).symbol     = 'FingerStrokeAssistance_P.Saturation2_UpperSat';
pt(94).baseaddr   = '&FingerStrokeAssistance_P.Saturation2_UpperSat';
pt(94).dtname     = 'real_T';



  
pt(95).blockname = 'parameters/Saturation2';
pt(95).paramname = 'LowerLimit';
pt(95).class     = 'scalar';
pt(95).nrows     = 1;
pt(95).ncols     = 1;
pt(95).subsource = 'SS_DOUBLE';
pt(95).ndims     = '2';
pt(95).size      = '[]';
pt(95).isStruct  = false;
pt(95).symbol     = 'FingerStrokeAssistance_P.Saturation2_LowerSat';
pt(95).baseaddr   = '&FingerStrokeAssistance_P.Saturation2_LowerSat';
pt(95).dtname     = 'real_T';



  
pt(96).blockname = 'signals/sigGravAccel';
pt(96).paramname = 'Gain';
pt(96).class     = 'scalar';
pt(96).nrows     = 1;
pt(96).ncols     = 1;
pt(96).subsource = 'SS_DOUBLE';
pt(96).ndims     = '2';
pt(96).size      = '[]';
pt(96).isStruct  = false;
pt(96).symbol     = 'FingerStrokeAssistance_P.sigGravAccel_Gain';
pt(96).baseaddr   = '&FingerStrokeAssistance_P.sigGravAccel_Gain';
pt(96).dtname     = 'real_T';



  
pt(97).blockname = 'signals/sigTargetTime';
pt(97).paramname = 'Gain';
pt(97).class     = 'scalar';
pt(97).nrows     = 1;
pt(97).ncols     = 1;
pt(97).subsource = 'SS_DOUBLE';
pt(97).ndims     = '2';
pt(97).size      = '[]';
pt(97).isStruct  = false;
pt(97).symbol     = 'FingerStrokeAssistance_P.sigTargetTime_Gain';
pt(97).baseaddr   = '&FingerStrokeAssistance_P.sigTargetTime_Gain';
pt(97).dtname     = 'real_T';



  
pt(98).blockname = 'LL Controller/Discrete PID Controller/Filter';
pt(98).paramname = 'gainval';
pt(98).class     = 'scalar';
pt(98).nrows     = 1;
pt(98).ncols     = 1;
pt(98).subsource = 'SS_DOUBLE';
pt(98).ndims     = '2';
pt(98).size      = '[]';
pt(98).isStruct  = false;
pt(98).symbol     = 'FingerStrokeAssistance_P.Filter_gainval';
pt(98).baseaddr   = '&FingerStrokeAssistance_P.Filter_gainval';
pt(98).dtname     = 'real_T';



  
pt(99).blockname = 'LL Controller/Discrete PID Controller/Filter';
pt(99).paramname = 'InitialCondition';
pt(99).class     = 'scalar';
pt(99).nrows     = 1;
pt(99).ncols     = 1;
pt(99).subsource = 'SS_DOUBLE';
pt(99).ndims     = '2';
pt(99).size      = '[]';
pt(99).isStruct  = false;
pt(99).symbol     = 'FingerStrokeAssistance_P.Filter_IC';
pt(99).baseaddr   = '&FingerStrokeAssistance_P.Filter_IC';
pt(99).dtname     = 'real_T';



  
pt(100).blockname = 'LL Controller/Discrete PID Controller/Integrator';
pt(100).paramname = 'gainval';
pt(100).class     = 'scalar';
pt(100).nrows     = 1;
pt(100).ncols     = 1;
pt(100).subsource = 'SS_DOUBLE';
pt(100).ndims     = '2';
pt(100).size      = '[]';
pt(100).isStruct  = false;
pt(100).symbol     = 'FingerStrokeAssistance_P.Integrator_gainval';
pt(100).baseaddr   = '&FingerStrokeAssistance_P.Integrator_gainval';
pt(100).dtname     = 'real_T';



  
pt(101).blockname = 'LL Controller/Discrete PID Controller/Integrator';
pt(101).paramname = 'InitialCondition';
pt(101).class     = 'scalar';
pt(101).nrows     = 1;
pt(101).ncols     = 1;
pt(101).subsource = 'SS_DOUBLE';
pt(101).ndims     = '2';
pt(101).size      = '[]';
pt(101).isStruct  = false;
pt(101).symbol     = 'FingerStrokeAssistance_P.Integrator_IC';
pt(101).baseaddr   = '&FingerStrokeAssistance_P.Integrator_IC';
pt(101).dtname     = 'real_T';



  
pt(102).blockname = 'Robot/Discrete Derivative/TSamp';
pt(102).paramname = 'WtEt';
pt(102).class     = 'scalar';
pt(102).nrows     = 1;
pt(102).ncols     = 1;
pt(102).subsource = 'SS_DOUBLE';
pt(102).ndims     = '2';
pt(102).size      = '[]';
pt(102).isStruct  = false;
pt(102).symbol     = 'FingerStrokeAssistance_P.TSamp_WtEt';
pt(102).baseaddr   = '&FingerStrokeAssistance_P.TSamp_WtEt';
pt(102).dtname     = 'real_T';



  
pt(103).blockname = 'Robot/Triggered Subsystem/Out1';
pt(103).paramname = 'InitialOutput';
pt(103).class     = 'scalar';
pt(103).nrows     = 1;
pt(103).ncols     = 1;
pt(103).subsource = 'SS_DOUBLE';
pt(103).ndims     = '2';
pt(103).size      = '[]';
pt(103).isStruct  = false;
pt(103).symbol     = 'FingerStrokeAssistance_P.Out1_Y0';
pt(103).baseaddr   = '&FingerStrokeAssistance_P.Out1_Y0';
pt(103).dtname     = 'real_T';



  
pt(104).blockname = 'Robot/filtered force output/Memory';
pt(104).paramname = 'X0';
pt(104).class     = 'scalar';
pt(104).nrows     = 1;
pt(104).ncols     = 1;
pt(104).subsource = 'SS_DOUBLE';
pt(104).ndims     = '2';
pt(104).size      = '[]';
pt(104).isStruct  = false;
pt(104).symbol     = 'FingerStrokeAssistance_P.Memory_X0';
pt(104).baseaddr   = '&FingerStrokeAssistance_P.Memory_X0';
pt(104).dtname     = 'real_T';



  
pt(105).blockname = 'Robot/filtered force output/Memory1';
pt(105).paramname = 'X0';
pt(105).class     = 'scalar';
pt(105).nrows     = 1;
pt(105).ncols     = 1;
pt(105).subsource = 'SS_DOUBLE';
pt(105).ndims     = '2';
pt(105).size      = '[]';
pt(105).isStruct  = false;
pt(105).symbol     = 'FingerStrokeAssistance_P.Memory1_X0';
pt(105).baseaddr   = '&FingerStrokeAssistance_P.Memory1_X0';
pt(105).dtname     = 'real_T';



  
pt(106).blockname = 'Robot/gravDir/Constant';
pt(106).paramname = 'Value';
pt(106).class     = 'scalar';
pt(106).nrows     = 1;
pt(106).ncols     = 1;
pt(106).subsource = 'SS_DOUBLE';
pt(106).ndims     = '2';
pt(106).size      = '[]';
pt(106).isStruct  = false;
pt(106).symbol     = 'FingerStrokeAssistance_P.Constant_Value';
pt(106).baseaddr   = '&FingerStrokeAssistance_P.Constant_Value';
pt(106).dtname     = 'real_T';



  
pt(107).blockname = 'Robot/gravDir/gain';
pt(107).paramname = 'Gain';
pt(107).class     = 'scalar';
pt(107).nrows     = 1;
pt(107).ncols     = 1;
pt(107).subsource = 'SS_DOUBLE';
pt(107).ndims     = '2';
pt(107).size      = '[]';
pt(107).isStruct  = false;
pt(107).symbol     = 'FingerStrokeAssistance_P.gain_Gain';
pt(107).baseaddr   = '&FingerStrokeAssistance_P.gain_Gain';
pt(107).dtname     = 'real_T';



  
pt(108).blockname = 'parameters/gain transition/Memory';
pt(108).paramname = 'X0';
pt(108).class     = 'vector';
pt(108).nrows     = 1;
pt(108).ncols     = 4;
pt(108).subsource = 'SS_DOUBLE';
pt(108).ndims     = '2';
pt(108).size      = '[]';
pt(108).isStruct  = false;
pt(108).symbol     = 'FingerStrokeAssistance_P.Memory_X0_g';
pt(108).baseaddr   = '&FingerStrokeAssistance_P.Memory_X0_g[0]';
pt(108).dtname     = 'real_T';



  
pt(109).blockname = 'parameters/gain transition1/Memory';
pt(109).paramname = 'X0';
pt(109).class     = 'vector';
pt(109).nrows     = 1;
pt(109).ncols     = 4;
pt(109).subsource = 'SS_DOUBLE';
pt(109).ndims     = '2';
pt(109).size      = '[]';
pt(109).isStruct  = false;
pt(109).symbol     = 'FingerStrokeAssistance_P.Memory_X0_a';
pt(109).baseaddr   = '&FingerStrokeAssistance_P.Memory_X0_a[0]';
pt(109).dtname     = 'real_T';



  
pt(110).blockname = 'parameters/gain transition2/Memory';
pt(110).paramname = 'X0';
pt(110).class     = 'vector';
pt(110).nrows     = 1;
pt(110).ncols     = 4;
pt(110).subsource = 'SS_DOUBLE';
pt(110).ndims     = '2';
pt(110).size      = '[]';
pt(110).isStruct  = false;
pt(110).symbol     = 'FingerStrokeAssistance_P.Memory_X0_b';
pt(110).baseaddr   = '&FingerStrokeAssistance_P.Memory_X0_b[0]';
pt(110).dtname     = 'real_T';



  
pt(111).blockname = 'parameters/gain transition3/Memory';
pt(111).paramname = 'X0';
pt(111).class     = 'vector';
pt(111).nrows     = 1;
pt(111).ncols     = 4;
pt(111).subsource = 'SS_DOUBLE';
pt(111).ndims     = '2';
pt(111).size      = '[]';
pt(111).isStruct  = false;
pt(111).symbol     = 'FingerStrokeAssistance_P.Memory_X0_g0';
pt(111).baseaddr   = '&FingerStrokeAssistance_P.Memory_X0_g0[0]';
pt(111).dtname     = 'real_T';



  
pt(112).blockname = 'parameters/gain transition4/Memory';
pt(112).paramname = 'X0';
pt(112).class     = 'vector';
pt(112).nrows     = 1;
pt(112).ncols     = 4;
pt(112).subsource = 'SS_DOUBLE';
pt(112).ndims     = '2';
pt(112).size      = '[]';
pt(112).isStruct  = false;
pt(112).symbol     = 'FingerStrokeAssistance_P.Memory_X0_bp';
pt(112).baseaddr   = '&FingerStrokeAssistance_P.Memory_X0_bp[0]';
pt(112).dtname     = 'real_T';



  
pt(113).blockname = 'parameters/gain transition5/Memory';
pt(113).paramname = 'X0';
pt(113).class     = 'vector';
pt(113).nrows     = 1;
pt(113).ncols     = 4;
pt(113).subsource = 'SS_DOUBLE';
pt(113).ndims     = '2';
pt(113).size      = '[]';
pt(113).isStruct  = false;
pt(113).symbol     = 'FingerStrokeAssistance_P.Memory_X0_e';
pt(113).baseaddr   = '&FingerStrokeAssistance_P.Memory_X0_e[0]';
pt(113).dtname     = 'real_T';



  
pt(114).blockname = '';
pt(114).paramname = 'Alow';
pt(114).class     = 'col-mat';
pt(114).nrows     = 2;
pt(114).ncols     = 2;
pt(114).subsource = 'SS_DOUBLE';
pt(114).ndims     = '2';
pt(114).size      = '[]';
pt(114).isStruct  = false;
pt(114).symbol     = 'FingerStrokeAssistance_P.Alow';
pt(114).baseaddr   = '&FingerStrokeAssistance_P.Alow[0]';
pt(114).dtname     = 'real_T';



  
pt(115).blockname = '';
pt(115).paramname = 'Blow';
pt(115).class     = 'vector';
pt(115).nrows     = 2;
pt(115).ncols     = 1;
pt(115).subsource = 'SS_DOUBLE';
pt(115).ndims     = '2';
pt(115).size      = '[]';
pt(115).isStruct  = false;
pt(115).symbol     = 'FingerStrokeAssistance_P.Blow';
pt(115).baseaddr   = '&FingerStrokeAssistance_P.Blow[0]';
pt(115).dtname     = 'real_T';



  
pt(116).blockname = '';
pt(116).paramname = 'Clow';
pt(116).class     = 'vector';
pt(116).nrows     = 1;
pt(116).ncols     = 2;
pt(116).subsource = 'SS_DOUBLE';
pt(116).ndims     = '2';
pt(116).size      = '[]';
pt(116).isStruct  = false;
pt(116).symbol     = 'FingerStrokeAssistance_P.Clow';
pt(116).baseaddr   = '&FingerStrokeAssistance_P.Clow[0]';
pt(116).dtname     = 'real_T';



  
pt(117).blockname = '';
pt(117).paramname = 'Dlow';
pt(117).class     = 'scalar';
pt(117).nrows     = 1;
pt(117).ncols     = 1;
pt(117).subsource = 'SS_DOUBLE';
pt(117).ndims     = '2';
pt(117).size      = '[]';
pt(117).isStruct  = false;
pt(117).symbol     = 'FingerStrokeAssistance_P.Dlow';
pt(117).baseaddr   = '&FingerStrokeAssistance_P.Dlow';
pt(117).dtname     = 'real_T';



  
pt(118).blockname = '';
pt(118).paramname = 'x0low';
pt(118).class     = 'vector';
pt(118).nrows     = 2;
pt(118).ncols     = 1;
pt(118).subsource = 'SS_DOUBLE';
pt(118).ndims     = '2';
pt(118).size      = '[]';
pt(118).isStruct  = false;
pt(118).symbol     = 'FingerStrokeAssistance_P.x0low';
pt(118).baseaddr   = '&FingerStrokeAssistance_P.x0low[0]';
pt(118).dtname     = 'real_T';


function len = getlenPT
len = 118;

