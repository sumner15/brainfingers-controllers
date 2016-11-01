function bio=guitar3bio
bio = [];
bio(1).blkName='Constant';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&guitar3_B.Constant';
bio(1).ndims=2;
bio(1).size=[];

bio(getlenBIO) = bio(1);

bio(2).blkName='Controller/Chart/p1';
bio(2).sigName='f';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&guitar3_B.f';
bio(2).ndims=2;
bio(2).size=[];


bio(3).blkName='Controller/Chart/p2';
bio(3).sigName='K1';
bio(3).portIdx=1;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&guitar3_B.K1';
bio(3).ndims=2;
bio(3).size=[];


bio(4).blkName='Controller/Chart/p3';
bio(4).sigName='K2';
bio(4).portIdx=2;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&guitar3_B.K2';
bio(4).ndims=2;
bio(4).size=[];


bio(5).blkName='Controller/Chart/p4';
bio(5).sigName='FStop';
bio(5).portIdx=3;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&guitar3_B.FStop';
bio(5).ndims=2;
bio(5).size=[];


bio(6).blkName='Controller/controller type: PID=1 AAN = 2 Generalized AAN =3';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&guitar3_B.controllertypePID1AAN2Generaliz';
bio(6).ndims=2;
bio(6).size=[];


bio(7).blkName='Controller/Multiport Switch';
bio(7).sigName='';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&guitar3_B.MultiportSwitch_o';
bio(7).ndims=2;
bio(7).size=[];


bio(8).blkName='Controller/Multiport Switch1';
bio(8).sigName='';
bio(8).portIdx=0;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&guitar3_B.MultiportSwitch1';
bio(8).ndims=2;
bio(8).size=[];


bio(9).blkName='Controller/Product';
bio(9).sigName='';
bio(9).portIdx=0;
bio(9).dim=[2,1];
bio(9).sigWidth=2;
bio(9).sigAddress='&guitar3_B.Product_c[0]';
bio(9).ndims=2;
bio(9).size=[];


bio(10).blkName='Controller Parameters/Adaptation Rate';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&guitar3_B.AdaptationRate';
bio(10).ndims=2;
bio(10).size=[];


bio(11).blkName='Controller Parameters/Lambda';
bio(11).sigName='';
bio(11).portIdx=0;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&guitar3_B.Lambda';
bio(11).ndims=2;
bio(11).size=[];


bio(12).blkName='Controller Parameters/PD d';
bio(12).sigName='';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&guitar3_B.PDd';
bio(12).ndims=2;
bio(12).size=[];


bio(13).blkName='Controller Parameters/PD p';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&guitar3_B.PDp';
bio(13).ndims=2;
bio(13).size=[];


bio(14).blkName='Controller Parameters/PD p1';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&guitar3_B.PDp1';
bio(14).ndims=2;
bio(14).size=[];


bio(15).blkName='Controller Parameters/forgetting rate';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&guitar3_B.forgettingrate';
bio(15).ndims=2;
bio(15).size=[];


bio(16).blkName='Host file/Embedded MATLAB Function1';
bio(16).sigName='out';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&guitar3_B.sf_EmbeddedMATLABFunction1.out';
bio(16).ndims=2;
bio(16).size=[];


bio(17).blkName='Host file/Embedded MATLAB Function2';
bio(17).sigName='out';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&guitar3_B.sf_EmbeddedMATLABFunction2.out';
bio(17).ndims=2;
bio(17).size=[];


bio(18).blkName='Host file/Embedded MATLAB Function3';
bio(18).sigName='out';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&guitar3_B.sf_EmbeddedMATLABFunction3.out';
bio(18).ndims=2;
bio(18).size=[];


bio(19).blkName='Host file/Embedded MATLAB Function4';
bio(19).sigName='out';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&guitar3_B.sf_EmbeddedMATLABFunction4.out';
bio(19).ndims=2;
bio(19).size=[];


bio(20).blkName='Kalman Filter/Gain';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[4,1];
bio(20).sigWidth=4;
bio(20).sigAddress='&guitar3_B.Gain_o[0]';
bio(20).ndims=2;
bio(20).size=[];


bio(21).blkName='Robot/Gain';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&guitar3_B.Gain';
bio(21).ndims=2;
bio(21).size=[];


bio(22).blkName='Robot/Gain1';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&guitar3_B.Gain1';
bio(22).ndims=2;
bio(22).size=[];


bio(23).blkName='Robot/Gain2';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&guitar3_B.Gain2_c';
bio(23).ndims=2;
bio(23).size=[];


bio(24).blkName='Robot/PCI 6221 ENC ';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&guitar3_B.PCI6221ENC';
bio(24).ndims=2;
bio(24).size=[];


bio(25).blkName='Robot/PCI 6221 ENC 1';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&guitar3_B.PCI6221ENC1';
bio(25).ndims=2;
bio(25).size=[];


