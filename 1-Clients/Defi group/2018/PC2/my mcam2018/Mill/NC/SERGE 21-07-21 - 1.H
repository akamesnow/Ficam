0 BEGIN PGM SERGE 21-07-21 - 1 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - SERGE 21-07-21 - 1
4 ; PROG-CN DU 26-07-21 A 11:51
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-2*
13 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
14 ; CORRECTION USURE GAUCHE
15 ; SUREP R 0. SUREP Z 0.
16 TOOL CALL 1 Z S6000 DR-2,5
17 L X-11,82 Y+30,12 FMAX M3
18 L Z+50 FMAX
19 L Z+2 FMAX
20 L Z-2,5 F800
21 L X-13,82 Y+30,62 RL F1200
22 L X-14,32
23 CC X-14,32 Y+30,12
24 C X-14,82 Y+30,12 DR+
25 CC X-11,82 Y+30,12
26 C X-8,82 Y+30,12 DR+
27 CC X-11,82 Y+30,12
28 C X-14,82 Y+30,12 DR+
29 CC X-11,82 Y+30,12
30 C X-14,178 Y+28,265 DR+
31 CC X-13,785 Y+28,574
32 C X-13,476 Y+28,181 DR+
33 L X-13,083 Y+28,49
34 L X-11,82 Y+30,12 R0
35 L Z+50 FMAX
36 L X+48,17 Y+30 FMAX
37 L Z+2 FMAX
38 L Z-2,5 F800
39 L X+46,19 Y+30,5 RL F1200
40 L X+45,69
41 CC X+45,69 Y+30
42 C X+45,19 Y+30 DR+
43 CC X+48,17 Y+30
44 C X+51,15 Y+30 DR+
45 CC X+48,17 Y+30
46 C X+45,19 Y+30 DR+
47 CC X+48,17 Y+30
48 C X+45,836 Y+28,147 DR+
49 CC X+46,228 Y+28,458
50 C X+46,539 Y+28,066 DR+
51 L X+46,93 Y+28,377
52 L X+48,17 Y+30 R0
53 L Z+50 FMAX
54 L X+48,22 Y-30,01 FMAX
55 L Z+2 FMAX
56 L Z-2,5 F800
57 L X+46,21 Y-29,51 RL F1200
58 L X+45,71
59 CC X+45,71 Y-30,01
60 C X+45,21 Y-30,01 DR+
61 CC X+48,22 Y-30,01
62 C X+51,23 Y-30,01 DR+
63 CC X+48,22 Y-30,01
64 C X+45,21 Y-30,01 DR+
65 CC X+48,22 Y-30,01
66 C X+45,85 Y-31,866 DR+
67 CC X+46,244 Y-31,558
68 C X+46,552 Y-31,951 DR+
69 L X+46,946 Y-31,643
70 L X+48,22 Y-30,01 R0
71 L Z+50 FMAX
72 L X-11,79 Y-30,02 FMAX
73 L Z+2 FMAX
74 L Z-2,5 F800
75 L X-13,79 Y-29,52 RL F1200
76 L X-14,29
77 CC X-14,29 Y-30,02
78 C X-14,79 Y-30,02 DR+
79 CC X-11,79 Y-30,02
80 C X-8,79 Y-30,02 DR+
81 CC X-11,79 Y-30,02
82 C X-14,79 Y-30,02 DR+
83 CC X-11,79 Y-30,02
84 C X-14,148 Y-31,875 DR+
85 CC X-13,755 Y-31,566
86 C X-13,446 Y-31,959 DR+
87 L X-13,053 Y-31,65
88 L X-11,79 Y-30,02 R0
89 L Z+50 FMAX
90 M5
91 L Z-1 FMAX M91
92 L Y-1 FMAX M91
93 M30
94 END PGM SERGE 21-07-21 - 1 MM
