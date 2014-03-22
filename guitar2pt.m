function pt=guitar2pt
pt = [];
pt(1).blockname = 'Constant';
pt(1).paramname = 'Value';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(getlenPT) = pt(1);

pt(2).blockname = 'Controller/controller type: PID=1 AAN = 2 Generalized AAN =3';
pt(2).paramname = 'Value';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';

pt(3).blockname = 'Controller/stop forces';
pt(3).paramname = 'Value';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';

pt(4).blockname = 'Controller Parameters/Adaptation Rate';
pt(4).paramname = 'Value';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';

pt(5).blockname = 'Controller Parameters/Lambda';
pt(5).paramname = 'Value';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';

pt(6).blockname = 'Controller Parameters/PD d';
pt(6).paramname = 'Value';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';

pt(7).blockname = 'Controller Parameters/PD p';
pt(7).paramname = 'Value';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';

pt(8).blockname = 'Controller Parameters/PD p1';
pt(8).paramname = 'Value';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_DOUBLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';

pt(9).blockname = 'Controller Parameters/forgetting rate';
pt(9).paramname = 'Value';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';

pt(10).blockname = 'Kalman Filter/Gain';
pt(10).paramname = 'Gain';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';

pt(11).blockname = 'Robot/Constant';
pt(11).paramname = 'Value';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';

pt(12).blockname = 'Robot/Gain';
pt(12).paramname = 'Gain';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';

pt(13).blockname = 'Robot/Gain1';
pt(13).paramname = 'Gain';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';

pt(14).blockname = 'Robot/Gain2';
pt(14).paramname = 'Gain';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';

pt(15).blockname = 'Robot/PCI 6221 ENC ';
pt(15).paramname = 'P1';
pt(15).class     = 'scalar';
pt(15).nrows     = 1;
pt(15).ncols     = 1;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';

pt(16).blockname = 'Robot/PCI 6221 ENC ';
pt(16).paramname = 'P2';
pt(16).class     = 'scalar';
pt(16).nrows     = 1;
pt(16).ncols     = 1;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';

pt(17).blockname = 'Robot/PCI 6221 ENC ';
pt(17).paramname = 'P3';
pt(17).class     = 'scalar';
pt(17).nrows     = 1;
pt(17).ncols     = 1;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';

pt(18).blockname = 'Robot/PCI 6221 ENC ';
pt(18).paramname = 'P4';
pt(18).class     = 'scalar';
pt(18).nrows     = 1;
pt(18).ncols     = 1;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';

pt(19).blockname = 'Robot/PCI 6221 ENC ';
pt(19).paramname = 'P5';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';

pt(20).blockname = 'Robot/PCI 6221 ENC ';
pt(20).paramname = 'P6';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';

pt(21).blockname = 'Robot/PCI 6221 ENC ';
pt(21).paramname = 'P7';
pt(21).class     = 'scalar';
pt(21).nrows     = 1;
pt(21).ncols     = 1;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';

pt(22).blockname = 'Robot/PCI 6221 ENC ';
pt(22).paramname = 'P8';
pt(22).class     = 'scalar';
pt(22).nrows     = 1;
pt(22).ncols     = 1;
pt(22).subsource = 'SS_DOUBLE';
pt(22).ndims     = '2';
pt(22).size      = '[]';

pt(23).blockname = 'Robot/PCI 6221 ENC ';
pt(23).paramname = 'P9';
pt(23).class     = 'scalar';
pt(23).nrows     = 1;
pt(23).ncols     = 1;
pt(23).subsource = 'SS_DOUBLE';
pt(23).ndims     = '2';
pt(23).size      = '[]';

pt(24).blockname = 'Robot/PCI 6221 ENC ';
pt(24).paramname = 'P10';
pt(24).class     = 'scalar';
pt(24).nrows     = 1;
pt(24).ncols     = 1;
pt(24).subsource = 'SS_DOUBLE';
pt(24).ndims     = '2';
pt(24).size      = '[]';

pt(25).blockname = 'Robot/PCI 6221 ENC 1';
pt(25).paramname = 'P1';
pt(25).class     = 'scalar';
pt(25).nrows     = 1;
pt(25).ncols     = 1;
pt(25).subsource = 'SS_DOUBLE';
pt(25).ndims     = '2';
pt(25).size      = '[]';

pt(26).blockname = 'Robot/PCI 6221 ENC 1';
pt(26).paramname = 'P2';
pt(26).class     = 'scalar';
pt(26).nrows     = 1;
pt(26).ncols     = 1;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';

pt(27).blockname = 'Robot/PCI 6221 ENC 1';
pt(27).paramname = 'P3';
pt(27).class     = 'scalar';
pt(27).nrows     = 1;
pt(27).ncols     = 1;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';

pt(28).blockname = 'Robot/PCI 6221 ENC 1';
pt(28).paramname = 'P4';
pt(28).class     = 'scalar';
pt(28).nrows     = 1;
pt(28).ncols     = 1;
pt(28).subsource = 'SS_DOUBLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';

pt(29).blockname = 'Robot/PCI 6221 ENC 1';
pt(29).paramname = 'P5';
pt(29).class     = 'scalar';
pt(29).nrows     = 1;
pt(29).ncols     = 1;
pt(29).subsource = 'SS_DOUBLE';
pt(29).ndims     = '2';
pt(29).size      = '[]';

