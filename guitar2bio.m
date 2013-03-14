function bio=guitar2bio
bio = [];
bio(1).blkName='Constant';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&guitar2_B.Constant';
bio(1).ndims=2;
bio(1).size=[];

bio(getlenBIO) = bio(1);

bio(2).blkName='Controller/Chart/p1';
bio(2).sigName='f';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&guitar2_B.f';
bio(2).ndims=2;
bio(2).size=[];


bio(3).blkName='Controller/Chart/p2';
bio(3).sigName='K1';
bio(3).portIdx=1;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&guitar2_B.K1';
bio(3).ndims=2;
bio(3).size=[];


bio(4).blkName='Controller/Chart/p3';
bio(4).sigName='K2';
bio(4).portIdx=2;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&guitar2_B.K2';
bio(4).ndims=2;
bio(4).size=[];


bio(5).blkName='Controller/Chart/p4';
bio(5).sigName='FStop';
bio(5).portIdx=3;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&guitar2_B.FStop';
bio(5).ndims=2;
bio(5).size=[];


bio(6).blkName='Controller/controller type: PID=1 AAN = 2 Generalized AAN =3';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&guitar2_B.controllertypePID1AAN2Generaliz';
bio(6).ndims=2;
bio(6).size=[];


bio(7).blkName='Controller/Multiport Switch';
bio(7).sigName='';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&guitar2_B.MultiportSwitch_o';
bio(7).ndims=2;
bio(7).size=[];


bio(8).blkName='Controller/Multiport Switch1';
bio(8).sigName='';
bio(8).portIdx=0;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&guitar2_B.MultiportSwitch1';
bio(8).ndims=2;
bio(8).size=[];


bio(9).blkName='Controller/Product';
bio(9).sigName='';
bio(9).portIdx=0;
bio(9).dim=[2,1];
bio(9).sigWidth=2;
bio(9).sigAddress='&guitar2_B.Product_c[0]';
bio(9).ndims=2;
bio(9).size=[];


bio(10).blkName='Controller Parameters/Adaptation Rate';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&guitar2_B.AdaptationRate';
bio(10).ndims=2;
bio(10).size=[];


bio(11).blkName='Controller Parameters/Lambda';
bio(11).sigName='';
bio(11).portIdx=0;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&guitar2_B.Lambda';
bio(11).ndims=2;
bio(11).size=[];


bio(12).blkName='Controller Parameters/PD d';
bio(12).sigName='';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&guitar2_B.PDd';
bio(12).ndims=2;
bio(12).size=[];


bio(13).blkName='Controller Parameters/PD p';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&guitar2_B.PDp';
bio(13).ndims=2;
bio(13).size=[];


bio(14).blkName='Controller Parameters/PD p1';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&guitar2_B.PDp1';
bio(14).ndims=2;
bio(14).size=[];


bio(15).blkName='Controller Parameters/forgetting rate';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&guitar2_B.forgettingrate';
bio(15).ndims=2;
bio(15).size=[];


bio(16).blkName='Host file/Embedded MATLAB Function1';
bio(16).sigName='out';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&guitar2_B.sf_EmbeddedMATLABFunction1.out';
bio(16).ndims=2;
bio(16).size=[];


bio(17).blkName='Host file/Embedded MATLAB Function2';
bio(17).sigName='out';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&guitar2_B.sf_EmbeddedMATLABFunction2.out';
bio(17).ndims=2;
bio(17).size=[];


bio(18).blkName='Host file/Embedded MATLAB Function3';
bio(18).sigName='out';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&guitar2_B.sf_EmbeddedMATLABFunction3.out';
bio(18).ndims=2;
bio(18).size=[];


bio(19).blkName='Host file/Embedded MATLAB Function4';
bio(19).sigName='out';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&guitar2_B.sf_EmbeddedMATLABFunction4.out';
bio(19).ndims=2;
bio(19).size=[];


bio(20).blkName='Kalman Filter/Gain';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[4,1];
bio(20).sigWidth=4;
bio(20).sigAddress='&guitar2_B.Gain_o[0]';
bio(20).ndims=2;
bio(20).size=[];


