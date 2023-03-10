0 BEGIN PGM REP32-20977-OP20-C-ELEMENT PRESSEUR-C MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP32-20977-OP20-C-ELEMENT PRESSEUR-C
4 ; PROG-CN DU 16-09-20 A 11:02
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T9 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
10 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
11 ; T6 CARB DIA 7.7  VC 40 DMF FORET DIAM=7.7 2 DENTS A=118. ARS
12 ; T13 ALESOIR CARBURE DIA 8 VC 15 ALESOIR DIAM=8. 5 DENTS ARS
13 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
14 ; FIN DE LISTE DES OUTILS
15 L R0 FMAX
16 L Z-1 FMAX M91
17 ; *GROUPE D'USINAGE-2*
18 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
19 TOOL CALL 1 Z S1856 DR+0
20 TOOL DEF 9
21 L X-12 Y-18 FMAX M3
22 L Z+50 FMAX M8
23 ;  POINTAGE-PERCAGE
24 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,7 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,7 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
25 L X-12 Y-18 FMAX M99
26 M9
27 M5
28 L Z-1 FMAX M91
29 ; T9 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
30 TOOL CALL 9 Z S1600 DR+0
31 TOOL DEF 10
32 L X-12 Y-18 FMAX M3
33 L Z+50 FMAX M8
34 ;  DEBOURRAGE
35 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+4,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
36 L X-12 Y-18 FMAX M99
37 M9
38 M5
39 L Z-1 FMAX M91
40 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
41 TOOL CALL 10 Z S500 DR+0
42 TOOL DEF 1
43 L X-12 Y-18 FMAX M3
44 L Z+50 FMAX M8
45 ;  POINTAGE-PERCAGE
46 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=75 ; AVANCE PLONGEE PROF.~
    Q202=+45 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
47 L X-12 Y-18 FMAX M99
48 M9
49 M5
50 L Z-1 FMAX M91
51 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
52 TOOL CALL 1 Z S1856 DR+0
53 TOOL DEF 6
54 L X-12 Y+18 FMAX M3
55 L Z+50 FMAX M8
56 ;  POINTAGE-PERCAGE
57 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,7 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,7 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
58 L X-12 Y+18 FMAX M99
59 M9
60 M5
61 L Z-1 FMAX M91
62 ; T6 CARB DIA 7.7  VC 40 DMF FORET DIAM=7.7 2 DENTS A=118. ARS
63 TOOL CALL 6 Z S1850 DR+0
64 TOOL DEF 13
65 L X-12 Y+18 FMAX M3
66 L Z+50 FMAX M8
67 ;  DEBOURRAGE
68 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=175 ; AVANCE PLONGEE PROF.~
    Q202=+3,465 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
69 L X-12 Y+18 FMAX M99
70 M9
71 M5
72 L Z-1 FMAX M91
73 ; T13 ALESOIR CARBURE DIA 8 VC 15 ALESOIR DIAM=8. 5 DENTS ARS
74 TOOL CALL 13 Z S625 DR+0
75 TOOL DEF 18
76 L X-12 Y+18 FMAX M3
77 L Z+50 FMAX M8
78 ;  POINTAGE-PERCAGE
79 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=64 ; AVANCE PLONGEE PROF.~
    Q202=+45 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