pt(30).blockname = 'Robot/PCI 6221 ENC 1';
pt(30).paramname = 'P6';
pt(30).class     = 'scalar';
pt(30).nrows     = 1;
pt(30).ncols     = 1;
pt(30).subsource = 'SS_DOUBLE';
pt(30).ndims     = '2';
pt(30).size      = '[]';

pt(31).blockname = 'Robot/PCI 6221 ENC 1';
pt(31).paramname = 'P7';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_DOUBLE';
pt(31).ndims     = '2';
pt(31).size      = '[]';

pt(32).blockname = 'Robot/PCI 6221 ENC 1';
pt(32).paramname = 'P8';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_DOUBLE';
pt(32).ndims     = '2';
pt(32).size      = '[]';

pt(33).blockname = 'Robot/PCI 6221 ENC 1';
pt(33).paramname = 'P9';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_DOUBLE';
pt(33).ndims     = '2';
pt(33).size      = '[]';

pt(34).blockname = 'Robot/PCI 6221 ENC 1';
pt(34).paramname = 'P10';
pt(34).class     = 'scalar';
pt(34).nrows     = 1;
pt(34).ncols     = 1;
pt(34).subsource = 'SS_DOUBLE';
pt(34).ndims     = '2';
pt(34).size      = '[]';

pt(35).blockname = 'Robot/PCI-6221 AD1';
pt(35).paramname = 'P1';
pt(35).class     = 'vector';
pt(35).nrows     = 1;
pt(35).ncols     = 3;
pt(35).subsource = 'SS_DOUBLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';

pt(36).blockname = 'Robot/PCI-6221 AD1';
pt(36).paramname = 'P2';
pt(36).class     = 'vector';
pt(36).nrows     = 1;
pt(36).ncols     = 3;
pt(36).subsource = 'SS_DOUBLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';

pt(37).blockname = 'Robot/PCI-6221 AD1';
pt(37).paramname = 'P3';
pt(37).class     = 'vector';
pt(37).nrows     = 1;
pt(37).ncols     = 3;
pt(37).subsource = 'SS_DOUBLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';

pt(38).blockname = 'Robot/PCI-6221 AD1';
pt(38).paramname = 'P4';
pt(38).class     = 'scalar';
pt(38).nrows     = 1;
pt(38).ncols     = 1;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';

pt(39).blockname = 'Robot/PCI-6221 AD1';
pt(39).paramname = 'P5';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_DOUBLE';
pt(39).ndims     = '2';
pt(39).size      = '[]';

pt(40).blockname = 'Robot/PCI-6221 AD1';
pt(40).paramname = 'P6';
pt(40).class     = 'scalar';
pt(40).nrows     = 1;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_DOUBLE';
pt(40).ndims     = '2';
pt(40).size      = '[]';

pt(41).blockname = 'Robot/PCI-6221 AD1';
pt(41).paramname = 'P7';
pt(41).class     = 'scalar';
pt(41).nrows     = 1;
pt(41).ncols     = 1;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';

pt(42).blockname = 'Robot/PCI-6221 DA';
pt(42).paramname = 'P1';
pt(42).class     = 'vector';
pt(42).nrows     = 1;
pt(42).ncols     = 2;
pt(42).subsource = 'SS_DOUBLE';
pt(42).ndims     = '2';
pt(42).size      = '[]';

pt(43).blockname = 'Robot/PCI-6221 DA';
pt(43).paramname = 'P2';
pt(43).class     = 'vector';
pt(43).nrows     = 1;
pt(43).ncols     = 2;
pt(43).subsource = 'SS_DOUBLE';
pt(43).ndims     = '2';
pt(43).size      = '[]';

pt(44).blockname = 'Robot/PCI-6221 DA';
pt(44).paramname = 'P3';
pt(44).class     = 'vector';
pt(44).nrows     = 1;
pt(44).ncols     = 2;
pt(44).subsource = 'SS_DOUBLE';
pt(44).ndims     = '2';
pt(44).size      = '[]';

pt(45).blockname = 'Robot/PCI-6221 DA';
pt(45).paramname = 'P4';
pt(45).class     = 'vector';
pt(45).nrows     = 1;
pt(45).ncols     = 2;
pt(45).subsource = 'SS_DOUBLE';
pt(45).ndims     = '2';
pt(45).size      = '[]';

pt(46).blockname = 'Robot/PCI-6221 DA';
pt(46).paramname = 'P5';
pt(46).class     = 'scalar';
pt(46).nrows     = 1;
pt(46).ncols     = 1;
pt(46).subsource = 'SS_DOUBLE';
pt(46).ndims     = '2';
pt(46).size      = '[]';

pt(47).blockname = 'Robot/PCI-6221 DA';
pt(47).paramname = 'P6';
pt(47).class     = 'scalar';
pt(47).nrows     = 1;
pt(47).ncols     = 1;
pt(47).subsource = 'SS_DOUBLE';
pt(47).ndims     = '2';
pt(47).size      = '[]';

