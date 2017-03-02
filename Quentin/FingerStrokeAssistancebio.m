function bio=FingerStrokeAssistancebio
bio = [];
bio(1).blkName='MATLAB Function/p1';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&FingerStrokeAssistance_B.state';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='MATLAB Function/p2';
bio(2).sigName='';
bio(2).portIdx=1;
bio(2).dim=[2,1];
bio(2).sigWidth=2;
bio(2).sigAddress='&FingerStrokeAssistance_B.f_ref[0]';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='MATLAB Function/p3';
bio(3).sigName='';
bio(3).portIdx=2;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&FingerStrokeAssistance_B.ramp_switch';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='MATLAB Function/p4';
bio(4).sigName='';
bio(4).portIdx=3;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&FingerStrokeAssistance_B.fp_ramp_switch';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='MATLAB Function/p5';
bio(5).sigName='';
bio(5).portIdx=4;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&FingerStrokeAssistance_B.f_ref_lim';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='MATLAB Function/p6';
bio(6).sigName='';
bio(6).portIdx=5;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&FingerStrokeAssistance_B.enc_trigger';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='MATLAB Function/p7';
bio(7).sigName='';
bio(7).portIdx=6;
bio(7).dim=[2,1];
bio(7).sigWidth=2;
bio(7).sigAddress='&FingerStrokeAssistance_B.pos_ref[0]';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='MATLAB Function/p8';
bio(8).sigName='';
bio(8).portIdx=7;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&FingerStrokeAssistance_B.pos_ref_Ulim';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='MATLAB Function/p9';
bio(9).sigName='';
bio(9).portIdx=8;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&FingerStrokeAssistance_B.pos_ref_Llim';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='Data Type Conversion';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&FingerStrokeAssistance_B.DataTypeConversion';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='Unit Delay';
bio(11).sigName='';
bio(11).portIdx=0;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&FingerStrokeAssistance_B.UnitDelay';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='Unit Delay1';
bio(12).sigName='';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&FingerStrokeAssistance_B.UnitDelay1';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Unit Delay3';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[2,1];
bio(13).sigWidth=2;
bio(13).sigAddress='&FingerStrokeAssistance_B.UnitDelay3[0]';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='HL Controller/Data Type Conversion';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&FingerStrokeAssistance_B.DataTypeConversion_p';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='HL Controller/Discrete-Time Integrator';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&FingerStrokeAssistance_B.DiscreteTimeIntegrator';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='HL Controller/Damping';
bio(16).sigName='';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&FingerStrokeAssistance_B.Damping';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='HL Controller/Gain1';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&FingerStrokeAssistance_B.Gain1';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='HL Controller/Delay';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[2,1];
bio(18).sigWidth=2;
bio(18).sigAddress='&FingerStrokeAssistance_B.Delay[0]';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='HL Controller/Delay1';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&FingerStrokeAssistance_B.Delay1';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='HL Controller/Discrete Filter1';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&FingerStrokeAssistance_B.DiscreteFilter1';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='LL Controller/Data Type Conversion';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&FingerStrokeAssistance_B.DataTypeConversion_l';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='LL Controller/Data Type Conversion1';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&FingerStrokeAssistance_B.DataTypeConversion1';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='LL Controller/Gain';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&FingerStrokeAssistance_B.Gain_l';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='LL Controller/Sum';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[2,1];
bio(24).sigWidth=2;
bio(24).sigAddress='&FingerStrokeAssistance_B.Sum_h[0]';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='LL Controller/Switch';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&FingerStrokeAssistance_B.Switch_h';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='LL Controller/Switch1';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&FingerStrokeAssistance_B.Switch1';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='LL Controller/Manual Switch';
bio(27).sigName='';
bio(27).portIdx=0;
bio(27).dim=[2,1];
bio(27).sigWidth=2;
bio(27).sigAddress='&FingerStrokeAssistance_B.ManualSwitch[0]';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='LL Controller/Delay';
bio(28).sigName='';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&FingerStrokeAssistance_B.Delay_b';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Robot/Gain';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[2,1];
bio(29).sigWidth=2;
bio(29).sigAddress='&FingerStrokeAssistance_B.Gain[0]';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Robot/Gain1';
bio(30).sigName='';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&FingerStrokeAssistance_B.Gain1_l';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Robot/PCI 6221 ENC ';
bio(31).sigName='';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&FingerStrokeAssistance_B.PCI6221ENC';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Robot/PCI 6221 ENC 1';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&FingerStrokeAssistance_B.PCI6221ENC1';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Robot/PCI-6221 AD1/p1';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&FingerStrokeAssistance_B.PCI6221AD1_o1';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Robot/PCI-6221 AD1/p2';
bio(34).sigName='';
bio(34).portIdx=1;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&FingerStrokeAssistance_B.PCI6221AD1_o2';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Robot/PCI-6221 AD1/p3';
bio(35).sigName='';
bio(35).portIdx=2;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&FingerStrokeAssistance_B.PCI6221AD1_o3';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Robot/PCI-6221 AD1/p4';
bio(36).sigName='';
bio(36).portIdx=3;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&FingerStrokeAssistance_B.PCI6221AD1_o4';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Robot/PCI-6221 AD1/p5';
bio(37).sigName='';
bio(37).portIdx=4;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&FingerStrokeAssistance_B.PCI6221AD1_o5';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Robot/PCI-6221 AD1/p6';
bio(38).sigName='';
bio(38).portIdx=5;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&FingerStrokeAssistance_B.PCI6221AD1_o6';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Robot/PCI-6221 AD1/p7';
bio(39).sigName='';
bio(39).portIdx=6;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&FingerStrokeAssistance_B.PCI6221AD1_o7';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Robot/PCI-6221 AD1/p8';
bio(40).sigName='';
bio(40).portIdx=7;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&FingerStrokeAssistance_B.PCI6221AD1_o8';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Robot/Sum';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[2,1];
bio(41).sigWidth=2;
bio(41).sigAddress='&FingerStrokeAssistance_B.Sum[0]';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Robot/Discrete Filter1';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[2,1];
bio(42).sigWidth=2;
bio(42).sigAddress='&FingerStrokeAssistance_B.DiscreteFilter1_j[0]';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Robot/Unit Delay';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[2,1];
bio(43).sigWidth=2;
bio(43).sigAddress='&FingerStrokeAssistance_B.UnitDelay_g[0]';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Subsystem/Data Type Conversion';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&FingerStrokeAssistance_B.DataTypeConversion_o';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Subsystem/Discrete-Time Integrator';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&FingerStrokeAssistance_B.DiscreteTimeIntegrator_e';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Subsystem/Unit Delay1';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&FingerStrokeAssistance_B.UnitDelay1_g';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Subsystem/Unit Delay2';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&FingerStrokeAssistance_B.UnitDelay2';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Subsystem1/Data Type Conversion';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&FingerStrokeAssistance_B.DataTypeConversion_a';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Subsystem1/Discrete-Time Integrator';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&FingerStrokeAssistance_B.DiscreteTimeIntegrator_k';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Subsystem1/Unit Delay1';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&FingerStrokeAssistance_B.UnitDelay1_d';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Subsystem1/Unit Delay2';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&FingerStrokeAssistance_B.UnitDelay2_j';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='parameters/parChangeRate';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&FingerStrokeAssistance_B.parChangeRate';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='parameters/parFThresh';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&FingerStrokeAssistance_B.parFThresh';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='parameters/parFixedDur';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&FingerStrokeAssistance_B.parFixedDur';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='parameters/parForceTrigger';
bio(55).sigName='';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&FingerStrokeAssistance_B.parForceTrigger';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='parameters/parKd1';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&FingerStrokeAssistance_B.parKd1';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='parameters/parKd2';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&FingerStrokeAssistance_B.parKd2';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='parameters/parKdV1';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&FingerStrokeAssistance_B.parKdV1';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='parameters/parKdV2';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&FingerStrokeAssistance_B.parKdV2';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='parameters/parKp1';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&FingerStrokeAssistance_B.parKp1';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='parameters/parKp2';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&FingerStrokeAssistance_B.parKp2';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='parameters/parLeftMode';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&FingerStrokeAssistance_B.parLeftMode';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='parameters/parMarker';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&FingerStrokeAssistance_B.parMarker';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='parameters/parMaxTrajDur';
bio(64).sigName='';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&FingerStrokeAssistance_B.parMaxTrajDur';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='parameters/parPStop';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&FingerStrokeAssistance_B.parPStop';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='parameters/parTrajMode';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&FingerStrokeAssistance_B.parTrajMode';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='parameters/parVThresh';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[1,1];
bio(67).sigWidth=1;
bio(67).sigAddress='&FingerStrokeAssistance_B.parVThresh';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='parameters/parWiggleAmp';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&FingerStrokeAssistance_B.parWiggleAmp';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='parameters/Rounding Function';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&FingerStrokeAssistance_B.RoundingFunction';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='parameters/Saturation';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&FingerStrokeAssistance_B.Saturation';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='parameters/Saturation1';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&FingerStrokeAssistance_B.Saturation1';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='parameters/Saturation2';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&FingerStrokeAssistance_B.Saturation2';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='HL Controller/Detect Change/FixPt Relational Operator';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&FingerStrokeAssistance_B.FixPtRelationalOperator';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='HL Controller/Detect Change/Delay Input1';
bio(74).sigName='U(k-1)';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&FingerStrokeAssistance_B.Uk1';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='LL Controller/Compare To Constant/Compare';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&FingerStrokeAssistance_B.Compare';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='LL Controller/Compare To Constant1/Compare';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&FingerStrokeAssistance_B.Compare_e';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='LL Controller/Discrete PID Controller/Filter';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[2,1];
bio(77).sigWidth=2;
bio(77).sigAddress='&FingerStrokeAssistance_B.Filter[0]';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='LL Controller/Discrete PID Controller/Integrator';
bio(78).sigName='';
bio(78).portIdx=0;
bio(78).dim=[2,1];
bio(78).sigWidth=2;
bio(78).sigAddress='&FingerStrokeAssistance_B.Integrator[0]';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='LL Controller/Discrete PID Controller/Derivative Gain';
bio(79).sigName='';
bio(79).portIdx=0;
bio(79).dim=[2,1];
bio(79).sigWidth=2;
bio(79).sigAddress='&FingerStrokeAssistance_B.DerivativeGain[0]';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='LL Controller/Discrete PID Controller/Filter Coefficient';
bio(80).sigName='';
bio(80).portIdx=0;
bio(80).dim=[2,1];
bio(80).sigWidth=2;
bio(80).sigAddress='&FingerStrokeAssistance_B.FilterCoefficient[0]';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='LL Controller/Discrete PID Controller/Integral Gain';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[2,1];
bio(81).sigWidth=2;
bio(81).sigAddress='&FingerStrokeAssistance_B.IntegralGain[0]';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='LL Controller/Discrete PID Controller/Proportional Gain';
bio(82).sigName='';
bio(82).portIdx=0;
bio(82).dim=[2,1];
bio(82).sigWidth=2;
bio(82).sigAddress='&FingerStrokeAssistance_B.ProportionalGain[0]';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='LL Controller/Discrete PID Controller/Sum';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[2,1];
bio(83).sigWidth=2;
bio(83).sigAddress='&FingerStrokeAssistance_B.Sum_a[0]';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='LL Controller/Discrete PID Controller/SumD';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[2,1];
bio(84).sigWidth=2;
bio(84).sigAddress='&FingerStrokeAssistance_B.SumD[0]';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='LL Controller/Saturation Dynamic1/LowerRelop1';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[2,1];
bio(85).sigWidth=2;
bio(85).sigAddress='&FingerStrokeAssistance_B.LowerRelop1[0]';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='LL Controller/Saturation Dynamic1/UpperRelop';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[2,1];
bio(86).sigWidth=2;
bio(86).sigAddress='&FingerStrokeAssistance_B.UpperRelop[0]';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='LL Controller/Saturation Dynamic1/Switch';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[2,1];
bio(87).sigWidth=2;
bio(87).sigAddress='&FingerStrokeAssistance_B.Switch[0]';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='LL Controller/Saturation Dynamic1/Switch2';
bio(88).sigName='';
bio(88).portIdx=0;
bio(88).dim=[2,1];
bio(88).sigWidth=2;
bio(88).sigAddress='&FingerStrokeAssistance_B.Switch2[0]';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='LL Controller/Subsystem/MATLAB Function1';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&FingerStrokeAssistance_B.f_ref_pid_1';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='LL Controller/Subsystem/MATLAB Function2';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&FingerStrokeAssistance_B.ff';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='LL Controller/Subsystem/Sum1';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&FingerStrokeAssistance_B.Sum1';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Robot/Discrete Derivative/Diff';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[2,1];
bio(92).sigWidth=2;
bio(92).sigAddress='&FingerStrokeAssistance_B.Diff[0]';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Robot/Discrete Derivative/TSamp';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[2,1];
bio(93).sigWidth=2;
bio(93).sigAddress='&FingerStrokeAssistance_B.TSamp[0]';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Robot/Discrete Derivative/UD';
bio(94).sigName='U(k-1)';
bio(94).portIdx=0;
bio(94).dim=[2,1];
bio(94).sigWidth=2;
bio(94).sigAddress='&FingerStrokeAssistance_B.Uk1_d[0]';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Robot/Saturation Dynamic/LowerRelop1';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[2,1];
bio(95).sigWidth=2;
bio(95).sigAddress='&FingerStrokeAssistance_B.LowerRelop1_p[0]';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Robot/Saturation Dynamic/UpperRelop';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[2,1];
bio(96).sigWidth=2;
bio(96).sigAddress='&FingerStrokeAssistance_B.UpperRelop_l[0]';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Robot/Saturation Dynamic/Switch';
bio(97).sigName='';
bio(97).portIdx=0;
bio(97).dim=[2,1];
bio(97).sigWidth=2;
bio(97).sigAddress='&FingerStrokeAssistance_B.Switch_n[0]';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Robot/Saturation Dynamic/Switch2';
bio(98).sigName='';
bio(98).portIdx=0;
bio(98).dim=[2,1];
bio(98).sigWidth=2;
bio(98).sigAddress='&FingerStrokeAssistance_B.Switch2_l[0]';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Robot/Triggered Subsystem/In1';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[2,1];
bio(99).sigWidth=2;
bio(99).sigAddress='&FingerStrokeAssistance_B.In1[0]';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Robot/account for handedness/MATLAB Function/p1';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&FingerStrokeAssistance_B.sf_MATLABFunction_m.output1';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Robot/account for handedness/MATLAB Function/p2';
bio(101).sigName='';
bio(101).portIdx=1;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&FingerStrokeAssistance_B.sf_MATLABFunction_m.output2';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Robot/account for handedness force/MATLAB Function';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[5,1];
bio(102).sigWidth=5;
bio(102).sigAddress='&FingerStrokeAssistance_B.output[0]';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Robot/account for handedness1/MATLAB Function/p1';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&FingerStrokeAssistance_B.sf_MATLABFunction.output1';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Robot/account for handedness1/MATLAB Function/p2';
bio(104).sigName='';
bio(104).portIdx=1;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&FingerStrokeAssistance_B.sf_MATLABFunction.output2';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Robot/account for handedness2/MATLAB Function/p1';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&FingerStrokeAssistance_B.sf_MATLABFunction_n.output1';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Robot/account for handedness2/MATLAB Function/p2';
bio(106).sigName='';
bio(106).portIdx=1;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&FingerStrokeAssistance_B.sf_MATLABFunction_n.output2';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='Robot/filtered force output/Low Pass 100 Hz';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&FingerStrokeAssistance_B.LowPass100Hz';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='Robot/filtered force output/Low Pass 100 Hz1';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&FingerStrokeAssistance_B.LowPass100Hz1';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='Robot/filtered force output/Memory';
bio(109).sigName='';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&FingerStrokeAssistance_B.Memory';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='Robot/filtered force output/Memory1';
bio(110).sigName='';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&FingerStrokeAssistance_B.Memory1';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='Robot/gravDir/gain';
bio(111).sigName='';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&FingerStrokeAssistance_B.gain';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='Robot/gravDir/Sum';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&FingerStrokeAssistance_B.Sum_m';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='Subsystem/Detect Change/FixPt Relational Operator';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&FingerStrokeAssistance_B.FixPtRelationalOperator_i';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='Subsystem/Detect Change/Delay Input1';
bio(114).sigName='U(k-1)';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&FingerStrokeAssistance_B.Uk1_o';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

