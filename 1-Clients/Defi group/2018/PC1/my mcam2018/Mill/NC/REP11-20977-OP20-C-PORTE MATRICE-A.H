0 BEGIN PGM REP11-20977-OP20-C-PORTE MATRICE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP11-20977-OP20-C-PORTE MATRICE-A
4 ; PROG-CN DU 24-09-20 A 14:17
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; T22 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
11 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
12 ; T11 FO DIA KEN 15 5  OK DMF FORET DIAM=15.5 2 DENTS A=118. CARBURE
13 ; T21 ALESOIR DIA 16 CARB VC 15 ALESOIR DIAM=16. 5 DENTS ARS
14 ; FIN DE LISTE DES OUTILS
15 L R0 FMAX
16 L Z-1 FMAX M91
17 ; *GROUPE D'USINAGE-4*
18 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
19 ; CORRECTION AUCUNE
20 ; SUREP R 0. SUREP Z 0.
21 TOOL CALL 18 Z S2865 DR+0
22 TOOL DEF 1
23 L X-174,584 Y+190,562 FMAX M3
24 L Z+50 FMAX M25
25 L Z+2 FMAX
26 L Z+0,5 F600
27 CC X-177,581 Y+187,913
28 CP IPA-180 Z+0,061 DR-
29 CC X-177,581 Y+187,913
30 CP IPA-180 Z-0,378 DR-
31 CC X-177,581 Y+187,913
32 CP IPA-180 Z-0,817 DR-
33 CC X-177,581 Y+187,913
34 CP IPA-180 Z-1,255 DR-
35 CC X-177,581 Y+187,913
36 CP IPA-180 Z-1,694 DR-
37 CC X-177,581 Y+187,913
38 CP IPA-180 Z-2,133 DR-
39 CC X-177,581 Y+187,913
40 CP IPA-180 Z-2,572 DR-
41 CC X-177,581 Y+187,913
42 CP IPA-180 Z-3,011 DR-
43 CC X-177,581 Y+187,913
44 CP IPA-180 Z-3,45 DR-
45 CC X-177,581 Y+187,913
46 CP IPA-180 Z-3,888 DR-
47 CC X-177,581 Y+187,913
48 CP IPA-180 Z-4,327 DR-
49 CC X-177,581 Y+187,913
50 CP IPA-180 Z-4,766 DR-
51 CC X-177,581 Y+187,913
52 CP IPA-180 Z-5,205 DR-
53 CC X-177,581 Y+187,913
54 CP IPA-180 Z-5,644 DR-
55 CC X-177,581 Y+187,913
56 CP IPA-180 Z-6,082 DR-
57 CC X-177,581 Y+187,913
58 CP IPA-180 Z-6,521 DR-
59 CC X-177,581 Y+187,913
60 CP IPA-180 Z-6,96 DR-
61 CC X-177,581 Y+187,913
62 CP IPA-180 Z-7,399 DR-
63 CC X-177,581 Y+187,913
64 CP IPA-41,473 Z-7,5 DR-
65 L X-176,831 Y+187,913 F573
66 CC X-179,081 Y+187,913
67 C X-181,331 Y+187,913 DR+
68 CC X-176,081 Y+187,913
69 C X-177,685 Y+182,914 DR+
70 CC X-177,581 Y+187,913
71 C X-172,581 Y+187,913 DR+
72 CC X-177,581 Y+187,913
73 C X-177,685 Y+182,914 DR+
74 L Z+10 FMAX
75 L X-174,584 Y+190,562 FMAX
76 L Z-5,5 FMAX
77 L Z-7 F600
78 CC X-177,581 Y+187,913
79 CP IPA-180 Z-7,439 DR-
80 CC X-177,581 Y+187,913
81 CP IPA-180 Z-7,878 DR-
82 CC X-177,581 Y+187,913
83 CP IPA-180 Z-8,317 DR-
84 CC X-177,581 Y+187,913
85 CP IPA-180 Z-8,755 DR-
86 CC X-177,581 Y+187,913
87 CP IPA-180 Z-9,194 DR-
88 CC X-177,581 Y+187,913
89 CP IPA-180 Z-9,633 DR-
90 CC X-177,581 Y+187,913
91 CP IPA-180 Z-10,072 DR-
92 CC X-177,581 Y+187,913
93 CP IPA-180 Z-10,511 DR-
94 CC X-177,581 Y+187,913
95 CP IPA-180 Z-10,95 DR-
96 CC X-177,581 Y+187,913
97 CP IPA-180 Z-11,388 DR-
98 CC X-177,581 Y+187,913
99 CP IPA-180 Z-11,827 DR-
100 CC X-177,581 Y+187,913
101 CP IPA-180 Z-12,266 DR-
102 CC X-177,581 Y+187,913
103 CP IPA-180 Z-12,705 DR-
104 CC X-177,581 Y+187,913
105 CP IPA-180 Z-13,144 DR-
106 CC X-177,581 Y+187,913
107 CP IPA-180 Z-13,583 DR-
108 CC X-177,581 Y+187,913
109 CP IPA-180 Z-14,021 DR-
110 CC X-177,581 Y+187,913
111 CP IPA-180 Z-14,46 DR-
112 CC X-177,581 Y+187,913
113 CP IPA-180 Z-14,899 DR-
114 CC X-177,581 Y+187,913
115 CP IPA-41,473 Z-15 DR-
116 L X-176,831 Y+187,913 F573
117 CC X-179,081 Y+187,913
118 C X-181,331 Y+187,913 DR+
119 CC X-176,081 Y+187,913
120 C X-177,685 Y+182,914 DR+
121 CC X-177,581 Y+187,913
122 C X-172,581 Y+187,913 DR+
123 CC X-177,581 Y+187,913
124 C X-177,685 Y+182,914 DR+
125 L Z+50 FMAX
126 L X-129,584 Y+145,562 FMAX
127 L Z+2 FMAX
128 L Z+0,5 F600
129 CC X-132,581 Y+142,913
130 CP IPA-180 Z+0,061 DR-
131 CC X-132,581 Y+142,913
132 CP IPA-180 Z-0,378 DR-
133 CC X-132,581 Y+142,913
134 CP IPA-180 Z-0,817 DR-
135 CC X-132,581 Y+142,913
136 CP IPA-180 Z-1,255 DR-
137 CC X-132,581 Y+142,913
138 CP IPA-180 Z-1,694 DR-
139 CC X-132,581 Y+142,913
140 CP IPA-180 Z-2,133 DR-
141 CC X-132,581 Y+142,913
142 CP IPA-180 Z-2,572 DR-
143 CC X-132,581 Y+142,913
144 CP IPA-180 Z-3,011 DR-
145 CC X-132,581 Y+142,913
146 CP IPA-180 Z-3,45 DR-
147 CC X-132,581 Y+142,913
148 CP IPA-180 Z-3,888 DR-
149 CC X-132,581 Y+142,913
150 CP IPA-180 Z-4,327 DR-
151 CC X-132,581 Y+142,913
152 CP IPA-180 Z-4,766 DR-
153 CC X-132,581 Y+142,913
154 CP IPA-180 Z-5,205 DR-
155 CC X-132,581 Y+142,913
156 CP IPA-180 Z-5,644 DR-
157 CC X-132,581 Y+142,913
158 CP IPA-180 Z-6,082 DR-
159 CC X-132,581 Y+142,913
160 CP IPA-180 Z-6,521 DR-
161 CC X-132,581 Y+142,913
162 CP IPA-180 Z-6,96 DR-
163 CC X-132,581 Y+142,913
164 CP IPA-180 Z-7,399 DR-
165 CC X-132,581 Y+142,913
166 CP IPA-41,473 Z-7,5 DR-
167 L X-131,831 Y+142,913 F573
168 CC X-134,081 Y+142,913
169 C X-136,331 Y+142,913 DR+
170 CC X-131,081 Y+142,913
171 C X-132,685 Y+137,914 DR+
172 CC X-132,581 Y+142,913
173 C X-127,581 Y+142,913 DR+
174 CC X-132,581 Y+142,913
175 C X-132,685 Y+137,914 DR+
176 L Z+10 FMAX
177 L X-129,584 Y+145,562 FMAX
178 L Z-5,5 FMAX
179 L Z-7 F600
180 CC X-132,581 Y+142,913
181 CP IPA-180 Z-7,439 DR-
182 CC X-132,581 Y+142,913
183 CP IPA-180 Z-7,878 DR-
184 CC X-132,581 Y+142,913
185 CP IPA-180 Z-8,317 DR-
186 CC X-132,581 Y+142,913
187 CP IPA-180 Z-8,755 DR-
188 CC X-132,581 Y+142,913
189 CP IPA-180 Z-9,194 DR-
190 CC X-132,581 Y+142,913
191 CP IPA-180 Z-9,633 DR-
192 CC X-132,581 Y+142,913
193 CP IPA-180 Z-10,072 DR-
194 CC X-132,581 Y+142,913
195 CP IPA-180 Z-10,511 DR-
196 CC X-132,581 Y+142,913
197 CP IPA-180 Z-10,95 DR-
198 CC X-132,581 Y+142,913
199 CP IPA-180 Z-11,388 DR-
200 CC X-132,581 Y+142,913
201 CP IPA-180 Z-11,827 DR-
202 CC X-132,581 Y+142,913
203 CP IPA-180 Z-12,266 DR-
204 CC X-132,581 Y+142,913
205 CP IPA-180 Z-12,705 DR-
206 CC X-132,581 Y+142,913
207 CP IPA-180 Z-13,144 DR-
208 CC X-132,581 Y+142,913
209 CP IPA-180 Z-13,583 DR-
210 CC X-132,581 Y+142,913
211 CP IPA-180 Z-14,021 DR-
212 CC X-132,581 Y+142,913
213 CP IPA-180 Z-14,46 DR-
214 CC X-132,581 Y+142,913
215 CP IPA-180 Z-14,899 DR-
216 CC X-132,581 Y+142,913
217 CP IPA-41,473 Z-15 DR-
218 L X-131,831 Y+142,913 F573
219 CC X-134,081 Y+142,913
220 C X-136,331 Y+142,913 DR+
221 CC X-131,081 Y+142,913
222 C X-132,685 Y+137,914 DR+
223 CC X-132,581 Y+142,913
224 C X-127,581 Y+142,913 DR+
225 CC X-132,581 Y+142,913
226 C X-132,685 Y+137,914 DR+
227 L Z+50 FMAX
228 L X-84,584 Y+190,562 FMAX
229 L Z+2 FMAX
230 L Z+0,5 F600
231 CC X-87,581 Y+187,913
232 CP IPA-180 Z+0,061 DR-
233 CC X-87,581 Y+187,913
234 CP IPA-180 Z-0,378 DR-
235 CC X-87,581 Y+187,913
236 CP IPA-180 Z-0,817 DR-
237 CC X-87,581 Y+187,913
238 CP IPA-180 Z-1,255 DR-
239 CC X-87,581 Y+187,913
240 CP IPA-180 Z-1,694 DR-
241 CC X-87,581 Y+187,913
242 CP IPA-180 Z-2,133 DR-
243 CC X-87,581 Y+187,913
244 CP IPA-180 Z-2,572 DR-
245 CC X-87,581 Y+187,913
246 CP IPA-180 Z-3,011 DR-
247 CC X-87,581 Y+187,913
248 CP IPA-180 Z-3,45 DR-
249 CC X-87,581 Y+187,913
250 CP IPA-180 Z-3,888 DR-
251 CC X-87,581 Y+187,913
252 CP IPA-180 Z-4,327 DR-
253 CC X-87,581 Y+187,913
254 CP IPA-180 Z-4,766 DR-
255 CC X-87,581 Y+187,913
256 CP IPA-180 Z-5,205 DR-
257 CC X-87,581 Y+187,913
258 CP IPA-180 Z-5,644 DR-
259 CC X-87,581 Y+187,913
260 CP IPA-180 Z-6,082 DR-
261 CC X-87,581 Y+187,913
262 CP IPA-180 Z-6,521 DR-
263 CC X-87,581 Y+187,913
264 CP IPA-180 Z-6,96 DR-
265 CC X-87,581 Y+187,913
266 CP IPA-180 Z-7,399 DR-
267 CC X-87,581 Y+187,913
268 CP IPA-41,473 Z-7,5 DR-
269 L X-86,831 Y+187,913 F573
270 CC X-89,081 Y+187,913
271 C X-91,331 Y+187,913 DR+
272 CC X-86,081 Y+187,913
273 C X-87,685 Y+182,914 DR+
274 CC X-87,581 Y+187,913
275 C X-82,581 Y+187,913 DR+
276 CC X-87,581 Y+187,913
277 C X-87,685 Y+182,914 DR+
278 L Z+10 FMAX
279 L X-84,584 Y+190,562 FMAX
280 L Z-5,5 FMAX
281 L Z-7 F600
282 CC X-87,581 Y+187,913
283 CP IPA-180 Z-7,439 DR-
284 CC X-87,581 Y+187,913
285 CP IPA-180 Z-7,878 DR-
286 CC X-87,581 Y+187,913
287 CP IPA-180 Z-8,317 DR-
288 CC X-87,581 Y+187,913
289 CP IPA-180 Z-8,755 DR-
290 CC X-87,581 Y+187,913
291 CP IPA-180 Z-9,194 DR-
292 CC X-87,581 Y+187,913
293 CP IPA-180 Z-9,633 DR-
294 CC X-87,581 Y+187,913
295 CP IPA-180 Z-10,072 DR-
296 CC X-87,581 Y+187,913
297 CP IPA-180 Z-10,511 DR-
298 CC X-87,581 Y+187,913
299 CP IPA-180 Z-10,95 DR-
300 CC X-87,581 Y+187,913
301 CP IPA-180 Z-11,388 DR-
302 CC X-87,581 Y+187,913
303 CP IPA-180 Z-11,827 DR-
304 CC X-87,581 Y+187,913
305 CP IPA-180 Z-12,266 DR-
306 CC X-87,581 Y+187,913
307 CP IPA-180 Z-12,705 DR-
308 CC X-87,581 Y+187,913
309 CP IPA-180 Z-13,144 DR-
310 CC X-87,581 Y+187,913
311 CP IPA-180 Z-13,583 DR-
312 CC X-87,581 Y+187,913
313 CP IPA-180 Z-14,021 DR-
314 CC X-87,581 Y+187,913
315 CP IPA-180 Z-14,46 DR-
316 CC X-87,581 Y+187,913
317 CP IPA-180 Z-14,899 DR-
318 CC X-87,581 Y+187,913
319 CP IPA-41,473 Z-15 DR-
320 L X-86,831 Y+187,913 F573
321 CC X-89,081 Y+187,913
322 C X-91,331 Y+187,913 DR+
323 CC X-86,081 Y+187,913
324 C X-87,685 Y+182,914 DR+
325 CC X-87,581 Y+187,913
326 C X-82,581 Y+187,913 DR+
327 CC X-87,581 Y+187,913
328 C X-87,685 Y+182,914 DR+
329 L Z+50 FMAX
330 TOOL CALL 18 Z S2865 DR-5
331 L X-177,581 Y+187,913 Z+50 FMAX
332 L Z-5,5 FMAX
333 L Z-15 F600
334 L X-180,581 Y+188,913 RL F573
335 L X-181,581
336 CC X-181,581 Y+187,913
337 C X-182,581 Y+187,913 DR+
338 CC X-177,581 Y+187,913
339 C X-172,581 Y+187,913 DR+
340 CC X-177,581 Y+187,913
341 C X-182,581 Y+187,913 DR+
342 CC X-177,581 Y+187,913
343 C X-182,481 Y+186,92 DR+
344 CC X-181,501 Y+187,118
345 C X-181,303 Y+186,138 DR+
346 L X-180,323 Y+186,337
347 L X-177,581 Y+187,913 R0
348 L Z+50 FMAX
349 L X-132,581 Y+142,913 FMAX
350 L Z-5,5 FMAX
351 L Z-15 F600
352 L X-135,581 Y+143,913 RL F573
353 L X-136,581
354 CC X-136,581 Y+142,913
355 C X-137,581 Y+142,913 DR+
356 CC X-132,581 Y+142,913
357 C X-127,581 Y+142,913 DR+
358 CC X-132,581 Y+142,913
359 C X-137,581 Y+142,913 DR+
360 CC X-132,581 Y+142,913
361 C X-137,481 Y+141,92 DR+
362 CC X-136,501 Y+142,118
363 C X-136,303 Y+141,138 DR+
364 L X-135,323 Y+141,337
365 L X-132,581 Y+142,913 R0
366 L Z+50 FMAX
367 L X-87,581 Y+187,913 FMAX
368 L Z-5,5 FMAX
369 L Z-15 F600
370 L X-90,581 Y+188,913 RL F573
371 L X-91,581
372 CC X-91,581 Y+187,913
373 C X-92,581 Y+187,913 DR+
374 CC X-87,581 Y+187,913
375 C X-82,581 Y+187,913 DR+
376 CC X-87,581 Y+187,913
377 C X-92,581 Y+187,913 DR+
378 CC X-87,581 Y+187,913
379 C X-92,481 Y+186,92 DR+
380 CC X-91,501 Y+187,118
381 C X-91,303 Y+186,138 DR+
382 L X-90,323 Y+186,337
383 L X-87,581 Y+187,913 R0
384 L Z+50 FMAX
385 M78
386 M5
387 L Z-1 FMAX M91
388 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
389 ; CORRECTION USURE GAUCHE
390 ; SUREP R 0. SUREP Z 0.
391 TOOL CALL 1 Z S6000 DR-2,5
392 TOOL DEF 22
393 L X-177,581 Y+187,913 FMAX M3
394 L Z+50 FMAX
395 L Z+2 FMAX
396 L Z-2,5 F800
397 L X-184,081 Y+188,413 RL F1200
398 L X-184,581
399 CC X-184,581 Y+187,913
400 C X-185,081 Y+187,913 DR+
401 CC X-177,581 Y+187,913
402 C X-170,081 Y+187,913 DR+
403 CC X-177,581 Y+187,913
404 C X-185,081 Y+187,913 DR+
405 CC X-177,581 Y+187,913
406 C X-185,014 Y+186,916 DR+
407 CC X-184,519 Y+186,982
408 C X-184,452 Y+186,487 DR+
409 L X-183,957 Y+186,553
410 L X-177,581 Y+187,913 R0
411 L Z+50 FMAX
412 L X-132,581 Y+142,913 FMAX
413 L Z+2 FMAX
414 L Z-2,5 F800
415 L X-139,081 Y+143,413 RL F1200
416 L X-139,581
417 CC X-139,581 Y+142,913
418 C X-140,081 Y+142,913 DR+
419 CC X-132,581 Y+142,913
420 C X-125,081 Y+142,913 DR+
421 CC X-132,581 Y+142,913
422 C X-140,081 Y+142,913 DR+
423 CC X-132,581 Y+142,913
424 C X-140,014 Y+141,916 DR+
425 CC X-139,519 Y+141,982
426 C X-139,452 Y+141,487 DR+
427 L X-138,957 Y+141,553
428 L X-132,581 Y+142,913 R0
429 L Z+50 FMAX
430 L X-87,581 Y+187,913 FMAX
431 L Z+2 FMAX
432 L Z-2,5 F800
433 L X-94,081 Y+188,413 RL F1200
434 L X-94,581
435 CC X-94,581 Y+187,913
436 C X-95,081 Y+187,913 DR+
437 CC X-87,581 Y+187,913
438 C X-80,081 Y+187,913 DR+
439 CC X-87,581 Y+187,913
440 C X-95,081 Y+187,913 DR+
441 CC X-87,581 Y+187,913
442 C X-95,014 Y+186,916 DR+
443 CC X-94,519 Y+186,982
444 C X-94,452 Y+186,487 DR+
445 L X-93,957 Y+186,553
446 L X-87,581 Y+187,913 R0
447 L Z+50 FMAX
448 M5
449 L Z-1 FMAX M91
450 ; T22 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
451 ; CORRECTION USURE GAUCHE
452 ; SUREP R 0.2 SUREP Z 0.2
453 TOOL CALL 22 Z S2387 DR-6
454 TOOL DEF 15
455 L X-133,381 Y+220,113 FMAX M3
456 L Z+50 FMAX M25
457 L Z+2 FMAX
458 L Z-14,75 F300
459 L Y+212,913 RL F382
460 L Y+187,113
461 L X-131,781
462 L Y+212,913
463 L Y+220,113 R0
464 L Z+10 FMAX
465 L X-139,381 FMAX
466 L Z+2 FMAX
467 L Z-14,75 F300
468 L Y+212,913 RL F382
469 L Y+181,113
470 L X-125,781
471 L Y+212,913
472 L Y+220,113 R0
473 L Z+10 FMAX
474 L X-145,381 FMAX
475 L Z+2 FMAX
476 L Z-14,75 F300
477 L Y+212,913 RL F382
478 L Y+175,113
479 L X-119,781
480 L Y+212,913
481 L Y+220,113 R0
482 L Z+10 FMAX
483 L X-151,381 FMAX
484 L Z+2 FMAX
485 L Z-14,75 F300
486 L Y+212,913 RL F382
487 L Y+170,913
488 CC X-149,581 Y+170,913
489 C X-149,577 Y+169,113 DR+
490 L X-115,581
491 CC X-115,581 Y+170,913
492 C X-113,781 Y+170,918 DR+
493 L Y+212,913
494 L Y+220,113 R0
495 L Z+10 FMAX
496 L X-133,381 FMAX
497 L Z-12,75 FMAX
498 L Z-29,5 F300
499 L Y+212,913 RL F382
500 L Y+187,113
501 L X-131,781
502 L Y+212,913
503 L Y+220,113 R0
504 L Z+10 FMAX
505 L X-139,381 FMAX
506 L Z-12,75 FMAX
507 L Z-29,5 F300
508 L Y+212,913 RL F382
509 L Y+181,113
510 L X-125,781
511 L Y+212,913
512 L Y+220,113 R0
513 L Z+10 FMAX
514 L X-145,381 FMAX
515 L Z-12,75 FMAX
516 L Z-29,5 F300
517 L Y+212,913 RL F382
518 L Y+175,113
519 L X-119,781
520 L Y+212,913
521 L Y+220,113 R0
522 L Z+10 FMAX
523 L X-151,381 FMAX
524 L Z-12,75 FMAX
525 L Z-29,5 F300
526 L Y+212,913 RL F382
527 L Y+170,913
528 CC X-149,581 Y+170,913
529 C X-149,577 Y+169,113 DR+
530 L X-115,581
531 CC X-115,581 Y+170,913
532 C X-113,781 Y+170,918 DR+
533 L Y+212,913
534 L Y+220,113 R0
535 L Z+10 FMAX
536 L X-133,381 FMAX
537 L Z-27,5 FMAX
538 L Z-29,8 F300
539 L Y+212,913 RL F382
540 L Y+187,113
541 L X-131,781
542 L Y+212,913
543 L Y+220,113 R0
544 L Z+10 FMAX
545 L X-139,381 FMAX
546 L Z-27,5 FMAX
547 L Z-29,8 F300
548 L Y+212,913 RL F382
549 L Y+181,113
550 L X-125,781
551 L Y+212,913
552 L Y+220,113 R0
553 L Z+10 FMAX
554 L X-145,381 FMAX
555 L Z-27,5 FMAX
556 L Z-29,8 F300
557 L Y+212,913 RL F382
558 L Y+175,113
559 L X-119,781
560 L Y+212,913
561 L Y+220,113 R0
562 L Z+10 FMAX
563 L X-151,381 FMAX
564 L Z-27,5 FMAX
565 L Z-29,8 F300
566 L Y+212,913 RL F382
567 L Y+170,913
568 CC X-149,581 Y+170,913
569 C X-149,577 Y+169,113 DR+
570 L X-115,581
571 CC X-115,581 Y+170,913
572 C X-113,781 Y+170,918 DR+
573 L Y+212,913
574 L Y+220,113 R0
575 L Z+10 FMAX
576 L X-151,381 FMAX
577 L Z-27,5 FMAX
578 L Z-29,8 F300
579 L Y+212,913 RL F382
580 L Y+170,913
581 CC X-149,581 Y+170,913
582 C X-149,577 Y+169,113 DR+
583 L X-115,581
584 CC X-115,581 Y+170,913
585 C X-113,781 Y+170,918 DR+
586 L Y+212,913
587 L Y+220,113 R0
588 L Z+50 FMAX
589 M78
590 M5
591 L Z-1 FMAX M91
592 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
593 ; CORRECTION USURE GAUCHE
594 ; SUREP R 0.4 SUREP Z 0.
595 TOOL CALL 15 Z S2546 DR-5
596 TOOL DEF 1
597 L X-133,181 Y+218,913 FMAX M3
598 L Z+50 FMAX M25
599 L Z+2 FMAX
600 L Z-30 F1000
601 L Y+212,913 RL F397
602 L Y+187,313
603 L X-131,981
604 L Y+212,913
605 L Y+218,913 R0
606 L Z+10 FMAX
607 L X-137,931 FMAX
608 L Z+2 FMAX
609 L Z-30 F1000
610 L Y+212,913 RL F397
611 L Y+182,563
612 L X-127,231
613 L Y+212,913
614 L Y+218,913 R0
615 L Z+10 FMAX
616 L X-142,681 FMAX
617 L Z+2 FMAX
618 L Z-30 F1000
619 L Y+212,913 RL F397
620 L Y+177,813
621 L X-122,481
622 L Y+212,913
623 L Y+218,913 R0
624 L Z+10 FMAX
625 L X-147,431 FMAX
626 L Z+2 FMAX
627 L Z-30 F1000
628 L Y+212,913 RL F397
629 L Y+173,063
630 L X-117,731
631 L Y+212,913
632 L Y+218,913 R0
633 L Z+10 FMAX
634 L X-152,181 FMAX
635 L Z+2 FMAX
636 L Z-30 F1000
637 L Y+212,913 RL F397
638 L Y+170,913
639 CC X-149,581 Y+170,913
640 C X-149,576 Y+168,313 DR+
641 L X-115,581
642 CC X-115,581 Y+170,913
643 C X-112,981 Y+170,919 DR+
644 L Y+212,913
645 L Y+218,913 R0
646 L Z+10 FMAX
647 L X-152,181 FMAX
648 L Z+2 FMAX
649 L Z-30 F1000
650 L Y+212,913 RL F397
651 L Y+170,913
652 CC X-149,581 Y+170,913
653 C X-149,576 Y+168,313 DR+
654 L X-115,581
655 CC X-115,581 Y+170,913
656 C X-112,981 Y+170,919 DR+
657 L Y+212,913
658 L Y+218,913 R0
659 L Z+50 FMAX
660 M78
661 M5
662 L Z-1 FMAX M91
663 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
664 ; CORRECTION USURE GAUCHE
665 ; SUREP R 0.1 SUREP Z 0.05
666 TOOL CALL 15 Z S2546 DR-5
667 TOOL DEF 1
668 L X-152,481 Y+218,913 FMAX M3
669 L Z+50 FMAX M25
670 L Z+2 FMAX
671 L Z-29,95 F1000
672 L Y+212,913 RL F397
673 L Y+170,913
674 CC X-149,581 Y+170,913
675 C X-149,576 Y+168,013 DR+
676 L X-115,581
677 CC X-115,581 Y+170,913
678 C X-112,681 Y+170,92 DR+
679 L Y+212,913
680 L Y+218,913 R0
681 L Z+10 FMAX
682 L X-152,481 FMAX
683 L Z+2 FMAX
684 L Z-29,95 F1000
685 L Y+212,913 RL F397
686 L Y+170,913
687 CC X-149,581 Y+170,913
688 C X-149,576 Y+168,013 DR+
689 L X-115,581
690 CC X-115,581 Y+170,913
691 C X-112,681 Y+170,92 DR+
692 L Y+212,913
693 L Y+218,913 R0
694 L Z+10 FMAX
695 L X-152,481 FMAX
696 L Z+2 FMAX
697 L Z-29,95 F1000
698 L Y+212,913 RL F397
699 L Y+170,913
700 CC X-149,581 Y+170,913
701 C X-149,576 Y+168,013 DR+
702 L X-115,581
703 CC X-115,581 Y+170,913
704 C X-112,681 Y+170,92 DR+
705 L Y+212,913
706 L Y+218,913 R0
707 L Z+10 FMAX
708 L X-152,481 FMAX
709 L Z+2 FMAX
710 L Z-29,95 F1000
711 L Y+212,913 RL F397
712 L Y+170,913
713 CC X-149,581 Y+170,913
714 C X-149,576 Y+168,013 DR+
715 L X-115,581
716 CC X-115,581 Y+170,913
717 C X-112,681 Y+170,92 DR+
718 L Y+212,913
719 L Y+218,913 R0
720 L Z+50 FMAX
721 M78
722 M5
723 L Z-1 FMAX M91
724 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
725 ; CORRECTION USURE GAUCHE
726 ; SUREP R 0.05 SUREP Z 0.05
727 TOOL CALL 15 Z S2546 DR-5
728 TOOL DEF 1
729 L X-152,531 Y+218,913 FMAX M3
730 L Z+50 FMAX M25
731 L Z+2 FMAX
732 L Z-29,95 F1000
733 L Y+212,913 RL F397
734 L Y+170,913
735 CC X-149,581 Y+170,913
736 C X-149,576 Y+167,963 DR+
737 L X-115,581
738 CC X-115,581 Y+170,913
739 C X-112,631 Y+170,92 DR+
740 L Y+212,913
741 L Y+218,913 R0
742 L Z+10 FMAX
743 L X-152,531 FMAX
744 L Z+2 FMAX
745 L Z-29,95 F1000
746 L Y+212,913 RL F397
747 L Y+170,913
748 CC X-149,581 Y+170,913
749 C X-149,576 Y+167,963 DR+
750 L X-115,581
751 CC X-115,581 Y+170,913
752 C X-112,631 Y+170,92 DR+
753 L Y+212,913
754 L Y+218,913 R0
755 L Z+10 FMAX
756 L X-152,531 FMAX
757 L Z+2 FMAX
758 L Z-29,95 F1000
759 L Y+212,913 RL F397
760 L Y+170,913
761 CC X-149,581 Y+170,913
762 C X-149,576 Y+167,963 DR+
763 L X-115,581
764 CC X-115,581 Y+170,913
765 C X-112,631 Y+170,92 DR+
766 L Y+212,913
767 L Y+218,913 R0
768 L Z+10 FMAX
769 L X-152,531 FMAX
770 L Z+2 FMAX
771 L Z-29,95 F1000
772 L Y+212,913 RL F397
773 L Y+170,913
774 CC X-149,581 Y+170,913
775 C X-149,576 Y+167,963 DR+
776 L X-115,581
777 CC X-115,581 Y+170,913
778 C X-112,631 Y+170,92 DR+
779 L Y+212,913
780 L Y+218,913 R0
781 L Z+50 FMAX
782 M78
783 M5
784 L Z-1 FMAX M91
785 M00
786 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
787 ; CORRECTION USURE GAUCHE
788 ; SUREP R 0. SUREP Z 0.05
789 TOOL CALL 15 Z S2546 DR-5
790 TOOL DEF 1
791 L X-152,581 Y+218,913 FMAX M3
792 L Z+50 FMAX M25
793 L Z+2 FMAX
794 L Z-29,95 F1000
795 L Y+212,913 RL F397
796 L Y+170,913
797 CC X-149,581 Y+170,913
798 C X-149,576 Y+167,913 DR+
799 L X-115,581
800 CC X-115,581 Y+170,913
801 C X-112,581 Y+170,92 DR+
802 L Y+212,913
803 L Y+218,913 R0
804 L Z+10 FMAX
805 L X-152,581 FMAX
806 L Z+2 FMAX
807 L Z-29,95 F1000
808 L Y+212,913 RL F397
809 L Y+170,913
810 CC X-149,581 Y+170,913
811 C X-149,576 Y+167,913 DR+
812 L X-115,581
813 CC X-115,581 Y+170,913
814 C X-112,581 Y+170,92 DR+
815 L Y+212,913
816 L Y+218,913 R0
817 L Z+10 FMAX
818 L X-152,581 FMAX
819 L Z+2 FMAX
820 L Z-29,95 F1000
821 L Y+212,913 RL F397
822 L Y+170,913
823 CC X-149,581 Y+170,913
824 C X-149,576 Y+167,913 DR+
825 L X-115,581
826 CC X-115,581 Y+170,913
827 C X-112,581 Y+170,92 DR+
828 L Y+212,913
829 L Y+218,913 R0
830 L Z+10 FMAX
831 L X-152,581 FMAX
832 L Z+2 FMAX
833 L Z-29,95 F1000
834 L Y+212,913 RL F397
835 L Y+170,913
836 CC X-149,581 Y+170,913
837 C X-149,576 Y+167,913 DR+
838 L X-115,581
839 CC X-115,581 Y+170,913
840 C X-112,581 Y+170,92 DR+
841 L Y+212,913
842 L Y+218,913 R0
843 L Z+50 FMAX
844 M78
845 M5
846 L Z-1 FMAX M91
847 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
848 TOOL CALL 1 Z S1856 DR+0
849 TOOL DEF 11
850 L X-177,581 Y+147,913 FMAX M3
851 L Z+50 FMAX M8
852 ;  POINTAGE-PERCAGE
853 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
854 L X-177,581 Y+147,913 FMAX M99
855 L X-87,581 FMAX M99
856 L Z+50 FMAX
857 M9
858 M5
859 L Z-1 FMAX M91
860 ; T11 FO DIA KEN 15 5  OK DMF FORET DIAM=15.5 2 DENTS A=118. CARBURE
861 TOOL CALL 11 Z S1000 DR+0
862 TOOL DEF 21
863 L X-177,581 Y+147,913 FMAX M3
864 L Z+50 FMAX M8
865 ;  DEBOURRAGE
866 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-65 ; PROFONDEUR~
    Q206=100 ; AVANCE PLONGEE PROF.~
    Q202=+7,75 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
