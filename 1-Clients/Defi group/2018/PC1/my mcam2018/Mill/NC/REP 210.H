0 BEGIN PGM REP 210 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 210
4 ; PROG-CN DU 17-11-21 A 13:19
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T17 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
9 ; T16 FRAISE DIA 12 FINITION OK FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; T5 FO DIA 11.8 VC40 DMF FORET DIAM=11.7 2 DENTS A=118. ARS
12 ; T12 ALESOIR DIA 12 CARB VC 15 ALESOIR DIAM=12. 5 DENTS ARS
13 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
14 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
15 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
16 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
17 ; T23 P15323610 110 KG CONTOUR SANS TROU OK FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
18 ; FIN DE LISTE DES OUTILS
19 L R0 FMAX
20 L Z-1 FMAX M91
21 ; *GROUPE D'USINAGE-2*
22 ; T17 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
23 ; CORRECTION AUCUNE
24 ; SUREP R 0.15 SUREP Z 0.
25 TOOL CALL 17 Z S2387 DR+0
26 TOOL DEF 16
27 L X-85,963 Y+40,67 FMAX M3
28 L Z+50 FMAX M25
29 L Z+2 FMAX
30 L Z+0,5 F300
31 CC X-80 Y+40
32 CP IPA-180 Z-0,158 DR-
33 CC X-80 Y+40
34 CP IPA-180 Z-0,816 DR-
35 CC X-80 Y+40
36 CP IPA-180 Z-1,474 DR-
37 CC X-80 Y+40
38 CP IPA-180 Z-2,133 DR-
39 CC X-80 Y+40
40 CP IPA-180 Z-2,791 DR-
41 CC X-80 Y+40
42 CP IPA-180 Z-3,449 DR-
43 CC X-80 Y+40
44 CP IPA-180 Z-4,107 DR-
45 CC X-80 Y+40
46 CP IPA-180 Z-4,766 DR-
47 CC X-80 Y+40
48 CP IPA-180 Z-5,424 DR-
49 CC X-80 Y+40
50 CP IPA-180 Z-6,082 DR-
51 CC X-80 Y+40
52 CP IPA-180 Z-6,74 DR-
53 CC X-80 Y+40
54 CP IPA-180 Z-7,399 DR-
55 CC X-80 Y+40
56 CP IPA-180 Z-8,057 DR-
57 CC X-80 Y+40
58 CP IPA-180 Z-8,715 DR-
59 CC X-80 Y+40
60 CP IPA-180 Z-9,373 DR-
61 CC X-80 Y+40
62 CP IPA-180 Z-10,032 DR-
63 CC X-80 Y+40
64 CP IPA-173,589 Z-10,667 DR-
65 L X-79,1 Y+40 F382
66 CC X-81,8 Y+40
67 C X-84,5 Y+40 DR+
68 CC X-78,2 Y+40
69 C X-71,9 Y+40 DR+
70 CC X-81,8 Y+40
71 C X-91,7 Y+40 DR+
72 CC X-78,2 Y+40
73 C X-64,7 Y+40 DR+
74 CC X-81,8 Y+40
75 C X-74,068 Y+55,252 DR+
76 CC X-80 Y+40
77 C X-63,635 Y+40 DR+
78 CC X-80 Y+40
79 C X-74,068 Y+55,252 DR+
80 L Z+10 FMAX
81 L X-85,963 Y+40,67 FMAX
82 L Z-8,667 FMAX
83 L Z-10,167 F300
84 CC X-80 Y+40
85 CP IPA-180 Z-10,825 DR-
86 CC X-80 Y+40
87 CP IPA-180 Z-11,483 DR-
88 CC X-80 Y+40
89 CP IPA-180 Z-12,142 DR-
90 CC X-80 Y+40
91 CP IPA-180 Z-12,8 DR-
92 CC X-80 Y+40
93 CP IPA-180 Z-13,458 DR-
94 CC X-80 Y+40
95 CP IPA-180 Z-14,116 DR-
96 CC X-80 Y+40
97 CP IPA-180 Z-14,775 DR-
98 CC X-80 Y+40
99 CP IPA-180 Z-15,433 DR-
100 CC X-80 Y+40
101 CP IPA-180 Z-16,091 DR-
102 CC X-80 Y+40
103 CP IPA-180 Z-16,749 DR-
104 CC X-80 Y+40
105 CP IPA-180 Z-17,407 DR-
106 CC X-80 Y+40
107 CP IPA-180 Z-18,066 DR-
108 CC X-80 Y+40
109 CP IPA-180 Z-18,724 DR-
110 CC X-80 Y+40
111 CP IPA-180 Z-19,382 DR-
112 CC X-80 Y+40
113 CP IPA-180 Z-20,041 DR-
114 CC X-80 Y+40
115 CP IPA-180 Z-20,699 DR-
116 CC X-80 Y+40
117 CP IPA-173,589 Z-21,333 DR-
118 L X-79,1 Y+40 F382
119 CC X-81,8 Y+40
120 C X-84,5 Y+40 DR+
121 CC X-78,2 Y+40
122 C X-71,9 Y+40 DR+
123 CC X-81,8 Y+40
124 C X-91,7 Y+40 DR+
125 CC X-78,2 Y+40
126 C X-64,7 Y+40 DR+
127 CC X-81,8 Y+40
128 C X-74,068 Y+55,252 DR+
129 CC X-80 Y+40
130 C X-63,635 Y+40 DR+
131 CC X-80 Y+40
132 C X-74,068 Y+55,252 DR+
133 L Z+10 FMAX
134 L X-85,963 Y+40,67 FMAX
135 L Z-19,333 FMAX
136 L Z-20,833 F300
137 CC X-80 Y+40
138 CP IPA-180 Z-21,491 DR-
139 CC X-80 Y+40
140 CP IPA-180 Z-22,15 DR-
141 CC X-80 Y+40
142 CP IPA-180 Z-22,808 DR-
143 CC X-80 Y+40
144 CP IPA-180 Z-23,466 DR-
145 CC X-80 Y+40
146 CP IPA-180 Z-24,125 DR-
147 CC X-80 Y+40
148 CP IPA-180 Z-24,783 DR-
149 CC X-80 Y+40
150 CP IPA-180 Z-25,441 DR-
151 CC X-80 Y+40
152 CP IPA-180 Z-26,099 DR-
153 CC X-80 Y+40
154 CP IPA-180 Z-26,758 DR-
155 CC X-80 Y+40
156 CP IPA-180 Z-27,416 DR-
157 CC X-80 Y+40
158 CP IPA-180 Z-28,074 DR-
159 CC X-80 Y+40
160 CP IPA-180 Z-28,732 DR-
161 CC X-80 Y+40
162 CP IPA-180 Z-29,39 DR-
163 CC X-80 Y+40
164 CP IPA-180 Z-30,049 DR-
165 CC X-80 Y+40
166 CP IPA-180 Z-30,707 DR-
167 CC X-80 Y+40
168 CP IPA-180 Z-31,365 DR-
169 CC X-80 Y+40
170 CP IPA-173,589 Z-32 DR-
171 L X-79,1 Y+40 F382
172 CC X-81,8 Y+40
173 C X-84,5 Y+40 DR+
174 CC X-78,2 Y+40
175 C X-71,9 Y+40 DR+
176 CC X-81,8 Y+40
177 C X-91,7 Y+40 DR+
178 CC X-78,2 Y+40
179 C X-64,7 Y+40 DR+
180 CC X-81,8 Y+40
181 C X-74,068 Y+55,252 DR+
182 CC X-80 Y+40
183 C X-63,635 Y+40 DR+
184 CC X-80 Y+40
185 C X-74,068 Y+55,252 DR+
186 L Z+50 FMAX
187 L X+74,037 Y+40,67 FMAX
188 L Z+2 FMAX
189 L Z+0,5 F300
190 CC X+80 Y+40
191 CP IPA-180 Z-0,158 DR-
192 CC X+80 Y+40
193 CP IPA-180 Z-0,816 DR-
194 CC X+80 Y+40
195 CP IPA-180 Z-1,474 DR-
196 CC X+80 Y+40
197 CP IPA-180 Z-2,133 DR-
198 CC X+80 Y+40
199 CP IPA-180 Z-2,791 DR-
200 CC X+80 Y+40
201 CP IPA-180 Z-3,449 DR-
202 CC X+80 Y+40
203 CP IPA-180 Z-4,107 DR-
204 CC X+80 Y+40
205 CP IPA-180 Z-4,766 DR-
206 CC X+80 Y+40
207 CP IPA-180 Z-5,424 DR-
208 CC X+80 Y+40
209 CP IPA-180 Z-6,082 DR-
210 CC X+80 Y+40
211 CP IPA-180 Z-6,74 DR-
212 CC X+80 Y+40
213 CP IPA-180 Z-7,399 DR-
214 CC X+80 Y+40
215 CP IPA-180 Z-8,057 DR-
216 CC X+80 Y+40
217 CP IPA-180 Z-8,715 DR-
218 CC X+80 Y+40
219 CP IPA-180 Z-9,373 DR-
220 CC X+80 Y+40
221 CP IPA-180 Z-10,032 DR-
222 CC X+80 Y+40
223 CP IPA-173,589 Z-10,667 DR-
224 L X+80,9 Y+40 F382
225 CC X+78,2 Y+40
226 C X+75,5 Y+40 DR+
227 CC X+81,8 Y+40
228 C X+88,1 Y+40 DR+
229 CC X+78,2 Y+40
230 C X+68,3 Y+40 DR+
231 CC X+81,8 Y+40
232 C X+95,3 Y+40 DR+
233 CC X+78,2 Y+40
234 C X+85,932 Y+55,252 DR+
235 CC X+80 Y+40
236 C X+96,365 Y+40 DR+
237 CC X+80 Y+40
238 C X+85,932 Y+55,252 DR+
239 L Z+10 FMAX
240 L X+74,037 Y+40,67 FMAX
241 L Z-8,667 FMAX
242 L Z-10,167 F300
243 CC X+80 Y+40
244 CP IPA-180 Z-10,825 DR-
245 CC X+80 Y+40
246 CP IPA-180 Z-11,483 DR-
247 CC X+80 Y+40
248 CP IPA-180 Z-12,142 DR-
249 CC X+80 Y+40
250 CP IPA-180 Z-12,8 DR-
251 CC X+80 Y+40
252 CP IPA-180 Z-13,458 DR-
253 CC X+80 Y+40
254 CP IPA-180 Z-14,116 DR-
255 CC X+80 Y+40
256 CP IPA-180 Z-14,775 DR-
257 CC X+80 Y+40
258 CP IPA-180 Z-15,433 DR-
259 CC X+80 Y+40
260 CP IPA-180 Z-16,091 DR-
261 CC X+80 Y+40
262 CP IPA-180 Z-16,749 DR-
263 CC X+80 Y+40
264 CP IPA-180 Z-17,407 DR-
265 CC X+80 Y+40
266 CP IPA-180 Z-18,066 DR-
267 CC X+80 Y+40
268 CP IPA-180 Z-18,724 DR-
269 CC X+80 Y+40
270 CP IPA-180 Z-19,382 DR-
271 CC X+80 Y+40
272 CP IPA-180 Z-20,041 DR-
273 CC X+80 Y+40
274 CP IPA-180 Z-20,699 DR-
275 CC X+80 Y+40
276 CP IPA-173,589 Z-21,333 DR-
277 L X+80,9 Y+40 F382
278 CC X+78,2 Y+40
279 C X+75,5 Y+40 DR+
280 CC X+81,8 Y+40
281 C X+88,1 Y+40 DR+
282 CC X+78,2 Y+40
283 C X+68,3 Y+40 DR+
284 CC X+81,8 Y+40
285 C X+95,3 Y+40 DR+
286 CC X+78,2 Y+40
287 C X+85,932 Y+55,252 DR+
288 CC X+80 Y+40
289 C X+96,365 Y+40 DR+
290 CC X+80 Y+40
291 C X+85,932 Y+55,252 DR+
292 L Z+10 FMAX
293 L X+74,037 Y+40,67 FMAX
294 L Z-19,333 FMAX
295 L Z-20,833 F300
296 CC X+80 Y+40
297 CP IPA-180 Z-21,491 DR-
298 CC X+80 Y+40
299 CP IPA-180 Z-22,15 DR-
300 CC X+80 Y+40
301 CP IPA-180 Z-22,808 DR-
302 CC X+80 Y+40
303 CP IPA-180 Z-23,466 DR-
304 CC X+80 Y+40
305 CP IPA-180 Z-24,125 DR-
306 CC X+80 Y+40
307 CP IPA-180 Z-24,783 DR-
308 CC X+80 Y+40
309 CP IPA-180 Z-25,441 DR-
310 CC X+80 Y+40
311 CP IPA-180 Z-26,099 DR-
312 CC X+80 Y+40
313 CP IPA-180 Z-26,758 DR-
314 CC X+80 Y+40
315 CP IPA-180 Z-27,416 DR-
316 CC X+80 Y+40
317 CP IPA-180 Z-28,074 DR-
318 CC X+80 Y+40
319 CP IPA-180 Z-28,732 DR-
320 CC X+80 Y+40
321 CP IPA-180 Z-29,39 DR-
322 CC X+80 Y+40
323 CP IPA-180 Z-30,049 DR-
324 CC X+80 Y+40
325 CP IPA-180 Z-30,707 DR-
326 CC X+80 Y+40
327 CP IPA-180 Z-31,365 DR-
328 CC X+80 Y+40
329 CP IPA-173,589 Z-32 DR-
330 L X+80,9 Y+40 F382
331 CC X+78,2 Y+40
332 C X+75,5 Y+40 DR+
333 CC X+81,8 Y+40
334 C X+88,1 Y+40 DR+
335 CC X+78,2 Y+40
336 C X+68,3 Y+40 DR+
337 CC X+81,8 Y+40
338 C X+95,3 Y+40 DR+
339 CC X+78,2 Y+40
340 C X+85,932 Y+55,252 DR+
341 CC X+80 Y+40
342 C X+96,365 Y+40 DR+
343 CC X+80 Y+40
344 C X+85,932 Y+55,252 DR+
345 L Z+50 FMAX
346 TOOL CALL 17 Z S2387 DR-6
347 L X-80 Y+40 Z+50 FMAX
348 L Z-19,333 FMAX
349 L Z-32 F300
350 L X-93,965 Y+41,2 RL F382
351 L X-95,165
352 CC X-95,165 Y+40
353 C X-96,365 Y+40 DR+
354 CC X-80 Y+40
355 C X-63,635 Y+40 DR+
356 CC X-80 Y+40
357 C X-96,365 Y+40 DR+
358 CC X-80 Y+40
359 C X-96,243 Y+38,005 DR+
360 CC X-80 Y+40
361 C X-63,635 Y+40 DR+
362 CC X-80 Y+40
363 C X-96,365 Y+40 DR+
364 CC X-80 Y+40
365 C X-96,243 Y+38,005 DR+
366 CC X-80 Y+40
367 C X-63,635 Y+40 DR+
368 CC X-80 Y+40
369 C X-96,365 Y+40 DR+
370 CC X-80 Y+40
371 C X-96,243 Y+38,005 DR+
372 CC X-95,052 Y+38,151
373 C X-94,906 Y+36,96 DR+
374 L X-93,715 Y+37,107
375 L X-80 Y+40 R0
376 L Z+50 FMAX
377 L X+80 FMAX
378 L Z-19,333 FMAX
379 L Z-32 F300
380 L X+66,035 Y+41,2 RL F382
381 L X+64,835
382 CC X+64,835 Y+40
383 C X+63,635 Y+40 DR+
384 CC X+80 Y+40
385 C X+96,365 Y+40 DR+
386 CC X+80 Y+40
387 C X+63,635 Y+40 DR+
388 CC X+80 Y+40
389 C X+63,757 Y+38,005 DR+
390 CC X+80 Y+40
391 C X+96,365 Y+40 DR+
392 CC X+80 Y+40
393 C X+63,635 Y+40 DR+
394 CC X+80 Y+40
395 C X+63,757 Y+38,005 DR+
396 CC X+80 Y+40
397 C X+96,365 Y+40 DR+
398 CC X+80 Y+40
399 C X+63,635 Y+40 DR+
400 CC X+80 Y+40
401 C X+63,757 Y+38,005 DR+
402 CC X+64,948 Y+38,151
403 C X+65,094 Y+36,96 DR+
404 L X+66,285 Y+37,107
405 L X+80 Y+40 R0
406 L Z+50 FMAX
407 M78
408 M5
409 L Z-1 FMAX M91
410 ; T16 FRAISE DIA 12 FINITION OK FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
411 ; CORRECTION USURE GAUCHE
412 ; SUREP R 0.1 SUREP Z 0.
413 TOOL CALL 16 Z S1200 DR-6
414 TOOL DEF 1
415 L X-80 Y+40 FMAX M3
416 L Z+50 FMAX M25
417 L Z+2 FMAX
418 L Z-35 F500
419 L X-94,015 Y+41,2 RL
420 L X-95,215
421 CC X-95,215 Y+40
422 C X-96,415 Y+40 DR+
423 CC X-80 Y+40
424 C X-63,585 Y+40 DR+
425 CC X-80 Y+40
426 C X-96,415 Y+40 DR+
427 CC X-80 Y+40
428 C X-96,293 Y+38,005 DR+
429 CC X-80 Y+40
430 C X-63,585 Y+40 DR+
431 CC X-80 Y+40
432 C X-96,415 Y+40 DR+
433 CC X-80 Y+40
434 C X-96,293 Y+38,005 DR+
435 CC X-80 Y+40
436 C X-63,585 Y+40 DR+
437 CC X-80 Y+40
438 C X-96,415 Y+40 DR+
439 CC X-80 Y+40
440 C X-96,293 Y+38,005 DR+
441 CC X-95,102 Y+38,151
442 C X-94,956 Y+36,96 DR+
443 L X-93,765 Y+37,106
444 L X-80 Y+40 R0
445 L Z+50 FMAX
446 L X+80 FMAX
447 L Z+2 FMAX
448 L Z-35
449 L X+65,985 Y+41,2 RL
450 L X+64,785
451 CC X+64,785 Y+40
452 C X+63,585 Y+40 DR+
453 CC X+80 Y+40
454 C X+96,415 Y+40 DR+
455 CC X+80 Y+40
456 C X+63,585 Y+40 DR+
457 CC X+80 Y+40
458 C X+63,707 Y+38,005 DR+
459 CC X+80 Y+40
460 C X+96,415 Y+40 DR+
461 CC X+80 Y+40
462 C X+63,585 Y+40 DR+
463 CC X+80 Y+40
464 C X+63,707 Y+38,005 DR+
465 CC X+80 Y+40
466 C X+96,415 Y+40 DR+
467 CC X+80 Y+40
468 C X+63,585 Y+40 DR+
469 CC X+80 Y+40
470 C X+63,707 Y+38,005 DR+
471 CC X+64,898 Y+38,151
472 C X+65,044 Y+36,96 DR+
473 L X+66,235 Y+37,106
474 L X+80 Y+40 R0
475 L Z+50 FMAX
476 ; CORRECTION USURE GAUCHE
477 ; SUREP R 0.05 SUREP Z 0.
478 L X-80 FMAX
479 L Z+2 FMAX
480 L Z-35
481 L X-94,065 Y+41,2 RL
482 L X-95,265
483 CC X-95,265 Y+40
484 C X-96,465 Y+40 DR+
485 CC X-80 Y+40
486 C X-63,535 Y+40 DR+
487 CC X-80 Y+40
488 C X-96,465 Y+40 DR+
489 CC X-80 Y+40
490 C X-96,344 Y+38,005 DR+
491 CC X-80 Y+40
492 C X-63,535 Y+40 DR+
493 CC X-80 Y+40
494 C X-96,465 Y+40 DR+
495 CC X-80 Y+40
496 C X-96,344 Y+38,005 DR+
497 CC X-80 Y+40
498 C X-63,535 Y+40 DR+
499 CC X-80 Y+40
500 C X-96,465 Y+40 DR+
501 CC X-80 Y+40
502 C X-96,344 Y+38,005 DR+
503 CC X-95,153 Y+38,15
504 C X-95,007 Y+36,959 DR+
505 L X-93,816 Y+37,105
506 L X-80 Y+40 R0
507 L Z+50 FMAX
508 L X+80 FMAX
509 L Z+2 FMAX
510 L Z-35
511 L X+65,935 Y+41,2 RL
512 L X+64,735
513 CC X+64,735 Y+40
514 C X+63,535 Y+40 DR+
515 CC X+80 Y+40
516 C X+96,465 Y+40 DR+
517 CC X+80 Y+40
518 C X+63,535 Y+40 DR+
519 CC X+80 Y+40
520 C X+63,656 Y+38,005 DR+
521 CC X+80 Y+40
522 C X+96,465 Y+40 DR+
523 CC X+80 Y+40
524 C X+63,535 Y+40 DR+
525 CC X+80 Y+40
526 C X+63,656 Y+38,005 DR+
527 CC X+80 Y+40
528 C X+96,465 Y+40 DR+
529 CC X+80 Y+40
530 C X+63,535 Y+40 DR+
531 CC X+80 Y+40
532 C X+63,656 Y+38,005 DR+
533 CC X+64,847 Y+38,15
534 C X+64,993 Y+36,959 DR+
535 L X+66,184 Y+37,105
536 L X+80 Y+40 R0
537 L Z+50 FMAX
538 M78
539 M5
540 L Z-1 FMAX M91
541 M00
542 ; T16 FRAISE DIA 12 FINITION OK FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
543 ; CORRECTION USURE GAUCHE
544 ; SUREP R 0. SUREP Z 0.
545 TOOL CALL 16 Z S1200 DR-6
546 TOOL DEF 1
547 L X-80 Y+40 FMAX M3
548 L Z+50 FMAX M25
549 L Z+2 FMAX
550 L Z-35 F500
551 L X-94,115 Y+41,2 RL
552 L X-95,315
553 CC X-95,315 Y+40
554 C X-96,515 Y+40 DR+
555 CC X-80 Y+40
556 C X-63,485 Y+40 DR+
557 CC X-80 Y+40
558 C X-96,515 Y+40 DR+
559 CC X-80 Y+40
560 C X-96,394 Y+38,005 DR+
561 CC X-80 Y+40
562 C X-63,485 Y+40 DR+
563 CC X-80 Y+40
564 C X-96,515 Y+40 DR+
565 CC X-80 Y+40
566 C X-96,394 Y+38,005 DR+
567 CC X-80 Y+40
568 C X-63,485 Y+40 DR+
569 CC X-80 Y+40
570 C X-96,515 Y+40 DR+
571 CC X-80 Y+40
572 C X-96,394 Y+38,005 DR+
573 CC X-95,203 Y+38,15
574 C X-95,058 Y+36,959 DR+
575 L X-93,867 Y+37,104
576 L X-80 Y+40 R0
577 L Z+50 FMAX
578 L X+80 FMAX
579 L Z+2 FMAX
580 L Z-35
581 L X+65,885 Y+41,2 RL
582 L X+64,685
583 CC X+64,685 Y+40
584 C X+63,485 Y+40 DR+
585 CC X+80 Y+40
586 C X+96,515 Y+40 DR+
587 CC X+80 Y+40
588 C X+63,485 Y+40 DR+
589 CC X+80 Y+40
590 C X+63,606 Y+38,005 DR+
591 CC X+80 Y+40
592 C X+96,515 Y+40 DR+
593 CC X+80 Y+40
594 C X+63,485 Y+40 DR+
595 CC X+80 Y+40
596 C X+63,606 Y+38,005 DR+
597 CC X+80 Y+40
598 C X+96,515 Y+40 DR+
599 CC X+80 Y+40
600 C X+63,485 Y+40 DR+
601 CC X+80 Y+40
602 C X+63,606 Y+38,005 DR+
603 CC X+64,797 Y+38,15
604 C X+64,942 Y+36,959 DR+
605 L X+66,133 Y+37,104
606 L X+80 Y+40 R0
607 L Z+50 FMAX
608 M78
609 M5
610 L Z-1 FMAX M91
611 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
612 ; CORRECTION USURE GAUCHE
613 ; SUREP R 0. SUREP Z 0.
614 TOOL CALL 1 Z S6000 DR-2,5
615 TOOL DEF 5
616 L X-80 Y+40 FMAX M3
617 L Z+50 FMAX
618 L Z+2 FMAX
619 L Z-2,5 F800
620 L X-99,015 Y+40,5 RL F1200
621 L X-99,515
622 CC X-99,515 Y+40
623 C X-100,015 Y+40 DR+
624 CC X-80 Y+40
625 C X-59,985 Y+40 DR+
626 CC X-80 Y+40
627 C X-100,015 Y+40 DR+
628 CC X-80 Y+40
629 C X-99,915 Y+38,003 DR+
630 CC X-99,418 Y+38,053
631 C X-99,368 Y+37,556 DR+
632 L X-80 Y+40 R0
633 L Z+50 FMAX
634 L X+80 FMAX
635 L Z+2 FMAX
636 L Z-2,5 F800
637 L X+60,985 Y+40,5 RL F1200
638 L X+60,485
639 CC X+60,485 Y+40
640 C X+59,985 Y+40 DR+
641 CC X+80 Y+40
642 C X+100,015 Y+40 DR+
643 CC X+80 Y+40
644 C X+59,985 Y+40 DR+
645 CC X+80 Y+40
646 C X+60,085 Y+38,003 DR+
647 CC X+60,582 Y+38,053
648 C X+60,632 Y+37,556 DR+
649 L X+80 Y+40 R0
650 L Z+50 FMAX
651 M5
652 L Z-1 FMAX M91
653 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
654 TOOL CALL 1 Z S1856 DR+0
655 TOOL DEF 5
656 L X-61,514 Y-50 FMAX M3
657 L Z+50 FMAX M8
658 ;  POINTAGE-PERCAGE
659 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,35 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
660 L X-61,514 Y-50 FMAX M99
661 L X+61,514 FMAX M99
662 L Z+50 FMAX
663 M9
664 M5
665 L Z-1 FMAX M91
666 ; T5 FO DIA 11.8 VC40 DMF FORET DIAM=11.7 2 DENTS A=118. ARS
667 TOOL CALL 5 Z S1650 DR+0
668 TOOL DEF 12
669 L X-61,514 Y-50 FMAX M3
670 L Z+50 FMAX M7
671 ;  DEBOURRAGE
672 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-75 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+5,85 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
673 L X-61,514 Y-50 FMAX M99
674 L X+61,514 FMAX M99
675 L Z+50 FMAX
676 M9
677 M5
678 L Z-1 FMAX M91
679 ; T12 ALESOIR DIA 12 CARB VC 15 ALESOIR DIAM=12. 5 DENTS ARS
680 TOOL CALL 12 Z S416 DR+0
681 TOOL DEF 1
682 L X-61,514 Y-50 FMAX M3
683 L Z+50 FMAX M8
684 ;  POINTAGE-PERCAGE
685 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-75 ; PROFONDEUR~
    Q206=63 ; AVANCE PLONGEE PROF.~
    Q202=+75 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