pt(48).blockname = 'Robot/PCI-6221 DA';
pt(48).paramname = 'P7';
pt(48).class     = 'scalar';
pt(48).nrows     = 1;
pt(48).ncols     = 1;
pt(48).subsource = 'SS_DOUBLE';
pt(48).ndims     = '2';
pt(48).size      = '[]';

pt(49).blockname = 'trajectory planning/Ampletude1';
pt(49).paramname = 'Value';
pt(49).class     = 'scalar';
pt(49).nrows     = 1;
pt(49).ncols     = 1;
pt(49).subsource = 'SS_DOUBLE';
pt(49).ndims     = '2';
pt(49).size      = '[]';

pt(50).blockname = 'trajectory planning/Ampletude2';
pt(50).paramname = 'Value';
pt(50).class     = 'scalar';
pt(50).nrows     = 1;
pt(50).ncols     = 1;
pt(50).subsource = 'SS_DOUBLE';
pt(50).ndims     = '2';
pt(50).size      = '[]';

pt(51).blockname = 'trajectory planning/Sin wave = 1 minimu jerk = 2';
pt(51).paramname = 'Value';
pt(51).class     = 'scalar';
pt(51).nrows     = 1;
pt(51).ncols     = 1;
pt(51).subsource = 'SS_DOUBLE';
pt(51).ndims     = '2';
pt(51).size      = '[]';

pt(52).blockname = 'trajectory planning/durationBlue';
pt(52).paramname = 'Value';
pt(52).class     = 'scalar';
pt(52).nrows     = 1;
pt(52).ncols     = 1;
pt(52).subsource = 'SS_DOUBLE';
pt(52).ndims     = '2';
pt(52).size      = '[]';

pt(53).blockname = 'trajectory planning/durationGold';
pt(53).paramname = 'Value';
pt(53).class     = 'scalar';
pt(53).nrows     = 1;
pt(53).ncols     = 1;
pt(53).subsource = 'SS_DOUBLE';
pt(53).ndims     = '2';
pt(53).size      = '[]';

pt(54).blockname = 'trajectory planning/finalPosBlue';
pt(54).paramname = 'Value';
pt(54).class     = 'scalar';
pt(54).nrows     = 1;
pt(54).ncols     = 1;
pt(54).subsource = 'SS_DOUBLE';
pt(54).ndims     = '2';
pt(54).size      = '[]';

pt(55).blockname = 'trajectory planning/finalPosGold';
pt(55).paramname = 'Value';
pt(55).class     = 'scalar';
pt(55).nrows     = 1;
pt(55).ncols     = 1;
pt(55).subsource = 'SS_DOUBLE';
pt(55).ndims     = '2';
pt(55).size      = '[]';

pt(56).blockname = 'trajectory planning/frequency1';
pt(56).paramname = 'Value';
pt(56).class     = 'scalar';
pt(56).nrows     = 1;
pt(56).ncols     = 1;
pt(56).subsource = 'SS_DOUBLE';
pt(56).ndims     = '2';
pt(56).size      = '[]';

pt(57).blockname = 'trajectory planning/frequency2';
pt(57).paramname = 'Value';
pt(57).class     = 'scalar';
pt(57).nrows     = 1;
pt(57).ncols     = 1;
pt(57).subsource = 'SS_DOUBLE';
pt(57).ndims     = '2';
pt(57).size      = '[]';

pt(58).blockname = 'trajectory planning/hitTimeBlue';
pt(58).paramname = 'Value';
pt(58).class     = 'scalar';
pt(58).nrows     = 1;
pt(58).ncols     = 1;
pt(58).subsource = 'SS_DOUBLE';
pt(58).ndims     = '2';
pt(58).size      = '[]';

pt(59).blockname = 'trajectory planning/hitTimeGold';
pt(59).paramname = 'Value';
pt(59).class     = 'scalar';
pt(59).nrows     = 1;
pt(59).ncols     = 1;
pt(59).subsource = 'SS_DOUBLE';
pt(59).ndims     = '2';
pt(59).size      = '[]';

pt(60).blockname = 'trajectory planning/Gain1';
pt(60).paramname = 'Gain';
pt(60).class     = 'scalar';
pt(60).nrows     = 1;
pt(60).ncols     = 1;
pt(60).subsource = 'SS_DOUBLE';
pt(60).ndims     = '2';
pt(60).size      = '[]';

pt(61).blockname = 'trajectory planning/Gain2';
pt(61).paramname = 'Gain';
pt(61).class     = 'scalar';
pt(61).nrows     = 1;
pt(61).ncols     = 1;
pt(61).subsource = 'SS_DOUBLE';
pt(61).ndims     = '2';
pt(61).size      = '[]';

pt(62).blockname = 'trajectory planning/Gain3';
pt(62).paramname = 'Gain';
pt(62).class     = 'scalar';
pt(62).nrows     = 1;
pt(62).ncols     = 1;
pt(62).subsource = 'SS_DOUBLE';
pt(62).ndims     = '2';
pt(62).size      = '[]';

pt(63).blockname = 'Controller/PID/Kd2 gain';
pt(63).paramname = 'Value';
pt(63).class     = 'scalar';
pt(63).nrows     = 1;
pt(63).ncols     = 1;
pt(63).subsource = 'SS_DOUBLE';
pt(63).ndims     = '2';
pt(63).size      = '[]';