bio(26).blkName='Robot/PCI-6221 AD1/p1';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&guitar3_B.PCI6221AD1_o1';
bio(26).ndims=2;
bio(26).size=[];


bio(27).blkName='Robot/PCI-6221 AD1/p2';
bio(27).sigName='';
bio(27).portIdx=1;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&guitar3_B.PCI6221AD1_o2';
bio(27).ndims=2;
bio(27).size=[];


bio(28).blkName='Robot/PCI-6221 AD1/p3';
bio(28).sigName='';
bio(28).portIdx=2;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&guitar3_B.PCI6221AD1_o3';
bio(28).ndims=2;
bio(28).size=[];


bio(29).blkName='Robot/Sum';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&guitar3_B.Sum_jp';
bio(29).ndims=2;
bio(29).size=[];


bio(30).blkName='trajectory planning/Embedded MATLAB Function1';
bio(30).sigName='trajB';
bio(30).portIdx=0;
bio(30).dim=[6,1];
bio(30).sigWidth=6;
bio(30).sigAddress='&guitar3_B.sf_EmbeddedMATLABFunction1_m.trajB[0]';
bio(30).ndims=2;
bio(30).size=[];


bio(31).blkName='trajectory planning/Embedded MATLAB Function2';
bio(31).sigName='trajB';
bio(31).portIdx=0;
bio(31).dim=[6,1];
bio(31).sigWidth=6;
bio(31).sigAddress='&guitar3_B.sf_EmbeddedMATLABFunction2_o.trajB[0]';
bio(31).ndims=2;
bio(31).size=[];


bio(32).blkName='trajectory planning/Gain1';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[6,1];
bio(32).sigWidth=6;
bio(32).sigAddress='&guitar3_B.Gain1_k[0]';
bio(32).ndims=2;
bio(32).size=[];


bio(33).blkName='trajectory planning/Gain2';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[6,1];
bio(33).sigWidth=6;
bio(33).sigAddress='&guitar3_B.Gain2_m[0]';
bio(33).ndims=2;
bio(33).size=[];


bio(34).blkName='trajectory planning/Gain3';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[6,1];
bio(34).sigWidth=6;
bio(34).sigAddress='&guitar3_B.Gain3_m[0]';
bio(34).ndims=2;
bio(34).size=[];


bio(35).blkName='trajectory planning/Gain4';
bio(35).sigName='';
bio(35).portIdx=0;
bio(35).dim=[6,1];
bio(35).sigWidth=6;
bio(35).sigAddress='&guitar3_B.Gain4[0]';
bio(35).ndims=2;
bio(35).size=[];


bio(36).blkName='trajectory planning/Gain5';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[6,1];
bio(36).sigWidth=6;
bio(36).sigAddress='&guitar3_B.Gain5[0]';
bio(36).ndims=2;
bio(36).size=[];


bio(37).blkName='trajectory planning/Multiport Switch';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[6,1];
bio(37).sigWidth=6;
bio(37).sigAddress='&guitar3_B.MultiportSwitch[0]';
bio(37).ndims=2;
bio(37).size=[];


bio(38).blkName='Controller/PID/Clock';
bio(38).sigName='';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&guitar3_B.Clock_ki';
bio(38).ndims=2;
bio(38).size=[];


bio(39).blkName='Controller/PID/Gain';
bio(39).sigName='';
bio(39).portIdx=0;
bio(39).dim=[1,1];
bio(39).sigWidth=1;
bio(39).sigAddress='&guitar3_B.Gain_f';
bio(39).ndims=2;
bio(39).size=[];


bio(40).blkName='Controller/PID/Gain1';
bio(40).sigName='';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&guitar3_B.Gain1_m';
bio(40).ndims=2;
bio(40).size=[];


bio(41).blkName='Controller/PID/Gain2';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&guitar3_B.Gain2';
bio(41).ndims=2;
bio(41).size=[];


bio(42).blkName='Controller/PID/Gain3';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&guitar3_B.Gain3';
bio(42).ndims=2;
bio(42).size=[];


bio(43).blkName='Controller/PID/Gain4';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&guitar3_B.Gain4_b';
bio(43).ndims=2;
bio(43).size=[];


bio(44).blkName='Controller/PID/Gain5';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&guitar3_B.Gain5_e';
bio(44).ndims=2;
bio(44).size=[];


bio(45).blkName='Controller/PID/Gain6';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&guitar3_B.Gain6';
bio(45).ndims=2;
bio(45).size=[];


bio(46).blkName='Controller/PID/Product1';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&guitar3_B.Product1';
bio(46).ndims=2;
bio(46).size=[];


bio(47).blkName='Controller/PID/Product2';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[1,1];
bio(47).sigWidth=1;
bio(47).sigAddress='&guitar3_B.Product2';
bio(47).ndims=2;
bio(47).size=[];


