0 BEGIN PGM REP74-MATRICE CAMB PATTE-A MM
1 ; CLIENT - ?
2 ; POST-PRO FICAM
3 ; MACHINE - DMG
4 ; DESSIN MASTERCAM - REP74-MATRICE CAMB PATTE-A
5 ; PROG-CN DU 13-07-22 A 08:18
6 BLK FORM 0.1 Z X+0 Y+0 Z+0
7 BLK FORM 0.2 X+0 Y+0 Z+0
8 ; LISTE DES OUTILS UTILISES
9 ; T16 P15323501 AIR Z160 SANS TROU FRAISE 2 TAILLES DIAM=12. 4 DENTS ARS
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; T2 DIA 8.5 CARBURE VC 40 DMF OK FORET DIAM=8.5 2 DENTS A=118. ARS
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-1*
16 ; T16 P15323501 AIR Z160 SANS TROU FRAISE 2 TAILLES DIAM=12. 4 DENTS ARS
17 ; CORRECTION USURE GAUCHE
18 ; SUREP R 0. SUREP Z 0.
19 TOOL CALL 16 Z S1459 DR-6
20 TOOL DEF 1
21 L X-9,929 Y-30,414 FMAX M3
22 L Z+50 FMAX M25
23 L Z+2 FMAX
24 L Z-12,667 F500
25 L X-14,172 Y-26,172 RL F233
26 CC X-17 Y-29
27 C X-17 Y-25 DR+
28 CC X-17 Y-10,5
29 C X-31,5 Y-10,5 DR-
30 CC X-35,5 Y-10,5
31 C X-32,672 Y-7,672 DR+
32 L X-36,914 Y-3,429 R0
33 L Z+10 FMAX
34 L X-9,929 Y-27,414 FMAX
35 L Z+2 FMAX
36 L Z-12,667 F500
37 L X-14,172 Y-23,172 RL F233
38 CC X-17 Y-26
39 C X-17 Y-22 DR+
40 CC X-17 Y-10,5
41 C X-28,5 Y-10,5 DR-
42 CC X-32,5 Y-10,5
43 C X-29,672 Y-7,672 DR+
44 L X-33,914 Y-3,429 R0
45 L Z+10 FMAX
46 L X-9,929 Y-30,414 FMAX
47 L Z-10,667 FMAX
48 L Z-25,333 F500
49 L X-14,172 Y-26,172 RL F233
50 CC X-17 Y-29
51 C X-17 Y-25 DR+
52 CC X-17 Y-10,5
53 C X-31,5 Y-10,5 DR-
54 CC X-35,5 Y-10,5
55 C X-32,672 Y-7,672 DR+
56 L X-36,914 Y-3,429 R0
57 L Z+10 FMAX
58 L X-9,929 Y-27,414 FMAX
59 L Z-10,667 FMAX
60 L Z-25,333 F500
61 L X-14,172 Y-23,172 RL F233
62 CC X-17 Y-26
63 C X-17 Y-22 DR+
64 CC X-17 Y-10,5
65 C X-28,5 Y-10,5 DR-
66 CC X-32,5 Y-10,5
67 C X-29,672 Y-7,672 DR+
68 L X-33,914 Y-3,429 R0
69 L Z+10 FMAX
70 L X-9,929 Y-30,414 FMAX
71 L Z-23,333 FMAX
72 L Z-38 F500
73 L X-14,172 Y-26,172 RL F233
74 CC X-17 Y-29
75 C X-17 Y-25 DR+
76 CC X-17 Y-10,5
77 C X-31,5 Y-10,5 DR-
78 CC X-35,5 Y-10,5
79 C X-32,672 Y-7,672 DR+
80 L X-36,914 Y-3,429 R0
81 L Z+10 FMAX
82 L X-9,929 Y-27,414 FMAX
83 L Z-23,333 FMAX
84 L Z-38 F500
85 L X-14,172 Y-23,172 RL F233
86 CC X-17 Y-26
87 C X-17 Y-22 DR+
88 CC X-17 Y-10,5
89 C X-28,5 Y-10,5 DR-
90 CC X-32,5 Y-10,5
91 C X-29,672 Y-7,672 DR+
92 L X-33,914 Y-3,429 R0
93 L Z+10 FMAX
94 L X-9,929 Y-27,414 FMAX
95 L Z-23,333 FMAX
96 L Z-38 F500
97 L X-14,172 Y-23,172 RL F233
98 CC X-17 Y-26
99 C X-17 Y-22 DR+
100 CC X-17 Y-10,5
101 C X-28,5 Y-10,5 DR-
102 CC X-32,5 Y-10,5
103 C X-29,672 Y-7,672 DR+
104 L X-33,914 Y-3,429 R0
105 L Z+50 FMAX
106 L X-36,914 Y+3,429 FMAX
107 L Z+2 FMAX
108 L Z-12,667 F500
109 L X-32,672 Y+7,672 RL F233
110 CC X-35,5 Y+10,5
111 C X-31,5 Y+10,5 DR+
112 CC X-17 Y+10,5
113 C X-17 Y+25 DR-
114 CC X-17 Y+29
115 C X-14,172 Y+26,172 DR+
116 L X-9,929 Y+30,414 R0
117 L Z+10 FMAX
118 L X-33,914 Y+3,429 FMAX
119 L Z+2 FMAX
120 L Z-12,667 F500
121 L X-29,672 Y+7,672 RL F233
122 CC X-32,5 Y+10,5
123 C X-28,5 Y+10,5 DR+
124 CC X-17 Y+10,5
125 C X-17 Y+22 DR-
126 CC X-17 Y+26
127 C X-14,172 Y+23,172 DR+
128 L X-9,929 Y+27,414 R0
129 L Z+10 FMAX
130 L X-36,914 Y+3,429 FMAX
131 L Z-10,667 FMAX
132 L Z-25,333 F500
133 L X-32,672 Y+7,672 RL F233
134 CC X-35,5 Y+10,5
135 C X-31,5 Y+10,5 DR+
136 CC X-17 Y+10,5
137 C X-17 Y+25 DR-
138 CC X-17 Y+29
139 C X-14,172 Y+26,172 DR+
140 L X-9,929 Y+30,414 R0
141 L Z+10 FMAX
142 L X-33,914 Y+3,429 FMAX
143 L Z-10,667 FMAX
144 L Z-25,333 F500
145 L X-29,672 Y+7,672 RL F233
146 CC X-32,5 Y+10,5
147 C X-28,5 Y+10,5 DR+
148 CC X-17 Y+10,5
149 C X-17 Y+22 DR-
150 CC X-17 Y+26
151 C X-14,172 Y+23,172 DR+
152 L X-9,929 Y+27,414 R0
153 L Z+10 FMAX
154 L X-36,914 Y+3,429 FMAX
155 L Z-23,333 FMAX
156 L Z-38 F500
157 L X-32,672 Y+7,672 RL F233
158 CC X-35,5 Y+10,5
159 C X-31,5 Y+10,5 DR+
160 CC X-17 Y+10,5
161 C X-17 Y+25 DR-
162 CC X-17 Y+29
163 C X-14,172 Y+26,172 DR+
164 L X-9,929 Y+30,414 R0
165 L Z+10 FMAX
166 L X-33,914 Y+3,429 FMAX
167 L Z-23,333 FMAX
168 L Z-38 F500
169 L X-29,672 Y+7,672 RL F233
170 CC X-32,5 Y+10,5
171 C X-28,5 Y+10,5 DR+
172 CC X-17 Y+10,5
173 C X-17 Y+22 DR-
174 CC X-17 Y+26
175 C X-14,172 Y+23,172 DR+
176 L X-9,929 Y+27,414 R0
177 L Z+10 FMAX
178 L X-33,914 Y+3,429 FMAX
179 L Z-23,333 FMAX
180 L Z-38 F500
181 L X-29,672 Y+7,672 RL F233
182 CC X-32,5 Y+10,5
183 C X-28,5 Y+10,5 DR+
184 CC X-17 Y+10,5
185 C X-17 Y+22 DR-
186 CC X-17 Y+26
187 C X-14,172 Y+23,172 DR+
188 L X-9,929 Y+27,414 R0
189 L Z+50 FMAX
190 M78
191 M5
192 L Z-1 FMAX M91
193 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
194 ; CORRECTION USURE GAUCHE
195 ; SUREP R 0. SUREP Z 0.
196 TOOL CALL 1 Z S6000 DR-2,5
197 TOOL DEF 2
198 L X-0,196 Y+20,756 FMAX M3
199 L Z+50 FMAX
200 L Z+2 FMAX
201 L Z-2,5 F800
202 L X+1,571 Y+18,988 RL F1200
203 CC X+2,75 Y+20,167
204 C X+2,75 Y+18,5 DR+
205 L X+22,5
206 CC X+22,5 Y+16
207 C X+25 Y+16 DR-
208 L Y-16
209 CC X+22,5 Y-16
210 C X+22,5 Y-18,5 DR-
211 L X-17
212 CC X-17 Y-10,5
213 C X-25 Y-10,5 DR-
214 L Y+10,5
215 CC X-17 Y+10,5
216 C X-17 Y+18,5 DR-
217 L X+4,75
218 CC X+4,75 Y+20,167
219 C X+5,929 Y+18,988 DR+
220 L X+7,696 Y+20,756 R0
221 L Z+50 FMAX
222 M5
223 L Z-1 FMAX M91
224 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
225 TOOL CALL 1 Z S1856 DR+0
226 TOOL DEF 2
227 L X+10,5 Y+0 FMAX M3
228 L Z+50 FMAX M8
229 ;  POINTAGE-PERCAGE
230 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
231 L X+10,5 Y+0 FMAX M99
232 M9
233 M5
234 L Z-1 FMAX M91
235 ; T2 DIA 8.5 CARBURE VC 40 DMF OK FORET DIAM=8.5 2 DENTS A=118. ARS
236 TOOL CALL 2 Z S1600 DR+0
237 TOOL DEF 16
238 L X+10,5 Y+0 FMAX M3
239 L Z+50 FMAX M8
240 ;  DEBOURRAGE
241 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-75 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
242 L X+10,5 Y+0 FMAX M99
243 M9
244 M5
245 L Z-1 FMAX M91
246 L Y-1 FMAX M91
247 M30
248 END PGM REP74-MATRICE CAMB PATTE-A MM