bio(115).blkName='Subsystem1/Detect Change/FixPt Relational Operator';
bio(115).sigName='';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&FingerStrokeAssistance_B.FixPtRelationalOperator_f';
bio(115).ndims=2;
bio(115).size=[];
bio(115).isStruct=false;

bio(116).blkName='Subsystem1/Detect Change/Delay Input1';
bio(116).sigName='U(k-1)';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&FingerStrokeAssistance_B.Uk1_m';
bio(116).ndims=2;
bio(116).size=[];
bio(116).isStruct=false;

bio(117).blkName='parameters/gain transition/gainramp/p1';
bio(117).sigName='';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&FingerStrokeAssistance_B.sf_gainramp.val';
bio(117).ndims=2;
bio(117).size=[];
bio(117).isStruct=false;

bio(118).blkName='parameters/gain transition/gainramp/p2';
bio(118).sigName='';
bio(118).portIdx=1;
bio(118).dim=[4,1];
bio(118).sigWidth=4;
bio(118).sigAddress='&FingerStrokeAssistance_B.sf_gainramp.state1[0]';
bio(118).ndims=2;
bio(118).size=[];
bio(118).isStruct=false;

bio(119).blkName='parameters/gain transition/Memory';
bio(119).sigName='';
bio(119).portIdx=0;
bio(119).dim=[4,1];
bio(119).sigWidth=4;
bio(119).sigAddress='&FingerStrokeAssistance_B.Memory_g[0]';
bio(119).ndims=2;
bio(119).size=[];
bio(119).isStruct=false;

