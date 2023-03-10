0 BEGIN PGM REP17-20161-OP10-MATRICE-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP17-20161-OP10-MATRICE-B
4 ; PROG-CN DU 11-10-19 A 11:21
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T7 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
12 ; T14 ALESOIR DIA 13.1 ALESOIR DIAM=13.1 5 DENTS ARS
13 ; T9 DIA 13.5 110KG FORET DIAM=13.5 2 DENTS A=118. ARS
14 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
15 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
16 ; FIN DE LISTE DES OUTILS
17 L R0 FMAX
18 L Z-1 FMAX M91
19 ; *GROUPE D'USINAGE-1*
20 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
21 TOOL CALL 1 Z S1856 DR+0
22 TOOL DEF 4
23 L X-160 Y+125 FMAX M3
24 L Z+50 FMAX M8
25 ;  POINTAGE-PERCAGE
26 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
27 L X-160 Y+125 FMAX M99
28 L Y+50 FMAX M99
29 L Y-125 FMAX M99
30 L X+160 FMAX M99
31 L Y+45 FMAX M99
32 L Y+125 FMAX M99
33 L X+0 Y+75 FMAX M99
34 L X-45 Y-80 FMAX M99
35 L Z+50 FMAX
36 M9
37 M5
38 L Z-1 FMAX M91
39 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
40 TOOL CALL 4 Z S1400 DR+0
41 TOOL DEF 18
42 L X-160 Y+125 FMAX M3
43 L Z+50 FMAX M8
44 ;  DEBOURRAGE
45 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
46 L X-160 Y+125 FMAX M99
47 L Y+50 FMAX M99
48 L Y-125 FMAX M99
49 L X+160 FMAX M99
50 L Y+45 FMAX M99
51 L Y+125 FMAX M99
52 L X+0 Y+75 FMAX M99
53 L X-45 Y-80 FMAX M99
54 L Z+50 FMAX
55 M9
56 M5
57 L Z-1 FMAX M91
58 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
59 ; CORRECTION AUCUNE
60 ; SUREP R 0. SUREP Z 0.
61 TOOL CALL 18 Z S1751 DR+0
62 TOOL DEF 1
63 L X-2,733 Y+76,236 FMAX M3
64 L Z+50 FMAX M25
65 L Z+2 FMAX
66 L Z+0,5 F500
67 CC X+0 Y+75
68 CP IPA-180 Z+0,171 DR-
69 CC X+0 Y+75
70 CP IPA-180 Z-0,158 DR-
71 CC X+0 Y+75
72 CP IPA-180 Z-0,487 DR-
73 CC X+0 Y+75
74 CP IPA-180 Z-0,816 DR-
75 CC X+0 Y+75
76 CP IPA-180 Z-1,146 DR-
77 CC X+0 Y+75
78 CP IPA-180 Z-1,475 DR-
79 CC X+0 Y+75
80 CP IPA-180 Z-1,804 DR-
81 CC X+0 Y+75
82 CP IPA-180 Z-2,133 DR-
83 CC X+0 Y+75
84 CP IPA-180 Z-2,462 DR-
85 CC X+0 Y+75
86 CP IPA-180 Z-2,791 DR-
87 CC X+0 Y+75
88 CP IPA-180 Z-3,12 DR-
89 CC X+0 Y+75
90 CP IPA-180 Z-3,449 DR-
91 CC X+0 Y+75
92 CP IPA-180 Z-3,778 DR-
93 CC X+0 Y+75
94 CP IPA-180 Z-4,108 DR-
95 CC X+0 Y+75
96 CP IPA-180 Z-4,437 DR-
97 CC X+0 Y+75
98 CP IPA-180 Z-4,766 DR-
99 CC X+0 Y+75
100 CP IPA-180 Z-5,095 DR-
101 CC X+0 Y+75
102 CP IPA-180 Z-5,424 DR-
103 CC X+0 Y+75
104 CP IPA-180 Z-5,753 DR-
105 CC X+0 Y+75
106 CP IPA-180 Z-6,082 DR-
107 CC X+0 Y+75
108 CP IPA-180 Z-6,412 DR-
109 CC X+0 Y+75
110 CP IPA-180 Z-6,741 DR-
111 CC X+0 Y+75
112 CP IPA-180 Z-7,07 DR-
113 CC X+0 Y+75
114 CP IPA-180 Z-7,399 DR-
115 CC X+0 Y+75
116 CP IPA-180 Z-7,728 DR-
117 CC X+0 Y+75
118 CP IPA-180 Z-8,057 DR-
119 CC X+0 Y+75
120 CP IPA-180 Z-8,386 DR-
121 CC X+0 Y+75
122 CP IPA-180 Z-8,715 DR-
123 CC X+0 Y+75
124 CP IPA-155,665 Z-9 DR-
125 L X+1 Y+75 F315
126 CC X-2 Y+75
127 C X-2,75 Y+77,905 DR+
128 CC X+0 Y+75
129 C X+0 Y+71 DR+
130 CC X+0 Y+75
131 C X-2,75 Y+77,905 DR+
132 L Z+10 FMAX
133 L X-2,733 Y+76,236 FMAX
134 L Z-7 FMAX
135 L Z-8,5 F500
136 CC X+0 Y+75
137 CP IPA-180 Z-8,829 DR-
138 CC X+0 Y+75
139 CP IPA-180 Z-9,158 DR-
140 CC X+0 Y+75
141 CP IPA-180 Z-9,487 DR-
142 CC X+0 Y+75
143 CP IPA-180 Z-9,816 DR-
144 CC X+0 Y+75
145 CP IPA-180 Z-10,146 DR-
146 CC X+0 Y+75
147 CP IPA-180 Z-10,475 DR-
148 CC X+0 Y+75
149 CP IPA-180 Z-10,804 DR-
150 CC X+0 Y+75
151 CP IPA-180 Z-11,133 DR-
152 CC X+0 Y+75
153 CP IPA-180 Z-11,462 DR-
154 CC X+0 Y+75
155 CP IPA-180 Z-11,791 DR-
156 CC X+0 Y+75
157 CP IPA-180 Z-12,12 DR-
158 CC X+0 Y+75
159 CP IPA-180 Z-12,449 DR-
160 CC X+0 Y+75
161 CP IPA-180 Z-12,779 DR-
162 CC X+0 Y+75
163 CP IPA-180 Z-13,108 DR-
164 CC X+0 Y+75
165 CP IPA-180 Z-13,437 DR-
166 CC X+0 Y+75
167 CP IPA-180 Z-13,766 DR-
168 CC X+0 Y+75
169 CP IPA-180 Z-14,095 DR-
170 CC X+0 Y+75
171 CP IPA-180 Z-14,424 DR-
172 CC X+0 Y+75
173 CP IPA-180 Z-14,753 DR-
174 CC X+0 Y+75
175 CP IPA-180 Z-15,082 DR-
176 CC X+0 Y+75
177 CP IPA-180 Z-15,412 DR-
178 CC X+0 Y+75
179 CP IPA-180 Z-15,741 DR-
180 CC X+0 Y+75
181 CP IPA-180 Z-16,07 DR-
182 CC X+0 Y+75
183 CP IPA-180 Z-16,399 DR-
184 CC X+0 Y+75
185 CP IPA-180 Z-16,728 DR-
186 CC X+0 Y+75
187 CP IPA-180 Z-17,057 DR-
188 CC X+0 Y+75
189 CP IPA-180 Z-17,386 DR-
190 CC X+0 Y+75
191 CP IPA-180 Z-17,715 DR-
192 CC X+0 Y+75
193 CP IPA-155,665 Z-18 DR-
194 L X+1 Y+75 F315
195 CC X-2 Y+75
196 C X-2,75 Y+77,905 DR+
197 CC X+0 Y+75
198 C X+0 Y+71 DR+
199 CC X+0 Y+75
200 C X-2,75 Y+77,905 DR+
201 L Z+50 FMAX
202 L X-47,733 Y-78,764 FMAX
203 L Z+2 FMAX
204 L Z+0,5 F500
205 CC X-45 Y-80
206 CP IPA-180 Z+0,171 DR-
207 CC X-45 Y-80
208 CP IPA-180 Z-0,158 DR-
209 CC X-45 Y-80
210 CP IPA-180 Z-0,487 DR-
211 CC X-45 Y-80
212 CP IPA-180 Z-0,816 DR-
213 CC X-45 Y-80
214 CP IPA-180 Z-1,146 DR-
215 CC X-45 Y-80
216 CP IPA-180 Z-1,475 DR-
217 CC X-45 Y-80
218 CP IPA-180 Z-1,804 DR-
219 CC X-45 Y-80
220 CP IPA-180 Z-2,133 DR-
221 CC X-45 Y-80
222 CP IPA-180 Z-2,462 DR-
223 CC X-45 Y-80
224 CP IPA-180 Z-2,791 DR-
225 CC X-45 Y-80
226 CP IPA-180 Z-3,12 DR-
227 CC X-45 Y-80
228 CP IPA-180 Z-3,449 DR-
229 CC X-45 Y-80
230 CP IPA-180 Z-3,778 DR-
231 CC X-45 Y-80
232 CP IPA-180 Z-4,108 DR-
233 CC X-45 Y-80
234 CP IPA-180 Z-4,437 DR-
235 CC X-45 Y-80
236 CP IPA-180 Z-4,766 DR-
237 CC X-45 Y-80
238 CP IPA-180 Z-5,095 DR-
239 CC X-45 Y-80
240 CP IPA-180 Z-5,424 DR-
241 CC X-45 Y-80
242 CP IPA-180 Z-5,753 DR-
243 CC X-45 Y-80
244 CP IPA-180 Z-6,082 DR-
245 CC X-45 Y-80
246 CP IPA-180 Z-6,412 DR-
247 CC X-45 Y-80
248 CP IPA-180 Z-6,741 DR-
249 CC X-45 Y-80
250 CP IPA-180 Z-7,07 DR-
251 CC X-45 Y-80
252 CP IPA-180 Z-7,399 DR-
253 CC X-45 Y-80
254 CP IPA-180 Z-7,728 DR-
255 CC X-45 Y-80
256 CP IPA-180 Z-8,057 DR-
257 CC X-45 Y-80
258 CP IPA-180 Z-8,386 DR-
259 CC X-45 Y-80
260 CP IPA-180 Z-8,715 DR-
261 CC X-45 Y-80
262 CP IPA-155,665 Z-9 DR-
263 L X-44 Y-80 F315
264 CC X-47 Y-80
265 C X-47,75 Y-77,095 DR+
266 CC X-45 Y-80
267 C X-45 Y-84 DR+
268 CC X-45 Y-80
269 C X-47,75 Y-77,095 DR+
270 L Z+10 FMAX
271 L X-47,733 Y-78,764 FMAX
272 L Z-7 FMAX
273 L Z-8,5 F500
274 CC X-45 Y-80
275 CP IPA-180 Z-8,829 DR-
276 CC X-45 Y-80
277 CP IPA-180 Z-9,158 DR-
278 CC X-45 Y-80
279 CP IPA-180 Z-9,487 DR-
280 CC X-45 Y-80
281 CP IPA-180 Z-9,816 DR-
282 CC X-45 Y-80
283 CP IPA-180 Z-10,146 DR-
284 CC X-45 Y-80
285 CP IPA-180 Z-10,475 DR-
286 CC X-45 Y-80
287 CP IPA-180 Z-10,804 DR-
288 CC X-45 Y-80
289 CP IPA-180 Z-11,133 DR-
290 CC X-45 Y-80
291 CP IPA-180 Z-11,462 DR-
292 CC X-45 Y-80
293 CP IPA-180 Z-11,791 DR-
294 CC X-45 Y-80
295 CP IPA-180 Z-12,12 DR-
296 CC X-45 Y-80
297 CP IPA-180 Z-12,449 DR-
298 CC X-45 Y-80
299 CP IPA-180 Z-12,779 DR-
300 CC X-45 Y-80
301 CP IPA-180 Z-13,108 DR-
302 CC X-45 Y-80
303 CP IPA-180 Z-13,437 DR-
304 CC X-45 Y-80
305 CP IPA-180 Z-13,766 DR-
306 CC X-45 Y-80
307 CP IPA-180 Z-14,095 DR-
308 CC X-45 Y-80
309 CP IPA-180 Z-14,424 DR-
310 CC X-45 Y-80
311 CP IPA-180 Z-14,753 DR-
312 CC X-45 Y-80
313 CP IPA-180 Z-15,082 DR-
314 CC X-45 Y-80
315 CP IPA-180 Z-15,412 DR-
316 CC X-45 Y-80
317 CP IPA-180 Z-15,741 DR-
318 CC X-45 Y-80
319 CP IPA-180 Z-16,07 DR-
320 CC X-45 Y-80
321 CP IPA-180 Z-16,399 DR-
322 CC X-45 Y-80
323 CP IPA-180 Z-16,728 DR-
324 CC X-45 Y-80
325 CP IPA-180 Z-17,057 DR-
326 CC X-45 Y-80
327 CP IPA-180 Z-17,386 DR-
328 CC X-45 Y-80
329 CP IPA-180 Z-17,715 DR-
330 CC X-45 Y-80
331 CP IPA-155,665 Z-18 DR-
332 L X-44 Y-80 F315
333 CC X-47 Y-80
334 C X-47,75 Y-77,095 DR+
335 CC X-45 Y-80
336 C X-45 Y-84 DR+
337 CC X-45 Y-80
338 C X-47,75 Y-77,095 DR+
339 L Z+50 FMAX
340 TOOL CALL 18 Z S1751 DR-5
341 L X+0 Y+75 Z+50 FMAX
342 L Z-7 FMAX
343 L Z-18 F500
344 L X+1 Y+77 RL F315
345 L Y+78
346 CC X+0 Y+78
347 C X+0 Y+79 DR+
348 CC X+0 Y+75
349 C X+0 Y+71 DR+
350 CC X+0 Y+75
351 C X+0 Y+79 DR+
352 CC X+0 Y+75
353 C X-1,918 Y+78,51 DR+
354 CC X+0 Y+75
355 C X+0 Y+71 DR+
356 CC X+0 Y+75
357 C X+0 Y+79 DR+
358 CC X+0 Y+75
359 C X-1,918 Y+78,51 DR+
360 CC X-1,438 Y+77,633
361 C X-2,316 Y+77,153 DR+
362 L X-1,836 Y+76,276
363 L X+0 Y+75 R0
364 L Z+50 FMAX
365 L X-45 Y-80 FMAX
366 L Z-7 FMAX
367 L Z-18 F500
368 L X-44 Y-78 RL F315
369 L Y-77
370 CC X-45 Y-77
371 C X-45 Y-76 DR+
372 CC X-45 Y-80
373 C X-45 Y-84 DR+
374 CC X-45 Y-80
375 C X-45 Y-76 DR+
376 CC X-45 Y-80
377 C X-46,918 Y-76,49 DR+
378 CC X-45 Y-80
379 C X-45 Y-84 DR+
380 CC X-45 Y-80
381 C X-45 Y-76 DR+
382 CC X-45 Y-80
383 C X-46,918 Y-76,49 DR+
384 CC X-46,438 Y-77,367
385 C X-47,316 Y-77,847 DR+
386 L X-46,836 Y-78,724
387 L X-45 Y-80 R0
388 L Z+50 FMAX
389 M78
390 M5
391 L Z-1 FMAX M91
392 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
393 ; CORRECTION USURE GAUCHE
394 ; SUREP R 0. SUREP Z 0.
395 TOOL CALL 1 Z S6000 DR-2,5
396 TOOL DEF 7
397 L X+0 Y+75 FMAX M3
398 L Z+50 FMAX
399 L Z+2 FMAX
400 L Z-2,5 F800
401 L X+0,5 Y+80,5 RL F1200
402 L Y+81
403 CC X+0 Y+81
404 C X+0 Y+81,5 DR+
405 CC X+0 Y+75
406 C X+0 Y+68,5 DR+
407 CC X+0 Y+75
408 C X+0 Y+81,5 DR+
409 CC X+0 Y+75
410 C X-1,969 Y+81,195 DR+
411 CC X-1,817 Y+80,718
412 C X-2,294 Y+80,567 DR+
413 L X-2,142 Y+80,09
414 L X+0 Y+75 R0
415 L Z+50 FMAX
416 L X-45 Y-80 FMAX
417 L Z+2 FMAX
418 L Z-2,5 F800
419 L X-44,5 Y-74,5 RL F1200
420 L Y-74
421 CC X-45 Y-74
422 C X-45 Y-73,5 DR+
423 CC X-45 Y-80
424 C X-45 Y-86,5 DR+
425 CC X-45 Y-80
426 C X-45 Y-73,5 DR+
427 CC X-45 Y-80
428 C X-46,969 Y-73,805 DR+
429 CC X-46,817 Y-74,282
430 C X-47,294 Y-74,433 DR+
431 L X-47,142 Y-74,91
432 L X-45 Y-80 R0
433 L Z+50 FMAX
434 M5
435 L Z-1 FMAX M91
436 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
437 TOOL CALL 1 Z S1856 DR+0
438 TOOL DEF 7
439 L X+120 Y-35 FMAX M3
440 L Z+50 FMAX M8
441 ;  POINTAGE-PERCAGE
442 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
443 L X+120 Y-35 FMAX M99
444 L X-120 Y-55 FMAX M99
445 L X-110 Y+65 FMAX M99
446 L X+30 Y+75 FMAX M99
447 L Z+50 FMAX
448 M9
449 M5
450 L Z-1 FMAX M91
451 ; T7 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
452 TOOL CALL 7 Z S1650 DR+0
453 TOOL DEF 14
454 L X+120 Y-35 FMAX M3
455 L Z+50 FMAX M8
456 ;  DEBOURRAGE
457 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-50 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
458 L X+120 Y-35 FMAX M99
459 L X-120 Y-55 FMAX M99
460 L X-110 Y+65 FMAX M99
461 L X+30 Y+75 FMAX M99
462 L Z+50 FMAX
463 M9
464 M5
465 L Z-1 FMAX M91
466 ; T14 ALESOIR DIA 13.1 ALESOIR DIAM=13.1 5 DENTS ARS
467 TOOL CALL 14 Z S267 DR+0
468 TOOL DEF 1
469 L X+120 Y-35 FMAX M3
470 L Z+50 FMAX M8
471 ;  POINTAGE-PERCAGE
472 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-50 ; PROFONDEUR~
    Q206=43 ; AVANCE PLONGEE PROF.~
    Q202=+50 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
