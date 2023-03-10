0 BEGIN PGM REP44-CASSETTE-1-PLAQUETTE SF-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP44-CASSETTE-1-PLAQUETTE SF-B
4 ; PROG-CN DU 27-01-20 A 11:23
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T6 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
13 ; T11 ALESOIR DIA 13 CARB VC 15 ALESOIR DIAM=13. 5 DENTS ARS
14 ; T8 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
15 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
16 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
17 ; T14 P45323450 FINITION DIA 10 OK FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
18 ; FIN DE LISTE DES OUTILS
19 L R0 FMAX
20 L Z-1 FMAX M91
21 ; *GROUPE D'USINAGE-2*
22 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
23 TOOL CALL 1 Z S1856 DR+0
24 TOOL DEF 25
25 L X-122 Y+91,5 FMAX M3
26 L Z+50 FMAX M8
27 ;  POINTAGE-PERCAGE
28 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
29 L X-122 Y+91,5 FMAX M99
30 L X+8 FMAX M99
31 L X+143 Y+31,5 FMAX M99
32 L X+8 Y+1,5 FMAX M99
33 L X+123 Y-68,5 FMAX M99
34 L X+8 FMAX M99
35 L X-143 Y-53,5 FMAX M99
36 L Z+50 FMAX
37 M9
38 M5
39 L Z-1 FMAX M91
40 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
41 TOOL CALL 25 Z S3000 DR+0
42 TOOL DEF 28
43 L X-122 Y+91,5 FMAX M3
44 L Z+50 FMAX M7
45 ;  DEBOURRAGE
46 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-25 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
47 L X-122 Y+91,5 FMAX M99
48 L X+8 FMAX M99
49 L X+143 Y+31,5 FMAX M99
50 L X+8 Y+1,5 FMAX M99
51 L X+123 Y-68,5 FMAX M99
52 L X+8 FMAX M99
53 L X-143 Y-53,5 FMAX M99
54 L Z+50 FMAX
55 M9
56 M5
57 L Z-1 FMAX M91
58 M00
59 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
60 TOOL CALL 28 Z S100 DR+0
61 TOOL DEF 1
62 L X-122 Y+91,5 FMAX M3
63 L Z+50 FMAX M8
64 ;  TARAUDAGE
65 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
66 L X-122 Y+91,5 FMAX M99
67 L X+8 FMAX M99
68 L X+143 Y+31,5 FMAX M99
69 L X+8 Y+1,5 FMAX M99
70 L X+123 Y-68,5 FMAX M99
71 L X+8 FMAX M99
72 L X-143 Y-53,5 FMAX M99
73 L Z+50 FMAX
74 M9
75 M5
76 L Z-1 FMAX M91
77 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
78 TOOL CALL 1 Z S1856 DR+0
79 TOOL DEF 20
80 L X-28 Y+76,5 FMAX M3
81 L Z+50 FMAX M8
82 ;  POINTAGE-PERCAGE
83 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
84 L X-28 Y+76,5 FMAX M99
85 L X+2 FMAX M99
86 L X+117 FMAX M99
87 L X+147 FMAX M99
88 L Z+50 FMAX
89 M9
90 M5
91 L Z-1 FMAX M91
92 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
93 TOOL CALL 20 Z S3800 DR+0
94 TOOL DEF 1
95 L X-28 Y+76,5 FMAX M3
96 L Z+50 FMAX M7
97 ;  DEBOURRAGE
98 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
99 L X-28 Y+76,5 FMAX M99
100 L X+2 FMAX M99
101 L X+117 FMAX M99
102 L X+147 FMAX M99
103 L Z+50 FMAX
104 M9
105 M5
106 L Z-1 FMAX M91
107 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
108 TOOL CALL 1 Z S1856 DR+0
109 TOOL DEF 6
110 L X-13 Y+76,5 FMAX M3
111 L Z+50 FMAX M8
112 ;  POINTAGE-PERCAGE
113 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
114 L X-13 Y+76,5 FMAX M99
115 L X+132 FMAX M99
116 L Z+50 FMAX
117 M9
118 M5
119 L Z-1 FMAX M91
120 ; T6 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
121 TOOL CALL 6 Z S1650 DR+0
122 TOOL DEF 11
123 L X-13 Y+76,5 FMAX M3
124 L Z+50 FMAX M7
125 ;  DEBOURRAGE
126 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
127 L X-13 Y+76,5 FMAX M99
128 L X+132 FMAX M99
129 L Z+50 FMAX
130 M9
131 M5
132 L Z-1 FMAX M91
133 ; T11 ALESOIR DIA 13 CARB VC 15 ALESOIR DIAM=13. 5 DENTS ARS
134 TOOL CALL 11 Z S416 DR+0
135 TOOL DEF 1
136 L X-13 Y+76,5 FMAX M3
137 L Z+50 FMAX M8
138 ;  POINTAGE-PERCAGE
139 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=63 ; AVANCE PLONGEE PROF.~
    Q202=+30 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