bio(21).blkName='Robot/Gain';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&guitar2_B.Gain';
bio(21).ndims=2;
bio(21).size=[];


bio(22).blkName='Robot/Gain1';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&guitar2_B.Gain1';
bio(22).ndims=2;
bio(22).size=[];


bio(23).blkName='Robot/Gain2';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&guitar2_B.Gain2_c';
bio(23).ndims=2;
bio(23).size=[];


bio(24).blkName='Robot/PCI 6221 ENC ';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&guitar2_B.PCI6221ENC';
bio(24).ndims=2;
bio(24).size=[];


bio(25).blkName='Robot/PCI 6221 ENC 1';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&guitar2_B.PCI6221ENC1';
bio(25).ndims=2;
bio(25).size=[];


bio(26).blkName='Robot/PCI-6221 AD1/p1';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&guitar2_B.PCI6221AD1_o1';
bio(26).ndims=2;
bio(26).size=[];


bio(27).blkName='Robot/PCI-6221 AD1/p2';
bio(27).sigName='';
bio(27).portIdx=1;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&guitar2_B.PCI6221AD1_o2';
bio(27).ndims=2;
bio(27).size=[];


bio(28).blkName='Robot/PCI-6221 AD1/p3';
bio(28).sigName='';
bio(28).portIdx=2;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&guitar2_B.PCI6221AD1_o3';
bio(28).ndims=2;
bio(28).size=[];


bio(29).blkName='Robot/Sum';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&guitar2_B.Sum_jp';
bio(29).ndims=2;
bio(29).size=[];


bio(30).blkName='trajectory planning/Embedded MATLAB Function1';
bio(30).sigName='trajB';
bio(30).portIdx=0;
bio(30).dim=[6,1];
bio(30).sigWidth=6;
bio(30).sigAddress='&guitar2_B.trajB[0]';
bio(30).ndims=2;
bio(30).size=[];


bio(31).blkName='trajectory planning/sin generator';
bio(31).sigName='desired';
bio(31).portIdx=0;
bio(31).dim=[6,1];
bio(31).sigWidth=6;
bio(31).sigAddress='&guitar2_B.desired[0]';
bio(31).ndims=2;
bio(31).size=[];


bio(32).blkName='trajectory planning/Clock';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&guitar2_B.Clock_j';
bio(32).ndims=2;
bio(32).size=[];


bio(33).blkName='trajectory planning/Gain1';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[6,1];
bio(33).sigWidth=6;
bio(33).sigAddress='&guitar2_B.Gain1_k[0]';
bio(33).ndims=2;
bio(33).size=[];


bio(34).blkName='trajectory planning/Gain2';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[6,1];
bio(34).sigWidth=6;
bio(34).sigAddress='&guitar2_B.Gain2_m[0]';
bio(34).ndims=2;
bio(34).size=[];


bio(35).blkName='trajectory planning/Gain3';
bio(35).sigName='';
bio(35).portIdx=0;
bio(35).dim=[6,1];
bio(35).sigWidth=6;
bio(35).sigAddress='&guitar2_B.Gain3_m[0]';
bio(35).ndims=2;
bio(35).size=[];


bio(36).blkName='trajectory planning/Multiport Switch';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[6,1];
bio(36).sigWidth=6;
bio(36).sigAddress='&guitar2_B.MultiportSwitch[0]';
bio(36).ndims=2;
bio(36).size=[];


bio(37).blkName='Controller/PID/Clock';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&guitar2_B.Clock_k';
bio(37).ndims=2;
bio(37).size=[];


bio(38).blkName='Controller/PID/Gain';
bio(38).sigName='';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&guitar2_B.Gain_f';
bio(38).ndims=2;
bio(38).size=[];


bio(39).blkName='Controller/PID/Gain1';
bio(39).sigName='';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&guitar2_B.Gain1_m';
bio(39).ndims=2;
bio(39).size=[];