bio(120).blkName='parameters/gain transition1/gainramp/p1';
bio(120).sigName='';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_i.val';
bio(120).ndims=2;
bio(120).size=[];
bio(120).isStruct=false;

bio(121).blkName='parameters/gain transition1/gainramp/p2';
bio(121).sigName='';
bio(121).portIdx=1;
bio(121).dim=[4,1];
bio(121).sigWidth=4;
bio(121).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_i.state1[0]';
bio(121).ndims=2;
bio(121).size=[];
bio(121).isStruct=false;

bio(122).blkName='parameters/gain transition1/Memory';
bio(122).sigName='';
bio(122).portIdx=0;
bio(122).dim=[4,1];
bio(122).sigWidth=4;
bio(122).sigAddress='&FingerStrokeAssistance_B.Memory_i[0]';
bio(122).ndims=2;
bio(122).size=[];
bio(122).isStruct=false;

bio(123).blkName='parameters/gain transition2/gainramp/p1';
bio(123).sigName='';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_id.val';
bio(123).ndims=2;
bio(123).size=[];
bio(123).isStruct=false;

bio(124).blkName='parameters/gain transition2/gainramp/p2';
bio(124).sigName='';
bio(124).portIdx=1;
bio(124).dim=[4,1];
bio(124).sigWidth=4;
bio(124).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_id.state1[0]';
bio(124).ndims=2;
bio(124).size=[];
bio(124).isStruct=false;