bio(48).blkName='Controller/PID/Product3';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&guitar3_B.Product3';
bio(48).ndims=2;
bio(48).size=[];


bio(49).blkName='Controller/PID/Product4';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&guitar3_B.Product4';
bio(49).ndims=2;
bio(49).size=[];


bio(50).blkName='Controller/PID/Product5';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&guitar3_B.Product5';
bio(50).ndims=2;
bio(50).size=[];


bio(51).blkName='Controller/PID/Product6';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&guitar3_B.Product6';
bio(51).ndims=2;
bio(51).size=[];


bio(52).blkName='Controller/PID/Sum';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&guitar3_B.Sum_d';
bio(52).ndims=2;
bio(52).size=[];


bio(53).blkName='Controller/PID/Sum1';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&guitar3_B.Sum1_e';
bio(53).ndims=2;
bio(53).size=[];


bio(54).blkName='Controller/PID/Sum2';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&guitar3_B.Sum2_p';
bio(54).ndims=2;
bio(54).size=[];


bio(55).blkName='Controller/PID/Sum3';
bio(55).sigName='';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&guitar3_B.Sum3_ir';
bio(55).ndims=2;
bio(55).size=[];


bio(56).blkName='Controller/PID/Sum4';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&guitar3_B.Sum4';
bio(56).ndims=2;
bio(56).size=[];


bio(57).blkName='Controller/PID/Sum5';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&guitar3_B.Sum5';
bio(57).ndims=2;
bio(57).size=[];


bio(58).blkName='Controller/PID/Sum6';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&guitar3_B.Sum6';
bio(58).ndims=2;
bio(58).size=[];


bio(59).blkName='Controller/PID/Sum7';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&guitar3_B.Sum7';
bio(59).ndims=2;
bio(59).size=[];


bio(60).blkName='Controller/PID/Sum8';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&guitar3_B.Sum8';
bio(60).ndims=2;
bio(60).size=[];


bio(61).blkName='Controller/PID/Sum9';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&guitar3_B.Sum9';
bio(61).ndims=2;
bio(61).size=[];


bio(62).blkName='Controller/start/Saturation';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&guitar3_B.Saturation';
bio(62).ndims=2;
bio(62).size=[];


bio(63).blkName='Controller/stop/Gain';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&guitar3_B.Gain_m';
bio(63).ndims=2;
bio(63).size=[];


bio(64).blkName='Controller/stop/Gain1';
bio(64).sigName='';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&guitar3_B.Gain1_c';
bio(64).ndims=2;
bio(64).size=[];


bio(65).blkName='Host file/Subsystem/Sum';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[1,1];
bio(65).sigWidth=1;
bio(65).sigAddress='&guitar3_B.Sum';
bio(65).ndims=2;
bio(65).size=[];


bio(66).blkName='Host file/Subsystem/Sum1';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&guitar3_B.Sum1';
bio(66).ndims=2;
bio(66).size=[];


bio(67).blkName='Kalman Filter/kalman1/A';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[3,1];
bio(67).sigWidth=3;
bio(67).sigAddress='&guitar3_B.A_m[0]';
bio(67).ndims=2;
bio(67).size=[];


bio(68).blkName='Kalman Filter/kalman1/B';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[3,1];
bio(68).sigWidth=3;
bio(68).sigAddress='&guitar3_B.B_p[0]';
bio(68).ndims=2;
bio(68).size=[];


bio(69).blkName='Kalman Filter/kalman1/B1';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&guitar3_B.B1_aw';
bio(69).ndims=2;
bio(69).size=[];


bio(70).blkName='Kalman Filter/kalman1/B2';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&guitar3_B.B2_c';
bio(70).ndims=2;
bio(70).size=[];


bio(71).blkName='Kalman Filter/kalman1/B3';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&guitar3_B.B3_a';
bio(71).ndims=2;
bio(71).size=[];


bio(72).blkName='Kalman Filter/kalman1/C';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&guitar3_B.C_e';
bio(72).ndims=2;
bio(72).size=[];


bio(73).blkName='Kalman Filter/kalman1/K';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[3,1];
bio(73).sigWidth=3;
bio(73).sigAddress='&guitar3_B.K_k[0]';
bio(73).ndims=2;
bio(73).size=[];


bio(74).blkName='Kalman Filter/kalman1/Integrator';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[3,1];
bio(74).sigWidth=3;
bio(74).sigAddress='&guitar3_B.Integrator_a[0]';
bio(74).ndims=2;
bio(74).size=[];


bio(75).blkName='Kalman Filter/kalman1/Sum2';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&guitar3_B.Sum2_b';
bio(75).ndims=2;
bio(75).size=[];


bio(76).blkName='Kalman Filter/kalman1/Sum3';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[3,1];
bio(76).sigWidth=3;
bio(76).sigAddress='&guitar3_B.Sum3_i[0]';
bio(76).ndims=2;
bio(76).size=[];


