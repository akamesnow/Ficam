0 BEGIN PGM A37004-REP32-PORTE MATRICE DE CAMB-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - A37004-REP32-PORTE MATRICE DE CAMB-A
4 ; PROG-CN DU 15-12-21 A 15:00
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T22 AMAYA DIA FINITION FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
12 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
13 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
14 ; T25 DIA 6.8 VC 40 DMF OK FORET DIAM=6.8 2 DENTS A=118. ARS
15 ; FIN DE LISTE DES OUTILS
16 L R0 FMAX
17 L Z-1 FMAX M91
18 ; *GROUPE D'USINAGE-2*
19 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
20 ; CORRECTION USURE GAUCHE
21 ; SUREP R 0.1 SUREP Z 0.1
22 TOOL CALL 18 Z S1751 DR-5
23 TOOL DEF 22
24 L X+0,9 Y-54 FMAX M3
25 L Z+50 FMAX M25
26 L Z+2 FMAX
27 L Z-4,6 F500
28 L Y-44 RL F315
29 L Y+44
30 L Y+54 R0
31 L Z+10 FMAX
32 L X+6,9 Y-54 FMAX
33 L Z+2 FMAX
34 L Z-4,6 F500
35 L Y-44 RL F315
36 L Y+44
37 L Y+54 R0
38 L Z+10 FMAX
39 L X+0,9 Y-54 FMAX
40 L Z-2,6 FMAX
41 L Z-4,9 F500
42 L Y-44 RL F315
43 L Y+44
44 L Y+54 R0
45 L Z+10 FMAX
46 L X+6,9 Y-54 FMAX
47 L Z-2,6 FMAX
48 L Z-4,9 F500
49 L Y-44 RL F315
50 L Y+44
51 L Y+54 R0
52 L Z+10 FMAX
53 L Y-54 FMAX
54 L Z-2,6 FMAX
55 L Z-4,9 F500
56 L Y-44 RL F315
57 L Y+44
58 L Y+54 R0
59 L Z+10 FMAX
60 L Y-54 FMAX
61 L Z-2,6 FMAX
62 L Z-4,9 F500
63 L Y-44 RL F315
64 L Y+44
65 L Y+54 R0
66 L Z+50 FMAX
67 L X-0,9 FMAX
68 L Z+2 FMAX
69 L Z-4,6 F500
70 L Y+44 RL F315
71 L Y-44
72 L Y-54 R0
73 L Z+10 FMAX
74 L X-6,9 Y+54 FMAX
75 L Z+2 FMAX
76 L Z-4,6 F500
77 L Y+44 RL F315
78 L Y-44
79 L Y-54 R0
80 L Z+10 FMAX
81 L X-0,9 Y+54 FMAX
82 L Z-2,6 FMAX
83 L Z-4,9 F500
84 L Y+44 RL F315
85 L Y-44
86 L Y-54 R0
87 L Z+10 FMAX
88 L X-6,9 Y+54 FMAX
89 L Z-2,6 FMAX
90 L Z-4,9 F500
91 L Y+44 RL F315
92 L Y-44
93 L Y-54 R0
94 L Z+10 FMAX
95 L Y+54 FMAX
96 L Z-2,6 FMAX
97 L Z-4,9 F500
98 L Y+44 RL F315
99 L Y-44
100 L Y-54 R0
101 L Z+10 FMAX
102 L Y+54 FMAX
103 L Z-2,6 FMAX
104 L Z-4,9 F500
105 L Y+44 RL F315
106 L Y-44
107 L Y-54 R0
108 L Z+50 FMAX
109 M78
110 M5
111 L Z-1 FMAX M91
112 ; T22 AMAYA DIA FINITION FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
113 ; CORRECTION USURE GAUCHE
114 ; SUREP R 0. SUREP Z 0.
115 TOOL CALL 22 Z S2546 DR-5
116 TOOL DEF 1
117 L X+1 Y-54 FMAX M3
118 L Z+50 FMAX M25
119 L Z+2 FMAX
120 L Z-5,1 F1000
121 L Y-44 RL F397
122 L Y+44
123 L Y+54 R0
124 L Z+10 FMAX
125 L X+7 Y-54 FMAX
126 L Z+2 FMAX
127 L Z-5,1 F1000
128 L Y-44 RL F397
129 L Y+44
130 L Y+54 R0
131 L Z+10 FMAX
132 L Y-54 FMAX
133 L Z+2 FMAX
134 L Z-5,1 F1000
135 L Y-44 RL F397
136 L Y+44
137 L Y+54 R0
138 L Z+10 FMAX
139 L Y-54 FMAX
140 L Z+2 FMAX
141 L Z-5,1 F1000
142 L Y-44 RL F397
143 L Y+44
144 L Y+54 R0
145 L Z+50 FMAX
146 L X-1 FMAX
147 L Z+2 FMAX
148 L Z-5,1 F1000
149 L Y+44 RL F397
150 L Y-44
151 L Y-54 R0
152 L Z+10 FMAX
153 L X-7 Y+54 FMAX
154 L Z+2 FMAX
155 L Z-5,1 F1000
156 L Y+44 RL F397
157 L Y-44
158 L Y-54 R0
159 L Z+10 FMAX
160 L Y+54 FMAX
161 L Z+2 FMAX
162 L Z-5,1 F1000
163 L Y+44 RL F397
164 L Y-44
165 L Y-54 R0
166 L Z+10 FMAX
167 L Y+54 FMAX
168 L Z+2 FMAX
169 L Z-5,1 F1000
170 L Y+44 RL F397
171 L Y-44
172 L Y-54 R0
173 L Z+50 FMAX
174 M78
175 M5
176 L Z-1 FMAX M91
177 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
178 ; CORRECTION USURE GAUCHE
179 ; SUREP R 0. SUREP Z 0.
180 TOOL CALL 1 Z S6000 DR-2,5
181 TOOL DEF 4
182 L X+9,5 Y-49 FMAX M3
183 L Z+50 FMAX
184 L Z+2 FMAX
185 L Z-2,2 F800
186 L Y-44 RL F1200
187 L Y+44
188 L Y+49 R0
189 L Z+50 FMAX
190 L X-9,5 FMAX
191 L Z+2 FMAX
192 L Z-2,2 F800
193 L Y+44 RL F1200
194 L Y-44
195 L Y-49 R0
196 L Z+50 FMAX
197 M5
198 L Z-1 FMAX M91
199 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
200 TOOL CALL 1 Z S1856 DR+0
201 TOOL DEF 4
202 L X-55 Y+31 FMAX M3
203 L Z+50 FMAX M8
204 ;  POINTAGE-PERCAGE
205 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
206 L X-55 Y+31 FMAX M99
207 L X+55 FMAX M99
208 L Y-32 FMAX M99
209 L X-55 FMAX M99
210 L Z+50 FMAX
211 M9
212 M5
213 L Z-1 FMAX M91
214 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
215 TOOL CALL 4 Z S1200 DR+0
216 TOOL DEF 18
217 L X-55 Y+31 FMAX M3
218 L Z+50 FMAX M8
219 ;  DEBOURRAGE
220 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-35 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
221 L X-55 Y+31 FMAX M99
222 L X+55 FMAX M99
223 L Y-32 FMAX M99
224 L X-55 FMAX M99
225 L Z+50 FMAX
226 M9
227 M5
228 L Z-1 FMAX M91
229 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
230 ; CORRECTION AUCUNE
231 ; SUREP R 0. SUREP Z 0.
232 TOOL CALL 18 Z S1751 DR+0
233 TOOL DEF 1
234 L X-57,64 Y+32,424 FMAX M3
235 L Z+50 FMAX M25
236 L Z+2 FMAX
237 L Z+0,5 F500
238 CC X-55 Y+31
239 CP IPA-180 Z-0,159 DR-
240 CC X-55 Y+31
241 CP IPA-180 Z-0,818 DR-
242 CC X-55 Y+31
243 CP IPA-180 Z-1,477 DR-
244 CC X-55 Y+31
245 CP IPA-180 Z-2,136 DR-
246 CC X-55 Y+31
247 CP IPA-180 Z-2,795 DR-
248 CC X-55 Y+31
249 CP IPA-180 Z-3,454 DR-
250 CC X-55 Y+31
251 CP IPA-180 Z-4,113 DR-
252 CC X-55 Y+31
253 CP IPA-180 Z-4,772 DR-
254 CC X-55 Y+31
255 CP IPA-180 Z-5,431 DR-
256 CC X-55 Y+31
257 CP IPA-180 Z-6,09 DR-
258 CC X-55 Y+31
259 CP IPA-180 Z-6,749 DR-
260 CC X-55 Y+31
261 CP IPA-180 Z-7,409 DR-
262 CC X-55 Y+31
263 CP IPA-180 Z-8,068 DR-
264 CC X-55 Y+31
265 CP IPA-180 Z-8,727 DR-
266 CC X-55 Y+31
267 CP IPA-180 Z-9,386 DR-
268 CC X-55 Y+31
269 CP IPA-180 Z-10,045 DR-
270 CC X-55 Y+31
271 CP IPA-151,658 Z-10,6 DR-
272 L X-54 Y+31 F315
273 CC X-57 Y+31
274 C X-57,75 Y+33,905 DR+
275 CC X-55 Y+31
276 C X-55 Y+27 DR+
277 CC X-55 Y+31
278 C X-57,75 Y+33,905 DR+
279 L Z+50 FMAX
280 L X+52,36 Y+32,424 FMAX
281 L Z+2 FMAX
282 L Z+0,5 F500
283 CC X+55 Y+31
284 CP IPA-180 Z-0,159 DR-
285 CC X+55 Y+31
286 CP IPA-180 Z-0,818 DR-
287 CC X+55 Y+31
288 CP IPA-180 Z-1,477 DR-
289 CC X+55 Y+31
290 CP IPA-180 Z-2,136 DR-
291 CC X+55 Y+31
292 CP IPA-180 Z-2,795 DR-
293 CC X+55 Y+31
294 CP IPA-180 Z-3,454 DR-
295 CC X+55 Y+31
296 CP IPA-180 Z-4,113 DR-
297 CC X+55 Y+31
298 CP IPA-180 Z-4,772 DR-
299 CC X+55 Y+31
300 CP IPA-180 Z-5,431 DR-
301 CC X+55 Y+31
302 CP IPA-180 Z-6,09 DR-
303 CC X+55 Y+31
304 CP IPA-180 Z-6,749 DR-
305 CC X+55 Y+31
306 CP IPA-180 Z-7,409 DR-
307 CC X+55 Y+31
308 CP IPA-180 Z-8,068 DR-
309 CC X+55 Y+31
310 CP IPA-180 Z-8,727 DR-
311 CC X+55 Y+31
312 CP IPA-180 Z-9,386 DR-
313 CC X+55 Y+31
314 CP IPA-180 Z-10,045 DR-
315 CC X+55 Y+31
316 CP IPA-151,658 Z-10,6 DR-
317 L X+56 Y+31 F315
318 CC X+53 Y+31
319 C X+52,25 Y+33,905 DR+
320 CC X+55 Y+31
321 C X+55 Y+27 DR+
322 CC X+55 Y+31
323 C X+52,25 Y+33,905 DR+
324 L Z+50 FMAX
325 L X+52,36 Y-30,576 FMAX
326 L Z+2 FMAX
327 L Z+0,5 F500
328 CC X+55 Y-32
329 CP IPA-180 Z-0,159 DR-
330 CC X+55 Y-32
331 CP IPA-180 Z-0,818 DR-
332 CC X+55 Y-32
333 CP IPA-180 Z-1,477 DR-
334 CC X+55 Y-32
335 CP IPA-180 Z-2,136 DR-
336 CC X+55 Y-32
337 CP IPA-180 Z-2,795 DR-
338 CC X+55 Y-32
339 CP IPA-180 Z-3,454 DR-
340 CC X+55 Y-32
341 CP IPA-180 Z-4,113 DR-
342 CC X+55 Y-32
343 CP IPA-180 Z-4,772 DR-
344 CC X+55 Y-32
345 CP IPA-180 Z-5,431 DR-
346 CC X+55 Y-32
347 CP IPA-180 Z-6,09 DR-
348 CC X+55 Y-32
349 CP IPA-180 Z-6,749 DR-
350 CC X+55 Y-32
351 CP IPA-180 Z-7,409 DR-
352 CC X+55 Y-32
353 CP IPA-180 Z-8,068 DR-
354 CC X+55 Y-32
355 CP IPA-180 Z-8,727 DR-
356 CC X+55 Y-32
357 CP IPA-180 Z-9,386 DR-
358 CC X+55 Y-32
359 CP IPA-180 Z-10,045 DR-
360 CC X+55 Y-32
361 CP IPA-151,658 Z-10,6 DR-
362 L X+56 Y-32 F315
363 CC X+53 Y-32
364 C X+52,25 Y-29,095 DR+
365 CC X+55 Y-32
366 C X+55 Y-36 DR+
367 CC X+55 Y-32
368 C X+52,25 Y-29,095 DR+
369 L Z+50 FMAX
370 L X-57,64 Y-30,576 FMAX
371 L Z+2 FMAX
372 L Z+0,5 F500
373 CC X-55 Y-32
374 CP IPA-180 Z-0,159 DR-
375 CC X-55 Y-32
376 CP IPA-180 Z-0,818 DR-
377 CC X-55 Y-32
378 CP IPA-180 Z-1,477 DR-
379 CC X-55 Y-32
380 CP IPA-180 Z-2,136 DR-
381 CC X-55 Y-32
382 CP IPA-180 Z-2,795 DR-
383 CC X-55 Y-32
384 CP IPA-180 Z-3,454 DR-
385 CC X-55 Y-32
386 CP IPA-180 Z-4,113 DR-
387 CC X-55 Y-32
388 CP IPA-180 Z-4,772 DR-
389 CC X-55 Y-32
390 CP IPA-180 Z-5,431 DR-
391 CC X-55 Y-32
392 CP IPA-180 Z-6,09 DR-
393 CC X-55 Y-32
394 CP IPA-180 Z-6,749 DR-
395 CC X-55 Y-32
396 CP IPA-180 Z-7,409 DR-
397 CC X-55 Y-32
398 CP IPA-180 Z-8,068 DR-
399 CC X-55 Y-32
400 CP IPA-180 Z-8,727 DR-
401 CC X-55 Y-32
402 CP IPA-180 Z-9,386 DR-
403 CC X-55 Y-32
404 CP IPA-180 Z-10,045 DR-
405 CC X-55 Y-32
406 CP IPA-151,658 Z-10,6 DR-
407 L X-54 Y-32 F315
408 CC X-57 Y-32
409 C X-57,75 Y-29,095 DR+
410 CC X-55 Y-32
411 C X-55 Y-36 DR+
412 CC X-55 Y-32
413 C X-57,75 Y-29,095 DR+
414 L Z+50 FMAX
415 TOOL CALL 18 Z S1751 DR-5
416 L X-55 Y+31 Z+50 FMAX
417 L Z+2 FMAX
418 L Z-10,6 F500
419 L X-54 Y+33 RL F315
420 L Y+34
421 CC X-55 Y+34
422 C X-55 Y+35 DR+
423 CC X-55 Y+31
424 C X-55 Y+27 DR+
425 CC X-55 Y+31
426 C X-55 Y+35 DR+
427 CC X-55 Y+31
428 C X-56,918 Y+34,51 DR+
429 CC X-55 Y+31
430 C X-55 Y+27 DR+
431 CC X-55 Y+31
432 C X-55 Y+35 DR+
433 CC X-55 Y+31
434 C X-56,918 Y+34,51 DR+
435 CC X-56,438 Y+33,633
436 C X-57,316 Y+33,153 DR+
437 L X-56,836 Y+32,276
438 L X-55 Y+31 R0
439 L Z+50 FMAX
440 L X+55 FMAX
441 L Z+2 FMAX
442 L Z-10,6 F500
443 L X+56 Y+33 RL F315
444 L Y+34
445 CC X+55 Y+34
446 C X+55 Y+35 DR+
447 CC X+55 Y+31
448 C X+55 Y+27 DR+
449 CC X+55 Y+31
450 C X+55 Y+35 DR+
451 CC X+55 Y+31
452 C X+53,082 Y+34,51 DR+
453 CC X+55 Y+31
454 C X+55 Y+27 DR+
455 CC X+55 Y+31
456 C X+55 Y+35 DR+
457 CC X+55 Y+31
458 C X+53,082 Y+34,51 DR+
459 CC X+53,562 Y+33,633
460 C X+52,684 Y+33,153 DR+
461 L X+53,164 Y+32,276
462 L X+55 Y+31 R0
463 L Z+50 FMAX
464 L Y-32 FMAX
465 L Z+2 FMAX
466 L Z-10,6 F500
467 L X+56 Y-30 RL F315
468 L Y-29
469 CC X+55 Y-29
470 C X+55 Y-28 DR+
471 CC X+55 Y-32
472 C X+55 Y-36 DR+
473 CC X+55 Y-32
474 C X+55 Y-28 DR+
475 CC X+55 Y-32
476 C X+53,082 Y-28,49 DR+
477 CC X+55 Y-32
478 C X+55 Y-36 DR+
479 CC X+55 Y-32
480 C X+55 Y-28 DR+
481 CC X+55 Y-32
482 C X+53,082 Y-28,49 DR+
483 CC X+53,562 Y-29,367
484 C X+52,684 Y-29,847 DR+
485 L X+53,164 Y-30,724
486 L X+55 Y-32 R0
487 L Z+50 FMAX
488 L X-55 FMAX
489 L Z+2 FMAX
490 L Z-10,6 F500
491 L X-54 Y-30 RL F315
492 L Y-29
493 CC X-55 Y-29
494 C X-55 Y-28 DR+
495 CC X-55 Y-32
496 C X-55 Y-36 DR+
497 CC X-55 Y-32
498 C X-55 Y-28 DR+
499 CC X-55 Y-32
500 C X-56,918 Y-28,49 DR+
501 CC X-55 Y-32
502 C X-55 Y-36 DR+
503 CC X-55 Y-32
504 C X-55 Y-28 DR+
505 CC X-55 Y-32
506 C X-56,918 Y-28,49 DR+
507 CC X-56,438 Y-29,367
508 C X-57,316 Y-29,847 DR+
509 L X-56,836 Y-30,724
510 L X-55 Y-32 R0
511 L Z+50 FMAX
512 M78
513 M5
514 L Z-1 FMAX M91
515 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
516 ; CORRECTION USURE GAUCHE
517 ; SUREP R 0. SUREP Z 0.
518 TOOL CALL 1 Z S6000 DR-2,5
519 TOOL DEF 20
520 L X-55 Y+31 FMAX M3
521 L Z+50 FMAX
522 L Z+2 FMAX
523 L Z-2,5 F800
524 L X-54,5 Y+36,5 RL F1200
525 L Y+37
526 CC X-55 Y+37
527 C X-55 Y+37,5 DR+
528 CC X-55 Y+31
529 C X-55 Y+24,5 DR+
530 CC X-55 Y+31
531 C X-55 Y+37,5 DR+
532 CC X-55 Y+31
533 C X-56,969 Y+37,195 DR+
534 CC X-56,817 Y+36,718
535 C X-57,294 Y+36,567 DR+
536 L X-57,142 Y+36,09
537 L X-55 Y+31 R0
538 L Z+50 FMAX
539 L X+55 FMAX
540 L Z+2 FMAX
541 L Z-2,5 F800
542 L X+55,5 Y+36,5 RL F1200
543 L Y+37
544 CC X+55 Y+37
545 C X+55 Y+37,5 DR+
546 CC X+55 Y+31
547 C X+55 Y+24,5 DR+
548 CC X+55 Y+31
549 C X+55 Y+37,5 DR+
550 CC X+55 Y+31
551 C X+53,031 Y+37,195 DR+
552 CC X+53,183 Y+36,718
553 C X+52,706 Y+36,567 DR+
554 L X+52,858 Y+36,09
555 L X+55 Y+31 R0
556 L Z+50 FMAX
557 L Y-32 FMAX
558 L Z+2 FMAX
559 L Z-2,5 F800
560 L X+55,5 Y-26,5 RL F1200
561 L Y-26
562 CC X+55 Y-26
563 C X+55 Y-25,5 DR+
564 CC X+55 Y-32
565 C X+55 Y-38,5 DR+
566 CC X+55 Y-32
567 C X+55 Y-25,5 DR+
568 CC X+55 Y-32
569 C X+53,031 Y-25,805 DR+
570 CC X+53,183 Y-26,282
571 C X+52,706 Y-26,433 DR+
572 L X+52,858 Y-26,91
573 L X+55 Y-32 R0
574 L Z+50 FMAX
575 L X-55 FMAX
576 L Z+2 FMAX
577 L Z-2,5 F800
578 L X-54,5 Y-26,5 RL F1200
579 L Y-26
580 CC X-55 Y-26
581 C X-55 Y-25,5 DR+
582 CC X-55 Y-32
583 C X-55 Y-38,5 DR+
584 CC X-55 Y-32
585 C X-55 Y-25,5 DR+
586 CC X-55 Y-32
587 C X-56,969 Y-25,805 DR+
588 CC X-56,817 Y-26,282
589 C X-57,294 Y-26,433 DR+
590 L X-57,142 Y-26,91
591 L X-55 Y-32 R0
592 L Z+50 FMAX
593 M5
594 L Z-1 FMAX M91
595 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
596 TOOL CALL 1 Z S1856 DR+0
597 TOOL DEF 20
598 L X-21,5 Y+35,95 FMAX M3
599 L Z+50 FMAX M8
600 ;  POINTAGE-PERCAGE
601 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-5,5 ; COORD. SURFACE PIECE~
    Q204=+55,5 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