473 L X+120 Y-35 FMAX M99
474 L X-120 Y-55 FMAX M99
475 L X-110 Y+65 FMAX M99
476 L X+30 Y+75 FMAX M99
477 L Z+50 FMAX
478 M9
479 M5
480 L Z-1 FMAX M91
481 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
482 TOOL CALL 1 Z S1856 DR+0
483 TOOL DEF 9
484 L X-90 Y+89 FMAX M3
485 L Z+50 FMAX M8
486 ;  POINTAGE-PERCAGE
487 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
488 L X-90 Y+89 FMAX M99
489 L Y-38 FMAX M99
490 L X+110 Y-125 FMAX M99
491 L Y+2 FMAX M99
492 L Y+129 FMAX M99
493 L Z+50 FMAX
494 M9
495 M5
496 L Z-1 FMAX M91
497 ; T9 DIA 13.5 110KG FORET DIAM=13.5 2 DENTS A=118. ARS
498 TOOL CALL 9 Z S203 DR+0
499 TOOL DEF 1
500 L X-90 Y+89 FMAX M3
501 L Z+50 FMAX M8
502 ;  DEBOURRAGE
503 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-48 ; PROFONDEUR~
    Q206=24 ; AVANCE PLONGEE PROF.~
    Q202=+13,5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