pt(64).blockname = 'Controller/PID/Kp2 gain';
pt(64).paramname = 'Value';
pt(64).class     = 'scalar';
pt(64).nrows     = 1;
pt(64).ncols     = 1;
pt(64).subsource = 'SS_DOUBLE';
pt(64).ndims     = '2';
pt(64).size      = '[]';

pt(65).blockname = 'Controller/PID/add position offset';
pt(65).paramname = 'Value';
pt(65).class     = 'scalar';
pt(65).nrows     = 1;
pt(65).ncols     = 1;
pt(65).subsource = 'SS_DOUBLE';
pt(65).ndims     = '2';
pt(65).size      = '[]';

pt(66).blockname = 'Controller/PID/kd1 gain';
pt(66).paramname = 'Value';
pt(66).class     = 'scalar';
pt(66).nrows     = 1;
pt(66).ncols     = 1;
pt(66).subsource = 'SS_DOUBLE';
pt(66).ndims     = '2';
pt(66).size      = '[]';

pt(67).blockname = 'Controller/PID/kp1 gain';
pt(67).paramname = 'Value';
pt(67).class     = 'scalar';
pt(67).nrows     = 1;
pt(67).ncols     = 1;
pt(67).subsource = 'SS_DOUBLE';
pt(67).ndims     = '2';
pt(67).size      = '[]';

pt(68).blockname = 'Controller/PID/sigmoid duration in seconds';
pt(68).paramname = 'Value';
pt(68).class     = 'scalar';
pt(68).nrows     = 1;
pt(68).ncols     = 1;
pt(68).subsource = 'SS_DOUBLE';
pt(68).ndims     = '2';
pt(68).size      = '[]';

pt(69).blockname = 'Controller/PID/sigmoid duration in seconds1';
pt(69).paramname = 'Value';
pt(69).class     = 'scalar';
pt(69).nrows     = 1;
pt(69).ncols     = 1;
pt(69).subsource = 'SS_DOUBLE';
pt(69).ndims     = '2';
pt(69).size      = '[]';

pt(70).blockname = 'Controller/PID/Gain';
pt(70).paramname = 'Gain';
pt(70).class     = 'scalar';
pt(70).nrows     = 1;
pt(70).ncols     = 1;
pt(70).subsource = 'SS_DOUBLE';
pt(70).ndims     = '2';
pt(70).size      = '[]';

pt(71).blockname = 'Controller/PID/Gain1';
pt(71).paramname = 'Gain';
pt(71).class     = 'scalar';
pt(71).nrows     = 1;
pt(71).ncols     = 1;
pt(71).subsource = 'SS_DOUBLE';
pt(71).ndims     = '2';
pt(71).size      = '[]';

pt(72).blockname = 'Controller/PID/Gain2';
pt(72).paramname = 'Gain';
pt(72).class     = 'scalar';
pt(72).nrows     = 1;
pt(72).ncols     = 1;
pt(72).subsource = 'SS_DOUBLE';
pt(72).ndims     = '2';
pt(72).size      = '[]';

pt(73).blockname = 'Controller/PID/Gain3';
pt(73).paramname = 'Gain';
pt(73).class     = 'scalar';
pt(73).nrows     = 1;
pt(73).ncols     = 1;
pt(73).subsource = 'SS_DOUBLE';
pt(73).ndims     = '2';
pt(73).size      = '[]';

pt(74).blockname = 'Controller/PID/Gain4';
pt(74).paramname = 'Gain';
pt(74).class     = 'scalar';
pt(74).nrows     = 1;
pt(74).ncols     = 1;
pt(74).subsource = 'SS_DOUBLE';
pt(74).ndims     = '2';
pt(74).size      = '[]';

pt(75).blockname = 'Controller/PID/Gain5';
pt(75).paramname = 'Gain';
pt(75).class     = 'scalar';
pt(75).nrows     = 1;
pt(75).ncols     = 1;
pt(75).subsource = 'SS_DOUBLE';
pt(75).ndims     = '2';
pt(75).size      = '[]';

pt(76).blockname = 'Controller/start/Saturation';
pt(76).paramname = 'UpperLimit';
pt(76).class     = 'scalar';
pt(76).nrows     = 1;
pt(76).ncols     = 1;
pt(76).subsource = 'SS_DOUBLE';
pt(76).ndims     = '2';
pt(76).size      = '[]';

pt(77).blockname = 'Controller/start/Saturation';
pt(77).paramname = 'LowerLimit';
pt(77).class     = 'scalar';
pt(77).nrows     = 1;
pt(77).ncols     = 1;
pt(77).subsource = 'SS_DOUBLE';
pt(77).ndims     = '2';
pt(77).size      = '[]';

pt(78).blockname = 'Controller/stop/Gain';
pt(78).paramname = 'Gain';
pt(78).class     = 'scalar';
pt(78).nrows     = 1;
pt(78).ncols     = 1;
pt(78).subsource = 'SS_DOUBLE';
pt(78).ndims     = '2';
pt(78).size      = '[]';

