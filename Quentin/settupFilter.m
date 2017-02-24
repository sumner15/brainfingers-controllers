fs = 1000;
flow = 3;
fhigh = 1.5;

f2w = @(x) 2*x/fs;

wlow = f2w(flow);

[Alow, Blow, Clow, Dlow] = butter(2,wlow);
x0low = (eye(size(Alow))-Alow)\Blow*0;


%%
fc = 0.1;
fs = 1000;
fcl = 3; 

[b_hp,a_hp] = butter(1,fc/(fs/2),'high');
[b_lp,a_lp] = butter(1,fcl/(fs/2));