602 L X-21,5 Y+35,95 FMAX M99
603 L Y-17,95 FMAX M99
604 L X+21,5 FMAX M99
605 L Y+35,95 FMAX M99
606 L Z+50 FMAX
607 M9
608 M5
609 L Z-1 FMAX M91
610 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
611 TOOL CALL 20 Z S3800 DR+0
612 TOOL DEF 29
613 L X-21,5 Y+35,95 FMAX M3
614 L Z+50 FMAX M8
615 ;  DEBOURRAGE
616 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22,5 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-5,5 ; COORD. SURFACE PIECE~
    Q204=+55,5 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
617 L X-21,5 Y+35,95 FMAX M99
618 L Y-17,95 FMAX M99
619 L X+21,5 FMAX M99
620 L Y+35,95 FMAX M99
621 L Z+50 FMAX
622 M9
623 M5
624 L Z-1 FMAX M91
625 M00
626 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
627 TOOL CALL 29 Z S200 DR+0
628 TOOL DEF 1
629 L X-21,5 Y+35,95 FMAX M3
630 L Z+50 FMAX M8
631 ;  TARAUDAGE
632 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q239=1. ; PAS DE VIS~
    Q203=-5,5 ; COORD. SURFACE PIECE~
    Q204=+55,5 ; SAUT DE BRIDE