bio(77).blkName='Kalman Filter/kalman1/Sum4';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[3,1];
bio(77).sigWidth=3;
bio(77).sigAddress='&guitar3_B.Sum4_f[0]';
bio(77).ndims=2;
bio(77).size=[];


bio(78).blkName='Kalman Filter/kalman2/A';
bio(78).sigName='';
bio(78).portIdx=0;
bio(78).dim=[3,1];
bio(78).sigWidth=3;
bio(78).sigAddress='&guitar3_B.A_f[0]';
bio(78).ndims=2;
bio(78).size=[];


bio(79).blkName='Kalman Filter/kalman2/B';
bio(79).sigName='';
bio(79).portIdx=0;
bio(79).dim=[3,1];
bio(79).sigWidth=3;
bio(79).sigAddress='&guitar3_B.B_k[0]';
bio(79).ndims=2;
bio(79).size=[];


bio(80).blkName='Kalman Filter/kalman2/B1';
bio(80).sigName='';
bio(80).portIdx=0;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&guitar3_B.B1_d';
bio(80).ndims=2;
bio(80).size=[];


bio(81).blkName='Kalman Filter/kalman2/B2';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&guitar3_B.B2_am';
bio(81).ndims=2;
bio(81).size=[];


bio(82).blkName='Kalman Filter/kalman2/B3';
bio(82).sigName='';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&guitar3_B.B3_k';
bio(82).ndims=2;
bio(82).size=[];


bio(83).blkName='Kalman Filter/kalman2/C';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&guitar3_B.C_a';
bio(83).ndims=2;
bio(83).size=[];


bio(84).blkName='Kalman Filter/kalman2/K';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[3,1];
bio(84).sigWidth=3;
bio(84).sigAddress='&guitar3_B.K_o[0]';
bio(84).ndims=2;
bio(84).size=[];


bio(85).blkName='Kalman Filter/kalman2/Integrator';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[3,1];
bio(85).sigWidth=3;
bio(85).sigAddress='&guitar3_B.Integrator_hp[0]';
bio(85).ndims=2;
bio(85).size=[];


bio(86).blkName='Kalman Filter/kalman2/Sum2';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&guitar3_B.Sum2_e';
bio(86).ndims=2;
bio(86).size=[];


bio(87).blkName='Kalman Filter/kalman2/Sum3';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[3,1];
bio(87).sigWidth=3;
bio(87).sigAddress='&guitar3_B.Sum3_i1[0]';
bio(87).ndims=2;
bio(87).size=[];


bio(88).blkName='Kalman Filter/kalman2/Sum4';
bio(88).sigName='';
bio(88).portIdx=0;
bio(88).dim=[3,1];
bio(88).sigWidth=3;
bio(88).sigAddress='&guitar3_B.Sum4_h[0]';
bio(88).ndims=2;
bio(88).size=[];


bio(89).blkName='Kalman Filter/kalman3/A';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[3,1];
bio(89).sigWidth=3;
bio(89).sigAddress='&guitar3_B.A[0]';
bio(89).ndims=2;
bio(89).size=[];


bio(90).blkName='Kalman Filter/kalman3/B';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[3,1];
bio(90).sigWidth=3;
bio(90).sigAddress='&guitar3_B.B[0]';
bio(90).ndims=2;
bio(90).size=[];


bio(91).blkName='Kalman Filter/kalman3/B1';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&guitar3_B.B1';
bio(91).ndims=2;
bio(91).size=[];


bio(92).blkName='Kalman Filter/kalman3/B2';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&guitar3_B.B2';
bio(92).ndims=2;
bio(92).size=[];


bio(93).blkName='Kalman Filter/kalman3/B3';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&guitar3_B.B3';
bio(93).ndims=2;
bio(93).size=[];


bio(94).blkName='Kalman Filter/kalman3/C';
bio(94).sigName='';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&guitar3_B.C';
bio(94).ndims=2;
bio(94).size=[];


bio(95).blkName='Kalman Filter/kalman3/K';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[3,1];
bio(95).sigWidth=3;
bio(95).sigAddress='&guitar3_B.K[0]';
bio(95).ndims=2;
bio(95).size=[];


bio(96).blkName='Kalman Filter/kalman3/Integrator';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[3,1];
bio(96).sigWidth=3;
bio(96).sigAddress='&guitar3_B.Integrator[0]';
bio(96).ndims=2;
bio(96).size=[];


bio(97).blkName='Kalman Filter/kalman3/Sum2';
bio(97).sigName='';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&guitar3_B.Sum2_h';
bio(97).ndims=2;
bio(97).size=[];


bio(98).blkName='Kalman Filter/kalman3/Sum3';
bio(98).sigName='';
bio(98).portIdx=0;
bio(98).dim=[3,1];
bio(98).sigWidth=3;
bio(98).sigAddress='&guitar3_B.Sum3[0]';
bio(98).ndims=2;
bio(98).size=[];


