0 BEGIN PGM REP09-20981-OP10-PORTE POINCON-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP09-20981-OP10-PORTE POINCON-A
4 ; PROG-CN DU 20-10-20 A 11:13
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T19 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-2*
14 ; T19 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
15 ; CORRECTION AUCUNE
16 ; SUREP R 0. SUREP Z 0.
17 TOOL CALL 19 Z S6000 DR+0
18 TOOL DEF 1
19 L X-2,5 Y+60 FMAX M3
20 L Z+50 FMAX M25
21 L Z+2 FMAX
22 L Z-10,05 F297
23 L X-2,475 F500
24 CC X-2,55 Y+60
25 C X-2,625 Y+60 DR+
26 CC X-2,45 Y+60
27 C X-2,275 Y+60 DR+
28 CC X-2,55 Y+60
29 C X-2,825 Y+60 DR+
30 CC X-2,45 Y+60
31 C X-2,075 Y+60 DR+
32 CC X-2,55 Y+60
33 C X-3,025 Y+60 DR+
34 CC X-2,45 Y+60
35 C X-1,875 Y+60 DR+
36 CC X-2,55 Y+60
37 C X-3,225 Y+60 DR+
38 CC X-2,45 Y+60
39 C X-1,675 Y+60 DR+
40 CC X-2,55 Y+60
41 C X-3,425 Y+60 DR+
42 CC X-2,45 Y+60
43 C X-1,475 Y+60 DR+
44 CC X-2,55 Y+60
45 C X-3,625 Y+60 DR+
46 CC X-2,45 Y+60
47 C X-1,275 Y+60 DR+
48 CC X-2,55 Y+60
49 C X-3,825 Y+60 DR+
50 CC X-2,45 Y+60
51 C X-1,075 Y+60 DR+
52 CC X-2,55 Y+60
53 C X-4,025 Y+60 DR+
54 CC X-2,45 Y+60
55 C X-0,875 Y+60 DR+
56 CC X-2,55 Y+60
57 C X-4,225 Y+60 DR+
58 CC X-2,45 Y+60
59 C X-0,675 Y+60 DR+
60 CC X-2,55 Y+60
61 C X-4,425 Y+60 DR+
62 CC X-2,45 Y+60
63 C X-0,475 Y+60 DR+
64 CC X-2,55 Y+60
65 C X-4,625 Y+60 DR+
66 CC X-2,45 Y+60
67 C X-0,275 Y+60 DR+
68 CC X-2,55 Y+60
69 C X-4,825 Y+60 DR+
70 CC X-2,45 Y+60
71 C X-0,075 Y+60 DR+
72 CC X-2,55 Y+60
73 C X-5,025 Y+60 DR+
74 CC X-2,45 Y+60
75 C X+0,125 Y+60 DR+
76 CC X-2,55 Y+60
77 C X-5,225 Y+60 DR+
78 CC X-2,45 Y+60
79 C X+0,325 Y+60 DR+
80 CC X-2,55 Y+60
81 C X-5,425 Y+60 DR+
82 CC X-2,45 Y+60
83 C X+0,525 Y+60 DR+
84 CC X-2,55 Y+60
85 C X-5,625 Y+60 DR+
86 CC X-2,45 Y+60
87 C X+0,725 Y+60 DR+
88 CC X-2,55 Y+60
89 C X-5,825 Y+60 DR+
90 CC X-2,45 Y+60
91 C X+0,925 Y+60 DR+
92 CC X-2,55 Y+60
93 C X-6,025 Y+60 DR+
94 CC X-2,45 Y+60
95 C X+1,125 Y+60 DR+
96 CC X-2,55 Y+60
97 C X-6,225 Y+60 DR+
98 CC X-2,45 Y+60
99 C X+1,325 Y+60 DR+
100 CC X-2,55 Y+60
101 C X-6,425 Y+60 DR+
102 CC X-2,45 Y+60
103 C X+1,525 Y+60 DR+
104 CC X-2,55 Y+60
105 C X-6,625 Y+60 DR+
106 CC X-2,45 Y+60
107 C X+1,725 Y+60 DR+
108 CC X-2,55 Y+60
109 C X-6,825 Y+60 DR+
110 CC X-2,45 Y+60
111 C X+1,925 Y+60 DR+
112 CC X-2,55 Y+60
113 C X-7,025 Y+60 DR+
114 CC X-2,45 Y+60
115 C X+2,125 Y+60 DR+
116 CC X-2,55 Y+60
117 C X-7,225 Y+60 DR+
118 CC X-2,45 Y+60
119 C X+2,325 Y+60 DR+
120 CC X-2,55 Y+60
121 C X-7,425 Y+60 DR+
122 CC X-2,45 Y+60
123 C X+0,019 Y+55,681 DR+
124 CC X-2,5 Y+60
125 C X+2,5 Y+60 DR+
126 CC X-2,5 Y+60
127 C X+0,019 Y+55,681 DR+
128 L Z+50 FMAX
129 L X+14,117 Y-6,472 FMAX
130 L Z+2 FMAX
131 L Z-10,05 F297
132 L X+14,142 F500
133 CC X+14,067 Y-6,472
134 C X+13,992 Y-6,472 DR+
135 CC X+14,167 Y-6,472
136 C X+14,342 Y-6,472 DR+
137 CC X+14,067 Y-6,472
138 C X+13,792 Y-6,472 DR+
139 CC X+14,167 Y-6,472
140 C X+14,542 Y-6,472 DR+
141 CC X+14,067 Y-6,472
142 C X+13,592 Y-6,472 DR+
143 CC X+14,167 Y-6,472
144 C X+14,742 Y-6,472 DR+
145 CC X+14,067 Y-6,472
146 C X+13,392 Y-6,472 DR+
147 CC X+14,167 Y-6,472
148 C X+14,942 Y-6,472 DR+
149 CC X+14,067 Y-6,472
150 C X+13,192 Y-6,472 DR+
151 CC X+14,167 Y-6,472
152 C X+15,142 Y-6,472 DR+
153 CC X+14,067 Y-6,472
154 C X+12,992 Y-6,472 DR+
155 CC X+14,167 Y-6,472
156 C X+15,342 Y-6,472 DR+
157 CC X+14,067 Y-6,472
158 C X+12,792 Y-6,472 DR+
159 CC X+14,167 Y-6,472
160 C X+15,542 Y-6,472 DR+
161 CC X+14,067 Y-6,472
162 C X+12,592 Y-6,472 DR+
163 CC X+14,167 Y-6,472
164 C X+15,742 Y-6,472 DR+
165 CC X+14,067 Y-6,472
166 C X+12,392 Y-6,472 DR+
167 CC X+14,167 Y-6,472
168 C X+15,942 Y-6,472 DR+
169 CC X+14,067 Y-6,472
170 C X+12,192 Y-6,472 DR+
171 CC X+14,167 Y-6,472
172 C X+16,142 Y-6,472 DR+
173 CC X+14,067 Y-6,472
174 C X+11,992 Y-6,472 DR+
175 CC X+14,167 Y-6,472
176 C X+16,342 Y-6,472 DR+
177 CC X+14,067 Y-6,472
178 C X+11,792 Y-6,472 DR+
179 CC X+14,167 Y-6,472
180 C X+16,542 Y-6,472 DR+
181 CC X+14,067 Y-6,472
182 C X+11,592 Y-6,472 DR+
183 CC X+14,167 Y-6,472
184 C X+16,742 Y-6,472 DR+
185 CC X+14,067 Y-6,472
186 C X+11,392 Y-6,472 DR+
187 CC X+14,167 Y-6,472
188 C X+16,942 Y-6,472 DR+
189 CC X+14,067 Y-6,472
190 C X+11,192 Y-6,472 DR+
191 CC X+14,167 Y-6,472
192 C X+17,142 Y-6,472 DR+
193 CC X+14,067 Y-6,472
194 C X+10,992 Y-6,472 DR+
195 CC X+14,167 Y-6,472
196 C X+17,342 Y-6,472 DR+
197 CC X+14,067 Y-6,472
198 C X+10,792 Y-6,472 DR+
199 CC X+14,167 Y-6,472
200 C X+17,542 Y-6,472 DR+
201 CC X+14,067 Y-6,472
202 C X+10,592 Y-6,472 DR+
203 CC X+14,167 Y-6,472
204 C X+17,742 Y-6,472 DR+
205 CC X+14,067 Y-6,472
206 C X+10,392 Y-6,472 DR+
207 CC X+14,167 Y-6,472
208 C X+17,942 Y-6,472 DR+
209 CC X+14,067 Y-6,472
210 C X+10,192 Y-6,472 DR+
211 CC X+14,167 Y-6,472
212 C X+18,142 Y-6,472 DR+
213 CC X+14,067 Y-6,472
214 C X+9,992 Y-6,472 DR+
215 CC X+14,167 Y-6,472
216 C X+18,342 Y-6,472 DR+
217 CC X+14,067 Y-6,472
218 C X+9,792 Y-6,472 DR+
219 CC X+14,167 Y-6,472
220 C X+18,542 Y-6,472 DR+
221 CC X+14,067 Y-6,472
222 C X+9,592 Y-6,472 DR+
223 CC X+14,167 Y-6,472
224 C X+18,742 Y-6,472 DR+
225 CC X+14,067 Y-6,472
226 C X+9,392 Y-6,472 DR+
227 CC X+14,167 Y-6,472
228 C X+18,942 Y-6,472 DR+
229 CC X+14,067 Y-6,472
230 C X+9,192 Y-6,472 DR+
231 CC X+14,167 Y-6,472
232 C X+16,636 Y-10,791 DR+
233 CC X+14,117 Y-6,472
234 C X+19,117 Y-6,472 DR+
235 CC X+14,117 Y-6,472
236 C X+16,636 Y-10,791 DR+
237 L Z+50 FMAX
238 L X+6,5 Y-30 FMAX
239 L Z+2 FMAX
240 L Z-10,05 F297
241 L X+6,525 F500
242 CC X+6,45 Y-30
243 C X+6,375 Y-30 DR+
244 CC X+6,55 Y-30
245 C X+6,725 Y-30 DR+
246 CC X+6,45 Y-30
247 C X+6,175 Y-30 DR+
248 CC X+6,55 Y-30
249 C X+6,925 Y-30 DR+
250 CC X+6,45 Y-30
251 C X+5,975 Y-30 DR+
252 CC X+6,55 Y-30
253 C X+7,125 Y-30 DR+
254 CC X+6,45 Y-30
255 C X+5,775 Y-30 DR+
256 CC X+6,55 Y-30
257 C X+7,325 Y-30 DR+
258 CC X+6,45 Y-30
259 C X+5,575 Y-30 DR+
260 CC X+6,55 Y-30
261 C X+7,525 Y-30 DR+
262 CC X+6,45 Y-30
263 C X+5,375 Y-30 DR+
264 CC X+6,55 Y-30
265 C X+7,725 Y-30 DR+
266 CC X+6,45 Y-30
267 C X+5,175 Y-30 DR+
268 CC X+6,55 Y-30
269 C X+7,925 Y-30 DR+
270 CC X+6,45 Y-30
271 C X+4,975 Y-30 DR+
272 CC X+6,55 Y-30
273 C X+8,125 Y-30 DR+
274 CC X+6,45 Y-30
275 C X+4,775 Y-30 DR+
276 CC X+6,55 Y-30
277 C X+8,325 Y-30 DR+
278 CC X+6,45 Y-30
279 C X+4,575 Y-30 DR+
280 CC X+6,55 Y-30
281 C X+8,525 Y-30 DR+
282 CC X+6,45 Y-30
283 C X+4,375 Y-30 DR+
284 CC X+6,55 Y-30
285 C X+8,725 Y-30 DR+
286 CC X+6,45 Y-30
287 C X+4,175 Y-30 DR+
288 CC X+6,55 Y-30
289 C X+8,925 Y-30 DR+
290 CC X+6,45 Y-30
291 C X+3,975 Y-30 DR+
292 CC X+6,55 Y-30
293 C X+9,125 Y-30 DR+
294 CC X+6,45 Y-30
295 C X+3,775 Y-30 DR+
296 CC X+6,55 Y-30
297 C X+9,325 Y-30 DR+
298 CC X+6,45 Y-30
299 C X+3,575 Y-30 DR+
300 CC X+6,55 Y-30
301 C X+9,525 Y-30 DR+
302 CC X+6,45 Y-30
303 C X+3,375 Y-30 DR+
304 CC X+6,55 Y-30
305 C X+9,725 Y-30 DR+
306 CC X+6,45 Y-30
307 C X+3,175 Y-30 DR+
308 CC X+6,55 Y-30
309 C X+9,925 Y-30 DR+
310 CC X+6,45 Y-30
311 C X+2,975 Y-30 DR+
312 CC X+6,55 Y-30
313 C X+10,125 Y-30 DR+
314 CC X+6,45 Y-30
315 C X+2,775 Y-30 DR+
316 CC X+6,55 Y-30
317 C X+10,325 Y-30 DR+
318 CC X+6,45 Y-30
319 C X+2,575 Y-30 DR+
320 CC X+6,55 Y-30
321 C X+10,525 Y-30 DR+
322 CC X+6,45 Y-30
323 C X+2,375 Y-30 DR+
324 CC X+6,55 Y-30
325 C X+10,725 Y-30 DR+
326 CC X+6,45 Y-30
327 C X+2,175 Y-30 DR+
328 CC X+6,55 Y-30
329 C X+10,925 Y-30 DR+
330 CC X+6,45 Y-30
331 C X+1,975 Y-30 DR+
332 CC X+6,55 Y-30
333 C X+11,125 Y-30 DR+
334 CC X+6,45 Y-30
335 C X+1,775 Y-30 DR+
336 CC X+6,55 Y-30
337 C X+11,325 Y-30 DR+
338 CC X+6,45 Y-30
339 C X+1,575 Y-30 DR+
340 CC X+6,55 Y-30
341 C X+9,019 Y-34,319 DR+
342 CC X+6,5 Y-30
343 C X+11,5 Y-30 DR+
344 CC X+6,5 Y-30
345 C X+9,019 Y-34,319 DR+
346 L Z+50 FMAX
347 TOOL CALL 19 Z S6000 DR-3
348 L X-2,5 Y+60 Z+50 FMAX
349 L Z+2 FMAX
350 L Z-10,05 F297
351 L X-6,3 Y+60,6 RL F500
352 L X-6,9
353 CC X-6,9 Y+60
354 C X-7,5 Y+60 DR+
355 CC X-2,5 Y+60
356 C X+2,5 Y+60 DR+
357 CC X-2,5 Y+60
358 C X-7,5 Y+60 DR+
359 CC X-2,5 Y+60
360 C X-7,105 Y+58,053 DR+
361 CC X-2,5 Y+60
362 C X+2,5 Y+60 DR+
363 CC X-2,5 Y+60
364 C X-7,5 Y+60 DR+
365 CC X-2,5 Y+60
366 C X-7,105 Y+58,053 DR+
367 CC X-6,553 Y+58,287
368 C X-6,319 Y+57,734 DR+
369 L X-5,766 Y+57,968
370 L X-2,5 Y+60 R0
371 L Z+50 FMAX
372 L X+14,117 Y-6,472 FMAX
373 L Z+2 FMAX
374 L Z-10,05 F297
375 L X+10,317 Y-5,872 RL F500
376 L X+9,717
377 CC X+9,717 Y-6,472
378 C X+9,117 Y-6,472 DR+
379 CC X+14,117 Y-6,472
380 C X+19,117 Y-6,472 DR+
381 CC X+14,117 Y-6,472
382 C X+9,117 Y-6,472 DR+
383 CC X+14,117 Y-6,472
384 C X+9,512 Y-8,419 DR+
385 CC X+14,117 Y-6,472
386 C X+19,117 Y-6,472 DR+
387 CC X+14,117 Y-6,472
388 C X+9,117 Y-6,472 DR+
389 CC X+14,117 Y-6,472
390 C X+9,512 Y-8,419 DR+
391 CC X+10,064 Y-8,185
392 C X+10,298 Y-8,738 DR+
393 L X+10,851 Y-8,504
394 L X+14,117 Y-6,472 R0
395 L Z+50 FMAX
396 L X+6,5 Y-30 FMAX
397 L Z+2 FMAX
398 L Z-10,05 F297
399 L X+2,7 Y-29,4 RL F500
400 L X+2,1
401 CC X+2,1 Y-30
402 C X+1,5 Y-30 DR+
403 CC X+6,5 Y-30
404 C X+11,5 Y-30 DR+
405 CC X+6,5 Y-30
406 C X+1,5 Y-30 DR+
407 CC X+6,5 Y-30
408 C X+1,895 Y-31,947 DR+
409 CC X+6,5 Y-30
410 C X+11,5 Y-30 DR+
411 CC X+6,5 Y-30
412 C X+1,5 Y-30 DR+
413 CC X+6,5 Y-30
414 C X+1,895 Y-31,947 DR+
415 CC X+2,447 Y-31,713
416 C X+2,681 Y-32,266 DR+
417 L X+3,234 Y-32,032
418 L X+6,5 Y-30 R0
419 L Z+50 FMAX
420 ; CORRECTION AUCUNE
421 ; SUREP R 0. SUREP Z 0.
422 TOOL CALL 19 Z S6000 DR+0
423 L X+65,5 Y+60 Z+50 FMAX
424 L Z+2 FMAX
425 L Z-5,05 F297
426 L X+65,525 F500
427 CC X+65,45 Y+60
428 C X+65,375 Y+60 DR+
429 CC X+65,55 Y+60
430 C X+65,725 Y+60 DR+
431 CC X+65,45 Y+60
432 C X+65,175 Y+60 DR+
433 CC X+65,55 Y+60
434 C X+65,925 Y+60 DR+
435 CC X+65,45 Y+60
436 C X+64,975 Y+60 DR+
437 CC X+65,55 Y+60
438 C X+66,125 Y+60 DR+
439 CC X+65,45 Y+60
440 C X+64,775 Y+60 DR+
441 CC X+65,55 Y+60
442 C X+66,325 Y+60 DR+
443 CC X+65,45 Y+60
444 C X+64,575 Y+60 DR+
445 CC X+65,55 Y+60
446 C X+66,525 Y+60 DR+
447 CC X+65,45 Y+60
448 C X+64,375 Y+60 DR+
449 CC X+65,55 Y+60
450 C X+66,725 Y+60 DR+
451 CC X+65,45 Y+60
452 C X+64,175 Y+60 DR+
453 CC X+65,55 Y+60
454 C X+66,925 Y+60 DR+
455 CC X+65,45 Y+60
456 C X+63,975 Y+60 DR+
457 CC X+65,55 Y+60
458 C X+67,125 Y+60 DR+
459 CC X+65,45 Y+60
460 C X+63,775 Y+60 DR+
461 CC X+65,55 Y+60
462 C X+67,325 Y+60 DR+
463 CC X+65,45 Y+60
464 C X+63,575 Y+60 DR+
465 CC X+65,55 Y+60
466 C X+67,525 Y+60 DR+
467 CC X+65,45 Y+60
468 C X+63,375 Y+60 DR+
469 CC X+65,55 Y+60
470 C X+67,725 Y+60 DR+
471 CC X+65,45 Y+60
472 C X+63,175 Y+60 DR+
473 CC X+65,55 Y+60
474 C X+67,925 Y+60 DR+
475 CC X+65,45 Y+60
476 C X+62,975 Y+60 DR+
477 CC X+65,55 Y+60
478 C X+68,125 Y+60 DR+
479 CC X+65,45 Y+60
480 C X+62,775 Y+60 DR+
481 CC X+65,55 Y+60
482 C X+68,325 Y+60 DR+
483 CC X+65,45 Y+60
484 C X+62,575 Y+60 DR+
485 CC X+65,55 Y+60
486 C X+68,525 Y+60 DR+
487 CC X+65,45 Y+60
488 C X+62,375 Y+60 DR+
489 CC X+65,55 Y+60
490 C X+68,725 Y+60 DR+
491 CC X+65,45 Y+60
492 C X+62,175 Y+60 DR+
493 CC X+65,55 Y+60
494 C X+68,925 Y+60 DR+
495 CC X+65,45 Y+60
496 C X+63,731 Y+63,02 DR+
497 CC X+65,5 Y+60
498 C X+69 Y+60 DR+
499 CC X+65,5 Y+60
500 C X+63,731 Y+63,02 DR+
501 L Z+50 FMAX
502 L X+74,5 Y-30 FMAX
503 L Z+2 FMAX
504 L Z-5,05 F297
505 L X+74,525 F500
506 CC X+74,45 Y-30
507 C X+74,375 Y-30 DR+
508 CC X+74,55 Y-30
509 C X+74,725 Y-30 DR+
510 CC X+74,45 Y-30
511 C X+74,175 Y-30 DR+
512 CC X+74,55 Y-30
513 C X+74,925 Y-30 DR+
514 CC X+74,45 Y-30
515 C X+73,975 Y-30 DR+
516 CC X+74,55 Y-30
517 C X+75,125 Y-30 DR+
518 CC X+74,45 Y-30
519 C X+73,775 Y-30 DR+
520 CC X+74,55 Y-30
521 C X+75,325 Y-30 DR+
522 CC X+74,45 Y-30
523 C X+73,575 Y-30 DR+
524 CC X+74,55 Y-30
525 C X+75,525 Y-30 DR+
526 CC X+74,45 Y-30
527 C X+73,375 Y-30 DR+
528 CC X+74,55 Y-30
529 C X+75,725 Y-30 DR+
530 CC X+74,45 Y-30
531 C X+73,175 Y-30 DR+
532 CC X+74,55 Y-30
533 C X+75,925 Y-30 DR+
534 CC X+74,45 Y-30
535 C X+72,975 Y-30 DR+
536 CC X+74,55 Y-30
537 C X+76,125 Y-30 DR+
538 CC X+74,45 Y-30
539 C X+72,775 Y-30 DR+
540 CC X+74,55 Y-30
541 C X+76,325 Y-30 DR+
542 CC X+74,45 Y-30
543 C X+72,575 Y-30 DR+
544 CC X+74,55 Y-30
545 C X+76,525 Y-30 DR+
546 CC X+74,45 Y-30
547 C X+72,375 Y-30 DR+
548 CC X+74,55 Y-30
549 C X+76,725 Y-30 DR+
550 CC X+74,45 Y-30
551 C X+72,175 Y-30 DR+
552 CC X+74,55 Y-30
553 C X+76,925 Y-30 DR+
554 CC X+74,45 Y-30
555 C X+71,975 Y-30 DR+
556 CC X+74,55 Y-30
557 C X+77,125 Y-30 DR+
558 CC X+74,45 Y-30
559 C X+71,775 Y-30 DR+
560 CC X+74,55 Y-30
561 C X+77,325 Y-30 DR+
562 CC X+74,45 Y-30
563 C X+71,575 Y-30 DR+
564 CC X+74,55 Y-30
565 C X+77,525 Y-30 DR+
566 CC X+74,45 Y-30
567 C X+71,375 Y-30 DR+
568 CC X+74,55 Y-30
569 C X+77,725 Y-30 DR+
570 CC X+74,45 Y-30
571 C X+71,175 Y-30 DR+
572 CC X+74,55 Y-30
573 C X+77,925 Y-30 DR+
574 CC X+74,45 Y-30
575 C X+72,731 Y-26,98 DR+
576 CC X+74,5 Y-30
577 C X+78 Y-30 DR+
578 CC X+74,5 Y-30
579 C X+72,731 Y-26,98 DR+
580 L Z+50 FMAX
581 TOOL CALL 19 Z S6000 DR-3
582 L X+65,5 Y+60 Z+50 FMAX
583 L Z+2 FMAX
584 L Z-5,05 F297
585 L X+63,2 Y+60,6 RL F500
586 L X+62,6
587 CC X+62,6 Y+60
588 C X+62 Y+60 DR+
589 CC X+65,5 Y+60
590 C X+69 Y+60 DR+
591 CC X+65,5 Y+60
592 C X+62 Y+60 DR+
593 CC X+65,5 Y+60
594 C X+62,556 Y+58,107 DR+
595 CC X+65,5 Y+60
596 C X+69 Y+60 DR+
597 CC X+65,5 Y+60
598 C X+62 Y+60 DR+
599 CC X+65,5 Y+60
600 C X+62,556 Y+58,107 DR+
601 CC X+63,061 Y+58,432
602 C X+63,385 Y+57,927 DR+
603 L X+63,89 Y+58,251
604 L X+65,5 Y+60 R0
605 L Z+50 FMAX
606 L X+74,5 Y-30 FMAX
607 L Z+2 FMAX
608 L Z-5,05 F297
609 L X+72,2 Y-29,4 RL F500
610 L X+71,6
611 CC X+71,6 Y-30
612 C X+71 Y-30 DR+
613 CC X+74,5 Y-30
614 C X+78 Y-30 DR+
615 CC X+74,5 Y-30
616 C X+71 Y-30 DR+
617 CC X+74,5 Y-30
618 C X+71,556 Y-31,893 DR+
619 CC X+74,5 Y-30
620 C X+78 Y-30 DR+
621 CC X+74,5 Y-30
622 C X+71 Y-30 DR+
623 CC X+74,5 Y-30
624 C X+71,556 Y-31,893 DR+
625 CC X+72,061 Y-31,568
626 C X+72,385 Y-32,073 DR+
627 L X+72,89 Y-31,749
628 L X+74,5 Y-30 R0
629 L Z+50 FMAX
630 M78
631 M5
632 L Z-1 FMAX M91
633 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
634 ; CORRECTION USURE GAUCHE
635 ; SUREP R 0. SUREP Z 0.
636 TOOL CALL 1 Z S6000 DR-2,5
637 TOOL DEF 19
638 L X-2,5 Y+60 FMAX M3
639 L Z+50 FMAX
640 L Z+2 FMAX
641 L Z-2,3 F800
642 L X-7 Y+60,5 RL F1200
643 L X-7,5
644 CC X-7,5 Y+60
645 C X-8 Y+60 DR+
646 CC X-2,5 Y+60
647 C X+3 Y+60 DR+
648 CC X-2,5 Y+60
649 C X-8 Y+60 DR+
650 CC X-2,5 Y+60
651 C X-7,64 Y+58,044 DR+
652 CC X-7,173 Y+58,222
653 C X-6,995 Y+57,754 DR+
654 L X-6,528 Y+57,932
655 L X-2,5 Y+60 R0
656 L Z+50 FMAX
657 L X+14,117 Y-6,472 FMAX
658 L Z+2 FMAX
659 L Z-2,3 F800
660 L X+9,617 Y-5,972 RL F1200
661 L X+9,117
662 CC X+9,117 Y-6,472
663 C X+8,617 Y-6,472 DR+
664 CC X+14,117 Y-6,472
665 C X+19,617 Y-6,472 DR+
666 CC X+14,117 Y-6,472
667 C X+8,617 Y-6,472 DR+
668 CC X+14,117 Y-6,472
669 C X+8,977 Y-8,428 DR+
670 CC X+9,444 Y-8,25
671 C X+9,622 Y-8,717 DR+
672 L X+10,089 Y-8,539
673 L X+14,117 Y-6,472 R0
674 L Z+50 FMAX
675 L X+6,5 Y-30 FMAX
676 L Z+2 FMAX
677 L Z-2,3 F800
678 L X+2 Y-29,5 RL F1200
679 L X+1,5
680 CC X+1,5 Y-30
681 C X+1 Y-30 DR+
682 CC X+6,5 Y-30
683 C X+12 Y-30 DR+
684 CC X+6,5 Y-30
685 C X+1 Y-30 DR+
686 CC X+6,5 Y-30
687 C X+1,36 Y-31,956 DR+
688 CC X+1,827 Y-31,778
689 C X+2,005 Y-32,246 DR+
690 L X+2,472 Y-32,068
691 L X+6,5 Y-30 R0
692 L Z+50 FMAX
693 L X+74,5 FMAX
694 L Z+2 FMAX
695 L Z-2,3 F800
696 L X+71,5 Y-29,5 RL F1200
697 L X+71
698 CC X+71 Y-30
699 C X+70,5 Y-30 DR+
700 CC X+74,5 Y-30
701 C X+78,5 Y-30 DR+
702 CC X+74,5 Y-30
703 C X+70,5 Y-30 DR+
704 CC X+74,5 Y-30
705 C X+70,99 Y-31,918 DR+
706 CC X+71,428 Y-31,678
707 C X+71,668 Y-32,117 DR+
708 L X+72,107 Y-31,877
709 L X+74,5 Y-30 R0
710 L Z+50 FMAX
711 L X+65,5 Y+60 FMAX
712 L Z+2 FMAX
713 L Z-2,3 F800
714 L X+62,5 Y+60,5 RL F1200
715 L X+62
716 CC X+62 Y+60
717 C X+61,5 Y+60 DR+
718 CC X+65,5 Y+60
719 C X+69,5 Y+60 DR+
720 CC X+65,5 Y+60
721 C X+61,5 Y+60 DR+
722 CC X+65,5 Y+60
723 C X+61,99 Y+58,082 DR+
724 CC X+62,428 Y+58,322
725 C X+62,668 Y+57,883 DR+
726 L X+63,107 Y+58,123
727 L X+65,5 Y+60 R0
728 L Z+50 FMAX
729 M5
730 L Z-1 FMAX M91
731 L Y-1 FMAX M91
732 M30
733 END PGM REP09-20981-OP10-PORTE POINCON-A MM