633 L X-21,5 Y+35,95 FMAX M99
634 L Y-17,95 FMAX M99
635 L X+21,5 FMAX M99
636 L Y+35,95 FMAX M99
637 L Z+50 FMAX
638 M9
639 M5
640 L Z-1 FMAX M91
641 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
642 TOOL CALL 1 Z S1856 DR+0
643 TOOL DEF 20
644 L X-61 Y+9 FMAX M3
645 L Z+50 FMAX M8
646 ;  POINTAGE-PERCAGE
647 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-8 ; COORD. SURFACE PIECE~
    Q204=+58 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
648 L X-61 Y+9 FMAX M99
649 L X-35 FMAX M99
650 L X+35 FMAX M99
651 L X+61 FMAX M99
652 L Z+50 FMAX
653 M9
654 M5
655 L Z-1 FMAX M91
656 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
657 TOOL CALL 20 Z S3800 DR+0
658 TOOL DEF 29
659 L X-61 Y+9 FMAX M3
660 L Z+50 FMAX M8
661 ;  DEBOURRAGE
662 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-27 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-8 ; COORD. SURFACE PIECE~
    Q204=+58 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
663 L X-61 Y+9 FMAX M99
664 L X-35 FMAX M99
665 L X+35 FMAX M99
666 L X+61 FMAX M99
667 L Z+50 FMAX
668 M9
669 M5
670 L Z-1 FMAX M91
671 M00
672 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
673 TOOL CALL 29 Z S200 DR+0
674 TOOL DEF 1
675 L X-61 Y+9 FMAX M3
676 L Z+50 FMAX M8
677 ;  TARAUDAGE
678 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q239=1. ; PAS DE VIS~
    Q203=-8 ; COORD. SURFACE PIECE~
    Q204=+58 ; SAUT DE BRIDE