bio(99).blkName='Kalman Filter/kalman3/Sum4';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[3,1];
bio(99).sigWidth=3;
bio(99).sigAddress='&guitar3_B.Sum4_c[0]';
bio(99).ndims=2;
bio(99).size=[];


bio(100).blkName='Kalman Filter/kalman4/A';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[3,1];
bio(100).sigWidth=3;
bio(100).sigAddress='&guitar3_B.A_d[0]';
bio(100).ndims=2;
bio(100).size=[];


bio(101).blkName='Kalman Filter/kalman4/B';
bio(101).sigName='';
bio(101).portIdx=0;
bio(101).dim=[3,1];
bio(101).sigWidth=3;
bio(101).sigAddress='&guitar3_B.B_o[0]';
bio(101).ndims=2;
bio(101).size=[];


bio(102).blkName='Kalman Filter/kalman4/B1';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&guitar3_B.B1_a';
bio(102).ndims=2;
bio(102).size=[];


bio(103).blkName='Kalman Filter/kalman4/B2';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&guitar3_B.B2_a';
bio(103).ndims=2;
bio(103).size=[];


bio(104).blkName='Kalman Filter/kalman4/B3';
bio(104).sigName='';
bio(104).portIdx=0;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&guitar3_B.B3_p';
bio(104).ndims=2;
bio(104).size=[];


bio(105).blkName='Kalman Filter/kalman4/C';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&guitar3_B.C_l';
bio(105).ndims=2;
bio(105).size=[];


bio(106).blkName='Kalman Filter/kalman4/K';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[3,1];
bio(106).sigWidth=3;
bio(106).sigAddress='&guitar3_B.K_a[0]';
bio(106).ndims=2;
bio(106).size=[];


bio(107).blkName='Kalman Filter/kalman4/Integrator';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[3,1];
bio(107).sigWidth=3;
bio(107).sigAddress='&guitar3_B.Integrator_h[0]';
bio(107).ndims=2;
bio(107).size=[];


bio(108).blkName='Kalman Filter/kalman4/Sum2';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&guitar3_B.Sum2_k';
bio(108).ndims=2;
bio(108).size=[];


bio(109).blkName='Kalman Filter/kalman4/Sum3';
bio(109).sigName='';
bio(109).portIdx=0;
bio(109).dim=[3,1];
bio(109).sigWidth=3;
bio(109).sigAddress='&guitar3_B.Sum3_p[0]';
bio(109).ndims=2;
bio(109).size=[];


bio(110).blkName='Kalman Filter/kalman4/Sum4';
bio(110).sigName='';
bio(110).portIdx=0;
bio(110).dim=[3,1];
bio(110).sigWidth=3;
bio(110).sigAddress='&guitar3_B.Sum4_p[0]';
bio(110).ndims=2;
bio(110).size=[];


bio(111).blkName='trajectory planning/minimum jerk/MATLAB Function';
bio(111).sigName='des';
bio(111).portIdx=0;
bio(111).dim=[3,1];
bio(111).sigWidth=3;
bio(111).sigAddress='&guitar3_B.sf_MATLABFunction_j.des[0]';
bio(111).ndims=2;
bio(111).size=[];


bio(112).blkName='trajectory planning/minimum jerk/MATLAB Function1';
bio(112).sigName='des';
bio(112).portIdx=0;
bio(112).dim=[3,1];
bio(112).sigWidth=3;
bio(112).sigAddress='&guitar3_B.sf_MATLABFunction1_d.des[0]';
bio(112).ndims=2;
bio(112).size=[];


bio(113).blkName='trajectory planning/minimum jerk/Clock';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&guitar3_B.Clock_l';
bio(113).ndims=2;
bio(113).size=[];


bio(114).blkName='trajectory planning/minimum jerk/Gain';
bio(114).sigName='';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&guitar3_B.Gain_g';
bio(114).ndims=2;
bio(114).size=[];


bio(115).blkName='trajectory planning/minimum jerk/tag des pos1';
bio(115).sigName='';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&guitar3_B.tagdespos1_b';
bio(115).ndims=2;
bio(115).size=[];


bio(116).blkName='trajectory planning/minimum jerk/tag des pos2';
bio(116).sigName='';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&guitar3_B.tagdespos2_a';
bio(116).ndims=2;
bio(116).size=[];


bio(117).blkName='trajectory planning/minimum jerk/Saturation1';
bio(117).sigName='';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&guitar3_B.Saturation1_f';
bio(117).ndims=2;
bio(117).size=[];


bio(118).blkName='trajectory planning/minimum jerk/Saturation2';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[1,1];
bio(118).sigWidth=1;
bio(118).sigAddress='&guitar3_B.Saturation2_b';
bio(118).ndims=2;
bio(118).size=[];