686 L X-61,514 Y-50 FMAX M99
687 L X+61,514 FMAX M99
688 L Z+50 FMAX
689 M9
690 M5
691 L Z-1 FMAX M91
692 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
693 TOOL CALL 1 Z S1856 DR+0
694 TOOL DEF 2
695 L X+58,514 Y-72 FMAX M3
696 L Z+50 FMAX M8
697 ;  POINTAGE-PERCAGE
698 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
699 L X+58,514 Y-72 FMAX M99
700 L Y-28 FMAX M99
701 L X-58,514 Y-72 FMAX M99
702 L Y-28 FMAX M99
703 L Z+50 FMAX
704 M9
705 M5
706 L Z-1 FMAX M91
707 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
708 TOOL CALL 2 Z S2000 DR+0
709 TOOL DEF 27
710 L X+58,514 Y-72 FMAX M3
711 L Z+50 FMAX M7
712 ;  DEBOURRAGE
713 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-35 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
714 L X+58,514 Y-72 FMAX M99
715 L Y-28 FMAX M99
716 L X-58,514 Y-72 FMAX M99
717 L Y-28 FMAX M99
718 L Z+50 FMAX
719 M9
720 M5
721 L Z-1 FMAX M91
722 M00
723 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
724 TOOL CALL 27 Z S100 DR+0
725 TOOL DEF 1
726 L X+58,514 Y-72 FMAX M3
727 L Z+50 FMAX M8
728 ;  TARAUDAGE
729 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q239=1.5 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
730 L X+58,514 Y-72 FMAX M99
731 L Y-28 FMAX M99
732 L X-58,514 Y-72 FMAX M99
733 L Y-28 FMAX M99
734 L Z+50 FMAX
735 M9
736 M5
737 L Z-1 FMAX M91
738 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
739 TOOL CALL 1 Z S1856 DR+0
740 TOOL DEF 20
741 L X-80 Y+9 FMAX M3
742 L Z+50 FMAX M8
743 ;  POINTAGE-PERCAGE
744 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
745 L X-80 Y+9 FMAX M99
746 L X+106,847 Y+55,5 FMAX M99
747 L X+53,153 FMAX M99
748 L X+80 Y+9 FMAX M99
749 L X-53,153 Y+55,5 FMAX M99
750 L X-106,847 FMAX M99
751 L Z+50 FMAX
752 M9
753 M5
754 L Z-1 FMAX M91
755 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
756 TOOL CALL 20 Z S3800 DR+0
757 TOOL DEF 29
758 L X-80 Y+9 FMAX M3
759 L Z+50 FMAX M7
760 ;  DEBOURRAGE
761 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
762 L X-80 Y+9 FMAX M99
763 L X+106,847 Y+55,5 FMAX M99
764 L X+53,153 FMAX M99
765 L X+80 Y+9 FMAX M99
766 L X-53,153 Y+55,5 FMAX M99
767 L X-106,847 FMAX M99
768 L Z+50 FMAX
769 M9
770 M5
771 L Z-1 FMAX M91
772 M00
773 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
774 TOOL CALL 29 Z S200 DR+0
775 TOOL DEF 23
776 L X-80 Y+9 FMAX M3
777 L Z+50 FMAX M8
778 ;  TARAUDAGE
779 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q239=1. ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
780 L X-80 Y+9 FMAX M99
781 L X+106,847 Y+55,5 FMAX M99
782 L X+53,153 FMAX M99
783 L X+80 Y+9 FMAX M99
784 L X-53,153 Y+55,5 FMAX M99
785 L X-106,847 FMAX M99
786 L Z+50 FMAX
787 M9
788 M5
789 L Z-1 FMAX M91
790 ; T23 P15323610 110 KG CONTOUR SANS TROU OK FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
791 ; CORRECTION AUCUNE
792 ; SUREP R 0. SUREP Z 0.
793 TOOL CALL 23 Z S1790 DR+0
794 TOOL DEF 1
795 L X-3,509 Y-48,08 FMAX M3
796 L Z+50 FMAX M25
797 L Z+2 FMAX
798 L Z+0,5 F358
799 CC X+0 Y-50
800 CP IPA-180 Z+0,061 DR-
801 CC X+0 Y-50
802 CP IPA-180 Z-0,378 DR-
803 CC X+0 Y-50
804 CP IPA-180 Z-0,817 DR-
805 CC X+0 Y-50
806 CP IPA-180 Z-1,255 DR-
807 CC X+0 Y-50
808 CP IPA-180 Z-1,694 DR-
809 CC X+0 Y-50
810 CP IPA-180 Z-2,133 DR-
811 CC X+0 Y-50
812 CP IPA-180 Z-2,572 DR-
813 CC X+0 Y-50
814 CP IPA-180 Z-3,011 DR-
815 CC X+0 Y-50
816 CP IPA-180 Z-3,45 DR-
817 CC X+0 Y-50
818 CP IPA-180 Z-3,888 DR-
819 CC X+0 Y-50
820 CP IPA-180 Z-4,327 DR-
821 CC X+0 Y-50
822 CP IPA-180 Z-4,766 DR-
823 CC X+0 Y-50
824 CP IPA-180 Z-5,205 DR-
825 CC X+0 Y-50
826 CP IPA-180 Z-5,644 DR-
827 CC X+0 Y-50
828 CP IPA-180 Z-6,082 DR-
829 CC X+0 Y-50
830 CP IPA-180 Z-6,521 DR-
831 CC X+0 Y-50
832 CP IPA-180 Z-6,96 DR-
833 CC X+0 Y-50
834 CP IPA-180 Z-7,399 DR-
835 CC X+0 Y-50
836 CP IPA-180 Z-7,838 DR-
837 CC X+0 Y-50
838 CP IPA-180 Z-8,277 DR-
839 CC X+0 Y-50
840 CP IPA-180 Z-8,715 DR-
841 CC X+0 Y-50
842 CP IPA-180 Z-9,154 DR-
843 CC X+0 Y-50
844 CP IPA-180 Z-9,593 DR-
845 CC X+0 Y-50
846 CP IPA-180 Z-10,032 DR-
847 CC X+0 Y-50
848 CP IPA-180 Z-10,471 DR-
849 CC X+0 Y-50
850 CP IPA-180 Z-10,91 DR-
851 CC X+0 Y-50
852 CP IPA-180 Z-11,349 DR-
853 CC X+0 Y-50
854 CP IPA-180 Z-11,787 DR-
855 CC X+0 Y-50
856 CP IPA-180 Z-12,226 DR-
857 CC X+0 Y-50
858 CP IPA-180 Z-12,665 DR-
859 CC X+0 Y-50
860 CP IPA-180 Z-13,104 DR-
861 CC X+0 Y-50
862 CP IPA-180 Z-13,542 DR-
863 CC X+0 Y-50
864 CP IPA-180 Z-13,981 DR-
865 CC X+0 Y-50
866 CP IPA-180 Z-14,42 DR-
867 CC X+0 Y-50
868 CP IPA-180 Z-14,859 DR-
869 CC X+0 Y-50
870 CP IPA-180 Z-15,298 DR-
871 CC X+0 Y-50
872 CP IPA-151,314 Z-15,667 DR-
873 L X+0,4 Y-50
874 CC X-0,8 Y-50
875 C X-2 Y-50 DR+
876 CC X+0,8 Y-50
877 C X+3,6 Y-50 DR+
878 CC X-0,8 Y-50
879 C X-2,402 Y-45,902 DR+
880 CC X+0 Y-50
881 C X+4,75 Y-50 DR+
882 CC X+0 Y-50
883 C X-2,402 Y-45,902 DR+
884 L Z+10 FMAX
885 L X-3,509 Y-48,08 FMAX
886 L Z-13,667 FMAX
887 L Z-15,167
888 CC X+0 Y-50
889 CP IPA-180 Z-15,605 DR-
890 CC X+0 Y-50
891 CP IPA-180 Z-16,044 DR-
892 CC X+0 Y-50
893 CP IPA-180 Z-16,483 DR-
894 CC X+0 Y-50
895 CP IPA-180 Z-16,922 DR-
896 CC X+0 Y-50
897 CP IPA-180 Z-17,361 DR-
898 CC X+0 Y-50
899 CP IPA-180 Z-17,8 DR-
900 CC X+0 Y-50
901 CP IPA-180 Z-18,239 DR-
902 CC X+0 Y-50
903 CP IPA-180 Z-18,677 DR-
904 CC X+0 Y-50
905 CP IPA-180 Z-19,116 DR-
906 CC X+0 Y-50
907 CP IPA-180 Z-19,555 DR-
908 CC X+0 Y-50
909 CP IPA-180 Z-19,994 DR-
910 CC X+0 Y-50
911 CP IPA-180 Z-20,433 DR-
912 CC X+0 Y-50
913 CP IPA-180 Z-20,871 DR-
914 CC X+0 Y-50
915 CP IPA-180 Z-21,31 DR-
916 CC X+0 Y-50
917 CP IPA-180 Z-21,749 DR-
918 CC X+0 Y-50
919 CP IPA-180 Z-22,188 DR-
920 CC X+0 Y-50
921 CP IPA-180 Z-22,627 DR-
922 CC X+0 Y-50
923 CP IPA-180 Z-23,066 DR-
924 CC X+0 Y-50
925 CP IPA-180 Z-23,505 DR-
926 CC X+0 Y-50
927 CP IPA-180 Z-23,943 DR-
928 CC X+0 Y-50
929 CP IPA-180 Z-24,382 DR-
930 CC X+0 Y-50
931 CP IPA-180 Z-24,821 DR-
932 CC X+0 Y-50
933 CP IPA-180 Z-25,26 DR-
934 CC X+0 Y-50
935 CP IPA-180 Z-25,699 DR-
936 CC X+0 Y-50
937 CP IPA-180 Z-26,138 DR-
938 CC X+0 Y-50
939 CP IPA-180 Z-26,576 DR-
940 CC X+0 Y-50
941 CP IPA-180 Z-27,015 DR-
942 CC X+0 Y-50
943 CP IPA-180 Z-27,454 DR-
944 CC X+0 Y-50
945 CP IPA-180 Z-27,892 DR-
946 CC X+0 Y-50
947 CP IPA-180 Z-28,331 DR-
948 CC X+0 Y-50
949 CP IPA-180 Z-28,77 DR-
950 CC X+0 Y-50
951 CP IPA-180 Z-29,209 DR-
952 CC X+0 Y-50
953 CP IPA-180 Z-29,648 DR-
954 CC X+0 Y-50
955 CP IPA-180 Z-30,087 DR-
956 CC X+0 Y-50
957 CP IPA-180 Z-30,526 DR-
958 CC X+0 Y-50
959 CP IPA-180 Z-30,964 DR-
960 CC X+0 Y-50
961 CP IPA-151,314 Z-31,333 DR-
962 L X+0,4 Y-50
963 CC X-0,8 Y-50
964 C X-2 Y-50 DR+
965 CC X+0,8 Y-50
966 C X+3,6 Y-50 DR+
967 CC X-0,8 Y-50
968 C X-2,402 Y-45,902 DR+
969 CC X+0 Y-50
970 C X+4,75 Y-50 DR+
971 CC X+0 Y-50
972 C X-2,402 Y-45,902 DR+
973 L Z+10 FMAX
974 L X-3,509 Y-48,08 FMAX
975 L Z-29,333 FMAX
976 L Z-30,833
977 CC X+0 Y-50
978 CP IPA-180 Z-31,272 DR-
979 CC X+0 Y-50
980 CP IPA-180 Z-31,711 DR-
981 CC X+0 Y-50
982 CP IPA-180 Z-32,15 DR-
983 CC X+0 Y-50
984 CP IPA-180 Z-32,589 DR-
985 CC X+0 Y-50
986 CP IPA-180 Z-33,028 DR-
987 CC X+0 Y-50
988 CP IPA-180 Z-33,466 DR-
989 CC X+0 Y-50
990 CP IPA-180 Z-33,905 DR-
991 CC X+0 Y-50
992 CP IPA-180 Z-34,344 DR-
993 CC X+0 Y-50
994 CP IPA-180 Z-34,783 DR-
995 CC X+0 Y-50
996 CP IPA-180 Z-35,222 DR-
997 CC X+0 Y-50
998 CP IPA-180 Z-35,66 DR-
999 CC X+0 Y-50
1000 CP IPA-180 Z-36,099 DR-
1001 CC X+0 Y-50
1002 CP IPA-180 Z-36,538 DR-
1003 CC X+0 Y-50
1004 CP IPA-180 Z-36,977 DR-
1005 CC X+0 Y-50
1006 CP IPA-180 Z-37,416 DR-
1007 CC X+0 Y-50
1008 CP IPA-180 Z-37,855 DR-
1009 CC X+0 Y-50
1010 CP IPA-180 Z-38,293 DR-
1011 CC X+0 Y-50
1012 CP IPA-180 Z-38,732 DR-
1013 CC X+0 Y-50
1014 CP IPA-180 Z-39,171 DR-
1015 CC X+0 Y-50
1016 CP IPA-180 Z-39,61 DR-
1017 CC X+0 Y-50
1018 CP IPA-180 Z-40,049 DR-
1019 CC X+0 Y-50
1020 CP IPA-180 Z-40,488 DR-
1021 CC X+0 Y-50
1022 CP IPA-180 Z-40,927 DR-
1023 CC X+0 Y-50
1024 CP IPA-180 Z-41,365 DR-
1025 CC X+0 Y-50
1026 CP IPA-180 Z-41,804 DR-
1027 CC X+0 Y-50
1028 CP IPA-180 Z-42,243 DR-
1029 CC X+0 Y-50
1030 CP IPA-180 Z-42,682 DR-
1031 CC X+0 Y-50
1032 CP IPA-180 Z-43,12 DR-
1033 CC X+0 Y-50
1034 CP IPA-180 Z-43,559 DR-
1035 CC X+0 Y-50
1036 CP IPA-180 Z-43,998 DR-
1037 CC X+0 Y-50
1038 CP IPA-180 Z-44,437 DR-
1039 CC X+0 Y-50
1040 CP IPA-180 Z-44,876 DR-
1041 CC X+0 Y-50
1042 CP IPA-180 Z-45,314 DR-
1043 CC X+0 Y-50
1044 CP IPA-180 Z-45,753 DR-
1045 CC X+0 Y-50
1046 CP IPA-180 Z-46,192 DR-
1047 CC X+0 Y-50
1048 CP IPA-180 Z-46,631 DR-
1049 CC X+0 Y-50
1050 CP IPA-151,314 Z-47 DR-
1051 L X+0,4 Y-50
1052 CC X-0,8 Y-50
1053 C X-2 Y-50 DR+
1054 CC X+0,8 Y-50
1055 C X+3,6 Y-50 DR+
1056 CC X-0,8 Y-50
1057 C X-2,402 Y-45,902 DR+
1058 CC X+0 Y-50
1059 C X+4,75 Y-50 DR+
1060 CC X+0 Y-50
1061 C X-2,402 Y-45,902 DR+
1062 L Z+10 FMAX
1063 L X-3,509 Y-48,08 FMAX
1064 L Z-31,133 FMAX
1065 CC X+0 Y-50
1066 CP IPA-180 Z-31,572 DR-
1067 CC X+0 Y-50
1068 CP IPA-180 Z-32,011 DR-
1069 CC X+0 Y-50
1070 CP IPA-180 Z-32,45 DR-
1071 CC X+0 Y-50
1072 CP IPA-180 Z-32,889 DR-
1073 CC X+0 Y-50
1074 CP IPA-180 Z-33,328 DR-
1075 CC X+0 Y-50
1076 CP IPA-180 Z-33,766 DR-
1077 CC X+0 Y-50
1078 CP IPA-180 Z-34,205 DR-
1079 CC X+0 Y-50
1080 CP IPA-180 Z-34,644 DR-
1081 CC X+0 Y-50
1082 CP IPA-180 Z-35,083 DR-
1083 CC X+0 Y-50
1084 CP IPA-180 Z-35,522 DR-
1085 CC X+0 Y-50
1086 CP IPA-180 Z-35,96 DR-
1087 CC X+0 Y-50
1088 CP IPA-180 Z-36,399 DR-
1089 CC X+0 Y-50
1090 CP IPA-180 Z-36,838 DR-
1091 CC X+0 Y-50
1092 CP IPA-180 Z-37,277 DR-
1093 CC X+0 Y-50
1094 CP IPA-180 Z-37,716 DR-
1095 CC X+0 Y-50
1096 CP IPA-180 Z-38,155 DR-
1097 CC X+0 Y-50
1098 CP IPA-180 Z-38,593 DR-
1099 CC X+0 Y-50
1100 CP IPA-180 Z-39,032 DR-
1101 CC X+0 Y-50
1102 CP IPA-180 Z-39,471 DR-
1103 CC X+0 Y-50
1104 CP IPA-180 Z-39,91 DR-
1105 CC X+0 Y-50
1106 CP IPA-180 Z-40,349 DR-
1107 CC X+0 Y-50
1108 CP IPA-180 Z-40,788 DR-
1109 CC X+0 Y-50
1110 CP IPA-180 Z-41,227 DR-
1111 CC X+0 Y-50
1112 CP IPA-180 Z-41,665 DR-
1113 CC X+0 Y-50
1114 CP IPA-180 Z-42,104 DR-
1115 CC X+0 Y-50
1116 CP IPA-180 Z-42,543 DR-
1117 CC X+0 Y-50
1118 CP IPA-180 Z-42,981 DR-
1119 CC X+0 Y-50
1120 CP IPA-180 Z-43,42 DR-
1121 CC X+0 Y-50
1122 CP IPA-180 Z-43,859 DR-
1123 CC X+0 Y-50
1124 CP IPA-180 Z-44,298 DR-
1125 CC X+0 Y-50
1126 CP IPA-180 Z-44,737 DR-
1127 CC X+0 Y-50
1128 CP IPA-180 Z-45,176 DR-
1129 CC X+0 Y-50
1130 CP IPA-180 Z-45,615 DR-
1131 CC X+0 Y-50
1132 CP IPA-180 Z-46,053 DR-
1133 CC X+0 Y-50
1134 CP IPA-180 Z-46,492 DR-
1135 CC X+0 Y-50
1136 CP IPA-180 Z-46,931 DR-
1137 CC X+0 Y-50
1138 CP IPA-151,314 Z-47,3 DR-
1139 L X+0,4 Y-50
1140 CC X-0,8 Y-50
1141 C X-2 Y-50 DR+
1142 CC X+0,8 Y-50
1143 C X+3,6 Y-50 DR+
1144 CC X-0,8 Y-50
1145 C X-2,402 Y-45,902 DR+
1146 CC X+0 Y-50
1147 C X+4,75 Y-50 DR+
1148 CC X+0 Y-50
1149 C X-2,402 Y-45,902 DR+
1150 L X+0 Y-50
1151 TOOL CALL 23 Z S1790 DR-8
1152 L X-1,55 Y-48,4 Z-47,3 RL
1153 L X-3,15
1154 CC X-3,15 Y-50
1155 C X-4,75 Y-50 DR+
1156 CC X+0 Y-50
1157 C X+4,75 Y-50 DR+
1158 CC X+0 Y-50
1159 C X-4,75 Y-50 DR+
1160 CC X+0 Y-50
1161 C X-4,335 Y-51,941 DR+
1162 CC X+0 Y-50
1163 C X+4,75 Y-50 DR+
1164 CC X+0 Y-50
1165 C X-4,75 Y-50 DR+
1166 CC X+0 Y-50
1167 C X-4,335 Y-51,941 DR+
1168 CC X+0 Y-50
1169 C X+4,75 Y-50 DR+
1170 CC X+0 Y-50
1171 C X-4,75 Y-50 DR+
1172 CC X+0 Y-50
1173 C X-4,335 Y-51,941 DR+
1174 CC X-2,875 Y-51,287
1175 C X-2,221 Y-52,748 DR+
1176 L X-0,761 Y-52,094
1177 L X+0 Y-50 R0
1178 L Z+50 FMAX
1179 M78
1180 M5
1181 L Z-1 FMAX M91
1182 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1183 ; CORRECTION USURE GAUCHE
1184 ; SUREP R 0. SUREP Z 0.
1185 TOOL CALL 1 Z S6000 DR-2,5
1186 TOOL DEF 17
1187 L X+0 Y-50 FMAX M3
1188 L Z+50 FMAX
1189 L Z+2 FMAX
1190 L Z-2,5 F800
1191 L X-9,25 Y-49,5 RL F1200
1192 L X-9,75
1193 CC X-9,75 Y-50
1194 C X-10,25 Y-50 DR+
1195 CC X+0 Y-50
1196 C X+10,25 Y-50 DR+
1197 CC X+0 Y-50
1198 C X-10,25 Y-50 DR+
1199 CC X+0 Y-50
1200 C X-10,055 Y-51,987 DR+
1201 CC X-9,565 Y-51,89
1202 C X-9,468 Y-52,381 DR+
1203 L X-8,978 Y-52,284
1204 L X+0 Y-50 R0
1205 L Z+50 FMAX
1206 M5
1207 L Z-1 FMAX M91
1208 L Y-1 FMAX M91
1209 M30
1210 END PGM REP 210 MM
