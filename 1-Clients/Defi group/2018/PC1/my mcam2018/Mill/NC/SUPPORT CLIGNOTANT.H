0 BEGIN PGM SUPPORT CLIGNOTANT MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - SUPPORT CLIGNOTANT
4 ; PROG-CN DU 25-09-20 A 10:30
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T24 FRAISE DIA 12 PAST FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
9 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
10 ; T9 DIA 9.8 VC 40 FORET DIAM=9.8 2 DENTS A=118. ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-2*
15 ; T24 FRAISE DIA 12 PAST FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
16 ; CORRECTION AUCUNE
17 ; SUREP Z 0.
18 TOOL CALL 24 Z S11000 DR+0
19 TOOL DEF 1
20 L X-40,7 Y+12,398 FMAX M3
21 L Z+50 FMAX M25
22 L Z+19 FMAX
23 L Z+15,608 F6000
24 L X+34,7
25 CC X+34,7 Y+8,265
26 C X+34,7 Y+4,133 DR-
27 L X-34,7
28 CC X-34,7 Y+0
29 C X-34,7 Y-4,133 DR+
30 L X+34,7
31 CC X+34,7 Y-8,265
32 C X+34,7 Y-12,398 DR-
33 L X-40,7
34 L Z+17,608 FMAX
35 L Y+12,398 FMAX
36 L Z+14,217
37 L X+34,7
38 CC X+34,7 Y+8,265
39 C X+34,7 Y+4,133 DR-
40 L X-34,7
41 CC X-34,7 Y+0
42 C X-34,7 Y-4,133 DR+
43 L X+34,7
44 CC X+34,7 Y-8,265
45 C X+34,7 Y-12,398 DR-
46 L X-40,7
47 L Z+16,217 FMAX
48 L Y+12,398 FMAX
49 L Z+12,825
50 L X+34,7
51 CC X+34,7 Y+8,265
52 C X+34,7 Y+4,133 DR-
53 L X-34,7
54 CC X-34,7 Y+0
55 C X-34,7 Y-4,133 DR+
56 L X+34,7
57 CC X+34,7 Y-8,265
58 C X+34,7 Y-12,398 DR-
59 L X-40,7
60 L Z+14,825 FMAX
61 L Y+12,398 FMAX
62 L Z+11,433
63 L X+34,7
64 CC X+34,7 Y+8,265
65 C X+34,7 Y+4,133 DR-
66 L X-34,7
67 CC X-34,7 Y+0
68 C X-34,7 Y-4,133 DR+
69 L X+34,7
70 CC X+34,7 Y-8,265
71 C X+34,7 Y-12,398 DR-
72 L X-40,7
73 L Z+13,433 FMAX
74 L Y+12,398 FMAX
75 L Z+10,042
76 L X+34,7
77 CC X+34,7 Y+8,265
78 C X+34,7 Y+4,133 DR-
79 L X-34,7
80 CC X-34,7 Y+0
81 C X-34,7 Y-4,133 DR+
82 L X+34,7
83 CC X+34,7 Y-8,265
84 C X+34,7 Y-12,398 DR-
85 L X-40,7
86 L Z+12,042 FMAX
87 L Y+12,398 FMAX
88 L Z+8,65
89 L X+34,7
90 CC X+34,7 Y+8,265
91 C X+34,7 Y+4,133 DR-
92 L X-34,7
93 CC X-34,7 Y+0
94 C X-34,7 Y-4,133 DR+
95 L X+34,7
96 CC X+34,7 Y-8,265
97 C X+34,7 Y-12,398 DR-
98 L X-40,7
99 L Z+10 FMAX
100 L Z+10,65 FMAX
101 L Y+12,398 FMAX
102 L Z+7,258
103 L X+34,7
104 CC X+34,7 Y+8,265
105 C X+34,7 Y+4,133 DR-
106 L X-34,7
107 CC X-34,7 Y+0
108 C X-34,7 Y-4,133 DR+
109 L X+34,7
110 CC X+34,7 Y-8,265
111 C X+34,7 Y-12,398 DR-
112 L X-40,7
113 L Z+10 FMAX
114 L Y+12,398 FMAX
115 L Z+9,258 FMAX
116 L Z+5,867
117 L X+34,7
118 CC X+34,7 Y+8,265
119 C X+34,7 Y+4,133 DR-
120 L X-34,7
121 CC X-34,7 Y+0
122 C X-34,7 Y-4,133 DR+
123 L X+34,7
124 CC X+34,7 Y-8,265
125 C X+34,7 Y-12,398 DR-
126 L X-40,7
127 L Z+10 FMAX
128 L Y+12,398 FMAX
129 L Z+7,867 FMAX
130 L Z+4,475
131 L X+34,7
132 CC X+34,7 Y+8,265
133 C X+34,7 Y+4,133 DR-
134 L X-34,7
135 CC X-34,7 Y+0
136 C X-34,7 Y-4,133 DR+
137 L X+34,7
138 CC X+34,7 Y-8,265
139 C X+34,7 Y-12,398 DR-
140 L X-40,7
141 L Z+10 FMAX
142 L Y+12,398 FMAX
143 L Z+6,475 FMAX
144 L Z+3,083
145 L X+34,7
146 CC X+34,7 Y+8,265
147 C X+34,7 Y+4,133 DR-
148 L X-34,7
149 CC X-34,7 Y+0
150 C X-34,7 Y-4,133 DR+
151 L X+34,7
152 CC X+34,7 Y-8,265
153 C X+34,7 Y-12,398 DR-
154 L X-40,7
155 L Z+10 FMAX
156 L Y+12,398 FMAX
157 L Z+5,083 FMAX
158 L Z+1,692
159 L X+34,7
160 CC X+34,7 Y+8,265
161 C X+34,7 Y+4,133 DR-
162 L X-34,7
163 CC X-34,7 Y+0
164 C X-34,7 Y-4,133 DR+
165 L X+34,7
166 CC X+34,7 Y-8,265
167 C X+34,7 Y-12,398 DR-
168 L X-40,7
169 L Z+10 FMAX
170 L Y+12,398 FMAX
171 L Z+3,692 FMAX
172 L Z+0,3
173 L X+34,7
174 CC X+34,7 Y+8,265
175 C X+34,7 Y+4,133 DR-
176 L X-34,7
177 CC X-34,7 Y+0
178 C X-34,7 Y-4,133 DR+
179 L X+34,7
180 CC X+34,7 Y-8,265
181 C X+34,7 Y-12,398 DR-
182 L X-40,7
183 L Z+10 FMAX
184 L Y+12,398 FMAX
185 L Z+2,3 FMAX
186 L Z+0
187 L X+34,7
188 CC X+34,7 Y+8,265
189 C X+34,7 Y+4,133 DR-
190 L X-34,7
191 CC X-34,7 Y+0
192 C X-34,7 Y-4,133 DR+
193 L X+34,7
194 CC X+34,7 Y-8,265
195 C X+34,7 Y-12,398 DR-
196 L X-40,7
197 L Z+50 FMAX
198 ; CORRECTION USURE GAUCHE
199 ; SUREP R 0. SUREP Z 0.
200 TOOL CALL 24 Z S11000 DR-6
201 L X-1,776 Y+27,564 Z+50 FMAX
202 L Z+2 FMAX
203 L Z-1
204 L X+2,852 Y+22,313 RL
205 CC X+5,853 Y+24,957
206 C X+5,601 Y+20,965 DR+
207 L X+21,318 Y+19,974
208 CC X+20,5 Y+7
209 C X+33,5 Y+7 DR-
210 L Y-7
211 CC X+20,5 Y-7
212 C X+21,318 Y-19,974 DR-
213 L X-10,115 Y-21,956
214 CC X-11,5 Y+0
215 C X-10,115 Y+21,956 DR-
216 L X+7,597 Y+20,839
217 CC X+7,849 Y+24,832
218 C X+10,494 Y+21,831 DR+
219 L X+15,745 Y+26,459 R0
220 L X-1,776 Y+27,564
221 L Z-2
222 L X+2,852 Y+22,313 RL
223 CC X+5,853 Y+24,957
224 C X+5,601 Y+20,965 DR+
225 L X+21,318 Y+19,974
226 CC X+20,5 Y+7
227 C X+33,5 Y+7 DR-
228 L Y-7
229 CC X+20,5 Y-7
230 C X+21,318 Y-19,974 DR-
231 L X-10,115 Y-21,956
232 CC X-11,5 Y+0
233 C X-10,115 Y+21,956 DR-
234 L X+7,597 Y+20,839
235 CC X+7,849 Y+24,832
236 C X+10,494 Y+21,831 DR+
237 L X+15,745 Y+26,459 R0
238 L X-1,776 Y+27,564
239 L Z-3
240 L X+2,852 Y+22,313 RL
241 CC X+5,853 Y+24,957
242 C X+5,601 Y+20,965 DR+
243 L X+21,318 Y+19,974
244 CC X+20,5 Y+7
245 C X+33,5 Y+7 DR-
246 L Y-7
247 CC X+20,5 Y-7
248 C X+21,318 Y-19,974 DR-
249 L X-10,115 Y-21,956
250 CC X-11,5 Y+0
251 C X-10,115 Y+21,956 DR-
252 L X+7,597 Y+20,839
253 CC X+7,849 Y+24,832
254 C X+10,494 Y+21,831 DR+
255 L X+15,745 Y+26,459 R0
256 L X-1,776 Y+27,564
257 L Z-4
258 L X+2,852 Y+22,313 RL
259 CC X+5,853 Y+24,957
260 C X+5,601 Y+20,965 DR+
261 L X+21,318 Y+19,974
262 CC X+20,5 Y+7
263 C X+33,5 Y+7 DR-
264 L Y-7
265 CC X+20,5 Y-7
266 C X+21,318 Y-19,974 DR-
267 L X-10,115 Y-21,956
268 CC X-11,5 Y+0
269 C X-10,115 Y+21,956 DR-
270 L X+7,597 Y+20,839
271 CC X+7,849 Y+24,832
272 C X+10,494 Y+21,831 DR+
273 L X+15,745 Y+26,459 R0
274 L X-1,776 Y+27,564
275 L Z-5
276 L X+2,852 Y+22,313 RL
277 CC X+5,853 Y+24,957
278 C X+5,601 Y+20,965 DR+
279 L X+21,318 Y+19,974
280 CC X+20,5 Y+7
281 C X+33,5 Y+7 DR-
282 L Y-7
283 CC X+20,5 Y-7
284 C X+21,318 Y-19,974 DR-
285 L X-10,115 Y-21,956
286 CC X-11,5 Y+0
287 C X-10,115 Y+21,956 DR-
288 L X+7,597 Y+20,839
289 CC X+7,849 Y+24,832
290 C X+10,494 Y+21,831 DR+
291 L X+15,745 Y+26,459 R0
292 L X-1,776 Y+27,564
293 L Z-6
294 L X+2,852 Y+22,313 RL
295 CC X+5,853 Y+24,957
296 C X+5,601 Y+20,965 DR+
297 L X+21,318 Y+19,974
298 CC X+20,5 Y+7
299 C X+33,5 Y+7 DR-
300 L Y-7
301 CC X+20,5 Y-7
302 C X+21,318 Y-19,974 DR-
303 L X-10,115 Y-21,956
304 CC X-11,5 Y+0
305 C X-10,115 Y+21,956 DR-
306 L X+7,597 Y+20,839
307 CC X+7,849 Y+24,832
308 C X+10,494 Y+21,831 DR+
309 L X+15,745 Y+26,459 R0
310 L X-1,776 Y+27,564
311 L Z-7
312 L X+2,852 Y+22,313 RL
313 CC X+5,853 Y+24,957
314 C X+5,601 Y+20,965 DR+
315 L X+21,318 Y+19,974
316 CC X+20,5 Y+7
317 C X+33,5 Y+7 DR-
318 L Y-7
319 CC X+20,5 Y-7
320 C X+21,318 Y-19,974 DR-
321 L X-10,115 Y-21,956
322 CC X-11,5 Y+0
323 C X-10,115 Y+21,956 DR-
324 L X+7,597 Y+20,839
325 CC X+7,849 Y+24,832
326 C X+10,494 Y+21,831 DR+
327 L X+15,745 Y+26,459 R0
328 L X-1,776 Y+27,564
329 L Z-8
330 L X+2,852 Y+22,313 RL
331 CC X+5,853 Y+24,957
332 C X+5,601 Y+20,965 DR+
333 L X+21,318 Y+19,974
334 CC X+20,5 Y+7
335 C X+33,5 Y+7 DR-
336 L Y-7
337 CC X+20,5 Y-7
338 C X+21,318 Y-19,974 DR-
339 L X-10,115 Y-21,956
340 CC X-11,5 Y+0
341 C X-10,115 Y+21,956 DR-
342 L X+7,597 Y+20,839
343 CC X+7,849 Y+24,832
344 C X+10,494 Y+21,831 DR+
345 L X+15,745 Y+26,459 R0
346 L X-1,776 Y+27,564
347 L Z-9
348 L X+2,852 Y+22,313 RL
349 CC X+5,853 Y+24,957
350 C X+5,601 Y+20,965 DR+
351 L X+21,318 Y+19,974
352 CC X+20,5 Y+7
353 C X+33,5 Y+7 DR-
354 L Y-7
355 CC X+20,5 Y-7
356 C X+21,318 Y-19,974 DR-
357 L X-10,115 Y-21,956
358 CC X-11,5 Y+0
359 C X-10,115 Y+21,956 DR-
360 L X+7,597 Y+20,839
361 CC X+7,849 Y+24,832
362 C X+10,494 Y+21,831 DR+
363 L X+15,745 Y+26,459 R0
364 L X-1,776 Y+27,564
365 L X+2,852 Y+22,313 RL
366 CC X+5,853 Y+24,957
367 C X+5,601 Y+20,965 DR+
368 L X+21,318 Y+19,974
369 CC X+20,5 Y+7
370 C X+33,5 Y+7 DR-
371 L Y-7
372 CC X+20,5 Y-7
373 C X+21,318 Y-19,974 DR-
374 L X-10,115 Y-21,956
375 CC X-11,5 Y+0
376 C X-10,115 Y+21,956 DR-
377 L X+7,597 Y+20,839
378 CC X+7,849 Y+24,832
379 C X+10,494 Y+21,831 DR+
380 L X+15,745 Y+26,459 R0
381 L X-1,776 Y+27,564
382 L X+2,852 Y+22,313 RL
383 CC X+5,853 Y+24,957
384 C X+5,601 Y+20,965 DR+
385 L X+21,318 Y+19,974
386 CC X+20,5 Y+7
387 C X+33,5 Y+7 DR-
388 L Y-7
389 CC X+20,5 Y-7
390 C X+21,318 Y-19,974 DR-
391 L X-10,115 Y-21,956
392 CC X-11,5 Y+0
393 C X-10,115 Y+21,956 DR-
394 L X+7,597 Y+20,839
395 CC X+7,849 Y+24,832
396 C X+10,494 Y+21,831 DR+
397 L X+15,745 Y+26,459 R0
398 L Z+50 FMAX
399 ; CORRECTION USURE GAUCHE
400 ; SUREP R 0. SUREP Z 0.
401 L X-1,886 Y+25,817 FMAX
402 L Z+2 FMAX
403 L Z-1
404 L X+2,742 Y+20,566 RL
405 CC X+5,743 Y+23,211
406 C X+5,491 Y+19,219 DR+
407 L X+21,208 Y+18,228
408 CC X+20,5 Y+7
409 C X+31,75 Y+7 DR-
410 L Y-7
411 CC X+20,5 Y-7
412 C X+21,208 Y-18,228 DR-
413 L X-10,226 Y-20,21
414 CC X-11,5 Y+0
415 C X-10,226 Y+20,21 DR-
416 L X+7,487 Y+19,093
417 CC X+7,739 Y+23,085
418 C X+10,384 Y+20,084 DR+
419 L X+15,635 Y+24,713 R0
420 L X-1,886 Y+25,817
421 L Z-2
422 L X+2,742 Y+20,566 RL
423 CC X+5,743 Y+23,211
424 C X+5,491 Y+19,219 DR+
425 L X+21,208 Y+18,228
426 CC X+20,5 Y+7
427 C X+31,75 Y+7 DR-
428 L Y-7
429 CC X+20,5 Y-7
430 C X+21,208 Y-18,228 DR-
431 L X-10,226 Y-20,21
432 CC X-11,5 Y+0
433 C X-10,226 Y+20,21 DR-
434 L X+7,487 Y+19,093
435 CC X+7,739 Y+23,085
436 C X+10,384 Y+20,084 DR+
437 L X+15,635 Y+24,713 R0
438 L X-1,886 Y+25,817
439 L Z-3
440 L X+2,742 Y+20,566 RL
441 CC X+5,743 Y+23,211
442 C X+5,491 Y+19,219 DR+
443 L X+21,208 Y+18,228
444 CC X+20,5 Y+7
445 C X+31,75 Y+7 DR-
446 L Y-7
447 CC X+20,5 Y-7
448 C X+21,208 Y-18,228 DR-
449 L X-10,226 Y-20,21
450 CC X-11,5 Y+0
451 C X-10,226 Y+20,21 DR-
452 L X+7,487 Y+19,093
453 CC X+7,739 Y+23,085
454 C X+10,384 Y+20,084 DR+
455 L X+15,635 Y+24,713 R0
456 L X-1,886 Y+25,817
457 L Z-4
458 L X+2,742 Y+20,566 RL
459 CC X+5,743 Y+23,211
460 C X+5,491 Y+19,219 DR+
461 L X+21,208 Y+18,228
462 CC X+20,5 Y+7
463 C X+31,75 Y+7 DR-
464 L Y-7
465 CC X+20,5 Y-7
466 C X+21,208 Y-18,228 DR-
467 L X-10,226 Y-20,21
468 CC X-11,5 Y+0
469 C X-10,226 Y+20,21 DR-
470 L X+7,487 Y+19,093
471 CC X+7,739 Y+23,085
472 C X+10,384 Y+20,084 DR+
473 L X+15,635 Y+24,713 R0
474 L X-1,886 Y+25,817
475 L Z-5
476 L X+2,742 Y+20,566 RL
477 CC X+5,743 Y+23,211
478 C X+5,491 Y+19,219 DR+
479 L X+21,208 Y+18,228
480 CC X+20,5 Y+7
481 C X+31,75 Y+7 DR-
482 L Y-7
483 CC X+20,5 Y-7
484 C X+21,208 Y-18,228 DR-
485 L X-10,226 Y-20,21
486 CC X-11,5 Y+0
487 C X-10,226 Y+20,21 DR-
488 L X+7,487 Y+19,093
489 CC X+7,739 Y+23,085
490 C X+10,384 Y+20,084 DR+
491 L X+15,635 Y+24,713 R0
492 L X-1,886 Y+25,817
493 L X+2,742 Y+20,566 RL
494 CC X+5,743 Y+23,211
495 C X+5,491 Y+19,219 DR+
496 L X+21,208 Y+18,228
497 CC X+20,5 Y+7
498 C X+31,75 Y+7 DR-
499 L Y-7
500 CC X+20,5 Y-7
501 C X+21,208 Y-18,228 DR-
502 L X-10,226 Y-20,21
503 CC X-11,5 Y+0
504 C X-10,226 Y+20,21 DR-
505 L X+7,487 Y+19,093
506 CC X+7,739 Y+23,085
507 C X+10,384 Y+20,084 DR+
508 L X+15,635 Y+24,713 R0
509 L X-1,886 Y+25,817
510 L X+2,742 Y+20,566 RL
511 CC X+5,743 Y+23,211
512 C X+5,491 Y+19,219 DR+
513 L X+21,208 Y+18,228
514 CC X+20,5 Y+7
515 C X+31,75 Y+7 DR-
516 L Y-7
517 CC X+20,5 Y-7
518 C X+21,208 Y-18,228 DR-
519 L X-10,226 Y-20,21
520 CC X-11,5 Y+0
521 C X-10,226 Y+20,21 DR-
522 L X+7,487 Y+19,093
523 CC X+7,739 Y+23,085
524 C X+10,384 Y+20,084 DR+
525 L X+15,635 Y+24,713 R0
526 L Z+50 FMAX
527 M78
528 M5
529 L Z-1 FMAX M91
530 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
531 TOOL CALL 1 Z S1856 DR+0
532 TOOL DEF 9
533 L X+0 Y+0 FMAX M3
534 L Z+50 FMAX M8
535 ;  POINTAGE-PERCAGE
536 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,7 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,7 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
537 L X+0 Y+0 FMAX M99
538 M9
539 M5
540 L Z-1 FMAX M91
541 ; T9 DIA 9.8 VC 40 FORET DIAM=9.8 2 DENTS A=118. ARS
542 TOOL CALL 9 Z S1600 DR+0
543 TOOL DEF 24
544 L X+0 Y+0 FMAX M3
545 L Z+50 FMAX M8
546 ;  POINTAGE-PERCAGE
547 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+20 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
548 L X+0 Y+0 FMAX M99
549 M9
550 M5
551 L Z-1 FMAX M91
552 L Y-1 FMAX M91
553 M30
554 END PGM SUPPORT CLIGNOTANT MM
