0 BEGIN PGM REP 1001 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 1001
4 ; PROG-CN DU 22-09-21 A 10:17
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T16 P15322391 Z160 SANS TROU FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T16 P15322391 Z160 SANS TROU FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
16 ; CORRECTION AUCUNE
17 ; SUREP R 0. SUREP Z 0.
18 TOOL CALL 16 Z S2188 DR+0
19 TOOL DEF 1
20 L X-57,726 Y+40,64 FMAX M3
21 L Z+50 FMAX M25
22 L Z+2 FMAX
23 L Z+0,5 F350
24 CC X-55 Y+40
25 CP IPA-180 Z+0,193 DR-
26 CC X-55 Y+40
27 CP IPA-180 Z-0,114 DR-
28 CC X-55 Y+40
29 CP IPA-180 Z-0,421 DR-
30 CC X-55 Y+40
31 CP IPA-180 Z-0,729 DR-
32 CC X-55 Y+40
33 CP IPA-180 Z-1,036 DR-
34 CC X-55 Y+40
35 CP IPA-180 Z-1,343 DR-
36 CC X-55 Y+40
37 CP IPA-180 Z-1,65 DR-
38 CC X-55 Y+40
39 CP IPA-180 Z-1,957 DR-
40 CC X-55 Y+40
41 CP IPA-180 Z-2,265 DR-
42 CC X-55 Y+40
43 CP IPA-180 Z-2,572 DR-
44 CC X-55 Y+40
45 CP IPA-180 Z-2,879 DR-
46 CC X-55 Y+40
47 CP IPA-180 Z-3,186 DR-
48 CC X-55 Y+40
49 CP IPA-180 Z-3,494 DR-
50 CC X-55 Y+40
51 CP IPA-180 Z-3,801 DR-
52 CC X-55 Y+40
53 CP IPA-180 Z-4,108 DR-
54 CC X-55 Y+40
55 CP IPA-180 Z-4,415 DR-
56 CC X-55 Y+40
57 CP IPA-180 Z-4,722 DR-
58 CC X-55 Y+40
59 CP IPA-180 Z-5,029 DR-
60 CC X-55 Y+40
61 CP IPA-180 Z-5,337 DR-
62 CC X-55 Y+40
63 CP IPA-180 Z-5,644 DR-
64 CC X-55 Y+40
65 CP IPA-180 Z-5,951 DR-
66 CC X-55 Y+40
67 CP IPA-180 Z-6,258 DR-
68 CC X-55 Y+40
69 CP IPA-180 Z-6,565 DR-
70 CC X-55 Y+40
71 CP IPA-180 Z-6,872 DR-
72 CC X-55 Y+40
73 CP IPA-180 Z-7,18 DR-
74 CC X-55 Y+40
75 CP IPA-180 Z-7,487 DR-
76 CC X-55 Y+40
77 CP IPA-180 Z-7,794 DR-
78 CC X-55 Y+40
79 CP IPA-180 Z-8,101 DR-
80 CC X-55 Y+40
81 CP IPA-180 Z-8,408 DR-
82 CC X-55 Y+40
83 CP IPA-180 Z-8,715 DR-
84 CC X-55 Y+40
85 CP IPA-166,788 Z-9 DR-
86 L X-54,4 Y+40
87 CC X-56,2 Y+40
88 C X-58 Y+40 DR+
89 CC X-53,8 Y+40
90 C X-56,646 Y+36,911 DR+
91 CC X-55 Y+40
92 C X-55 Y+36,5 DR+
93 CC X-55 Y+40
94 C X-56,646 Y+36,911 DR+
95 L Z+10 FMAX
96 L X-57,726 Y+40,64 FMAX
97 L Z-7 FMAX
98 L Z-8,5
99 CC X-55 Y+40
100 CP IPA-180 Z-8,807 DR-
101 CC X-55 Y+40
102 CP IPA-180 Z-9,114 DR-
103 CC X-55 Y+40
104 CP IPA-180 Z-9,422 DR-
105 CC X-55 Y+40
106 CP IPA-180 Z-9,729 DR-
107 CC X-55 Y+40
108 CP IPA-180 Z-10,036 DR-
109 CC X-55 Y+40
110 CP IPA-180 Z-10,343 DR-
111 CC X-55 Y+40
112 CP IPA-180 Z-10,65 DR-
113 CC X-55 Y+40
114 CP IPA-180 Z-10,957 DR-
115 CC X-55 Y+40
116 CP IPA-180 Z-11,265 DR-
117 CC X-55 Y+40
118 CP IPA-180 Z-11,572 DR-
119 CC X-55 Y+40
120 CP IPA-180 Z-11,879 DR-
121 CC X-55 Y+40
122 CP IPA-180 Z-12,186 DR-
123 CC X-55 Y+40
124 CP IPA-180 Z-12,494 DR-
125 CC X-55 Y+40
126 CP IPA-180 Z-12,801 DR-
127 CC X-55 Y+40
128 CP IPA-180 Z-13,108 DR-
129 CC X-55 Y+40
130 CP IPA-180 Z-13,415 DR-
131 CC X-55 Y+40
132 CP IPA-180 Z-13,722 DR-
133 CC X-55 Y+40
134 CP IPA-180 Z-14,029 DR-
135 CC X-55 Y+40
136 CP IPA-180 Z-14,337 DR-
137 CC X-55 Y+40
138 CP IPA-180 Z-14,644 DR-
139 CC X-55 Y+40
140 CP IPA-180 Z-14,951 DR-
141 CC X-55 Y+40
142 CP IPA-180 Z-15,258 DR-
143 CC X-55 Y+40
144 CP IPA-180 Z-15,565 DR-
145 CC X-55 Y+40
146 CP IPA-180 Z-15,872 DR-
147 CC X-55 Y+40
148 CP IPA-180 Z-16,179 DR-
149 CC X-55 Y+40
150 CP IPA-180 Z-16,487 DR-
151 CC X-55 Y+40
152 CP IPA-180 Z-16,794 DR-
153 CC X-55 Y+40
154 CP IPA-180 Z-17,101 DR-
155 CC X-55 Y+40
156 CP IPA-180 Z-17,408 DR-
157 CC X-55 Y+40
158 CP IPA-180 Z-17,715 DR-
159 CC X-55 Y+40
160 CP IPA-166,788 Z-18 DR-
161 L X-54,4 Y+40
162 CC X-56,2 Y+40
163 C X-58 Y+40 DR+
164 CC X-53,8 Y+40
165 C X-56,646 Y+36,911 DR+
166 CC X-55 Y+40
167 C X-55 Y+36,5 DR+
168 CC X-55 Y+40
169 C X-56,646 Y+36,911 DR+
170 L Z+50 FMAX
171 L X+52,274 Y+40,64 FMAX
172 L Z+2 FMAX
173 L Z+0,5
174 CC X+55 Y+40
175 CP IPA-180 Z+0,193 DR-
176 CC X+55 Y+40
177 CP IPA-180 Z-0,114 DR-
178 CC X+55 Y+40
179 CP IPA-180 Z-0,421 DR-
180 CC X+55 Y+40
181 CP IPA-180 Z-0,729 DR-
182 CC X+55 Y+40
183 CP IPA-180 Z-1,036 DR-
184 CC X+55 Y+40
185 CP IPA-180 Z-1,343 DR-
186 CC X+55 Y+40
187 CP IPA-180 Z-1,65 DR-
188 CC X+55 Y+40
189 CP IPA-180 Z-1,957 DR-
190 CC X+55 Y+40
191 CP IPA-180 Z-2,265 DR-
192 CC X+55 Y+40
193 CP IPA-180 Z-2,572 DR-
194 CC X+55 Y+40
195 CP IPA-180 Z-2,879 DR-
196 CC X+55 Y+40
197 CP IPA-180 Z-3,186 DR-
198 CC X+55 Y+40
199 CP IPA-180 Z-3,494 DR-
200 CC X+55 Y+40
201 CP IPA-180 Z-3,801 DR-
202 CC X+55 Y+40
203 CP IPA-180 Z-4,108 DR-
204 CC X+55 Y+40
205 CP IPA-180 Z-4,415 DR-
206 CC X+55 Y+40
207 CP IPA-180 Z-4,722 DR-
208 CC X+55 Y+40
209 CP IPA-180 Z-5,029 DR-
210 CC X+55 Y+40
211 CP IPA-180 Z-5,337 DR-
212 CC X+55 Y+40
213 CP IPA-180 Z-5,644 DR-
214 CC X+55 Y+40
215 CP IPA-180 Z-5,951 DR-
216 CC X+55 Y+40
217 CP IPA-180 Z-6,258 DR-
218 CC X+55 Y+40
219 CP IPA-180 Z-6,565 DR-
220 CC X+55 Y+40
221 CP IPA-180 Z-6,872 DR-
222 CC X+55 Y+40
223 CP IPA-180 Z-7,18 DR-
224 CC X+55 Y+40
225 CP IPA-180 Z-7,487 DR-
226 CC X+55 Y+40
227 CP IPA-180 Z-7,794 DR-
228 CC X+55 Y+40
229 CP IPA-180 Z-8,101 DR-
230 CC X+55 Y+40
231 CP IPA-180 Z-8,408 DR-
232 CC X+55 Y+40
233 CP IPA-180 Z-8,715 DR-
234 CC X+55 Y+40
235 CP IPA-166,788 Z-9 DR-
236 L X+55,6 Y+40
237 CC X+53,8 Y+40
238 C X+52 Y+40 DR+
239 CC X+56,2 Y+40
240 C X+53,354 Y+36,911 DR+
241 CC X+55 Y+40
242 C X+55 Y+36,5 DR+
243 CC X+55 Y+40
244 C X+53,354 Y+36,911 DR+
245 L Z+10 FMAX
246 L X+52,274 Y+40,64 FMAX
247 L Z-7 FMAX
248 L Z-8,5
249 CC X+55 Y+40
250 CP IPA-180 Z-8,807 DR-
251 CC X+55 Y+40
252 CP IPA-180 Z-9,114 DR-
253 CC X+55 Y+40
254 CP IPA-180 Z-9,422 DR-
255 CC X+55 Y+40
256 CP IPA-180 Z-9,729 DR-
257 CC X+55 Y+40
258 CP IPA-180 Z-10,036 DR-
259 CC X+55 Y+40
260 CP IPA-180 Z-10,343 DR-
261 CC X+55 Y+40
262 CP IPA-180 Z-10,65 DR-
263 CC X+55 Y+40
264 CP IPA-180 Z-10,957 DR-
265 CC X+55 Y+40
266 CP IPA-180 Z-11,265 DR-
267 CC X+55 Y+40
268 CP IPA-180 Z-11,572 DR-
269 CC X+55 Y+40
270 CP IPA-180 Z-11,879 DR-
271 CC X+55 Y+40
272 CP IPA-180 Z-12,186 DR-
273 CC X+55 Y+40
274 CP IPA-180 Z-12,494 DR-
275 CC X+55 Y+40
276 CP IPA-180 Z-12,801 DR-
277 CC X+55 Y+40
278 CP IPA-180 Z-13,108 DR-
279 CC X+55 Y+40
280 CP IPA-180 Z-13,415 DR-
281 CC X+55 Y+40
282 CP IPA-180 Z-13,722 DR-
283 CC X+55 Y+40
284 CP IPA-180 Z-14,029 DR-
285 CC X+55 Y+40
286 CP IPA-180 Z-14,337 DR-
287 CC X+55 Y+40
288 CP IPA-180 Z-14,644 DR-
289 CC X+55 Y+40
290 CP IPA-180 Z-14,951 DR-
291 CC X+55 Y+40
292 CP IPA-180 Z-15,258 DR-
293 CC X+55 Y+40
294 CP IPA-180 Z-15,565 DR-
295 CC X+55 Y+40
296 CP IPA-180 Z-15,872 DR-
297 CC X+55 Y+40
298 CP IPA-180 Z-16,179 DR-
299 CC X+55 Y+40
300 CP IPA-180 Z-16,487 DR-
301 CC X+55 Y+40
302 CP IPA-180 Z-16,794 DR-
303 CC X+55 Y+40
304 CP IPA-180 Z-17,101 DR-
305 CC X+55 Y+40
306 CP IPA-180 Z-17,408 DR-
307 CC X+55 Y+40
308 CP IPA-180 Z-17,715 DR-
309 CC X+55 Y+40
310 CP IPA-166,788 Z-18 DR-
311 L X+55,6 Y+40
312 CC X+53,8 Y+40
313 C X+52 Y+40 DR+
314 CC X+56,2 Y+40
315 C X+53,354 Y+36,911 DR+
316 CC X+55 Y+40
317 C X+55 Y+36,5 DR+
318 CC X+55 Y+40
319 C X+53,354 Y+36,911 DR+
320 L Z+50 FMAX
321 L X+52,274 Y-39,36 FMAX
322 L Z+2 FMAX
323 L Z+0,5
324 CC X+55 Y-40
325 CP IPA-180 Z+0,193 DR-
326 CC X+55 Y-40
327 CP IPA-180 Z-0,114 DR-
328 CC X+55 Y-40
329 CP IPA-180 Z-0,421 DR-
330 CC X+55 Y-40
331 CP IPA-180 Z-0,729 DR-
332 CC X+55 Y-40
333 CP IPA-180 Z-1,036 DR-
334 CC X+55 Y-40
335 CP IPA-180 Z-1,343 DR-
336 CC X+55 Y-40
337 CP IPA-180 Z-1,65 DR-
338 CC X+55 Y-40
339 CP IPA-180 Z-1,957 DR-
340 CC X+55 Y-40
341 CP IPA-180 Z-2,265 DR-
342 CC X+55 Y-40
343 CP IPA-180 Z-2,572 DR-
344 CC X+55 Y-40
345 CP IPA-180 Z-2,879 DR-
346 CC X+55 Y-40
347 CP IPA-180 Z-3,186 DR-
348 CC X+55 Y-40
349 CP IPA-180 Z-3,494 DR-
350 CC X+55 Y-40
351 CP IPA-180 Z-3,801 DR-
352 CC X+55 Y-40
353 CP IPA-180 Z-4,108 DR-
354 CC X+55 Y-40
355 CP IPA-180 Z-4,415 DR-
356 CC X+55 Y-40
357 CP IPA-180 Z-4,722 DR-
358 CC X+55 Y-40
359 CP IPA-180 Z-5,029 DR-
360 CC X+55 Y-40
361 CP IPA-180 Z-5,337 DR-
362 CC X+55 Y-40
363 CP IPA-180 Z-5,644 DR-
364 CC X+55 Y-40
365 CP IPA-180 Z-5,951 DR-
366 CC X+55 Y-40
367 CP IPA-180 Z-6,258 DR-
368 CC X+55 Y-40
369 CP IPA-180 Z-6,565 DR-
370 CC X+55 Y-40
371 CP IPA-180 Z-6,872 DR-
372 CC X+55 Y-40
373 CP IPA-180 Z-7,18 DR-
374 CC X+55 Y-40
375 CP IPA-180 Z-7,487 DR-
376 CC X+55 Y-40
377 CP IPA-180 Z-7,794 DR-
378 CC X+55 Y-40
379 CP IPA-180 Z-8,101 DR-
380 CC X+55 Y-40
381 CP IPA-180 Z-8,408 DR-
382 CC X+55 Y-40
383 CP IPA-180 Z-8,715 DR-
384 CC X+55 Y-40
385 CP IPA-166,788 Z-9 DR-
386 L X+55,6 Y-40
387 CC X+53,8 Y-40
388 C X+52 Y-40 DR+
389 CC X+56,2 Y-40
390 C X+53,354 Y-43,089 DR+
391 CC X+55 Y-40
392 C X+55 Y-43,5 DR+
393 CC X+55 Y-40
394 C X+53,354 Y-43,089 DR+
395 L Z+10 FMAX
396 L X+52,274 Y-39,36 FMAX
397 L Z-7 FMAX
398 L Z-8,5
399 CC X+55 Y-40
400 CP IPA-180 Z-8,807 DR-
401 CC X+55 Y-40
402 CP IPA-180 Z-9,114 DR-
403 CC X+55 Y-40
404 CP IPA-180 Z-9,422 DR-
405 CC X+55 Y-40
406 CP IPA-180 Z-9,729 DR-
407 CC X+55 Y-40
408 CP IPA-180 Z-10,036 DR-
409 CC X+55 Y-40
410 CP IPA-180 Z-10,343 DR-
411 CC X+55 Y-40
412 CP IPA-180 Z-10,65 DR-
413 CC X+55 Y-40
414 CP IPA-180 Z-10,957 DR-
415 CC X+55 Y-40
416 CP IPA-180 Z-11,265 DR-
417 CC X+55 Y-40
418 CP IPA-180 Z-11,572 DR-
419 CC X+55 Y-40
420 CP IPA-180 Z-11,879 DR-
421 CC X+55 Y-40
422 CP IPA-180 Z-12,186 DR-
423 CC X+55 Y-40
424 CP IPA-180 Z-12,494 DR-
425 CC X+55 Y-40
426 CP IPA-180 Z-12,801 DR-
427 CC X+55 Y-40
428 CP IPA-180 Z-13,108 DR-
429 CC X+55 Y-40
430 CP IPA-180 Z-13,415 DR-
431 CC X+55 Y-40
432 CP IPA-180 Z-13,722 DR-
433 CC X+55 Y-40
434 CP IPA-180 Z-14,029 DR-
435 CC X+55 Y-40
436 CP IPA-180 Z-14,337 DR-
437 CC X+55 Y-40
438 CP IPA-180 Z-14,644 DR-
439 CC X+55 Y-40
440 CP IPA-180 Z-14,951 DR-
441 CC X+55 Y-40
442 CP IPA-180 Z-15,258 DR-
443 CC X+55 Y-40
444 CP IPA-180 Z-15,565 DR-
445 CC X+55 Y-40
446 CP IPA-180 Z-15,872 DR-
447 CC X+55 Y-40
448 CP IPA-180 Z-16,179 DR-
449 CC X+55 Y-40
450 CP IPA-180 Z-16,487 DR-
451 CC X+55 Y-40
452 CP IPA-180 Z-16,794 DR-
453 CC X+55 Y-40
454 CP IPA-180 Z-17,101 DR-
455 CC X+55 Y-40
456 CP IPA-180 Z-17,408 DR-
457 CC X+55 Y-40
458 CP IPA-180 Z-17,715 DR-
459 CC X+55 Y-40
460 CP IPA-166,788 Z-18 DR-
461 L X+55,6 Y-40
462 CC X+53,8 Y-40
463 C X+52 Y-40 DR+
464 CC X+56,2 Y-40
465 C X+53,354 Y-43,089 DR+
466 CC X+55 Y-40
467 C X+55 Y-43,5 DR+
468 CC X+55 Y-40
469 C X+53,354 Y-43,089 DR+
470 L Z+50 FMAX
471 L X-57,726 Y-39,36 FMAX
472 L Z+2 FMAX
473 L Z+0,5
474 CC X-55 Y-40
475 CP IPA-180 Z+0,193 DR-
476 CC X-55 Y-40
477 CP IPA-180 Z-0,114 DR-
478 CC X-55 Y-40
479 CP IPA-180 Z-0,421 DR-
480 CC X-55 Y-40
481 CP IPA-180 Z-0,729 DR-
482 CC X-55 Y-40
483 CP IPA-180 Z-1,036 DR-
484 CC X-55 Y-40
485 CP IPA-180 Z-1,343 DR-
486 CC X-55 Y-40
487 CP IPA-180 Z-1,65 DR-
488 CC X-55 Y-40
489 CP IPA-180 Z-1,957 DR-
490 CC X-55 Y-40
491 CP IPA-180 Z-2,265 DR-
492 CC X-55 Y-40
493 CP IPA-180 Z-2,572 DR-
494 CC X-55 Y-40
495 CP IPA-180 Z-2,879 DR-
496 CC X-55 Y-40
497 CP IPA-180 Z-3,186 DR-
498 CC X-55 Y-40
499 CP IPA-180 Z-3,494 DR-
500 CC X-55 Y-40
501 CP IPA-180 Z-3,801 DR-
502 CC X-55 Y-40
503 CP IPA-180 Z-4,108 DR-
504 CC X-55 Y-40
505 CP IPA-180 Z-4,415 DR-
506 CC X-55 Y-40
507 CP IPA-180 Z-4,722 DR-
508 CC X-55 Y-40
509 CP IPA-180 Z-5,029 DR-
510 CC X-55 Y-40
511 CP IPA-180 Z-5,337 DR-
512 CC X-55 Y-40
513 CP IPA-180 Z-5,644 DR-
514 CC X-55 Y-40
515 CP IPA-180 Z-5,951 DR-
516 CC X-55 Y-40
517 CP IPA-180 Z-6,258 DR-
518 CC X-55 Y-40
519 CP IPA-180 Z-6,565 DR-
520 CC X-55 Y-40
521 CP IPA-180 Z-6,872 DR-
522 CC X-55 Y-40
523 CP IPA-180 Z-7,18 DR-
524 CC X-55 Y-40
525 CP IPA-180 Z-7,487 DR-
526 CC X-55 Y-40
527 CP IPA-180 Z-7,794 DR-
528 CC X-55 Y-40
529 CP IPA-180 Z-8,101 DR-
530 CC X-55 Y-40
531 CP IPA-180 Z-8,408 DR-
532 CC X-55 Y-40
533 CP IPA-180 Z-8,715 DR-
534 CC X-55 Y-40
535 CP IPA-166,788 Z-9 DR-
536 L X-54,4 Y-40
537 CC X-56,2 Y-40
538 C X-58 Y-40 DR+
539 CC X-53,8 Y-40
540 C X-56,646 Y-43,089 DR+
541 CC X-55 Y-40
542 C X-55 Y-43,5 DR+
543 CC X-55 Y-40
544 C X-56,646 Y-43,089 DR+
545 L Z+10 FMAX
546 L X-57,726 Y-39,36 FMAX
547 L Z-7 FMAX
548 L Z-8,5
549 CC X-55 Y-40
550 CP IPA-180 Z-8,807 DR-
551 CC X-55 Y-40
552 CP IPA-180 Z-9,114 DR-
553 CC X-55 Y-40
554 CP IPA-180 Z-9,422 DR-
555 CC X-55 Y-40
556 CP IPA-180 Z-9,729 DR-
557 CC X-55 Y-40
558 CP IPA-180 Z-10,036 DR-
559 CC X-55 Y-40
560 CP IPA-180 Z-10,343 DR-
561 CC X-55 Y-40
562 CP IPA-180 Z-10,65 DR-
563 CC X-55 Y-40
564 CP IPA-180 Z-10,957 DR-
565 CC X-55 Y-40
566 CP IPA-180 Z-11,265 DR-
567 CC X-55 Y-40
568 CP IPA-180 Z-11,572 DR-
569 CC X-55 Y-40
570 CP IPA-180 Z-11,879 DR-
571 CC X-55 Y-40
572 CP IPA-180 Z-12,186 DR-
573 CC X-55 Y-40
574 CP IPA-180 Z-12,494 DR-
575 CC X-55 Y-40
576 CP IPA-180 Z-12,801 DR-
577 CC X-55 Y-40
578 CP IPA-180 Z-13,108 DR-
579 CC X-55 Y-40
580 CP IPA-180 Z-13,415 DR-
581 CC X-55 Y-40
582 CP IPA-180 Z-13,722 DR-
583 CC X-55 Y-40
584 CP IPA-180 Z-14,029 DR-
585 CC X-55 Y-40
586 CP IPA-180 Z-14,337 DR-
587 CC X-55 Y-40
588 CP IPA-180 Z-14,644 DR-
589 CC X-55 Y-40
590 CP IPA-180 Z-14,951 DR-
591 CC X-55 Y-40
592 CP IPA-180 Z-15,258 DR-
593 CC X-55 Y-40
594 CP IPA-180 Z-15,565 DR-
595 CC X-55 Y-40
596 CP IPA-180 Z-15,872 DR-
597 CC X-55 Y-40
598 CP IPA-180 Z-16,179 DR-
599 CC X-55 Y-40
600 CP IPA-180 Z-16,487 DR-
601 CC X-55 Y-40
602 CP IPA-180 Z-16,794 DR-
603 CC X-55 Y-40
604 CP IPA-180 Z-17,101 DR-
605 CC X-55 Y-40
606 CP IPA-180 Z-17,408 DR-
607 CC X-55 Y-40
608 CP IPA-180 Z-17,715 DR-
609 CC X-55 Y-40
610 CP IPA-166,788 Z-18 DR-
611 L X-54,4 Y-40
612 CC X-56,2 Y-40
613 C X-58 Y-40 DR+
614 CC X-53,8 Y-40
615 C X-56,646 Y-43,089 DR+
616 CC X-55 Y-40
617 C X-55 Y-43,5 DR+
618 CC X-55 Y-40
619 C X-56,646 Y-43,089 DR+
620 L Z+50 FMAX
621 TOOL CALL 16 Z S2188 DR-4
622 L X-55 Y+40 Z+50 FMAX
623 L Z-7 FMAX
624 L Z-18
625 L X-54,2 Y+41,9 RL
626 L Y+42,7
627 CC X-55 Y+42,7
628 C X-55 Y+43,5 DR+
629 CC X-55 Y+40
630 C X-55 Y+36,5 DR+
631 CC X-55 Y+40
632 C X-55 Y+43,5 DR+
633 CC X-55 Y+40
634 C X-55,986 Y+43,358 DR+
635 CC X-55 Y+40
636 C X-55 Y+36,5 DR+
637 CC X-55 Y+40
638 C X-55 Y+43,5 DR+
639 CC X-55 Y+40
640 C X-55,986 Y+43,358 DR+
641 CC X-55,761 Y+42,591
642 C X-56,529 Y+42,365 DR+
643 L X-56,303 Y+41,598
644 L X-55 Y+40 R0
645 L Z+50 FMAX
646 L X+55 FMAX
647 L Z-7 FMAX
648 L Z-18
649 L X+55,8 Y+41,9 RL
650 L Y+42,7
651 CC X+55 Y+42,7
652 C X+55 Y+43,5 DR+
653 CC X+55 Y+40
654 C X+55 Y+36,5 DR+
655 CC X+55 Y+40
656 C X+55 Y+43,5 DR+
657 CC X+55 Y+40
658 C X+54,014 Y+43,358 DR+
659 CC X+55 Y+40
660 C X+55 Y+36,5 DR+
661 CC X+55 Y+40
662 C X+55 Y+43,5 DR+
663 CC X+55 Y+40
664 C X+54,014 Y+43,358 DR+
665 CC X+54,239 Y+42,591
666 C X+53,471 Y+42,365 DR+
667 L X+53,697 Y+41,598
668 L X+55 Y+40 R0
669 L Z+50 FMAX
670 L Y-40 FMAX
671 L Z-7 FMAX
672 L Z-18
673 L X+55,8 Y-38,1 RL
674 L Y-37,3
675 CC X+55 Y-37,3
676 C X+55 Y-36,5 DR+
677 CC X+55 Y-40
678 C X+55 Y-43,5 DR+
679 CC X+55 Y-40
680 C X+55 Y-36,5 DR+
681 CC X+55 Y-40
682 C X+54,014 Y-36,642 DR+
683 CC X+55 Y-40
684 C X+55 Y-43,5 DR+
685 CC X+55 Y-40
686 C X+55 Y-36,5 DR+
687 CC X+55 Y-40
688 C X+54,014 Y-36,642 DR+
689 CC X+54,239 Y-37,409
690 C X+53,471 Y-37,635 DR+
691 L X+53,697 Y-38,402
692 L X+55 Y-40 R0
693 L Z+50 FMAX
694 L X-55 FMAX
695 L Z-7 FMAX
696 L Z-18
697 L X-54,2 Y-38,1 RL
698 L Y-37,3
699 CC X-55 Y-37,3
700 C X-55 Y-36,5 DR+
701 CC X-55 Y-40
702 C X-55 Y-43,5 DR+
703 CC X-55 Y-40
704 C X-55 Y-36,5 DR+
705 CC X-55 Y-40
706 C X-55,986 Y-36,642 DR+
707 CC X-55 Y-40
708 C X-55 Y-43,5 DR+
709 CC X-55 Y-40
710 C X-55 Y-36,5 DR+
711 CC X-55 Y-40
712 C X-55,986 Y-36,642 DR+
713 CC X-55,761 Y-37,409
714 C X-56,529 Y-37,635 DR+
715 L X-56,303 Y-38,402
716 L X-55 Y-40 R0
717 L Z+50 FMAX
718 M78
719 M5
720 L Z-1 FMAX M91
721 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
722 ; CORRECTION USURE GAUCHE
723 ; SUREP R 0. SUREP Z 0.
724 TOOL CALL 1 Z S6000 DR-2,5
725 TOOL DEF 20
726 L X-55 Y+40 FMAX M3
727 L Z+50 FMAX
728 L Z+2 FMAX
729 L Z-2,5 F800
730 L X-54,5 Y+44 RL F1200
731 L Y+44,5
732 CC X-55 Y+44,5
733 C X-55 Y+45 DR+
734 CC X-55 Y+40
735 C X-55 Y+35 DR+
736 CC X-55 Y+40
737 C X-55 Y+45 DR+
738 CC X-55 Y+40
739 C X-55,993 Y+44,9 DR+
740 CC X-55,894 Y+44,41
741 C X-56,384 Y+44,311 DR+
742 L X-56,285 Y+43,821
743 L X-55 Y+40 R0
744 L Z+50 FMAX
745 L X+55 FMAX
746 L Z+2 FMAX
747 L Z-2,5 F800
748 L X+55,5 Y+44 RL F1200
749 L Y+44,5
750 CC X+55 Y+44,5
751 C X+55 Y+45 DR+
752 CC X+55 Y+40
753 C X+55 Y+35 DR+
754 CC X+55 Y+40
755 C X+55 Y+45 DR+
756 CC X+55 Y+40
757 C X+54,007 Y+44,9 DR+
758 CC X+54,106 Y+44,41
759 C X+53,616 Y+44,311 DR+
760 L X+53,715 Y+43,821
761 L X+55 Y+40 R0
762 L Z+50 FMAX
763 L Y-40 FMAX
764 L Z+2 FMAX
765 L Z-2,5 F800
766 L X+55,5 Y-36 RL F1200
767 L Y-35,5
768 CC X+55 Y-35,5
769 C X+55 Y-35 DR+
770 CC X+55 Y-40
771 C X+55 Y-45 DR+
772 CC X+55 Y-40
773 C X+55 Y-35 DR+
774 CC X+55 Y-40
775 C X+54,007 Y-35,1 DR+
776 CC X+54,106 Y-35,59
777 C X+53,616 Y-35,689 DR+
778 L X+53,715 Y-36,179
779 L X+55 Y-40 R0
780 L Z+50 FMAX
781 L X-55 FMAX
782 L Z+2 FMAX
783 L Z-2,5 F800
784 L X-54,5 Y-36 RL F1200
785 L Y-35,5
786 CC X-55 Y-35,5
787 C X-55 Y-35 DR+
788 CC X-55 Y-40
789 C X-55 Y-45 DR+
790 CC X-55 Y-40
791 C X-55 Y-35 DR+
792 CC X-55 Y-40
793 C X-55,993 Y-35,1 DR+
794 CC X-55,894 Y-35,59
795 C X-56,384 Y-35,689 DR+
796 L X-56,285 Y-36,179
797 L X-55 Y-40 R0
798 L Z+50 FMAX
799 M5
800 L Z-1 FMAX M91
801 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
802 TOOL CALL 1 Z S1856 DR+0
803 TOOL DEF 20
804 L X+2,498 Y+10 FMAX M3
805 L Z+50 FMAX M8
806 ;  POINTAGE-PERCAGE
807 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
808 L X+2,498 Y+10 FMAX M99
809 M9
810 M5
811 L Z-1 FMAX M91
812 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
813 TOOL CALL 20 Z S3800 DR+0
814 TOOL DEF 16
815 L X-35 Y-40 FMAX M3
816 L Z+50 FMAX M7
817 ;  DEBOURRAGE
818 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
819 L X-35 Y-40 FMAX M99
820 L X+37 Y+40 FMAX M99
821 L X+2,498 Y+10 FMAX M99
822 L Z+50 FMAX
823 M9
824 M5
825 L Z-1 FMAX M91
826 L Y-1 FMAX M91
827 M30
828 END PGM REP 1001 MM