bio(125).blkName='parameters/gain transition2/Memory';
bio(125).sigName='';
bio(125).portIdx=0;
bio(125).dim=[4,1];
bio(125).sigWidth=4;
bio(125).sigAddress='&FingerStrokeAssistance_B.Memory_e[0]';
bio(125).ndims=2;
bio(125).size=[];
bio(125).isStruct=false;

bio(126).blkName='parameters/gain transition3/gainramp/p1';
bio(126).sigName='';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_b.val';
bio(126).ndims=2;
bio(126).size=[];
bio(126).isStruct=false;

bio(127).blkName='parameters/gain transition3/gainramp/p2';
bio(127).sigName='';
bio(127).portIdx=1;
bio(127).dim=[4,1];
bio(127).sigWidth=4;
bio(127).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_b.state1[0]';
bio(127).ndims=2;
bio(127).size=[];
bio(127).isStruct=false;

bio(128).blkName='parameters/gain transition3/Memory';
bio(128).sigName='';
bio(128).portIdx=0;
bio(128).dim=[4,1];
bio(128).sigWidth=4;
bio(128).sigAddress='&FingerStrokeAssistance_B.Memory_o[0]';
bio(128).ndims=2;
bio(128).size=[];
bio(128).isStruct=false;

bio(129).blkName='parameters/gain transition4/gainramp/p1';
bio(129).sigName='';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_f.val';
bio(129).ndims=2;
bio(129).size=[];
bio(129).isStruct=false;

