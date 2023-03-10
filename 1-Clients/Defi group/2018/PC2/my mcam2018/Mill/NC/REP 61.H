0 BEGIN PGM REP 61 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 61
4 ; PROG-CN DU 03-10-22 A 15:26
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T5 FO DIA 11.8 VC40 FORET DIAM=11.7 2 DENTS A=118. ARS
12 ; T12 ALESOIR DIA 12 CARB VC 15 ALESOIR DIAM=12. 5 DENTS ARS
13 ; T3 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
14 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
15 ; T21 CARBURE DIA 4.2 VC 40 DMF FORET DIAM=4.2 2 DENTS A=118. ARS
16 ; T25 DIA 6.8 VC 40 DMF OK FORET DIAM=6.8 2 DENTS A=118. ARS
17 ; FIN DE LISTE DES OUTILS
18 L R0 FMAX
19 L Z-1 FMAX M91
20 ; *GROUPE D'USINAGE-1*
21 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
22 TOOL CALL 1 Z S1856 DR+0
23 TOOL DEF 2
24 L X-63 Y+53 FMAX M3
25 L Z+50 FMAX M8
26 ;  POINTAGE-PERCAGE
27 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
28 L X-63 Y+53 FMAX M99
29 L X+63 FMAX M99
30 L Y-53 FMAX M99
31 L X-63 FMAX M99
32 L Z+50 FMAX
33 M9
34 M5
35 L Z-1 FMAX M91
36 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
37 TOOL CALL 2 Z S2000 DR+0
38 TOOL DEF 18
39 L X-63 Y+53 FMAX M3
40 L Z+50 FMAX M7
41 ;  DEBOURRAGE
42 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-82 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
43 L X-63 Y+53 FMAX M99
44 L X+63 FMAX M99
45 L Y-53 FMAX M99
46 L X-63 FMAX M99
47 L Z+50 FMAX
48 M9
49 M5
50 L Z-1 FMAX M91
51 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
52 ; CORRECTION AUCUNE
53 ; SUREP R 0. SUREP Z 0.
54 TOOL CALL 18 Z S1751 DR+0
55 TOOL DEF 1
56 L X-64,239 Y+53,845 FMAX M3
57 L Z+50 FMAX M25
58 L Z+2 FMAX
59 L Z+0,5 F500
60 CC X-63 Y+53
61 CP IPA-180 Z+0,17 DR-
62 CC X-63 Y+53
63 CP IPA-180 Z-0,159 DR-
64 CC X-63 Y+53
65 CP IPA-180 Z-0,488 DR-
66 CC X-63 Y+53
67 CP IPA-180 Z-0,818 DR-
68 CC X-63 Y+53
69 CP IPA-180 Z-1,148 DR-
70 CC X-63 Y+53
71 CP IPA-180 Z-1,477 DR-
72 CC X-63 Y+53
73 CP IPA-180 Z-1,807 DR-
74 CC X-63 Y+53
75 CP IPA-180 Z-2,136 DR-
76 CC X-63 Y+53
77 CP IPA-180 Z-2,466 DR-
78 CC X-63 Y+53
79 CP IPA-180 Z-2,795 DR-
80 CC X-63 Y+53
81 CP IPA-180 Z-3,125 DR-
82 CC X-63 Y+53
83 CP IPA-180 Z-3,454 DR-
84 CC X-63 Y+53
85 CP IPA-180 Z-3,784 DR-
86 CC X-63 Y+53
87 CP IPA-180 Z-4,113 DR-
88 CC X-63 Y+53
89 CP IPA-180 Z-4,443 DR-
90 CC X-63 Y+53
91 CP IPA-180 Z-4,772 DR-
92 CC X-63 Y+53
93 CP IPA-180 Z-5,101 DR-
94 CC X-63 Y+53
95 CP IPA-180 Z-5,431 DR-
96 CC X-63 Y+53
97 CP IPA-180 Z-5,761 DR-
98 CC X-63 Y+53
99 CP IPA-180 Z-6,09 DR-
100 CC X-63 Y+53
101 CP IPA-180 Z-6,419 DR-
102 CC X-63 Y+53
103 CP IPA-180 Z-6,749 DR-
104 CC X-63 Y+53
105 CP IPA-180 Z-7,079 DR-
106 CC X-63 Y+53
107 CP IPA-180 Z-7,409 DR-
108 CC X-63 Y+53
109 CP IPA-180 Z-7,739 DR-
110 CC X-63 Y+53
111 CP IPA-180 Z-8,068 DR-
112 CC X-63 Y+53
113 CP IPA-236,203 Z-8,5 DR-
114 L X-63,022 Y+50,5 F315
115 L X-62,978
116 CC X-63 Y+53
117 C X-62,978 Y+55,5 DR+
118 L X-63,022
119 L Z+10 FMAX
120 L X-64,239 Y+53,845 FMAX
121 L Z-6,5 FMAX
122 L Z-8 F500
123 CC X-63 Y+53
124 CP IPA-180 Z-8,329 DR-
125 CC X-63 Y+53
126 CP IPA-180 Z-8,659 DR-
127 CC X-63 Y+53
128 CP IPA-180 Z-8,989 DR-
129 CC X-63 Y+53
130 CP IPA-180 Z-9,318 DR-
131 CC X-63 Y+53
132 CP IPA-180 Z-9,648 DR-
133 CC X-63 Y+53
134 CP IPA-180 Z-9,977 DR-
135 CC X-63 Y+53
136 CP IPA-180 Z-10,307 DR-
137 CC X-63 Y+53
138 CP IPA-180 Z-10,636 DR-
139 CC X-63 Y+53
140 CP IPA-180 Z-10,965 DR-
141 CC X-63 Y+53
142 CP IPA-180 Z-11,295 DR-
143 CC X-63 Y+53
144 CP IPA-180 Z-11,625 DR-
145 CC X-63 Y+53
146 CP IPA-180 Z-11,954 DR-
147 CC X-63 Y+53
148 CP IPA-180 Z-12,284 DR-
149 CC X-63 Y+53
150 CP IPA-180 Z-12,613 DR-
151 CC X-63 Y+53
152 CP IPA-180 Z-12,942 DR-
153 CC X-63 Y+53
154 CP IPA-180 Z-13,272 DR-
155 CC X-63 Y+53
156 CP IPA-180 Z-13,602 DR-
157 CC X-63 Y+53
158 CP IPA-180 Z-13,931 DR-
159 CC X-63 Y+53
160 CP IPA-180 Z-14,261 DR-
161 CC X-63 Y+53
162 CP IPA-180 Z-14,59 DR-
163 CC X-63 Y+53
164 CP IPA-180 Z-14,919 DR-
165 CC X-63 Y+53
166 CP IPA-180 Z-15,249 DR-
167 CC X-63 Y+53
168 CP IPA-180 Z-15,579 DR-
169 CC X-63 Y+53
170 CP IPA-180 Z-15,909 DR-
171 CC X-63 Y+53
172 CP IPA-180 Z-16,239 DR-
173 CC X-63 Y+53
174 CP IPA-180 Z-16,568 DR-
175 CC X-63 Y+53
176 CP IPA-236,203 Z-17 DR-
177 L X-63,022 Y+50,5 F315
178 L X-62,978
179 CC X-63 Y+53
180 C X-62,978 Y+55,5 DR+
181 L X-63,022
182 L Z+50 FMAX
183 L X+64,239 Y+52,155 FMAX
184 L Z+2 FMAX
185 L Z+0,5 F500
186 CC X+63 Y+53
187 CP IPA-180 Z+0,17 DR-
188 CC X+63 Y+53
189 CP IPA-180 Z-0,159 DR-
190 CC X+63 Y+53
191 CP IPA-180 Z-0,488 DR-
192 CC X+63 Y+53
193 CP IPA-180 Z-0,818 DR-
194 CC X+63 Y+53
195 CP IPA-180 Z-1,148 DR-
196 CC X+63 Y+53
197 CP IPA-180 Z-1,477 DR-
198 CC X+63 Y+53
199 CP IPA-180 Z-1,807 DR-
200 CC X+63 Y+53
201 CP IPA-180 Z-2,136 DR-
202 CC X+63 Y+53
203 CP IPA-180 Z-2,466 DR-
204 CC X+63 Y+53
205 CP IPA-180 Z-2,795 DR-
206 CC X+63 Y+53
207 CP IPA-180 Z-3,125 DR-
208 CC X+63 Y+53
209 CP IPA-180 Z-3,454 DR-
210 CC X+63 Y+53
211 CP IPA-180 Z-3,784 DR-
212 CC X+63 Y+53
213 CP IPA-180 Z-4,113 DR-
214 CC X+63 Y+53
215 CP IPA-180 Z-4,443 DR-
216 CC X+63 Y+53
217 CP IPA-180 Z-4,772 DR-
218 CC X+63 Y+53
219 CP IPA-180 Z-5,101 DR-
220 CC X+63 Y+53
221 CP IPA-180 Z-5,431 DR-
222 CC X+63 Y+53
223 CP IPA-180 Z-5,761 DR-
224 CC X+63 Y+53
225 CP IPA-180 Z-6,09 DR-
226 CC X+63 Y+53
227 CP IPA-180 Z-6,419 DR-
228 CC X+63 Y+53
229 CP IPA-180 Z-6,749 DR-
230 CC X+63 Y+53
231 CP IPA-180 Z-7,079 DR-
232 CC X+63 Y+53
233 CP IPA-180 Z-7,409 DR-
234 CC X+63 Y+53
235 CP IPA-180 Z-7,739 DR-
236 CC X+63 Y+53
237 CP IPA-180 Z-8,068 DR-
238 CC X+63 Y+53
239 CP IPA-236,203 Z-8,5 DR-
240 L X+63,022 Y+55,5 F315
241 L X+62,978
242 CC X+63 Y+53
243 C X+62,978 Y+50,5 DR+
244 L X+63,022
245 L Z+10 FMAX
246 L X+64,239 Y+52,155 FMAX
247 L Z-6,5 FMAX
248 L Z-8 F500
249 CC X+63 Y+53
250 CP IPA-180 Z-8,329 DR-
251 CC X+63 Y+53
252 CP IPA-180 Z-8,659 DR-
253 CC X+63 Y+53
254 CP IPA-180 Z-8,989 DR-
255 CC X+63 Y+53
256 CP IPA-180 Z-9,318 DR-
257 CC X+63 Y+53
258 CP IPA-180 Z-9,648 DR-
259 CC X+63 Y+53
260 CP IPA-180 Z-9,977 DR-
261 CC X+63 Y+53
262 CP IPA-180 Z-10,307 DR-
263 CC X+63 Y+53
264 CP IPA-180 Z-10,636 DR-
265 CC X+63 Y+53
266 CP IPA-180 Z-10,965 DR-
267 CC X+63 Y+53
268 CP IPA-180 Z-11,295 DR-
269 CC X+63 Y+53
270 CP IPA-180 Z-11,625 DR-
271 CC X+63 Y+53
272 CP IPA-180 Z-11,954 DR-
273 CC X+63 Y+53
274 CP IPA-180 Z-12,284 DR-
275 CC X+63 Y+53
276 CP IPA-180 Z-12,613 DR-
277 CC X+63 Y+53
278 CP IPA-180 Z-12,942 DR-
279 CC X+63 Y+53
280 CP IPA-180 Z-13,272 DR-
281 CC X+63 Y+53
282 CP IPA-180 Z-13,602 DR-
283 CC X+63 Y+53
284 CP IPA-180 Z-13,931 DR-
285 CC X+63 Y+53
286 CP IPA-180 Z-14,261 DR-
287 CC X+63 Y+53
288 CP IPA-180 Z-14,59 DR-
289 CC X+63 Y+53
290 CP IPA-180 Z-14,919 DR-
291 CC X+63 Y+53
292 CP IPA-180 Z-15,249 DR-
293 CC X+63 Y+53
294 CP IPA-180 Z-15,579 DR-
295 CC X+63 Y+53
296 CP IPA-180 Z-15,909 DR-
297 CC X+63 Y+53
298 CP IPA-180 Z-16,239 DR-
299 CC X+63 Y+53
300 CP IPA-180 Z-16,568 DR-
301 CC X+63 Y+53
302 CP IPA-236,203 Z-17 DR-
303 L X+63,022 Y+55,5 F315
304 L X+62,978
305 CC X+63 Y+53
306 C X+62,978 Y+50,5 DR+
307 L X+63,022
308 L Z+50 FMAX
309 L X+64,239 Y-53,845 FMAX
310 L Z+2 FMAX
311 L Z+0,5 F500
312 CC X+63 Y-53
313 CP IPA-180 Z+0,17 DR-
314 CC X+63 Y-53
315 CP IPA-180 Z-0,159 DR-
316 CC X+63 Y-53
317 CP IPA-180 Z-0,488 DR-
318 CC X+63 Y-53
319 CP IPA-180 Z-0,818 DR-
320 CC X+63 Y-53
321 CP IPA-180 Z-1,148 DR-
322 CC X+63 Y-53
323 CP IPA-180 Z-1,477 DR-
324 CC X+63 Y-53
325 CP IPA-180 Z-1,807 DR-
326 CC X+63 Y-53
327 CP IPA-180 Z-2,136 DR-
328 CC X+63 Y-53
329 CP IPA-180 Z-2,466 DR-
330 CC X+63 Y-53
331 CP IPA-180 Z-2,795 DR-
332 CC X+63 Y-53
333 CP IPA-180 Z-3,125 DR-
334 CC X+63 Y-53
335 CP IPA-180 Z-3,454 DR-
336 CC X+63 Y-53
337 CP IPA-180 Z-3,784 DR-
338 CC X+63 Y-53
339 CP IPA-180 Z-4,113 DR-
340 CC X+63 Y-53
341 CP IPA-180 Z-4,443 DR-
342 CC X+63 Y-53
343 CP IPA-180 Z-4,772 DR-
344 CC X+63 Y-53
345 CP IPA-180 Z-5,101 DR-
346 CC X+63 Y-53
347 CP IPA-180 Z-5,431 DR-
348 CC X+63 Y-53
349 CP IPA-180 Z-5,761 DR-
350 CC X+63 Y-53
351 CP IPA-180 Z-6,09 DR-
352 CC X+63 Y-53
353 CP IPA-180 Z-6,419 DR-
354 CC X+63 Y-53
355 CP IPA-180 Z-6,749 DR-
356 CC X+63 Y-53
357 CP IPA-180 Z-7,079 DR-
358 CC X+63 Y-53
359 CP IPA-180 Z-7,409 DR-
360 CC X+63 Y-53
361 CP IPA-180 Z-7,739 DR-
362 CC X+63 Y-53
363 CP IPA-180 Z-8,068 DR-
364 CC X+63 Y-53
365 CP IPA-236,203 Z-8,5 DR-
366 L X+63,022 Y-50,5 F315
367 L X+62,978
368 CC X+63 Y-53
369 C X+62,978 Y-55,5 DR+
370 L X+63,022
371 L Z+10 FMAX
372 L X+64,239 Y-53,845 FMAX
373 L Z-6,5 FMAX
374 L Z-8 F500
375 CC X+63 Y-53
376 CP IPA-180 Z-8,329 DR-
377 CC X+63 Y-53
378 CP IPA-180 Z-8,659 DR-
379 CC X+63 Y-53
380 CP IPA-180 Z-8,989 DR-
381 CC X+63 Y-53
382 CP IPA-180 Z-9,318 DR-
383 CC X+63 Y-53
384 CP IPA-180 Z-9,648 DR-
385 CC X+63 Y-53
386 CP IPA-180 Z-9,977 DR-
387 CC X+63 Y-53
388 CP IPA-180 Z-10,307 DR-
389 CC X+63 Y-53
390 CP IPA-180 Z-10,636 DR-
391 CC X+63 Y-53
392 CP IPA-180 Z-10,965 DR-
393 CC X+63 Y-53
394 CP IPA-180 Z-11,295 DR-
395 CC X+63 Y-53
396 CP IPA-180 Z-11,625 DR-
397 CC X+63 Y-53
398 CP IPA-180 Z-11,954 DR-
399 CC X+63 Y-53
400 CP IPA-180 Z-12,284 DR-
401 CC X+63 Y-53
402 CP IPA-180 Z-12,613 DR-
403 CC X+63 Y-53
404 CP IPA-180 Z-12,942 DR-
405 CC X+63 Y-53
406 CP IPA-180 Z-13,272 DR-
407 CC X+63 Y-53
408 CP IPA-180 Z-13,602 DR-
409 CC X+63 Y-53
410 CP IPA-180 Z-13,931 DR-
411 CC X+63 Y-53
412 CP IPA-180 Z-14,261 DR-
413 CC X+63 Y-53
414 CP IPA-180 Z-14,59 DR-
415 CC X+63 Y-53
416 CP IPA-180 Z-14,919 DR-
417 CC X+63 Y-53
418 CP IPA-180 Z-15,249 DR-
419 CC X+63 Y-53
420 CP IPA-180 Z-15,579 DR-
421 CC X+63 Y-53
422 CP IPA-180 Z-15,909 DR-
423 CC X+63 Y-53
424 CP IPA-180 Z-16,239 DR-
425 CC X+63 Y-53
426 CP IPA-180 Z-16,568 DR-
427 CC X+63 Y-53
428 CP IPA-236,203 Z-17 DR-
429 L X+63,022 Y-50,5 F315
430 L X+62,978
431 CC X+63 Y-53
432 C X+62,978 Y-55,5 DR+
433 L X+63,022
434 L Z+50 FMAX
435 L X-61,746 Y-53,823 FMAX
436 L Z+2 FMAX
437 L Z+0,5 F500
438 CC X-63 Y-53
439 CP IPA-180 Z+0,17 DR-
440 CC X-63 Y-53
441 CP IPA-180 Z-0,159 DR-
442 CC X-63 Y-53
443 CP IPA-180 Z-0,488 DR-
444 CC X-63 Y-53
445 CP IPA-180 Z-0,818 DR-
446 CC X-63 Y-53
447 CP IPA-180 Z-1,148 DR-
448 CC X-63 Y-53
449 CP IPA-180 Z-1,477 DR-
450 CC X-63 Y-53
451 CP IPA-180 Z-1,807 DR-
452 CC X-63 Y-53
453 CP IPA-180 Z-2,136 DR-
454 CC X-63 Y-53
455 CP IPA-180 Z-2,466 DR-
456 CC X-63 Y-53
457 CP IPA-180 Z-2,795 DR-
458 CC X-63 Y-53
459 CP IPA-180 Z-3,125 DR-
460 CC X-63 Y-53
461 CP IPA-180 Z-3,454 DR-
462 CC X-63 Y-53
463 CP IPA-180 Z-3,784 DR-
464 CC X-63 Y-53
465 CP IPA-180 Z-4,113 DR-
466 CC X-63 Y-53
467 CP IPA-180 Z-4,443 DR-
468 CC X-63 Y-53
469 CP IPA-180 Z-4,772 DR-
470 CC X-63 Y-53
471 CP IPA-180 Z-5,101 DR-
472 CC X-63 Y-53
473 CP IPA-180 Z-5,431 DR-
474 CC X-63 Y-53
475 CP IPA-180 Z-5,761 DR-
476 CC X-63 Y-53
477 CP IPA-180 Z-6,09 DR-
478 CC X-63 Y-53
479 CP IPA-180 Z-6,419 DR-
480 CC X-63 Y-53
481 CP IPA-180 Z-6,749 DR-
482 CC X-63 Y-53
483 CP IPA-180 Z-7,079 DR-
484 CC X-63 Y-53
485 CP IPA-180 Z-7,409 DR-
486 CC X-63 Y-53
487 CP IPA-180 Z-7,739 DR-
488 CC X-63 Y-53
489 CP IPA-180 Z-8,068 DR-
490 CC X-63 Y-53
491 CP IPA-236,227 Z-8,5 DR-
492 L X-63,022 Y-50,5 F315
493 L X-62,978
494 CC X-63 Y-53
495 C X-62,978 Y-55,5 DR-
496 L X-63,022
497 L Z+10 FMAX
498 L X-61,746 Y-53,823 FMAX
499 L Z-6,5 FMAX
500 L Z-8 F500
501 CC X-63 Y-53
502 CP IPA-180 Z-8,329 DR-
503 CC X-63 Y-53
504 CP IPA-180 Z-8,659 DR-
505 CC X-63 Y-53
506 CP IPA-180 Z-8,989 DR-
507 CC X-63 Y-53
508 CP IPA-180 Z-9,318 DR-
509 CC X-63 Y-53
510 CP IPA-180 Z-9,648 DR-
511 CC X-63 Y-53
512 CP IPA-180 Z-9,977 DR-
513 CC X-63 Y-53
514 CP IPA-180 Z-10,307 DR-
515 CC X-63 Y-53
516 CP IPA-180 Z-10,636 DR-
517 CC X-63 Y-53
518 CP IPA-180 Z-10,965 DR-
519 CC X-63 Y-53
520 CP IPA-180 Z-11,295 DR-
521 CC X-63 Y-53
522 CP IPA-180 Z-11,625 DR-
523 CC X-63 Y-53
524 CP IPA-180 Z-11,954 DR-
525 CC X-63 Y-53
526 CP IPA-180 Z-12,284 DR-
527 CC X-63 Y-53
528 CP IPA-180 Z-12,613 DR-
529 CC X-63 Y-53
530 CP IPA-180 Z-12,942 DR-
531 CC X-63 Y-53
532 CP IPA-180 Z-13,272 DR-
533 CC X-63 Y-53
534 CP IPA-180 Z-13,602 DR-
535 CC X-63 Y-53
536 CP IPA-180 Z-13,931 DR-
537 CC X-63 Y-53
538 CP IPA-180 Z-14,261 DR-
539 CC X-63 Y-53
540 CP IPA-180 Z-14,59 DR-
541 CC X-63 Y-53
542 CP IPA-180 Z-14,919 DR-
543 CC X-63 Y-53
544 CP IPA-180 Z-15,249 DR-
545 CC X-63 Y-53
546 CP IPA-180 Z-15,579 DR-
547 CC X-63 Y-53
548 CP IPA-180 Z-15,909 DR-
549 CC X-63 Y-53
550 CP IPA-180 Z-16,239 DR-
551 CC X-63 Y-53
552 CP IPA-180 Z-16,568 DR-
553 CC X-63 Y-53
554 CP IPA-236,227 Z-17 DR-
555 L X-63,022 Y-50,5 F315
556 L X-62,978
557 CC X-63 Y-53
558 C X-62,978 Y-55,5 DR-
559 L X-63,022
560 L Z+50 FMAX
561 TOOL CALL 18 Z S1751 DR-5
562 L X-63 Y+53 Z+50 FMAX
563 L Z-6,5 FMAX
564 L Z-17 F500
565 L X-64 Y+52,5 RL F315
566 L Y+51,5
567 CC X-63 Y+51,5
568 C X-63 Y+50,5 DR+
569 CC X-63 Y+53
570 C X-63 Y+55,5 DR+
571 CC X-63 Y+53
572 C X-63 Y+50,5 DR+
573 CC X-63 Y+53
574 C X-60,67 Y+52,094 DR+
575 CC X-63 Y+53
576 C X-63 Y+55,5 DR+
577 CC X-63 Y+53
578 C X-63 Y+50,5 DR+
579 CC X-63 Y+53
580 C X-60,67 Y+52,094 DR+
581 CC X-61,602 Y+52,456
582 C X-61,24 Y+53,389 DR+
583 L X-62,172 Y+53,751
584 L X-63 Y+53 R0
585 L Z+50 FMAX
586 L X+63 FMAX
587 L Z-6,5 FMAX
588 L Z-17 F500
589 L X+62 Y+52,5 RL F315
590 L Y+51,5
591 CC X+63 Y+51,5
592 C X+63 Y+50,5 DR+
593 CC X+63 Y+53
594 C X+63 Y+55,5 DR+
595 CC X+63 Y+53
596 C X+63 Y+50,5 DR+
597 CC X+63 Y+53
598 C X+65,33 Y+52,094 DR+
599 CC X+63 Y+53
600 C X+63 Y+55,5 DR+
601 CC X+63 Y+53
602 C X+63 Y+50,5 DR+
603 CC X+63 Y+53
604 C X+65,33 Y+52,094 DR+
605 CC X+64,398 Y+52,456
606 C X+64,76 Y+53,389 DR+
607 L X+63,828 Y+53,751
608 L X+63 Y+53 R0
609 L Z+50 FMAX
610 L Y-53 FMAX
611 L Z-6,5 FMAX
612 L Z-17 F500
613 L X+62 Y-53,5 RL F315
614 L Y-54,5
615 CC X+63 Y-54,5
616 C X+63 Y-55,5 DR+
617 CC X+63 Y-53
618 C X+63 Y-50,5 DR+
619 CC X+63 Y-53
620 C X+63 Y-55,5 DR+
621 CC X+63 Y-53
622 C X+65,33 Y-53,906 DR+
623 CC X+63 Y-53
624 C X+63 Y-50,5 DR+
625 CC X+63 Y-53
626 C X+63 Y-55,5 DR+
627 CC X+63 Y-53
628 C X+65,33 Y-53,906 DR+
629 CC X+64,398 Y-53,544
630 C X+64,76 Y-52,611 DR+
631 L X+63,828 Y-52,249
632 L X+63 Y-53 R0
633 L Z+50 FMAX
634 L X-63 FMAX
635 L Z-6,5 FMAX
636 L Z-17 F500
637 L X-64 Y-53,5 RL F315
638 L Y-54,5
639 CC X-63 Y-54,5
640 C X-63 Y-55,5 DR+
641 CC X-63 Y-53
642 C X-63 Y-50,5 DR+
643 CC X-63 Y-53
644 C X-63 Y-55,5 DR+
645 CC X-63 Y-53
646 C X-60,67 Y-53,906 DR+
647 CC X-63 Y-53
648 C X-63 Y-50,5 DR+
649 CC X-63 Y-53
650 C X-63 Y-55,5 DR+
651 CC X-63 Y-53
652 C X-60,67 Y-53,906 DR+
653 CC X-61,602 Y-53,544
654 C X-61,24 Y-52,611 DR+
655 L X-62,172 Y-52,249
656 L X-63 Y-53 R0
657 L Z+50 FMAX
658 M78
659 M5
660 L Z-1 FMAX M91
661 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
662 ; CORRECTION USURE GAUCHE
663 ; SUREP R 0. SUREP Z 0.
664 TOOL CALL 1 Z S6000 DR-2,5
665 TOOL DEF 5
666 L X-63 Y+53 FMAX M3
667 L Z+50 FMAX
668 L Z+2 FMAX
669 L Z-2,5 F800
670 L X-63,5 Y+49 RL F1200
671 L Y+48,5
672 CC X-63 Y+48,5
673 C X-63 Y+48 DR+
674 CC X-63 Y+53
675 C X-63 Y+58 DR+
676 CC X-63 Y+53
677 C X-63 Y+48 DR+
678 CC X-63 Y+53
679 C X-60,177 Y+48,873 DR+
680 CC X-60,459 Y+49,286
681 C X-60,046 Y+49,568 DR+
682 L X-60,329 Y+49,981
683 L X-63 Y+53 R0
684 L Z+50 FMAX
685 L X+63 FMAX
686 L Z+2 FMAX
687 L Z-2,5 F800
688 L X+62,5 Y+49 RL F1200
689 L Y+48,5
690 CC X+63 Y+48,5
691 C X+63 Y+48 DR+
692 CC X+63 Y+53
693 C X+63 Y+58 DR+
694 CC X+63 Y+53
695 C X+63 Y+48 DR+
696 CC X+63 Y+53
697 C X+65,823 Y+48,873 DR+
698 CC X+65,541 Y+49,286
699 C X+65,954 Y+49,568 DR+
700 L X+65,671 Y+49,981
701 L X+63 Y+53 R0
702 L Z+50 FMAX
703 L Y-53 FMAX
704 L Z+2 FMAX
705 L Z-2,5 F800
706 L X+62,5 Y-57 RL F1200
707 L Y-57,5
708 CC X+63 Y-57,5
709 C X+63 Y-58 DR+
710 CC X+63 Y-53
711 C X+63 Y-48 DR+
712 CC X+63 Y-53
713 C X+63 Y-58 DR+
714 CC X+63 Y-53
715 C X+65,823 Y-57,127 DR+
716 CC X+65,541 Y-56,714
717 C X+65,954 Y-56,432 DR+
718 L X+65,671 Y-56,019
719 L X+63 Y-53 R0
720 L Z+50 FMAX
721 L X-63 FMAX
722 L Z+2 FMAX
723 L Z-2,5 F800
724 L X-63,5 Y-57 RL F1200
725 L Y-57,5
726 CC X-63 Y-57,5
727 C X-63 Y-58 DR+
728 CC X-63 Y-53
729 C X-63 Y-48 DR+
730 CC X-63 Y-53
731 C X-63 Y-58 DR+
732 CC X-63 Y-53
733 C X-60,177 Y-57,127 DR+
734 CC X-60,459 Y-56,714
735 C X-60,046 Y-56,432 DR+
736 L X-60,329 Y-56,019
737 L X-63 Y-53 R0
738 L Z+50 FMAX
739 M5
740 L Z-1 FMAX M91
741 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
742 TOOL CALL 1 Z S1856 DR+0
743 TOOL DEF 5
744 L X-63 Y+0 FMAX M3
745 L Z+50 FMAX M8
746 ;  POINTAGE-PERCAGE
747 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
748 L X-63 Y+0 FMAX M99
749 L X+63 FMAX M99
750 L Z+50 FMAX
751 M9
752 M5
753 L Z-1 FMAX M91
754 ; T5 FO DIA 11.8 VC40 FORET DIAM=11.7 2 DENTS A=118. ARS
755 TOOL CALL 5 Z S1350 DR+0
756 TOOL DEF 12
757 L X-63 Y+0 FMAX M3
758 L Z+50 FMAX M7
759 ;  DEBOURRAGE
760 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-86 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+1,755 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
761 L X-63 Y+0 FMAX M99
762 L X+63 FMAX M99
763 L Z+50 FMAX
764 M9
765 M5
766 L Z-1 FMAX M91
767 ; T12 ALESOIR DIA 12 CARB VC 15 ALESOIR DIAM=12. 5 DENTS ARS
768 TOOL CALL 12 Z S146 DR+0
769 TOOL DEF 1
770 L X-63 Y+0 FMAX M3
771 L Z+50 FMAX M8
772 ;  POINTAGE-PERCAGE
773 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-86 ; PROFONDEUR~
    Q206=63 ; AVANCE PLONGEE PROF.~
    Q202=+86 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
