0 BEGIN PGM REP15-OP10-D-CALE EJECTEUR SUP MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP15 SYM-OP10-D-CALE EJECTEUR SUP
4 ; PROG-CN DU 17-03-20 A 08:18
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; T16 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-2*
15 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
16 ; CORRECTION USURE GAUCHE
17 ; SUREP R 0. SUREP Z 0.
18 TOOL CALL 18 Z S1751 DR-5
19 TOOL DEF 1
20 L X-21,429 Y-156,914 FMAX M3
21 L Z+50 FMAX M25
22 L Z+2 FMAX
23 L Z-9 F500
24 L X-25,672 Y-152,672 RL F315
25 CC X-28,5 Y-155,5
26 C X-28,5 Y-151,5 DR+
27 CC X-28,5 Y-92,5
28 C X-87,5 Y-92,5 DR-
29 L Y-46,544
30 L X-124,595 Y+17,708
31 CC X-73,5 Y+47,208
32 C X-132,5 Y+47,208 DR-
33 CC X-136,5 Y+47,208
34 C X-133,672 Y+50,036 DR+
35 L X-137,914 Y+54,279 R0
36 L Z+10 FMAX
37 L X-21,429 Y-151,914 FMAX
38 L Z+2 FMAX
39 L Z-9 F500
40 L X-25,672 Y-147,672 RL F315
41 CC X-28,5 Y-150,5
42 C X-28,5 Y-146,5 DR+
43 CC X-28,5 Y-92,5
44 C X-82,5 Y-92,5 DR-
45 L Y-45,204
46 L X-120,265 Y+20,208
47 CC X-73,5 Y+47,208
48 C X-127,5 Y+47,208 DR-
49 CC X-131,5 Y+47,208
50 C X-128,672 Y+50,036 DR+
51 L X-132,914 Y+54,279 R0
52 L Z+10 FMAX
53 L X-21,429 Y-146,914 FMAX
54 L Z+2 FMAX
55 L Z-9 F500
56 L X-25,672 Y-142,672 RL F315
57 CC X-28,5 Y-145,5
58 C X-28,5 Y-141,5 DR+
59 CC X-28,5 Y-92,5
60 C X-77,5 Y-92,5 DR-
61 L Y-43,864
62 L X-115,935 Y+22,708
63 CC X-73,5 Y+47,208
64 C X-122,5 Y+47,208 DR-
65 CC X-126,5 Y+47,208
66 C X-123,672 Y+50,036 DR+
67 L X-127,914 Y+54,279 R0
68 L Z+10 FMAX
69 L X-21,429 Y-141,914 FMAX
70 L Z+2 FMAX
71 L Z-9 F500
72 L X-25,672 Y-137,672 RL F315
73 CC X-28,5 Y-140,5
74 C X-28,5 Y-136,5 DR+
75 CC X-28,5 Y-92,5
76 C X-72,5 Y-92,5 DR-
77 L Y-42,524
78 L X-111,605 Y+25,208
79 CC X-73,5 Y+47,208
80 C X-117,5 Y+47,208 DR-
81 CC X-121,5 Y+47,208
82 C X-118,672 Y+50,036 DR+
83 L X-122,914 Y+54,279 R0
84 L Z+10 FMAX
85 L X-21,429 Y-136,914 FMAX
86 L Z+2 FMAX
87 L Z-9 F500
88 L X-25,672 Y-132,672 RL F315
89 CC X-28,5 Y-135,5
90 C X-28,5 Y-131,5 DR+
91 CC X-28,5 Y-92,5
92 C X-67,5 Y-92,5 DR-
93 L Y-41,185
94 L X-107,275 Y+27,708
95 CC X-73,5 Y+47,208
96 C X-112,5 Y+47,208 DR-
97 CC X-116,5 Y+47,208
98 C X-113,672 Y+50,036 DR+
99 L X-117,914 Y+54,279 R0
100 L Z+10 FMAX
101 L X-21,429 Y-131,914 FMAX
102 L Z+2 FMAX
103 L Z-9 F500
104 L X-25,672 Y-127,672 RL F315
105 CC X-28,5 Y-130,5
106 C X-28,5 Y-126,5 DR+
107 CC X-28,5 Y-92,5
108 C X-62,5 Y-92,5 DR-
109 L Y-39,845
110 L X-102,945 Y+30,208
111 CC X-73,5 Y+47,208
112 C X-107,5 Y+47,208 DR-
113 CC X-111,5 Y+47,208
114 C X-108,672 Y+50,036 DR+
115 L X-112,914 Y+54,279 R0
116 L Z+10 FMAX
117 L X-21,429 Y-126,914 FMAX
118 L Z+2 FMAX
119 L Z-9 F500
120 L X-25,672 Y-122,672 RL F315
121 CC X-28,5 Y-125,5
122 C X-28,5 Y-121,5 DR+
123 CC X-28,5 Y-92,5
124 C X-57,5 Y-92,5 DR-
125 L Y-38,773
126 CC X-58,5 Y-38,773
127 C X-57,634 Y-38,273 DR+
128 L X-98,615 Y+32,708
129 CC X-73,5 Y+47,208
130 C X-102,5 Y+47,208 DR-
131 CC X-106,5 Y+47,208
132 C X-103,672 Y+50,036 DR+
133 L X-107,914 Y+54,279 R0
134 L Z+10 FMAX
135 L X-21,429 Y-121,914 FMAX
136 L Z+2 FMAX
137 L Z-9 F500
138 L X-25,672 Y-117,672 RL F315
139 CC X-28,5 Y-120,5
140 C X-28,5 Y-116,5 DR+
141 CC X-28,5 Y-92,5
142 C X-52,5 Y-92,5 DR-
143 L Y-38,773
144 CC X-58,5 Y-38,773
145 C X-53,304 Y-35,773 DR+
146 L X-94,285 Y+35,208
147 CC X-73,5 Y+47,208
148 C X-97,5 Y+47,208 DR-
149 CC X-101,5 Y+47,208
150 C X-98,672 Y+50,036 DR+
151 L X-102,914 Y+54,279 R0
152 L Z+10 FMAX
153 L X-21,429 Y-116,914 FMAX
154 L Z+2 FMAX
155 L Z-9 F500
156 L X-25,672 Y-112,672 RL F315
157 CC X-28,5 Y-115,5
158 C X-28,5 Y-111,5 DR+
159 CC X-28,5 Y-92,5
160 C X-47,5 Y-92,5 DR-
161 L Y-38,773
162 CC X-58,5 Y-38,773
163 C X-48,974 Y-33,273 DR+
164 L X-89,954 Y+37,708
165 CC X-73,5 Y+47,208
166 C X-92,5 Y+47,208 DR-
167 CC X-96,5 Y+47,208
168 C X-93,672 Y+50,036 DR+
169 L X-97,914 Y+54,279 R0
170 L Z+10 FMAX
171 L X-21,429 Y-116,914 FMAX
172 L Z+2 FMAX
173 L Z-9 F500
174 L X-25,672 Y-112,672 RL F315
175 CC X-28,5 Y-115,5
176 C X-28,5 Y-111,5 DR+
177 CC X-28,5 Y-92,5
178 C X-47,5 Y-92,5 DR-
179 L Y-38,773
180 CC X-58,5 Y-38,773
181 C X-48,974 Y-33,273 DR+
182 L X-89,954 Y+37,708
183 CC X-73,5 Y+47,208
184 C X-92,5 Y+47,208 DR-
185 CC X-96,5 Y+47,208
186 C X-93,672 Y+50,036 DR+
187 L X-97,914 Y+54,279 R0
188 L Z+50 FMAX
189 ; CORRECTION USURE GAUCHE
190 ; SUREP R 0. SUREP Z 0.
191 L X-107,914 Y+85,429 FMAX
192 L Z+2 FMAX
193 L Z-9 F500
194 L X-103,672 Y+89,672 RL F315
195 CC X-106,5 Y+92,5
196 C X-102,5 Y+92,5 DR+
197 CC X-73,5 Y+92,5
198 C X-73,5 Y+121,5 DR-
199 CC X-73,5 Y+125,5
200 C X-70,672 Y+122,672 DR+
201 L X-66,429 Y+126,914 R0
202 L Z+10 FMAX
203 L X-102,914 Y+85,429 FMAX
204 L Z+2 FMAX
205 L Z-9 F500
206 L X-98,672 Y+89,672 RL F315
207 CC X-101,5 Y+92,5
208 C X-97,5 Y+92,5 DR+
209 CC X-73,5 Y+92,5
210 C X-73,5 Y+116,5 DR-
211 CC X-73,5 Y+120,5
212 C X-70,672 Y+117,672 DR+
213 L X-66,429 Y+121,914 R0
214 L Z+10 FMAX
215 L X-97,914 Y+85,429 FMAX
216 L Z+2 FMAX
217 L Z-9 F500
218 L X-93,672 Y+89,672 RL F315
219 CC X-96,5 Y+92,5
220 C X-92,5 Y+92,5 DR+
221 CC X-73,5 Y+92,5
222 C X-73,5 Y+111,5 DR-
223 CC X-73,5 Y+115,5
224 C X-70,672 Y+112,672 DR+
225 L X-66,429 Y+116,914 R0
226 L Z+10 FMAX
227 L X-97,914 Y+85,429 FMAX
228 L Z+2 FMAX
229 L Z-9 F500
230 L X-93,672 Y+89,672 RL F315
231 CC X-96,5 Y+92,5
232 C X-92,5 Y+92,5 DR+
233 CC X-73,5 Y+92,5
234 C X-73,5 Y+111,5 DR-
235 CC X-73,5 Y+115,5
236 C X-70,672 Y+112,672 DR+
237 L X-66,429 Y+116,914 R0
238 L Z+50 FMAX
239 L X+66,429 Y+126,914 FMAX
240 L Z+2 FMAX
241 L Z-9 F500
242 L X+70,672 Y+122,672 RL F315
243 CC X+73,5 Y+125,5
244 C X+73,5 Y+121,5 DR+
245 CC X+73,5 Y+92,5
246 C X+102,5 Y+92,5 DR-
247 CC X+106,5 Y+92,5
248 C X+103,672 Y+89,672 DR+
249 L X+107,914 Y+85,429 R0
250 L Z+10 FMAX
251 L X+66,429 Y+121,914 FMAX
252 L Z+2 FMAX
253 L Z-9 F500
254 L X+70,672 Y+117,672 RL F315
255 CC X+73,5 Y+120,5
256 C X+73,5 Y+116,5 DR+
257 CC X+73,5 Y+92,5
258 C X+97,5 Y+92,5 DR-
259 CC X+101,5 Y+92,5
260 C X+98,672 Y+89,672 DR+
261 L X+102,914 Y+85,429 R0
262 L Z+10 FMAX
263 L X+66,429 Y+116,914 FMAX
264 L Z+2 FMAX
265 L Z-9 F500
266 L X+70,672 Y+112,672 RL F315
267 CC X+73,5 Y+115,5
268 C X+73,5 Y+111,5 DR+
269 CC X+73,5 Y+92,5
270 C X+92,5 Y+92,5 DR-
271 CC X+96,5 Y+92,5
272 C X+93,672 Y+89,672 DR+
273 L X+97,914 Y+85,429 R0
274 L Z+10 FMAX
275 L X+66,429 Y+116,914 FMAX
276 L Z+2 FMAX
277 L Z-9 F500
278 L X+70,672 Y+112,672 RL F315
279 CC X+73,5 Y+115,5
280 C X+73,5 Y+111,5 DR+
281 CC X+73,5 Y+92,5
282 C X+92,5 Y+92,5 DR-
283 CC X+96,5 Y+92,5
284 C X+93,672 Y+89,672 DR+
285 L X+97,914 Y+85,429 R0
286 L Z+50 FMAX
287 L X+107,914 Y-85,429 FMAX
288 L Z+2 FMAX
289 L Z-9 F500
290 L X+103,672 Y-89,672 RL F315
291 CC X+106,5 Y-92,5
292 C X+102,5 Y-92,5 DR+
293 CC X+73,5 Y-92,5
294 C X+73,5 Y-121,5 DR-
295 CC X+73,5 Y-125,5
296 C X+70,672 Y-122,672 DR+
297 L X+66,429 Y-126,914 R0
298 L Z+10 FMAX
299 L X+102,914 Y-85,429 FMAX
300 L Z+2 FMAX
301 L Z-9 F500
302 L X+98,672 Y-89,672 RL F315
303 CC X+101,5 Y-92,5
304 C X+97,5 Y-92,5 DR+
305 CC X+73,5 Y-92,5
306 C X+73,5 Y-116,5 DR-
307 CC X+73,5 Y-120,5
308 C X+70,672 Y-117,672 DR+
309 L X+66,429 Y-121,914 R0
310 L Z+10 FMAX
311 L X+97,914 Y-85,429 FMAX
312 L Z+2 FMAX
313 L Z-9 F500
314 L X+93,672 Y-89,672 RL F315
315 CC X+96,5 Y-92,5
316 C X+92,5 Y-92,5 DR+
317 CC X+73,5 Y-92,5
318 C X+73,5 Y-111,5 DR-
319 CC X+73,5 Y-115,5
320 C X+70,672 Y-112,672 DR+
321 L X+66,429 Y-116,914 R0
322 L Z+10 FMAX
323 L X+97,914 Y-85,429 FMAX
324 L Z+2 FMAX
325 L Z-9 F500
326 L X+93,672 Y-89,672 RL F315
327 CC X+96,5 Y-92,5
328 C X+92,5 Y-92,5 DR+
329 CC X+73,5 Y-92,5
330 C X+73,5 Y-111,5 DR-
331 CC X+73,5 Y-115,5
332 C X+70,672 Y-112,672 DR+
333 L X+66,429 Y-116,914 R0
334 L Z+50 FMAX
335 M78
336 M5
337 L Z-1 FMAX M91
338 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
339 ; CORRECTION USURE GAUCHE
340 ; SUREP R 0. SUREP Z 0.
341 TOOL CALL 1 Z S6000 DR-2,5
342 TOOL DEF 18
343 L X-63,579 Y+94,3 FMAX M3
344 L Z+50 FMAX
345 L Z+2 FMAX
346 L Z-1,25 F800
347 L X-60,079 Y+93,8 RL F1200
348 L X-59,579
349 CC X-59,579 Y+94,3
350 C X-59,079 Y+94,3 DR+
351 CC X-63,579 Y+94,3
352 C X-68,079 Y+94,3 DR+
353 CC X-63,579 Y+94,3
354 C X-59,079 Y+94,3 DR+
355 CC X-63,579 Y+94,3
356 C X-59,189 Y+95,292 DR+
357 CC X-59,677 Y+95,182
358 C X-59,787 Y+95,669 DR+
359 L X-60,275 Y+95,559
360 L X-63,579 Y+94,3 R0
361 L Z-2,5 F800
362 L X-60,079 Y+93,8 RL F1200
363 L X-59,579
364 CC X-59,579 Y+94,3
365 C X-59,079 Y+94,3 DR+
366 CC X-63,579 Y+94,3
367 C X-68,079 Y+94,3 DR+
368 CC X-63,579 Y+94,3
369 C X-59,079 Y+94,3 DR+
370 CC X-63,579 Y+94,3
371 C X-59,189 Y+95,292 DR+
372 CC X-59,677 Y+95,182
373 C X-59,787 Y+95,669 DR+
374 L X-60,275 Y+95,559
375 L X-63,579 Y+94,3 R0
376 L Z+50 FMAX
377 L X+52,662 Y+27,5 FMAX
378 L Z+2 FMAX
379 L Z-1,25 F800
380 L X+56,162 Y+27 RL F1200
381 L X+56,662
382 CC X+56,662 Y+27,5
383 C X+57,162 Y+27,5 DR+
384 CC X+52,662 Y+27,5
385 C X+48,162 Y+27,5 DR+
386 CC X+52,662 Y+27,5
387 C X+57,162 Y+27,5 DR+
388 CC X+52,662 Y+27,5
389 C X+57,052 Y+28,492 DR+
390 CC X+56,564 Y+28,382
391 C X+56,454 Y+28,869 DR+
392 L X+55,966 Y+28,759
393 L X+52,662 Y+27,5 R0
394 L Z-2,5 F800
395 L X+56,162 Y+27 RL F1200
396 L X+56,662
397 CC X+56,662 Y+27,5
398 C X+57,162 Y+27,5 DR+
399 CC X+52,662 Y+27,5
400 C X+48,162 Y+27,5 DR+
401 CC X+52,662 Y+27,5
402 C X+57,162 Y+27,5 DR+
403 CC X+52,662 Y+27,5
404 C X+57,052 Y+28,492 DR+
405 CC X+56,564 Y+28,382
406 C X+56,454 Y+28,869 DR+
407 L X+55,966 Y+28,759
408 L X+52,662 Y+27,5 R0
409 L Z+50 FMAX
410 L X+54,479 Y+48,9 FMAX
411 L Z+2 FMAX
412 L Z-1,25 F800
413 L X+57,979 Y+48,4 RL F1200
414 L X+58,479
415 CC X+58,479 Y+48,9
416 C X+58,979 Y+48,9 DR+
417 CC X+54,479 Y+48,9
418 C X+49,979 Y+48,9 DR+
419 CC X+54,479 Y+48,9
420 C X+58,979 Y+48,9 DR+
421 CC X+54,479 Y+48,9
422 C X+58,868 Y+49,892 DR+
423 CC X+58,38 Y+49,782
424 C X+58,27 Y+50,269 DR+
425 L X+57,783 Y+50,159
426 L X+54,479 Y+48,9 R0
427 L Z-2,5 F800
428 L X+57,979 Y+48,4 RL F1200
429 L X+58,479
430 CC X+58,479 Y+48,9
431 C X+58,979 Y+48,9 DR+
432 CC X+54,479 Y+48,9
433 C X+49,979 Y+48,9 DR+
434 CC X+54,479 Y+48,9
435 C X+58,979 Y+48,9 DR+
436 CC X+54,479 Y+48,9
437 C X+58,868 Y+49,892 DR+
438 CC X+58,38 Y+49,782
439 C X+58,27 Y+50,269 DR+
440 L X+57,783 Y+50,159
441 L X+54,479 Y+48,9 R0
442 L Z+50 FMAX
443 L X+52,149 Y-49,4 FMAX
444 L Z+2 FMAX
445 L Z-1,25 F800
446 L X+55,649 Y-49,9 RL F1200
447 L X+56,149
448 CC X+56,149 Y-49,4
449 C X+56,649 Y-49,4 DR+
450 CC X+52,149 Y-49,4
451 C X+47,649 Y-49,4 DR+
452 CC X+52,149 Y-49,4
453 C X+56,649 Y-49,4 DR+
454 CC X+52,149 Y-49,4
455 C X+56,538 Y-48,408 DR+
456 CC X+56,051 Y-48,518
457 C X+55,94 Y-48,031 DR+
458 L X+55,453 Y-48,141
459 L X+52,149 Y-49,4 R0
460 L Z-2,5 F800
461 L X+55,649 Y-49,9 RL F1200
462 L X+56,149
463 CC X+56,149 Y-49,4
464 C X+56,649 Y-49,4 DR+
465 CC X+52,149 Y-49,4
466 C X+47,649 Y-49,4 DR+
467 CC X+52,149 Y-49,4
468 C X+56,649 Y-49,4 DR+
469 CC X+52,149 Y-49,4
470 C X+56,538 Y-48,408 DR+
471 CC X+56,051 Y-48,518
472 C X+55,94 Y-48,031 DR+
473 L X+55,453 Y-48,141
474 L X+52,149 Y-49,4 R0
475 L Z+50 FMAX
476 L X-28,74 Y-27,3 FMAX
477 L Z+2 FMAX
478 L Z-1,25 F800
479 L X-25,24 Y-27,8 RL F1200
480 L X-24,74
481 CC X-24,74 Y-27,3
482 C X-24,24 Y-27,3 DR+
483 CC X-28,74 Y-27,3
484 C X-33,24 Y-27,3 DR+
485 CC X-28,74 Y-27,3
486 C X-24,24 Y-27,3 DR+
487 CC X-28,74 Y-27,3
488 C X-24,35 Y-26,308 DR+
489 CC X-24,838 Y-26,418
490 C X-24,948 Y-25,931 DR+
491 L X-25,436 Y-26,041
492 L X-28,74 Y-27,3 R0
493 L Z-2,5 F800
494 L X-25,24 Y-27,8 RL F1200
495 L X-24,74
496 CC X-24,74 Y-27,3
497 C X-24,24 Y-27,3 DR+
498 CC X-28,74 Y-27,3
499 C X-33,24 Y-27,3 DR+
500 CC X-28,74 Y-27,3
501 C X-24,24 Y-27,3 DR+
502 CC X-28,74 Y-27,3
503 C X-24,35 Y-26,308 DR+
504 CC X-24,838 Y-26,418
505 C X-24,948 Y-25,931 DR+
506 L X-25,436 Y-26,041
507 L X-28,74 Y-27,3 R0
508 L Z+50 FMAX
509 M5
510 L Z-1 FMAX M91
511 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
512 ; CORRECTION USURE GAUCHE
513 ; SUREP R 0. SUREP Z 0.
514 TOOL CALL 18 Z S1751 DR-5
515 TOOL DEF 16
516 L X+106,828 Y+113,798 FMAX M3
517 L Z+50 FMAX M25
518 L Z+2 FMAX
519 L Z-2 F500
520 L X+102,607 Y+109,534 RL F315
521 CC X+105,449 Y+106,72
522 C X+101,45 Y+106,7 DR+
523 CC X+561,444 Y+109
524 C X+116,16 Y-6,424 DR+
525 CC X+53,285 Y-22,722
526 C X+106,557 Y-59,885 DR-
527 L X+71,798 Y-109,71
528 CC X+18,527 Y-72,547
529 C X-30,572 Y-115,07 DR-
530 CC X+226,438 Y+107,519
531 C X-113,56 Y+106,364 DR-
532 CC X-117,56 Y+106,35
533 C X-114,741 Y+109,188 DR+
534 L X-118,998 Y+113,417 R0
535 L Z+10 FMAX
536 L X+101,828 Y+113,773 FMAX
537 L Z+2 FMAX
538 L Z-2 F500
539 L X+97,607 Y+109,509 RL F315
540 CC X+100,45 Y+106,695
541 C X+96,45 Y+106,675 DR+
542 CC X+561,444 Y+109
543 C X+111,32 Y-7,679 DR+
544 CC X+53,285 Y-22,722
545 C X+102,456 Y-57,024 DR-
546 L X+67,698 Y-106,849
547 CC X+18,527 Y-72,547
548 C X-26,792 Y-111,797 DR-
549 CC X+226,438 Y+107,519
550 C X-108,56 Y+106,381 DR-
551 CC X-112,56 Y+106,367
552 C X-109,741 Y+109,205 DR+
553 L X-113,998 Y+113,434 R0
554 L Z+10 FMAX
555 L X+96,828 Y+113,748 FMAX
556 L Z+2 FMAX
557 L Z-2 F500
558 L X+92,607 Y+109,484 RL F315
559 CC X+95,45 Y+106,67
560 C X+91,45 Y+106,65 DR+
561 CC X+561,444 Y+109
562 C X+106,48 Y-8,933 DR+
563 CC X+53,285 Y-22,722
564 C X+98,355 Y-54,163 DR-
565 L X+63,597 Y-103,988
566 CC X+18,527 Y-72,547
567 C X-23,012 Y-108,523 DR-
568 CC X+226,438 Y+107,519
569 C X-103,56 Y+106,398 DR-
570 CC X-107,56 Y+106,384
571 C X-104,741 Y+109,222 DR+
572 L X-108,998 Y+113,451 R0
573 L Z+10 FMAX
574 L X+91,828 Y+113,723 FMAX
575 L Z+2 FMAX
576 L Z-2 F500
577 L X+87,607 Y+109,459 RL F315
578 CC X+90,45 Y+106,645
579 C X+86,45 Y+106,625 DR+
580 CC X+561,444 Y+109
581 C X+101,64 Y-10,188 DR+
582 CC X+53,285 Y-22,722
583 C X+94,254 Y-51,302 DR-
584 L X+59,496 Y-101,127
585 CC X+18,527 Y-72,547
586 C X-19,233 Y-105,25 DR-
587 CC X+226,438 Y+107,519
588 C X-98,56 Y+106,415 DR-
589 CC X-102,56 Y+106,401
590 C X-99,741 Y+109,239 DR+
591 L X-103,998 Y+113,468 R0
592 L Z+10 FMAX
593 L X+86,829 Y+113,698 FMAX
594 L Z+2 FMAX
595 L Z-2 F500
596 L X+82,607 Y+109,434 RL F315
597 CC X+85,45 Y+106,62
598 C X+81,45 Y+106,6 DR+
599 CC X+561,444 Y+109
600 C X+96,8 Y-11,442 DR+
601 CC X+53,285 Y-22,722
602 C X+90,154 Y-48,442 DR-
603 L X+55,395 Y-98,267
604 CC X+18,527 Y-72,547
605 C X-15,453 Y-101,977 DR-
606 CC X+226,438 Y+107,519
607 C X-93,56 Y+106,432 DR-
608 CC X-97,56 Y+106,418
609 C X-94,741 Y+109,256 DR+
610 L X-98,998 Y+113,485 R0
611 L Z+10 FMAX
612 L X+81,829 Y+113,673 FMAX
613 L Z+2 FMAX
614 L Z-2 F500
615 L X+77,607 Y+109,409 RL F315
616 CC X+80,45 Y+106,595
617 C X+76,45 Y+106,575 DR+
618 CC X+561,444 Y+109
619 C X+91,96 Y-12,697 DR+
620 CC X+53,285 Y-22,722
621 C X+86,053 Y-45,581 DR-
622 L X+51,295 Y-95,406
623 CC X+18,527 Y-72,547
624 C X-11,674 Y-98,703 DR-
625 CC X+226,438 Y+107,519
626 C X-88,56 Y+106,449 DR-
627 CC X-92,56 Y+106,435
628 C X-89,741 Y+109,273 DR+
629 L X-93,998 Y+113,502 R0
630 L Z+10 FMAX
631 L X+76,829 Y+113,648 FMAX
632 L Z+2 FMAX
633 L Z-2 F500
634 L X+72,607 Y+109,384 RL F315
635 CC X+75,45 Y+106,57
636 C X+71,45 Y+106,55 DR+
637 CC X+561,444 Y+109
638 C X+87,12 Y-13,952 DR+
639 CC X+53,285 Y-22,722
640 C X+81,952 Y-42,72 DR-
641 L X+47,194 Y-92,545
642 CC X+18,527 Y-72,547
643 C X-7,894 Y-95,43 DR-
644 CC X+226,438 Y+107,519
645 C X-83,56 Y+106,466 DR-
646 CC X-87,56 Y+106,452
647 C X-84,741 Y+109,29 DR+
648 L X-88,998 Y+113,519 R0
649 L Z+10 FMAX
650 L X+71,829 Y+113,623 FMAX
651 L Z+2 FMAX
652 L Z-2 F500
653 L X+67,607 Y+109,359 RL F315
654 CC X+70,45 Y+106,545
655 C X+66,45 Y+106,525 DR+
656 CC X+561,444 Y+109
657 C X+82,28 Y-15,206 DR+
658 CC X+53,285 Y-22,722
659 C X+77,851 Y-39,86 DR-
660 L X+43,093 Y-89,685
661 CC X+18,527 Y-72,547
662 C X-4,115 Y-92,156 DR-
663 CC X+226,438 Y+107,519
664 C X-78,56 Y+106,483 DR-
665 CC X-82,56 Y+106,469
666 C X-79,741 Y+109,307 DR+
667 L X-83,998 Y+113,536 R0
668 L Z+10 FMAX
669 L X+71,829 Y+113,623 FMAX
670 L Z+2 FMAX
671 L Z-2 F500
672 L X+67,607 Y+109,359 RL F315
673 CC X+70,45 Y+106,545
674 C X+66,45 Y+106,525 DR+
675 CC X+561,444 Y+109
676 C X+82,28 Y-15,206 DR+
677 CC X+53,285 Y-22,722
678 C X+77,851 Y-39,86 DR-
679 L X+43,093 Y-89,685
680 CC X+18,527 Y-72,547
681 C X-4,115 Y-92,156 DR-
682 CC X+226,438 Y+107,519
683 C X-78,56 Y+106,483 DR-
684 CC X-82,56 Y+106,469
685 C X-79,741 Y+109,307 DR+
686 L X-83,998 Y+113,536 R0
687 L Z+50 FMAX
688 M78
689 M5
690 L Z-1 FMAX M91
691 ; T16 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
692 ; CORRECTION USURE GAUCHE
693 ; SUREP R 0. SUREP Z 0.
694 TOOL CALL 16 Z S5570 DR-4
695 TOOL DEF 1
696 L X+111,752 Y+112,408 FMAX M3
697 L Z+50 FMAX M8
698 L Z+2 FMAX
699 L Z-2,2 F297
700 L X+108,375 Y+108,997 RL F2674
701 CC X+110,649 Y+106,746
702 C X+107,449 Y+106,73 DR+
703 CC X+561,444 Y+109
704 C X+121,968 Y-4,918 DR+
705 CC X+53,285 Y-22,722
706 C X+111,478 Y-63,318 DR-
707 L X+76,719 Y-113,142
708 CC X+18,527 Y-72,547
709 C X-35,107 Y-118,998 DR-
710 CC X+226,438 Y+107,519
711 C X-119,56 Y+106,344 DR-
712 CC X-122,76 Y+106,333
713 C X-120,505 Y+108,603 DR+
714 L X-123,91 Y+111,986 R0
715 L Z+10 FMAX
716 L X+105,753 Y+112,378 FMAX
717 L Z+2 FMAX
718 L Z-2,2 F297
719 L X+102,375 Y+108,967 RL F2674
720 CC X+104,649 Y+106,716
721 C X+101,45 Y+106,7 DR+
722 CC X+561,444 Y+109
723 C X+116,16 Y-6,424 DR+
724 CC X+53,285 Y-22,722
725 C X+106,557 Y-59,885 DR-
726 L X+71,798 Y-109,71
727 CC X+18,527 Y-72,547
728 C X-30,572 Y-115,07 DR-
729 CC X+226,438 Y+107,519
730 C X-113,56 Y+106,364 DR-
731 CC X-116,76 Y+106,353
732 C X-114,505 Y+108,624 DR+
733 L X-117,91 Y+112,006 R0
734 L Z+10 FMAX
735 L X+99,753 Y+112,348 FMAX
736 L Z+2 FMAX
737 L Z-2,2 F297
738 L X+96,376 Y+108,937 RL F2674
739 CC X+98,65 Y+106,686
740 C X+95,45 Y+106,67 DR+
741 CC X+561,444 Y+109
742 C X+110,352 Y-7,93 DR+
743 CC X+53,285 Y-22,722
744 C X+101,636 Y-56,452 DR-
745 L X+66,877 Y-106,277
746 CC X+18,527 Y-72,547
747 C X-26,036 Y-111,142 DR-
748 CC X+226,438 Y+107,519
749 C X-107,56 Y+106,384 DR-
750 CC X-110,76 Y+106,374
751 C X-108,505 Y+108,644 DR+
752 L X-111,91 Y+112,026 R0
753 L Z+10 FMAX
754 L X+93,753 Y+112,318 FMAX
755 L Z+2 FMAX
756 L Z-2,2 F297
757 L X+90,376 Y+108,907 RL F2674
758 CC X+92,65 Y+106,656
759 C X+89,45 Y+106,64 DR+
760 CC X+561,444 Y+109
761 C X+104,544 Y-9,435 DR+
762 CC X+53,285 Y-22,722
763 C X+96,715 Y-53,019 DR-
764 L X+61,957 Y-102,844
765 CC X+18,527 Y-72,547
766 C X-21,501 Y-107,214 DR-
767 CC X+226,438 Y+107,519
768 C X-101,56 Y+106,405 DR-
769 CC X-104,76 Y+106,394
770 C X-102,505 Y+108,664 DR+
771 L X-105,91 Y+112,047 R0
772 L Z+10 FMAX
773 L X+87,753 Y+112,288 FMAX
774 L Z+2 FMAX
775 L Z-2,2 F297
776 L X+84,376 Y+108,877 RL F2674
777 CC X+86,65 Y+106,626
778 C X+83,45 Y+106,61 DR+
779 CC X+561,444 Y+109
780 C X+98,736 Y-10,941 DR+
781 CC X+53,285 Y-22,722
782 C X+91,794 Y-49,586 DR-
783 L X+57,036 Y-99,411
784 CC X+18,527 Y-72,547
785 C X-16,965 Y-103,286 DR-
786 CC X+226,438 Y+107,519
787 C X-95,56 Y+106,425 DR-
788 CC X-98,76 Y+106,414
789 C X-96,505 Y+108,685 DR+
790 L X-99,91 Y+112,067 R0
791 L Z+10 FMAX
792 L X+81,753 Y+112,258 FMAX
793 L Z+2 FMAX
794 L Z-2,2 F297
795 L X+78,376 Y+108,847 RL F2674
796 CC X+80,65 Y+106,596
797 C X+77,45 Y+106,58 DR+
798 CC X+561,444 Y+109
799 C X+92,928 Y-12,446 DR+
800 CC X+53,285 Y-22,722
801 C X+86,873 Y-46,153 DR-
802 L X+52,115 Y-95,978
803 CC X+18,527 Y-72,547
804 C X-12,43 Y-99,358 DR-
805 CC X+226,438 Y+107,519
806 C X-89,56 Y+106,446 DR-
807 CC X-92,76 Y+106,435
808 C X-90,505 Y+108,705 DR+
809 L X-93,91 Y+112,088 R0
810 L Z+10 FMAX
811 L X+75,753 Y+112,228 FMAX
812 L Z+2 FMAX
813 L Z-2,2 F297
814 L X+72,376 Y+108,817 RL F2674
815 CC X+74,65 Y+106,566
816 C X+71,45 Y+106,55 DR+
817 CC X+561,444 Y+109
818 C X+87,12 Y-13,952 DR+
819 CC X+53,285 Y-22,722
820 C X+81,952 Y-42,72 DR-
821 L X+47,194 Y-92,545
822 CC X+18,527 Y-72,547
823 C X-7,894 Y-95,43 DR-
824 CC X+226,438 Y+107,519
825 C X-83,56 Y+106,466 DR-
826 CC X-86,76 Y+106,455
827 C X-84,505 Y+108,725 DR+
828 L X-87,91 Y+112,108 R0
829 L Z+10 FMAX
830 L X+69,753 Y+112,198 FMAX
831 L Z+2 FMAX
832 L Z-2,2 F297
833 L X+66,376 Y+108,787 RL F2674
834 CC X+68,65 Y+106,536
835 C X+65,45 Y+106,52 DR+
836 CC X+561,444 Y+109
837 C X+81,312 Y-15,457 DR+
838 CC X+53,285 Y-22,722
839 C X+77,031 Y-39,287 DR-
840 L X+42,273 Y-89,112
841 CC X+18,527 Y-72,547
842 C X-3,359 Y-91,502 DR-
843 CC X+226,438 Y+107,519
844 C X-77,56 Y+106,486 DR-
845 CC X-80,76 Y+106,475
846 C X-78,505 Y+108,746 DR+
847 L X-81,91 Y+112,128 R0
848 L Z+10 FMAX
849 L X+69,753 Y+112,198 FMAX
850 L Z+2 FMAX
851 L Z-2,2 F297
852 L X+66,376 Y+108,787 RL F2674
853 CC X+68,65 Y+106,536
854 C X+65,45 Y+106,52 DR+
855 CC X+561,444 Y+109
856 C X+81,312 Y-15,457 DR+
857 CC X+53,285 Y-22,722
858 C X+77,031 Y-39,287 DR-
859 L X+42,273 Y-89,112
860 CC X+18,527 Y-72,547
861 C X-3,359 Y-91,502 DR-
862 CC X+226,438 Y+107,519
863 C X-77,56 Y+106,486 DR-
864 CC X-80,76 Y+106,475
865 C X-78,505 Y+108,746 DR+
866 L X-81,91 Y+112,128 R0
867 L Z+50 FMAX
868 M9
869 M5
870 L Z-1 FMAX M91
871 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
872 ; CORRECTION USURE GAUCHE
873 ; SUREP R 0. SUREP Z 0.
874 TOOL CALL 1 Z S6000 DR-2,5
875 TOOL DEF 18
876 L X+66,639 Y+110,062 FMAX M3
877 L Z+50 FMAX
878 L Z+2 FMAX
879 L Z-2,15 F800
880 L X+64,529 Y+107,93 RL F1200
881 CC X+65,95 Y+106,522
882 C X+63,95 Y+106,513 DR+
883 CC X+561,444 Y+109
884 C X+79,86 Y-15,834 DR+
885 CC X+53,285 Y-22,722
886 C X+75,801 Y-38,429 DR-
887 L X+41,043 Y-88,254
888 CC X+18,527 Y-72,547
889 C X-2,225 Y-90,52 DR-
890 CC X+226,438 Y+107,519
891 C X-76,06 Y+106,491 DR-
892 CC X-78,06 Y+106,485
893 C X-76,65 Y+107,904 DR+
894 L X-78,779 Y+110,018 R0
895 L Z+50 FMAX
896 M5
897 L Z-1 FMAX M91
898 L Y-1 FMAX M91
899 M30
900 END PGM REP15-OP10-D-CALE EJECTEUR SUP MM
