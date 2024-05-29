u10_0 = load("./matlab_files/u10_0.mat").data;
u10_1 = load("./matlab_files/u10_1.mat").data;
u10_2 = load("./matlab_files/u10_2.mat").data;
u20_0 = load("./matlab_files/u20_0.mat").data;
u20_1 = load("./matlab_files/u20_1.mat").data;
u20_2 = load("./matlab_files/u20_2.mat").data;
u30_0 = load("./matlab_files/u30_0.mat").data;
u30_1 = load("./matlab_files/u30_1.mat").data;
u30_2 = load("./matlab_files/u30_2.mat").data;

%% Parâmetros do sensor de corrente
a = 0.185; % Sensibilidade do sensor V/A
V_sens0 = 2.5; % V_sensor para I=0
%% degrau 40% -> 50%
t_10 = u10_1(1,:); % vetor temporal (ms)
w_10=u10_1(5,:)*2*pi/60; % velocidade angular em rad/s
vi_10 = u10_1(2,:); % tensão do sensor de corrente (V)
tf_10 = length(u10_1); % índice final dos vetores
t0_10 = 45000; % momento do degrau relativo


w0_10 = mean(w_10(t0_10-5000:t0_10)) % W0 antes do degrau


wss_10 = mean(w_10(tf_10-15000:tf_10)) % W final


deltaw1 = wss_10-w0_10; % variação de w (rad/s)



vi0_10 = mean(vi_10(1:1000)) % tensão no sensor de corrente quando i=0
r_10 = vi0_10/V_sens0; % razão do divisor de tensão do sensor de corrente
A_10 = 1/(r_10*a); % coeficiente angular - sensibilidade efetiva do sensor de corrente em A/V
B_10 = -vi0_10*A_10; % coeficiente linear

I_10 = -(A_10.*vi_10 + B_10); % corrente medida (A)

Iss_10 = mean(I_10(tf_10-15000:tf_10));
I0_10 = mean(I_10(t0_10-5000:t0_10))
deltaI_10 = Iss_10 - I0_10; % variação de I (A)


% Para encontrar a constante de tempo:
tp_10 = 1;
while w_10(tp_10) < 0.99*wss_10
    tp_10 = tp_10+1;
end



% Normalizando valores de velocidade

w_10 = w_10(:) - w0_10;
plot(t_10(t0_10:tf_10),w_10(t0_10:tf_10)) % w x t a partir do degrau relativo

%% degrau 40% -> 60%
t_20 = u20_1(1,:);
w_20 = u20_1(5,:)*2*pi/60;
vi_20 = u20_1(2,:);
tf_20 = length(u20_1);
t0_20 = 30000;

plot(t_20(t0_20:tf_20),w_20(t0_20:tf_20))

wss_20 = mean(w_20(tf_20-15000:tf_20));
w0_20 = mean(w_20(t0_20-5000:t0_20));
deltaw2 = wss_20-w0_20;

vi0_20 = mean(vi_20(1:1000)) % sensor de corrente quando i=0
r_20 = vi0_20/V_sens0; % razão do divisor de tensão no sensor de corrente
A_20 = 1/(r_20*a); % coeficiente angular - sensibilidade efetiva do sensor de corrente em A/V
B_20 = -vi0_20*A_20; % coeficiente linear

I_20 = -(A_20.*vi_20 + B_20); % corrente medida

Iss_20 = mean(I_20(tf_20-15000:tf_20));
I0_20 = mean(I_20(t0_20-5000:t0_20));
deltaI_20 = Iss_20 - I0_20; % variação de I

% Para encontrar a constante de tempo:
tp_20 = 1;
while w_20(tp_20) < 0.99*wss_20
    tp_20 = tp_20+1;
end

%% degrau 40% -> 70%
t_30 = u30_1(1,:);
w_30 = u30_1(5,:)*2*pi/60;
vi_30 = u30_1(2,:);
nf_30 = length(u30_1);
t0_30 = 30000;

plot(t_30(t0_30:nf_30),w_30(t0_30:nf_30))

wss_30 = mean(w_30(nf_30-15000:nf_30));
w0_30 = mean(w_30(t0_30-5000:t0_30));
deltaw3 = wss_30-w0_30;

vi0_30 = mean(vi_30(1:1000)) % sensor de corrente quando i=0
r_30 = vi0_30/V_sens0; % razão do divisor de tensão no sensor de corrente
A_30 = 1/(r_30*a); % coeficiente angular - sensibilidade efetiva do sensor de corrente em A/V
B_30 = -vi0_30*A_30; % coeficiente linear

I_30 = -(A_30.*vi_30 + B_30); % corrente medida