774 L X-63 Y+0 FMAX M99
775 L X+63 FMAX M99
776 L Z+50 FMAX
777 M9
778 M5
779 L Z-1 FMAX M91
780 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
781 TOOL CALL 1 Z S1856 DR+0
782 TOOL DEF 3
783 L X-32,9 Y-36,45 FMAX M3
784 L Z+50 FMAX M8
785 ;  POINTAGE-PERCAGE
786 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
787 L X-32,9 Y-36,45 FMAX M99
788 L X+32,9 FMAX M99
789 L Y+36,45 FMAX M99
790 L X-32,9 FMAX M99
791 L Z+50 FMAX
792 M9
793 M5
794 L Z-1 FMAX M91
795 ; T3 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
796 TOOL CALL 3 Z S2400 DR+0
797 TOOL DEF 13
798 L X-32,9 Y-36,45 FMAX M3
799 L Z+50 FMAX M7
800 ;  DEBOURRAGE
801 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-35 ; PROFONDEUR~
    Q206=180 ; AVANCE PLONGEE PROF.~
    Q202=+2,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
802 L X-32,9 Y-36,45 FMAX M99
803 L X+32,9 FMAX M99
804 L Y+36,45 FMAX M99
805 L X-32,9 FMAX M99
806 L Z+50 FMAX
807 M9
808 M5
809 L Z-1 FMAX M91
810 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
811 TOOL CALL 13 Z S833 DR+0
812 TOOL DEF 1
813 L X-32,9 Y-36,45 FMAX M3
814 L Z+50 FMAX M8
815 ;  POINTAGE-PERCAGE
816 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=83 ; AVANCE PLONGEE PROF.~
    Q202=+20 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
