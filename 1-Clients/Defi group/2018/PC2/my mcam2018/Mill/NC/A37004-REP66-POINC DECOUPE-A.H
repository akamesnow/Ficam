0 BEGIN PGM A37004-REP66-POINC DECOUPE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - A37004-REP66-POINC DECOUPE-A
4 ; PROG-CN DU 04-01-23 A 14:21
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-5*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 25
20 L X-59,764 Y+15,55 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-59,764 Y+15,55 FMAX M99
25 L X-37,764 FMAX M99
26 L X-11 FMAX M99
27 L X+11 FMAX M99
28 L X+37,764 FMAX M99
29 L X+59,764 FMAX M99
30 L Y-15,55 FMAX M99
31 L X+37,764 FMAX M99
32 L X+11 FMAX M99
33 L X-11 FMAX M99
34 L X-37,764 FMAX M99
35 L X-59,764 FMAX M99
36 L Z+50 FMAX
37 M9
38 M5
39 L Z-1 FMAX M91
40 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
41 TOOL CALL 25 Z S3000 DR+0
42 TOOL DEF 28
43 L X-59,764 Y+15,55 FMAX M3
44 L Z+50 FMAX M8
45 ;  DEBOURRAGE
46 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-28 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
47 L X-59,764 Y+15,55 FMAX M99
48 L X-37,764 FMAX M99
49 L X-11 FMAX M99
50 L X+11 FMAX M99
51 L X+37,764 FMAX M99
52 L X+59,764 FMAX M99
53 L Y-15,55 FMAX M99
54 L X+37,764 FMAX M99
55 L X+11 FMAX M99
56 L X-11 FMAX M99
57 L X-37,764 FMAX M99
58 L X-59,764 FMAX M99
59 L Z+50 FMAX
60 M9
61 M5
62 L Z-1 FMAX M91
63 M00
64 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
65 TOOL CALL 28 Z S100 DR+0
66 TOOL DEF 1
67 L X-59,764 Y+15,55 FMAX M3
68 L Z+50 FMAX M8
69 ;  TARAUDAGE
70 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
71 L X-59,764 Y+15,55 FMAX M99
72 L X-37,764 FMAX M99
73 L X-11 FMAX M99
74 L X+11 FMAX M99
75 L X+37,764 FMAX M99
76 L X+59,764 FMAX M99
77 L Y-15,55 FMAX M99
78 L X+37,764 FMAX M99
79 L X+11 FMAX M99
80 L X-11 FMAX M99
81 L X-37,764 FMAX M99
82 L X-59,764 FMAX M99
83 L Z+50 FMAX
84 M9
85 M5
86 L Z-1 FMAX M91
87 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
88 TOOL CALL 1 Z S1856 DR+0
89 TOOL DEF 20
90 L X-57,264 Y+34,55 FMAX M3
91 L Z+50 FMAX M8
92 ;  POINTAGE-PERCAGE
93 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
94 L X-57,264 Y+34,55 FMAX M99
95 L X-40,264 FMAX M99
96 L X-8,5 FMAX M99
97 L X+8,5 FMAX M99
98 L X+40,264 FMAX M99
99 L X+57,264 FMAX M99
100 L Y-34,55 FMAX M99
101 L X+40,264 FMAX M99
102 L X+8,5 FMAX M99
103 L X-8,5 FMAX M99
104 L X-40,264 FMAX M99
105 L X-57,264 FMAX M99
106 L Z+50 FMAX
107 M9
108 M5
109 L Z-1 FMAX M91
110 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
111 TOOL CALL 20 Z S3800 DR+0
112 TOOL DEF 29
113 L X-57,264 Y+34,55 FMAX M3
114 L Z+50 FMAX M8
115 ;  DEBOURRAGE
116 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
117 L X-57,264 Y+34,55 FMAX M99
118 L X-40,264 FMAX M99
119 L X-8,5 FMAX M99
120 L X+8,5 FMAX M99
121 L X+40,264 FMAX M99
122 L X+57,264 FMAX M99
123 L Y-34,55 FMAX M99
124 L X+40,264 FMAX M99
125 L X+8,5 FMAX M99
126 L X-8,5 FMAX M99
127 L X-40,264 FMAX M99
128 L X-57,264 FMAX M99
129 L Z+50 FMAX
130 M9
131 M5
132 L Z-1 FMAX M91
133 M00
134 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
135 TOOL CALL 29 Z S200 DR+0
136 TOOL DEF 1
137 L X-57,264 Y+34,55 FMAX M3
138 L Z+50 FMAX M8
139 ;  TARAUDAGE
140 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q239=1. ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
141 L X-57,264 Y+34,55 FMAX M99
142 L X-40,264 FMAX M99
143 L X-8,5 FMAX M99
144 L X+8,5 FMAX M99
145 L X+40,264 FMAX M99
146 L X+57,264 FMAX M99
147 L Y-34,55 FMAX M99
148 L X+40,264 FMAX M99
149 L X+8,5 FMAX M99
150 L X-8,5 FMAX M99
151 L X-40,264 FMAX M99
152 L X-57,264 FMAX M99
153 L Z+50 FMAX
154 M9
155 M5
156 L Z-1 FMAX M91
157 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
158 TOOL CALL 1 Z S1856 DR+0
159 TOOL DEF 20
160 L X-54,014 Y+0 FMAX M3
161 L Z+50 FMAX M8
162 ;  POINTAGE-PERCAGE
163 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
164 L X-54,014 Y+0 FMAX M99
165 L X-43,514 FMAX M99
166 L X-5,25 FMAX M99
167 L X+5,25 FMAX M99
168 L X+43,514 FMAX M99
169 L X+54,014 FMAX M99
170 L Z+50 FMAX
171 M9
172 M5
173 L Z-1 FMAX M91
174 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
175 TOOL CALL 20 Z S3800 DR+0
176 TOOL DEF 1
177 L X-54,014 Y+0 FMAX M3
178 L Z+50 FMAX M8
179 ;  DEBOURRAGE
180 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
181 L X-54,014 Y+0 FMAX M99
182 L X-43,514 FMAX M99
183 L X-5,25 FMAX M99
184 L X+5,25 FMAX M99
185 L X+43,514 FMAX M99
186 L X+54,014 FMAX M99
187 L Z+50 FMAX
188 M9
189 M5
190 L Z-1 FMAX M91
191 L Y-1 FMAX M91
192 M30
193 END PGM A37004-REP66-POINC DECOUPE-A MM
