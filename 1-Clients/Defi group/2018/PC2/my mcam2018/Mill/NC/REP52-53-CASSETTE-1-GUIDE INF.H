0 BEGIN PGM REP52-53-CASSETTE-1-GUIDE INF MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP52-53-CASSETTE-1-GUIDE INF
4 ; PROG-CN DU 07-02-20 A 09:17
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
9 ; T21 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-5*
15 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
16 ; CORRECTION AUCUNE
17 ; SUREP R 0.1 SUREP Z 0.05
18 TOOL CALL 19 Z S7427 DR+0
19 TOOL DEF 21
20 L X-238,477 Y-2,611 FMAX M3
21 L Z+50 FMAX M8
22 L Z+2 FMAX
23 L Z+0,5 F297
24 CC X-237 Y+0
25 CP IPA-180 Z-0,325 DR-
26 CC X-237 Y+0
27 CP IPA-180 Z-1,149 DR-
28 CC X-237 Y+0
29 CP IPA-180 Z-1,974 DR-
30 CC X-237 Y+0
31 CP IPA-180 Z-2,798 DR-
32 CC X-237 Y+0
33 CP IPA-240,504 Z-3,9 DR-
34 L X-236,988 Y+0 F3565
35 CC X-237,025 Y+0
36 C X-237,063 Y+0 DR+
37 CC X-236,975 Y+0
38 C X-236,887 Y+0 DR+
39 CC X-237,025 Y+0
40 C X-237,163 Y+0 DR+
41 CC X-236,975 Y+0
42 C X-236,787 Y+0 DR+
43 CC X-237,025 Y+0
44 C X-237,263 Y+0 DR+
45 CC X-236,975 Y+0
46 C X-236,687 Y+0 DR+
47 CC X-237,025 Y+0
48 C X-237,363 Y+0 DR+
49 CC X-236,975 Y+0
50 C X-236,587 Y+0 DR+
51 CC X-237,025 Y+0
52 C X-237,463 Y+0 DR+
53 CC X-236,975 Y+0
54 C X-236,487 Y+0 DR+
55 CC X-237,025 Y+0
56 C X-237,563 Y+0 DR+
57 CC X-236,975 Y+0
58 C X-236,387 Y+0 DR+
59 CC X-237,025 Y+0
60 C X-237,663 Y+0 DR+
61 CC X-236,975 Y+0
62 C X-236,287 Y+0 DR+
63 CC X-237,025 Y+0
64 C X-237,763 Y+0 DR+
65 CC X-236,975 Y+0
66 C X-236,187 Y+0 DR+
67 CC X-237,025 Y+0
68 C X-237,863 Y+0 DR+
69 CC X-236,975 Y+0
70 C X-236,087 Y+0 DR+
71 CC X-237,025 Y+0
72 C X-237,963 Y+0 DR+
73 CC X-236,975 Y+0
74 C X-235,987 Y+0 DR+
75 CC X-237,025 Y+0
76 C X-238,063 Y+0 DR+
77 CC X-236,975 Y+0
78 C X-235,887 Y+0 DR+
79 CC X-237,025 Y+0
80 C X-238,163 Y+0 DR+
81 CC X-236,975 Y+0
82 C X-235,787 Y+0 DR+
83 CC X-237,025 Y+0
84 C X-238,263 Y+0 DR+
85 CC X-236,975 Y+0
86 C X-235,687 Y+0 DR+
87 CC X-237,025 Y+0
88 C X-238,363 Y+0 DR+
89 CC X-236,975 Y+0
90 C X-235,587 Y+0 DR+
91 CC X-237,025 Y+0
92 C X-238,463 Y+0 DR+
93 CC X-236,975 Y+0
94 C X-235,487 Y+0 DR+
95 CC X-237,025 Y+0
96 C X-238,563 Y+0 DR+
97 CC X-236,975 Y+0
98 C X-235,387 Y+0 DR+
99 CC X-237,025 Y+0
100 C X-238,663 Y+0 DR+
101 CC X-236,975 Y+0
102 C X-235,287 Y+0 DR+
103 CC X-237,025 Y+0
104 C X-238,763 Y+0 DR+
105 CC X-236,975 Y+0
106 C X-235,187 Y+0 DR+
107 CC X-237,025 Y+0
108 C X-238,863 Y+0 DR+
109 CC X-236,975 Y+0
110 C X-235,087 Y+0 DR+
111 CC X-237,025 Y+0
112 C X-238,963 Y+0 DR+
113 CC X-236,975 Y+0
114 C X-234,987 Y+0 DR+
115 CC X-237,025 Y+0
116 C X-239,063 Y+0 DR+
117 CC X-236,975 Y+0
118 C X-234,887 Y+0 DR+
119 CC X-237,025 Y+0
120 C X-239,163 Y+0 DR+
121 CC X-236,975 Y+0
122 C X-234,787 Y+0 DR+
123 CC X-237,025 Y+0
124 C X-239,263 Y+0 DR+
125 CC X-236,975 Y+0
126 C X-234,687 Y+0 DR+
127 CC X-237,025 Y+0
128 C X-239,363 Y+0 DR+
129 CC X-236,975 Y+0
130 C X-234,587 Y+0 DR+
131 CC X-237,025 Y+0
132 C X-239,463 Y+0 DR+
133 CC X-236,975 Y+0
134 C X-234,487 Y+0 DR+
135 CC X-237,025 Y+0
136 C X-239,563 Y+0 DR+
137 CC X-236,975 Y+0
138 C X-234,387 Y+0 DR+
139 CC X-237,025 Y+0
140 C X-239,663 Y+0 DR+
141 CC X-236,975 Y+0
142 C X-234,287 Y+0 DR+
143 CC X-237,025 Y+0
144 C X-239,763 Y+0 DR+
145 CC X-236,975 Y+0
146 C X-234,187 Y+0 DR+
147 CC X-237,025 Y+0
148 C X-239,863 Y+0 DR+
149 CC X-236,975 Y+0
150 C X-234,087 Y+0 DR+
151 CC X-237,025 Y+0
152 C X-239,963 Y+0 DR+
153 CC X-236,975 Y+0
154 C X-233,987 Y+0 DR+
155 CC X-237,025 Y+0
156 C X-240,063 Y+0 DR+
157 CC X-236,975 Y+0
158 C X-233,887 Y+0 DR+
159 CC X-237,025 Y+0
160 C X-240,163 Y+0 DR+
161 CC X-236,975 Y+0
162 C X-233,787 Y+0 DR+
163 CC X-237,025 Y+0
164 C X-240,263 Y+0 DR+
165 CC X-236,975 Y+0
166 C X-233,687 Y+0 DR+
167 CC X-237,025 Y+0
168 C X-240,363 Y+0 DR+
169 CC X-236,975 Y+0
170 C X-233,587 Y+0 DR+
171 CC X-237,025 Y+0
172 C X-240,463 Y+0 DR+
173 CC X-236,975 Y+0
174 C X-233,487 Y+0 DR+
175 CC X-237,025 Y+0
176 C X-240,563 Y+0 DR+
177 CC X-236,975 Y+0
178 C X-233,387 Y+0 DR+
179 CC X-237,025 Y+0
180 C X-240,663 Y+0 DR+
181 CC X-236,975 Y+0
182 C X-233,287 Y+0 DR+
183 CC X-237,025 Y+0
184 C X-240,763 Y+0 DR+
185 CC X-236,975 Y+0
186 C X-233,187 Y+0 DR+
187 CC X-237,025 Y+0
188 C X-240,863 Y+0 DR+
189 CC X-236,975 Y+0
190 C X-233,087 Y+0 DR+
191 CC X-237,025 Y+0
192 C X-240,963 Y+0 DR+
193 CC X-236,975 Y+0
194 C X-232,987 Y+0 DR+
195 CC X-237,025 Y+0
196 C X-241,063 Y+0 DR+
197 CC X-236,975 Y+0
198 C X-232,887 Y+0 DR+
199 CC X-237,025 Y+0
200 C X-241,163 Y+0 DR+
201 CC X-236,975 Y+0
202 C X-232,787 Y+0 DR+
203 CC X-237,025 Y+0
204 C X-241,263 Y+0 DR+
205 CC X-236,975 Y+0
206 C X-232,687 Y+0 DR+
207 CC X-237,025 Y+0
208 C X-241,363 Y+0 DR+
209 CC X-236,975 Y+0
210 C X-232,587 Y+0 DR+
211 CC X-237,025 Y+0
212 C X-241,463 Y+0 DR+
213 CC X-236,975 Y+0
214 C X-232,487 Y+0 DR+
215 CC X-237,025 Y+0
216 C X-241,563 Y+0 DR+
217 CC X-236,975 Y+0
218 C X-232,387 Y+0 DR+
219 CC X-237,025 Y+0
220 C X-241,663 Y+0 DR+
221 CC X-236,975 Y+0
222 C X-232,287 Y+0 DR+
223 CC X-237,025 Y+0
224 C X-241,763 Y+0 DR+
225 CC X-236,975 Y+0
226 C X-232,187 Y+0 DR+
227 CC X-237,025 Y+0
228 C X-241,863 Y+0 DR+
229 CC X-236,975 Y+0
230 C X-232,087 Y+0 DR+
231 CC X-237,025 Y+0
232 C X-241,963 Y+0 DR+
233 CC X-236,975 Y+0
234 C X-231,987 Y+0 DR+
235 CC X-237,025 Y+0
236 C X-242,063 Y+0 DR+
237 CC X-236,975 Y+0
238 C X-231,887 Y+0 DR+
239 CC X-237,025 Y+0
240 C X-242,163 Y+0 DR+
241 CC X-236,975 Y+0
242 C X-231,787 Y+0 DR+
243 CC X-237,025 Y+0
244 C X-242,263 Y+0 DR+
245 CC X-236,975 Y+0
246 C X-231,687 Y+0 DR+
247 CC X-237,025 Y+0
248 C X-242,363 Y+0 DR+
249 CC X-236,975 Y+0
250 C X-231,587 Y+0 DR+
251 CC X-237,025 Y+0
252 C X-242,463 Y+0 DR+
253 CC X-236,975 Y+0
254 C X-231,487 Y+0 DR+
255 CC X-237,025 Y+0
256 C X-242,563 Y+0 DR+
257 CC X-236,975 Y+0
258 C X-231,387 Y+0 DR+
259 CC X-237,025 Y+0
260 C X-242,663 Y+0 DR+
261 CC X-236,975 Y+0
262 C X-231,287 Y+0 DR+
263 CC X-237,025 Y+0
264 C X-242,763 Y+0 DR+
265 CC X-236,975 Y+0
266 C X-231,187 Y+0 DR+
267 CC X-237,025 Y+0
268 C X-242,863 Y+0 DR+
269 CC X-236,975 Y+0
270 C X-231,087 Y+0 DR+
271 CC X-237,025 Y+0
272 C X-242,963 Y+0 DR+
273 CC X-236,975 Y+0
274 C X-230,987 Y+0 DR+
275 CC X-237,025 Y+0
276 C X-243,063 Y+0 DR+
277 CC X-236,975 Y+0
278 C X-230,887 Y+0 DR+
279 CC X-237,025 Y+0
280 C X-243,163 Y+0 DR+
281 CC X-236,975 Y+0
282 C X-230,787 Y+0 DR+
283 CC X-237,025 Y+0
284 C X-243,263 Y+0 DR+
285 CC X-236,975 Y+0
286 C X-230,687 Y+0 DR+
287 CC X-237,025 Y+0
288 C X-243,363 Y+0 DR+
289 CC X-236,975 Y+0
290 C X-230,587 Y+0 DR+
291 CC X-237,025 Y+0
292 C X-243,463 Y+0 DR+
293 CC X-236,975 Y+0
294 C X-230,487 Y+0 DR+
295 CC X-237,025 Y+0
296 C X-243,563 Y+0 DR+
297 CC X-236,975 Y+0
298 C X-230,387 Y+0 DR+
299 CC X-237,025 Y+0
300 C X-243,663 Y+0 DR+
301 CC X-236,975 Y+0
302 C X-230,287 Y+0 DR+
303 CC X-237,025 Y+0
304 C X-243,763 Y+0 DR+
305 CC X-236,975 Y+0
306 C X-230,187 Y+0 DR+
307 CC X-237,025 Y+0
308 C X-243,863 Y+0 DR+
309 CC X-236,975 Y+0
310 C X-233,541 Y-5,97 DR+
311 CC X-237 Y+0
312 C X-243,9 Y+0 DR+
313 CC X-237 Y+0
314 C X-233,541 Y-5,97 DR+
315 L Z+10 FMAX
316 L X-238,477 Y-2,611 FMAX
317 L Z+0,45 FMAX
318 CC X-237 Y+0
319 CP IPA-180 Z-0,375 DR- F297
320 CC X-237 Y+0
321 CP IPA-180 Z-1,199 DR-
322 CC X-237 Y+0
323 CP IPA-180 Z-2,023 DR-
324 CC X-237 Y+0
325 CP IPA-180 Z-2,848 DR-
326 CC X-237 Y+0
327 CP IPA-240,504 Z-3,95 DR-
328 L X-236,988 Y+0 F3565
329 CC X-237,025 Y+0
330 C X-237,063 Y+0 DR+
331 CC X-236,975 Y+0
332 C X-236,887 Y+0 DR+
333 CC X-237,025 Y+0
334 C X-237,163 Y+0 DR+
335 CC X-236,975 Y+0
336 C X-236,787 Y+0 DR+
337 CC X-237,025 Y+0
338 C X-237,263 Y+0 DR+
339 CC X-236,975 Y+0
340 C X-236,687 Y+0 DR+
341 CC X-237,025 Y+0
342 C X-237,363 Y+0 DR+
343 CC X-236,975 Y+0
344 C X-236,587 Y+0 DR+
345 CC X-237,025 Y+0
346 C X-237,463 Y+0 DR+
347 CC X-236,975 Y+0
348 C X-236,487 Y+0 DR+
349 CC X-237,025 Y+0
350 C X-237,563 Y+0 DR+
351 CC X-236,975 Y+0
352 C X-236,387 Y+0 DR+
353 CC X-237,025 Y+0
354 C X-237,663 Y+0 DR+
355 CC X-236,975 Y+0
356 C X-236,287 Y+0 DR+
357 CC X-237,025 Y+0
358 C X-237,763 Y+0 DR+
359 CC X-236,975 Y+0
360 C X-236,187 Y+0 DR+
361 CC X-237,025 Y+0
362 C X-237,863 Y+0 DR+
363 CC X-236,975 Y+0
364 C X-236,087 Y+0 DR+
365 CC X-237,025 Y+0
366 C X-237,963 Y+0 DR+
367 CC X-236,975 Y+0
368 C X-235,987 Y+0 DR+
369 CC X-237,025 Y+0
370 C X-238,063 Y+0 DR+
371 CC X-236,975 Y+0
372 C X-235,887 Y+0 DR+
373 CC X-237,025 Y+0
374 C X-238,163 Y+0 DR+
375 CC X-236,975 Y+0
376 C X-235,787 Y+0 DR+
377 CC X-237,025 Y+0
378 C X-238,263 Y+0 DR+
379 CC X-236,975 Y+0
380 C X-235,687 Y+0 DR+
381 CC X-237,025 Y+0
382 C X-238,363 Y+0 DR+
383 CC X-236,975 Y+0
384 C X-235,587 Y+0 DR+
385 CC X-237,025 Y+0
386 C X-238,463 Y+0 DR+
387 CC X-236,975 Y+0
388 C X-235,487 Y+0 DR+
389 CC X-237,025 Y+0
390 C X-238,563 Y+0 DR+
391 CC X-236,975 Y+0
392 C X-235,387 Y+0 DR+
393 CC X-237,025 Y+0
394 C X-238,663 Y+0 DR+
395 CC X-236,975 Y+0
396 C X-235,287 Y+0 DR+
397 CC X-237,025 Y+0
398 C X-238,763 Y+0 DR+
399 CC X-236,975 Y+0
400 C X-235,187 Y+0 DR+
401 CC X-237,025 Y+0
402 C X-238,863 Y+0 DR+
403 CC X-236,975 Y+0
404 C X-235,087 Y+0 DR+
405 CC X-237,025 Y+0
406 C X-238,963 Y+0 DR+
407 CC X-236,975 Y+0
408 C X-234,987 Y+0 DR+
409 CC X-237,025 Y+0
410 C X-239,063 Y+0 DR+
411 CC X-236,975 Y+0
412 C X-234,887 Y+0 DR+
413 CC X-237,025 Y+0
414 C X-239,163 Y+0 DR+
415 CC X-236,975 Y+0
416 C X-234,787 Y+0 DR+
417 CC X-237,025 Y+0
418 C X-239,263 Y+0 DR+
419 CC X-236,975 Y+0
420 C X-234,687 Y+0 DR+
421 CC X-237,025 Y+0
422 C X-239,363 Y+0 DR+
423 CC X-236,975 Y+0
424 C X-234,587 Y+0 DR+
425 CC X-237,025 Y+0
426 C X-239,463 Y+0 DR+
427 CC X-236,975 Y+0
428 C X-234,487 Y+0 DR+
429 CC X-237,025 Y+0
430 C X-239,563 Y+0 DR+
431 CC X-236,975 Y+0
432 C X-234,387 Y+0 DR+
433 CC X-237,025 Y+0
434 C X-239,663 Y+0 DR+
435 CC X-236,975 Y+0
436 C X-234,287 Y+0 DR+
437 CC X-237,025 Y+0
438 C X-239,763 Y+0 DR+
439 CC X-236,975 Y+0
440 C X-234,187 Y+0 DR+
441 CC X-237,025 Y+0
442 C X-239,863 Y+0 DR+
443 CC X-236,975 Y+0
444 C X-234,087 Y+0 DR+
445 CC X-237,025 Y+0
446 C X-239,963 Y+0 DR+
447 CC X-236,975 Y+0
448 C X-233,987 Y+0 DR+
449 CC X-237,025 Y+0
450 C X-240,063 Y+0 DR+
451 CC X-236,975 Y+0
452 C X-233,887 Y+0 DR+
453 CC X-237,025 Y+0
454 C X-240,163 Y+0 DR+
455 CC X-236,975 Y+0
456 C X-233,787 Y+0 DR+
457 CC X-237,025 Y+0
458 C X-240,263 Y+0 DR+
459 CC X-236,975 Y+0
460 C X-233,687 Y+0 DR+
461 CC X-237,025 Y+0
462 C X-240,363 Y+0 DR+
463 CC X-236,975 Y+0
464 C X-233,587 Y+0 DR+
465 CC X-237,025 Y+0
466 C X-240,463 Y+0 DR+
467 CC X-236,975 Y+0
468 C X-233,487 Y+0 DR+
469 CC X-237,025 Y+0
470 C X-240,563 Y+0 DR+
471 CC X-236,975 Y+0
472 C X-233,387 Y+0 DR+
473 CC X-237,025 Y+0
474 C X-240,663 Y+0 DR+
475 CC X-236,975 Y+0
476 C X-233,287 Y+0 DR+
477 CC X-237,025 Y+0
478 C X-240,763 Y+0 DR+
479 CC X-236,975 Y+0
480 C X-233,187 Y+0 DR+
481 CC X-237,025 Y+0
482 C X-240,863 Y+0 DR+
483 CC X-236,975 Y+0
484 C X-233,087 Y+0 DR+
485 CC X-237,025 Y+0
486 C X-240,963 Y+0 DR+
487 CC X-236,975 Y+0
488 C X-232,987 Y+0 DR+
489 CC X-237,025 Y+0
490 C X-241,063 Y+0 DR+
491 CC X-236,975 Y+0
492 C X-232,887 Y+0 DR+
493 CC X-237,025 Y+0
494 C X-241,163 Y+0 DR+
495 CC X-236,975 Y+0
496 C X-232,787 Y+0 DR+
497 CC X-237,025 Y+0
498 C X-241,263 Y+0 DR+
499 CC X-236,975 Y+0
500 C X-232,687 Y+0 DR+
501 CC X-237,025 Y+0
502 C X-241,363 Y+0 DR+
503 CC X-236,975 Y+0
504 C X-232,587 Y+0 DR+
505 CC X-237,025 Y+0
506 C X-241,463 Y+0 DR+
507 CC X-236,975 Y+0
508 C X-232,487 Y+0 DR+
509 CC X-237,025 Y+0
510 C X-241,563 Y+0 DR+
511 CC X-236,975 Y+0
512 C X-232,387 Y+0 DR+
513 CC X-237,025 Y+0
514 C X-241,663 Y+0 DR+
515 CC X-236,975 Y+0
516 C X-232,287 Y+0 DR+
517 CC X-237,025 Y+0
518 C X-241,763 Y+0 DR+
519 CC X-236,975 Y+0
520 C X-232,187 Y+0 DR+
521 CC X-237,025 Y+0
522 C X-241,863 Y+0 DR+
523 CC X-236,975 Y+0
524 C X-232,087 Y+0 DR+
525 CC X-237,025 Y+0
526 C X-241,963 Y+0 DR+
527 CC X-236,975 Y+0
528 C X-231,987 Y+0 DR+
529 CC X-237,025 Y+0
530 C X-242,063 Y+0 DR+
531 CC X-236,975 Y+0
532 C X-231,887 Y+0 DR+
533 CC X-237,025 Y+0
534 C X-242,163 Y+0 DR+
535 CC X-236,975 Y+0
536 C X-231,787 Y+0 DR+
537 CC X-237,025 Y+0
538 C X-242,263 Y+0 DR+
539 CC X-236,975 Y+0
540 C X-231,687 Y+0 DR+
541 CC X-237,025 Y+0
542 C X-242,363 Y+0 DR+
543 CC X-236,975 Y+0
544 C X-231,587 Y+0 DR+
545 CC X-237,025 Y+0
546 C X-242,463 Y+0 DR+
547 CC X-236,975 Y+0
548 C X-231,487 Y+0 DR+
549 CC X-237,025 Y+0
550 C X-242,563 Y+0 DR+
551 CC X-236,975 Y+0
552 C X-231,387 Y+0 DR+
553 CC X-237,025 Y+0
554 C X-242,663 Y+0 DR+
555 CC X-236,975 Y+0
556 C X-231,287 Y+0 DR+
557 CC X-237,025 Y+0
558 C X-242,763 Y+0 DR+
559 CC X-236,975 Y+0
560 C X-231,187 Y+0 DR+
561 CC X-237,025 Y+0
562 C X-242,863 Y+0 DR+
563 CC X-236,975 Y+0
564 C X-231,087 Y+0 DR+
565 CC X-237,025 Y+0
566 C X-242,963 Y+0 DR+
567 CC X-236,975 Y+0
568 C X-230,987 Y+0 DR+
569 CC X-237,025 Y+0
570 C X-243,063 Y+0 DR+
571 CC X-236,975 Y+0
572 C X-230,887 Y+0 DR+
573 CC X-237,025 Y+0
574 C X-243,163 Y+0 DR+
575 CC X-236,975 Y+0
576 C X-230,787 Y+0 DR+
577 CC X-237,025 Y+0
578 C X-243,263 Y+0 DR+
579 CC X-236,975 Y+0
580 C X-230,687 Y+0 DR+
581 CC X-237,025 Y+0
582 C X-243,363 Y+0 DR+
583 CC X-236,975 Y+0
584 C X-230,587 Y+0 DR+
585 CC X-237,025 Y+0
586 C X-243,463 Y+0 DR+
587 CC X-236,975 Y+0
588 C X-230,487 Y+0 DR+
589 CC X-237,025 Y+0
590 C X-243,563 Y+0 DR+
591 CC X-236,975 Y+0
592 C X-230,387 Y+0 DR+
593 CC X-237,025 Y+0
594 C X-243,663 Y+0 DR+
595 CC X-236,975 Y+0
596 C X-230,287 Y+0 DR+
597 CC X-237,025 Y+0
598 C X-243,763 Y+0 DR+
599 CC X-236,975 Y+0
600 C X-230,187 Y+0 DR+
601 CC X-237,025 Y+0
602 C X-243,863 Y+0 DR+
603 CC X-236,975 Y+0
604 C X-233,541 Y-5,97 DR+
605 CC X-237 Y+0
606 C X-243,9 Y+0 DR+
607 CC X-237 Y+0
608 C X-233,541 Y-5,97 DR+
609 L Z+50 FMAX
610 L X-1,477 Y-2,611 FMAX
611 L Z+2 FMAX
612 L Z+0,5 F297
613 CC X+0 Y+0
614 CP IPA-180 Z-0,325 DR-
615 CC X+0 Y+0
616 CP IPA-180 Z-1,149 DR-
617 CC X+0 Y+0
618 CP IPA-180 Z-1,974 DR-
619 CC X+0 Y+0
620 CP IPA-180 Z-2,798 DR-
621 CC X+0 Y+0
622 CP IPA-240,504 Z-3,9 DR-
623 L X+0,013 Y+0 F3565
624 CC X-0,025 Y+0
625 C X-0,063 Y+0 DR+
626 CC X+0,025 Y+0
627 C X+0,113 Y+0 DR+
628 CC X-0,025 Y+0
629 C X-0,163 Y+0 DR+
630 CC X+0,025 Y+0
631 C X+0,213 Y+0 DR+
632 CC X-0,025 Y+0
633 C X-0,263 Y+0 DR+
634 CC X+0,025 Y+0
635 C X+0,313 Y+0 DR+
636 CC X-0,025 Y+0
637 C X-0,363 Y+0 DR+
638 CC X+0,025 Y+0
639 C X+0,413 Y+0 DR+
640 CC X-0,025 Y+0
641 C X-0,463 Y+0 DR+
642 CC X+0,025 Y+0
643 C X+0,513 Y+0 DR+
644 CC X-0,025 Y+0
645 C X-0,563 Y+0 DR+
646 CC X+0,025 Y+0
647 C X+0,613 Y+0 DR+
648 CC X-0,025 Y+0
649 C X-0,663 Y+0 DR+
650 CC X+0,025 Y+0
651 C X+0,713 Y+0 DR+
652 CC X-0,025 Y+0
653 C X-0,763 Y+0 DR+
654 CC X+0,025 Y+0
655 C X+0,813 Y+0 DR+
656 CC X-0,025 Y+0
657 C X-0,863 Y+0 DR+
658 CC X+0,025 Y+0
659 C X+0,913 Y+0 DR+
660 CC X-0,025 Y+0
661 C X-0,963 Y+0 DR+
662 CC X+0,025 Y+0
663 C X+1,013 Y+0 DR+
664 CC X-0,025 Y+0
665 C X-1,063 Y+0 DR+
666 CC X+0,025 Y+0
667 C X+1,113 Y+0 DR+
668 CC X-0,025 Y+0
669 C X-1,163 Y+0 DR+
670 CC X+0,025 Y+0
671 C X+1,213 Y+0 DR+
672 CC X-0,025 Y+0
673 C X-1,263 Y+0 DR+
674 CC X+0,025 Y+0
675 C X+1,313 Y+0 DR+
676 CC X-0,025 Y+0
677 C X-1,363 Y+0 DR+
678 CC X+0,025 Y+0
679 C X+1,413 Y+0 DR+
680 CC X-0,025 Y+0
681 C X-1,463 Y+0 DR+
682 CC X+0,025 Y+0
683 C X+1,513 Y+0 DR+
684 CC X-0,025 Y+0
685 C X-1,563 Y+0 DR+
686 CC X+0,025 Y+0
687 C X+1,613 Y+0 DR+
688 CC X-0,025 Y+0
689 C X-1,663 Y+0 DR+
690 CC X+0,025 Y+0
691 C X+1,713 Y+0 DR+
692 CC X-0,025 Y+0
693 C X-1,763 Y+0 DR+
694 CC X+0,025 Y+0
695 C X+1,813 Y+0 DR+
696 CC X-0,025 Y+0
697 C X-1,863 Y+0 DR+
698 CC X+0,025 Y+0
699 C X+1,913 Y+0 DR+
700 CC X-0,025 Y+0
701 C X-1,963 Y+0 DR+
702 CC X+0,025 Y+0
703 C X+2,013 Y+0 DR+
704 CC X-0,025 Y+0
705 C X-2,063 Y+0 DR+
706 CC X+0,025 Y+0
707 C X+2,113 Y+0 DR+
708 CC X-0,025 Y+0
709 C X-2,163 Y+0 DR+
710 CC X+0,025 Y+0
711 C X+2,213 Y+0 DR+
712 CC X-0,025 Y+0
713 C X-2,263 Y+0 DR+
714 CC X+0,025 Y+0
715 C X+2,313 Y+0 DR+
716 CC X-0,025 Y+0
717 C X-2,363 Y+0 DR+
718 CC X+0,025 Y+0
719 C X+2,413 Y+0 DR+
720 CC X-0,025 Y+0
721 C X-2,463 Y+0 DR+
722 CC X+0,025 Y+0
723 C X+2,513 Y+0 DR+
724 CC X-0,025 Y+0
725 C X-2,563 Y+0 DR+
726 CC X+0,025 Y+0
727 C X+2,613 Y+0 DR+
728 CC X-0,025 Y+0
729 C X-2,663 Y+0 DR+
730 CC X+0,025 Y+0
731 C X+2,713 Y+0 DR+
732 CC X-0,025 Y+0
733 C X-2,763 Y+0 DR+
734 CC X+0,025 Y+0
735 C X+2,813 Y+0 DR+
736 CC X-0,025 Y+0
737 C X-2,863 Y+0 DR+
738 CC X+0,025 Y+0
739 C X+2,913 Y+0 DR+
740 CC X-0,025 Y+0
741 C X-2,963 Y+0 DR+
742 CC X+0,025 Y+0
743 C X+3,013 Y+0 DR+
744 CC X-0,025 Y+0
745 C X-3,063 Y+0 DR+
746 CC X+0,025 Y+0
747 C X+3,113 Y+0 DR+
748 CC X-0,025 Y+0
749 C X-3,163 Y+0 DR+
750 CC X+0,025 Y+0
751 C X+3,213 Y+0 DR+
752 CC X-0,025 Y+0
753 C X-3,263 Y+0 DR+
754 CC X+0,025 Y+0
755 C X+3,313 Y+0 DR+
756 CC X-0,025 Y+0
757 C X-3,363 Y+0 DR+
758 CC X+0,025 Y+0
759 C X+3,413 Y+0 DR+
760 CC X-0,025 Y+0
761 C X-3,463 Y+0 DR+
762 CC X+0,025 Y+0
763 C X+3,513 Y+0 DR+
764 CC X-0,025 Y+0
765 C X-3,563 Y+0 DR+
766 CC X+0,025 Y+0
767 C X+3,613 Y+0 DR+
768 CC X-0,025 Y+0
769 C X-3,663 Y+0 DR+
770 CC X+0,025 Y+0
771 C X+3,713 Y+0 DR+
772 CC X-0,025 Y+0
773 C X-3,763 Y+0 DR+
774 CC X+0,025 Y+0
775 C X+3,813 Y+0 DR+
776 CC X-0,025 Y+0
777 C X-3,863 Y+0 DR+
778 CC X+0,025 Y+0
779 C X+3,913 Y+0 DR+
780 CC X-0,025 Y+0
781 C X-3,963 Y+0 DR+
782 CC X+0,025 Y+0
783 C X+4,013 Y+0 DR+
784 CC X-0,025 Y+0
785 C X-4,063 Y+0 DR+
786 CC X+0,025 Y+0
787 C X+4,113 Y+0 DR+
788 CC X-0,025 Y+0
789 C X-4,163 Y+0 DR+
790 CC X+0,025 Y+0
791 C X+4,213 Y+0 DR+
792 CC X-0,025 Y+0
793 C X-4,263 Y+0 DR+
794 CC X+0,025 Y+0
795 C X+4,313 Y+0 DR+
796 CC X-0,025 Y+0
797 C X-4,363 Y+0 DR+
798 CC X+0,025 Y+0
799 C X+4,413 Y+0 DR+
800 CC X-0,025 Y+0
801 C X-4,463 Y+0 DR+
802 CC X+0,025 Y+0
803 C X+4,513 Y+0 DR+
804 CC X-0,025 Y+0
805 C X-4,563 Y+0 DR+
806 CC X+0,025 Y+0
807 C X+4,613 Y+0 DR+
808 CC X-0,025 Y+0
809 C X-4,663 Y+0 DR+
810 CC X+0,025 Y+0
811 C X+4,713 Y+0 DR+
812 CC X-0,025 Y+0
813 C X-4,763 Y+0 DR+
814 CC X+0,025 Y+0
815 C X+4,813 Y+0 DR+
816 CC X-0,025 Y+0
817 C X-4,863 Y+0 DR+
818 CC X+0,025 Y+0
819 C X+4,913 Y+0 DR+
820 CC X-0,025 Y+0
821 C X-4,963 Y+0 DR+
822 CC X+0,025 Y+0
823 C X+5,013 Y+0 DR+
824 CC X-0,025 Y+0
825 C X-5,063 Y+0 DR+
826 CC X+0,025 Y+0
827 C X+5,113 Y+0 DR+
828 CC X-0,025 Y+0
829 C X-5,163 Y+0 DR+
830 CC X+0,025 Y+0
831 C X+5,213 Y+0 DR+
832 CC X-0,025 Y+0
833 C X-5,263 Y+0 DR+
834 CC X+0,025 Y+0
835 C X+5,313 Y+0 DR+
836 CC X-0,025 Y+0
837 C X-5,363 Y+0 DR+
838 CC X+0,025 Y+0
839 C X+5,413 Y+0 DR+
840 CC X-0,025 Y+0
841 C X-5,463 Y+0 DR+
842 CC X+0,025 Y+0
843 C X+5,513 Y+0 DR+
844 CC X-0,025 Y+0
845 C X-5,563 Y+0 DR+
846 CC X+0,025 Y+0
847 C X+5,613 Y+0 DR+
848 CC X-0,025 Y+0
849 C X-5,663 Y+0 DR+
850 CC X+0,025 Y+0
851 C X+5,713 Y+0 DR+
852 CC X-0,025 Y+0
853 C X-5,763 Y+0 DR+
854 CC X+0,025 Y+0
855 C X+5,813 Y+0 DR+
856 CC X-0,025 Y+0
857 C X-5,863 Y+0 DR+
858 CC X+0,025 Y+0
859 C X+5,913 Y+0 DR+
860 CC X-0,025 Y+0
861 C X-5,963 Y+0 DR+
862 CC X+0,025 Y+0
863 C X+6,013 Y+0 DR+
864 CC X-0,025 Y+0
865 C X-6,063 Y+0 DR+
866 CC X+0,025 Y+0
867 C X+6,113 Y+0 DR+
868 CC X-0,025 Y+0
869 C X-6,163 Y+0 DR+
870 CC X+0,025 Y+0
871 C X+6,213 Y+0 DR+
872 CC X-0,025 Y+0
873 C X-6,263 Y+0 DR+
874 CC X+0,025 Y+0
875 C X+6,313 Y+0 DR+
876 CC X-0,025 Y+0
877 C X-6,363 Y+0 DR+
878 CC X+0,025 Y+0
879 C X+6,413 Y+0 DR+
880 CC X-0,025 Y+0
881 C X-6,463 Y+0 DR+
882 CC X+0,025 Y+0
883 C X+6,513 Y+0 DR+
884 CC X-0,025 Y+0
885 C X-6,563 Y+0 DR+
886 CC X+0,025 Y+0
887 C X+6,613 Y+0 DR+
888 CC X-0,025 Y+0
889 C X-6,663 Y+0 DR+
890 CC X+0,025 Y+0
891 C X+6,713 Y+0 DR+
892 CC X-0,025 Y+0
893 C X-6,763 Y+0 DR+
894 CC X+0,025 Y+0
895 C X+6,813 Y+0 DR+
896 CC X-0,025 Y+0
897 C X-6,863 Y+0 DR+
898 CC X+0,025 Y+0
899 C X+3,459 Y-5,97 DR+
900 CC X+0 Y+0
901 C X-6,9 Y+0 DR+
902 CC X+0 Y+0
903 C X+3,459 Y-5,97 DR+
904 L Z+10 FMAX
905 L X-1,477 Y-2,611 FMAX
906 L Z+0,45 FMAX
907 CC X+0 Y+0
908 CP IPA-180 Z-0,375 DR- F297
909 CC X+0 Y+0
910 CP IPA-180 Z-1,199 DR-
911 CC X+0 Y+0
912 CP IPA-180 Z-2,023 DR-
913 CC X+0 Y+0
914 CP IPA-180 Z-2,848 DR-
915 CC X+0 Y+0
916 CP IPA-240,504 Z-3,95 DR-
917 L X+0,013 Y+0 F3565
918 CC X-0,025 Y+0
919 C X-0,063 Y+0 DR+
920 CC X+0,025 Y+0
921 C X+0,113 Y+0 DR+
922 CC X-0,025 Y+0
923 C X-0,163 Y+0 DR+
924 CC X+0,025 Y+0
925 C X+0,213 Y+0 DR+
926 CC X-0,025 Y+0
927 C X-0,263 Y+0 DR+
928 CC X+0,025 Y+0
929 C X+0,313 Y+0 DR+
930 CC X-0,025 Y+0
931 C X-0,363 Y+0 DR+
932 CC X+0,025 Y+0
933 C X+0,413 Y+0 DR+
934 CC X-0,025 Y+0
935 C X-0,463 Y+0 DR+
936 CC X+0,025 Y+0
937 C X+0,513 Y+0 DR+
938 CC X-0,025 Y+0
939 C X-0,563 Y+0 DR+
940 CC X+0,025 Y+0
941 C X+0,613 Y+0 DR+
942 CC X-0,025 Y+0
943 C X-0,663 Y+0 DR+
944 CC X+0,025 Y+0
945 C X+0,713 Y+0 DR+
946 CC X-0,025 Y+0
947 C X-0,763 Y+0 DR+
948 CC X+0,025 Y+0
949 C X+0,813 Y+0 DR+
950 CC X-0,025 Y+0
951 C X-0,863 Y+0 DR+
952 CC X+0,025 Y+0
953 C X+0,913 Y+0 DR+
954 CC X-0,025 Y+0
955 C X-0,963 Y+0 DR+
956 CC X+0,025 Y+0
957 C X+1,013 Y+0 DR+
958 CC X-0,025 Y+0
959 C X-1,063 Y+0 DR+
960 CC X+0,025 Y+0
961 C X+1,113 Y+0 DR+
962 CC X-0,025 Y+0
963 C X-1,163 Y+0 DR+
964 CC X+0,025 Y+0
965 C X+1,213 Y+0 DR+
966 CC X-0,025 Y+0
967 C X-1,263 Y+0 DR+
968 CC X+0,025 Y+0
969 C X+1,313 Y+0 DR+
970 CC X-0,025 Y+0
971 C X-1,363 Y+0 DR+
972 CC X+0,025 Y+0
973 C X+1,413 Y+0 DR+
974 CC X-0,025 Y+0
975 C X-1,463 Y+0 DR+
976 CC X+0,025 Y+0
977 C X+1,513 Y+0 DR+
978 CC X-0,025 Y+0
979 C X-1,563 Y+0 DR+
980 CC X+0,025 Y+0
981 C X+1,613 Y+0 DR+
982 CC X-0,025 Y+0
983 C X-1,663 Y+0 DR+
984 CC X+0,025 Y+0
985 C X+1,713 Y+0 DR+
986 CC X-0,025 Y+0
987 C X-1,763 Y+0 DR+
988 CC X+0,025 Y+0
989 C X+1,813 Y+0 DR+
990 CC X-0,025 Y+0
991 C X-1,863 Y+0 DR+
992 CC X+0,025 Y+0
993 C X+1,913 Y+0 DR+
994 CC X-0,025 Y+0
995 C X-1,963 Y+0 DR+
996 CC X+0,025 Y+0
997 C X+2,013 Y+0 DR+
998 CC X-0,025 Y+0
999 C X-2,063 Y+0 DR+
1000 CC X+0,025 Y+0
1001 C X+2,113 Y+0 DR+
1002 CC X-0,025 Y+0
1003 C X-2,163 Y+0 DR+
1004 CC X+0,025 Y+0
1005 C X+2,213 Y+0 DR+
1006 CC X-0,025 Y+0
1007 C X-2,263 Y+0 DR+
1008 CC X+0,025 Y+0
1009 C X+2,313 Y+0 DR+
1010 CC X-0,025 Y+0
1011 C X-2,363 Y+0 DR+
1012 CC X+0,025 Y+0
1013 C X+2,413 Y+0 DR+
1014 CC X-0,025 Y+0
1015 C X-2,463 Y+0 DR+
1016 CC X+0,025 Y+0
1017 C X+2,513 Y+0 DR+
1018 CC X-0,025 Y+0
1019 C X-2,563 Y+0 DR+
1020 CC X+0,025 Y+0
1021 C X+2,613 Y+0 DR+
1022 CC X-0,025 Y+0
1023 C X-2,663 Y+0 DR+
1024 CC X+0,025 Y+0
1025 C X+2,713 Y+0 DR+
1026 CC X-0,025 Y+0
1027 C X-2,763 Y+0 DR+
1028 CC X+0,025 Y+0
1029 C X+2,813 Y+0 DR+
1030 CC X-0,025 Y+0
1031 C X-2,863 Y+0 DR+
1032 CC X+0,025 Y+0
1033 C X+2,913 Y+0 DR+
1034 CC X-0,025 Y+0
1035 C X-2,963 Y+0 DR+
1036 CC X+0,025 Y+0
1037 C X+3,013 Y+0 DR+
1038 CC X-0,025 Y+0
1039 C X-3,063 Y+0 DR+
1040 CC X+0,025 Y+0
1041 C X+3,113 Y+0 DR+
1042 CC X-0,025 Y+0
1043 C X-3,163 Y+0 DR+
1044 CC X+0,025 Y+0
1045 C X+3,213 Y+0 DR+
1046 CC X-0,025 Y+0
1047 C X-3,263 Y+0 DR+
1048 CC X+0,025 Y+0
1049 C X+3,313 Y+0 DR+
1050 CC X-0,025 Y+0
1051 C X-3,363 Y+0 DR+
1052 CC X+0,025 Y+0
1053 C X+3,413 Y+0 DR+
1054 CC X-0,025 Y+0
1055 C X-3,463 Y+0 DR+
1056 CC X+0,025 Y+0
1057 C X+3,513 Y+0 DR+
1058 CC X-0,025 Y+0
1059 C X-3,563 Y+0 DR+
1060 CC X+0,025 Y+0
1061 C X+3,613 Y+0 DR+
1062 CC X-0,025 Y+0
1063 C X-3,663 Y+0 DR+
1064 CC X+0,025 Y+0
1065 C X+3,713 Y+0 DR+
1066 CC X-0,025 Y+0
1067 C X-3,763 Y+0 DR+
1068 CC X+0,025 Y+0
1069 C X+3,813 Y+0 DR+
1070 CC X-0,025 Y+0
1071 C X-3,863 Y+0 DR+
1072 CC X+0,025 Y+0
1073 C X+3,913 Y+0 DR+
1074 CC X-0,025 Y+0
1075 C X-3,963 Y+0 DR+
1076 CC X+0,025 Y+0
1077 C X+4,013 Y+0 DR+
1078 CC X-0,025 Y+0
1079 C X-4,063 Y+0 DR+
1080 CC X+0,025 Y+0
1081 C X+4,113 Y+0 DR+
1082 CC X-0,025 Y+0
1083 C X-4,163 Y+0 DR+
1084 CC X+0,025 Y+0
1085 C X+4,213 Y+0 DR+
1086 CC X-0,025 Y+0
1087 C X-4,263 Y+0 DR+
1088 CC X+0,025 Y+0
1089 C X+4,313 Y+0 DR+
1090 CC X-0,025 Y+0
1091 C X-4,363 Y+0 DR+
1092 CC X+0,025 Y+0
1093 C X+4,413 Y+0 DR+
1094 CC X-0,025 Y+0
1095 C X-4,463 Y+0 DR+
1096 CC X+0,025 Y+0
1097 C X+4,513 Y+0 DR+
1098 CC X-0,025 Y+0
1099 C X-4,563 Y+0 DR+
1100 CC X+0,025 Y+0
1101 C X+4,613 Y+0 DR+
1102 CC X-0,025 Y+0
1103 C X-4,663 Y+0 DR+
1104 CC X+0,025 Y+0
1105 C X+4,713 Y+0 DR+
1106 CC X-0,025 Y+0
1107 C X-4,763 Y+0 DR+
1108 CC X+0,025 Y+0
1109 C X+4,813 Y+0 DR+
1110 CC X-0,025 Y+0
1111 C X-4,863 Y+0 DR+
1112 CC X+0,025 Y+0
1113 C X+4,913 Y+0 DR+
1114 CC X-0,025 Y+0
1115 C X-4,963 Y+0 DR+
1116 CC X+0,025 Y+0
1117 C X+5,013 Y+0 DR+
1118 CC X-0,025 Y+0
1119 C X-5,063 Y+0 DR+
1120 CC X+0,025 Y+0
1121 C X+5,113 Y+0 DR+
1122 CC X-0,025 Y+0
1123 C X-5,163 Y+0 DR+
1124 CC X+0,025 Y+0
1125 C X+5,213 Y+0 DR+
1126 CC X-0,025 Y+0
1127 C X-5,263 Y+0 DR+
1128 CC X+0,025 Y+0
1129 C X+5,313 Y+0 DR+
1130 CC X-0,025 Y+0
1131 C X-5,363 Y+0 DR+
1132 CC X+0,025 Y+0
1133 C X+5,413 Y+0 DR+
1134 CC X-0,025 Y+0
1135 C X-5,463 Y+0 DR+
1136 CC X+0,025 Y+0
1137 C X+5,513 Y+0 DR+
1138 CC X-0,025 Y+0
1139 C X-5,563 Y+0 DR+
1140 CC X+0,025 Y+0
1141 C X+5,613 Y+0 DR+
1142 CC X-0,025 Y+0
1143 C X-5,663 Y+0 DR+
1144 CC X+0,025 Y+0
1145 C X+5,713 Y+0 DR+
1146 CC X-0,025 Y+0
1147 C X-5,763 Y+0 DR+
1148 CC X+0,025 Y+0
1149 C X+5,813 Y+0 DR+
1150 CC X-0,025 Y+0
1151 C X-5,863 Y+0 DR+
1152 CC X+0,025 Y+0
1153 C X+5,913 Y+0 DR+
1154 CC X-0,025 Y+0
1155 C X-5,963 Y+0 DR+
1156 CC X+0,025 Y+0
1157 C X+6,013 Y+0 DR+
1158 CC X-0,025 Y+0
1159 C X-6,063 Y+0 DR+
1160 CC X+0,025 Y+0
1161 C X+6,113 Y+0 DR+
1162 CC X-0,025 Y+0
1163 C X-6,163 Y+0 DR+
1164 CC X+0,025 Y+0
1165 C X+6,213 Y+0 DR+
1166 CC X-0,025 Y+0
1167 C X-6,263 Y+0 DR+
1168 CC X+0,025 Y+0
1169 C X+6,313 Y+0 DR+
1170 CC X-0,025 Y+0
1171 C X-6,363 Y+0 DR+
1172 CC X+0,025 Y+0
1173 C X+6,413 Y+0 DR+
1174 CC X-0,025 Y+0
1175 C X-6,463 Y+0 DR+
1176 CC X+0,025 Y+0
1177 C X+6,513 Y+0 DR+
1178 CC X-0,025 Y+0
1179 C X-6,563 Y+0 DR+
1180 CC X+0,025 Y+0
1181 C X+6,613 Y+0 DR+
1182 CC X-0,025 Y+0
1183 C X-6,663 Y+0 DR+
1184 CC X+0,025 Y+0
1185 C X+6,713 Y+0 DR+
1186 CC X-0,025 Y+0
1187 C X-6,763 Y+0 DR+
1188 CC X+0,025 Y+0
1189 C X+6,813 Y+0 DR+
1190 CC X-0,025 Y+0
1191 C X-6,863 Y+0 DR+
1192 CC X+0,025 Y+0
1193 C X+3,459 Y-5,97 DR+
1194 CC X+0 Y+0
1195 C X-6,9 Y+0 DR+
1196 CC X+0 Y+0
1197 C X+3,459 Y-5,97 DR+
1198 L Z+50 FMAX
1199 TOOL CALL 19 Z S7427 DR-3
1200 L X-237 Y+0 Z+50 FMAX
1201 L Z-1,9 FMAX
1202 L Z-3,95 F297
1203 L X-231,3 Y-0,6 RL F3565
1204 L X-230,7
1205 CC X-230,7 Y+0
1206 C X-230,1 Y+0 DR+
1207 CC X-237 Y+0
1208 C X-243,9 Y+0 DR+
1209 CC X-237 Y+0
1210 C X-230,1 Y+0 DR+
1211 CC X-237 Y+0
1212 C X-230,388 Y+1,972 DR+
1213 CC X-237 Y+0
1214 C X-243,9 Y+0 DR+
1215 CC X-237 Y+0
1216 C X-230,1 Y+0 DR+
1217 CC X-237 Y+0
1218 C X-230,388 Y+1,972 DR+
1219 CC X-237 Y+0
1220 C X-243,9 Y+0 DR+
1221 CC X-237 Y+0
1222 C X-230,1 Y+0 DR+
1223 CC X-237 Y+0
1224 C X-230,388 Y+1,972 DR+
1225 CC X-230,963 Y+1,801
1226 C X-231,134 Y+2,376 DR+
1227 L X-231,709 Y+2,204
1228 L X-237 Y+0 R0
1229 L Z+50 FMAX
1230 L X+0 FMAX
1231 L Z-1,9 FMAX
1232 L Z-3,95 F297
1233 L X+5,7 Y-0,6 RL F3565
1234 L X+6,3
1235 CC X+6,3 Y+0
1236 C X+6,9 Y+0 DR+
1237 CC X+0 Y+0
1238 C X-6,9 Y+0 DR+
1239 CC X+0 Y+0
1240 C X+6,9 Y+0 DR+
1241 CC X+0 Y+0
1242 C X+6,612 Y+1,972 DR+
1243 CC X+0 Y+0
1244 C X-6,9 Y+0 DR+
1245 CC X+0 Y+0
1246 C X+6,9 Y+0 DR+
1247 CC X+0 Y+0
1248 C X+6,612 Y+1,972 DR+
1249 CC X+0 Y+0
1250 C X-6,9 Y+0 DR+
1251 CC X+0 Y+0
1252 C X+6,9 Y+0 DR+
1253 CC X+0 Y+0
1254 C X+6,612 Y+1,972 DR+
1255 CC X+6,037 Y+1,801
1256 C X+5,866 Y+2,376 DR+
1257 L X+5,291 Y+2,204
1258 L X+0 Y+0 R0
1259 L Z+50 FMAX
1260 M9
1261 M5
1262 L Z-1 FMAX M91
1263 ; T21 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
1264 ; CORRECTION USURE GAUCHE
1265 ; SUREP R 0.05 SUREP Z 0.
1266 TOOL CALL 21 Z S6000 DR-3
1267 TOOL DEF 1
1268 L X-237 Y+0 FMAX M3
1269 L Z+50 FMAX M25
1270 L Z+2 FMAX
1271 L Z-4 F297
1272 L X-231,25 Y-0,6 RL F500
1273 L X-230,65
1274 CC X-230,65 Y+0
1275 C X-230,05 Y+0 DR+
1276 CC X-237 Y+0
1277 C X-243,95 Y+0 DR+
1278 CC X-237 Y+0
1279 C X-230,05 Y+0 DR+
1280 CC X-237 Y+0
1281 C X-230,336 Y+1,973 DR+
1282 CC X-237 Y+0
1283 C X-243,95 Y+0 DR+
1284 CC X-237 Y+0
1285 C X-230,05 Y+0 DR+
1286 CC X-237 Y+0
1287 C X-230,336 Y+1,973 DR+
1288 CC X-237 Y+0
1289 C X-243,95 Y+0 DR+
1290 CC X-237 Y+0
1291 C X-230,05 Y+0 DR+
1292 CC X-237 Y+0
1293 C X-230,336 Y+1,973 DR+
1294 CC X-230,911 Y+1,802
1295 C X-231,081 Y+2,378 DR+
1296 L X-231,657 Y+2,207
1297 L X-237 Y+0 R0
1298 L Z+50 FMAX
1299 L X+0 FMAX
1300 L Z+2 FMAX
1301 L Z-4 F297
1302 L X+5,75 Y-0,6 RL F500
1303 L X+6,35
1304 CC X+6,35 Y+0
1305 C X+6,95 Y+0 DR+
1306 CC X+0 Y+0
1307 C X-6,95 Y+0 DR+
1308 CC X+0 Y+0
1309 C X+6,95 Y+0 DR+
1310 CC X+0 Y+0
1311 C X+6,664 Y+1,973 DR+
1312 CC X+0 Y+0
1313 C X-6,95 Y+0 DR+
1314 CC X+0 Y+0
1315 C X+6,95 Y+0 DR+
1316 CC X+0 Y+0
1317 C X+6,664 Y+1,973 DR+
1318 CC X+0 Y+0
1319 C X-6,95 Y+0 DR+
1320 CC X+0 Y+0
1321 C X+6,95 Y+0 DR+
1322 CC X+0 Y+0
1323 C X+6,664 Y+1,973 DR+
1324 CC X+6,089 Y+1,802
1325 C X+5,919 Y+2,378 DR+
1326 L X+5,343 Y+2,207
1327 L X+0 Y+0 R0
1328 L Z+50 FMAX
1329 M78
1330 M5
1331 L Z-1 FMAX M91
1332 M00
1333 ; T21 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
1334 ; CORRECTION USURE GAUCHE
1335 ; SUREP R 0. SUREP Z 0.03
1336 TOOL CALL 21 Z S6000 DR-3
1337 TOOL DEF 1
1338 L X-237 Y+0 FMAX M3
1339 L Z+50 FMAX M25
1340 L Z+2 FMAX
1341 L Z-3,97 F297
1342 L X-231,2 Y-0,6 RL F500
1343 L X-230,6
1344 CC X-230,6 Y+0
1345 C X-230 Y+0 DR+
1346 CC X-237 Y+0
1347 C X-244 Y+0 DR+
1348 CC X-237 Y+0
1349 C X-230 Y+0 DR+
1350 CC X-237 Y+0
1351 C X-230,284 Y+1,973 DR+
1352 CC X-237 Y+0
1353 C X-244 Y+0 DR+
1354 CC X-237 Y+0
1355 C X-230 Y+0 DR+
1356 CC X-237 Y+0
1357 C X-230,284 Y+1,973 DR+
1358 CC X-237 Y+0
1359 C X-244 Y+0 DR+
1360 CC X-237 Y+0
1361 C X-230 Y+0 DR+
1362 CC X-237 Y+0
1363 C X-230,284 Y+1,973 DR+
1364 CC X-230,859 Y+1,804
1365 C X-231,029 Y+2,379 DR+
1366 L X-231,604 Y+2,21
1367 L X-237 Y+0 R0
1368 L Z+50 FMAX
1369 L X+0 FMAX
1370 L Z+2 FMAX
1371 L Z-3,97 F297
1372 L X+5,8 Y-0,6 RL F500
1373 L X+6,4
1374 CC X+6,4 Y+0
1375 C X+7 Y+0 DR+
1376 CC X+0 Y+0
1377 C X-7 Y+0 DR+
1378 CC X+0 Y+0
1379 C X+7 Y+0 DR+
1380 CC X+0 Y+0
1381 C X+6,716 Y+1,973 DR+
1382 CC X+0 Y+0
1383 C X-7 Y+0 DR+
1384 CC X+0 Y+0
1385 C X+7 Y+0 DR+
1386 CC X+0 Y+0
1387 C X+6,716 Y+1,973 DR+
1388 CC X+0 Y+0
1389 C X-7 Y+0 DR+
1390 CC X+0 Y+0
1391 C X+7 Y+0 DR+
1392 CC X+0 Y+0
1393 C X+6,716 Y+1,973 DR+
1394 CC X+6,141 Y+1,804
1395 C X+5,971 Y+2,379 DR+
1396 L X+5,396 Y+2,21
1397 L X+0 Y+0 R0
1398 L Z+50 FMAX
1399 M78
1400 M5
1401 L Z-1 FMAX M91
1402 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1403 ; CORRECTION USURE GAUCHE
1404 ; SUREP R 0. SUREP Z 0.
1405 TOOL CALL 1 Z S6000 DR-2,5
1406 TOOL DEF 19
1407 L X-237 Y+0 FMAX M3
1408 L Z+50 FMAX
1409 L Z+2 FMAX
1410 L Z-2,3 F800
1411 L X-230,5 Y-0,5 RL F1200
1412 L X-230
1413 CC X-230 Y+0
1414 C X-229,5 Y+0 DR+
1415 CC X-237 Y+0
1416 C X-244,5 Y+0 DR+
1417 CC X-237 Y+0
1418 C X-229,5 Y+0 DR+
1419 CC X-237 Y+0
1420 C X-229,765 Y+1,976 DR+
1421 CC X-230,247 Y+1,845
1422 C X-230,379 Y+2,327 DR+
1423 L X-230,862 Y+2,195
1424 L X-237 Y+0 R0
1425 L Z+50 FMAX
1426 L X+0 FMAX
1427 L Z+2 FMAX
1428 L Z-2,3 F800
1429 L X+6,5 Y-0,5 RL F1200
1430 L X+7
1431 CC X+7 Y+0
1432 C X+7,5 Y+0 DR+
1433 CC X+0 Y+0
1434 C X-7,5 Y+0 DR+
1435 CC X+0 Y+0
1436 C X+7,5 Y+0 DR+
1437 CC X+0 Y+0
1438 C X+7,235 Y+1,976 DR+
1439 CC X+6,753 Y+1,845
1440 C X+6,621 Y+2,327 DR+
1441 L X+6,138 Y+2,195
1442 L X+0 Y+0 R0
1443 L Z+50 FMAX
1444 L X-276 Y-20 FMAX
1445 L Z+2 FMAX
1446 L Z-2,3 F800
1447 L X-273,36 Y-24,851 RL F1200
1448 L X-273,082 Y-25,267
1449 CC X-272,667 Y-24,989
1450 C X-272,389 Y-25,405 DR+
1451 CC X-276 Y-20
1452 C X-279,611 Y-14,595 DR+
1453 CC X-276 Y-20
1454 C X-272,389 Y-25,405 DR+
1455 CC X-276 Y-20
1456 C X-270,922 Y-24,057 DR+
1457 CC X-271,312 Y-23,745
1458 C X-271 Y-23,354 DR+
1459 L X-271,391 Y-23,042
1460 L X-276 Y-20 R0
1461 L Z+50 FMAX
1462 L X-180 FMAX
1463 L Z+2 FMAX
1464 L Z-2,3 F800
1465 L X-180,5 Y-25,5 RL F1200
1466 L Y-26
1467 CC X-180 Y-26
1468 C X-180 Y-26,5 DR+
1469 CC X-180 Y-20
1470 C X-180 Y-13,5 DR+
1471 CC X-180 Y-20
1472 C X-180 Y-26,5 DR+
1473 CC X-180 Y-20
1474 C X-178,031 Y-26,195 DR+
1475 CC X-178,183 Y-25,718
1476 C X-177,706 Y-25,567 DR+
1477 L X-177,858 Y-25,09
1478 L X-180 Y-20 R0
1479 L Z+50 FMAX
1480 L X-30 FMAX
1481 L Z+2 FMAX
1482 L Z-2,3 F800
1483 L X-24,5 Y-20,5 RL F1200
1484 L X-24
1485 CC X-24 Y-20
1486 C X-23,5 Y-20 DR+
1487 CC X-30 Y-20
1488 C X-36,5 Y-20 DR+
1489 CC X-30 Y-20
1490 C X-23,5 Y-20 DR+
1491 CC X-30 Y-20
1492 C X-23,805 Y-18,031 DR+
1493 CC X-24,282 Y-18,183
1494 C X-24,433 Y-17,706 DR+
1495 L X-24,91 Y-17,858
1496 L X-30 Y-20 R0
1497 L Z+50 FMAX
1498 M5
1499 L Z-1 FMAX M91
1500 L Y-1 FMAX M91
1501 M30
1502 END PGM REP52-53-CASSETTE-1-GUIDE INF MM
