0 BEGIN PGM REP 19 1293 OP 10 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP 19 1293 OP 10
4 ; PROG-CN DU 20-04-22 A 08:29
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 AIR POCHE SANS TROU  FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-2*
14 ; T18 P15322450 AIR POCHE SANS TROU  FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
15 ; CORRECTION AUCUNE
16 ; SUREP R 0. SUREP Z 0.
17 TOOL CALL 18 Z S3820 DR+0
18 TOOL DEF 1
19 L X+1,586 Y+395,258 FMAX M3
20 L Z+50 FMAX M25
21 L Z+2 FMAX
22 L Z+0,5 F500
23 CC X+0 Y+400
24 CP IPA-180 Z-1,151 DR-
25 CC X+0 Y+400
26 CP IPA-180 Z-2,802 DR-
27 CC X+0 Y+400
28 CP IPA-180 Z-4,453 DR-
29 CC X+0 Y+400
30 CP IPA-180 Z-6,104 DR-
31 CC X+0 Y+400
32 CP IPA-288,493 Z-8,75 DR-
33 L X+0,875 Y+400 F764
34 CC X-1,75 Y+400
35 C X-4,375 Y+400 DR+
36 CC X+1,75 Y+400
37 C X+7,875 Y+400 DR+
38 CC X-1,75 Y+400
39 C X+7,308 Y+403,255 DR+
40 CC X+0 Y+400
41 C X+0 Y+392 DR+
42 CC X+0 Y+400
43 C X+7,308 Y+403,255 DR+
44 L Z+10 FMAX
45 L X+1,586 Y+395,258 FMAX
46 L Z-6,75 FMAX
47 L Z-8,25 F500
48 CC X+0 Y+400
49 CP IPA-180 Z-9,901 DR-
50 CC X+0 Y+400
51 CP IPA-180 Z-11,552 DR-
52 CC X+0 Y+400
53 CP IPA-180 Z-13,203 DR-
54 CC X+0 Y+400
55 CP IPA-180 Z-14,854 DR-
56 CC X+0 Y+400
57 CP IPA-288,493 Z-17,5 DR-
58 L X+0,875 Y+400 F764
59 CC X-1,75 Y+400
60 C X-4,375 Y+400 DR+
61 CC X+1,75 Y+400
62 C X+7,875 Y+400 DR+
63 CC X-1,75 Y+400
64 C X+7,308 Y+403,255 DR+
65 CC X+0 Y+400
66 C X+0 Y+392 DR+
67 CC X+0 Y+400
68 C X+7,308 Y+403,255 DR+
69 L Z+50 FMAX
70 L X+601,586 Y+395,258 FMAX
71 L Z+2 FMAX
72 L Z+0,5 F500
73 CC X+600 Y+400
74 CP IPA-180 Z-1,151 DR-
75 CC X+600 Y+400
76 CP IPA-180 Z-2,802 DR-
77 CC X+600 Y+400
78 CP IPA-180 Z-4,453 DR-
79 CC X+600 Y+400
80 CP IPA-180 Z-6,104 DR-
81 CC X+600 Y+400
82 CP IPA-288,493 Z-8,75 DR-
83 L X+600,875 Y+400 F764
84 CC X+598,25 Y+400
85 C X+595,625 Y+400 DR+
86 CC X+601,75 Y+400
87 C X+607,875 Y+400 DR+
88 CC X+598,25 Y+400
89 C X+607,308 Y+403,255 DR+
90 CC X+600 Y+400
91 C X+600 Y+392 DR+
92 CC X+600 Y+400
93 C X+607,308 Y+403,255 DR+
94 L Z+10 FMAX
95 L X+601,586 Y+395,258 FMAX
96 L Z-6,75 FMAX
97 L Z-8,25 F500
98 CC X+600 Y+400
99 CP IPA-180 Z-9,901 DR-
100 CC X+600 Y+400
101 CP IPA-180 Z-11,552 DR-
102 CC X+600 Y+400
103 CP IPA-180 Z-13,203 DR-
104 CC X+600 Y+400
105 CP IPA-180 Z-14,854 DR-
106 CC X+600 Y+400
107 CP IPA-288,493 Z-17,5 DR-
108 L X+600,875 Y+400 F764
109 CC X+598,25 Y+400
110 C X+595,625 Y+400 DR+
111 CC X+601,75 Y+400
112 C X+607,875 Y+400 DR+
113 CC X+598,25 Y+400
114 C X+607,308 Y+403,255 DR+
115 CC X+600 Y+400
116 C X+600 Y+392 DR+
117 CC X+600 Y+400
118 C X+607,308 Y+403,255 DR+
119 L Z+50 FMAX
120 L X+601,586 Y-4,742 FMAX
121 L Z+2 FMAX
122 L Z+0,5 F500
123 CC X+600 Y+0
124 CP IPA-180 Z-1,151 DR-
125 CC X+600 Y+0
126 CP IPA-180 Z-2,802 DR-
127 CC X+600 Y+0
128 CP IPA-180 Z-4,453 DR-
129 CC X+600 Y+0
130 CP IPA-180 Z-6,104 DR-
131 CC X+600 Y+0
132 CP IPA-288,493 Z-8,75 DR-
133 L X+600,875 Y+0 F764
134 CC X+598,25 Y+0
135 C X+595,625 Y+0 DR+
136 CC X+601,75 Y+0
137 C X+607,875 Y+0 DR+
138 CC X+598,25 Y+0
139 C X+607,308 Y+3,255 DR+
140 CC X+600 Y+0
141 C X+600 Y-8 DR+
142 CC X+600 Y+0
143 C X+607,308 Y+3,255 DR+
144 L Z+10 FMAX
145 L X+601,586 Y-4,742 FMAX
146 L Z-6,75 FMAX
147 L Z-8,25 F500
148 CC X+600 Y+0
149 CP IPA-180 Z-9,901 DR-
150 CC X+600 Y+0
151 CP IPA-180 Z-11,552 DR-
152 CC X+600 Y+0
153 CP IPA-180 Z-13,203 DR-
154 CC X+600 Y+0
155 CP IPA-180 Z-14,854 DR-
156 CC X+600 Y+0
157 CP IPA-288,493 Z-17,5 DR-
158 L X+600,875 Y+0 F764
159 CC X+598,25 Y+0
160 C X+595,625 Y+0 DR+
161 CC X+601,75 Y+0
162 C X+607,875 Y+0 DR+
163 CC X+598,25 Y+0
164 C X+607,308 Y+3,255 DR+
165 CC X+600 Y+0
166 C X+600 Y-8 DR+
167 CC X+600 Y+0
168 C X+607,308 Y+3,255 DR+
169 L Z+50 FMAX
170 L X+1,586 Y-4,742 FMAX
171 L Z+2 FMAX
172 L Z+0,5 F500
173 CC X+0 Y+0
174 CP IPA-180 Z-1,151 DR-
175 CC X+0 Y+0
176 CP IPA-180 Z-2,802 DR-
177 CC X+0 Y+0
178 CP IPA-180 Z-4,453 DR-
179 CC X+0 Y+0
180 CP IPA-180 Z-6,104 DR-
181 CC X+0 Y+0
182 CP IPA-288,493 Z-8,75 DR-
183 L X+0,875 Y+0 F764
184 CC X-1,75 Y+0
185 C X-4,375 Y+0 DR+
186 CC X+1,75 Y+0
187 C X+7,875 Y+0 DR+
188 CC X-1,75 Y+0
189 C X+7,308 Y+3,255 DR+
190 CC X+0 Y+0
191 C X+0 Y-8 DR+
192 CC X+0 Y+0
193 C X+7,308 Y+3,255 DR+
194 L Z+10 FMAX
195 L X+1,586 Y-4,742 FMAX
196 L Z-6,75 FMAX
197 L Z-8,25 F500
198 CC X+0 Y+0
199 CP IPA-180 Z-9,901 DR-
200 CC X+0 Y+0
201 CP IPA-180 Z-11,552 DR-
202 CC X+0 Y+0
203 CP IPA-180 Z-13,203 DR-
204 CC X+0 Y+0
205 CP IPA-180 Z-14,854 DR-
206 CC X+0 Y+0
207 CP IPA-288,493 Z-17,5 DR-
208 L X+0,875 Y+0 F764
209 CC X-1,75 Y+0
210 C X-4,375 Y+0 DR+
211 CC X+1,75 Y+0
212 C X+7,875 Y+0 DR+
213 CC X-1,75 Y+0
214 C X+7,308 Y+3,255 DR+
215 CC X+0 Y+0
216 C X+0 Y-8 DR+
217 CC X+0 Y+0
218 C X+7,308 Y+3,255 DR+
219 L Z+50 FMAX
220 TOOL CALL 18 Z S3820 DR-5
221 L X+0 Y+400 Z+50 FMAX
222 L Z-6,75 FMAX
223 L Z-17,5 F500
224 L X+2 Y+404 RL F764
225 L Y+406
226 CC X+0 Y+406
227 C X+0 Y+408 DR+
228 CC X+0 Y+400
229 C X+0 Y+392 DR+
230 CC X+0 Y+400
231 C X+0 Y+408 DR+
232 CC X+0 Y+400
233 C X-1,979 Y+407,751 DR+
234 CC X+0 Y+400
235 C X+0 Y+392 DR+
236 CC X+0 Y+400
237 C X+0 Y+408 DR+
238 CC X+0 Y+400
239 C X-1,979 Y+407,751 DR+
240 CC X-1,484 Y+405,813
241 C X-3,422 Y+405,319 DR+
242 L X-2,927 Y+403,381
243 L X+0 Y+400 R0
244 L Z+50 FMAX
245 L X+600 FMAX
246 L Z-6,75 FMAX
247 L Z-17,5 F500
248 L X+602 Y+404 RL F764
249 L Y+406
250 CC X+600 Y+406
251 C X+600 Y+408 DR+
252 CC X+600 Y+400
253 C X+600 Y+392 DR+
254 CC X+600 Y+400
255 C X+600 Y+408 DR+
256 CC X+600 Y+400
257 C X+598,021 Y+407,751 DR+
258 CC X+600 Y+400
259 C X+600 Y+392 DR+
260 CC X+600 Y+400
261 C X+600 Y+408 DR+
262 CC X+600 Y+400
263 C X+598,021 Y+407,751 DR+
264 CC X+598,516 Y+405,813
265 C X+596,578 Y+405,319 DR+
266 L X+597,073 Y+403,381
267 L X+600 Y+400 R0
268 L Z+50 FMAX
269 L Y+0 FMAX
270 L Z-6,75 FMAX
271 L Z-17,5 F500
272 L X+602 Y+4 RL F764
273 L Y+6
274 CC X+600 Y+6
275 C X+600 Y+8 DR+
276 CC X+600 Y+0
277 C X+600 Y-8 DR+
278 CC X+600 Y+0
279 C X+600 Y+8 DR+
280 CC X+600 Y+0
281 C X+598,021 Y+7,751 DR+
282 CC X+600 Y+0
283 C X+600 Y-8 DR+
284 CC X+600 Y+0
285 C X+600 Y+8 DR+
286 CC X+600 Y+0
287 C X+598,021 Y+7,751 DR+
288 CC X+598,516 Y+5,813
289 C X+596,578 Y+5,319 DR+
290 L X+597,073 Y+3,381
291 L X+600 Y+0 R0
292 L Z+50 FMAX
293 L X+0 FMAX
294 L Z-6,75 FMAX
295 L Z-17,5 F500
296 L X+2 Y+4 RL F764
297 L Y+6
298 CC X+0 Y+6
299 C X+0 Y+8 DR+
300 CC X+0 Y+0
301 C X+0 Y-8 DR+
302 CC X+0 Y+0
303 C X+0 Y+8 DR+
304 CC X+0 Y+0
305 C X-1,979 Y+7,751 DR+
306 CC X+0 Y+0
307 C X+0 Y-8 DR+
308 CC X+0 Y+0
309 C X+0 Y+8 DR+
310 CC X+0 Y+0
311 C X-1,979 Y+7,751 DR+
312 CC X-1,484 Y+5,813
313 C X-3,422 Y+5,319 DR+
314 L X-2,927 Y+3,381
315 L X+0 Y+0 R0
316 L Z+50 FMAX
317 ; CORRECTION USURE GAUCHE
318 ; SUREP R 0. SUREP Z 0.
319 L X+167,303 Y+239,405 FMAX
320 L Z+2 FMAX
321 L Z-5,3 F500
322 L X+169,303 Y+250,555 RL F764
323 L Y+252,555
324 CC X+167,303 Y+252,555
325 C X+167,303 Y+254,555 DR+
326 CC X+167,303 Y+239,405
327 C X+167,303 Y+224,255 DR+
328 CC X+167,303 Y+239,405
329 C X+167,303 Y+254,555 DR+
330 CC X+167,303 Y+239,405
331 C X+165,309 Y+254,424 DR+
332 CC X+167,303 Y+239,405
333 C X+167,303 Y+224,255 DR+
334 CC X+167,303 Y+239,405
335 C X+167,303 Y+254,555 DR+
336 CC X+167,303 Y+239,405
337 C X+165,309 Y+254,424 DR+
338 CC X+165,572 Y+252,441
339 C X+163,59 Y+252,178 DR+
340 L X+163,853 Y+250,195
341 L X+167,303 Y+239,405 R0
342 L Z+50 FMAX
343 L X+404,303 Y+127,405 FMAX
344 L Z+2 FMAX
345 L Z-5,3 F500
346 L X+406,303 Y+138,555 RL F764
347 L Y+140,555
348 CC X+404,303 Y+140,555
349 C X+404,303 Y+142,555 DR+
350 CC X+404,303 Y+127,405
351 C X+404,303 Y+112,255 DR+
352 CC X+404,303 Y+127,405
353 C X+404,303 Y+142,555 DR+
354 CC X+404,303 Y+127,405
355 C X+402,309 Y+142,424 DR+
356 CC X+404,303 Y+127,405
357 C X+404,303 Y+112,255 DR+
358 CC X+404,303 Y+127,405
359 C X+404,303 Y+142,555 DR+
360 CC X+404,303 Y+127,405
361 C X+402,309 Y+142,424 DR+
362 CC X+402,572 Y+140,441
363 C X+400,59 Y+140,178 DR+
364 L X+400,853 Y+138,195
365 L X+404,303 Y+127,405 R0
366 L Z+50 FMAX
367 L X+199,299 Y+76,405 FMAX
368 L Z+2 FMAX
369 L Z-5,3 F500
370 L X+201,299 Y+87,555 RL F764
371 L Y+89,555
372 CC X+199,299 Y+89,555
373 C X+199,299 Y+91,555 DR+
374 CC X+199,299 Y+76,405
375 C X+199,299 Y+61,255 DR+
376 CC X+199,299 Y+76,405
377 C X+199,299 Y+91,555 DR+
378 CC X+199,299 Y+76,405
379 C X+197,305 Y+91,424 DR+
380 CC X+199,299 Y+76,405
381 C X+199,299 Y+61,255 DR+
382 CC X+199,299 Y+76,405
383 C X+199,299 Y+91,555 DR+
384 CC X+199,299 Y+76,405
385 C X+197,305 Y+91,424 DR+
386 CC X+197,568 Y+89,441
387 C X+195,586 Y+89,178 DR+
388 L X+195,849 Y+87,195
389 L X+199,299 Y+76,405 R0
390 L Z+50 FMAX
391 M78
392 M5
393 L Z-1 FMAX M91
394 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
395 ; CORRECTION USURE GAUCHE
396 ; SUREP R 0. SUREP Z 0.
397 TOOL CALL 1 Z S6000 DR-2,5
398 TOOL DEF 18
399 L X+0 Y+400 FMAX M3
400 L Z+50 FMAX
401 L Z+2 FMAX
402 L Z-2,5 F800
403 L X+1 Y+408,5 RL F1200
404 L Y+409,5
405 CC X+0 Y+409,5
406 C X+0 Y+410,5 DR+
407 CC X+0 Y+400
408 C X+0 Y+389,5 DR+
409 CC X+0 Y+400
410 C X+0 Y+410,5 DR+
411 CC X+0 Y+400
412 C X-1,988 Y+410,31 DR+
413 CC X-1,799 Y+409,328
414 C X-2,781 Y+409,139 DR+
415 L X-2,591 Y+408,157
416 L X+0 Y+400 R0
417 L Z+50 FMAX
418 L X+600 FMAX
419 L Z+2 FMAX
420 L Z-2,5 F800
421 L X+601 Y+408,5 RL F1200
422 L Y+409,5
423 CC X+600 Y+409,5
424 C X+600 Y+410,5 DR+
425 CC X+600 Y+400
426 C X+600 Y+389,5 DR+
427 CC X+600 Y+400
428 C X+600 Y+410,5 DR+
429 CC X+600 Y+400
430 C X+598,012 Y+410,31 DR+
431 CC X+598,201 Y+409,328
432 C X+597,219 Y+409,139 DR+
433 L X+597,409 Y+408,157
434 L X+600 Y+400 R0
435 L Z+50 FMAX
436 L Y+0 FMAX
437 L Z+2 FMAX
438 L Z-2,5 F800
439 L X+601 Y+8,5 RL F1200
440 L Y+9,5
441 CC X+600 Y+9,5
442 C X+600 Y+10,5 DR+
443 CC X+600 Y+0
444 C X+600 Y-10,5 DR+
445 CC X+600 Y+0
446 C X+600 Y+10,5 DR+
447 CC X+600 Y+0
448 C X+598,012 Y+10,31 DR+
449 CC X+598,201 Y+9,328
450 C X+597,219 Y+9,139 DR+
451 L X+597,409 Y+8,157
452 L X+600 Y+0 R0
453 L Z+50 FMAX
454 L X+0 FMAX
455 L Z+2 FMAX
456 L Z-2,5 F800
457 L X+1 Y+8,5 RL F1200
458 L Y+9,5
459 CC X+0 Y+9,5
460 C X+0 Y+10,5 DR+
461 CC X+0 Y+0
462 C X+0 Y-10,5 DR+
463 CC X+0 Y+0
464 C X+0 Y+10,5 DR+
465 CC X+0 Y+0
466 C X-1,988 Y+10,31 DR+
467 CC X-1,799 Y+9,328
468 C X-2,781 Y+9,139 DR+
469 L X-2,591 Y+8,157
470 L X+0 Y+0 R0
471 L Z+50 FMAX
472 L X+199,299 Y+76,405 FMAX
473 L Z+2 FMAX
474 L Z-2,5 F800
475 L X+200,299 Y+92,055 RL F1200
476 L Y+93,055
477 CC X+199,299 Y+93,055
478 C X+199,299 Y+94,055 DR+
479 CC X+199,299 Y+76,405
480 C X+199,299 Y+58,755 DR+
481 CC X+199,299 Y+76,405
482 C X+199,299 Y+94,055 DR+
483 CC X+199,299 Y+76,405
484 C X+197,304 Y+93,942 DR+
485 CC X+197,417 Y+92,949
486 C X+196,423 Y+92,836 DR+
487 L X+196,536 Y+91,842
488 L X+199,299 Y+76,405 R0
489 L Z+50 FMAX
490 L X+167,303 Y+239,405 FMAX
491 L Z+2 FMAX
492 L Z-2,5 F800
493 L X+168,303 Y+255,055 RL F1200
494 L Y+256,055
495 CC X+167,303 Y+256,055
496 C X+167,303 Y+257,055 DR+
497 CC X+167,303 Y+239,405
498 C X+167,303 Y+221,755 DR+
499 CC X+167,303 Y+239,405
500 C X+167,303 Y+257,055 DR+
501 CC X+167,303 Y+239,405
502 C X+165,308 Y+256,942 DR+
503 CC X+165,421 Y+255,949
504 C X+164,427 Y+255,836 DR+
505 L X+164,54 Y+254,842
506 L X+167,303 Y+239,405 R0
507 L Z+50 FMAX
508 L X+404,303 Y+127,405 FMAX
509 L Z+2 FMAX
510 L Z-2,5 F800
511 L X+405,303 Y+143,055 RL F1200
512 L Y+144,055
513 CC X+404,303 Y+144,055
514 C X+404,303 Y+145,055 DR+
515 CC X+404,303 Y+127,405
516 C X+404,303 Y+109,755 DR+
517 CC X+404,303 Y+127,405
518 C X+404,303 Y+145,055 DR+
519 CC X+404,303 Y+127,405
520 C X+402,308 Y+144,942 DR+
521 CC X+402,421 Y+143,949
522 C X+401,427 Y+143,836 DR+
523 L X+401,54 Y+142,842
524 L X+404,303 Y+127,405 R0
525 L Z+50 FMAX
526 L X+0 Y+360 FMAX
527 L Z+2 FMAX
528 L Z-2,5 F800
529 L X+1 Y+365,5 RL F1200
530 L Y+366,5
531 CC X+0 Y+366,5
532 C X+0 Y+367,5 DR+
533 CC X+0 Y+360
534 C X+0 Y+352,5 DR+
535 CC X+0 Y+360
536 C X+0 Y+367,5 DR+
537 CC X+0 Y+360
538 C X-1,976 Y+367,235 DR+
539 CC X-1,713 Y+366,27
540 C X-2,678 Y+366,007 DR+
541 L X-2,414 Y+365,042
542 L X+0 Y+360 R0
543 L Z+50 FMAX
544 L X+600 FMAX
545 L Z+2 FMAX
546 L Z-2,5 F800
547 L X+601 Y+365,5 RL F1200
548 L Y+366,5
549 CC X+600 Y+366,5
550 C X+600 Y+367,5 DR+
551 CC X+600 Y+360
552 C X+600 Y+352,5 DR+
553 CC X+600 Y+360
554 C X+600 Y+367,5 DR+
555 CC X+600 Y+360
556 C X+598,024 Y+367,235 DR+
557 CC X+598,287 Y+366,27
558 C X+597,322 Y+366,007 DR+
559 L X+597,586 Y+365,042
560 L X+600 Y+360 R0
561 L Z+50 FMAX
562 M5
563 L Z-1 FMAX M91
564 L Y-1 FMAX M91
565 M30
566 END PGM REP 19 1293 OP 10 MM