pt(79).blockname = 'Controller/stop/Gain1';
pt(79).paramname = 'Gain';
pt(79).class     = 'scalar';
pt(79).nrows     = 1;
pt(79).ncols     = 1;
pt(79).subsource = 'SS_DOUBLE';
pt(79).ndims     = '2';
pt(79).size      = '[]';

pt(80).blockname = 'Kalman Filter/kalman1/A';
pt(80).paramname = 'Gain';
pt(80).class     = 'col-mat';
pt(80).nrows     = 3;
pt(80).ncols     = 3;
pt(80).subsource = 'SS_DOUBLE';
pt(80).ndims     = '2';
pt(80).size      = '[]';

pt(81).blockname = 'Kalman Filter/kalman1/B';
pt(81).paramname = 'Gain';
pt(81).class     = 'vector';
pt(81).nrows     = 3;
pt(81).ncols     = 1;
pt(81).subsource = 'SS_DOUBLE';
pt(81).ndims     = '2';
pt(81).size      = '[]';

pt(82).blockname = 'Kalman Filter/kalman1/B1';
pt(82).paramname = 'Gain';
pt(82).class     = 'scalar';
pt(82).nrows     = 1;
pt(82).ncols     = 1;
pt(82).subsource = 'SS_DOUBLE';
pt(82).ndims     = '2';
pt(82).size      = '[]';

pt(83).blockname = 'Kalman Filter/kalman1/B2';
pt(83).paramname = 'Gain';
pt(83).class     = 'scalar';
pt(83).nrows     = 1;
pt(83).ncols     = 1;
pt(83).subsource = 'SS_DOUBLE';
pt(83).ndims     = '2';
pt(83).size      = '[]';

pt(84).blockname = 'Kalman Filter/kalman1/B3';
pt(84).paramname = 'Gain';
pt(84).class     = 'scalar';
pt(84).nrows     = 1;
pt(84).ncols     = 1;
pt(84).subsource = 'SS_DOUBLE';
pt(84).ndims     = '2';
pt(84).size      = '[]';

pt(85).blockname = 'Kalman Filter/kalman1/C';
pt(85).paramname = 'Gain';
pt(85).class     = 'vector';
pt(85).nrows     = 1;
pt(85).ncols     = 3;
pt(85).subsource = 'SS_DOUBLE';
pt(85).ndims     = '2';
pt(85).size      = '[]';

pt(86).blockname = 'Kalman Filter/kalman1/K';
pt(86).paramname = 'Gain';
pt(86).class     = 'vector';
pt(86).nrows     = 3;
pt(86).ncols     = 1;
pt(86).subsource = 'SS_DOUBLE';
pt(86).ndims     = '2';
pt(86).size      = '[]';

pt(87).blockname = 'Kalman Filter/kalman1/Integrator';
pt(87).paramname = 'InitialCondition';
pt(87).class     = 'vector';
pt(87).nrows     = 3;
pt(87).ncols     = 1;
pt(87).subsource = 'SS_DOUBLE';
pt(87).ndims     = '2';
pt(87).size      = '[]';

pt(88).blockname = 'Kalman Filter/kalman2/A';
pt(88).paramname = 'Gain';
pt(88).class     = 'col-mat';
pt(88).nrows     = 3;
pt(88).ncols     = 3;
pt(88).subsource = 'SS_DOUBLE';
pt(88).ndims     = '2';
pt(88).size      = '[]';

pt(89).blockname = 'Kalman Filter/kalman2/B';
pt(89).paramname = 'Gain';
pt(89).class     = 'vector';
pt(89).nrows     = 3;
pt(89).ncols     = 1;
pt(89).subsource = 'SS_DOUBLE';
pt(89).ndims     = '2';
pt(89).size      = '[]';

pt(90).blockname = 'Kalman Filter/kalman2/B1';
pt(90).paramname = 'Gain';
pt(90).class     = 'scalar';
pt(90).nrows     = 1;
pt(90).ncols     = 1;
pt(90).subsource = 'SS_DOUBLE';
pt(90).ndims     = '2';
pt(90).size      = '[]';

pt(91).blockname = 'Kalman Filter/kalman2/B2';
pt(91).paramname = 'Gain';
pt(91).class     = 'scalar';
pt(91).nrows     = 1;
pt(91).ncols     = 1;
pt(91).subsource = 'SS_DOUBLE';
pt(91).ndims     = '2';
pt(91).size      = '[]';

pt(92).blockname = 'Kalman Filter/kalman2/B3';
pt(92).paramname = 'Gain';
pt(92).class     = 'scalar';
pt(92).nrows     = 1;
pt(92).ncols     = 1;
pt(92).subsource = 'SS_DOUBLE';
pt(92).ndims     = '2';
pt(92).size      = '[]';

pt(93).blockname = 'Kalman Filter/kalman2/C';
pt(93).paramname = 'Gain';
pt(93).class     = 'vector';
pt(93).nrows     = 1;
pt(93).ncols     = 3;
pt(93).subsource = 'SS_DOUBLE';
pt(93).ndims     = '2';
pt(93).size      = '[]';

pt(94).blockname = 'Kalman Filter/kalman2/K';
pt(94).paramname = 'Gain';
pt(94).class     = 'vector';
pt(94).nrows     = 3;
pt(94).ncols     = 1;
pt(94).subsource = 'SS_DOUBLE';
pt(94).ndims     = '2';
pt(94).size      = '[]';