817 L X-32,9 Y-36,45 FMAX M99
818 L X+32,9 FMAX M99
819 L Y+36,45 FMAX M99
820 L X-32,9 FMAX M99
821 L Z+50 FMAX
822 M9
823 M5
824 L Z-1 FMAX M91
825 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
826 TOOL CALL 1 Z S1856 DR+0
827 TOOL DEF 21
828 L X-32,9 Y+54,45 FMAX M3
829 L Z+50 FMAX M8
830 ;  POINTAGE-PERCAGE
831 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,1 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
832 L X-32,9 Y+54,45 FMAX M99
833 L X+32,9 FMAX M99
834 L Y-54,45 FMAX M99
835 L X-32,9 FMAX M99
836 L Z+50 FMAX
837 M9
838 M5
839 L Z-1 FMAX M91
840 ; T21 CARBURE DIA 4.2 VC 40 DMF FORET DIAM=4.2 2 DENTS A=118. ARS
841 TOOL CALL 21 Z S5300 DR+0
842 TOOL DEF 1
843 L X-32,9 Y+54,45 FMAX M3
844 L Z+50 FMAX M7
845 ;  DEBOURRAGE
846 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+1,05 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
847 L X-32,9 Y+54,45 FMAX M99
848 L X+32,9 FMAX M99
849 L Y-54,45 FMAX M99
850 L X-32,9 FMAX M99
851 L Z+50 FMAX
852 M9
853 M5
854 L Z-1 FMAX M91
855 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
856 TOOL CALL 1 Z S1856 DR+0
857 TOOL DEF 25
858 L X-11 Y+0 FMAX M3
859 L Z+50 FMAX M8
860 ;  POINTAGE-PERCAGE
861 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
862 L X-11 Y+0 FMAX M99
863 M9
864 M5
865 L Z-1 FMAX M91
866 ; T25 DIA 6.8 VC 40 DMF OK FORET DIAM=6.8 2 DENTS A=118. ARS
867 TOOL CALL 25 Z S2400 DR+0
868 TOOL DEF 1
869 L X-11 Y+0 FMAX M3
870 L Z+50 FMAX M7
871 ;  DEBOURRAGE
872 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-82 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
873 L X-11 Y+0 FMAX M99
874 M9
875 M5
876 L Z-1 FMAX M91
877 L Y-1 FMAX M91
878 M30
879 END PGM REP 61 MM