bio(119).blkName='trajectory planning/minimum jerk/Sum1';
bio(119).sigName='';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&guitar3_B.Sum1_j';
bio(119).ndims=2;
bio(119).size=[];


bio(120).blkName='trajectory planning/minimum jerk/Sum2';
bio(120).sigName='';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&guitar3_B.Sum2_d';
bio(120).ndims=2;
bio(120).size=[];


bio(121).blkName='trajectory planning/minimum jerk1/MATLAB Function';
bio(121).sigName='des';
bio(121).portIdx=0;
bio(121).dim=[3,1];
bio(121).sigWidth=3;
bio(121).sigAddress='&guitar3_B.sf_MATLABFunction.des[0]';
bio(121).ndims=2;
bio(121).size=[];


bio(122).blkName='trajectory planning/minimum jerk1/MATLAB Function1';
bio(122).sigName='des';
bio(122).portIdx=0;
bio(122).dim=[3,1];
bio(122).sigWidth=3;
bio(122).sigAddress='&guitar3_B.sf_MATLABFunction1.des[0]';
bio(122).ndims=2;
bio(122).size=[];


bio(123).blkName='trajectory planning/minimum jerk1/Clock';
bio(123).sigName='';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&guitar3_B.Clock_k';
bio(123).ndims=2;
bio(123).size=[];


bio(124).blkName='trajectory planning/minimum jerk1/Gain';
bio(124).sigName='';
bio(124).portIdx=0;
bio(124).dim=[1,1];
bio(124).sigWidth=1;
bio(124).sigAddress='&guitar3_B.Gain_h';
bio(124).ndims=2;
bio(124).size=[];


bio(125).blkName='trajectory planning/minimum jerk1/tag des pos1';
bio(125).sigName='';
bio(125).portIdx=0;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&guitar3_B.tagdespos1';
bio(125).ndims=2;
bio(125).size=[];


bio(126).blkName='trajectory planning/minimum jerk1/tag des pos2';
bio(126).sigName='';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&guitar3_B.tagdespos2';
bio(126).ndims=2;
bio(126).size=[];


bio(127).blkName='trajectory planning/minimum jerk1/Saturation1';
bio(127).sigName='';
bio(127).portIdx=0;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&guitar3_B.Saturation1';
bio(127).ndims=2;
bio(127).size=[];


bio(128).blkName='trajectory planning/minimum jerk1/Saturation2';
bio(128).sigName='';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&guitar3_B.Saturation2';
bio(128).ndims=2;
bio(128).size=[];


bio(129).blkName='trajectory planning/minimum jerk1/Sum1';
bio(129).sigName='';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&guitar3_B.Sum1_a';
bio(129).ndims=2;
bio(129).size=[];


bio(130).blkName='trajectory planning/minimum jerk1/Sum2';
bio(130).sigName='';
bio(130).portIdx=0;
bio(130).dim=[1,1];
bio(130).sigWidth=1;
bio(130).sigAddress='&guitar3_B.Sum2';
bio(130).ndims=2;
bio(130).size=[];


bio(131).blkName='Controller/PID/Compare To Constant/Compare';
bio(131).sigName='';
bio(131).portIdx=0;
bio(131).dim=[1,1];
bio(131).sigWidth=1;
bio(131).sigAddress='&guitar3_B.Compare';
bio(131).ndims=2;
bio(131).size=[];


bio(132).blkName='Controller/PID/Oscillator/MATLAB Function';
bio(132).sigName='y';
bio(132).portIdx=0;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&guitar3_B.y_f';
bio(132).ndims=2;
bio(132).size=[];


bio(133).blkName='Controller/PID/Oscillator/Clock';
bio(133).sigName='';
bio(133).portIdx=0;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&guitar3_B.Clock_n';
bio(133).ndims=2;
bio(133).size=[];


bio(134).blkName='Controller/PID/gain file/file readable outputs';
bio(134).sigName='y';
bio(134).portIdx=0;
bio(134).dim=[4,1];
bio(134).sigWidth=4;
bio(134).sigAddress='&guitar3_B.y[0]';
bio(134).ndims=2;
bio(134).size=[];


bio(135).blkName='Controller/PID/gain transition/gainramp/p1';
bio(135).sigName='val';
bio(135).portIdx=0;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&guitar3_B.sf_gainramp_e.val';
bio(135).ndims=2;
bio(135).size=[];


bio(136).blkName='Controller/PID/gain transition/gainramp/p2';
bio(136).sigName='state1';
bio(136).portIdx=1;
bio(136).dim=[4,1];
bio(136).sigWidth=4;
bio(136).sigAddress='&guitar3_B.sf_gainramp_e.state1[0]';
bio(136).ndims=2;
bio(136).size=[];


bio(137).blkName='Controller/PID/gain transition/Memory';
bio(137).sigName='';
bio(137).portIdx=0;
bio(137).dim=[4,1];
bio(137).sigWidth=4;
bio(137).sigAddress='&guitar3_B.Memory_d[0]';
bio(137).ndims=2;
bio(137).size=[];