pt(95).blockname = 'Kalman Filter/kalman2/Integrator';
pt(95).paramname = 'InitialCondition';
pt(95).class     = 'vector';
pt(95).nrows     = 3;
pt(95).ncols     = 1;
pt(95).subsource = 'SS_DOUBLE';
pt(95).ndims     = '2';
pt(95).size      = '[]';

pt(96).blockname = 'Kalman Filter/kalman3/A';
pt(96).paramname = 'Gain';
pt(96).class     = 'col-mat';
pt(96).nrows     = 3;
pt(96).ncols     = 3;
pt(96).subsource = 'SS_DOUBLE';
pt(96).ndims     = '2';
pt(96).size      = '[]';

pt(97).blockname = 'Kalman Filter/kalman3/B';
pt(97).paramname = 'Gain';
pt(97).class     = 'vector';
pt(97).nrows     = 3;
pt(97).ncols     = 1;
pt(97).subsource = 'SS_DOUBLE';
pt(97).ndims     = '2';
pt(97).size      = '[]';

pt(98).blockname = 'Kalman Filter/kalman3/B1';
pt(98).paramname = 'Gain';
pt(98).class     = 'scalar';
pt(98).nrows     = 1;
pt(98).ncols     = 1;
pt(98).subsource = 'SS_DOUBLE';
pt(98).ndims     = '2';
pt(98).size      = '[]';

pt(99).blockname = 'Kalman Filter/kalman3/B2';
pt(99).paramname = 'Gain';
pt(99).class     = 'scalar';
pt(99).nrows     = 1;
pt(99).ncols     = 1;
pt(99).subsource = 'SS_DOUBLE';
pt(99).ndims     = '2';
pt(99).size      = '[]';

pt(100).blockname = 'Kalman Filter/kalman3/B3';
pt(100).paramname = 'Gain';
pt(100).class     = 'scalar';
pt(100).nrows     = 1;
pt(100).ncols     = 1;
pt(100).subsource = 'SS_DOUBLE';
pt(100).ndims     = '2';
pt(100).size      = '[]';

pt(101).blockname = 'Kalman Filter/kalman3/C';
pt(101).paramname = 'Gain';
pt(101).class     = 'vector';
pt(101).nrows     = 1;
pt(101).ncols     = 3;
pt(101).subsource = 'SS_DOUBLE';
pt(101).ndims     = '2';
pt(101).size      = '[]';

pt(102).blockname = 'Kalman Filter/kalman3/K';
pt(102).paramname = 'Gain';
pt(102).class     = 'vector';
pt(102).nrows     = 3;
pt(102).ncols     = 1;
pt(102).subsource = 'SS_DOUBLE';
pt(102).ndims     = '2';
pt(102).size      = '[]';

pt(103).blockname = 'Kalman Filter/kalman3/Integrator';
pt(103).paramname = 'InitialCondition';
pt(103).class     = 'vector';
pt(103).nrows     = 3;
pt(103).ncols     = 1;
pt(103).subsource = 'SS_DOUBLE';
pt(103).ndims     = '2';
pt(103).size      = '[]';

pt(104).blockname = 'Kalman Filter/kalman4/A';
pt(104).paramname = 'Gain';
pt(104).class     = 'col-mat';
pt(104).nrows     = 3;
pt(104).ncols     = 3;
pt(104).subsource = 'SS_DOUBLE';
pt(104).ndims     = '2';
pt(104).size      = '[]';

pt(105).blockname = 'Kalman Filter/kalman4/B';
pt(105).paramname = 'Gain';
pt(105).class     = 'vector';
pt(105).nrows     = 3;
pt(105).ncols     = 1;
pt(105).subsource = 'SS_DOUBLE';
pt(105).ndims     = '2';
pt(105).size      = '[]';

pt(106).blockname = 'Kalman Filter/kalman4/B1';
pt(106).paramname = 'Gain';
pt(106).class     = 'scalar';
pt(106).nrows     = 1;
pt(106).ncols     = 1;
pt(106).subsource = 'SS_DOUBLE';
pt(106).ndims     = '2';
pt(106).size      = '[]';

pt(107).blockname = 'Kalman Filter/kalman4/B2';
pt(107).paramname = 'Gain';
pt(107).class     = 'scalar';
pt(107).nrows     = 1;
pt(107).ncols     = 1;
pt(107).subsource = 'SS_DOUBLE';
pt(107).ndims     = '2';
pt(107).size      = '[]';

pt(108).blockname = 'Kalman Filter/kalman4/B3';
pt(108).paramname = 'Gain';
pt(108).class     = 'scalar';
pt(108).nrows     = 1;
pt(108).ncols     = 1;
pt(108).subsource = 'SS_DOUBLE';
pt(108).ndims     = '2';
pt(108).size      = '[]';

pt(109).blockname = 'Kalman Filter/kalman4/C';
pt(109).paramname = 'Gain';
pt(109).class     = 'vector';
pt(109).nrows     = 1;
pt(109).ncols     = 3;
pt(109).subsource = 'SS_DOUBLE';
pt(109).ndims     = '2';
pt(109).size      = '[]';

