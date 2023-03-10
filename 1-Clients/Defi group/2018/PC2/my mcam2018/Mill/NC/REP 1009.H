0 BEGIN PGM REP 1009 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP 1009
4 ; PROG-CN DU 23-09-21 A 10:15
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
11 ; T2 DIA 8.5 CARBURE VC 40 DMF OK FORET DIAM=8.5 2 DENTS A=118. ARS
12 ; T8 FO DIA 12.7 VC40 DMF OK FORET DIAM=12.7 2 DENTS A=118. ARS
13 ; T20 CARBURE DIA5  VC 40 DMF OK FORET DIAM=5.1 2 DENTS A=118. ARS
14 ; FIN DE LISTE DES OUTILS
15 L R0 FMAX
16 L Z-1 FMAX M91
17 ; *GROUPE D'USINAGE-1*
18 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
19 TOOL CALL 1 Z S1856 DR+0
20 TOOL DEF 25
21 L X-8,084 Y+20,873 FMAX M3
22 L Z+50 FMAX M8
23 ;  POINTAGE-PERCAGE
24 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
25 L X-8,084 Y+20,873 FMAX M99
26 L X+24,916 Y+20,878 FMAX M99
27 L X+24,924 Y-20,882 FMAX M99
28 L X-8,076 Y-20,887 FMAX M99
29 L Z+50 FMAX
30 M9
31 M5
32 L Z-1 FMAX M91
33 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
34 TOOL CALL 25 Z S3000 DR+0
35 TOOL DEF 28
36 L X-8,084 Y+20,873 FMAX M3
37 L Z+50 FMAX M8
38 ;  DEBOURRAGE
39 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-28 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
40 L X-8,084 Y+20,873 FMAX M99
41 L X+24,916 Y+20,878 FMAX M99
42 L X+24,924 Y-20,882 FMAX M99
43 L X-8,076 Y-20,887 FMAX M99
44 L Z+50 FMAX
45 M9
46 M5
47 L Z-1 FMAX M91
48 M00
49 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
50 TOOL CALL 28 Z S100 DR+0
51 TOOL DEF 1
52 L X-8,084 Y+20,873 FMAX M3
53 L Z+50 FMAX M8
54 ;  TARAUDAGE
55 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
56 L X-8,084 Y+20,873 FMAX M99
57 L X+24,916 Y+20,878 FMAX M99
58 L X+24,924 Y-20,882 FMAX M99
59 L X-8,076 Y-20,887 FMAX M99
60 L Z+50 FMAX
61 M9
62 M5
63 L Z-1 FMAX M91
64 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
65 TOOL CALL 1 Z S1856 DR+0
66 TOOL DEF 2
67 L X-23,944 Y+20,88 FMAX M3
68 L Z+50 FMAX M8
69 ;  POINTAGE-PERCAGE
70 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,9 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
71 L X-23,944 Y+20,88 FMAX M99
72 L X-23,937 Y-20,88 FMAX M99
73 L Z+50 FMAX
74 M9
75 M5
76 L Z-1 FMAX M91
77 ; T2 DIA 8.5 CARBURE VC 40 DMF OK FORET DIAM=8.5 2 DENTS A=118. ARS
78 TOOL CALL 2 Z S1600 DR+0
79 TOOL DEF 1
80 L X-23,944 Y+20,88 FMAX M3
81 L Z+50 FMAX M8
82 ;  DEBOURRAGE
83 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-54,2 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
84 L X-23,944 Y+20,88 FMAX M99
85 L X-23,937 Y-20,88 FMAX M99
86 L Z+50 FMAX
87 M9
88 M5
89 L Z-1 FMAX M91
90 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
91 TOOL CALL 1 Z S1856 DR+0
92 TOOL DEF 8
93 L X+8,487 Y+20,88 FMAX M3
94 L Z+50 FMAX M8
95 ;  POINTAGE-PERCAGE
96 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
97 L X+8,487 Y+20,88 FMAX M99
98 L X+8,494 Y-20,88 FMAX M99
99 L Z+50 FMAX
100 M9
101 M5
102 L Z-1 FMAX M91
103 ; T8 FO DIA 12.7 VC40 DMF OK FORET DIAM=12.7 2 DENTS A=118. ARS
104 TOOL CALL 8 Z S1300 DR+0
105 TOOL DEF 20
106 L X+8,487 Y+20,88 FMAX M3
107 L Z+50 FMAX M8
108 ;  DEBOURRAGE
109 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-55 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
110 L X+8,487 Y+20,88 FMAX M99
111 L X+8,494 Y-20,88 FMAX M99
112 L Z+50 FMAX
113 M9
114 M5
115 L Z-1 FMAX M91
116 ; T20 CARBURE DIA5  VC 40 DMF OK FORET DIAM=5.1 2 DENTS A=118. ARS
117 TOOL CALL 20 Z S3000 DR+0
118 TOOL DEF 1
119 L X+8,487 Y+20,88 FMAX M3
120 L Z+50 FMAX M8
121 ;  DEBOURRAGE
122 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-11 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-53 ; COORD. SURFACE PIECE~
    Q204=+103 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
123 L X+8,487 Y+20,88 FMAX M99
124 L X-23,944 FMAX M99
125 L X+8,494 Y-20,88 FMAX M99
126 L X-23,937 FMAX M99
127 L Z+50 FMAX
128 M9
129 M5
130 L Z-1 FMAX M91
131 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
132 TOOL CALL 1 Z S1856 DR+0
133 TOOL DEF 20
134 L X-13,795 Y+0 FMAX M3
135 L Z+50 FMAX M8
136 ;  POINTAGE-PERCAGE
137 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
138 L X-13,795 Y+0 FMAX M99
139 L X+18,683 FMAX M99
140 L Z+50 FMAX
141 M9
142 M5
143 L Z-1 FMAX M91
144 ; T20 CARBURE DIA5  VC 40 DMF OK FORET DIAM=5.1 2 DENTS A=118. ARS
145 TOOL CALL 20 Z S3000 DR+0
146 TOOL DEF 1
147 L X-13,795 Y+0 FMAX M3
148 L Z+50 FMAX M8
149 ;  DEBOURRAGE
150 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-64 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
151 L X-13,795 Y+0 FMAX M99
152 L X+18,683 FMAX M99
153 L Z+50 FMAX
154 M9
155 M5
156 L Z-1 FMAX M91
157 L Y-1 FMAX M91
158 M30
159 END PGM REP 1009 MM
