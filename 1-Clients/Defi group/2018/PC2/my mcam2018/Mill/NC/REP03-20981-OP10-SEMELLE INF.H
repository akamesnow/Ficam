0 BEGIN PGM REP03-20981-OP10-SEMELLE INF MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP03-20981-OP10-SEMELLE INF
4 ; PROG-CN DU 26-10-20 A 13:45
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T8 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
10 ; T18 P15322450 AIR POCHE SANS TROU  FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T22 P15323501 XC48 POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-1*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 8
19 L X-205 Y+170 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X-205 Y+170 FMAX M99
24 L X-90 Y+120 FMAX M99
25 L X+55 FMAX M99
26 L X+205 Y+170 FMAX M99
27 L Y-170 FMAX M99
28 L X+55 Y-120 FMAX M99
29 L X-90 FMAX M99
30 L X-205 Y-170 FMAX M99
31 L Z+50 FMAX
32 M9
33 M5
34 L Z-1 FMAX M91
35 ; T8 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
36 TOOL CALL 8 Z S1650 DR+0
37 TOOL DEF 18
38 L X-205 Y+170 FMAX M3
39 L Z+50 FMAX M8
40 ;  DEBOURRAGE
41 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-36 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
42 L X-205 Y+170 FMAX M99
43 L X-90 Y+120 FMAX M99
44 L X+55 FMAX M99
45 L X+205 Y+170 FMAX M99
46 L Y-170 FMAX M99
47 L X+55 Y-120 FMAX M99
48 L X-90 FMAX M99
49 L X-205 Y-170 FMAX M99
50 L Z+50 FMAX
51 M9
52 M5
53 L Z-1 FMAX M91
54 ; T18 P15322450 AIR POCHE SANS TROU  FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
55 ; CORRECTION AUCUNE
56 ; SUREP R 0. SUREP Z 0.
57 TOOL CALL 18 Z S3820 DR+0
58 TOOL DEF 1
59 L X-208,389 Y+172,124 FMAX M3
60 L Z+50 FMAX M25
61 L Z+2 FMAX
62 L Z+0,5 F500
63 CC X-205 Y+170
64 CP IPA-180 Z-0,6 DR-
65 CC X-205 Y+170
66 CP IPA-180 Z-1,699 DR-
67 CC X-205 Y+170
68 CP IPA-180 Z-2,799 DR-
69 CC X-205 Y+170
70 CP IPA-180 Z-3,898 DR-
71 CC X-205 Y+170
72 CP IPA-180 Z-4,997 DR-
73 CC X-205 Y+170
74 CP IPA-180 Z-6,096 DR-
75 CC X-205 Y+170
76 CP IPA-147,923 Z-7 DR-
77 L X-204,125 Y+170 F764
78 CC X-206,75 Y+170
79 C X-209,375 Y+170 DR+
80 CC X-203,25 Y+170
81 C X-207,701 Y+165,792 DR+
82 CC X-205 Y+170
83 C X-210 Y+170 DR+
84 CC X-205 Y+170
85 C X-207,701 Y+165,792 DR+
86 L Z+10 FMAX
87 L X-208,389 Y+172,124 FMAX
88 L Z-5 FMAX
89 L Z-6,5 F500
90 CC X-205 Y+170
91 CP IPA-180 Z-7,599 DR-
92 CC X-205 Y+170
93 CP IPA-180 Z-8,699 DR-
94 CC X-205 Y+170
95 CP IPA-180 Z-9,799 DR-
96 CC X-205 Y+170
97 CP IPA-180 Z-10,898 DR-
98 CC X-205 Y+170
99 CP IPA-180 Z-11,997 DR-
100 CC X-205 Y+170
101 CP IPA-180 Z-13,096 DR-
102 CC X-205 Y+170
103 CP IPA-147,923 Z-14 DR-
104 L X-204,125 Y+170 F764
105 CC X-206,75 Y+170
106 C X-209,375 Y+170 DR+
107 CC X-203,25 Y+170
108 C X-207,701 Y+165,792 DR+
109 CC X-205 Y+170
110 C X-210 Y+170 DR+
111 CC X-205 Y+170
112 C X-207,701 Y+165,792 DR+
113 L Z+50 FMAX
114 L X-93,389 Y+122,124 FMAX
115 L Z+2 FMAX
116 L Z+0,5 F500
117 CC X-90 Y+120
118 CP IPA-180 Z-0,6 DR-
119 CC X-90 Y+120
120 CP IPA-180 Z-1,699 DR-
121 CC X-90 Y+120
122 CP IPA-180 Z-2,799 DR-
123 CC X-90 Y+120
124 CP IPA-180 Z-3,898 DR-
125 CC X-90 Y+120
126 CP IPA-180 Z-4,997 DR-
127 CC X-90 Y+120
128 CP IPA-180 Z-6,096 DR-
129 CC X-90 Y+120
130 CP IPA-147,923 Z-7 DR-
131 L X-89,125 Y+120 F764
132 CC X-91,75 Y+120
133 C X-94,375 Y+120 DR+
134 CC X-88,25 Y+120
135 C X-92,701 Y+115,792 DR+
136 CC X-90 Y+120
137 C X-95 Y+120 DR+
138 CC X-90 Y+120
139 C X-92,701 Y+115,792 DR+
140 L Z+10 FMAX
141 L X-93,389 Y+122,124 FMAX
142 L Z-5 FMAX
143 L Z-6,5 F500
144 CC X-90 Y+120
145 CP IPA-180 Z-7,599 DR-
146 CC X-90 Y+120
147 CP IPA-180 Z-8,699 DR-
148 CC X-90 Y+120
149 CP IPA-180 Z-9,799 DR-
150 CC X-90 Y+120
151 CP IPA-180 Z-10,898 DR-
152 CC X-90 Y+120
153 CP IPA-180 Z-11,997 DR-
154 CC X-90 Y+120
155 CP IPA-180 Z-13,096 DR-
156 CC X-90 Y+120
157 CP IPA-147,923 Z-14 DR-
158 L X-89,125 Y+120 F764
159 CC X-91,75 Y+120
160 C X-94,375 Y+120 DR+
161 CC X-88,25 Y+120
162 C X-92,701 Y+115,792 DR+
163 CC X-90 Y+120
164 C X-95 Y+120 DR+
165 CC X-90 Y+120
166 C X-92,701 Y+115,792 DR+
167 L Z+50 FMAX
168 L X+51,611 Y+122,124 FMAX
169 L Z+2 FMAX
170 L Z+0,5 F500
171 CC X+55 Y+120
172 CP IPA-180 Z-0,6 DR-
173 CC X+55 Y+120
174 CP IPA-180 Z-1,699 DR-
175 CC X+55 Y+120
176 CP IPA-180 Z-2,799 DR-
177 CC X+55 Y+120
178 CP IPA-180 Z-3,898 DR-
179 CC X+55 Y+120
180 CP IPA-180 Z-4,997 DR-
181 CC X+55 Y+120
182 CP IPA-180 Z-6,096 DR-
183 CC X+55 Y+120
184 CP IPA-147,923 Z-7 DR-
185 L X+55,875 Y+120 F764
186 CC X+53,25 Y+120
187 C X+50,625 Y+120 DR+
188 CC X+56,75 Y+120
189 C X+52,299 Y+115,792 DR+
190 CC X+55 Y+120
191 C X+50 Y+120 DR+
192 CC X+55 Y+120
193 C X+52,299 Y+115,792 DR+
194 L Z+10 FMAX
195 L X+51,611 Y+122,124 FMAX
196 L Z-5 FMAX
197 L Z-6,5 F500
198 CC X+55 Y+120
199 CP IPA-180 Z-7,599 DR-
200 CC X+55 Y+120
201 CP IPA-180 Z-8,699 DR-
202 CC X+55 Y+120
203 CP IPA-180 Z-9,799 DR-
204 CC X+55 Y+120
205 CP IPA-180 Z-10,898 DR-
206 CC X+55 Y+120
207 CP IPA-180 Z-11,997 DR-
208 CC X+55 Y+120
209 CP IPA-180 Z-13,096 DR-
210 CC X+55 Y+120
211 CP IPA-147,923 Z-14 DR-
212 L X+55,875 Y+120 F764
213 CC X+53,25 Y+120
214 C X+50,625 Y+120 DR+
215 CC X+56,75 Y+120
216 C X+52,299 Y+115,792 DR+
217 CC X+55 Y+120
218 C X+50 Y+120 DR+
219 CC X+55 Y+120
220 C X+52,299 Y+115,792 DR+
221 L Z+50 FMAX
222 L X+201,611 Y+172,124 FMAX
223 L Z+2 FMAX
224 L Z+0,5 F500
225 CC X+205 Y+170
226 CP IPA-180 Z-0,6 DR-
227 CC X+205 Y+170
228 CP IPA-180 Z-1,699 DR-
229 CC X+205 Y+170
230 CP IPA-180 Z-2,799 DR-
231 CC X+205 Y+170
232 CP IPA-180 Z-3,898 DR-
233 CC X+205 Y+170
234 CP IPA-180 Z-4,997 DR-
235 CC X+205 Y+170
236 CP IPA-180 Z-6,096 DR-
237 CC X+205 Y+170
238 CP IPA-147,923 Z-7 DR-
239 L X+205,875 Y+170 F764
240 CC X+203,25 Y+170
241 C X+200,625 Y+170 DR+
242 CC X+206,75 Y+170
243 C X+202,299 Y+165,792 DR+
244 CC X+205 Y+170
245 C X+200 Y+170 DR+
246 CC X+205 Y+170
247 C X+202,299 Y+165,792 DR+
248 L Z+10 FMAX
249 L X+201,611 Y+172,124 FMAX
250 L Z-5 FMAX
251 L Z-6,5 F500
252 CC X+205 Y+170
253 CP IPA-180 Z-7,599 DR-
254 CC X+205 Y+170
255 CP IPA-180 Z-8,699 DR-
256 CC X+205 Y+170
257 CP IPA-180 Z-9,799 DR-
258 CC X+205 Y+170
259 CP IPA-180 Z-10,898 DR-
260 CC X+205 Y+170
261 CP IPA-180 Z-11,997 DR-
262 CC X+205 Y+170
263 CP IPA-180 Z-13,096 DR-
264 CC X+205 Y+170
265 CP IPA-147,923 Z-14 DR-
266 L X+205,875 Y+170 F764
267 CC X+203,25 Y+170
268 C X+200,625 Y+170 DR+
269 CC X+206,75 Y+170
270 C X+202,299 Y+165,792 DR+
271 CC X+205 Y+170
272 C X+200 Y+170 DR+
273 CC X+205 Y+170
274 C X+202,299 Y+165,792 DR+
275 L Z+50 FMAX
276 L X+201,611 Y-167,876 FMAX
277 L Z+2 FMAX
278 L Z+0,5 F500
279 CC X+205 Y-170
280 CP IPA-180 Z-0,6 DR-
281 CC X+205 Y-170
282 CP IPA-180 Z-1,699 DR-
283 CC X+205 Y-170
284 CP IPA-180 Z-2,799 DR-
285 CC X+205 Y-170
286 CP IPA-180 Z-3,898 DR-
287 CC X+205 Y-170
288 CP IPA-180 Z-4,997 DR-
289 CC X+205 Y-170
290 CP IPA-180 Z-6,096 DR-
291 CC X+205 Y-170
292 CP IPA-147,923 Z-7 DR-
293 L X+205,875 Y-170 F764
294 CC X+203,25 Y-170
295 C X+200,625 Y-170 DR+
296 CC X+206,75 Y-170
297 C X+202,299 Y-174,208 DR+
298 CC X+205 Y-170
299 C X+200 Y-170 DR+
300 CC X+205 Y-170
301 C X+202,299 Y-174,208 DR+
302 L Z+10 FMAX
303 L X+201,611 Y-167,876 FMAX
304 L Z-5 FMAX
305 L Z-6,5 F500
306 CC X+205 Y-170
307 CP IPA-180 Z-7,599 DR-
308 CC X+205 Y-170
309 CP IPA-180 Z-8,699 DR-
310 CC X+205 Y-170
311 CP IPA-180 Z-9,799 DR-
312 CC X+205 Y-170
313 CP IPA-180 Z-10,898 DR-
314 CC X+205 Y-170
315 CP IPA-180 Z-11,997 DR-
316 CC X+205 Y-170
317 CP IPA-180 Z-13,096 DR-
318 CC X+205 Y-170
319 CP IPA-147,923 Z-14 DR-
320 L X+205,875 Y-170 F764
321 CC X+203,25 Y-170
322 C X+200,625 Y-170 DR+
323 CC X+206,75 Y-170
324 C X+202,299 Y-174,208 DR+
325 CC X+205 Y-170
326 C X+200 Y-170 DR+
327 CC X+205 Y-170
328 C X+202,299 Y-174,208 DR+
329 L Z+50 FMAX
330 L X+51,611 Y-117,876 FMAX
331 L Z+2 FMAX
332 L Z+0,5 F500
333 CC X+55 Y-120
334 CP IPA-180 Z-0,6 DR-
335 CC X+55 Y-120
336 CP IPA-180 Z-1,699 DR-
337 CC X+55 Y-120
338 CP IPA-180 Z-2,799 DR-
339 CC X+55 Y-120
340 CP IPA-180 Z-3,898 DR-
341 CC X+55 Y-120
342 CP IPA-180 Z-4,997 DR-
343 CC X+55 Y-120
344 CP IPA-180 Z-6,096 DR-
345 CC X+55 Y-120
346 CP IPA-147,923 Z-7 DR-
347 L X+55,875 Y-120 F764
348 CC X+53,25 Y-120
349 C X+50,625 Y-120 DR+
350 CC X+56,75 Y-120
351 C X+52,299 Y-124,208 DR+
352 CC X+55 Y-120
353 C X+50 Y-120 DR+
354 CC X+55 Y-120
355 C X+52,299 Y-124,208 DR+
356 L Z+10 FMAX
357 L X+51,611 Y-117,876 FMAX
358 L Z-5 FMAX
359 L Z-6,5 F500
360 CC X+55 Y-120
361 CP IPA-180 Z-7,599 DR-
362 CC X+55 Y-120
363 CP IPA-180 Z-8,699 DR-
364 CC X+55 Y-120
365 CP IPA-180 Z-9,799 DR-
366 CC X+55 Y-120
367 CP IPA-180 Z-10,898 DR-
368 CC X+55 Y-120
369 CP IPA-180 Z-11,997 DR-
370 CC X+55 Y-120
371 CP IPA-180 Z-13,096 DR-
372 CC X+55 Y-120
373 CP IPA-147,923 Z-14 DR-
374 L X+55,875 Y-120 F764
375 CC X+53,25 Y-120
376 C X+50,625 Y-120 DR+
377 CC X+56,75 Y-120
378 C X+52,299 Y-124,208 DR+
379 CC X+55 Y-120
380 C X+50 Y-120 DR+
381 CC X+55 Y-120
382 C X+52,299 Y-124,208 DR+
383 L Z+50 FMAX
384 L X-93,389 Y-117,876 FMAX
385 L Z+2 FMAX
386 L Z+0,5 F500
387 CC X-90 Y-120
388 CP IPA-180 Z-0,6 DR-
389 CC X-90 Y-120
390 CP IPA-180 Z-1,699 DR-
391 CC X-90 Y-120
392 CP IPA-180 Z-2,799 DR-
393 CC X-90 Y-120
394 CP IPA-180 Z-3,898 DR-
395 CC X-90 Y-120
396 CP IPA-180 Z-4,997 DR-
397 CC X-90 Y-120
398 CP IPA-180 Z-6,096 DR-
399 CC X-90 Y-120
400 CP IPA-147,923 Z-7 DR-
401 L X-89,125 Y-120 F764
402 CC X-91,75 Y-120
403 C X-94,375 Y-120 DR+
404 CC X-88,25 Y-120
405 C X-92,701 Y-124,208 DR+
406 CC X-90 Y-120
407 C X-95 Y-120 DR+
408 CC X-90 Y-120
409 C X-92,701 Y-124,208 DR+
410 L Z+10 FMAX
411 L X-93,389 Y-117,876 FMAX
412 L Z-5 FMAX
413 L Z-6,5 F500
414 CC X-90 Y-120
415 CP IPA-180 Z-7,599 DR-
416 CC X-90 Y-120
417 CP IPA-180 Z-8,699 DR-
418 CC X-90 Y-120
419 CP IPA-180 Z-9,799 DR-
420 CC X-90 Y-120
421 CP IPA-180 Z-10,898 DR-
422 CC X-90 Y-120
423 CP IPA-180 Z-11,997 DR-
424 CC X-90 Y-120
425 CP IPA-180 Z-13,096 DR-
426 CC X-90 Y-120
427 CP IPA-147,923 Z-14 DR-
428 L X-89,125 Y-120 F764
429 CC X-91,75 Y-120
430 C X-94,375 Y-120 DR+
431 CC X-88,25 Y-120
432 C X-92,701 Y-124,208 DR+
433 CC X-90 Y-120
434 C X-95 Y-120 DR+
435 CC X-90 Y-120
436 C X-92,701 Y-124,208 DR+
437 L Z+50 FMAX
438 L X-208,389 Y-167,876 FMAX
439 L Z+2 FMAX
440 L Z+0,5 F500
441 CC X-205 Y-170
442 CP IPA-180 Z-0,6 DR-
443 CC X-205 Y-170
444 CP IPA-180 Z-1,699 DR-
445 CC X-205 Y-170
446 CP IPA-180 Z-2,799 DR-
447 CC X-205 Y-170
448 CP IPA-180 Z-3,898 DR-
449 CC X-205 Y-170
450 CP IPA-180 Z-4,997 DR-
451 CC X-205 Y-170
452 CP IPA-180 Z-6,096 DR-
453 CC X-205 Y-170
454 CP IPA-147,923 Z-7 DR-
455 L X-204,125 Y-170 F764
456 CC X-206,75 Y-170
457 C X-209,375 Y-170 DR+
458 CC X-203,25 Y-170
459 C X-207,701 Y-174,208 DR+
460 CC X-205 Y-170
461 C X-210 Y-170 DR+
462 CC X-205 Y-170
463 C X-207,701 Y-174,208 DR+
464 L Z+10 FMAX
465 L X-208,389 Y-167,876 FMAX
466 L Z-5 FMAX
467 L Z-6,5 F500
468 CC X-205 Y-170
469 CP IPA-180 Z-7,599 DR-
470 CC X-205 Y-170
471 CP IPA-180 Z-8,699 DR-
472 CC X-205 Y-170
473 CP IPA-180 Z-9,799 DR-
474 CC X-205 Y-170
475 CP IPA-180 Z-10,898 DR-
476 CC X-205 Y-170
477 CP IPA-180 Z-11,997 DR-
478 CC X-205 Y-170
479 CP IPA-180 Z-13,096 DR-
480 CC X-205 Y-170
481 CP IPA-147,923 Z-14 DR-
482 L X-204,125 Y-170 F764
483 CC X-206,75 Y-170
484 C X-209,375 Y-170 DR+
485 CC X-203,25 Y-170
486 C X-207,701 Y-174,208 DR+
487 CC X-205 Y-170
488 C X-210 Y-170 DR+
489 CC X-205 Y-170
490 C X-207,701 Y-174,208 DR+
491 L Z+50 FMAX
492 TOOL CALL 18 Z S3820 DR-5
493 L X-205 Y+170 Z+50 FMAX
494 L Z-5 FMAX
495 L Z-14 F500
496 L X-202 Y+169 RL F764
497 L X-201
498 CC X-201 Y+170
499 C X-200 Y+170 DR+
500 CC X-205 Y+170
501 C X-210 Y+170 DR+
502 CC X-205 Y+170
503 C X-200 Y+170 DR+
504 CC X-205 Y+170
505 C X-200,395 Y+171,947 DR+
506 CC X-205 Y+170
507 C X-210 Y+170 DR+
508 CC X-205 Y+170
509 C X-200 Y+170 DR+
510 CC X-205 Y+170
511 C X-200,395 Y+171,947 DR+
512 CC X-201,316 Y+171,558
513 C X-201,705 Y+172,479 DR+
514 L X-202,626 Y+172,089
515 L X-205 Y+170 R0
516 L Z+50 FMAX
517 L X-90 Y+120 FMAX
518 L Z-5 FMAX
519 L Z-14 F500
520 L X-87 Y+119 RL F764
521 L X-86
522 CC X-86 Y+120
523 C X-85 Y+120 DR+
524 CC X-90 Y+120
525 C X-95 Y+120 DR+
526 CC X-90 Y+120
527 C X-85 Y+120 DR+
528 CC X-90 Y+120
529 C X-85,395 Y+121,947 DR+
530 CC X-90 Y+120
531 C X-95 Y+120 DR+
532 CC X-90 Y+120
533 C X-85 Y+120 DR+
534 CC X-90 Y+120
535 C X-85,395 Y+121,947 DR+
536 CC X-86,316 Y+121,558
537 C X-86,705 Y+122,479 DR+
538 L X-87,626 Y+122,089
539 L X-90 Y+120 R0
540 L Z+50 FMAX
541 L X+55 FMAX
542 L Z-5 FMAX
543 L Z-14 F500
544 L X+58 Y+119 RL F764
545 L X+59
546 CC X+59 Y+120
547 C X+60 Y+120 DR+
548 CC X+55 Y+120
549 C X+50 Y+120 DR+
550 CC X+55 Y+120
551 C X+60 Y+120 DR+
552 CC X+55 Y+120
553 C X+59,605 Y+121,947 DR+
554 CC X+55 Y+120
555 C X+50 Y+120 DR+
556 CC X+55 Y+120
557 C X+60 Y+120 DR+
558 CC X+55 Y+120
559 C X+59,605 Y+121,947 DR+
560 CC X+58,684 Y+121,558
561 C X+58,295 Y+122,479 DR+
562 L X+57,374 Y+122,089
563 L X+55 Y+120 R0
564 L Z+50 FMAX
565 L X+205 Y+170 FMAX
566 L Z-5 FMAX
567 L Z-14 F500
568 L X+208 Y+169 RL F764
569 L X+209
570 CC X+209 Y+170
571 C X+210 Y+170 DR+
572 CC X+205 Y+170
573 C X+200 Y+170 DR+
574 CC X+205 Y+170
575 C X+210 Y+170 DR+
576 CC X+205 Y+170
577 C X+209,605 Y+171,947 DR+
578 CC X+205 Y+170
579 C X+200 Y+170 DR+
580 CC X+205 Y+170
581 C X+210 Y+170 DR+
582 CC X+205 Y+170
583 C X+209,605 Y+171,947 DR+
584 CC X+208,684 Y+171,558
585 C X+208,295 Y+172,479 DR+
586 L X+207,374 Y+172,089
587 L X+205 Y+170 R0
588 L Z+50 FMAX
589 L Y-170 FMAX
590 L Z-5 FMAX
591 L Z-14 F500
592 L X+208 Y-171 RL F764
593 L X+209
594 CC X+209 Y-170
595 C X+210 Y-170 DR+
596 CC X+205 Y-170
597 C X+200 Y-170 DR+
598 CC X+205 Y-170
599 C X+210 Y-170 DR+
600 CC X+205 Y-170
601 C X+209,605 Y-168,053 DR+
602 CC X+205 Y-170
603 C X+200 Y-170 DR+
604 CC X+205 Y-170
605 C X+210 Y-170 DR+
606 CC X+205 Y-170
607 C X+209,605 Y-168,053 DR+
608 CC X+208,684 Y-168,442
609 C X+208,295 Y-167,521 DR+
610 L X+207,374 Y-167,911
611 L X+205 Y-170 R0
612 L Z+50 FMAX
613 L X+55 Y-120 FMAX
614 L Z-5 FMAX
615 L Z-14 F500
616 L X+58 Y-121 RL F764
617 L X+59
618 CC X+59 Y-120
619 C X+60 Y-120 DR+
620 CC X+55 Y-120
621 C X+50 Y-120 DR+
622 CC X+55 Y-120
623 C X+60 Y-120 DR+
624 CC X+55 Y-120
625 C X+59,605 Y-118,053 DR+
626 CC X+55 Y-120
627 C X+50 Y-120 DR+
628 CC X+55 Y-120
629 C X+60 Y-120 DR+
630 CC X+55 Y-120
631 C X+59,605 Y-118,053 DR+
632 CC X+58,684 Y-118,442
633 C X+58,295 Y-117,521 DR+
634 L X+57,374 Y-117,911
635 L X+55 Y-120 R0
636 L Z+50 FMAX
637 L X-90 FMAX
638 L Z-5 FMAX
639 L Z-14 F500
640 L X-87 Y-121 RL F764
641 L X-86
642 CC X-86 Y-120
643 C X-85 Y-120 DR+
644 CC X-90 Y-120
645 C X-95 Y-120 DR+
646 CC X-90 Y-120
647 C X-85 Y-120 DR+
648 CC X-90 Y-120
649 C X-85,395 Y-118,053 DR+
650 CC X-90 Y-120
651 C X-95 Y-120 DR+
652 CC X-90 Y-120
653 C X-85 Y-120 DR+
654 CC X-90 Y-120
655 C X-85,395 Y-118,053 DR+
656 CC X-86,316 Y-118,442
657 C X-86,705 Y-117,521 DR+
658 L X-87,626 Y-117,911
659 L X-90 Y-120 R0
660 L Z+50 FMAX
661 L X-205 Y-170 FMAX
662 L Z-5 FMAX
663 L Z-14 F500
664 L X-202 Y-171 RL F764
665 L X-201
666 CC X-201 Y-170
667 C X-200 Y-170 DR+
668 CC X-205 Y-170
669 C X-210 Y-170 DR+
670 CC X-205 Y-170
671 C X-200 Y-170 DR+
672 CC X-205 Y-170
673 C X-200,395 Y-168,053 DR+
674 CC X-205 Y-170
675 C X-210 Y-170 DR+
676 CC X-205 Y-170
677 C X-200 Y-170 DR+
678 CC X-205 Y-170
679 C X-200,395 Y-168,053 DR+
680 CC X-201,316 Y-168,442
681 C X-201,705 Y-167,521 DR+
682 L X-202,626 Y-167,911
683 L X-205 Y-170 R0
684 L Z+50 FMAX
685 M78
686 M5
687 L Z-1 FMAX M91
688 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
689 ; CORRECTION USURE GAUCHE
690 ; SUREP R 0. SUREP Z 0.
691 TOOL CALL 1 Z S6000 DR-2,5
692 TOOL DEF 22
693 L X-205 Y+170 FMAX M3
694 L Z+50 FMAX
695 L Z+2 FMAX
696 L Z-2,5 F800
697 L X-198,5 Y+169,5 RL F1200
698 L X-198
699 CC X-198 Y+170
700 C X-197,5 Y+170 DR+
701 CC X-205 Y+170
702 C X-212,5 Y+170 DR+
703 CC X-205 Y+170
704 C X-197,5 Y+170 DR+
705 CC X-205 Y+170
706 C X-197,765 Y+171,976 DR+
707 CC X-198,247 Y+171,845
708 C X-198,379 Y+172,327 DR+
709 L X-198,862 Y+172,195
710 L X-205 Y+170 R0
711 L Z+50 FMAX
712 L X-90 Y+120 FMAX
713 L Z+2 FMAX
714 L Z-2,5 F800
715 L X-83,5 Y+119,5 RL F1200
716 L X-83
717 CC X-83 Y+120
718 C X-82,5 Y+120 DR+
719 CC X-90 Y+120
720 C X-97,5 Y+120 DR+
721 CC X-90 Y+120
722 C X-82,5 Y+120 DR+
723 CC X-90 Y+120
724 C X-82,765 Y+121,976 DR+
725 CC X-83,247 Y+121,845
726 C X-83,379 Y+122,327 DR+
727 L X-83,862 Y+122,195
728 L X-90 Y+120 R0
729 L Z+50 FMAX
730 L X+55 FMAX
731 L Z+2 FMAX
732 L Z-2,5 F800
733 L X+61,5 Y+119,5 RL F1200
734 L X+62
735 CC X+62 Y+120
736 C X+62,5 Y+120 DR+
737 CC X+55 Y+120
738 C X+47,5 Y+120 DR+
739 CC X+55 Y+120
740 C X+62,5 Y+120 DR+
741 CC X+55 Y+120
742 C X+62,235 Y+121,976 DR+
743 CC X+61,753 Y+121,845
744 C X+61,621 Y+122,327 DR+
745 L X+61,138 Y+122,195
746 L X+55 Y+120 R0
747 L Z+50 FMAX
748 L X+205 Y+170 FMAX
749 L Z+2 FMAX
750 L Z-2,5 F800
751 L X+211,5 Y+169,5 RL F1200
752 L X+212
753 CC X+212 Y+170
754 C X+212,5 Y+170 DR+
755 CC X+205 Y+170
756 C X+197,5 Y+170 DR+
757 CC X+205 Y+170
758 C X+212,5 Y+170 DR+
759 CC X+205 Y+170
760 C X+212,235 Y+171,976 DR+
761 CC X+211,753 Y+171,845
762 C X+211,621 Y+172,327 DR+
763 L X+211,138 Y+172,195
764 L X+205 Y+170 R0
765 L Z+50 FMAX
766 L Y-170 FMAX
767 L Z+2 FMAX
768 L Z-2,5 F800
769 L X+211,5 Y-170,5 RL F1200
770 L X+212
771 CC X+212 Y-170
772 C X+212,5 Y-170 DR+
773 CC X+205 Y-170
774 C X+197,5 Y-170 DR+
775 CC X+205 Y-170
776 C X+212,5 Y-170 DR+
777 CC X+205 Y-170
778 C X+212,235 Y-168,024 DR+
779 CC X+211,753 Y-168,155
780 C X+211,621 Y-167,673 DR+
781 L X+211,138 Y-167,805
782 L X+205 Y-170 R0
783 L Z+50 FMAX
784 L X+55 Y-120 FMAX
785 L Z+2 FMAX
786 L Z-2,5 F800
787 L X+61,5 Y-120,5 RL F1200
788 L X+62
789 CC X+62 Y-120
790 C X+62,5 Y-120 DR+
791 CC X+55 Y-120
792 C X+47,5 Y-120 DR+
793 CC X+55 Y-120
794 C X+62,5 Y-120 DR+
795 CC X+55 Y-120
796 C X+62,235 Y-118,024 DR+
797 CC X+61,753 Y-118,155
798 C X+61,621 Y-117,673 DR+
799 L X+61,138 Y-117,805
800 L X+55 Y-120 R0
801 L Z+50 FMAX
802 L X-90 FMAX
803 L Z+2 FMAX
804 L Z-2,5 F800
805 L X-83,5 Y-120,5 RL F1200
806 L X-83
807 CC X-83 Y-120
808 C X-82,5 Y-120 DR+
809 CC X-90 Y-120
810 C X-97,5 Y-120 DR+
811 CC X-90 Y-120
812 C X-82,5 Y-120 DR+
813 CC X-90 Y-120
814 C X-82,765 Y-118,024 DR+
815 CC X-83,247 Y-118,155
816 C X-83,379 Y-117,673 DR+
817 L X-83,862 Y-117,805
818 L X-90 Y-120 R0
819 L Z+50 FMAX
820 L X-205 Y-170 FMAX
821 L Z+2 FMAX
822 L Z-2,5 F800
823 L X-198,5 Y-170,5 RL F1200
824 L X-198
825 CC X-198 Y-170
826 C X-197,5 Y-170 DR+
827 CC X-205 Y-170
828 C X-212,5 Y-170 DR+
829 CC X-205 Y-170
830 C X-197,5 Y-170 DR+
831 CC X-205 Y-170
832 C X-197,765 Y-168,024 DR+
833 CC X-198,247 Y-168,155
834 C X-198,379 Y-167,673 DR+
835 L X-198,862 Y-167,805
836 L X-205 Y-170 R0
837 L Z+50 FMAX
838 M5
839 L Z-1 FMAX M91
840 ; T22 P15323501 XC48 POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
841 ; CORRECTION AUCUNE
842 ; SUREP R 0. SUREP Z 0.
843 TOOL CALL 22 Z S3183 DR+0
844 TOOL DEF 1
845 L X+119,068 Y-9,101 FMAX M3
846 L Z+50 FMAX M25
847 L Z+2 FMAX
848 L Z+0,5 F500
849 CC X+125 Y-10
850 CP IPA-180 Z-0,158 DR-
851 CC X+125 Y-10
852 CP IPA-180 Z-0,816 DR-
853 CC X+125 Y-10
854 CP IPA-180 Z-1,474 DR-
855 CC X+125 Y-10
856 CP IPA-180 Z-2,133 DR-
857 CC X+125 Y-10
858 CP IPA-180 Z-2,791 DR-
859 CC X+125 Y-10
860 CP IPA-180 Z-3,449 DR-
861 CC X+125 Y-10
862 CP IPA-180 Z-4,107 DR-
863 CC X+125 Y-10
864 CP IPA-180 Z-4,766 DR-
865 CC X+125 Y-10
866 CP IPA-180 Z-5,424 DR-
867 CC X+125 Y-10
868 CP IPA-180 Z-6,082 DR-
869 CC X+125 Y-10
870 CP IPA-180 Z-6,74 DR-
871 CC X+125 Y-10
872 CP IPA-180 Z-7,399 DR-
873 CC X+125 Y-10
874 CP IPA-180 Z-8,057 DR-
875 CC X+125 Y-10
876 CP IPA-180 Z-8,715 DR-
877 CC X+125 Y-10
878 CP IPA-180 Z-9,373 DR-
879 CC X+125 Y-10
880 CP IPA-180 Z-10,032 DR-
881 CC X+125 Y-10
882 CP IPA-264,745 Z-11 DR-
883 L X+122,5 Y-52,5 F700
884 L X+127,5
885 L Y+32,5
886 L X+122,5
887 L Y-52,5
888 L X+118 Y-57
889 L X+132
890 L Y+37
891 L X+118
892 L Y-57
893 L X+109 Y-66
894 L X+141
895 L Y+46
896 L X+109
897 L Y-66
898 L X+100 Y-75
899 L X+150
900 L Y+55
901 L X+100
902 L Y-75
903 L X+97 Y-84
904 L X+153
905 CC X+153 Y-78
906 C X+159 Y-78 DR+
907 L Y+58
908 CC X+153 Y+58
909 C X+153 Y+64 DR+
910 L X+97
911 CC X+97 Y+58
912 C X+91 Y+57,997 DR+
913 L Y-78,003
914 CC X+97 Y-78
915 C X+97 Y-84 DR+
916 L Z+10 FMAX
917 L X+119,068 Y-9,101 FMAX
918 L Z-9 FMAX
919 L Z-10,5 F500
920 CC X+125 Y-10
921 CP IPA-180 Z-11,158 DR-
922 CC X+125 Y-10
923 CP IPA-180 Z-11,816 DR-
924 CC X+125 Y-10
925 CP IPA-180 Z-12,474 DR-
926 CC X+125 Y-10
927 CP IPA-180 Z-13,133 DR-
928 CC X+125 Y-10
929 CP IPA-180 Z-13,791 DR-
930 CC X+125 Y-10
931 CP IPA-180 Z-14,449 DR-
932 CC X+125 Y-10
933 CP IPA-180 Z-15,108 DR-
934 CC X+125 Y-10
935 CP IPA-180 Z-15,766 DR-
936 CC X+125 Y-10
937 CP IPA-180 Z-16,424 DR-
938 CC X+125 Y-10
939 CP IPA-180 Z-17,082 DR-
940 CC X+125 Y-10
941 CP IPA-180 Z-17,741 DR-
942 CC X+125 Y-10
943 CP IPA-180 Z-18,399 DR-
944 CC X+125 Y-10
945 CP IPA-180 Z-19,057 DR-
946 CC X+125 Y-10
947 CP IPA-180 Z-19,715 DR-
948 CC X+125 Y-10
949 CP IPA-180 Z-20,374 DR-
950 CC X+125 Y-10
951 CP IPA-180 Z-21,032 DR-
952 CC X+125 Y-10
953 CP IPA-264,745 Z-22 DR-
954 L X+122,5 Y-52,5 F700
955 L X+127,5
956 L Y+32,5
957 L X+122,5
958 L Y-52,5
959 L X+118 Y-57
960 L X+132
961 L Y+37
962 L X+118
963 L Y-57
964 L X+109 Y-66
965 L X+141
966 L Y+46
967 L X+109
968 L Y-66
969 L X+100 Y-75
970 L X+150
971 L Y+55
972 L X+100
973 L Y-75
974 L X+97 Y-84
975 L X+153
976 CC X+153 Y-78
977 C X+159 Y-78 DR+
978 L Y+58
979 CC X+153 Y+58
980 C X+153 Y+64 DR+
981 L X+97
982 CC X+97 Y+58
983 C X+91 Y+57,997 DR+
984 L Y-78,003
985 CC X+97 Y-78
986 C X+97 Y-84 DR+
987 L Z+10 FMAX
988 L X+119,068 Y-9,101 FMAX
989 L Z-20 FMAX
990 L Z-21,5 F500
991 CC X+125 Y-10
992 CP IPA-180 Z-22,158 DR-
993 CC X+125 Y-10
994 CP IPA-180 Z-22,816 DR-
995 CC X+125 Y-10
996 CP IPA-180 Z-23,474 DR-
997 CC X+125 Y-10
998 CP IPA-180 Z-24,133 DR-
999 CC X+125 Y-10
1000 CP IPA-180 Z-24,791 DR-
1001 CC X+125 Y-10
1002 CP IPA-180 Z-25,449 DR-
1003 CC X+125 Y-10
1004 CP IPA-180 Z-26,108 DR-
1005 CC X+125 Y-10
1006 CP IPA-180 Z-26,766 DR-
1007 CC X+125 Y-10
1008 CP IPA-180 Z-27,424 DR-
1009 CC X+125 Y-10
1010 CP IPA-180 Z-28,082 DR-
1011 CC X+125 Y-10
1012 CP IPA-180 Z-28,741 DR-
1013 CC X+125 Y-10
1014 CP IPA-180 Z-29,399 DR-
1015 CC X+125 Y-10
1016 CP IPA-180 Z-30,057 DR-
1017 CC X+125 Y-10
1018 CP IPA-180 Z-30,715 DR-
1019 CC X+125 Y-10
1020 CP IPA-180 Z-31,374 DR-
1021 CC X+125 Y-10
1022 CP IPA-180 Z-32,032 DR-
1023 CC X+125 Y-10
1024 CP IPA-264,745 Z-33 DR-
1025 L X+122,5 Y-52,5 F700
1026 L X+127,5
1027 L Y+32,5
1028 L X+122,5
1029 L Y-52,5
1030 L X+118 Y-57
1031 L X+132
1032 L Y+37
1033 L X+118
1034 L Y-57
1035 L X+109 Y-66
1036 L X+141
1037 L Y+46
1038 L X+109
1039 L Y-66
1040 L X+100 Y-75
1041 L X+150
1042 L Y+55
1043 L X+100
1044 L Y-75
1045 L X+97 Y-84
1046 L X+153
1047 CC X+153 Y-78
1048 C X+159 Y-78 DR+
1049 L Y+58
1050 CC X+153 Y+58
1051 C X+153 Y+64 DR+
1052 L X+97
1053 CC X+97 Y+58
1054 C X+91 Y+57,997 DR+
1055 L Y-78,003
1056 CC X+97 Y-78
1057 C X+97 Y-84 DR+
1058 L X+125 Y-10
1059 TOOL CALL 22 Z S3183 DR-6
1060 L X+93,4 Y-8,803 Z-33 RL
1061 L X+92,2
1062 CC X+92,2 Y-10,003
1063 C X+91 Y-10,003 DR+
1064 L Y-78,003
1065 CC X+97 Y-78
1066 C X+97 Y-84 DR+
1067 L X+153
1068 CC X+153 Y-78
1069 C X+159 Y-78 DR+
1070 L Y+58
1071 CC X+153 Y+58
1072 C X+153 Y+64 DR+
1073 L X+97
1074 CC X+97 Y+58
1075 C X+91 Y+57,997 DR+
1076 L Y-12,003
1077 L Y-78,003
1078 CC X+97 Y-78
1079 C X+97 Y-84 DR+
1080 L X+153
1081 CC X+153 Y-78
1082 C X+159 Y-78 DR+
1083 L Y+58
1084 CC X+153 Y+58
1085 C X+153 Y+64 DR+
1086 L X+97
1087 CC X+97 Y+58
1088 C X+91 Y+57,997 DR+
1089 L Y-12,003
1090 CC X+92,2 Y-12,003
1091 C X+92,2 Y-13,203 DR+
1092 L X+93,4
1093 L X+125 Y-10 R0
1094 L Z+50 FMAX
1095 M78
1096 M5
1097 L Z-1 FMAX M91
1098 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1099 ; CORRECTION USURE GAUCHE
1100 ; SUREP R 0. SUREP Z 0.
1101 TOOL CALL 1 Z S6000 DR-2,5
1102 L X+125 Y-10 FMAX M3
1103 L Z+50 FMAX
1104 L Z+2 FMAX
1105 L Z-2,5 F800
1106 L X+88,5 Y-9,504 RL F1200
1107 L X+88
1108 CC X+88 Y-10,004
1109 C X+87,5 Y-10,004 DR+
1110 L Y-78,004
1111 CC X+97 Y-78
1112 C X+97 Y-87,5 DR+
1113 L X+153
1114 CC X+153 Y-78
1115 C X+162,5 Y-78 DR+
1116 L Y+58
1117 CC X+153 Y+58
1118 C X+153 Y+67,5 DR+
1119 L X+97
1120 CC X+97 Y+58
1121 C X+87,5 Y+57,996 DR+
1122 L Y-12,004
1123 CC X+88 Y-12,004
1124 C X+88 Y-12,504 DR+
1125 L X+88,5
1126 L X+125 Y-10 R0
1127 L Z+50 FMAX
1128 M5
1129 L Z-1 FMAX M91
1130 L Y-1 FMAX M91
1131 M30
1132 END PGM REP03-20981-OP10-SEMELLE INF MM