bio(138).blkName='Controller/PID/gain transition1/gainramp/p1';
bio(138).sigName='val';
bio(138).portIdx=0;
bio(138).dim=[1,1];
bio(138).sigWidth=1;
bio(138).sigAddress='&guitar3_B.sf_gainramp_a.val';
bio(138).ndims=2;
bio(138).size=[];


bio(139).blkName='Controller/PID/gain transition1/gainramp/p2';
bio(139).sigName='state1';
bio(139).portIdx=1;
bio(139).dim=[4,1];
bio(139).sigWidth=4;
bio(139).sigAddress='&guitar3_B.sf_gainramp_a.state1[0]';
bio(139).ndims=2;
bio(139).size=[];


bio(140).blkName='Controller/PID/gain transition1/Memory';
bio(140).sigName='';
bio(140).portIdx=0;
bio(140).dim=[4,1];
bio(140).sigWidth=4;
bio(140).sigAddress='&guitar3_B.Memory_i[0]';
bio(140).ndims=2;
bio(140).size=[];


bio(141).blkName='Controller/PID/gain transition2/gainramp/p1';
bio(141).sigName='val';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&guitar3_B.sf_gainramp.val';
bio(141).ndims=2;
bio(141).size=[];


bio(142).blkName='Controller/PID/gain transition2/gainramp/p2';
bio(142).sigName='state1';
bio(142).portIdx=1;
bio(142).dim=[4,1];
bio(142).sigWidth=4;
bio(142).sigAddress='&guitar3_B.sf_gainramp.state1[0]';
bio(142).ndims=2;
bio(142).size=[];


bio(143).blkName='Controller/PID/gain transition2/Memory';
bio(143).sigName='';
bio(143).portIdx=0;
bio(143).dim=[4,1];
bio(143).sigWidth=4;
bio(143).sigAddress='&guitar3_B.Memory[0]';
bio(143).ndims=2;
bio(143).size=[];


bio(144).blkName='Controller/PID/gain transition3/gainramp/p1';
bio(144).sigName='val';
bio(144).portIdx=0;
bio(144).dim=[1,1];
bio(144).sigWidth=1;
bio(144).sigAddress='&guitar3_B.sf_gainramp_h.val';
bio(144).ndims=2;
bio(144).size=[];


bio(145).blkName='Controller/PID/gain transition3/gainramp/p2';
bio(145).sigName='state1';
bio(145).portIdx=1;
bio(145).dim=[4,1];
bio(145).sigWidth=4;
bio(145).sigAddress='&guitar3_B.sf_gainramp_h.state1[0]';
bio(145).ndims=2;
bio(145).size=[];


bio(146).blkName='Controller/PID/gain transition3/Memory';
bio(146).sigName='';
bio(146).portIdx=0;
bio(146).dim=[4,1];
bio(146).sigWidth=4;
bio(146).sigAddress='&guitar3_B.Memory_j[0]';
bio(146).ndims=2;
bio(146).size=[];


bio(147).blkName='Controller/PID/gain transition4/gainramp/p1';
bio(147).sigName='val';
bio(147).portIdx=0;
bio(147).dim=[1,1];
bio(147).sigWidth=1;
bio(147).sigAddress='&guitar3_B.sf_gainramp_i.val';
bio(147).ndims=2;
bio(147).size=[];


bio(148).blkName='Controller/PID/gain transition4/gainramp/p2';
bio(148).sigName='state1';
bio(148).portIdx=1;
bio(148).dim=[4,1];
bio(148).sigWidth=4;
bio(148).sigAddress='&guitar3_B.sf_gainramp_i.state1[0]';
bio(148).ndims=2;
bio(148).size=[];


bio(149).blkName='Controller/PID/gain transition4/Memory';
bio(149).sigName='';
bio(149).portIdx=0;
bio(149).dim=[4,1];
bio(149).sigWidth=4;
bio(149).sigAddress='&guitar3_B.Memory_o[0]';
bio(149).ndims=2;
bio(149).size=[];


bio(150).blkName='Controller/PID/gain transition5/gainramp/p1';
bio(150).sigName='val';
bio(150).portIdx=0;
bio(150).dim=[1,1];
bio(150).sigWidth=1;
bio(150).sigAddress='&guitar3_B.sf_gainramp_f.val';
bio(150).ndims=2;
bio(150).size=[];


bio(151).blkName='Controller/PID/gain transition5/gainramp/p2';
bio(151).sigName='state1';
bio(151).portIdx=1;
bio(151).dim=[4,1];
bio(151).sigWidth=4;
bio(151).sigAddress='&guitar3_B.sf_gainramp_f.state1[0]';
bio(151).ndims=2;
bio(151).size=[];