504 L X-90 Y+89 FMAX M99
505 L Y-38 FMAX M99
506 L X+110 Y-125 FMAX M99
507 L Y+2 FMAX M99
508 L Y+129 FMAX M99
509 L Z+50 FMAX
510 M9
511 M5
512 L Z-1 FMAX M91
513 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
514 TOOL CALL 1 Z S1856 DR+0
515 TOOL DEF 25
516 L X-160 Y+100 FMAX M3
517 L Z+50 FMAX M8
518 ;  POINTAGE-PERCAGE
519 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
520 L X-160 Y+100 FMAX M99
521 L X+160 Y+95 FMAX M99
522 L Y-95 FMAX M99
523 L X-160 FMAX M99
524 L Z+50 FMAX
525 M9
526 M5
527 L Z-1 FMAX M91
528 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
529 TOOL CALL 25 Z S3000 DR+0
530 TOOL DEF 1
531 L X-160 Y+100 FMAX M3
532 L Z+50 FMAX M8
533 ;  DEBOURRAGE
534 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
535 L X-160 Y+100 FMAX M99
536 L X+160 Y+95 FMAX M99
537 L Y-95 FMAX M99
538 L X-160 FMAX M99
539 L Z+50 FMAX
540 M9
541 M5
542 L Z-1 FMAX M91
543 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
544 TOOL CALL 1 Z S1856 DR+0
545 TOOL DEF 20
546 L X-23,745 Y-30,339 FMAX M3
547 L Z+50 FMAX M8
548 ;  POINTAGE-PERCAGE
549 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
550 L X-23,745 Y-30,339 FMAX M99
551 M9
552 M5
553 L Z-1 FMAX M91
554 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
555 TOOL CALL 20 Z S3800 DR+0
556 TOOL DEF 1
557 L X-23,745 Y-30,339 FMAX M3
558 L Z+50 FMAX M8
559 ;  DEBOURRAGE
560 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-44 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
561 L X-23,745 Y-30,339 FMAX M99
562 M9
563 M5
564 L Z-1 FMAX M91
565 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
566 ; CORRECTION USURE GAUCHE
567 ; SUREP R 0. SUREP Z 0.
568 TOOL CALL 1 Z S6000 DR-2,5
569 L X-90 Y+89 FMAX M3
570 L Z+50 FMAX
571 L Z+2 FMAX
572 L Z-2,2 F800
573 L X-89,5 Y+92,25 RL F1200
574 L Y+92,75
575 CC X-90 Y+92,75
576 C X-90 Y+93,25 DR+
577 CC X-90 Y+89
578 C X-90 Y+84,75 DR+
579 CC X-90 Y+89
580 C X-90 Y+93,25 DR+
581 CC X-90 Y+89
582 C X-91,927 Y+92,788 DR+
583 CC X-91,7 Y+92,342
584 C X-92,146 Y+92,116 DR+
585 L X-91,919 Y+91,67
586 L X-90 Y+89 R0
587 L Z+50 FMAX
588 L X-110 Y+65 FMAX
589 L Z+2 FMAX
590 L Z-2,2 F800
591 L X-109,5 Y+68,1 RL F1200
592 L Y+68,6
593 CC X-110 Y+68,6
594 C X-110 Y+69,1 DR+
595 CC X-110 Y+65
596 C X-110 Y+60,9 DR+
597 CC X-110 Y+65
598 C X-110 Y+69,1 DR+
599 CC X-110 Y+65
600 C X-111,922 Y+68,622 DR+
601 CC X-111,687 Y+68,18
602 C X-112,129 Y+67,946 DR+
603 L X-111,895 Y+67,504
604 L X-110 Y+65 R0
605 L Z+50 FMAX
606 L X-120 Y-55 FMAX
607 L Z+2 FMAX
608 L Z-2,2 F800
609 L X-119,5 Y-51,9 RL F1200
610 L Y-51,4
611 CC X-120 Y-51,4
612 C X-120 Y-50,9 DR+
613 CC X-120 Y-55
614 C X-120 Y-59,1 DR+
615 CC X-120 Y-55
616 C X-120 Y-50,9 DR+
617 CC X-120 Y-55
618 C X-121,922 Y-51,378 DR+
619 CC X-121,687 Y-51,82
620 C X-122,129 Y-52,054 DR+
621 L X-121,895 Y-52,496
622 L X-120 Y-55 R0
623 L Z+50 FMAX
624 L X-90 Y-38 FMAX
625 L Z+2 FMAX
626 L Z-2,2 F800
627 L X-89,5 Y-34,75 RL F1200
628 L Y-34,25
629 CC X-90 Y-34,25
630 C X-90 Y-33,75 DR+
631 CC X-90 Y-38
632 C X-90 Y-42,25 DR+
633 CC X-90 Y-38
634 C X-90 Y-33,75 DR+
635 CC X-90 Y-38
636 C X-91,927 Y-34,212 DR+
637 CC X-91,7 Y-34,658
638 C X-92,146 Y-34,884 DR+
639 L X-91,919 Y-35,33
640 L X-90 Y-38 R0
641 L Z+50 FMAX
642 L X+110 Y-125 FMAX
643 L Z+2 FMAX
644 L Z-2,2 F800
645 L X+110,5 Y-121,75 RL F1200
646 L Y-121,25
647 CC X+110 Y-121,25
648 C X+110 Y-120,75 DR+
649 CC X+110 Y-125
650 C X+110 Y-129,25 DR+
651 CC X+110 Y-125
652 C X+110 Y-120,75 DR+
653 CC X+110 Y-125
654 C X+108,073 Y-121,212 DR+
655 CC X+108,3 Y-121,658
656 C X+107,854 Y-121,884 DR+
657 L X+108,081 Y-122,33
658 L X+110 Y-125 R0
659 L Z+50 FMAX
660 L X+120 Y-35 FMAX
661 L Z+2 FMAX
662 L Z-2,2 F800
663 L X+120,5 Y-31,9 RL F1200
664 L Y-31,4
665 CC X+120 Y-31,4
666 C X+120 Y-30,9 DR+
667 CC X+120 Y-35
668 C X+120 Y-39,1 DR+
669 CC X+120 Y-35
670 C X+120 Y-30,9 DR+
671 CC X+120 Y-35
672 C X+118,078 Y-31,378 DR+
673 CC X+118,313 Y-31,82
674 C X+117,871 Y-32,054 DR+
675 L X+118,105 Y-32,496
676 L X+120 Y-35 R0
677 L Z+50 FMAX
678 L X+110 Y+2 FMAX
679 L Z+2 FMAX
680 L Z-2,2 F800
681 L X+110,5 Y+5,25 RL F1200
682 L Y+5,75
683 CC X+110 Y+5,75
684 C X+110 Y+6,25 DR+
685 CC X+110 Y+2
686 C X+110 Y-2,25 DR+
687 CC X+110 Y+2
688 C X+110 Y+6,25 DR+
689 CC X+110 Y+2
690 C X+108,073 Y+5,788 DR+
691 CC X+108,3 Y+5,342
692 C X+107,854 Y+5,116 DR+
693 L X+108,081 Y+4,67
694 L X+110 Y+2 R0
695 L Z+50 FMAX
696 L Y+129 FMAX
697 L Z+2 FMAX
698 L Z-2,2 F800
699 L X+110,5 Y+132,25 RL F1200
700 L Y+132,75
701 CC X+110 Y+132,75
702 C X+110 Y+133,25 DR+
703 CC X+110 Y+129
704 C X+110 Y+124,75 DR+
705 CC X+110 Y+129
706 C X+110 Y+133,25 DR+
707 CC X+110 Y+129
708 C X+108,073 Y+132,788 DR+
709 CC X+108,3 Y+132,342
710 C X+107,854 Y+132,116 DR+
711 L X+108,081 Y+131,67
712 L X+110 Y+129 R0
713 L Z+50 FMAX
714 L X+30 Y+75 FMAX
715 L Z+2 FMAX
716 L Z-2,2 F800
717 L X+30,5 Y+78,1 RL F1200
718 L Y+78,6
719 CC X+30 Y+78,6
720 C X+30 Y+79,1 DR+
721 CC X+30 Y+75
722 C X+30 Y+70,9 DR+
723 CC X+30 Y+75
724 C X+30 Y+79,1 DR+
725 CC X+30 Y+75
726 C X+28,078 Y+78,622 DR+
727 CC X+28,313 Y+78,18
728 C X+27,871 Y+77,946 DR+
729 L X+28,105 Y+77,504
730 L X+30 Y+75 R0
731 L Z+50 FMAX
732 M5
733 L Z-1 FMAX M91
734 L Y-1 FMAX M91
735 M30
736 END PGM REP17-20161-OP10-MATRICE-B MM