679 L X-61 Y+9 FMAX M99
680 L X-35 FMAX M99
681 L X+35 FMAX M99
682 L X+61 FMAX M99
683 L Z+50 FMAX
684 M9
685 M5
686 L Z-1 FMAX M91
687 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
688 TOOL CALL 1 Z S1856 DR+0
689 TOOL DEF 25
690 L X-21 Y+9 FMAX M3
691 L Z+50 FMAX M8
692 ;  POINTAGE-PERCAGE
693 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-8 ; COORD. SURFACE PIECE~
    Q204=+58 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
694 L X-21 Y+9 FMAX M99
695 L X+21 FMAX M99
696 L Z+50 FMAX
697 M9
698 M5
699 L Z-1 FMAX M91
700 ; T25 DIA 6.8 VC 40 DMF OK FORET DIAM=6.8 2 DENTS A=118. ARS
701 TOOL CALL 25 Z S2400 DR+0
702 TOOL DEF 1
703 L X-21 Y+9 FMAX M3
704 L Z+50 FMAX M8
705 ;  DEBOURRAGE
706 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-27 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-8 ; COORD. SURFACE PIECE~
    Q204=+58 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
707 L X-21 Y+9 FMAX M99
708 L X+21 FMAX M99
709 L Z+50 FMAX
710 M9
711 M5
712 L Z-1 FMAX M91
713 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
714 TOOL CALL 1 Z S1856 DR+0
715 TOOL DEF 20
716 L X-48 Y+9 FMAX M3
717 L Z+50 FMAX M8
718 ;  POINTAGE-PERCAGE
719 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-8 ; COORD. SURFACE PIECE~
    Q204=+58 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