bio(40).blkName='Controller/PID/Gain2';
bio(40).sigName='';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&guitar2_B.Gain2';
bio(40).ndims=2;
bio(40).size=[];


bio(41).blkName='Controller/PID/Gain3';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&guitar2_B.Gain3';
bio(41).ndims=2;
bio(41).size=[];


bio(42).blkName='Controller/PID/Gain4';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&guitar2_B.Gain4';
bio(42).ndims=2;
bio(42).size=[];


bio(43).blkName='Controller/PID/Gain5';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&guitar2_B.Gain5';
bio(43).ndims=2;
bio(43).size=[];


bio(44).blkName='Controller/PID/Product1';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&guitar2_B.Product1';
bio(44).ndims=2;
bio(44).size=[];


bio(45).blkName='Controller/PID/Product2';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&guitar2_B.Product2';
bio(45).ndims=2;
bio(45).size=[];


bio(46).blkName='Controller/PID/Product3';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&guitar2_B.Product3';
bio(46).ndims=2;
bio(46).size=[];


bio(47).blkName='Controller/PID/Product4';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&guitar2_B.Product4';
bio(47).ndims=2;
bio(47).size=[];


bio(48).blkName='Controller/PID/Product5';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&guitar2_B.Product5';
bio(48).ndims=2;
bio(48).size=[];


bio(49).blkName='Controller/PID/Product6';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&guitar2_B.Product6';
bio(49).ndims=2;
bio(49).size=[];


bio(50).blkName='Controller/PID/Sum1';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&guitar2_B.Sum1_e';
bio(50).ndims=2;
bio(50).size=[];


bio(51).blkName='Controller/PID/Sum2';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&guitar2_B.Sum2_p';
bio(51).ndims=2;
bio(51).size=[];


bio(52).blkName='Controller/PID/Sum3';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&guitar2_B.Sum3_ir';
bio(52).ndims=2;
bio(52).size=[];


bio(53).blkName='Controller/PID/Sum4';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&guitar2_B.Sum4_d';
bio(53).ndims=2;
bio(53).size=[];


bio(54).blkName='Controller/PID/Sum5';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&guitar2_B.Sum5';
bio(54).ndims=2;
bio(54).size=[];


bio(55).blkName='Controller/PID/Sum6';
bio(55).sigName='';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&guitar2_B.Sum6';
bio(55).ndims=2;
bio(55).size=[];


bio(56).blkName='Controller/PID/Sum7';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&guitar2_B.Sum7';
bio(56).ndims=2;
bio(56).size=[];


bio(57).blkName='Controller/PID/Sum8';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&guitar2_B.Sum8';
bio(57).ndims=2;
bio(57).size=[];


bio(58).blkName='Controller/start/Saturation';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&guitar2_B.Saturation';
bio(58).ndims=2;
bio(58).size=[];


bio(59).blkName='Controller/stop/Gain';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&guitar2_B.Gain_m';
bio(59).ndims=2;
bio(59).size=[];


bio(60).blkName='Controller/stop/Gain1';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&guitar2_B.Gain1_c';
bio(60).ndims=2;
bio(60).size=[];


bio(61).blkName='Host file/Subsystem/Sum';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&guitar2_B.Sum';
bio(61).ndims=2;
bio(61).size=[];


bio(62).blkName='Host file/Subsystem/Sum1';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&guitar2_B.Sum1';
bio(62).ndims=2;
bio(62).size=[];


bio(63).blkName='Kalman Filter/kalman1/A';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[3,1];
bio(63).sigWidth=3;
bio(63).sigAddress='&guitar2_B.A[0]';
bio(63).ndims=2;
bio(63).size=[];


bio(64).blkName='Kalman Filter/kalman1/B';
bio(64).sigName='';
bio(64).portIdx=0;
bio(64).dim=[3,1];
bio(64).sigWidth=3;
bio(64).sigAddress='&guitar2_B.B[0]';
bio(64).ndims=2;
bio(64).size=[];


