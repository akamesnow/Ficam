0 BEGIN PGM REP27-28-29-30-20161-OP10-GUIDE BANDE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP27-28-29-30-20161-OP10-GUIDE BANDE-A
4 ; PROG-CN DU 31-10-19 A 11:42
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T5 FO DIA 11.8 VC40 DMF FORET DIAM=11.7 2 DENTS A=118. ARS
10 ; T4 DIA 11 VC 40 FORET DIAM=11. 2 DENTS A=118. ARS
11 ; T20 CARBURE DIA5  VC 40 FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-1*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 5
19 L X+47 Y-54,75 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X+47 Y-54,75 FMAX M99
24 L X+268 FMAX M99
25 L X+397 FMAX M99
26 L X+613 FMAX M99
27 L X+582 Y-116,75 FMAX M99
28 L X+366 FMAX M99
29 L X+297 FMAX M99
30 L X+76 FMAX M99
31 L Z+50 FMAX
32 M9
33 M5
34 L Z-1 FMAX M91
35 ; T5 FO DIA 11.8 VC40 DMF FORET DIAM=11.7 2 DENTS A=118. ARS
36 TOOL CALL 5 Z S1650 DR+0
37 TOOL DEF 1
38 L X+47 Y-54,75 FMAX M3
39 L Z+50 FMAX M8
40 ;  DEBOURRAGE
41 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+5,85 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
42 L X+47 Y-54,75 FMAX M99
43 L X+268 FMAX M99
44 L X+397 FMAX M99
45 L X+613 FMAX M99
46 L X+582 Y-116,75 FMAX M99
47 L X+366 FMAX M99
48 L X+297 FMAX M99
49 L X+76 FMAX M99
50 L Z+50 FMAX
51 M9
52 M5
53 L Z-1 FMAX M91
54 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
55 TOOL CALL 1 Z S1856 DR+0
56 TOOL DEF 4
57 L X+222 Y-54,75 FMAX M3
58 L Z+50 FMAX M8
59 ;  POINTAGE-PERCAGE
60 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
61 L X+222 Y-54,75 FMAX M99
62 L X+304 FMAX M99
63 L X+367 FMAX M99
64 L X+552 FMAX M99
65 L X+588 FMAX M99
66 L X+618 Y-116,75 FMAX M99
67 L X+536 FMAX M99
68 L X+267 FMAX M99
69 L X+226 FMAX M99
70 L X+46 FMAX M99
71 L Z+50 FMAX
72 M9
73 M5
74 L Z-1 FMAX M91
75 ; T4 DIA 11 VC 40 FORET DIAM=11. 2 DENTS A=118. ARS
76 TOOL CALL 4 Z S1400 DR+0
77 TOOL DEF 1
78 L X+222 Y-54,75 FMAX M3
79 L Z+50 FMAX M8
80 ;  POINTAGE-PERCAGE
81 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+17 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
82 L X+222 Y-54,75 FMAX M99
83 L X+304 FMAX M99
84 L X+367 FMAX M99
85 L X+552 FMAX M99
86 L X+588 FMAX M99
87 L X+618 Y-116,75 FMAX M99
88 L X+536 FMAX M99
89 L X+267 FMAX M99
90 L X+226 FMAX M99
91 L X+46 FMAX M99
92 L Z+50 FMAX
93 M9
94 M5
95 L Z-1 FMAX M91
96 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
97 TOOL CALL 1 Z S1856 DR+0
98 TOOL DEF 20
99 L X+100,5 Y-85,75 FMAX M3
100 L Z+50 FMAX M8
101 ;  POINTAGE-PERCAGE
102 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
103 L X+100,5 Y-85,75 FMAX M99
104 L X+251,5 FMAX M99
105 L X+416,5 FMAX M99
106 L X+555,5 FMAX M99
107 L Z+50 FMAX
108 M9
109 M5
110 L Z-1 FMAX M91
111 ; T20 CARBURE DIA5  VC 40 FORET DIAM=5.1 2 DENTS A=118. ARS
112 TOOL CALL 20 Z S3800 DR+0
113 TOOL DEF 1
114 L X+100,5 Y-85,75 FMAX M3
115 L Z+50 FMAX M8
116 ;  POINTAGE-PERCAGE
117 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+17 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
118 L X+100,5 Y-85,75 FMAX M99
119 L X+251,5 FMAX M99
120 L X+416,5 FMAX M99
121 L X+555,5 FMAX M99
122 L Z+50 FMAX
123 M9
124 M5
125 L Z-1 FMAX M91
126 L Y-1 FMAX M91
127 M30
128 END PGM REP27-28-29-30-20161-OP10-GUIDE BANDE-A MM
