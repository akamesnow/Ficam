0 BEGIN PGM REP 7 21293 OP 20 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP 7 21293 OP 20
4 ; PROG-CN DU 27-04-22 A 13:10
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 AIR POCHE SANS TROU  FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T21 FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
10 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-6*
17 ; T18 P15322450 AIR POCHE SANS TROU  FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
18 ; CORRECTION USURE GAUCHE
19 ; SUREP R 0. SUREP Z 0.15
20 TOOL CALL 18 Z S3820 DR-5
21 TOOL DEF 21
22 L X-72,5 Y-3 FMAX M3
23 L Z+50 FMAX M25
24 L Z+2 FMAX
25 L Z-8,45 F500
26 L X-62,5 RL F764
27 L X+62,5
28 L X+72,5 R0
29 L Z+10 FMAX
30 L X-72,5 Y-11 FMAX
31 L Z+2 FMAX
32 L Z-8,45 F500
33 L X-62,5 RL F764
34 L X+62,5
35 L X+72,5 R0
36 L Z+10 FMAX
37 L X-72,5 Y-19 FMAX
38 L Z+2 FMAX
39 L Z-8,45 F500
40 L X-62,5 RL F764
41 L X+62,5
42 L X+72,5 R0
43 L Z+10 FMAX
44 L X-72,5 Y-27 FMAX
45 L Z+2 FMAX
46 L Z-8,45 F500
47 L X-62,5 RL F764
48 L X+62,5
49 L X+72,5 R0
50 L Z+10 FMAX
51 L X-72,5 Y-35 FMAX
52 L Z+2 FMAX
53 L Z-8,45 F500
54 L X-62,5 RL F764
55 L X+62,5
56 L X+72,5 R0
57 L Z+10 FMAX
58 L X-72,5 Y-43 FMAX
59 L Z+2 FMAX
60 L Z-8,45 F500
61 L X-62,5 RL F764
62 L X+62,5
63 L X+72,5 R0
64 L Z+10 FMAX
65 L X-72,5 Y-3 FMAX
66 L Z-6,45 FMAX
67 L Z-8,85 F500
68 L X-62,5 RL F764
69 L X+62,5
70 L X+72,5 R0
71 L Z+10 FMAX
72 L X-72,5 Y-11 FMAX
73 L Z-6,45 FMAX
74 L Z-8,85 F500
75 L X-62,5 RL F764
76 L X+62,5
77 L X+72,5 R0
78 L Z+10 FMAX
79 L X-72,5 Y-19 FMAX
80 L Z-6,45 FMAX
81 L Z-8,85 F500
82 L X-62,5 RL F764
83 L X+62,5
84 L X+72,5 R0
85 L Z+10 FMAX
86 L X-72,5 Y-27 FMAX
87 L Z-6,45 FMAX
88 L Z-8,85 F500
89 L X-62,5 RL F764
90 L X+62,5
91 L X+72,5 R0
92 L Z+10 FMAX
93 L X-72,5 Y-35 FMAX
94 L Z-6,45 FMAX
95 L Z-8,85 F500
96 L X-62,5 RL F764
97 L X+62,5
98 L X+72,5 R0
99 L Z+10 FMAX
100 L X-72,5 Y-43 FMAX
101 L Z-6,45 FMAX
102 L Z-8,85 F500
103 L X-62,5 RL F764
104 L X+62,5
105 L X+72,5 R0
106 L Z+10 FMAX
107 L X-72,5 FMAX
108 L Z-6,45 FMAX
109 L Z-8,85 F500
110 L X-62,5 RL F764
111 L X+62,5
112 L X+72,5 R0
113 L Z+50 FMAX
114 M78
115 M5
116 L Z-1 FMAX M91
117 ; T21 FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
118 ; CORRECTION USURE GAUCHE
119 ; SUREP R 0. SUREP Z 0.05
120 TOOL CALL 21 Z S4456 DR-5
121 TOOL DEF 1
122 L X-72,5 Y-3 FMAX M3
123 L Z+50 FMAX M8
124 L Z+2 FMAX
125 L Z-8,95 F297
126 L X-62,5 RL F2139
127 L X+62,5
128 L X+72,5 R0
129 L Z+10 FMAX
130 L X-72,5 Y-11 FMAX
131 L Z+2 FMAX
132 L Z-8,95 F297
133 L X-62,5 RL F2139
134 L X+62,5
135 L X+72,5 R0
136 L Z+10 FMAX
137 L X-72,5 Y-19 FMAX
138 L Z+2 FMAX
139 L Z-8,95 F297
140 L X-62,5 RL F2139
141 L X+62,5
142 L X+72,5 R0
143 L Z+10 FMAX
144 L X-72,5 Y-27 FMAX
145 L Z+2 FMAX
146 L Z-8,95 F297
147 L X-62,5 RL F2139
148 L X+62,5
149 L X+72,5 R0
150 L Z+10 FMAX
151 L X-72,5 Y-35 FMAX
152 L Z+2 FMAX
153 L Z-8,95 F297
154 L X-62,5 RL F2139
155 L X+62,5
156 L X+72,5 R0
157 L Z+10 FMAX
158 L X-72,5 Y-43 FMAX
159 L Z+2 FMAX
160 L Z-8,95 F297
161 L X-62,5 RL F2139
162 L X+62,5
163 L X+72,5 R0
164 L Z+10 FMAX
165 L X-72,5 FMAX
166 L Z+2 FMAX
167 L Z-8,95 F297
168 L X-62,5 RL F2139
169 L X+62,5
170 L X+72,5 R0
171 L Z+50 FMAX
172 M9
173 M5
174 L Z-1 FMAX M91
175 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
176 TOOL CALL 1 Z S1856 DR+0
177 TOOL DEF 20
178 L X-37,5 Y-34 FMAX M3
179 L Z+50 FMAX M8
180 ;  POINTAGE-PERCAGE
181 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-9 ; COORD. SURFACE PIECE~
    Q204=+59 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
182 L X-37,5 Y-34 FMAX M99
183 L X+37,5 FMAX M99
184 L Z+50 FMAX
185 M9
186 M5
187 L Z-1 FMAX M91
188 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
189 TOOL CALL 20 Z S3800 DR+0
190 TOOL DEF 29
191 L X-37,5 Y-34 FMAX M3
192 L Z+50 FMAX M8
193 ;  DEBOURRAGE
194 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-9 ; COORD. SURFACE PIECE~
    Q204=+59 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
195 L X-37,5 Y-34 FMAX M99
196 L X+37,5 FMAX M99
197 L Z+50 FMAX
198 M9
199 M5
200 L Z-1 FMAX M91
201 M00
202 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
203 TOOL CALL 29 Z S200 DR+0
204 TOOL DEF 18
205 L X-37,5 Y-34 FMAX M3
206 L Z+50 FMAX M8
207 ;  TARAUDAGE
208 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q239=1. ; PAS DE VIS~
    Q203=-9 ; COORD. SURFACE PIECE~
    Q204=+59 ; SAUT DE BRIDE
209 L X-37,5 Y-34 FMAX M99
210 L X+37,5 FMAX M99
211 L Z+50 FMAX
212 M9
213 M5
214 L Z-1 FMAX M91
215 L Y-1 FMAX M91
216 M30
217 END PGM REP 7 21293 OP 20 MM