pt(110).blockname = 'Kalman Filter/kalman4/K';
pt(110).paramname = 'Gain';
pt(110).class     = 'vector';
pt(110).nrows     = 3;
pt(110).ncols     = 1;
pt(110).subsource = 'SS_DOUBLE';
pt(110).ndims     = '2';
pt(110).size      = '[]';

pt(111).blockname = 'Kalman Filter/kalman4/Integrator';
pt(111).paramname = 'InitialCondition';
pt(111).class     = 'vector';
pt(111).nrows     = 3;
pt(111).ncols     = 1;
pt(111).subsource = 'SS_DOUBLE';
pt(111).ndims     = '2';
pt(111).size      = '[]';

pt(112).blockname = 'trajectory planning/block commands/block command blue';
pt(112).paramname = 'Value';
pt(112).class     = 'scalar';
pt(112).nrows     = 1;
pt(112).ncols     = 1;
pt(112).subsource = 'SS_DOUBLE';
pt(112).ndims     = '2';
pt(112).size      = '[]';

pt(113).blockname = 'trajectory planning/block commands/block command gold';
pt(113).paramname = 'Value';
pt(113).class     = 'scalar';
pt(113).nrows     = 1;
pt(113).ncols     = 1;
pt(113).subsource = 'SS_DOUBLE';
pt(113).ndims     = '2';
pt(113).size      = '[]';

pt(114).blockname = 'trajectory planning/block commands/block fraction';
pt(114).paramname = 'Value';
pt(114).class     = 'scalar';
pt(114).nrows     = 1;
pt(114).ncols     = 1;
pt(114).subsource = 'SS_DOUBLE';
pt(114).ndims     = '2';
pt(114).size      = '[]';

pt(115).blockname = 'trajectory planning/minimum jerk/added offset 2';
pt(115).paramname = 'Value';
pt(115).class     = 'scalar';
pt(115).nrows     = 1;
pt(115).ncols     = 1;
pt(115).subsource = 'SS_DOUBLE';
pt(115).ndims     = '2';
pt(115).size      = '[]';

pt(116).blockname = 'trajectory planning/minimum jerk/added offset1';
pt(116).paramname = 'Value';
pt(116).class     = 'scalar';
pt(116).nrows     = 1;
pt(116).ncols     = 1;
pt(116).subsource = 'SS_DOUBLE';
pt(116).ndims     = '2';
pt(116).size      = '[]';

pt(117).blockname = 'trajectory planning/minimum jerk/Gain';
pt(117).paramname = 'Gain';
pt(117).class     = 'scalar';
pt(117).nrows     = 1;
pt(117).ncols     = 1;
pt(117).subsource = 'SS_DOUBLE';
pt(117).ndims     = '2';
pt(117).size      = '[]';

pt(118).blockname = 'trajectory planning/minimum jerk/tag des pos1';
pt(118).paramname = 'Gain';
pt(118).class     = 'scalar';
pt(118).nrows     = 1;
pt(118).ncols     = 1;
pt(118).subsource = 'SS_DOUBLE';
pt(118).ndims     = '2';
pt(118).size      = '[]';

pt(119).blockname = 'trajectory planning/minimum jerk/tag des pos2';
pt(119).paramname = 'Gain';
pt(119).class     = 'scalar';
pt(119).nrows     = 1;
pt(119).ncols     = 1;
pt(119).subsource = 'SS_DOUBLE';
pt(119).ndims     = '2';
pt(119).size      = '[]';

pt(120).blockname = 'trajectory planning/minimum jerk/Saturation1';
pt(120).paramname = 'UpperLimit';
pt(120).class     = 'scalar';
pt(120).nrows     = 1;
pt(120).ncols     = 1;
pt(120).subsource = 'SS_DOUBLE';
pt(120).ndims     = '2';
pt(120).size      = '[]';

pt(121).blockname = 'trajectory planning/minimum jerk/Saturation1';
pt(121).paramname = 'LowerLimit';
pt(121).class     = 'scalar';
pt(121).nrows     = 1;
pt(121).ncols     = 1;
pt(121).subsource = 'SS_DOUBLE';
pt(121).ndims     = '2';
pt(121).size      = '[]';

pt(122).blockname = 'trajectory planning/minimum jerk/Saturation2';
pt(122).paramname = 'UpperLimit';
pt(122).class     = 'scalar';
pt(122).nrows     = 1;
pt(122).ncols     = 1;
pt(122).subsource = 'SS_DOUBLE';
pt(122).ndims     = '2';
pt(122).size      = '[]';

pt(123).blockname = 'trajectory planning/minimum jerk/Saturation2';
pt(123).paramname = 'LowerLimit';
pt(123).class     = 'scalar';
pt(123).nrows     = 1;
pt(123).ncols     = 1;
pt(123).subsource = 'SS_DOUBLE';
pt(123).ndims     = '2';
pt(123).size      = '[]';

pt(124).blockname = 'Controller/PID/Compare To Constant/Constant';
pt(124).paramname = 'Value';
pt(124).class     = 'scalar';
pt(124).nrows     = 1;
pt(124).ncols     = 1;
pt(124).subsource = 'SS_DOUBLE';
pt(124).ndims     = '2';
pt(124).size      = '[]';