720 L X-48 Y+9 FMAX M99
721 L X+48 FMAX M99
722 L Z+50 FMAX
723 M9
724 M5
725 L Z-1 FMAX M91
726 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
727 TOOL CALL 20 Z S3800 DR+0
728 TOOL DEF 1
729 L X-48 Y+9 FMAX M3
730 L Z+50 FMAX M8
731 ;  DEBOURRAGE
732 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-27 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-8 ; COORD. SURFACE PIECE~
    Q204=+58 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
733 L X-48 Y+9 FMAX M99
734 L X+48 FMAX M99
735 L Z+50 FMAX
736 M9
737 M5
738 L Z-1 FMAX M91
739 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
740 ; CORRECTION USURE GAUCHE
741 ; SUREP R 0. SUREP Z 0.
742 TOOL CALL 1 Z S6000 DR-2,5
743 TOOL DEF 18
744 L X+0 Y-24 FMAX M3
745 L Z+50 FMAX
746 L Z+2 FMAX
747 L Z-2,2 F800
748 L X+0,5 Y-18,5 RL F1200
749 L Y-18
750 CC X+0 Y-18
751 C X+0 Y-17,5 DR+
752 CC X+0 Y-24
753 C X+0 Y-30,5 DR+
754 CC X+0 Y-24
755 C X+0 Y-17,5 DR+
756 CC X+0 Y-24
757 C X-1,969 Y-17,805 DR+
758 CC X-1,817 Y-18,282
759 C X-2,294 Y-18,433 DR+
760 L X-2,142 Y-18,91
761 L X+0 Y-24 R0
762 L Z+50 FMAX
763 M5
764 L Z-1 FMAX M91
765 L Y-1 FMAX M91
766 M30
767 END PGM A37004-REP32-PORTE MATRICE DE CAMB-A MM
