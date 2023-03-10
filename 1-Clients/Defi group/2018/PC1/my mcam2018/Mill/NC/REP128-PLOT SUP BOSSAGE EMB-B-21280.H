0 BEGIN PGM REP128-PLOT SUP BOSSAGE EMB-B-21280 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP128-PLOT SUP BOSSAGE EMB-B-21280
4 ; PROG-CN DU 21-06-22 A 15:01
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF OK FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T8 FO DIA 12.7 VC40 DMF OK FORET DIAM=12.7 2 DENTS A=118. ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-1*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 25
20 L X-61 Y+54 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-61 Y+54 FMAX M99
25 L X-21 FMAX M99
26 L X+54 Y+61 FMAX M99
27 L Y+21 FMAX M99
28 L X+20 Y+41 FMAX M99
29 L X-41 Y+20 FMAX M99
30 L X-54 Y-21 FMAX M99
31 L Y-61 FMAX M99
32 L X-20 Y-41 FMAX M99
33 L X+21 Y-54 FMAX M99
34 L X+61 FMAX M99
35 L X+41 Y-20 FMAX M99
36 L Z+50 FMAX
37 M9
38 M5
39 L Z-1 FMAX M91
40 ; T25 DIA 6.8 VC 40 DMF OK FORET DIAM=6.8 2 DENTS A=118. ARS
41 TOOL CALL 25 Z S2400 DR+0
42 TOOL DEF 28
43 L X-61 Y+54 FMAX M3
44 L Z+50 FMAX M7
45 ;  DEBOURRAGE
46 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
47 L X-61 Y+54 FMAX M99
48 L X-21 FMAX M99
49 L X+54 Y+61 FMAX M99
50 L Y+21 FMAX M99
51 L X+20 Y+41 FMAX M99
52 L X-41 Y+20 FMAX M99
53 L X-54 Y-21 FMAX M99
54 L Y-61 FMAX M99
55 L X-20 Y-41 FMAX M99
56 L X+21 Y-54 FMAX M99
57 L X+61 FMAX M99
58 L X+41 Y-20 FMAX M99
59 L Z+50 FMAX
60 M9
61 M5
62 L Z-1 FMAX M91
63 M00
64 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
65 TOOL CALL 28 Z S100 DR+0
66 TOOL DEF 1
67 L X-61 Y+54 FMAX M3
68 L Z+50 FMAX M8
69 ;  TARAUDAGE
70 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
71 L X-61 Y+54 FMAX M99
72 L X-21 FMAX M99
73 L X+54 Y+61 FMAX M99
74 L Y+21 FMAX M99
75 L X+20 Y+41 FMAX M99
76 L X-41 Y+20 FMAX M99
77 L X-54 Y-21 FMAX M99
78 L Y-61 FMAX M99
79 L X-20 Y-41 FMAX M99
80 L X+21 Y-54 FMAX M99
81 L X+61 FMAX M99
82 L X+41 Y-20 FMAX M99
83 L Z+50 FMAX
84 M9
85 M5
86 L Z-1 FMAX M91
87 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
88 TOOL CALL 1 Z S1856 DR+0
89 TOOL DEF 20
90 L X-35,5 Y+4,5 FMAX M3
91 L Z+50 FMAX M8
92 ;  POINTAGE-PERCAGE
93 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
94 L X-35,5 Y+4,5 FMAX M99
95 L X-4,5 Y-35,5 FMAX M99
96 L X+46,5 Y-4,5 FMAX M99
97 L X+4,5 Y+46,5 FMAX M99
98 L Z+50 FMAX
99 M9
100 M5
101 L Z-1 FMAX M91
102 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
103 TOOL CALL 20 Z S3800 DR+0
104 TOOL DEF 1
105 L X-35,5 Y+4,5 FMAX M3
106 L Z+50 FMAX M7
107 ;  DEBOURRAGE
108 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-47 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
109 L X-35,5 Y+4,5 FMAX M99
110 L X-4,5 Y-35,5 FMAX M99
111 L X+46,5 Y-4,5 FMAX M99
112 L X+4,5 Y+46,5 FMAX M99
113 L Z+50 FMAX
114 M9
115 M5
116 L Z-1 FMAX M91
117 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
118 TOOL CALL 1 Z S1856 DR+0
119 TOOL DEF 8
120 L X-41 Y+38 FMAX M3
121 L Z+50 FMAX M8
122 ;  POINTAGE-PERCAGE
123 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
124 L X-41 Y+38 FMAX M99
125 L X+38 Y+41 FMAX M99
126 L X+41 Y-38 FMAX M99
127 L X-38 Y-41 FMAX M99
128 L Z+50 FMAX
129 M9
130 M5
131 L Z-1 FMAX M91
132 ; T8 FO DIA 12.7 VC40 DMF OK FORET DIAM=12.7 2 DENTS A=118. ARS
133 TOOL CALL 8 Z S1300 DR+0
134 TOOL DEF 1
135 L X-41 Y+38 FMAX M3
136 L Z+50 FMAX M7
137 ;  DEBOURRAGE
138 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-47 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
139 L X-41 Y+38 FMAX M99
140 L X+38 Y+41 FMAX M99
141 L X+41 Y-38 FMAX M99
142 L X-38 Y-41 FMAX M99
143 L Z+50 FMAX
144 M9
145 M5
146 L Z-1 FMAX M91
147 L Y-1 FMAX M91
148 M30
149 END PGM REP128-PLOT SUP BOSSAGE EMB-B-21280 MM
