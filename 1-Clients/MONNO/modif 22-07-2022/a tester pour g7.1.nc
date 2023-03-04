% 



O0091 ( SEVA - CRIR_201_M_405-184-NT.NC )
(TOURELLE HAUTE)
(07/22/2022)
( )
GOTO 5
( )
(************** ORIGINE **********************)
G10L2P1 C0 Z9999.99 A9999.99 (G54)
G10L2P2 C0 Z9999.99 (G55)
M30
( )
(*********************************************)
N5
M46
M246
G0 G18 G40 G80 G99
G21
G49
G69.1
G0 G28 U0.
G28 V0. W0.

N10
(OPERATION # 26)
G10.9 X0
(T2058 | GRAVAGE_HOLEX | DIA. -  3)
M245 (MILLING MODE - SUB SPINDLE)
G0 G28 U0.
G28 V0. W0.
G28 H0.
M304 (SUB SPINDLE SELECTED)
T2058
G361 B0. D0
G43 H58.
G97 S0 M14
G55
G98
G0 C0.
G332 R3. (ACCURACY PRIORITY MODE)
G05 P10000
M08
G0 G18 Z-1324.184
X205. Y0.
X157.
G1 G19 W0. H0.
G98
G7.1 C155.
G1 C-1.168 F24600.
X155. F600.
C0. F2000.
Z-1328.997
C-1.168
G0 X205.
Z-1326.695
X157.
G1 X155. C-1.1 F600.
C0. F2000.
G0 X205.
Z-1325.355
X157.
G1 X155. C-1.636 F600.
Z-1325.003 C-1.686 F2000.
Z-1324.676 C-1.766
Z-1324.405 C-1.901
Z-1324.239 C-2.073
Z-1324.184 C-2.263
Z-1324.257 C-2.483
Z-1324.274 C-2.505
Z-1324.535 C-2.693
Z-1324.922 C-2.819
Z-1325.139 C-2.854
Z-1325.36 C-2.866
Z-1325.766 C-2.829
Z-1325.977 C-2.775
Z-1326.23 C-2.66
Z-1326.425 C-2.496
Z-1326.8 C-1.998
Z-1327.078 C-1.815
Z-1327.287 C-1.738
Z-1327.577 C-1.682
Z-1327.9 C-1.663
Z-1328.278 C-1.7
Z-1328.333 C-1.712
Z-1328.694 C-1.842
Z-1328.93 C-2.031
Z-1329.015 C-2.263
Z-1328.962 C-2.458
Z-1328.781 C-2.631
Z-1328.473 C-2.766
Z-1328.066 C-2.85
G1 X205.

Z-1325.355
X157.
G1 X155. C-3.347 F600.
Z-1325.003 C-3.397 F2000.
Z-1324.676 C-3.477
Z-1324.405 C-3.612
Z-1324.239 C-3.783
Z-1324.184 C-3.974
Z-1324.257 C-4.194
Z-1324.274 C-4.216
Z-1324.535 C-4.404
Z-1324.922 C-4.53
Z-1325.139 C-4.565
Z-1325.36 C-4.577
Z-1325.766 C-4.54
Z-1325.977 C-4.486
Z-1326.23 C-4.371
Z-1326.425 C-4.207
Z-1326.8 C-3.709
Z-1327.078 C-3.526
Z-1327.287 C-3.449
Z-1327.577 C-3.393
Z-1327.9 C-3.374
Z-1328.278 C-3.411
Z-1328.333 C-3.423
Z-1328.694 C-3.553
Z-1328.93 C-3.742
Z-1329.015 C-3.974
Z-1328.962 C-4.169
Z-1328.781 C-4.342
Z-1328.473 C-4.477
Z-1328.066 C-4.561
G1 X205.

Z-1325.786
X157.
G1 X155. C-5.308 F600.
C-6.274 F2000.
G1 X205.

Z-1324.115
X157.
G1 X155. C-6.531 F600.
Z-1329.067 C-5.791 F2000.
Z-1324.115 C-5.051
G1 X205.

G0 G18 Z-1324.115
X157.
G1 X155. C-7.002 F600.
Z-1329.067 F2000.
G1 X205.
G7.1 C0.
M09
C0.
M05
M246 (TURNING MODE - SUB SPINDLE)
G0 G28 U0.
G28 V0. W0.
G49
M246
M30

%