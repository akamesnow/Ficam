0 BEGIN PGM REP 118 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP 118
4 ; PROG-CN DU 27-12-22 A 15:31
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
11 ; T16 P15322501 AIR Z  SANS  TROU FRAISE 2 TAILLES DIAM=12. 4 DENTS ARS
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-1*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 2
19 L X-19 Y-3,5 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X-19 Y-3,5 FMAX M99
24 L X+19 FMAX M99
25 L Z+50 FMAX
26 M9
27 M5
28 L Z-1 FMAX M91
29 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
30 TOOL CALL 2 Z S2000 DR+0
31 TOOL DEF 27
32 L X-19 Y-3,5 FMAX M3
33 L Z+50 FMAX M8
34 ;  DEBOURRAGE
35 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
36 L X-19 Y-3,5 FMAX M99
37 L X+19 FMAX M99
38 L Z+50 FMAX
39 M9
40 M5
41 L Z-1 FMAX M91
42 M00
43 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
44 TOOL CALL 27 Z S100 DR+0
45 TOOL DEF 16
46 L X-19 Y-3,5 FMAX M3
47 L Z+50 FMAX M8
48 ;  TARAUDAGE
49 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-26 ; PROFONDEUR~
    Q239=1.5 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
50 L X-19 Y-3,5 FMAX M99
51 L X+19 FMAX M99
52 L Z+50 FMAX
53 M9
54 M5
55 L Z-1 FMAX M91
56 ; T16 P15322501 AIR Z  SANS  TROU FRAISE 2 TAILLES DIAM=12. 4 DENTS ARS
57 ; CORRECTION USURE GAUCHE
58 ; SUREP R 0.2 SUREP Z 0.
59 TOOL CALL 16 Z S1459 DR-6
60 TOOL DEF 1
61 L X-39,485 Y+26,114 FMAX M3
62 L Z+50 FMAX M25
63 L Z+2 FMAX
64 L Z-13 F500
65 L X-34,536 Y+21,164 RL F321
66 CC X-31 Y+24,7
67 C X-31 Y+19,7 DR+
68 L X+31
69 CC X+31 Y+24,7
70 C X+34,536 Y+21,164 DR+
71 L X+39,485 Y+26,114 R0
72 L Z+10 FMAX
73 L X-39,485 Y+23,114 FMAX
74 L Z+2 FMAX
75 L Z-13 F500
76 L X-34,536 Y+18,164 RL F321
77 CC X-31 Y+21,7
78 C X-31 Y+16,7 DR+
79 L X+31
80 CC X+31 Y+21,7
81 C X+34,536 Y+18,164 DR+
82 L X+39,485 Y+23,114 R0
83 L Z+10 FMAX
84 L X-39,485 Y+20,114 FMAX
85 L Z+2 FMAX
86 L Z-13 F500
87 L X-34,536 Y+15,164 RL F321
88 CC X-31 Y+18,7
89 C X-31 Y+13,7 DR+
90 L X+31
91 CC X+31 Y+18,7
92 C X+34,536 Y+15,164 DR+
93 L X+39,485 Y+20,114 R0
94 L Z+10 FMAX
95 L X-39,485 Y+26,114 FMAX
96 L Z-11 FMAX
97 L Z-26 F500
98 L X-34,536 Y+21,164 RL F321
99 CC X-31 Y+24,7
100 C X-31 Y+19,7 DR+
101 L X+31
102 CC X+31 Y+24,7
103 C X+34,536 Y+21,164 DR+
104 L X+39,485 Y+26,114 R0
105 L Z+10 FMAX
106 L X-39,485 Y+23,114 FMAX
107 L Z-11 FMAX
108 L Z-26 F500
109 L X-34,536 Y+18,164 RL F321
110 CC X-31 Y+21,7
111 C X-31 Y+16,7 DR+
112 L X+31
113 CC X+31 Y+21,7
114 C X+34,536 Y+18,164 DR+
115 L X+39,485 Y+23,114 R0
116 L Z+10 FMAX
117 L X-39,485 Y+20,114 FMAX
118 L Z-11 FMAX
119 L Z-26 F500
120 L X-34,536 Y+15,164 RL F321
121 CC X-31 Y+18,7
122 C X-31 Y+13,7 DR+
123 L X+31
124 CC X+31 Y+18,7
125 C X+34,536 Y+15,164 DR+
126 L X+39,485 Y+20,114 R0
127 L Z+10 FMAX
128 L X-39,485 FMAX
129 L Z-11 FMAX
130 L Z-26 F500
131 L X-34,536 Y+15,164 RL F321
132 CC X-31 Y+18,7
133 C X-31 Y+13,7 DR+
134 L X+31
135 CC X+31 Y+18,7
136 C X+34,536 Y+15,164 DR+
137 L X+39,485 Y+20,114 R0
138 L Z+10 FMAX
139 L X-39,485 FMAX
140 L Z-11 FMAX
141 L Z-26 F500
142 L X-34,536 Y+15,164 RL F321
143 CC X-31 Y+18,7
144 C X-31 Y+13,7 DR+
145 L X+31
146 CC X+31 Y+18,7
147 C X+34,536 Y+15,164 DR+
148 L X+39,485 Y+20,114 R0
149 L Z+50 FMAX
150 M78
151 M5
152 L Z-1 FMAX M91
153 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
154 ; CORRECTION USURE GAUCHE
155 ; SUREP R 0. SUREP Z 0.
156 TOOL CALL 1 Z S6000 DR-2,5
157 L X-3,536 Y+20,673 FMAX M3
158 L Z+50 FMAX
159 L Z+2 FMAX
160 L Z-2,5 F800
161 L X-1,473 Y+18,61 RL F1200
162 CC X+0 Y+20,083
163 C X+0 Y+18 DR+
164 L X+31
165 CC X+31 Y+15,5
166 C X+33,5 Y+15,5 DR-
167 L Y-15,5
168 CC X+31 Y-15,5
169 C X+31 Y-18 DR-
170 L X-31
171 CC X-31 Y-15,5
172 C X-33,5 Y-15,5 DR-
173 L Y+15,5
174 CC X-31 Y+15,5
175 C X-31 Y+18 DR-
176 L X+0
177 CC X+0 Y+20,083
178 C X+1,473 Y+18,61 DR+
179 L X+3,536 Y+20,673 R0
180 L Z+50 FMAX
181 M5
182 L Z-1 FMAX M91
183 L Y-1 FMAX M91
184 M30
185 END PGM REP 118 MM