Iss_30 = mean(I_30(nf_30-15000:nf_30));
I0_30 = mean(I_30(t0_30-5000:t0_30));
deltaI_30 = Iss_30 - I0_30; % variação de I

% Para encontrar a constante de tempo:
tp_30 = 1;
while w_30(tp_30) < 0.99*wss_30
    tp_30 = tp_30+1;
end

%% Cálculo dos demais parâmetros

ra = mean([6.6, 6.9, 6.4, 6.7, 7.7, 6.7, 6.6, 6.9, 6.7]);
La = 1e-3*mean([52.4, 52.9, 53.7, 53.3, 53.2, 53.1, 53.1, 54.7, 53.4, 55.1]);

% Em regime estacionário

K1 = deltaI_10/deltaw1; % bm/kv
K2 = deltaI_20/deltaw2;
K3 = deltaI_30/deltaw3;

Kv_1 = (6-ra*deltaI_10)/deltaw1;
Kv_2 = (12 - ra*deltaI_20)/deltaw2;
Kv_3 = (18 - ra*deltaI_30)/deltaw3;

%Kv_12 = (ra*deltaI_20/2 - ra*deltaI_10)/(deltaw1 - deltaw2/2);
%Kv_13 = (ra*deltaI_30/3 - ra*deltaI_10)/(deltaw1 - deltaw3/3);
%Kv_23 = (ra*deltaI_30*2/3 - ra*deltaI_20)/(deltaw2 - deltaw3*2/3);

Kv = 1/3*(Kv_1+Kv_2+Kv_3);

%Kv = ra*(deltaI_20 - 2*deltaI_10)/(2*deltaw1 - deltaw2)

bm12 = Kv*K1;
bm13 = Kv*K2;
bm23 = Kv*K3;

bm = 1/3*(bm12+bm13+bm23);

p_10 = 5*1000/(tp_10-t0_10);
p_20 = 5*1000/(tp_20-t0_20);
p_30 = 5*1000/(tp_30-t0_30);

p = 1/3*(p_10+p_20+p_30);

J_10 = 1/p_10*(bm12+Kv_1^2/ra);
J_20 = 1/p_20*(bm23+Kv_3^2/ra);
J_30 = 1/p_30*(bm13+Kv_2^2/ra);

J = 1/3*(J_10+J_20+J_30);



%% Função de transferência
A = [-bm/J Kv/J;-Kv/La -ra/La];
B = [0 ; 1/La];
C = [1 0];
D = 0;

[G,E] = ss2tf(A,B,C,D)

Gf = tf(G,E)

damp(Gf)




%% Teste 40% -> 55%

w_15 = u15_0(5,:)*2*pi/60;
t_15 = u15_0(1,:);
%plot(u15_0(1,:),w_15);
t0_15 = 30000;
tf_15 = length(u15_0);

w0_15 = mean(w_15(t0_15-5000:t0_15)) % W0 antes do degrau


wss_15 = mean(w_15(tf_15-15000:tf_15)) % W final


deltaw15 = wss_15-w0_15; % variação de w (rad/s)

w_15(:) = w_15(:) - w0_15;
t_15(:) = t_15(:) - 30;
step(9*Gf)
hold on
plot(t_15(t0_15:tf_15),w_15(t0_15:tf_15))
axis([0 30 0 100])

%% Teste 40% -> 45%

w_5 = u5_0(5,:)*2*pi/60;
t_5 = u5_0(1,:);
%plot(u15_0(1,:),w_15);
t0_5 = 30000;
tf_5 = length(u5_0);

w0_5 = mean(w_5(t0_5-5000:t0_5)) % W0 antes do degrau


wss_5 = mean(w_5(tf_5-15000:tf_5)) % W final


deltaw5 = wss_5-w0_5; % variação de w (rad/s)

w_5(:) = w_5(:) - w0_5;
t_5(:) = t_5(:) - 30;
step(3*Gf)
hold on
plot(t_5(t0_5:tf_5),w_5(t0_5:tf_5))
axis([0 30 0 30])

%% Teste 40% -> 65%

w_25 = u25_0(5,:)*2*pi/60;
t_25 = u25_0(1,:);
%plot(u15_0(1,:),w_15);
t0_25 = 30000;
tf_25 = length(u25_0);

w0_25 = mean(w_25(t0_25-5000:t0_25)) % W0 antes do degrau


wss_25 = mean(w_25(tf_25-15000:tf_25)) % W final


deltaw25 = wss_25-w0_25; % variação de w (rad/s)

w_25(:) = w_25(:) - w0_5;
t_25(:) = t_25(:) - 30;
step(15*Gf)
hold on
plot(t_25(t0_25:tf_25),w_25(t0_25:tf_25))
axis([0 30 0 150])

