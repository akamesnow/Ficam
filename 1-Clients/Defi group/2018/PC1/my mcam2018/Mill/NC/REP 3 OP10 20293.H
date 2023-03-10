0 BEGIN PGM REP 3 OP10 20293 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 3 OP10 20293
4 ; PROG-CN DU 30-05-22 A 10:48
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T19 DIA 6 AIR FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
11 ; T3 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
12 ; T11 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-1*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 25
20 L X-45,5 Y-15 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,1 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-45,5 Y-15 FMAX M99
25 L X+45,5 FMAX M99
26 L Z+50 FMAX
27 M9
28 M5
29 L Z-1 FMAX M91
30 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
31 TOOL CALL 25 Z S3000 DR+0
32 TOOL DEF 19
33 L X-45,5 Y-15 FMAX M3
34 L Z+50 FMAX M7
35 ;  DEBOURRAGE
36 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
37 L X-45,5 Y-15 FMAX M99
38 L X+45,5 FMAX M99
39 L Z+50 FMAX
40 M9
41 M5
42 L Z-1 FMAX M91
43 ; T19 DIA 6 AIR FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
44 ; CORRECTION AUCUNE
45 ; SUREP R 0. SUREP Z 0.
46 TOOL CALL 19 Z S7427 DR+0
47 TOOL DEF 1
48 L X-45,5 Y-15 FMAX M3
49 L Z+50 FMAX M25
50 L Z+2 FMAX
51 L Z-7 F297
52 L X-45,487 F3565
53 CC X-45,525 Y-15
54 C X-45,562 Y-15 DR+
55 CC X-45,475 Y-15
56 C X-45,387 Y-15 DR+
57 CC X-45,525 Y-15
58 C X-45,662 Y-15 DR+
59 CC X-45,475 Y-15
60 C X-45,287 Y-15 DR+
61 CC X-45,525 Y-15
62 C X-45,762 Y-15 DR+
63 CC X-45,475 Y-15
64 C X-45,187 Y-15 DR+
65 CC X-45,525 Y-15
66 C X-45,862 Y-15 DR+
67 CC X-45,475 Y-15
68 C X-45,087 Y-15 DR+
69 CC X-45,525 Y-15
70 C X-45,962 Y-15 DR+
71 CC X-45,475 Y-15
72 C X-44,987 Y-15 DR+
73 CC X-45,525 Y-15
74 C X-46,062 Y-15 DR+
75 CC X-45,475 Y-15
76 C X-44,887 Y-15 DR+
77 CC X-45,525 Y-15
78 C X-46,162 Y-15 DR+
79 CC X-45,475 Y-15
80 C X-44,787 Y-15 DR+
81 CC X-45,525 Y-15
82 C X-46,262 Y-15 DR+
83 CC X-45,475 Y-15
84 C X-44,687 Y-15 DR+
85 CC X-45,525 Y-15
86 C X-46,362 Y-15 DR+
87 CC X-45,475 Y-15
88 C X-44,587 Y-15 DR+
89 CC X-45,525 Y-15
90 C X-46,462 Y-15 DR+
91 CC X-45,475 Y-15
92 C X-44,487 Y-15 DR+
93 CC X-45,525 Y-15
94 C X-46,562 Y-15 DR+
95 CC X-45,475 Y-15
96 C X-44,387 Y-15 DR+
97 CC X-45,525 Y-15
98 C X-46,662 Y-15 DR+
99 CC X-45,475 Y-15
100 C X-44,287 Y-15 DR+
101 CC X-45,525 Y-15
102 C X-46,762 Y-15 DR+
103 CC X-45,475 Y-15
104 C X-44,187 Y-15 DR+
105 CC X-45,525 Y-15
106 C X-46,862 Y-15 DR+
107 CC X-45,475 Y-15
108 C X-44,087 Y-15 DR+
109 CC X-45,525 Y-15
110 C X-46,962 Y-15 DR+
111 CC X-45,475 Y-15
112 C X-43,987 Y-15 DR+
113 CC X-45,525 Y-15
114 C X-47,062 Y-15 DR+
115 CC X-45,475 Y-15
116 C X-43,887 Y-15 DR+
117 CC X-45,525 Y-15
118 C X-47,162 Y-15 DR+
119 CC X-45,475 Y-15
120 C X-43,787 Y-15 DR+
121 CC X-45,525 Y-15
122 C X-47,262 Y-15 DR+
123 CC X-45,475 Y-15
124 C X-43,687 Y-15 DR+
125 CC X-45,525 Y-15
126 C X-47,362 Y-15 DR+
127 CC X-45,475 Y-15
128 C X-43,587 Y-15 DR+
129 CC X-45,525 Y-15
130 C X-47,462 Y-15 DR+
131 CC X-45,475 Y-15
132 C X-43,487 Y-15 DR+
133 CC X-45,525 Y-15
134 C X-47,562 Y-15 DR+
135 CC X-45,475 Y-15
136 C X-43,387 Y-15 DR+
137 CC X-45,525 Y-15
138 C X-47,662 Y-15 DR+
139 CC X-45,475 Y-15
140 C X-43,287 Y-15 DR+
141 CC X-45,525 Y-15
142 C X-47,762 Y-15 DR+
143 CC X-45,475 Y-15
144 C X-43,187 Y-15 DR+
145 CC X-45,525 Y-15
146 C X-47,862 Y-15 DR+
147 CC X-45,475 Y-15
148 C X-43,087 Y-15 DR+
149 CC X-45,525 Y-15
150 C X-47,962 Y-15 DR+
151 CC X-45,475 Y-15
152 C X-44,241 Y-17,16 DR+
153 CC X-45,5 Y-15
154 C X-45,5 Y-17,5 DR+
155 CC X-45,5 Y-15
156 C X-44,241 Y-17,16 DR+
157 L Z+50 FMAX
158 L X+45,5 Y-15 FMAX
159 L Z+2 FMAX
160 L Z-7 F297
161 L X+45,512 F3565
162 CC X+45,475 Y-15
163 C X+45,437 Y-15 DR+
164 CC X+45,525 Y-15
165 C X+45,612 Y-15 DR+
166 CC X+45,475 Y-15
167 C X+45,337 Y-15 DR+
168 CC X+45,525 Y-15
169 C X+45,712 Y-15 DR+
170 CC X+45,475 Y-15
171 C X+45,237 Y-15 DR+
172 CC X+45,525 Y-15
173 C X+45,812 Y-15 DR+
174 CC X+45,475 Y-15
175 C X+45,137 Y-15 DR+
176 CC X+45,525 Y-15
177 C X+45,912 Y-15 DR+
178 CC X+45,475 Y-15
179 C X+45,037 Y-15 DR+
180 CC X+45,525 Y-15
181 C X+46,012 Y-15 DR+
182 CC X+45,475 Y-15
183 C X+44,937 Y-15 DR+
184 CC X+45,525 Y-15
185 C X+46,112 Y-15 DR+
186 CC X+45,475 Y-15
187 C X+44,837 Y-15 DR+
188 CC X+45,525 Y-15
189 C X+46,212 Y-15 DR+
190 CC X+45,475 Y-15
191 C X+44,737 Y-15 DR+
192 CC X+45,525 Y-15
193 C X+46,312 Y-15 DR+
194 CC X+45,475 Y-15
195 C X+44,637 Y-15 DR+
196 CC X+45,525 Y-15
197 C X+46,412 Y-15 DR+
198 CC X+45,475 Y-15
199 C X+44,537 Y-15 DR+
200 CC X+45,525 Y-15
201 C X+46,512 Y-15 DR+
202 CC X+45,475 Y-15
203 C X+44,437 Y-15 DR+
204 CC X+45,525 Y-15
205 C X+46,612 Y-15 DR+
206 CC X+45,475 Y-15
207 C X+44,337 Y-15 DR+
208 CC X+45,525 Y-15
209 C X+46,712 Y-15 DR+
210 CC X+45,475 Y-15
211 C X+44,237 Y-15 DR+
212 CC X+45,525 Y-15
213 C X+46,812 Y-15 DR+
214 CC X+45,475 Y-15
215 C X+44,137 Y-15 DR+
216 CC X+45,525 Y-15
217 C X+46,912 Y-15 DR+
218 CC X+45,475 Y-15
219 C X+44,037 Y-15 DR+
220 CC X+45,525 Y-15
221 C X+47,012 Y-15 DR+
222 CC X+45,475 Y-15
223 C X+43,937 Y-15 DR+
224 CC X+45,525 Y-15
225 C X+47,112 Y-15 DR+
226 CC X+45,475 Y-15
227 C X+43,837 Y-15 DR+
228 CC X+45,525 Y-15
229 C X+47,212 Y-15 DR+
230 CC X+45,475 Y-15
231 C X+43,737 Y-15 DR+
232 CC X+45,525 Y-15
233 C X+47,312 Y-15 DR+
234 CC X+45,475 Y-15
235 C X+43,637 Y-15 DR+
236 CC X+45,525 Y-15
237 C X+47,412 Y-15 DR+
238 CC X+45,475 Y-15
239 C X+43,537 Y-15 DR+
240 CC X+45,525 Y-15
241 C X+47,512 Y-15 DR+
242 CC X+45,475 Y-15
243 C X+43,437 Y-15 DR+
244 CC X+45,525 Y-15
245 C X+47,612 Y-15 DR+
246 CC X+45,475 Y-15
247 C X+43,337 Y-15 DR+
248 CC X+45,525 Y-15
249 C X+47,712 Y-15 DR+
250 CC X+45,475 Y-15
251 C X+43,237 Y-15 DR+
252 CC X+45,525 Y-15
253 C X+47,812 Y-15 DR+
254 CC X+45,475 Y-15
255 C X+43,137 Y-15 DR+
256 CC X+45,525 Y-15
257 C X+47,912 Y-15 DR+
258 CC X+45,475 Y-15
259 C X+43,037 Y-15 DR+
260 CC X+45,525 Y-15
261 C X+46,759 Y-17,16 DR+
262 CC X+45,5 Y-15
263 C X+45,5 Y-17,5 DR+
264 CC X+45,5 Y-15
265 C X+46,759 Y-17,16 DR+
266 L Z+50 FMAX
267 TOOL CALL 19 Z S7427 DR-3
268 L X-45,5 Y-15 Z+50 FMAX
269 L Z+2 FMAX
270 L Z-7 F297
271 L X-44,9 Y-13,7 RL F3565
272 L Y-13,1
273 CC X-45,5 Y-13,1
274 C X-45,5 Y-12,5 DR+
275 CC X-45,5 Y-15
276 C X-45,5 Y-17,5 DR+
277 CC X-45,5 Y-15
278 C X-45,5 Y-12,5 DR+
279 CC X-45,5 Y-15
280 C X-46,474 Y-12,697 DR+
281 CC X-45,5 Y-15
282 C X-45,5 Y-17,5 DR+
283 CC X-45,5 Y-15
284 C X-45,5 Y-12,5 DR+
285 CC X-45,5 Y-15
286 C X-46,474 Y-12,697 DR+
287 CC X-46,24 Y-13,25
288 C X-46,793 Y-13,484 DR+
289 L X-46,559 Y-14,036
290 L X-45,5 Y-15 R0
291 L Z+50 FMAX
292 L X+45,5 FMAX
293 L Z+2 FMAX
294 L Z-7 F297
295 L X+46,1 Y-13,7 RL F3565
296 L Y-13,1
297 CC X+45,5 Y-13,1
298 C X+45,5 Y-12,5 DR+
299 CC X+45,5 Y-15
300 C X+45,5 Y-17,5 DR+
301 CC X+45,5 Y-15
302 C X+45,5 Y-12,5 DR+
303 CC X+45,5 Y-15
304 C X+44,526 Y-12,697 DR+
305 CC X+45,5 Y-15
306 C X+45,5 Y-17,5 DR+
307 CC X+45,5 Y-15
308 C X+45,5 Y-12,5 DR+
309 CC X+45,5 Y-15
310 C X+44,526 Y-12,697 DR+
311 CC X+44,76 Y-13,25
312 C X+44,207 Y-13,484 DR+
313 L X+44,441 Y-14,036
314 L X+45,5 Y-15 R0
315 L Z+50 FMAX
316 M78
317 M5
318 L Z-1 FMAX M91
319 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
320 TOOL CALL 1 Z S1856 DR+0
321 TOOL DEF 3
322 L X-30,5 Y-15 FMAX M3
323 L Z+50 FMAX M8
324 ;  POINTAGE-PERCAGE
325 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
326 L X-30,5 Y-15 FMAX M99
327 L X+25,5 FMAX M99
328 L Z+50 FMAX
329 M9
330 M5
331 L Z-1 FMAX M91
332 ; T3 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
333 TOOL CALL 3 Z S2400 DR+0
334 TOOL DEF 11
335 L X-30,5 Y-15 FMAX M3
336 L Z+50 FMAX M7
337 ;  DEBOURRAGE
338 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22 ; PROFONDEUR~
    Q206=180 ; AVANCE PLONGEE PROF.~
    Q202=+2,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
339 L X-30,5 Y-15 FMAX M99
340 L X+25,5 FMAX M99
341 L Z+50 FMAX
342 M9
343 M5
344 L Z-1 FMAX M91
345 ; T11 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
346 TOOL CALL 11 Z S833 DR+0
347 TOOL DEF 1
348 L X-30,5 Y-15 FMAX M3
349 L Z+50 FMAX M8
350 ;  POINTAGE-PERCAGE
351 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22 ; PROFONDEUR~
    Q206=83 ; AVANCE PLONGEE PROF.~
    Q202=+22 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
352 L X-30,5 Y-15 FMAX M99
353 L X+25,5 FMAX M99
354 L Z+50 FMAX
355 M9
356 M5
357 L Z-1 FMAX M91
358 L Y-1 FMAX M91
359 M30
360 END PGM REP 3 OP10 20293 MM