80 L X-12 Y+18 FMAX M99
81 M9
82 M5
83 L Z-1 FMAX M91
84 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
85 ; CORRECTION USURE GAUCHE
86 ; SUREP R 0. SUREP Z 0.
87 TOOL CALL 18 Z S1751 DR-5
88 TOOL DEF 1
89 L X+72,101 Y-25,018 FMAX M3
90 L Z+50 FMAX M25
91 L Z+2 FMAX
92 L Z-9 F500
93 L X+67,976 Y-29,143 RL F315
94 CC X+70,333 Y-31,5
95 C X+67 Y-31,5 DR+
96 CC X+49,5 Y-31,5
97 C X+49,5 Y-49 DR-
98 CC X+49,5 Y-52,333
99 C X+47,143 Y-49,976 DR+
100 L X+43,018 Y-54,101 R0
101 L Z+10 FMAX
102 L X+68,101 Y-25,018 FMAX
103 L Z+2 FMAX
104 L Z-9 F500
105 L X+63,976 Y-29,143 RL F315
106 CC X+66,333 Y-31,5
107 C X+63 Y-31,5 DR+
108 CC X+49,5 Y-31,5
109 C X+49,5 Y-45 DR-
110 CC X+49,5 Y-48,333
111 C X+47,143 Y-45,976 DR+
112 L X+43,018 Y-50,101 R0
113 L Z+10 FMAX
114 L X+72,101 Y-25,018 FMAX
115 L Z-7 FMAX
116 L Z-18 F500
117 L X+67,976 Y-29,143 RL F315
118 CC X+70,333 Y-31,5
119 C X+67 Y-31,5 DR+
120 CC X+49,5 Y-31,5
121 C X+49,5 Y-49 DR-
122 CC X+49,5 Y-52,333
123 C X+47,143 Y-49,976 DR+
124 L X+43,018 Y-54,101 R0
125 L Z+10 FMAX
126 L X+68,101 Y-25,018 FMAX
127 L Z-7 FMAX
128 L Z-18 F500
129 L X+63,976 Y-29,143 RL F315
130 CC X+66,333 Y-31,5
131 C X+63 Y-31,5 DR+
132 CC X+49,5 Y-31,5
133 C X+49,5 Y-45 DR-
134 CC X+49,5 Y-48,333
135 C X+47,143 Y-45,976 DR+
136 L X+43,018 Y-50,101 R0
137 L Z+10 FMAX
138 L X+68,101 Y-25,018 FMAX
139 L Z-7 FMAX
140 L Z-18 F500
141 L X+63,976 Y-29,143 RL F315
142 CC X+66,333 Y-31,5
143 C X+63 Y-31,5 DR+
144 CC X+49,5 Y-31,5
145 C X+49,5 Y-45 DR-
146 CC X+49,5 Y-48,333
147 C X+47,143 Y-45,976 DR+
148 L X+43,018 Y-50,101 R0
149 L Z+10 FMAX
150 L X+68,101 Y-25,018 FMAX
151 L Z-7 FMAX
152 L Z-18 F500
153 L X+63,976 Y-29,143 RL F315
154 CC X+66,333 Y-31,5
155 C X+63 Y-31,5 DR+
156 CC X+49,5 Y-31,5
157 C X+49,5 Y-45 DR-
158 CC X+49,5 Y-48,333
159 C X+47,143 Y-45,976 DR+
160 L X+43,018 Y-50,101 R0
161 L Z+50 FMAX
162 L X-43,018 Y-54,101 FMAX
163 L Z+2 FMAX
164 L Z-9 F500
165 L X-47,143 Y-49,976 RL F315
166 CC X-49,5 Y-52,333
167 C X-49,5 Y-49 DR+
168 CC X-49,5 Y-31,5
169 C X-67 Y-31,5 DR-
170 CC X-70,333 Y-31,5
171 C X-67,976 Y-29,143 DR+
172 L X-72,101 Y-25,018 R0
173 L Z+10 FMAX
174 L X-43,018 Y-50,101 FMAX
175 L Z+2 FMAX
176 L Z-9 F500
177 L X-47,143 Y-45,976 RL F315
178 CC X-49,5 Y-48,333
179 C X-49,5 Y-45 DR+
180 CC X-49,5 Y-31,5
181 C X-63 Y-31,5 DR-
182 CC X-66,333 Y-31,5
183 C X-63,976 Y-29,143 DR+
184 L X-68,101 Y-25,018 R0
185 L Z+10 FMAX
186 L X-43,018 Y-54,101 FMAX
187 L Z-7 FMAX
188 L Z-18 F500
189 L X-47,143 Y-49,976 RL F315
190 CC X-49,5 Y-52,333
191 C X-49,5 Y-49 DR+
192 CC X-49,5 Y-31,5
193 C X-67 Y-31,5 DR-
194 CC X-70,333 Y-31,5
195 C X-67,976 Y-29,143 DR+
196 L X-72,101 Y-25,018 R0
197 L Z+10 FMAX
198 L X-43,018 Y-50,101 FMAX
199 L Z-7 FMAX
200 L Z-18 F500
201 L X-47,143 Y-45,976 RL F315
202 CC X-49,5 Y-48,333
203 C X-49,5 Y-45 DR+
204 CC X-49,5 Y-31,5
205 C X-63 Y-31,5 DR-
206 CC X-66,333 Y-31,5
207 C X-63,976 Y-29,143 DR+
208 L X-68,101 Y-25,018 R0
209 L Z+10 FMAX
210 L X-43,018 Y-50,101 FMAX
211 L Z-7 FMAX
212 L Z-18 F500
213 L X-47,143 Y-45,976 RL F315
214 CC X-49,5 Y-48,333
215 C X-49,5 Y-45 DR+
216 CC X-49,5 Y-31,5
217 C X-63 Y-31,5 DR-
218 CC X-66,333 Y-31,5
219 C X-63,976 Y-29,143 DR+
220 L X-68,101 Y-25,018 R0
221 L Z+10 FMAX
222 L X-43,018 Y-50,101 FMAX
223 L Z-7 FMAX
224 L Z-18 F500
225 L X-47,143 Y-45,976 RL F315
226 CC X-49,5 Y-48,333
227 C X-49,5 Y-45 DR+
228 CC X-49,5 Y-31,5
229 C X-63 Y-31,5 DR-
230 CC X-66,333 Y-31,5
231 C X-63,976 Y-29,143 DR+
232 L X-68,101 Y-25,018 R0
233 L Z+50 FMAX
234 L X-72,101 Y+25,018 FMAX
235 L Z+2 FMAX
236 L Z-9 F500
237 L X-67,976 Y+29,143 RL F315
238 CC X-70,333 Y+31,5
239 C X-67 Y+31,5 DR+
240 CC X-49,5 Y+31,5
241 C X-49,5 Y+49 DR-
242 CC X-49,5 Y+52,333
243 C X-47,143 Y+49,976 DR+
244 L X-43,018 Y+54,101 R0
245 L Z+10 FMAX
246 L X-68,101 Y+25,018 FMAX
247 L Z+2 FMAX
248 L Z-9 F500
249 L X-63,976 Y+29,143 RL F315
250 CC X-66,333 Y+31,5
251 C X-63 Y+31,5 DR+
252 CC X-49,5 Y+31,5
253 C X-49,5 Y+45 DR-
254 CC X-49,5 Y+48,333
255 C X-47,143 Y+45,976 DR+
256 L X-43,018 Y+50,101 R0
257 L Z+10 FMAX
258 L X-72,101 Y+25,018 FMAX
259 L Z-7 FMAX
260 L Z-18 F500
261 L X-67,976 Y+29,143 RL F315
262 CC X-70,333 Y+31,5
263 C X-67 Y+31,5 DR+
264 CC X-49,5 Y+31,5
265 C X-49,5 Y+49 DR-
266 CC X-49,5 Y+52,333
267 C X-47,143 Y+49,976 DR+
268 L X-43,018 Y+54,101 R0
269 L Z+10 FMAX
270 L X-68,101 Y+25,018 FMAX
271 L Z-7 FMAX
272 L Z-18 F500
273 L X-63,976 Y+29,143 RL F315
274 CC X-66,333 Y+31,5
275 C X-63 Y+31,5 DR+
276 CC X-49,5 Y+31,5
277 C X-49,5 Y+45 DR-
278 CC X-49,5 Y+48,333
279 C X-47,143 Y+45,976 DR+
280 L X-43,018 Y+50,101 R0
281 L Z+10 FMAX
282 L X-68,101 Y+25,018 FMAX
283 L Z-7 FMAX
284 L Z-18 F500
285 L X-63,976 Y+29,143 RL F315
286 CC X-66,333 Y+31,5
287 C X-63 Y+31,5 DR+
288 CC X-49,5 Y+31,5
289 C X-49,5 Y+45 DR-
290 CC X-49,5 Y+48,333
291 C X-47,143 Y+45,976 DR+
292 L X-43,018 Y+50,101 R0
293 L Z+10 FMAX
294 L X-68,101 Y+25,018 FMAX
295 L Z-7 FMAX
296 L Z-18 F500
297 L X-63,976 Y+29,143 RL F315
298 CC X-66,333 Y+31,5
299 C X-63 Y+31,5 DR+
300 CC X-49,5 Y+31,5
301 C X-49,5 Y+45 DR-
302 CC X-49,5 Y+48,333
303 C X-47,143 Y+45,976 DR+
304 L X-43,018 Y+50,101 R0
305 L Z+50 FMAX
306 M78
307 M5
308 L Z-1 FMAX M91
309 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
310 ; CORRECTION USURE GAUCHE
311 ; SUREP R 0. SUREP Z 0.
312 TOOL CALL 1 Z S6000 DR-2,5
313 L X+1,009 Y+45,051 FMAX M3
314 L Z+50 FMAX
315 L Z+2 FMAX
316 L Z-2,1 F800
317 L X+3,071 Y+42,988 RL F1200
318 CC X+4,25 Y+44,167
319 C X+4,25 Y+42,5 DR+
320 L X+58
321 CC X+58 Y+40
322 C X+60,5 Y+40 DR-
323 L Y-31,5
324 CC X+49,5 Y-31,5
325 C X+49,5 Y-42,5 DR-
326 L X-49,5
327 CC X-49,5 Y-31,5
328 C X-60,5 Y-31,5 DR-
329 L Y+31,5
330 CC X-49,5 Y+31,5
331 C X-49,5 Y+42,5 DR-
332 L X+6,25
333 CC X+6,25 Y+44,167
334 C X+7,429 Y+42,988 DR+
335 L X+9,491 Y+45,051 R0
336 L Z+50 FMAX
337 M5
338 L Z-1 FMAX M91
339 L Y-1 FMAX M91
340 M30
341 END PGM REP32-20977-OP20-C-ELEMENT PRESSEUR-C MM