bio(130).blkName='parameters/gain transition4/gainramp/p2';
bio(130).sigName='';
bio(130).portIdx=1;
bio(130).dim=[4,1];
bio(130).sigWidth=4;
bio(130).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_f.state1[0]';
bio(130).ndims=2;
bio(130).size=[];
bio(130).isStruct=false;

bio(131).blkName='parameters/gain transition4/Memory';
bio(131).sigName='';
bio(131).portIdx=0;
bio(131).dim=[4,1];
bio(131).sigWidth=4;
bio(131).sigAddress='&FingerStrokeAssistance_B.Memory_n[0]';
bio(131).ndims=2;
bio(131).size=[];
bio(131).isStruct=false;

bio(132).blkName='parameters/gain transition5/gainramp/p1';
bio(132).sigName='';
bio(132).portIdx=0;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_a.val';
bio(132).ndims=2;
bio(132).size=[];
bio(132).isStruct=false;

bio(133).blkName='parameters/gain transition5/gainramp/p2';
bio(133).sigName='';
bio(133).portIdx=1;
bio(133).dim=[4,1];
bio(133).sigWidth=4;
bio(133).sigAddress='&FingerStrokeAssistance_B.sf_gainramp_a.state1[0]';
bio(133).ndims=2;
bio(133).size=[];
bio(133).isStruct=false;

bio(134).blkName='parameters/gain transition5/Memory';
bio(134).sigName='';
bio(134).portIdx=0;
bio(134).dim=[4,1];
bio(134).sigWidth=4;
bio(134).sigAddress='&FingerStrokeAssistance_B.Memory_os[0]';
bio(134).ndims=2;
bio(134).size=[];
bio(134).isStruct=false;

function len = getlenBIO
len = 134;