bio(65).blkName='Kalman Filter/kalman1/B1';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&guitar2_B.B1';
bio(65).ndims=2;
bio(65).size=[];


bio(66).blkName='Kalman Filter/kalman1/B2';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&guitar2_B.B2';
bio(66).ndims=2;
bio(66).size=[];


bio(67).blkName='Kalman Filter/kalman1/B3';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[1,1];
bio(67).sigWidth=1;
bio(67).sigAddress='&guitar2_B.B3';
bio(67).ndims=2;
bio(67).size=[];


bio(68).blkName='Kalman Filter/kalman1/C';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&guitar2_B.C';
bio(68).ndims=2;
bio(68).size=[];


bio(69).blkName='Kalman Filter/kalman1/K';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[3,1];
bio(69).sigWidth=3;
bio(69).sigAddress='&guitar2_B.K[0]';
bio(69).ndims=2;
bio(69).size=[];


bio(70).blkName='Kalman Filter/kalman1/Integrator';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[3,1];
bio(70).sigWidth=3;
bio(70).sigAddress='&guitar2_B.Integrator[0]';
bio(70).ndims=2;
bio(70).size=[];


bio(71).blkName='Kalman Filter/kalman1/Sum2';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&guitar2_B.Sum2_b';
bio(71).ndims=2;
bio(71).size=[];


bio(72).blkName='Kalman Filter/kalman1/Sum3';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[3,1];
bio(72).sigWidth=3;
bio(72).sigAddress='&guitar2_B.Sum3[0]';
bio(72).ndims=2;
bio(72).size=[];


bio(73).blkName='Kalman Filter/kalman1/Sum4';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[3,1];
bio(73).sigWidth=3;
bio(73).sigAddress='&guitar2_B.Sum4[0]';
bio(73).ndims=2;
bio(73).size=[];


bio(74).blkName='Kalman Filter/kalman2/A';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[3,1];
bio(74).sigWidth=3;
bio(74).sigAddress='&guitar2_B.A_f[0]';
bio(74).ndims=2;
bio(74).size=[];


bio(75).blkName='Kalman Filter/kalman2/B';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[3,1];
bio(75).sigWidth=3;
bio(75).sigAddress='&guitar2_B.B_k[0]';
bio(75).ndims=2;
bio(75).size=[];


bio(76).blkName='Kalman Filter/kalman2/B1';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&guitar2_B.B1_d';
bio(76).ndims=2;
bio(76).size=[];


bio(77).blkName='Kalman Filter/kalman2/B2';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[1,1];
bio(77).sigWidth=1;
bio(77).sigAddress='&guitar2_B.B2_a';
bio(77).ndims=2;
bio(77).size=[];


bio(78).blkName='Kalman Filter/kalman2/B3';
bio(78).sigName='';
bio(78).portIdx=0;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&guitar2_B.B3_k';
bio(78).ndims=2;
bio(78).size=[];


bio(79).blkName='Kalman Filter/kalman2/C';
bio(79).sigName='';
bio(79).portIdx=0;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&guitar2_B.C_a';
bio(79).ndims=2;
bio(79).size=[];


bio(80).blkName='Kalman Filter/kalman2/K';
bio(80).sigName='';
bio(80).portIdx=0;
bio(80).dim=[3,1];
bio(80).sigWidth=3;
bio(80).sigAddress='&guitar2_B.K_o[0]';
bio(80).ndims=2;
bio(80).size=[];


bio(81).blkName='Kalman Filter/kalman2/Integrator';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[3,1];
bio(81).sigWidth=3;
bio(81).sigAddress='&guitar2_B.Integrator_h[0]';
bio(81).ndims=2;
bio(81).size=[];


bio(82).blkName='Kalman Filter/kalman2/Sum2';
bio(82).sigName='';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&guitar2_B.Sum2_e';
bio(82).ndims=2;
bio(82).size=[];


bio(83).blkName='Kalman Filter/kalman2/Sum3';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[3,1];
bio(83).sigWidth=3;
bio(83).sigAddress='&guitar2_B.Sum3_i[0]';
bio(83).ndims=2;
bio(83).size=[];