140 L X-13 Y+76,5 FMAX M99
141 L X+132 FMAX M99
142 L Z+50 FMAX
143 M9
144 M5
145 L Z-1 FMAX M91
146 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
147 TOOL CALL 1 Z S1856 DR+0
148 TOOL DEF 8
149 L X-122 Y+71,5 FMAX M3
150 L Z+50 FMAX M8
151 ;  POINTAGE-PERCAGE
152 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
153 L X-122 Y+71,5 FMAX M99
154 L X+123 Y-48,5 FMAX M99
155 L Z+50 FMAX
156 M9
157 M5
158 L Z-1 FMAX M91
159 ; T8 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
160 TOOL CALL 8 Z S1600 DR+0
161 TOOL DEF 10
162 L X-122 Y+71,5 FMAX M3
163 L Z+50 FMAX M7
164 ;  DEBOURRAGE
165 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+4,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
166 L X-122 Y+71,5 FMAX M99
167 L X+123 Y-48,5 FMAX M99
168 L Z+50 FMAX
169 M9
170 M5
171 L Z-1 FMAX M91
172 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
173 TOOL CALL 10 Z S500 DR+0
174 TOOL DEF 18
175 L X-122 Y+71,5 FMAX M3
176 L Z+50 FMAX M8
177 ;  POINTAGE-PERCAGE
178 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=75 ; AVANCE PLONGEE PROF.~
    Q202=+30 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
