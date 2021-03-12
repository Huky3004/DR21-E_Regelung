% -------------------------------------------------------------------
%  DR18E - Fahrzeug Paramter
%  Diese Daten werden für die Fahrzeugsoftware auf der MABX gebraucht.
% -------------------------------------------------------------------

% ------------------------------
% allgenmeine Fahrzeugdaten
% ------------------------------
AAA_BBB = 119
mdriver = 80;           % Fahrermasse in kg
mvehicle = 230;         % Fahrzeugmasse in kg
m = mdriver + mvehicle; % ready-to-drive Masse in kg

i_Getriebe = 3.3;       % Getriebeübersetzung
i_Lenkgetriebe = 4.32;  % Übersetzung Lenkwinkel zu Radeinschlagwinkel
Reifenradius = 0.2351;  % Conti-Reifen 13"

M_max = 150;            % Maximales Antriebsmoment pro Motor in Nm
Gas_Modus = 2;          % 2 = normaler Betrieb, 1 = Testmodus
HV_Power_max = 80;      % maximale HV_Leistung in kW
Power_Limit_onoff = 0;  % 0 = Power Limit Regelung aus, 1 = Power Limit Regelung ein
Drive_Mode = 0;         % 0 = Basic, 1 = Accerlation, 2 = SkidPad, 3 = Endurance

Kapazitaet_HV_Battery_kWh = 6.6;
Strecke_Endu_km = 22;
Derating_Start_km = 16; % Ab km (..) wird das Derating bzgl. HV-Battery Kapa aktiviert
Derating_HV_Battery_Kapa = 1;    % Aktivieren des Derating HV-Battery Kapa

KW_T_Soll = 37;         % Kühlwasser Solltemperatur in °C

m=310;
lf=1.2;
lr=1.15;
cf=41350;
cr=41350;

                                               
% ------------------------------
% Torque Vectoring Model
% ------------------------------

TV_On = 0;              % enable torque vectoring
TV_Mode = 2;
TV_Override = 1; 

y=0.8;                  % "gamma" Verstärkung Integralanteil, 0<y<1, aber möglichst klein, damit die Adpation
                        %  langsam erfolgt
Ts=1;                   %   Verzögerungszeit von PT1
K=0.05;                 %   Verstärkung
K_SET = 1;              % Verstärkung der Sollgierrate, sollte eigentlich 1 sein
g=1;                    % Verstärkung Drehmoment
am=1/Ts;                % bleiben fest
bm=K/Ts;                % bleiben fest

% ------------------------------
% Traction Control Model
% ------------------------------

TC_On = 0;
TC_Derivative = 0.4;          % threshold traction control mode 1
TC_Relay_On = 0.07;           % switching on traction control mode 2
TC_Relay_Off = 0.065;         % switching off traction control mode 2

TC_Incr_Gas = 0.005;          % increasing electronic gas pedal (mode 0)
TC_Decr_Gas = 0.00005;        % decreasing electronic gas pedal (mode 2)