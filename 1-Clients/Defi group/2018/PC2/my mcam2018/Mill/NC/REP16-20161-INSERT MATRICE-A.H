0 BEGIN PGM REP16-20161-INSERT MATRICE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP16-20161-INSERT MATRICE-A
4 ; PROG-CN DU 11-10-19 A 07:50
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
11 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
12 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
13 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
14 ; FIN DE LISTE DES OUTILS
15 L R0 FMAX
16 L Z-1 FMAX M91
17 ; *GROUPE D'USINAGE-2*
18 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
19 ; CORRECTION USURE GAUCHE
20 ; SUREP R -0.03 SUREP Z 0.
21 TOOL CALL 18 Z S1751 DR-5
22 TOOL DEF 1
23 L X-39,384 Y+8,929 FMAX M3
24 L Z+50 FMAX M25
25 L Z+2 FMAX
26 L Z-9 F500
27 L X-35,142 Y+13,172 RL F315
28 CC X-37,97 Y+16
29 C X-33,97 Y+16 DR+
30 CC X-12,5 Y+16
31 C X-12,5 Y+37,47 DR-
32 CC X-12,5 Y+41,47
33 C X-9,672 Y+38,642 DR+
34 L X-5,429 Y+42,884 R0
35 L Z+10 FMAX
36 L X-36,384 Y+8,929 FMAX
37 L Z+2 FMAX
38 L Z-9 F500
39 L X-32,142 Y+13,172 RL F315
40 CC X-34,97 Y+16
41 C X-30,97 Y+16 DR+
42 CC X-12,5 Y+16
43 C X-12,5 Y+34,47 DR-
44 CC X-12,5 Y+38,47
45 C X-9,672 Y+35,642 DR+
46 L X-5,429 Y+39,884 R0
47 L Z+10 FMAX
48 L X-33,384 Y+8,929 FMAX
49 L Z+2 FMAX
50 L Z-9 F500
51 L X-29,142 Y+13,172 RL F315
52 CC X-31,97 Y+16
53 C X-27,97 Y+16 DR+
54 CC X-12,5 Y+16
55 C X-12,5 Y+31,47 DR-
56 CC X-12,5 Y+35,47
57 C X-9,672 Y+32,642 DR+
58 L X-5,429 Y+36,884 R0
59 L Z+10 FMAX
60 L X-39,384 Y+8,929 FMAX
61 L Z-7 FMAX
62 L Z-18 F500
63 L X-35,142 Y+13,172 RL F315
64 CC X-37,97 Y+16
65 C X-33,97 Y+16 DR+
66 CC X-12,5 Y+16
67 C X-12,5 Y+37,47 DR-
68 CC X-12,5 Y+41,47
69 C X-9,672 Y+38,642 DR+
70 L X-5,429 Y+42,884 R0
71 L Z+10 FMAX
72 L X-36,384 Y+8,929 FMAX
73 L Z-7 FMAX
74 L Z-18 F500
75 L X-32,142 Y+13,172 RL F315
76 CC X-34,97 Y+16
77 C X-30,97 Y+16 DR+
78 CC X-12,5 Y+16
79 C X-12,5 Y+34,47 DR-
80 CC X-12,5 Y+38,47
81 C X-9,672 Y+35,642 DR+
82 L X-5,429 Y+39,884 R0
83 L Z+10 FMAX
84 L X-33,384 Y+8,929 FMAX
85 L Z-7 FMAX
86 L Z-18 F500
87 L X-29,142 Y+13,172 RL F315
88 CC X-31,97 Y+16
89 C X-27,97 Y+16 DR+
90 CC X-12,5 Y+16
91 C X-12,5 Y+31,47 DR-
92 CC X-12,5 Y+35,47
93 C X-9,672 Y+32,642 DR+
94 L X-5,429 Y+36,884 R0
95 L Z+10 FMAX
96 L X-33,384 Y+8,929 FMAX
97 L Z-7 FMAX
98 L Z-18 F500
99 L X-29,142 Y+13,172 RL F315
100 CC X-31,97 Y+16
101 C X-27,97 Y+16 DR+
102 CC X-12,5 Y+16
103 C X-12,5 Y+31,47 DR-
104 CC X-12,5 Y+35,47
105 C X-9,672 Y+32,642 DR+
106 L X-5,429 Y+36,884 R0
107 L Z+10 FMAX
108 L X-33,384 Y+8,929 FMAX
109 L Z-7 FMAX
110 L Z-18 F500
111 L X-29,142 Y+13,172 RL F315
112 CC X-31,97 Y+16
113 C X-27,97 Y+16 DR+
114 CC X-12,5 Y+16
115 C X-12,5 Y+31,47 DR-
116 CC X-12,5 Y+35,47
117 C X-9,672 Y+32,642 DR+
118 L X-5,429 Y+36,884 R0
119 L Z+50 FMAX
120 L X+10,429 Y+42,884 FMAX
121 L Z+2 FMAX
122 L Z-9 F500
123 L X+14,672 Y+38,642 RL F315
124 CC X+17,5 Y+41,47
125 C X+17,5 Y+37,47 DR+
126 CC X+17,5 Y+21
127 C X+33,97 Y+21 DR-
128 CC X+37,97 Y+21
129 C X+35,142 Y+18,172 DR+
130 L X+39,384 Y+13,929 R0
131 L Z+10 FMAX
132 L X+10,429 Y+39,884 FMAX
133 L Z+2 FMAX
134 L Z-9 F500
135 L X+14,672 Y+35,642 RL F315
136 CC X+17,5 Y+38,47
137 C X+17,5 Y+34,47 DR+
138 CC X+17,5 Y+21
139 C X+30,97 Y+21 DR-
140 CC X+34,97 Y+21
141 C X+32,142 Y+18,172 DR+
142 L X+36,384 Y+13,929 R0
143 L Z+10 FMAX
144 L X+10,429 Y+36,884 FMAX
145 L Z+2 FMAX
146 L Z-9 F500
147 L X+14,672 Y+32,642 RL F315
148 CC X+17,5 Y+35,47
149 C X+17,5 Y+31,47 DR+
150 CC X+17,5 Y+21
151 C X+27,97 Y+21 DR-
152 CC X+31,97 Y+21
153 C X+29,142 Y+18,172 DR+
154 L X+33,384 Y+13,929 R0
155 L Z+10 FMAX
156 L X+10,429 Y+42,884 FMAX
157 L Z-7 FMAX
158 L Z-18 F500
159 L X+14,672 Y+38,642 RL F315
160 CC X+17,5 Y+41,47
161 C X+17,5 Y+37,47 DR+
162 CC X+17,5 Y+21
163 C X+33,97 Y+21 DR-
164 CC X+37,97 Y+21
165 C X+35,142 Y+18,172 DR+
166 L X+39,384 Y+13,929 R0
167 L Z+10 FMAX
168 L X+10,429 Y+39,884 FMAX
169 L Z-7 FMAX
170 L Z-18 F500
171 L X+14,672 Y+35,642 RL F315
172 CC X+17,5 Y+38,47
173 C X+17,5 Y+34,47 DR+
174 CC X+17,5 Y+21
175 C X+30,97 Y+21 DR-
176 CC X+34,97 Y+21
177 C X+32,142 Y+18,172 DR+
178 L X+36,384 Y+13,929 R0
179 L Z+10 FMAX
180 L X+10,429 Y+36,884 FMAX
181 L Z-7 FMAX
182 L Z-18 F500
183 L X+14,672 Y+32,642 RL F315
184 CC X+17,5 Y+35,47
185 C X+17,5 Y+31,47 DR+
186 CC X+17,5 Y+21
187 C X+27,97 Y+21 DR-
188 CC X+31,97 Y+21
189 C X+29,142 Y+18,172 DR+
190 L X+33,384 Y+13,929 R0
191 L Z+10 FMAX
192 L X+10,429 Y+36,884 FMAX
193 L Z-7 FMAX
194 L Z-18 F500
195 L X+14,672 Y+32,642 RL F315
196 CC X+17,5 Y+35,47
197 C X+17,5 Y+31,47 DR+
198 CC X+17,5 Y+21
199 C X+27,97 Y+21 DR-
200 CC X+31,97 Y+21
201 C X+29,142 Y+18,172 DR+
202 L X+33,384 Y+13,929 R0
203 L Z+10 FMAX
204 L X+10,429 Y+36,884 FMAX
205 L Z-7 FMAX
206 L Z-18 F500
207 L X+14,672 Y+32,642 RL F315
208 CC X+17,5 Y+35,47
209 C X+17,5 Y+31,47 DR+
210 CC X+17,5 Y+21
211 C X+27,97 Y+21 DR-
212 CC X+31,97 Y+21
213 C X+29,142 Y+18,172 DR+
214 L X+33,384 Y+13,929 R0
215 L Z+50 FMAX
216 L X+39,384 Y-13,929 FMAX
217 L Z+2 FMAX
218 L Z-9 F500
219 L X+35,142 Y-18,172 RL F315
220 CC X+37,97 Y-21
221 C X+33,97 Y-21 DR+
222 CC X+17,5 Y-21
223 C X+17,5 Y-37,47 DR-
224 CC X+17,5 Y-41,47
225 C X+14,672 Y-38,642 DR+
226 L X+10,429 Y-42,884 R0
227 L Z+10 FMAX
228 L X+36,384 Y-13,929 FMAX
229 L Z+2 FMAX
230 L Z-9 F500
231 L X+32,142 Y-18,172 RL F315
232 CC X+34,97 Y-21
233 C X+30,97 Y-21 DR+
234 CC X+17,5 Y-21
235 C X+17,5 Y-34,47 DR-
236 CC X+17,5 Y-38,47
237 C X+14,672 Y-35,642 DR+
238 L X+10,429 Y-39,884 R0
239 L Z+10 FMAX
240 L X+33,384 Y-13,929 FMAX
241 L Z+2 FMAX
242 L Z-9 F500
243 L X+29,142 Y-18,172 RL F315
244 CC X+31,97 Y-21
245 C X+27,97 Y-21 DR+
246 CC X+17,5 Y-21
247 C X+17,5 Y-31,47 DR-
248 CC X+17,5 Y-35,47
249 C X+14,672 Y-32,642 DR+
250 L X+10,429 Y-36,884 R0
251 L Z+10 FMAX
252 L X+39,384 Y-13,929 FMAX
253 L Z-7 FMAX
254 L Z-18 F500
255 L X+35,142 Y-18,172 RL F315
256 CC X+37,97 Y-21
257 C X+33,97 Y-21 DR+
258 CC X+17,5 Y-21
259 C X+17,5 Y-37,47 DR-
260 CC X+17,5 Y-41,47
261 C X+14,672 Y-38,642 DR+
262 L X+10,429 Y-42,884 R0
263 L Z+10 FMAX
264 L X+36,384 Y-13,929 FMAX
265 L Z-7 FMAX
266 L Z-18 F500
267 L X+32,142 Y-18,172 RL F315
268 CC X+34,97 Y-21
269 C X+30,97 Y-21 DR+
270 CC X+17,5 Y-21
271 C X+17,5 Y-34,47 DR-
272 CC X+17,5 Y-38,47
273 C X+14,672 Y-35,642 DR+
274 L X+10,429 Y-39,884 R0
275 L Z+10 FMAX
276 L X+33,384 Y-13,929 FMAX
277 L Z-7 FMAX
278 L Z-18 F500
279 L X+29,142 Y-18,172 RL F315
280 CC X+31,97 Y-21
281 C X+27,97 Y-21 DR+
282 CC X+17,5 Y-21
283 C X+17,5 Y-31,47 DR-
284 CC X+17,5 Y-35,47
285 C X+14,672 Y-32,642 DR+
286 L X+10,429 Y-36,884 R0
287 L Z+10 FMAX
288 L X+33,384 Y-13,929 FMAX
289 L Z-7 FMAX
290 L Z-18 F500
291 L X+29,142 Y-18,172 RL F315
292 CC X+31,97 Y-21
293 C X+27,97 Y-21 DR+
294 CC X+17,5 Y-21
295 C X+17,5 Y-31,47 DR-
296 CC X+17,5 Y-35,47
297 C X+14,672 Y-32,642 DR+
298 L X+10,429 Y-36,884 R0
299 L Z+10 FMAX
300 L X+33,384 Y-13,929 FMAX
301 L Z-7 FMAX
302 L Z-18 F500
303 L X+29,142 Y-18,172 RL F315
304 CC X+31,97 Y-21
305 C X+27,97 Y-21 DR+
306 CC X+17,5 Y-21
307 C X+17,5 Y-31,47 DR-
308 CC X+17,5 Y-35,47
309 C X+14,672 Y-32,642 DR+
310 L X+10,429 Y-36,884 R0
311 L Z+50 FMAX
312 L X-10,429 Y-42,884 FMAX
313 L Z+2 FMAX
314 L Z-9 F500
315 L X-14,672 Y-38,642 RL F315
316 CC X-17,5 Y-41,47
317 C X-17,5 Y-37,47 DR+
318 CC X-17,5 Y-21
319 C X-33,97 Y-21 DR-
320 CC X-37,97 Y-21
321 C X-35,142 Y-18,172 DR+
322 L X-39,384 Y-13,929 R0
323 L Z+10 FMAX
324 L X-10,429 Y-39,884 FMAX
325 L Z+2 FMAX
326 L Z-9 F500
327 L X-14,672 Y-35,642 RL F315
328 CC X-17,5 Y-38,47
329 C X-17,5 Y-34,47 DR+
330 CC X-17,5 Y-21
331 C X-30,97 Y-21 DR-
332 CC X-34,97 Y-21
333 C X-32,142 Y-18,172 DR+
334 L X-36,384 Y-13,929 R0
335 L Z+10 FMAX
336 L X-10,429 Y-36,884 FMAX
337 L Z+2 FMAX
338 L Z-9 F500
339 L X-14,672 Y-32,642 RL F315
340 CC X-17,5 Y-35,47
341 C X-17,5 Y-31,47 DR+
342 CC X-17,5 Y-21
343 C X-27,97 Y-21 DR-
344 CC X-31,97 Y-21
345 C X-29,142 Y-18,172 DR+
346 L X-33,384 Y-13,929 R0
347 L Z+10 FMAX
348 L X-10,429 Y-42,884 FMAX
349 L Z-7 FMAX
350 L Z-18 F500
351 L X-14,672 Y-38,642 RL F315
352 CC X-17,5 Y-41,47
353 C X-17,5 Y-37,47 DR+
354 CC X-17,5 Y-21
355 C X-33,97 Y-21 DR-
356 CC X-37,97 Y-21
357 C X-35,142 Y-18,172 DR+
358 L X-39,384 Y-13,929 R0
359 L Z+10 FMAX
360 L X-10,429 Y-39,884 FMAX
361 L Z-7 FMAX
362 L Z-18 F500
363 L X-14,672 Y-35,642 RL F315
364 CC X-17,5 Y-38,47
365 C X-17,5 Y-34,47 DR+
366 CC X-17,5 Y-21
367 C X-30,97 Y-21 DR-
368 CC X-34,97 Y-21
369 C X-32,142 Y-18,172 DR+
370 L X-36,384 Y-13,929 R0
371 L Z+10 FMAX
372 L X-10,429 Y-36,884 FMAX
373 L Z-7 FMAX
374 L Z-18 F500
375 L X-14,672 Y-32,642 RL F315
376 CC X-17,5 Y-35,47
377 C X-17,5 Y-31,47 DR+
378 CC X-17,5 Y-21
379 C X-27,97 Y-21 DR-
380 CC X-31,97 Y-21
381 C X-29,142 Y-18,172 DR+
382 L X-33,384 Y-13,929 R0
383 L Z+10 FMAX
384 L X-10,429 Y-36,884 FMAX
385 L Z-7 FMAX
386 L Z-18 F500
387 L X-14,672 Y-32,642 RL F315
388 CC X-17,5 Y-35,47
389 C X-17,5 Y-31,47 DR+
390 CC X-17,5 Y-21
391 C X-27,97 Y-21 DR-
392 CC X-31,97 Y-21
393 C X-29,142 Y-18,172 DR+
394 L X-33,384 Y-13,929 R0
395 L Z+10 FMAX
396 L X-10,429 Y-36,884 FMAX
397 L Z-7 FMAX
398 L Z-18 F500
399 L X-14,672 Y-32,642 RL F315
400 CC X-17,5 Y-35,47
401 C X-17,5 Y-31,47 DR+
402 CC X-17,5 Y-21
403 C X-27,97 Y-21 DR-
404 CC X-31,97 Y-21
405 C X-29,142 Y-18,172 DR+
406 L X-33,384 Y-13,929 R0
407 L Z+50 FMAX
408 M78
409 M5
410 L Z-1 FMAX M91
411 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
412 ; CORRECTION USURE GAUCHE
413 ; SUREP R -0.03 SUREP Z 0.
414 TOOL CALL 1 Z S6000 DR-2,5
415 TOOL DEF 25
416 L X-1,036 Y+31,677 FMAX M3
417 L Z+50 FMAX
418 L Z+2 FMAX
419 L Z-2,1 F800
420 L X+1,086 Y+29,556 RL F1200
421 CC X+2,5 Y+30,97
422 C X+2,5 Y+28,97 DR+
423 L X+17,5
424 CC X+17,5 Y+21
425 C X+25,47 Y+21 DR-
426 L Y-21
427 CC X+17,5 Y-21
428 C X+17,5 Y-28,97 DR-
429 L X-17,5
430 CC X-17,5 Y-21
431 C X-25,47 Y-21 DR-
432 L Y+16
433 CC X-12,5 Y+16
434 C X-12,5 Y+28,97 DR-
435 L X+7,5
436 CC X+7,5 Y+30,97
437 C X+8,914 Y+29,556 DR+
438 L X+11,036 Y+31,677 R0
439 L Z+50 FMAX
440 M5
441 L Z-1 FMAX M91
442 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
443 TOOL CALL 1 Z S1856 DR+0
444 TOOL DEF 25
445 L X-13 Y+16,5 FMAX M3
446 L Z+50 FMAX M8
447 ;  POINTAGE-PERCAGE
448 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
449 L X-13 Y+16,5 FMAX M99
450 M9
451 M5
452 L Z-1 FMAX M91
453 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
454 TOOL CALL 25 Z S3000 DR+0
455 TOOL DEF 19
456 L X-13 Y+16,5 FMAX M3
457 L Z+50 FMAX M8
458 ;  DEBOURRAGE
459 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-38 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
460 L X-13 Y+16,5 FMAX M99
461 M9
462 M5
463 L Z-1 FMAX M91
464 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
465 ; CORRECTION AUCUNE
466 ; SUREP R 0. SUREP Z 0.
467 TOOL CALL 19 Z S7427 DR+0
468 TOOL DEF 28
469 L X-12,254 Y+18,138 FMAX M3
470 L Z+50 FMAX M8
471 L Z+2 FMAX
472 L Z+0,5 F297
473 CC X-13 Y+16,5
474 CP IPA-180 Z+0,302 DR-
475 CC X-13 Y+16,5
476 CP IPA-180 Z+0,105 DR-
477 CC X-13 Y+16,5
478 CP IPA-180 Z-0,092 DR-
479 CC X-13 Y+16,5
480 CP IPA-180 Z-0,29 DR-
481 CC X-13 Y+16,5
482 CP IPA-180 Z-0,488 DR-
483 CC X-13 Y+16,5
484 CP IPA-180 Z-0,685 DR-
485 CC X-13 Y+16,5
486 CP IPA-180 Z-0,883 DR-
487 CC X-13 Y+16,5
488 CP IPA-180 Z-1,08 DR-
489 CC X-13 Y+16,5
490 CP IPA-180 Z-1,278 DR-
491 CC X-13 Y+16,5
492 CP IPA-180 Z-1,475 DR-
493 CC X-13 Y+16,5
494 CP IPA-180 Z-1,673 DR-
495 CC X-13 Y+16,5
496 CP IPA-180 Z-1,87 DR-
497 CC X-13 Y+16,5
498 CP IPA-180 Z-2,067 DR-
499 CC X-13 Y+16,5
500 CP IPA-180 Z-2,265 DR-
501 CC X-13 Y+16,5
502 CP IPA-180 Z-2,463 DR-
503 CC X-13 Y+16,5
504 CP IPA-180 Z-2,66 DR-
505 CC X-13 Y+16,5
506 CP IPA-180 Z-2,857 DR-
507 CC X-13 Y+16,5
508 CP IPA-180 Z-3,055 DR-
509 CC X-13 Y+16,5
510 CP IPA-180 Z-3,252 DR-
511 CC X-13 Y+16,5
512 CP IPA-180 Z-3,449 DR-
513 CC X-13 Y+16,5
514 CP IPA-180 Z-3,646 DR-
515 CC X-13 Y+16,5
516 CP IPA-180 Z-3,844 DR-
517 CC X-13 Y+16,5
518 CP IPA-180 Z-4,042 DR-
519 CC X-13 Y+16,5
520 CP IPA-180 Z-4,239 DR-
521 CC X-13 Y+16,5
522 CP IPA-180 Z-4,437 DR-
523 CC X-13 Y+16,5
524 CP IPA-180 Z-4,634 DR-
525 CC X-13 Y+16,5
526 CP IPA-180 Z-4,832 DR-
527 CC X-13 Y+16,5
528 CP IPA-180 Z-5,029 DR-
529 CC X-13 Y+16,5
530 CP IPA-180 Z-5,226 DR-
531 CC X-13 Y+16,5
532 CP IPA-180 Z-5,424 DR-
533 CC X-13 Y+16,5
534 CP IPA-180 Z-5,622 DR-
535 CC X-13 Y+16,5
536 CP IPA-180 Z-5,819 DR-
537 CC X-13 Y+16,5
538 CP IPA-180 Z-6,017 DR-
539 CC X-13 Y+16,5
540 CP IPA-180 Z-6,214 DR-
541 CC X-13 Y+16,5
542 CP IPA-180 Z-6,412 DR-
543 CC X-13 Y+16,5
544 CP IPA-180 Z-6,609 DR-
545 CC X-13 Y+16,5
546 CP IPA-180 Z-6,806 DR-
547 CC X-13 Y+16,5
548 CP IPA-180 Z-7,004 DR-
549 CC X-13 Y+16,5
550 CP IPA-180 Z-7,201 DR-
551 CC X-13 Y+16,5
552 CP IPA-180 Z-7,399 DR-
553 CC X-13 Y+16,5
554 CP IPA-180 Z-7,596 DR-
555 CC X-13 Y+16,5
556 CP IPA-180 Z-7,794 DR-
557 CC X-13 Y+16,5
558 CP IPA-180 Z-7,992 DR-
559 CC X-13 Y+16,5
560 CP IPA-180 Z-8,189 DR-
561 CC X-13 Y+16,5
562 CP IPA-180 Z-8,386 DR-
563 CC X-13 Y+16,5
564 CP IPA-180 Z-8,584 DR-
565 CC X-13 Y+16,5
566 CP IPA-180 Z-8,781 DR-
567 CC X-13 Y+16,5
568 CP IPA-180 Z-8,979 DR-
569 CC X-13 Y+16,5
570 CP IPA-180 Z-9,177 DR-
571 CC X-13 Y+16,5
572 CP IPA-180 Z-9,374 DR-
573 CC X-13 Y+16,5
574 CP IPA-180 Z-9,572 DR-
575 CC X-13 Y+16,5
576 CP IPA-180 Z-9,769 DR-
577 CC X-13 Y+16,5
578 CP IPA-180 Z-9,966 DR-
579 CC X-13 Y+16,5
580 CP IPA-180 Z-10,164 DR-
581 CC X-13 Y+16,5
582 CP IPA-180 Z-10,361 DR-
583 CC X-13 Y+16,5
584 CP IPA-180 Z-10,558 DR-
585 CC X-13 Y+16,5
586 CP IPA-180 Z-10,756 DR-
587 CC X-13 Y+16,5
588 CP IPA-180 Z-10,953 DR-
589 CC X-13 Y+16,5
590 CP IPA-180 Z-11,151 DR-
591 CC X-13 Y+16,5
592 CP IPA-180 Z-11,348 DR-
593 CC X-13 Y+16,5
594 CP IPA-180 Z-11,546 DR-
595 CC X-13 Y+16,5
596 CP IPA-180 Z-11,743 DR-
597 CC X-13 Y+16,5
598 CP IPA-180 Z-11,941 DR-
599 CC X-13 Y+16,5
600 CP IPA-180 Z-12,138 DR-
601 CC X-13 Y+16,5
602 CP IPA-180 Z-12,336 DR-
603 CC X-13 Y+16,5
604 CP IPA-180 Z-12,533 DR-
605 CC X-13 Y+16,5
606 CP IPA-180 Z-12,73 DR-
607 CC X-13 Y+16,5
608 CP IPA-180 Z-12,928 DR-
609 CC X-13 Y+16,5
610 CP IPA-65,514 Z-13 DR-
611 L X-12,988 Y+16,5 F3565
612 CC X-13,025 Y+16,5
613 C X-13,063 Y+16,5 DR+
614 CC X-12,975 Y+16,5
615 C X-12,888 Y+16,5 DR+
616 CC X-13,025 Y+16,5
617 C X-13,163 Y+16,5 DR+
618 CC X-12,975 Y+16,5
619 C X-12,788 Y+16,5 DR+
620 CC X-13,025 Y+16,5
621 C X-13,263 Y+16,5 DR+
622 CC X-12,975 Y+16,5
623 C X-12,688 Y+16,5 DR+
624 CC X-13,025 Y+16,5
625 C X-13,363 Y+16,5 DR+
626 CC X-12,975 Y+16,5
627 C X-12,588 Y+16,5 DR+
628 CC X-13,025 Y+16,5
629 C X-13,463 Y+16,5 DR+
630 CC X-12,975 Y+16,5
631 C X-12,488 Y+16,5 DR+
632 CC X-13,025 Y+16,5
633 C X-13,563 Y+16,5 DR+
634 CC X-12,975 Y+16,5
635 C X-12,388 Y+16,5 DR+
636 CC X-13,025 Y+16,5
637 C X-13,663 Y+16,5 DR+
638 CC X-12,975 Y+16,5
639 C X-12,288 Y+16,5 DR+
640 CC X-13,025 Y+16,5
641 C X-13,763 Y+16,5 DR+
642 CC X-12,975 Y+16,5
643 C X-12,188 Y+16,5 DR+
644 CC X-13,025 Y+16,5
645 C X-13,863 Y+16,5 DR+
646 CC X-12,975 Y+16,5
647 C X-12,088 Y+16,5 DR+
648 CC X-13,025 Y+16,5
649 C X-13,963 Y+16,5 DR+
650 CC X-12,975 Y+16,5
651 C X-11,988 Y+16,5 DR+
652 CC X-13,025 Y+16,5
653 C X-14,063 Y+16,5 DR+
654 CC X-12,975 Y+16,5
655 C X-11,888 Y+16,5 DR+
656 CC X-13,025 Y+16,5
657 C X-14,163 Y+16,5 DR+
658 CC X-12,975 Y+16,5
659 C X-11,788 Y+16,5 DR+
660 CC X-13,025 Y+16,5
661 C X-14,263 Y+16,5 DR+
662 CC X-12,975 Y+16,5
663 C X-11,688 Y+16,5 DR+
664 CC X-13,025 Y+16,5
665 C X-14,363 Y+16,5 DR+
666 CC X-12,975 Y+16,5
667 C X-11,588 Y+16,5 DR+
668 CC X-13,025 Y+16,5
669 C X-14,463 Y+16,5 DR+
670 CC X-12,975 Y+16,5
671 C X-11,488 Y+16,5 DR+
672 CC X-13,025 Y+16,5
673 C X-14,563 Y+16,5 DR+
674 CC X-12,975 Y+16,5
675 C X-11,388 Y+16,5 DR+
676 CC X-13,025 Y+16,5
677 C X-14,663 Y+16,5 DR+
678 CC X-12,975 Y+16,5
679 C X-11,288 Y+16,5 DR+
680 CC X-13,025 Y+16,5
681 C X-14,763 Y+16,5 DR+
682 CC X-12,975 Y+16,5
683 C X-11,188 Y+16,5 DR+
684 CC X-13,025 Y+16,5
685 C X-14,863 Y+16,5 DR+
686 CC X-12,975 Y+16,5
687 C X-11,088 Y+16,5 DR+
688 CC X-13,025 Y+16,5
689 C X-14,963 Y+16,5 DR+
690 CC X-12,975 Y+16,5
691 C X-10,988 Y+16,5 DR+
692 CC X-13,025 Y+16,5
693 C X-15,063 Y+16,5 DR+
694 CC X-12,975 Y+16,5
695 C X-10,888 Y+16,5 DR+
696 CC X-13,025 Y+16,5
697 C X-15,163 Y+16,5 DR+
698 CC X-12,975 Y+16,5
699 C X-10,788 Y+16,5 DR+
700 CC X-13,025 Y+16,5
701 C X-15,263 Y+16,5 DR+
702 CC X-12,975 Y+16,5
703 C X-10,688 Y+16,5 DR+
704 CC X-13,025 Y+16,5
705 C X-15,363 Y+16,5 DR+
706 CC X-12,975 Y+16,5
707 C X-10,588 Y+16,5 DR+
708 CC X-13,025 Y+16,5
709 C X-15,463 Y+16,5 DR+
710 CC X-12,975 Y+16,5
711 C X-11,741 Y+14,34 DR+
712 CC X-13 Y+16,5
713 C X-10,5 Y+16,5 DR+
714 CC X-13 Y+16,5
715 C X-11,741 Y+14,34 DR+
716 L X-13 Y+16,5
717 TOOL CALL 19 Z S7427 DR-3
718 L X-14,3 Y+17,1 Z-13 RL
719 L X-14,9
720 CC X-14,9 Y+16,5
721 C X-15,5 Y+16,5 DR+
722 CC X-13 Y+16,5
723 C X-10,5 Y+16,5 DR+
724 CC X-13 Y+16,5
725 C X-15,5 Y+16,5 DR+
726 CC X-13 Y+16,5
727 C X-15,303 Y+15,526 DR+
728 CC X-13 Y+16,5
729 C X-10,5 Y+16,5 DR+
730 CC X-13 Y+16,5
731 C X-15,5 Y+16,5 DR+
732 CC X-13 Y+16,5
733 C X-15,303 Y+15,526 DR+
734 CC X-14,75 Y+15,76
735 C X-14,516 Y+15,207 DR+
736 L X-13,964 Y+15,441
737 L X-13 Y+16,5 R0
738 L Z+50 FMAX
739 M9
740 M5
741 L Z-1 FMAX M91
742 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
743 TOOL CALL 28 Z S100 DR+0
744 TOOL DEF 1
745 L X-13 Y+16,5 FMAX M3
746 L Z+50 FMAX M8
747 ;  TARAUDAGE
748 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=-13 ; COORD. SURFACE PIECE~
    Q204=+63 ; SAUT DE BRIDE
749 L X-13 Y+16,5 FMAX M99
750 M9
751 M5
752 L Z-1 FMAX M91
753 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
754 TOOL CALL 1 Z S1856 DR+0
755 TOOL DEF 20
756 L X+0 Y-9,5 FMAX M3
757 L Z+50 FMAX M8
758 ;  POINTAGE-PERCAGE
759 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
760 L X+0 Y-9,5 FMAX M99
761 M9
762 M5
763 L Z-1 FMAX M91
764 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
765 TOOL CALL 20 Z S3800 DR+0
766 TOOL DEF 18
767 L X+0 Y-9,5 FMAX M3
768 L Z+50 FMAX M8
769 ;  DEBOURRAGE
770 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-38 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
771 L X+0 Y-9,5 FMAX M99
772 M9
773 M5
774 L Z-1 FMAX M91
775 L Y-1 FMAX M91
776 M30
777 END PGM REP16-20161-INSERT MATRICE-A MM