179 L X-122 Y+71,5 FMAX M99
180 L X+123 Y-48,5 FMAX M99
181 L Z+50 FMAX
182 M9
183 M5
184 L Z-1 FMAX M91
185 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
186 ; CORRECTION AUCUNE
187 ; SUREP R 0. SUREP Z 0.05
188 TOOL CALL 18 Z S2865 DR+0
189 TOOL DEF 14
190 L X-12,537 Y+74,043 FMAX M3
191 L Z+50 FMAX M25
192 L Z+2 FMAX
193 L Z+0,5 F600
194 CC X-13 Y+76,5
195 CP IPA-180 Z-0,049 DR-
196 CC X-13 Y+76,5
197 CP IPA-180 Z-0,598 DR-
198 CC X-13 Y+76,5
199 CP IPA-180 Z-1,148 DR-
200 CC X-13 Y+76,5
201 CP IPA-180 Z-1,697 DR-
202 CC X-13 Y+76,5
203 CP IPA-180 Z-2,246 DR-
204 CC X-13 Y+76,5
205 CP IPA-180 Z-2,795 DR-
206 CC X-13 Y+76,5
207 CP IPA-180 Z-3,345 DR-
208 CC X-13 Y+76,5
209 CP IPA-180 Z-3,894 DR-
210 CC X-13 Y+76,5
211 CP IPA-280,672 Z-4,75 DR-
212 L X-12 Y+76,5 F573
213 CC X-15 Y+76,5
214 C X-14,813 Y+79,494 DR+
215 CC X-13 Y+76,5
216 C X-9,5 Y+76,5 DR+
217 CC X-13 Y+76,5
218 C X-14,813 Y+79,494 DR+
219 L Z+10 FMAX
220 L X-12,537 Y+74,043 FMAX
221 L Z+0,2 FMAX
222 CC X-13 Y+76,5
223 CP IPA-180 Z-0,349 DR- F600
224 CC X-13 Y+76,5
225 CP IPA-180 Z-0,898 DR-
226 CC X-13 Y+76,5
227 CP IPA-180 Z-1,448 DR-
228 CC X-13 Y+76,5
229 CP IPA-180 Z-1,997 DR-
230 CC X-13 Y+76,5
231 CP IPA-180 Z-2,546 DR-
232 CC X-13 Y+76,5
233 CP IPA-180 Z-3,095 DR-
234 CC X-13 Y+76,5
235 CP IPA-180 Z-3,644 DR-
236 CC X-13 Y+76,5
237 CP IPA-180 Z-4,194 DR-
238 CC X-13 Y+76,5
239 CP IPA-280,672 Z-5,05 DR-
240 L X-12 Y+76,5 F573
241 CC X-15 Y+76,5
242 C X-14,813 Y+79,494 DR+
243 CC X-13 Y+76,5
244 C X-9,5 Y+76,5 DR+
245 CC X-13 Y+76,5
246 C X-14,813 Y+79,494 DR+
247 L Z+50 FMAX
248 L X+132,463 Y+74,043 FMAX
249 L Z+2 FMAX
250 L Z+0,5 F600
251 CC X+132 Y+76,5
252 CP IPA-180 Z-0,049 DR-
253 CC X+132 Y+76,5
254 CP IPA-180 Z-0,598 DR-
255 CC X+132 Y+76,5
256 CP IPA-180 Z-1,148 DR-
257 CC X+132 Y+76,5
258 CP IPA-180 Z-1,697 DR-
259 CC X+132 Y+76,5
260 CP IPA-180 Z-2,246 DR-
261 CC X+132 Y+76,5
262 CP IPA-180 Z-2,795 DR-
263 CC X+132 Y+76,5
264 CP IPA-180 Z-3,345 DR-
265 CC X+132 Y+76,5
266 CP IPA-180 Z-3,894 DR-
267 CC X+132 Y+76,5
268 CP IPA-280,672 Z-4,75 DR-
269 L X+133 Y+76,5 F573
270 CC X+130 Y+76,5
271 C X+130,188 Y+79,494 DR+
272 CC X+132 Y+76,5
273 C X+135,5 Y+76,5 DR+
274 CC X+132 Y+76,5
275 C X+130,188 Y+79,494 DR+
276 L Z+10 FMAX
277 L X+132,463 Y+74,043 FMAX
278 L Z+0,2 FMAX
279 CC X+132 Y+76,5
280 CP IPA-180 Z-0,349 DR- F600
281 CC X+132 Y+76,5
282 CP IPA-180 Z-0,898 DR-
283 CC X+132 Y+76,5
284 CP IPA-180 Z-1,448 DR-
285 CC X+132 Y+76,5
286 CP IPA-180 Z-1,997 DR-
287 CC X+132 Y+76,5
288 CP IPA-180 Z-2,546 DR-
289 CC X+132 Y+76,5
290 CP IPA-180 Z-3,095 DR-
291 CC X+132 Y+76,5
292 CP IPA-180 Z-3,644 DR-
293 CC X+132 Y+76,5
294 CP IPA-180 Z-4,194 DR-
295 CC X+132 Y+76,5
296 CP IPA-280,672 Z-5,05 DR-
297 L X+133 Y+76,5 F573
298 CC X+130 Y+76,5
299 C X+130,188 Y+79,494 DR+
300 CC X+132 Y+76,5
301 C X+135,5 Y+76,5 DR+
302 CC X+132 Y+76,5
303 C X+130,188 Y+79,494 DR+
304 L Z+50 FMAX
305 TOOL CALL 18 Z S2865 DR-5
306 L X-13 Y+76,5 Z+50 FMAX
307 L Z-2,75 FMAX
308 L Z-5,05 F600
309 L X-14,5 Y+77,5 RL F573
310 L X-15,5
311 CC X-15,5 Y+76,5
312 C X-16,5 Y+76,5 DR+
313 CC X-13 Y+76,5
314 C X-9,5 Y+76,5 DR+
315 CC X-13 Y+76,5
316 C X-16,5 Y+76,5 DR+
317 CC X-13 Y+76,5
318 C X-15,944 Y+74,607 DR+
319 CC X-13 Y+76,5
320 C X-9,5 Y+76,5 DR+
321 CC X-13 Y+76,5
322 C X-16,5 Y+76,5 DR+
323 CC X-13 Y+76,5
324 C X-15,944 Y+74,607 DR+
325 CC X-15,103 Y+75,148
326 C X-14,562 Y+74,307 DR+
327 L X-13,721 Y+74,848
328 L X-13 Y+76,5 R0
329 L Z+50 FMAX
330 L X+132 FMAX
331 L Z-2,75 FMAX
332 L Z-5,05 F600
333 L X+130,5 Y+77,5 RL F573
334 L X+129,5
335 CC X+129,5 Y+76,5
336 C X+128,5 Y+76,5 DR+
337 CC X+132 Y+76,5
338 C X+135,5 Y+76,5 DR+
339 CC X+132 Y+76,5
340 C X+128,5 Y+76,5 DR+
341 CC X+132 Y+76,5
342 C X+129,056 Y+74,607 DR+
343 CC X+132 Y+76,5
344 C X+135,5 Y+76,5 DR+
345 CC X+132 Y+76,5
346 C X+128,5 Y+76,5 DR+
347 CC X+132 Y+76,5
348 C X+129,056 Y+74,607 DR+
349 CC X+129,897 Y+75,148
350 C X+130,438 Y+74,307 DR+
351 L X+131,279 Y+74,848
352 L X+132 Y+76,5 R0
353 L Z+50 FMAX
354 M78
355 M5
356 L Z-1 FMAX M91
357 ; T14 P45323450 FINITION DIA 10 OK FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
358 ; CORRECTION USURE GAUCHE
359 ; SUREP R 0. SUREP Z 0.
360 TOOL CALL 14 Z S1200 DR-5
361 TOOL DEF 1
362 L X-13 Y+76,5 FMAX M3
363 L Z+50 FMAX M25
364 L Z+2 FMAX
365 L Z-5,08 F1000
366 L X-14,5 Y+77,5 RL F200
367 L X-15,5
368 CC X-15,5 Y+76,5
369 C X-16,5 Y+76,5 DR+
370 CC X-13 Y+76,5
371 C X-9,5 Y+76,5 DR+
372 CC X-13 Y+76,5
373 C X-16,5 Y+76,5 DR+
374 CC X-13 Y+76,5
375 C X-15,944 Y+74,607 DR+
376 CC X-13 Y+76,5
377 C X-9,5 Y+76,5 DR+
378 CC X-13 Y+76,5
379 C X-16,5 Y+76,5 DR+
380 CC X-13 Y+76,5
381 C X-15,944 Y+74,607 DR+
382 CC X-15,103 Y+75,148
383 C X-14,562 Y+74,307 DR+
384 L X-13,721 Y+74,848
385 L X-13 Y+76,5 R0
386 L Z+50 FMAX
387 L X+132 FMAX
388 L Z+2 FMAX
389 L Z-5,08 F1000
390 L X+130,5 Y+77,5 RL F200
391 L X+129,5
392 CC X+129,5 Y+76,5
393 C X+128,5 Y+76,5 DR+
394 CC X+132 Y+76,5
395 C X+135,5 Y+76,5 DR+
396 CC X+132 Y+76,5
397 C X+128,5 Y+76,5 DR+
398 CC X+132 Y+76,5
399 C X+129,056 Y+74,607 DR+
400 CC X+132 Y+76,5
401 C X+135,5 Y+76,5 DR+
402 CC X+132 Y+76,5
403 C X+128,5 Y+76,5 DR+
404 CC X+132 Y+76,5
405 C X+129,056 Y+74,607 DR+
406 CC X+129,897 Y+75,148
407 C X+130,438 Y+74,307 DR+
408 L X+131,279 Y+74,848
409 L X+132 Y+76,5 R0
410 L Z+50 FMAX
411 M78
412 M5
413 L Z-1 FMAX M91
414 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
415 ; CORRECTION USURE GAUCHE
416 ; SUREP R 0. SUREP Z 0.
417 TOOL CALL 1 Z S6000 DR-2,5
418 L X-13 Y+76,5 FMAX M3
419 L Z+50 FMAX
420 L Z+2 FMAX
421 L Z-2,4 F800
422 L X-18 Y+77 RL F1200
423 L X-18,5
424 CC X-18,5 Y+76,5
425 C X-19 Y+76,5 DR+
426 CC X-13 Y+76,5
427 C X-7 Y+76,5 DR+
428 CC X-13 Y+76,5
429 C X-19 Y+76,5 DR+
430 CC X-13 Y+76,5
431 C X-18,67 Y+74,537 DR+
432 CC X-18,197 Y+74,7
433 C X-18,034 Y+74,228 DR+
434 L X-17,561 Y+74,392
435 L X-13 Y+76,5 R0
436 L Z+50 FMAX
437 L X+132 FMAX
438 L Z+2 FMAX
439 L Z-2,4 F800
440 L X+127 Y+77 RL F1200
441 L X+126,5
442 CC X+126,5 Y+76,5
443 C X+126 Y+76,5 DR+
444 CC X+132 Y+76,5
445 C X+138 Y+76,5 DR+
446 CC X+132 Y+76,5
447 C X+126 Y+76,5 DR+
448 CC X+132 Y+76,5
449 C X+126,33 Y+74,537 DR+
450 CC X+126,803 Y+74,7
451 C X+126,966 Y+74,228 DR+
452 L X+127,439 Y+74,392
453 L X+132 Y+76,5 R0
454 L Z+50 FMAX
455 M5
456 L Z-1 FMAX M91
457 L Y-1 FMAX M91
458 M30
459 END PGM REP44-CASSETTE-1-PLAQUETTE SF-B MM