pt(125).blockname = 'Controller/PID/gain transition/Memory';
pt(125).paramname = 'X0';
pt(125).class     = 'vector';
pt(125).nrows     = 1;
pt(125).ncols     = 4;
pt(125).subsource = 'SS_DOUBLE';
pt(125).ndims     = '2';
pt(125).size      = '[]';

pt(126).blockname = 'Controller/PID/gain transition1/Memory';
pt(126).paramname = 'X0';
pt(126).class     = 'vector';
pt(126).nrows     = 1;
pt(126).ncols     = 4;
pt(126).subsource = 'SS_DOUBLE';
pt(126).ndims     = '2';
pt(126).size      = '[]';

pt(127).blockname = 'Controller/PID/gain transition2/Memory';
pt(127).paramname = 'X0';
pt(127).class     = 'vector';
pt(127).nrows     = 1;
pt(127).ncols     = 4;
pt(127).subsource = 'SS_DOUBLE';
pt(127).ndims     = '2';
pt(127).size      = '[]';

pt(128).blockname = 'Controller/PID/gain transition3/Memory';
pt(128).paramname = 'X0';
pt(128).class     = 'vector';
pt(128).nrows     = 1;
pt(128).ncols     = 4;
pt(128).subsource = 'SS_DOUBLE';
pt(128).ndims     = '2';
pt(128).size      = '[]';

pt(129).blockname = 'Controller/PID/gain transition4/Constant';
pt(129).paramname = 'Value';
pt(129).class     = 'scalar';
pt(129).nrows     = 1;
pt(129).ncols     = 1;
pt(129).subsource = 'SS_DOUBLE';
pt(129).ndims     = '2';
pt(129).size      = '[]';

pt(130).blockname = 'Controller/PID/gain transition4/Memory';
pt(130).paramname = 'X0';
pt(130).class     = 'vector';
pt(130).nrows     = 1;
pt(130).ncols     = 4;
pt(130).subsource = 'SS_DOUBLE';
pt(130).ndims     = '2';
pt(130).size      = '[]';

pt(131).blockname = 'Controller/start/Ramp/Constant';
pt(131).paramname = 'Value';
pt(131).class     = 'scalar';
pt(131).nrows     = 1;
pt(131).ncols     = 1;
pt(131).subsource = 'SS_DOUBLE';
pt(131).ndims     = '2';
pt(131).size      = '[]';

pt(132).blockname = 'Controller/start/Ramp/Constant1';
pt(132).paramname = 'Value';
pt(132).class     = 'scalar';
pt(132).nrows     = 1;
pt(132).ncols     = 1;
pt(132).subsource = 'SS_DOUBLE';
pt(132).ndims     = '2';
pt(132).size      = '[]';

pt(133).blockname = 'Controller/start/Ramp/Step';
pt(133).paramname = 'Time';
pt(133).class     = 'scalar';
pt(133).nrows     = 1;
pt(133).ncols     = 1;
pt(133).subsource = 'SS_DOUBLE';
pt(133).ndims     = '2';
pt(133).size      = '[]';

pt(134).blockname = 'Controller/start/Ramp/Step';
pt(134).paramname = 'Before';
pt(134).class     = 'scalar';
pt(134).nrows     = 1;
pt(134).ncols     = 1;
pt(134).subsource = 'SS_DOUBLE';
pt(134).ndims     = '2';
pt(134).size      = '[]';

pt(135).blockname = 'Controller/start/Ramp/Step';
pt(135).paramname = 'After';
pt(135).class     = 'scalar';
pt(135).nrows     = 1;
pt(135).ncols     = 1;
pt(135).subsource = 'SS_DOUBLE';
pt(135).ndims     = '2';
pt(135).size      = '[]';

pt(136).blockname = 'Kalman Filter/kalman3/Discrete Derivative/TSamp';
pt(136).paramname = 'WtEt';
pt(136).class     = 'scalar';
pt(136).nrows     = 1;
pt(136).ncols     = 1;
pt(136).subsource = 'SS_DOUBLE';
pt(136).ndims     = '2';
pt(136).size      = '[]';

pt(137).blockname = 'Kalman Filter/kalman3/Discrete Derivative/UD';
pt(137).paramname = 'InitialCondition';
pt(137).class     = 'scalar';
pt(137).nrows     = 1;
pt(137).ncols     = 1;
pt(137).subsource = 'SS_DOUBLE';
pt(137).ndims     = '2';
pt(137).size      = '[]';

pt(138).blockname = 'Kalman Filter/kalman4/Discrete Derivative/TSamp';
pt(138).paramname = 'WtEt';
pt(138).class     = 'scalar';
pt(138).nrows     = 1;
pt(138).ncols     = 1;
pt(138).subsource = 'SS_DOUBLE';
pt(138).ndims     = '2';
pt(138).size      = '[]';

pt(139).blockname = 'Kalman Filter/kalman4/Discrete Derivative/UD';
pt(139).paramname = 'InitialCondition';
pt(139).class     = 'scalar';
pt(139).nrows     = 1;
pt(139).ncols     = 1;
pt(139).subsource = 'SS_DOUBLE';
pt(139).ndims     = '2';
pt(139).size      = '[]';

function len = getlenPT
len = 139;

