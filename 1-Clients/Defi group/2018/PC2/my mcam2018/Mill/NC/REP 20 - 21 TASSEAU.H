0 BEGIN PGM REP 20 - 21 TASSEAU MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP 20 - 21 TASSEAU
4 ; PROG-CN DU 26-02-21 A 10:03
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T6 FORET ENBOUT CARB DIA14.2 XC OK FORET DIAM=14.2 2 DENTS A=118. ARS
10 ; T13 TARAUD A DROITE DIAM=16. 2 DENTS A=118. ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-2*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 6
18 L X-301,5 Y+0 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X-301,5 Y+0 FMAX M99
23 L X-136,5 FMAX M99
24 L X+136,5 FMAX M99
25 L X+301,5 FMAX M99
26 L Z+50 FMAX
27 M9
28 M5
29 L Z-1 FMAX M91
30 ; T6 FORET ENBOUT CARB DIA14.2 XC OK FORET DIAM=14.2 2 DENTS A=118. ARS
31 TOOL CALL 6 Z S1300 DR+0
32 TOOL DEF 1
33 L X-301,5 Y+0 FMAX M3
34 L Z+50 FMAX M8
35 ;  DEBOURRAGE
36 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-46 ; PROFONDEUR~
    Q206=120 ; AVANCE PLONGEE PROF.~
    Q202=+7,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
37 L X-301,5 Y+0 FMAX M99
38 L X-136,5 FMAX M99
39 L X+136,5 FMAX M99
40 L X+301,5 FMAX M99
41 L Z+50 FMAX
42 M9
43 M5
44 L Z-1 FMAX M91
45 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
46 ; CORRECTION USURE GAUCHE
47 ; SUREP R 0. SUREP Z 0.
48 TOOL CALL 1 Z S6000 DR-2,5
49 TOOL DEF 13
50 L X-301,5 Y+0 FMAX M3
51 L Z+50 FMAX
52 L Z+2 FMAX
53 L Z-3 F800
54 L X-300,5 Y+2,5 RL F1200
55 L Y+3,5
56 CC X-301,5 Y+3,5
57 C X-301,5 Y+4,5 DR+
58 CC X-301,5 Y+0
59 C X-301,5 Y-4,5 DR+
60 CC X-301,5 Y+0
61 C X-301,5 Y+4,5 DR+
62 CC X-301,5 Y+0
63 C X-303,435 Y+4,063 DR+
64 CC X-303,005 Y+3,16
65 C X-303,908 Y+2,73 DR+
66 L X-303,478 Y+1,827
67 L X-301,5 Y+0 R0
68 L Z+50 FMAX
69 L X-136,5 FMAX
70 L Z+2 FMAX
71 L Z-3 F800
72 L X-135,5 Y+2,5 RL F1200
73 L Y+3,5
74 CC X-136,5 Y+3,5
75 C X-136,5 Y+4,5 DR+
76 CC X-136,5 Y+0
77 C X-136,5 Y-4,5 DR+
78 CC X-136,5 Y+0
79 C X-136,5 Y+4,5 DR+
80 CC X-136,5 Y+0
81 C X-138,435 Y+4,063 DR+
82 CC X-138,005 Y+3,16
83 C X-138,908 Y+2,73 DR+
84 L X-138,478 Y+1,827
85 L X-136,5 Y+0 R0
86 L Z+50 FMAX
87 L X+136,5 FMAX
88 L Z+2 FMAX
89 L Z-3 F800
90 L X+137,5 Y+2,5 RL F1200
91 L Y+3,5
92 CC X+136,5 Y+3,5
93 C X+136,5 Y+4,5 DR+
94 CC X+136,5 Y+0
95 C X+136,5 Y-4,5 DR+
96 CC X+136,5 Y+0
97 C X+136,5 Y+4,5 DR+
98 CC X+136,5 Y+0
99 C X+134,565 Y+4,063 DR+
100 CC X+134,995 Y+3,16
101 C X+134,092 Y+2,73 DR+
102 L X+134,522 Y+1,827
103 L X+136,5 Y+0 R0
104 L Z+50 FMAX
105 L X+301,5 FMAX
106 L Z+2 FMAX
107 L Z-3 F800
108 L X+302,5 Y+2,5 RL F1200
109 L Y+3,5
110 CC X+301,5 Y+3,5
111 C X+301,5 Y+4,5 DR+
112 CC X+301,5 Y+0
113 C X+301,5 Y-4,5 DR+
114 CC X+301,5 Y+0
115 C X+301,5 Y+4,5 DR+
116 CC X+301,5 Y+0
117 C X+299,565 Y+4,063 DR+
118 CC X+299,995 Y+3,16
119 C X+299,092 Y+2,73 DR+
120 L X+299,522 Y+1,827
121 L X+301,5 Y+0 R0
122 L Z+50 FMAX
123 M5
124 L Z-1 FMAX M91
125 M00
126 ; T13 TARAUD A DROITE DIAM=16. 2 DENTS A=118. ARS
127 TOOL CALL 13 Z S100 DR+0
128 TOOL DEF 1
129 L X-301,5 Y+0 FMAX M3
130 L Z+50 FMAX M8
131 ;  TARAUDAGE
132 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22 ; PROFONDEUR~
    Q239=2. ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
133 L X-301,5 Y+0 FMAX M99
134 L X-136,5 FMAX M99
135 L X+136,5 FMAX M99
136 L X+301,5 FMAX M99
137 L Z+50 FMAX
138 M9
139 M5
140 L Z-1 FMAX M91
141 L Y-1 FMAX M91
142 M30
143 END PGM REP 20 - 21 TASSEAU MM
