0 BEGIN PGM REP21-20162-OP10-POINC-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP21-20162-OP10-POINC-B
4 ; PROG-CN DU 14-10-19 A 13:19
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T7 DIA 6.1 110KG FORET DIAM=6.1 2 DENTS A=118. ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-1*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 2
20 L X-64,505 Y+65,864 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-64,505 Y+65,864 FMAX M99
25 L X-2,84 FMAX M99
26 L X+56,29 Y+60,864 FMAX M99
27 L X+33,425 Y-4,136 FMAX M99
28 L X+0,47 Y-69,136 FMAX M99
29 L Z+50 FMAX
30 M9
31 M5
32 L Z-1 FMAX M91
33 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
34 TOOL CALL 2 Z S2000 DR+0
35 TOOL DEF 27
36 L X-64,505 Y+65,864 FMAX M3
37 L Z+50 FMAX M8
38 ;  DEBOURRAGE
39 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-36 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
40 L X-64,505 Y+65,864 FMAX M99
41 L X-2,84 FMAX M99
42 L X+56,29 Y+60,864 FMAX M99
43 L X+33,425 Y-4,136 FMAX M99
44 L X+0,47 Y-69,136 FMAX M99
45 L Z+50 FMAX
46 M9
47 M5
48 L Z-1 FMAX M91
49 M00
50 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
51 TOOL CALL 27 Z S100 DR+0
52 TOOL DEF 1
53 L X-64,505 Y+65,864 FMAX M3
54 L Z+50 FMAX M8
55 ;  TARAUDAGE
56 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q239=1.5 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
57 L X-64,505 Y+65,864 FMAX M99
58 L X-2,84 FMAX M99
59 L X+56,29 Y+60,864 FMAX M99
60 L X+33,425 Y-4,136 FMAX M99
61 L X+0,47 Y-69,136 FMAX M99
62 L Z+50 FMAX
63 M9
64 M5
65 L Z-1 FMAX M91
66 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
67 TOOL CALL 1 Z S1856 DR+0
68 TOOL DEF 20
69 L X+37,807 Y-45,25 FMAX M3
70 L Z+50 FMAX M8
71 ;  POINTAGE-PERCAGE
72 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
73 L X+37,807 Y-45,25 FMAX M99
74 L X-60,724 Y+92,72 FMAX M99
75 L Z+50 FMAX
76 M9
77 M5
78 L Z-1 FMAX M91
79 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
80 TOOL CALL 20 Z S3800 DR+0
81 TOOL DEF 1
82 L X+37,807 Y-45,25 FMAX M3
83 L Z+50 FMAX M8
84 ;  DEBOURRAGE
85 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-63 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
86 L X+37,807 Y-45,25 FMAX M99
87 L X-60,724 Y+92,72 FMAX M99
88 L Z+50 FMAX
89 M9
90 M5
91 L Z-1 FMAX M91
92 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
93 TOOL CALL 1 Z S1856 DR+0
94 TOOL DEF 2
95 L X-27,688 Y+65,864 FMAX M3
96 L Z+50 FMAX M8
97 ;  POINTAGE-PERCAGE
98 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
99 L X-27,688 Y+65,864 FMAX M99
100 L X+22,189 Y-26,298 FMAX M99
101 L Z+50 FMAX
102 M9
103 M5
104 L Z-1 FMAX M91
105 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
106 TOOL CALL 2 Z S2000 DR+0
107 TOOL DEF 1
108 L X-27,688 Y+65,864 FMAX M3
109 L Z+50 FMAX M8
110 ;  DEBOURRAGE
111 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-64 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
112 L X-27,688 Y+65,864 FMAX M99
113 L X+22,189 Y-26,298 FMAX M99
114 L Z+50 FMAX
115 M9
116 M5
117 L Z-1 FMAX M91
118 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
119 TOOL CALL 1 Z S1856 DR+0
120 TOOL DEF 7
121 L X-47,688 Y+65,864 FMAX M3
122 L Z+50 FMAX M8
123 ;  POINTAGE-PERCAGE
124 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,7 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,7 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
125 L X-47,688 Y+65,864 FMAX M99
126 L X+25,189 FMAX M99
127 L X+51,17 Y+30,864 FMAX M99
128 L X+13,145 Y-44,136 FMAX M99
129 L Z+50 FMAX
130 M9
131 M5
132 L Z-1 FMAX M91
133 ; T7 DIA 6.1 110KG FORET DIAM=6.1 2 DENTS A=118. ARS
134 TOOL CALL 7 Z S720 DR+0
135 TOOL DEF 1
136 L X-47,688 Y+65,864 FMAX M3
137 L Z+50 FMAX M8
138 ;  DEBOURRAGE
139 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-63 ; PROFONDEUR~
    Q206=50 ; AVANCE PLONGEE PROF.~
    Q202=+3,05 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
140 L X-47,688 Y+65,864 FMAX M99
141 L X+25,189 FMAX M99
142 L X+51,17 Y+30,864 FMAX M99
143 L X+13,145 Y-44,136 FMAX M99
144 L Z+50 FMAX
145 M9
146 M5
147 L Z-1 FMAX M91
148 L Y-1 FMAX M91
149 M30
150 END PGM REP21-20162-OP10-POINC-B MM