bio(84).blkName='Kalman Filter/kalman2/Sum4';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[3,1];
bio(84).sigWidth=3;
bio(84).sigAddress='&guitar2_B.Sum4_h[0]';
bio(84).ndims=2;
bio(84).size=[];


bio(85).blkName='trajectory planning/minimum jerk/MATLAB Function';
bio(85).sigName='des';
bio(85).portIdx=0;
bio(85).dim=[3,1];
bio(85).sigWidth=3;
bio(85).sigAddress='&guitar2_B.sf_MATLABFunction.des[0]';
bio(85).ndims=2;
bio(85).size=[];


bio(86).blkName='trajectory planning/minimum jerk/MATLAB Function1';
bio(86).sigName='des';
bio(86).portIdx=0;
bio(86).dim=[3,1];
bio(86).sigWidth=3;
bio(86).sigAddress='&guitar2_B.sf_MATLABFunction1.des[0]';
bio(86).ndims=2;
bio(86).size=[];


bio(87).blkName='trajectory planning/minimum jerk/Clock';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&guitar2_B.Clock_l';
bio(87).ndims=2;
bio(87).size=[];


bio(88).blkName='trajectory planning/minimum jerk/Gain';
bio(88).sigName='';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&guitar2_B.Gain_g';
bio(88).ndims=2;
bio(88).size=[];


bio(89).blkName='trajectory planning/minimum jerk/tag des pos1';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&guitar2_B.tagdespos1';
bio(89).ndims=2;
bio(89).size=[];


bio(90).blkName='trajectory planning/minimum jerk/tag des pos2';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&guitar2_B.tagdespos2';
bio(90).ndims=2;
bio(90).size=[];


bio(91).blkName='trajectory planning/minimum jerk/Saturation1';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&guitar2_B.Saturation1';
bio(91).ndims=2;
bio(91).size=[];


bio(92).blkName='trajectory planning/minimum jerk/Saturation2';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&guitar2_B.Saturation2';
bio(92).ndims=2;
bio(92).size=[];


bio(93).blkName='trajectory planning/minimum jerk/Sum1';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&guitar2_B.Sum1_j';
bio(93).ndims=2;
bio(93).size=[];


bio(94).blkName='trajectory planning/minimum jerk/Sum2';
bio(94).sigName='';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&guitar2_B.Sum2';
bio(94).ndims=2;
bio(94).size=[];


bio(95).blkName='Controller/PID/Compare To Constant/Compare';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&guitar2_B.Compare';
bio(95).ndims=2;
bio(95).size=[];


bio(96).blkName='Controller/PID/gain file/file readable outputs';
bio(96).sigName='y';
bio(96).portIdx=0;
bio(96).dim=[4,1];
bio(96).sigWidth=4;
bio(96).sigAddress='&guitar2_B.y[0]';
bio(96).ndims=2;
bio(96).size=[];


bio(97).blkName='Controller/PID/gain transition/gainramp/p1';
bio(97).sigName='val';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&guitar2_B.sf_gainramp_e.val';
bio(97).ndims=2;
bio(97).size=[];


bio(98).blkName='Controller/PID/gain transition/gainramp/p2';
bio(98).sigName='state1';
bio(98).portIdx=1;
bio(98).dim=[4,1];
bio(98).sigWidth=4;
bio(98).sigAddress='&guitar2_B.sf_gainramp_e.state1[0]';
bio(98).ndims=2;
bio(98).size=[];


bio(99).blkName='Controller/PID/gain transition/Memory';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[4,1];
bio(99).sigWidth=4;
bio(99).sigAddress='&guitar2_B.Memory_d[0]';
bio(99).ndims=2;
bio(99).size=[];


bio(100).blkName='Controller/PID/gain transition1/gainramp/p1';
bio(100).sigName='val';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&guitar2_B.sf_gainramp_a.val';
bio(100).ndims=2;
bio(100).size=[];