bio(152).blkName='Controller/PID/gain transition5/Memory';
bio(152).sigName='';
bio(152).portIdx=0;
bio(152).dim=[4,1];
bio(152).sigWidth=4;
bio(152).sigAddress='&guitar3_B.Memory_n[0]';
bio(152).ndims=2;
bio(152).size=[];


bio(153).blkName='Controller/PID/gain transition6/gainramp/p1';
bio(153).sigName='val';
bio(153).portIdx=0;
bio(153).dim=[1,1];
bio(153).sigWidth=1;
bio(153).sigAddress='&guitar3_B.val';
bio(153).ndims=2;
bio(153).size=[];


bio(154).blkName='Controller/PID/gain transition6/gainramp/p2';
bio(154).sigName='state1';
bio(154).portIdx=1;
bio(154).dim=[4,1];
bio(154).sigWidth=4;
bio(154).sigAddress='&guitar3_B.state1[0]';
bio(154).ndims=2;
bio(154).size=[];


bio(155).blkName='Controller/PID/gain transition6/Memory';
bio(155).sigName='';
bio(155).portIdx=0;
bio(155).dim=[4,1];
bio(155).sigWidth=4;
bio(155).sigAddress='&guitar3_B.Memory_j3[0]';
bio(155).ndims=2;
bio(155).size=[];


bio(156).blkName='Controller/start/Ramp/Clock';
bio(156).sigName='';
bio(156).portIdx=0;
bio(156).dim=[1,1];
bio(156).sigWidth=1;
bio(156).sigAddress='&guitar3_B.Clock';
bio(156).ndims=2;
bio(156).size=[];


bio(157).blkName='Controller/start/Ramp/Product';
bio(157).sigName='';
bio(157).portIdx=0;
bio(157).dim=[1,1];
bio(157).sigWidth=1;
bio(157).sigAddress='&guitar3_B.Product';
bio(157).ndims=2;
bio(157).size=[];


bio(158).blkName='Controller/start/Ramp/Step';
bio(158).sigName='';
bio(158).portIdx=0;
bio(158).dim=[1,1];
bio(158).sigWidth=1;
bio(158).sigAddress='&guitar3_B.Step';
bio(158).ndims=2;
bio(158).size=[];


bio(159).blkName='Controller/start/Ramp/Output';
bio(159).sigName='';
bio(159).portIdx=0;
bio(159).dim=[1,1];
bio(159).sigWidth=1;
bio(159).sigAddress='&guitar3_B.Output';
bio(159).ndims=2;
bio(159).size=[];


bio(160).blkName='Controller/start/Ramp/Sum';
bio(160).sigName='';
bio(160).portIdx=0;
bio(160).dim=[1,1];
bio(160).sigWidth=1;
bio(160).sigAddress='&guitar3_B.Sum_j';
bio(160).ndims=2;
bio(160).size=[];


bio(161).blkName='Kalman Filter/kalman3/Discrete Derivative/Diff';
bio(161).sigName='';
bio(161).portIdx=0;
bio(161).dim=[1,1];
bio(161).sigWidth=1;
bio(161).sigAddress='&guitar3_B.Diff';
bio(161).ndims=2;
bio(161).size=[];


bio(162).blkName='Kalman Filter/kalman3/Discrete Derivative/TSamp';
bio(162).sigName='';
bio(162).portIdx=0;
bio(162).dim=[1,1];
bio(162).sigWidth=1;
bio(162).sigAddress='&guitar3_B.TSamp';
bio(162).ndims=2;
bio(162).size=[];


bio(163).blkName='Kalman Filter/kalman3/Discrete Derivative/UD';
bio(163).sigName='U(k-1)';
bio(163).portIdx=0;
bio(163).dim=[1,1];
bio(163).sigWidth=1;
bio(163).sigAddress='&guitar3_B.Uk1';
bio(163).ndims=2;
bio(163).size=[];


bio(164).blkName='Kalman Filter/kalman4/Discrete Derivative/Diff';
bio(164).sigName='';
bio(164).portIdx=0;
bio(164).dim=[1,1];
bio(164).sigWidth=1;
bio(164).sigAddress='&guitar3_B.Diff_l';
bio(164).ndims=2;
bio(164).size=[];


bio(165).blkName='Kalman Filter/kalman4/Discrete Derivative/TSamp';
bio(165).sigName='';
bio(165).portIdx=0;
bio(165).dim=[1,1];
bio(165).sigWidth=1;
bio(165).sigAddress='&guitar3_B.TSamp_o';
bio(165).ndims=2;
bio(165).size=[];


bio(166).blkName='Kalman Filter/kalman4/Discrete Derivative/UD';
bio(166).sigName='U(k-1)';
bio(166).portIdx=0;
bio(166).dim=[1,1];
bio(166).sigWidth=1;
bio(166).sigAddress='&guitar3_B.Uk1_b';
bio(166).ndims=2;
bio(166).size=[];


function len = getlenBIO
len = 166;