867 L X-177,581 Y+147,913 FMAX M99
868 L X-87,581 FMAX M99
869 L Z+50 FMAX
870 M9
871 M5
872 L Z-1 FMAX M91
873 ; T21 ALESOIR DIA 16 CARB VC 15 ALESOIR DIAM=16. 5 DENTS ARS
874 TOOL CALL 21 Z S320 DR+0
875 TOOL DEF 1
876 L X-177,581 Y+147,913 FMAX M3
877 L Z+50 FMAX M8
878 ;  POINTAGE-PERCAGE
879 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-65 ; PROFONDEUR~
    Q206=40 ; AVANCE PLONGEE PROF.~
    Q202=+65 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
880 L X-177,581 Y+147,913 FMAX M99
881 L X-87,581 FMAX M99
882 L Z+50 FMAX
883 M9
884 M5
885 L Z-1 FMAX M91
886 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
887 ; CORRECTION USURE GAUCHE
888 ; SUREP R 0. SUREP Z 0.
889 TOOL CALL 1 Z S6000 DR-2,5
890 TOOL DEF 22
891 L X-177,581 Y+147,913 FMAX M3
892 L Z+50 FMAX
893 L Z+2 FMAX
894 L Z-2,5 F800
895 L X-182,081 Y+148,413 RL F1200
896 L X-182,581
897 CC X-182,581 Y+147,913
898 C X-183,081 Y+147,913 DR+
899 CC X-177,581 Y+147,913
900 C X-172,081 Y+147,913 DR+
901 CC X-177,581 Y+147,913
902 C X-183,081 Y+147,913 DR+
903 CC X-177,581 Y+147,913
904 C X-182,99 Y+146,918 DR+
905 CC X-182,499 Y+147,009
906 C X-182,408 Y+146,517 DR+
907 L X-181,916 Y+146,607
908 L X-177,581 Y+147,913 R0
909 L Z+50 FMAX
910 L X-87,581 FMAX
911 L Z+2 FMAX
912 L Z-2,5 F800
913 L X-92,081 Y+148,413 RL F1200
914 L X-92,581
915 CC X-92,581 Y+147,913
916 C X-93,081 Y+147,913 DR+
917 CC X-87,581 Y+147,913
918 C X-82,081 Y+147,913 DR+
919 CC X-87,581 Y+147,913
920 C X-93,081 Y+147,913 DR+
921 CC X-87,581 Y+147,913
922 C X-92,99 Y+146,918 DR+
923 CC X-92,499 Y+147,009
924 C X-92,408 Y+146,517 DR+
925 L X-91,916 Y+146,607
926 L X-87,581 Y+147,913 R0
927 L Z+50 FMAX
928 M5
929 L Z-1 FMAX M91
930 ; T22 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
931 ; CORRECTION USURE GAUCHE
932 ; SUREP R 0. SUREP Z 0.
933 TOOL CALL 22 Z S2387 DR-6
934 TOOL DEF 1
935 L X-208,773 Y+209,105 FMAX M3
936 L Z+50 FMAX M25
937 L Z+2 FMAX
938 L Z-15 F300
939 L X-201,773 RL F382
940 CC X-201,773 Y+213,105
941 C X-198,945 Y+210,277 DR+
942 L X-194,945 Y+214,277
943 CC X-197,773 Y+217,105
944 C X-193,773 Y+217,105 DR+
945 L Y+224,105 R0
946 L Z+10 FMAX
947 L X-206,652 Y+206,984 FMAX
948 L Z+2 FMAX
949 L Z-15 F300
950 L X-199,652 RL F382
951 CC X-199,652 Y+210,984
952 C X-196,824 Y+208,156 DR+
953 L X-192,824 Y+212,156
954 CC X-195,652 Y+214,984
955 C X-191,652 Y+214,984 DR+
956 L Y+221,984 R0
957 L Z+10 FMAX
958 L X-208,773 Y+209,105 FMAX
959 L Z-13 FMAX
960 L Z-30 F300
961 L X-201,773 RL F382
962 CC X-201,773 Y+213,105
963 C X-198,945 Y+210,277 DR+
964 L X-194,945 Y+214,277
965 CC X-197,773 Y+217,105
966 C X-193,773 Y+217,105 DR+
967 L Y+224,105 R0
968 L Z+10 FMAX
969 L X-206,652 Y+206,984 FMAX
970 L Z-13 FMAX
971 L Z-30 F300
972 L X-199,652 RL F382
973 CC X-199,652 Y+210,984
974 C X-196,824 Y+208,156 DR+
975 L X-192,824 Y+212,156
976 CC X-195,652 Y+214,984
977 C X-191,652 Y+214,984 DR+
978 L Y+221,984 R0
979 L Z+10 FMAX
980 L X-206,652 Y+206,984 FMAX
981 L Z-13 FMAX
982 L Z-30 F300
983 L X-199,652 RL F382
984 CC X-199,652 Y+210,984
985 C X-196,824 Y+208,156 DR+
986 L X-192,824 Y+212,156
987 CC X-195,652 Y+214,984
988 C X-191,652 Y+214,984 DR+
989 L Y+221,984 R0
990 L Z+50 FMAX
991 L X-71,389 Y+224,105 FMAX
992 L Z+2 FMAX
993 L Z-15 F300
994 L Y+217,105 RL F382
995 CC X-67,389 Y+217,105
996 C X-70,217 Y+214,277 DR+
997 L X-66,217 Y+210,277
998 CC X-63,389 Y+213,105
999 C X-63,389 Y+209,105 DR+
1000 L X-56,389 R0
1001 L Z+10 FMAX
1002 L X-73,51 Y+221,984 FMAX
1003 L Z+2 FMAX
1004 L Z-15 F300
1005 L Y+214,984 RL F382
1006 CC X-69,51 Y+214,984
1007 C X-72,338 Y+212,156 DR+
1008 L X-68,338 Y+208,156
1009 CC X-65,51 Y+210,984
1010 C X-65,51 Y+206,984 DR+
1011 L X-58,51 R0
1012 L Z+10 FMAX
1013 L X-71,389 Y+224,105 FMAX
1014 L Z-13 FMAX
1015 L Z-30 F300
1016 L Y+217,105 RL F382
1017 CC X-67,389 Y+217,105
1018 C X-70,217 Y+214,277 DR+
1019 L X-66,217 Y+210,277
1020 CC X-63,389 Y+213,105
1021 C X-63,389 Y+209,105 DR+
1022 L X-56,389 R0
1023 L Z+10 FMAX
1024 L X-73,51 Y+221,984 FMAX
1025 L Z-13 FMAX
1026 L Z-30 F300
1027 L Y+214,984 RL F382
1028 CC X-69,51 Y+214,984
1029 C X-72,338 Y+212,156 DR+
1030 L X-68,338 Y+208,156
1031 CC X-65,51 Y+210,984
1032 C X-65,51 Y+206,984 DR+
1033 L X-58,51 R0
1034 L Z+10 FMAX
1035 L X-73,51 Y+221,984 FMAX
1036 L Z-13 FMAX
1037 L Z-30 F300
1038 L Y+214,984 RL F382
1039 CC X-69,51 Y+214,984
1040 C X-72,338 Y+212,156 DR+
1041 L X-68,338 Y+208,156
1042 CC X-65,51 Y+210,984
1043 C X-65,51 Y+206,984 DR+
1044 L X-58,51 R0
1045 L Z+50 FMAX
1046 L X-56,389 Y+132,72 FMAX
1047 L Z+2 FMAX
1048 L Z-15 F300
1049 L X-63,389 RL F382
1050 CC X-63,389 Y+128,72
1051 C X-66,217 Y+131,549 DR+
1052 L X-76,217 Y+121,549
1053 CC X-73,389 Y+118,72
1054 C X-77,389 Y+118,721 DR+
1055 L Y+111,721 R0
1056 L Z+10 FMAX
1057 L X-58,51 Y+134,842 FMAX
1058 L Z+2 FMAX
1059 L Z-15 F300
1060 L X-65,51 RL F382
1061 CC X-65,51 Y+130,842
1062 C X-68,338 Y+133,67 DR+
1063 L X-78,338 Y+123,67
1064 CC X-75,51 Y+120,842
1065 C X-79,51 Y+120,842 DR+
1066 L Y+113,842 R0
1067 L Z+10 FMAX
1068 L X-56,389 Y+132,72 FMAX
1069 L Z-13 FMAX
1070 L Z-30 F300
1071 L X-63,389 RL F382
1072 CC X-63,389 Y+128,72
1073 C X-66,217 Y+131,549 DR+
1074 L X-76,217 Y+121,549
1075 CC X-73,389 Y+118,72
1076 C X-77,389 Y+118,721 DR+
1077 L Y+111,721 R0
1078 L Z+10 FMAX
1079 L X-58,51 Y+134,842 FMAX
1080 L Z-13 FMAX
1081 L Z-30 F300
1082 L X-65,51 RL F382
1083 CC X-65,51 Y+130,842
1084 C X-68,338 Y+133,67 DR+
1085 L X-78,338 Y+123,67
1086 CC X-75,51 Y+120,842
1087 C X-79,51 Y+120,842 DR+
1088 L Y+113,842 R0
1089 L Z+10 FMAX
1090 L X-58,51 Y+134,842 FMAX
1091 L Z-13 FMAX
1092 L Z-30 F300
1093 L X-65,51 RL F382
1094 CC X-65,51 Y+130,842
1095 C X-68,338 Y+133,67 DR+
1096 L X-78,338 Y+123,67
1097 CC X-75,51 Y+120,842
1098 C X-79,51 Y+120,842 DR+
1099 L Y+113,842 R0
1100 L Z+50 FMAX
1101 L X-187,773 Y+111,721 FMAX
1102 L Z+2 FMAX
1103 L Z-15 F300
1104 L Y+118,721 RL F382
1105 CC X-191,773 Y+118,721
1106 C X-188,945 Y+121,549 DR+
1107 L X-198,945 Y+131,549
1108 CC X-201,773 Y+128,72
1109 C X-201,773 Y+132,72 DR+
1110 L X-208,773 R0
1111 L Z+10 FMAX
1112 L X-185,652 Y+113,842 FMAX
1113 L Z+2 FMAX
1114 L Z-15 F300
1115 L Y+120,842 RL F382
1116 CC X-189,652 Y+120,842
1117 C X-186,824 Y+123,67 DR+
1118 L X-196,824 Y+133,67
1119 CC X-199,652 Y+130,842
1120 C X-199,652 Y+134,842 DR+
1121 L X-206,652 R0
1122 L Z+10 FMAX
1123 L X-187,773 Y+111,721 FMAX
1124 L Z-13 FMAX
1125 L Z-30 F300
1126 L Y+118,721 RL F382
1127 CC X-191,773 Y+118,721
1128 C X-188,945 Y+121,549 DR+
1129 L X-198,945 Y+131,549
1130 CC X-201,773 Y+128,72
1131 C X-201,773 Y+132,72 DR+
1132 L X-208,773 R0
1133 L Z+10 FMAX
1134 L X-185,652 Y+113,842 FMAX
1135 L Z-13 FMAX
1136 L Z-30 F300
1137 L Y+120,842 RL F382
1138 CC X-189,652 Y+120,842
1139 C X-186,824 Y+123,67 DR+
1140 L X-196,824 Y+133,67
1141 CC X-199,652 Y+130,842
1142 C X-199,652 Y+134,842 DR+
1143 L X-206,652 R0
1144 L Z+10 FMAX
1145 L X-185,652 Y+113,842 FMAX
1146 L Z-13 FMAX
1147 L Z-30 F300
1148 L Y+120,842 RL F382
1149 CC X-189,652 Y+120,842
1150 C X-186,824 Y+123,67 DR+
1151 L X-196,824 Y+133,67
1152 CC X-199,652 Y+130,842
1153 C X-199,652 Y+134,842 DR+
1154 L X-206,652 R0
1155 L Z+50 FMAX
1156 M78
1157 M5
1158 L Z-1 FMAX M91
1159 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1160 ; CORRECTION USURE GAUCHE
1161 ; SUREP R 0. SUREP Z 0.
1162 TOOL CALL 1 Z S6000 DR-2,5
1163 TOOL DEF 18
1164 L X-135,822 Y+212,963 FMAX M3
1165 L Z+50 FMAX
1166 L Z+2 FMAX
1167 L Z-3 F800
1168 L X-133,76 Y+210,901 RL F1200
1169 CC X-132,581 Y+212,08
1170 C X-132,581 Y+210,413 DR+
1171 L X-76,581
1172 CC X-76,581 Y+207,913
1173 C X-74,813 Y+209,681 DR-
1174 L X-70,813 Y+205,681
1175 CC X-72,581 Y+203,913
1176 C X-70,081 Y+203,913 DR-
1177 L Y+137,913
1178 CC X-72,581 Y+137,913
1179 C X-70,813 Y+136,145 DR-
1180 L X-80,813 Y+126,145
1181 CC X-82,581 Y+127,913
1182 C X-82,581 Y+125,413 DR-
1183 L X-182,581
1184 CC X-182,581 Y+127,913
1185 C X-184,349 Y+126,145 DR-
1186 L X-194,349 Y+136,145
1187 CC X-192,581 Y+137,913
1188 C X-195,081 Y+137,913 DR-
1189 L Y+203,913
1190 CC X-192,581 Y+203,913
1191 C X-194,349 Y+205,681 DR-
1192 L X-190,349 Y+209,681
1193 CC X-188,581 Y+207,913
1194 C X-188,581 Y+210,413 DR-
1195 L X-132,581
1196 CC X-132,581 Y+212,08
1197 C X-131,403 Y+210,901 DR+
1198 L X-129,34 Y+212,963 R0
1199 L Z+50 FMAX
1200 M5
1201 L Z-1 FMAX M91
1202 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1203 ; CORRECTION USURE GAUCHE
1204 ; SUREP R 0. SUREP Z 0.
1205 TOOL CALL 1 Z S6000 DR-2,5
1206 TOOL DEF 18
1207 L X-152,531 Y+216,154 FMAX M3
1208 L Z+50 FMAX
1209 L Z+2 FMAX
1210 L Z-2,2 F800
1211 L X-154,593 Y+214,091 RL F1200
1212 CC X-153,414 Y+212,913
1213 C X-155,081 Y+212,913 DR+
1214 L Y+170,913
1215 CC X-149,581 Y+170,913
1216 C X-149,574 Y+165,413 DR+
1217 L X-115,581
1218 CC X-115,581 Y+170,913
1219 C X-110,081 Y+170,922 DR+
1220 L Y+212,913
1221 CC X-111,748 Y+212,913
1222 C X-110,569 Y+214,091 DR+
1223 L X-112,632 Y+216,154 R0
1224 L Z+50 FMAX
1225 M5
1226 L Z-1 FMAX M91
1227 L Y-1 FMAX M91
1228 M30
1229 END PGM REP11-20977-OP20-C-PORTE MATRICE-A MM