bio(101).blkName='Controller/PID/gain transition1/gainramp/p2';
bio(101).sigName='state1';
bio(101).portIdx=1;
bio(101).dim=[4,1];
bio(101).sigWidth=4;
bio(101).sigAddress='&guitar2_B.sf_gainramp_a.state1[0]';
bio(101).ndims=2;
bio(101).size=[];


bio(102).blkName='Controller/PID/gain transition1/Memory';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[4,1];
bio(102).sigWidth=4;
bio(102).sigAddress='&guitar2_B.Memory_i[0]';
bio(102).ndims=2;
bio(102).size=[];


bio(103).blkName='Controller/PID/gain transition2/gainramp/p1';
bio(103).sigName='val';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&guitar2_B.sf_gainramp.val';
bio(103).ndims=2;
bio(103).size=[];


bio(104).blkName='Controller/PID/gain transition2/gainramp/p2';
bio(104).sigName='state1';
bio(104).portIdx=1;
bio(104).dim=[4,1];
bio(104).sigWidth=4;
bio(104).sigAddress='&guitar2_B.sf_gainramp.state1[0]';
bio(104).ndims=2;
bio(104).size=[];


bio(105).blkName='Controller/PID/gain transition2/Memory';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[4,1];
bio(105).sigWidth=4;
bio(105).sigAddress='&guitar2_B.Memory[0]';
bio(105).ndims=2;
bio(105).size=[];


bio(106).blkName='Controller/PID/gain transition3/gainramp/p1';
bio(106).sigName='val';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&guitar2_B.sf_gainramp_h.val';
bio(106).ndims=2;
bio(106).size=[];


bio(107).blkName='Controller/PID/gain transition3/gainramp/p2';
bio(107).sigName='state1';
bio(107).portIdx=1;
bio(107).dim=[4,1];
bio(107).sigWidth=4;
bio(107).sigAddress='&guitar2_B.sf_gainramp_h.state1[0]';
bio(107).ndims=2;
bio(107).size=[];


bio(108).blkName='Controller/PID/gain transition3/Memory';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[4,1];
bio(108).sigWidth=4;
bio(108).sigAddress='&guitar2_B.Memory_j[0]';
bio(108).ndims=2;
bio(108).size=[];


bio(109).blkName='Controller/PID/gain transition4/gainramp/p1';
bio(109).sigName='val';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&guitar2_B.sf_gainramp_i.val';
bio(109).ndims=2;
bio(109).size=[];


bio(110).blkName='Controller/PID/gain transition4/gainramp/p2';
bio(110).sigName='state1';
bio(110).portIdx=1;
bio(110).dim=[4,1];
bio(110).sigWidth=4;
bio(110).sigAddress='&guitar2_B.sf_gainramp_i.state1[0]';
bio(110).ndims=2;
bio(110).size=[];


bio(111).blkName='Controller/PID/gain transition4/Memory';
bio(111).sigName='';
bio(111).portIdx=0;
bio(111).dim=[4,1];
bio(111).sigWidth=4;
bio(111).sigAddress='&guitar2_B.Memory_o[0]';
bio(111).ndims=2;
bio(111).size=[];


bio(112).blkName='Controller/start/Ramp/Clock';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&guitar2_B.Clock';
bio(112).ndims=2;
bio(112).size=[];


bio(113).blkName='Controller/start/Ramp/Product';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&guitar2_B.Product';
bio(113).ndims=2;
bio(113).size=[];


bio(114).blkName='Controller/start/Ramp/Step';
bio(114).sigName='';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&guitar2_B.Step';
bio(114).ndims=2;
bio(114).size=[];


bio(115).blkName='Controller/start/Ramp/Output';
bio(115).sigName='';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&guitar2_B.Output';
bio(115).ndims=2;
bio(115).size=[];


bio(116).blkName='Controller/start/Ramp/Sum';
bio(116).sigName='';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&guitar2_B.Sum_j';
bio(116).ndims=2;
bio(116).size=[];


function len = getlenBIO
len = 116;

