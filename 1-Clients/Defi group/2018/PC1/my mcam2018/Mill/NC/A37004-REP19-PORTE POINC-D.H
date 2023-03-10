0 BEGIN PGM A37004-REP19-PORTE POINC-D MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - A37004-REP19-PORTE POINC-D
4 ; PROG-CN DU 14-09-21 A 10:23
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
12 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-1*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 4
20 L X-128 Y+60 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-128 Y+60 FMAX M99
25 L Y-60 FMAX M99
26 L X+18 FMAX M99
27 L X+128 FMAX M99
28 L Y+60 FMAX M99
29 L X+18 FMAX M99
30 L Z+50 FMAX
31 M9
32 M5
33 L Z-1 FMAX M91
34 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
35 TOOL CALL 4 Z S1400 DR+0
36 TOOL DEF 18
37 L X-128 Y+60 FMAX M3
38 L Z+50 FMAX M7
39 ;  DEBOURRAGE
40 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-40 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
41 L X-128 Y+60 FMAX M99
42 L Y-60 FMAX M99
43 L X+18 FMAX M99
44 L X+128 FMAX M99
45 L Y+60 FMAX M99
46 L X+18 FMAX M99
47 L Z+50 FMAX
48 M9
49 M5
50 L Z-1 FMAX M91
51 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
52 ; CORRECTION AUCUNE
53 ; SUREP R 0. SUREP Z 0.
54 TOOL CALL 18 Z S1751 DR+0
55 TOOL DEF 1
56 L X-129,399 Y+57,346 FMAX M3
57 L Z+50 FMAX M25
58 L Z+2 FMAX
59 L Z+0,5 F500
60 CC X-128 Y+60
61 CP IPA-180 Z+0,171 DR-
62 CC X-128 Y+60
63 CP IPA-180 Z-0,158 DR-
64 CC X-128 Y+60
65 CP IPA-180 Z-0,487 DR-
66 CC X-128 Y+60
67 CP IPA-180 Z-0,816 DR-
68 CC X-128 Y+60
69 CP IPA-180 Z-1,146 DR-
70 CC X-128 Y+60
71 CP IPA-180 Z-1,475 DR-
72 CC X-128 Y+60
73 CP IPA-180 Z-1,804 DR-
74 CC X-128 Y+60
75 CP IPA-180 Z-2,133 DR-
76 CC X-128 Y+60
77 CP IPA-180 Z-2,462 DR-
78 CC X-128 Y+60
79 CP IPA-180 Z-2,791 DR-
80 CC X-128 Y+60
81 CP IPA-180 Z-3,12 DR-
82 CC X-128 Y+60
83 CP IPA-180 Z-3,449 DR-
84 CC X-128 Y+60
85 CP IPA-180 Z-3,778 DR-
86 CC X-128 Y+60
87 CP IPA-180 Z-4,108 DR-
88 CC X-128 Y+60
89 CP IPA-180 Z-4,437 DR-
90 CC X-128 Y+60
91 CP IPA-180 Z-4,766 DR-
92 CC X-128 Y+60
93 CP IPA-180 Z-5,095 DR-
94 CC X-128 Y+60
95 CP IPA-180 Z-5,424 DR-
96 CC X-128 Y+60
97 CP IPA-180 Z-5,753 DR-
98 CC X-128 Y+60
99 CP IPA-180 Z-6,082 DR-
100 CC X-128 Y+60
101 CP IPA-180 Z-6,412 DR-
102 CC X-128 Y+60
103 CP IPA-180 Z-6,741 DR-
104 CC X-128 Y+60
105 CP IPA-180 Z-7,07 DR-
106 CC X-128 Y+60
107 CP IPA-180 Z-7,399 DR-
108 CC X-128 Y+60
109 CP IPA-180 Z-7,728 DR-
110 CC X-128 Y+60
111 CP IPA-180 Z-8,057 DR-
112 CC X-128 Y+60
113 CP IPA-242,205 Z-8,5 DR-
114 L X-127,25 Y+60 F315
115 CC X-129,5 Y+60
116 C X-131,75 Y+60 DR+
117 CC X-126,5 Y+60
118 C X-131,104 Y+57,477 DR+
119 CC X-128 Y+60
120 C X-132 Y+60 DR+
121 CC X-128 Y+60
122 C X-131,104 Y+57,477 DR+
123 L Z+10 FMAX
124 L X-129,399 Y+57,346 FMAX
125 L Z-6,5 FMAX
126 L Z-8 F500
127 CC X-128 Y+60
128 CP IPA-180 Z-8,329 DR-
129 CC X-128 Y+60
130 CP IPA-180 Z-8,658 DR-
131 CC X-128 Y+60
132 CP IPA-180 Z-8,987 DR-
133 CC X-128 Y+60
134 CP IPA-180 Z-9,316 DR-
135 CC X-128 Y+60
136 CP IPA-180 Z-9,646 DR-
137 CC X-128 Y+60
138 CP IPA-180 Z-9,975 DR-
139 CC X-128 Y+60
140 CP IPA-180 Z-10,304 DR-
141 CC X-128 Y+60
142 CP IPA-180 Z-10,633 DR-
143 CC X-128 Y+60
144 CP IPA-180 Z-10,962 DR-
145 CC X-128 Y+60
146 CP IPA-180 Z-11,291 DR-
147 CC X-128 Y+60
148 CP IPA-180 Z-11,62 DR-
149 CC X-128 Y+60
150 CP IPA-180 Z-11,949 DR-
151 CC X-128 Y+60
152 CP IPA-180 Z-12,279 DR-
153 CC X-128 Y+60
154 CP IPA-180 Z-12,608 DR-
155 CC X-128 Y+60
156 CP IPA-180 Z-12,937 DR-
157 CC X-128 Y+60
158 CP IPA-180 Z-13,266 DR-
159 CC X-128 Y+60
160 CP IPA-180 Z-13,595 DR-
161 CC X-128 Y+60
162 CP IPA-180 Z-13,924 DR-
163 CC X-128 Y+60
164 CP IPA-180 Z-14,253 DR-
165 CC X-128 Y+60
166 CP IPA-180 Z-14,582 DR-
167 CC X-128 Y+60
168 CP IPA-180 Z-14,912 DR-
169 CC X-128 Y+60
170 CP IPA-180 Z-15,241 DR-
171 CC X-128 Y+60
172 CP IPA-180 Z-15,57 DR-
173 CC X-128 Y+60
174 CP IPA-180 Z-15,899 DR-
175 CC X-128 Y+60
176 CP IPA-180 Z-16,228 DR-
177 CC X-128 Y+60
178 CP IPA-180 Z-16,557 DR-
179 CC X-128 Y+60
180 CP IPA-242,205 Z-17 DR-
181 L X-127,25 Y+60 F315
182 CC X-129,5 Y+60
183 C X-131,75 Y+60 DR+
184 CC X-126,5 Y+60
185 C X-131,104 Y+57,477 DR+
186 CC X-128 Y+60
187 C X-132 Y+60 DR+
188 CC X-128 Y+60
189 C X-131,104 Y+57,477 DR+
190 L Z+50 FMAX
191 L X+16,601 Y+57,346 FMAX
192 L Z+2 FMAX
193 L Z+0,5 F500
194 CC X+18 Y+60
195 CP IPA-180 Z+0,171 DR-
196 CC X+18 Y+60
197 CP IPA-180 Z-0,158 DR-
198 CC X+18 Y+60
199 CP IPA-180 Z-0,487 DR-
200 CC X+18 Y+60
201 CP IPA-180 Z-0,816 DR-
202 CC X+18 Y+60
203 CP IPA-180 Z-1,146 DR-
204 CC X+18 Y+60
205 CP IPA-180 Z-1,475 DR-
206 CC X+18 Y+60
207 CP IPA-180 Z-1,804 DR-
208 CC X+18 Y+60
209 CP IPA-180 Z-2,133 DR-
210 CC X+18 Y+60
211 CP IPA-180 Z-2,462 DR-
212 CC X+18 Y+60
213 CP IPA-180 Z-2,791 DR-
214 CC X+18 Y+60
215 CP IPA-180 Z-3,12 DR-
216 CC X+18 Y+60
217 CP IPA-180 Z-3,449 DR-
218 CC X+18 Y+60
219 CP IPA-180 Z-3,778 DR-
220 CC X+18 Y+60
221 CP IPA-180 Z-4,108 DR-
222 CC X+18 Y+60
223 CP IPA-180 Z-4,437 DR-
224 CC X+18 Y+60
225 CP IPA-180 Z-4,766 DR-
226 CC X+18 Y+60
227 CP IPA-180 Z-5,095 DR-
228 CC X+18 Y+60
229 CP IPA-180 Z-5,424 DR-
230 CC X+18 Y+60
231 CP IPA-180 Z-5,753 DR-
232 CC X+18 Y+60
233 CP IPA-180 Z-6,082 DR-
234 CC X+18 Y+60
235 CP IPA-180 Z-6,412 DR-
236 CC X+18 Y+60
237 CP IPA-180 Z-6,741 DR-
238 CC X+18 Y+60
239 CP IPA-180 Z-7,07 DR-
240 CC X+18 Y+60
241 CP IPA-180 Z-7,399 DR-
242 CC X+18 Y+60
243 CP IPA-180 Z-7,728 DR-
244 CC X+18 Y+60
245 CP IPA-180 Z-8,057 DR-
246 CC X+18 Y+60
247 CP IPA-242,205 Z-8,5 DR-
248 L X+18,75 Y+60 F315
249 CC X+16,5 Y+60
250 C X+14,25 Y+60 DR+
251 CC X+19,5 Y+60
252 C X+14,896 Y+57,477 DR+
253 CC X+18 Y+60
254 C X+14 Y+60 DR+
255 CC X+18 Y+60
256 C X+14,896 Y+57,477 DR+
257 L Z+10 FMAX
258 L X+16,601 Y+57,346 FMAX
259 L Z-6,5 FMAX
260 L Z-8 F500
261 CC X+18 Y+60
262 CP IPA-180 Z-8,329 DR-
263 CC X+18 Y+60
264 CP IPA-180 Z-8,658 DR-
265 CC X+18 Y+60
266 CP IPA-180 Z-8,987 DR-
267 CC X+18 Y+60
268 CP IPA-180 Z-9,316 DR-
269 CC X+18 Y+60
270 CP IPA-180 Z-9,646 DR-
271 CC X+18 Y+60
272 CP IPA-180 Z-9,975 DR-
273 CC X+18 Y+60
274 CP IPA-180 Z-10,304 DR-
275 CC X+18 Y+60
276 CP IPA-180 Z-10,633 DR-
277 CC X+18 Y+60
278 CP IPA-180 Z-10,962 DR-
279 CC X+18 Y+60
280 CP IPA-180 Z-11,291 DR-
281 CC X+18 Y+60
282 CP IPA-180 Z-11,62 DR-
283 CC X+18 Y+60
284 CP IPA-180 Z-11,949 DR-
285 CC X+18 Y+60
286 CP IPA-180 Z-12,279 DR-
287 CC X+18 Y+60
288 CP IPA-180 Z-12,608 DR-
289 CC X+18 Y+60
290 CP IPA-180 Z-12,937 DR-
291 CC X+18 Y+60
292 CP IPA-180 Z-13,266 DR-
293 CC X+18 Y+60
294 CP IPA-180 Z-13,595 DR-
295 CC X+18 Y+60
296 CP IPA-180 Z-13,924 DR-
297 CC X+18 Y+60
298 CP IPA-180 Z-14,253 DR-
299 CC X+18 Y+60
300 CP IPA-180 Z-14,582 DR-
301 CC X+18 Y+60
302 CP IPA-180 Z-14,912 DR-
303 CC X+18 Y+60
304 CP IPA-180 Z-15,241 DR-
305 CC X+18 Y+60
306 CP IPA-180 Z-15,57 DR-
307 CC X+18 Y+60
308 CP IPA-180 Z-15,899 DR-
309 CC X+18 Y+60
310 CP IPA-180 Z-16,228 DR-
311 CC X+18 Y+60
312 CP IPA-180 Z-16,557 DR-
313 CC X+18 Y+60
314 CP IPA-242,205 Z-17 DR-
315 L X+18,75 Y+60 F315
316 CC X+16,5 Y+60
317 C X+14,25 Y+60 DR+
318 CC X+19,5 Y+60
319 C X+14,896 Y+57,477 DR+
320 CC X+18 Y+60
321 C X+14 Y+60 DR+
322 CC X+18 Y+60
323 C X+14,896 Y+57,477 DR+
324 L Z+50 FMAX
325 L X+126,601 Y+57,346 FMAX
326 L Z+2 FMAX
327 L Z+0,5 F500
328 CC X+128 Y+60
329 CP IPA-180 Z+0,171 DR-
330 CC X+128 Y+60
331 CP IPA-180 Z-0,158 DR-
332 CC X+128 Y+60
333 CP IPA-180 Z-0,487 DR-
334 CC X+128 Y+60
335 CP IPA-180 Z-0,816 DR-
336 CC X+128 Y+60
337 CP IPA-180 Z-1,146 DR-
338 CC X+128 Y+60
339 CP IPA-180 Z-1,475 DR-
340 CC X+128 Y+60
341 CP IPA-180 Z-1,804 DR-
342 CC X+128 Y+60
343 CP IPA-180 Z-2,133 DR-
344 CC X+128 Y+60
345 CP IPA-180 Z-2,462 DR-
346 CC X+128 Y+60
347 CP IPA-180 Z-2,791 DR-
348 CC X+128 Y+60
349 CP IPA-180 Z-3,12 DR-
350 CC X+128 Y+60
351 CP IPA-180 Z-3,449 DR-
352 CC X+128 Y+60
353 CP IPA-180 Z-3,778 DR-
354 CC X+128 Y+60
355 CP IPA-180 Z-4,108 DR-
356 CC X+128 Y+60
357 CP IPA-180 Z-4,437 DR-
358 CC X+128 Y+60
359 CP IPA-180 Z-4,766 DR-
360 CC X+128 Y+60
361 CP IPA-180 Z-5,095 DR-
362 CC X+128 Y+60
363 CP IPA-180 Z-5,424 DR-
364 CC X+128 Y+60
365 CP IPA-180 Z-5,753 DR-
366 CC X+128 Y+60
367 CP IPA-180 Z-6,082 DR-
368 CC X+128 Y+60
369 CP IPA-180 Z-6,412 DR-
370 CC X+128 Y+60
371 CP IPA-180 Z-6,741 DR-
372 CC X+128 Y+60
373 CP IPA-180 Z-7,07 DR-
374 CC X+128 Y+60
375 CP IPA-180 Z-7,399 DR-
376 CC X+128 Y+60
377 CP IPA-180 Z-7,728 DR-
378 CC X+128 Y+60
379 CP IPA-180 Z-8,057 DR-
380 CC X+128 Y+60
381 CP IPA-242,205 Z-8,5 DR-
382 L X+128,75 Y+60 F315
383 CC X+126,5 Y+60
384 C X+124,25 Y+60 DR+
385 CC X+129,5 Y+60
386 C X+124,896 Y+57,477 DR+
387 CC X+128 Y+60
388 C X+124 Y+60 DR+
389 CC X+128 Y+60
390 C X+124,896 Y+57,477 DR+
391 L Z+10 FMAX
392 L X+126,601 Y+57,346 FMAX
393 L Z-6,5 FMAX
394 L Z-8 F500
395 CC X+128 Y+60
396 CP IPA-180 Z-8,329 DR-
397 CC X+128 Y+60
398 CP IPA-180 Z-8,658 DR-
399 CC X+128 Y+60
400 CP IPA-180 Z-8,987 DR-
401 CC X+128 Y+60
402 CP IPA-180 Z-9,316 DR-
403 CC X+128 Y+60
404 CP IPA-180 Z-9,646 DR-
405 CC X+128 Y+60
406 CP IPA-180 Z-9,975 DR-
407 CC X+128 Y+60
408 CP IPA-180 Z-10,304 DR-
409 CC X+128 Y+60
410 CP IPA-180 Z-10,633 DR-
411 CC X+128 Y+60
412 CP IPA-180 Z-10,962 DR-
413 CC X+128 Y+60
414 CP IPA-180 Z-11,291 DR-
415 CC X+128 Y+60
416 CP IPA-180 Z-11,62 DR-
417 CC X+128 Y+60
418 CP IPA-180 Z-11,949 DR-
419 CC X+128 Y+60
420 CP IPA-180 Z-12,279 DR-
421 CC X+128 Y+60
422 CP IPA-180 Z-12,608 DR-
423 CC X+128 Y+60
424 CP IPA-180 Z-12,937 DR-
425 CC X+128 Y+60
426 CP IPA-180 Z-13,266 DR-
427 CC X+128 Y+60
428 CP IPA-180 Z-13,595 DR-
429 CC X+128 Y+60
430 CP IPA-180 Z-13,924 DR-
431 CC X+128 Y+60
432 CP IPA-180 Z-14,253 DR-
433 CC X+128 Y+60
434 CP IPA-180 Z-14,582 DR-
435 CC X+128 Y+60
436 CP IPA-180 Z-14,912 DR-
437 CC X+128 Y+60
438 CP IPA-180 Z-15,241 DR-
439 CC X+128 Y+60
440 CP IPA-180 Z-15,57 DR-
441 CC X+128 Y+60
442 CP IPA-180 Z-15,899 DR-
443 CC X+128 Y+60
444 CP IPA-180 Z-16,228 DR-
445 CC X+128 Y+60
446 CP IPA-180 Z-16,557 DR-
447 CC X+128 Y+60
448 CP IPA-242,205 Z-17 DR-
449 L X+128,75 Y+60 F315
450 CC X+126,5 Y+60
451 C X+124,25 Y+60 DR+
452 CC X+129,5 Y+60
453 C X+124,896 Y+57,477 DR+
454 CC X+128 Y+60
455 C X+124 Y+60 DR+
456 CC X+128 Y+60
457 C X+124,896 Y+57,477 DR+
458 L Z+50 FMAX
459 L X+126,601 Y-62,654 FMAX
460 L Z+2 FMAX
461 L Z+0,5 F500
462 CC X+128 Y-60
463 CP IPA-180 Z+0,171 DR-
464 CC X+128 Y-60
465 CP IPA-180 Z-0,158 DR-
466 CC X+128 Y-60
467 CP IPA-180 Z-0,487 DR-
468 CC X+128 Y-60
469 CP IPA-180 Z-0,816 DR-
470 CC X+128 Y-60
471 CP IPA-180 Z-1,146 DR-
472 CC X+128 Y-60
473 CP IPA-180 Z-1,475 DR-
474 CC X+128 Y-60
475 CP IPA-180 Z-1,804 DR-
476 CC X+128 Y-60
477 CP IPA-180 Z-2,133 DR-
478 CC X+128 Y-60
479 CP IPA-180 Z-2,462 DR-
480 CC X+128 Y-60
481 CP IPA-180 Z-2,791 DR-
482 CC X+128 Y-60
483 CP IPA-180 Z-3,12 DR-
484 CC X+128 Y-60
485 CP IPA-180 Z-3,449 DR-
486 CC X+128 Y-60
487 CP IPA-180 Z-3,778 DR-
488 CC X+128 Y-60
489 CP IPA-180 Z-4,108 DR-
490 CC X+128 Y-60
491 CP IPA-180 Z-4,437 DR-
492 CC X+128 Y-60
493 CP IPA-180 Z-4,766 DR-
494 CC X+128 Y-60
495 CP IPA-180 Z-5,095 DR-
496 CC X+128 Y-60
497 CP IPA-180 Z-5,424 DR-
498 CC X+128 Y-60
499 CP IPA-180 Z-5,753 DR-
500 CC X+128 Y-60
501 CP IPA-180 Z-6,082 DR-
502 CC X+128 Y-60
503 CP IPA-180 Z-6,412 DR-
504 CC X+128 Y-60
505 CP IPA-180 Z-6,741 DR-
506 CC X+128 Y-60
507 CP IPA-180 Z-7,07 DR-
508 CC X+128 Y-60
509 CP IPA-180 Z-7,399 DR-
510 CC X+128 Y-60
511 CP IPA-180 Z-7,728 DR-
512 CC X+128 Y-60
513 CP IPA-180 Z-8,057 DR-
514 CC X+128 Y-60
515 CP IPA-242,205 Z-8,5 DR-
516 L X+128,75 Y-60 F315
517 CC X+126,5 Y-60
518 C X+124,25 Y-60 DR+
519 CC X+129,5 Y-60
520 C X+124,896 Y-62,523 DR+
521 CC X+128 Y-60
522 C X+124 Y-60 DR+
523 CC X+128 Y-60
524 C X+124,896 Y-62,523 DR+
525 L Z+10 FMAX
526 L X+126,601 Y-62,654 FMAX
527 L Z-6,5 FMAX
528 L Z-8 F500
529 CC X+128 Y-60
530 CP IPA-180 Z-8,329 DR-
531 CC X+128 Y-60
532 CP IPA-180 Z-8,658 DR-
533 CC X+128 Y-60
534 CP IPA-180 Z-8,987 DR-
535 CC X+128 Y-60
536 CP IPA-180 Z-9,316 DR-
537 CC X+128 Y-60
538 CP IPA-180 Z-9,646 DR-
539 CC X+128 Y-60
540 CP IPA-180 Z-9,975 DR-
541 CC X+128 Y-60
542 CP IPA-180 Z-10,304 DR-
543 CC X+128 Y-60
544 CP IPA-180 Z-10,633 DR-
545 CC X+128 Y-60
546 CP IPA-180 Z-10,962 DR-
547 CC X+128 Y-60
548 CP IPA-180 Z-11,291 DR-
549 CC X+128 Y-60
550 CP IPA-180 Z-11,62 DR-
551 CC X+128 Y-60
552 CP IPA-180 Z-11,949 DR-
553 CC X+128 Y-60
554 CP IPA-180 Z-12,279 DR-
555 CC X+128 Y-60
556 CP IPA-180 Z-12,608 DR-
557 CC X+128 Y-60
558 CP IPA-180 Z-12,937 DR-
559 CC X+128 Y-60
560 CP IPA-180 Z-13,266 DR-
561 CC X+128 Y-60
562 CP IPA-180 Z-13,595 DR-
563 CC X+128 Y-60
564 CP IPA-180 Z-13,924 DR-
565 CC X+128 Y-60
566 CP IPA-180 Z-14,253 DR-
567 CC X+128 Y-60
568 CP IPA-180 Z-14,582 DR-
569 CC X+128 Y-60
570 CP IPA-180 Z-14,912 DR-
571 CC X+128 Y-60
572 CP IPA-180 Z-15,241 DR-
573 CC X+128 Y-60
574 CP IPA-180 Z-15,57 DR-
575 CC X+128 Y-60
576 CP IPA-180 Z-15,899 DR-
577 CC X+128 Y-60
578 CP IPA-180 Z-16,228 DR-
579 CC X+128 Y-60
580 CP IPA-180 Z-16,557 DR-
581 CC X+128 Y-60
582 CP IPA-242,205 Z-17 DR-
583 L X+128,75 Y-60 F315
584 CC X+126,5 Y-60
585 C X+124,25 Y-60 DR+
586 CC X+129,5 Y-60
587 C X+124,896 Y-62,523 DR+
588 CC X+128 Y-60
589 C X+124 Y-60 DR+
590 CC X+128 Y-60
591 C X+124,896 Y-62,523 DR+
592 L Z+50 FMAX
593 L X+16,601 Y-62,654 FMAX
594 L Z+2 FMAX
595 L Z+0,5 F500
596 CC X+18 Y-60
597 CP IPA-180 Z+0,171 DR-
598 CC X+18 Y-60
599 CP IPA-180 Z-0,158 DR-
600 CC X+18 Y-60
601 CP IPA-180 Z-0,487 DR-
602 CC X+18 Y-60
603 CP IPA-180 Z-0,816 DR-
604 CC X+18 Y-60
605 CP IPA-180 Z-1,146 DR-
606 CC X+18 Y-60
607 CP IPA-180 Z-1,475 DR-
608 CC X+18 Y-60
609 CP IPA-180 Z-1,804 DR-
610 CC X+18 Y-60
611 CP IPA-180 Z-2,133 DR-
612 CC X+18 Y-60
613 CP IPA-180 Z-2,462 DR-
614 CC X+18 Y-60
615 CP IPA-180 Z-2,791 DR-
616 CC X+18 Y-60
617 CP IPA-180 Z-3,12 DR-
618 CC X+18 Y-60
619 CP IPA-180 Z-3,449 DR-
620 CC X+18 Y-60
621 CP IPA-180 Z-3,778 DR-
622 CC X+18 Y-60
623 CP IPA-180 Z-4,108 DR-
624 CC X+18 Y-60
625 CP IPA-180 Z-4,437 DR-
626 CC X+18 Y-60
627 CP IPA-180 Z-4,766 DR-
628 CC X+18 Y-60
629 CP IPA-180 Z-5,095 DR-
630 CC X+18 Y-60
631 CP IPA-180 Z-5,424 DR-
632 CC X+18 Y-60
633 CP IPA-180 Z-5,753 DR-
634 CC X+18 Y-60
635 CP IPA-180 Z-6,082 DR-
636 CC X+18 Y-60
637 CP IPA-180 Z-6,412 DR-
638 CC X+18 Y-60
639 CP IPA-180 Z-6,741 DR-
640 CC X+18 Y-60
641 CP IPA-180 Z-7,07 DR-
642 CC X+18 Y-60
643 CP IPA-180 Z-7,399 DR-
644 CC X+18 Y-60
645 CP IPA-180 Z-7,728 DR-
646 CC X+18 Y-60
647 CP IPA-180 Z-8,057 DR-
648 CC X+18 Y-60
649 CP IPA-242,205 Z-8,5 DR-
650 L X+18,75 Y-60 F315
651 CC X+16,5 Y-60
652 C X+14,25 Y-60 DR+
653 CC X+19,5 Y-60
654 C X+14,896 Y-62,523 DR+
655 CC X+18 Y-60
656 C X+14 Y-60 DR+
657 CC X+18 Y-60
658 C X+14,896 Y-62,523 DR+
659 L Z+10 FMAX
660 L X+16,601 Y-62,654 FMAX
661 L Z-6,5 FMAX
662 L Z-8 F500
663 CC X+18 Y-60
664 CP IPA-180 Z-8,329 DR-
665 CC X+18 Y-60
666 CP IPA-180 Z-8,658 DR-
667 CC X+18 Y-60
668 CP IPA-180 Z-8,987 DR-
669 CC X+18 Y-60
670 CP IPA-180 Z-9,316 DR-
671 CC X+18 Y-60
672 CP IPA-180 Z-9,646 DR-
673 CC X+18 Y-60
674 CP IPA-180 Z-9,975 DR-
675 CC X+18 Y-60
676 CP IPA-180 Z-10,304 DR-
677 CC X+18 Y-60
678 CP IPA-180 Z-10,633 DR-
679 CC X+18 Y-60
680 CP IPA-180 Z-10,962 DR-
681 CC X+18 Y-60
682 CP IPA-180 Z-11,291 DR-
683 CC X+18 Y-60
684 CP IPA-180 Z-11,62 DR-
685 CC X+18 Y-60
686 CP IPA-180 Z-11,949 DR-
687 CC X+18 Y-60
688 CP IPA-180 Z-12,279 DR-
689 CC X+18 Y-60
690 CP IPA-180 Z-12,608 DR-
691 CC X+18 Y-60
692 CP IPA-180 Z-12,937 DR-
693 CC X+18 Y-60
694 CP IPA-180 Z-13,266 DR-
695 CC X+18 Y-60
696 CP IPA-180 Z-13,595 DR-
697 CC X+18 Y-60
698 CP IPA-180 Z-13,924 DR-
699 CC X+18 Y-60
700 CP IPA-180 Z-14,253 DR-
701 CC X+18 Y-60
702 CP IPA-180 Z-14,582 DR-
703 CC X+18 Y-60
704 CP IPA-180 Z-14,912 DR-
705 CC X+18 Y-60
706 CP IPA-180 Z-15,241 DR-
707 CC X+18 Y-60
708 CP IPA-180 Z-15,57 DR-
709 CC X+18 Y-60
710 CP IPA-180 Z-15,899 DR-
711 CC X+18 Y-60
712 CP IPA-180 Z-16,228 DR-
713 CC X+18 Y-60
714 CP IPA-180 Z-16,557 DR-
715 CC X+18 Y-60
716 CP IPA-242,205 Z-17 DR-
717 L X+18,75 Y-60 F315
718 CC X+16,5 Y-60
719 C X+14,25 Y-60 DR+
720 CC X+19,5 Y-60
721 C X+14,896 Y-62,523 DR+
722 CC X+18 Y-60
723 C X+14 Y-60 DR+
724 CC X+18 Y-60
725 C X+14,896 Y-62,523 DR+
726 L Z+50 FMAX
727 L X-129,399 Y-62,654 FMAX
728 L Z+2 FMAX
729 L Z+0,5 F500
730 CC X-128 Y-60
731 CP IPA-180 Z+0,171 DR-
732 CC X-128 Y-60
733 CP IPA-180 Z-0,158 DR-
734 CC X-128 Y-60
735 CP IPA-180 Z-0,487 DR-
736 CC X-128 Y-60
737 CP IPA-180 Z-0,816 DR-
738 CC X-128 Y-60
739 CP IPA-180 Z-1,146 DR-
740 CC X-128 Y-60
741 CP IPA-180 Z-1,475 DR-
742 CC X-128 Y-60
743 CP IPA-180 Z-1,804 DR-
744 CC X-128 Y-60
745 CP IPA-180 Z-2,133 DR-
746 CC X-128 Y-60
747 CP IPA-180 Z-2,462 DR-
748 CC X-128 Y-60
749 CP IPA-180 Z-2,791 DR-
750 CC X-128 Y-60
751 CP IPA-180 Z-3,12 DR-
752 CC X-128 Y-60
753 CP IPA-180 Z-3,449 DR-
754 CC X-128 Y-60
755 CP IPA-180 Z-3,778 DR-
756 CC X-128 Y-60
757 CP IPA-180 Z-4,108 DR-
758 CC X-128 Y-60
759 CP IPA-180 Z-4,437 DR-
760 CC X-128 Y-60
761 CP IPA-180 Z-4,766 DR-
762 CC X-128 Y-60
763 CP IPA-180 Z-5,095 DR-
764 CC X-128 Y-60
765 CP IPA-180 Z-5,424 DR-
766 CC X-128 Y-60
767 CP IPA-180 Z-5,753 DR-
768 CC X-128 Y-60
769 CP IPA-180 Z-6,082 DR-
770 CC X-128 Y-60
771 CP IPA-180 Z-6,412 DR-
772 CC X-128 Y-60
773 CP IPA-180 Z-6,741 DR-
774 CC X-128 Y-60
775 CP IPA-180 Z-7,07 DR-
776 CC X-128 Y-60
777 CP IPA-180 Z-7,399 DR-
778 CC X-128 Y-60
779 CP IPA-180 Z-7,728 DR-
780 CC X-128 Y-60
781 CP IPA-180 Z-8,057 DR-
782 CC X-128 Y-60
783 CP IPA-242,205 Z-8,5 DR-
784 L X-127,25 Y-60 F315
785 CC X-129,5 Y-60
786 C X-131,75 Y-60 DR+
787 CC X-126,5 Y-60
788 C X-131,104 Y-62,523 DR+
789 CC X-128 Y-60
790 C X-132 Y-60 DR+
791 CC X-128 Y-60
792 C X-131,104 Y-62,523 DR+
793 L Z+10 FMAX
794 L X-129,399 Y-62,654 FMAX
795 L Z-6,5 FMAX
796 L Z-8 F500
797 CC X-128 Y-60
798 CP IPA-180 Z-8,329 DR-
799 CC X-128 Y-60
800 CP IPA-180 Z-8,658 DR-
801 CC X-128 Y-60
802 CP IPA-180 Z-8,987 DR-
803 CC X-128 Y-60
804 CP IPA-180 Z-9,316 DR-
805 CC X-128 Y-60
806 CP IPA-180 Z-9,646 DR-
807 CC X-128 Y-60
808 CP IPA-180 Z-9,975 DR-
809 CC X-128 Y-60
810 CP IPA-180 Z-10,304 DR-
811 CC X-128 Y-60
812 CP IPA-180 Z-10,633 DR-
813 CC X-128 Y-60
814 CP IPA-180 Z-10,962 DR-
815 CC X-128 Y-60
816 CP IPA-180 Z-11,291 DR-
817 CC X-128 Y-60
818 CP IPA-180 Z-11,62 DR-
819 CC X-128 Y-60
820 CP IPA-180 Z-11,949 DR-
821 CC X-128 Y-60
822 CP IPA-180 Z-12,279 DR-
823 CC X-128 Y-60
824 CP IPA-180 Z-12,608 DR-
825 CC X-128 Y-60
826 CP IPA-180 Z-12,937 DR-
827 CC X-128 Y-60
828 CP IPA-180 Z-13,266 DR-
829 CC X-128 Y-60
830 CP IPA-180 Z-13,595 DR-
831 CC X-128 Y-60
832 CP IPA-180 Z-13,924 DR-
833 CC X-128 Y-60
834 CP IPA-180 Z-14,253 DR-
835 CC X-128 Y-60
836 CP IPA-180 Z-14,582 DR-
837 CC X-128 Y-60
838 CP IPA-180 Z-14,912 DR-
839 CC X-128 Y-60
840 CP IPA-180 Z-15,241 DR-
841 CC X-128 Y-60
842 CP IPA-180 Z-15,57 DR-
843 CC X-128 Y-60
844 CP IPA-180 Z-15,899 DR-
845 CC X-128 Y-60
846 CP IPA-180 Z-16,228 DR-
847 CC X-128 Y-60
848 CP IPA-180 Z-16,557 DR-
849 CC X-128 Y-60
850 CP IPA-242,205 Z-17 DR-
851 L X-127,25 Y-60 F315
852 CC X-129,5 Y-60
853 C X-131,75 Y-60 DR+
854 CC X-126,5 Y-60
855 C X-131,104 Y-62,523 DR+
856 CC X-128 Y-60
857 C X-132 Y-60 DR+
858 CC X-128 Y-60
859 C X-131,104 Y-62,523 DR+
860 L Z+50 FMAX
861 TOOL CALL 18 Z S1751 DR-5
862 L X-128 Y+60 Z+50 FMAX
863 L Z-6,5 FMAX
864 L Z-17 F500
865 L X-126 Y+59 RL F315
866 L X-125
867 CC X-125 Y+60
868 C X-124 Y+60 DR+
869 CC X-128 Y+60
870 C X-132 Y+60 DR+
871 CC X-128 Y+60
872 C X-124 Y+60 DR+
873 CC X-128 Y+60
874 C X-124,124 Y+60,99 DR+
875 CC X-128 Y+60
876 C X-132 Y+60 DR+
877 CC X-128 Y+60
878 C X-124 Y+60 DR+
879 CC X-128 Y+60
880 C X-124,124 Y+60,99 DR+
881 CC X-125,093 Y+60,742
882 C X-125,341 Y+61,711 DR+
883 L X-126,31 Y+61,464
884 L X-128 Y+60 R0
885 L Z+50 FMAX
886 L X+18 FMAX
887 L Z-6,5 FMAX
888 L Z-17 F500
889 L X+20 Y+59 RL F315
890 L X+21
891 CC X+21 Y+60
892 C X+22 Y+60 DR+
893 CC X+18 Y+60
894 C X+14 Y+60 DR+
895 CC X+18 Y+60
896 C X+22 Y+60 DR+
897 CC X+18 Y+60
898 C X+21,876 Y+60,99 DR+
899 CC X+18 Y+60
900 C X+14 Y+60 DR+
901 CC X+18 Y+60
902 C X+22 Y+60 DR+
903 CC X+18 Y+60
904 C X+21,876 Y+60,99 DR+
905 CC X+20,907 Y+60,742
906 C X+20,659 Y+61,711 DR+
907 L X+19,69 Y+61,464
908 L X+18 Y+60 R0
909 L Z+50 FMAX
910 L X+128 FMAX
911 L Z-6,5 FMAX
912 L Z-17 F500
913 L X+130 Y+59 RL F315
914 L X+131
915 CC X+131 Y+60
916 C X+132 Y+60 DR+
917 CC X+128 Y+60
918 C X+124 Y+60 DR+
919 CC X+128 Y+60
920 C X+132 Y+60 DR+
921 CC X+128 Y+60
922 C X+131,876 Y+60,99 DR+
923 CC X+128 Y+60
924 C X+124 Y+60 DR+
925 CC X+128 Y+60
926 C X+132 Y+60 DR+
927 CC X+128 Y+60
928 C X+131,876 Y+60,99 DR+
929 CC X+130,907 Y+60,742
930 C X+130,659 Y+61,711 DR+
931 L X+129,69 Y+61,464
932 L X+128 Y+60 R0
933 L Z+50 FMAX
934 L Y-60 FMAX
935 L Z-6,5 FMAX
936 L Z-17 F500
937 L X+130 Y-61 RL F315
938 L X+131
939 CC X+131 Y-60
940 C X+132 Y-60 DR+
941 CC X+128 Y-60
942 C X+124 Y-60 DR+
943 CC X+128 Y-60
944 C X+132 Y-60 DR+
945 CC X+128 Y-60
946 C X+131,876 Y-59,01 DR+
947 CC X+128 Y-60
948 C X+124 Y-60 DR+
949 CC X+128 Y-60
950 C X+132 Y-60 DR+
951 CC X+128 Y-60
952 C X+131,876 Y-59,01 DR+
953 CC X+130,907 Y-59,258
954 C X+130,659 Y-58,289 DR+
955 L X+129,69 Y-58,536
956 L X+128 Y-60 R0
957 L Z+50 FMAX
958 L X+18 FMAX
959 L Z-6,5 FMAX
960 L Z-17 F500
961 L X+20 Y-61 RL F315
962 L X+21
963 CC X+21 Y-60
964 C X+22 Y-60 DR+
965 CC X+18 Y-60
966 C X+14 Y-60 DR+
967 CC X+18 Y-60
968 C X+22 Y-60 DR+
969 CC X+18 Y-60
970 C X+21,876 Y-59,01 DR+
971 CC X+18 Y-60
972 C X+14 Y-60 DR+
973 CC X+18 Y-60
974 C X+22 Y-60 DR+
975 CC X+18 Y-60
976 C X+21,876 Y-59,01 DR+
977 CC X+20,907 Y-59,258
978 C X+20,659 Y-58,289 DR+
979 L X+19,69 Y-58,536
980 L X+18 Y-60 R0
981 L Z+50 FMAX
982 L X-128 FMAX
983 L Z-6,5 FMAX
984 L Z-17 F500
985 L X-126 Y-61 RL F315
986 L X-125
987 CC X-125 Y-60
988 C X-124 Y-60 DR+
989 CC X-128 Y-60
990 C X-132 Y-60 DR+
991 CC X-128 Y-60
992 C X-124 Y-60 DR+
993 CC X-128 Y-60
994 C X-124,124 Y-59,01 DR+
995 CC X-128 Y-60
996 C X-132 Y-60 DR+
997 CC X-128 Y-60
998 C X-124 Y-60 DR+
999 CC X-128 Y-60
1000 C X-124,124 Y-59,01 DR+
1001 CC X-125,093 Y-59,258
1002 C X-125,341 Y-58,289 DR+
1003 L X-126,31 Y-58,536
1004 L X-128 Y-60 R0
1005 L Z+50 FMAX
1006 M78
1007 M5
1008 L Z-1 FMAX M91
1009 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1010 TOOL CALL 1 Z S1856 DR+0
1011 TOOL DEF 25
1012 L X+128 Y+0 FMAX M3
1013 L Z+50 FMAX M8
1014 ;  POINTAGE-PERCAGE
1015 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,35 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1016 L X+128 Y+0 FMAX M99
1017 L X-121 FMAX M99
1018 L Z+50 FMAX
1019 M9
1020 M5
1021 L Z-1 FMAX M91
1022 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
1023 TOOL CALL 25 Z S3000 DR+0
1024 TOOL DEF 1
1025 L X+128 Y+0 FMAX M3
1026 L Z+50 FMAX M7
1027 ;  DEBOURRAGE
1028 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-40 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1029 L X+128 Y+0 FMAX M99
1030 L X-121 FMAX M99
1031 L Z+50 FMAX
1032 M9
1033 M5
1034 L Z-1 FMAX M91
1035 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1036 TOOL CALL 1 Z S1856 DR+0
1037 TOOL DEF 20
1038 L X+4,5 Y+18 FMAX M3
1039 L Z+50 FMAX M8
1040 ;  POINTAGE-PERCAGE
1041 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1042 L X+4,5 Y+18 FMAX M99
1043 L Y-18 FMAX M99
1044 L X-80,75 Y+18 FMAX M99
1045 L Y-18 FMAX M99
1046 L X+96,25 Y+18 FMAX M99
1047 L Y-18 FMAX M99
1048 L Z+50 FMAX
1049 M9
1050 M5
1051 L Z-1 FMAX M91
1052 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
1053 TOOL CALL 20 Z S3800 DR+0
1054 TOOL DEF 18
1055 L X+4,5 Y+18 FMAX M3
1056 L Z+50 FMAX M7
1057 ;  DEBOURRAGE
1058 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-40 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1059 L X+4,5 Y+18 FMAX M99
1060 L Y-18 FMAX M99
1061 L X-80,75 Y+18 FMAX M99
1062 L Y-18 FMAX M99
1063 L X+96,25 Y+18 FMAX M99
1064 L Y-18 FMAX M99
1065 L Z+50 FMAX
1066 M9
1067 M5
1068 L Z-1 FMAX M91
1069 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
1070 ; CORRECTION USURE GAUCHE
1071 ; SUREP R 0. SUREP Z 0.
1072 TOOL CALL 18 Z S1751 DR-5
1073 TOOL DEF 1
1074 L X-154 Y+85 FMAX M3
1075 L Z+50 FMAX M25
1076 L Z+2 FMAX
1077 L Z-4,8 F500
1078 L X-148 RL F315
1079 L X+148
1080 L X+154 R0
1081 L Z+10 FMAX
1082 L X-154 Y+80 FMAX
1083 L Z+2 FMAX
1084 L Z-4,8 F500
1085 L X-148 RL F315
1086 L X+148
1087 L X+154 R0
1088 L Z+10 FMAX
1089 L X-154 Y+75 FMAX
1090 L Z+2 FMAX
1091 L Z-4,8 F500
1092 L X-148 RL F315
1093 L X+148
1094 L X+154 R0
1095 L Z+10 FMAX
1096 L X-154 Y+70 FMAX
1097 L Z+2 FMAX
1098 L Z-4,8 F500
1099 L X-148 RL F315
1100 L X+148
1101 L X+154 R0
1102 L Z+10 FMAX
1103 L X-154 Y+65 FMAX
1104 L Z+2 FMAX
1105 L Z-4,8 F500
1106 L X-148 RL F315
1107 L X+148
1108 L X+154 R0
1109 L Z+10 FMAX
1110 L X-154 Y+60 FMAX
1111 L Z+2 FMAX
1112 L Z-4,8 F500
1113 L X-148 RL F315
1114 L X+148
1115 L X+154 R0
1116 L Z+10 FMAX
1117 L X-154 Y+55 FMAX
1118 L Z+2 FMAX
1119 L Z-4,8 F500
1120 L X-148 RL F315
1121 L X+148
1122 L X+154 R0
1123 L Z+10 FMAX
1124 L X-154 Y+50 FMAX
1125 L Z+2 FMAX
1126 L Z-4,8 F500
1127 L X-148 RL F315
1128 L X+148
1129 L X+154 R0
1130 L Z+10 FMAX
1131 L X-154 Y+45 FMAX
1132 L Z+2 FMAX
1133 L Z-4,8 F500
1134 L X-148 RL F315
1135 L X+148
1136 L X+154 R0
1137 L Z+10 FMAX
1138 L X-154 Y+40 FMAX
1139 L Z+2 FMAX
1140 L Z-4,8 F500
1141 L X-148 RL F315
1142 L X+148
1143 L X+154 R0
1144 L Z+10 FMAX
1145 L X-154 Y+35 FMAX
1146 L Z+2 FMAX
1147 L Z-4,8 F500
1148 L X-148 RL F315
1149 L X+148
1150 L X+154 R0
1151 L Z+10 FMAX
1152 L X-154 Y+30 FMAX
1153 L Z+2 FMAX
1154 L Z-4,8 F500
1155 L X-148 RL F315
1156 L X+148
1157 L X+154 R0
1158 L Z+10 FMAX
1159 L X-154 Y+85 FMAX
1160 L Z-2,8 FMAX
1161 L Z-5,1 F500
1162 L X-148 RL F315
1163 L X+148
1164 L X+154 R0
1165 L Z+10 FMAX
1166 L X-154 Y+80 FMAX
1167 L Z-2,8 FMAX
1168 L Z-5,1 F500
1169 L X-148 RL F315
1170 L X+148
1171 L X+154 R0
1172 L Z+10 FMAX
1173 L X-154 Y+75 FMAX
1174 L Z-2,8 FMAX
1175 L Z-5,1 F500
1176 L X-148 RL F315
1177 L X+148
1178 L X+154 R0
1179 L Z+10 FMAX
1180 L X-154 Y+70 FMAX
1181 L Z-2,8 FMAX
1182 L Z-5,1 F500
1183 L X-148 RL F315
1184 L X+148
1185 L X+154 R0
1186 L Z+10 FMAX
1187 L X-154 Y+65 FMAX
1188 L Z-2,8 FMAX
1189 L Z-5,1 F500
1190 L X-148 RL F315
1191 L X+148
1192 L X+154 R0
1193 L Z+10 FMAX
1194 L X-154 Y+60 FMAX
1195 L Z-2,8 FMAX
1196 L Z-5,1 F500
1197 L X-148 RL F315
1198 L X+148
1199 L X+154 R0
1200 L Z+10 FMAX
1201 L X-154 Y+55 FMAX
1202 L Z-2,8 FMAX
1203 L Z-5,1 F500
1204 L X-148 RL F315
1205 L X+148
1206 L X+154 R0
1207 L Z+10 FMAX
1208 L X-154 Y+50 FMAX
1209 L Z-2,8 FMAX
1210 L Z-5,1 F500
1211 L X-148 RL F315
1212 L X+148
1213 L X+154 R0
1214 L Z+10 FMAX
1215 L X-154 Y+45 FMAX
1216 L Z-2,8 FMAX
1217 L Z-5,1 F500
1218 L X-148 RL F315
1219 L X+148
1220 L X+154 R0
1221 L Z+10 FMAX
1222 L X-154 Y+40 FMAX
1223 L Z-2,8 FMAX
1224 L Z-5,1 F500
1225 L X-148 RL F315
1226 L X+148
1227 L X+154 R0
1228 L Z+10 FMAX
1229 L X-154 Y+35 FMAX
1230 L Z-2,8 FMAX
1231 L Z-5,1 F500
1232 L X-148 RL F315
1233 L X+148
1234 L X+154 R0
1235 L Z+10 FMAX
1236 L X-154 Y+30 FMAX
1237 L Z-2,8 FMAX
1238 L Z-5,1 F500
1239 L X-148 RL F315
1240 L X+148
1241 L X+154 R0
1242 L Z+10 FMAX
1243 L X-154 FMAX
1244 L Z-2,8 FMAX
1245 L Z-5,1 F500
1246 L X-148 RL F315
1247 L X+148
1248 L X+154 R0
1249 L Z+50 FMAX
1250 L Y-85 FMAX
1251 L Z+2 FMAX
1252 L Z-4,8 F500
1253 L X+148 RL F315
1254 L X-148
1255 L X-154 R0
1256 L Z+10 FMAX
1257 L X+154 Y-80 FMAX
1258 L Z+2 FMAX
1259 L Z-4,8 F500
1260 L X+148 RL F315
1261 L X-148
1262 L X-154 R0
1263 L Z+10 FMAX
1264 L X+154 Y-75 FMAX
1265 L Z+2 FMAX
1266 L Z-4,8 F500
1267 L X+148 RL F315
1268 L X-148
1269 L X-154 R0
1270 L Z+10 FMAX
1271 L X+154 Y-70 FMAX
1272 L Z+2 FMAX
1273 L Z-4,8 F500
1274 L X+148 RL F315
1275 L X-148
1276 L X-154 R0
1277 L Z+10 FMAX
1278 L X+154 Y-65 FMAX
1279 L Z+2 FMAX
1280 L Z-4,8 F500
1281 L X+148 RL F315
1282 L X-148
1283 L X-154 R0
1284 L Z+10 FMAX
1285 L X+154 Y-60 FMAX
1286 L Z+2 FMAX
1287 L Z-4,8 F500
1288 L X+148 RL F315
1289 L X-148
1290 L X-154 R0
1291 L Z+10 FMAX
1292 L X+154 Y-55 FMAX
1293 L Z+2 FMAX
1294 L Z-4,8 F500
1295 L X+148 RL F315
1296 L X-148
1297 L X-154 R0
1298 L Z+10 FMAX
1299 L X+154 Y-50 FMAX
1300 L Z+2 FMAX
1301 L Z-4,8 F500
1302 L X+148 RL F315
1303 L X-148
1304 L X-154 R0
1305 L Z+10 FMAX
1306 L X+154 Y-45 FMAX
1307 L Z+2 FMAX
1308 L Z-4,8 F500
1309 L X+148 RL F315
1310 L X-148
1311 L X-154 R0
1312 L Z+10 FMAX
1313 L X+154 Y-40 FMAX
1314 L Z+2 FMAX
1315 L Z-4,8 F500
1316 L X+148 RL F315
1317 L X-148
1318 L X-154 R0
1319 L Z+10 FMAX
1320 L X+154 Y-35 FMAX
1321 L Z+2 FMAX
1322 L Z-4,8 F500
1323 L X+148 RL F315
1324 L X-148
1325 L X-154 R0
1326 L Z+10 FMAX
1327 L X+154 Y-30 FMAX
1328 L Z+2 FMAX
1329 L Z-4,8 F500
1330 L X+148 RL F315
1331 L X-148
1332 L X-154 R0
1333 L Z+10 FMAX
1334 L X+154 Y-85 FMAX
1335 L Z-2,8 FMAX
1336 L Z-5,1 F500
1337 L X+148 RL F315
1338 L X-148
1339 L X-154 R0
1340 L Z+10 FMAX
1341 L X+154 Y-80 FMAX
1342 L Z-2,8 FMAX
1343 L Z-5,1 F500
1344 L X+148 RL F315
1345 L X-148
1346 L X-154 R0
1347 L Z+10 FMAX
1348 L X+154 Y-75 FMAX
1349 L Z-2,8 FMAX
1350 L Z-5,1 F500
1351 L X+148 RL F315
1352 L X-148
1353 L X-154 R0
1354 L Z+10 FMAX
1355 L X+154 Y-70 FMAX
1356 L Z-2,8 FMAX
1357 L Z-5,1 F500
1358 L X+148 RL F315
1359 L X-148
1360 L X-154 R0
1361 L Z+10 FMAX
1362 L X+154 Y-65 FMAX
1363 L Z-2,8 FMAX
1364 L Z-5,1 F500
1365 L X+148 RL F315
1366 L X-148
1367 L X-154 R0
1368 L Z+10 FMAX
1369 L X+154 Y-60 FMAX
1370 L Z-2,8 FMAX
1371 L Z-5,1 F500
1372 L X+148 RL F315
1373 L X-148
1374 L X-154 R0
1375 L Z+10 FMAX
1376 L X+154 Y-55 FMAX
1377 L Z-2,8 FMAX
1378 L Z-5,1 F500
1379 L X+148 RL F315
1380 L X-148
1381 L X-154 R0
1382 L Z+10 FMAX
1383 L X+154 Y-50 FMAX
1384 L Z-2,8 FMAX
1385 L Z-5,1 F500
1386 L X+148 RL F315
1387 L X-148
1388 L X-154 R0
1389 L Z+10 FMAX
1390 L X+154 Y-45 FMAX
1391 L Z-2,8 FMAX
1392 L Z-5,1 F500
1393 L X+148 RL F315
1394 L X-148
1395 L X-154 R0
1396 L Z+10 FMAX
1397 L X+154 Y-40 FMAX
1398 L Z-2,8 FMAX
1399 L Z-5,1 F500
1400 L X+148 RL F315
1401 L X-148
1402 L X-154 R0
1403 L Z+10 FMAX
1404 L X+154 Y-35 FMAX
1405 L Z-2,8 FMAX
1406 L Z-5,1 F500
1407 L X+148 RL F315
1408 L X-148
1409 L X-154 R0
1410 L Z+10 FMAX
1411 L X+154 Y-30 FMAX
1412 L Z-2,8 FMAX
1413 L Z-5,1 F500
1414 L X+148 RL F315
1415 L X-148
1416 L X-154 R0
1417 L Z+10 FMAX
1418 L X+154 FMAX
1419 L Z-2,8 FMAX
1420 L Z-5,1 F500
1421 L X+148 RL F315
1422 L X-148
1423 L X-154 R0
1424 L Z+50 FMAX
1425 M78
1426 M5
1427 L Z-1 FMAX M91
1428 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1429 ; CORRECTION USURE GAUCHE
1430 ; SUREP R 0. SUREP Z 0.
1431 TOOL CALL 1 Z S6000 DR-2,5
1432 L X-151 Y+27,5 FMAX M3
1433 L Z+50 FMAX
1434 L Z+2 FMAX
1435 L Z-2,5 F800
1436 L X-148 RL F1200
1437 L X+148
1438 L X+151 R0
1439 L Z+50 FMAX
1440 L Y-27,5 FMAX
1441 L Z+2 FMAX
1442 L Z-2,5 F800
1443 L X+148 RL F1200
1444 L X-148
1445 L X-151 R0
1446 L Z+50 FMAX
1447 M5
1448 L Z-1 FMAX M91
1449 L Y-1 FMAX M91
1450 M30
1451 END PGM A37004-REP19-PORTE POINC-D MM
