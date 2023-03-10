0 BEGIN PGM REP26-CASSETTE-1-MATRICE-E MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP26-CASSETTE-1-MATRICE-E
4 ; PROG-CN DU 17-12-19 A 14:26
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
12 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-2*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 4
20 L X-45 Y+25,5 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-45 Y+25,5 FMAX M99
25 L X+45 FMAX M99
26 L X+20 Y-25,5 FMAX M99
27 L Z+50 FMAX
28 M9
29 M5
30 L Z-1 FMAX M91
31 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
32 TOOL CALL 4 Z S1400 DR+0
33 TOOL DEF 18
34 L X-45 Y+25,5 FMAX M3
35 L Z+50 FMAX M7
36 ;  DEBOURRAGE
37 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-46 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
38 L X-45 Y+25,5 FMAX M99
39 L X+45 FMAX M99
40 L X+20 Y-25,5 FMAX M99
41 L Z+50 FMAX
42 M9
43 M5
44 L Z-1 FMAX M91
45 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
46 ; CORRECTION AUCUNE
47 ; SUREP R 0. SUREP Z 0.
48 TOOL CALL 18 Z S1751 DR+0
49 TOOL DEF 1
50 L X-47,733 Y+26,736 FMAX M3
51 L Z+50 FMAX M25
52 L Z+2 FMAX
53 L Z+0,5 F500
54 CC X-45 Y+25,5
55 CP IPA-180 Z+0,171 DR-
56 CC X-45 Y+25,5
57 CP IPA-180 Z-0,158 DR-
58 CC X-45 Y+25,5
59 CP IPA-180 Z-0,487 DR-
60 CC X-45 Y+25,5
61 CP IPA-180 Z-0,816 DR-
62 CC X-45 Y+25,5
63 CP IPA-180 Z-1,146 DR-
64 CC X-45 Y+25,5
65 CP IPA-180 Z-1,475 DR-
66 CC X-45 Y+25,5
67 CP IPA-180 Z-1,804 DR-
68 CC X-45 Y+25,5
69 CP IPA-180 Z-2,133 DR-
70 CC X-45 Y+25,5
71 CP IPA-180 Z-2,462 DR-
72 CC X-45 Y+25,5
73 CP IPA-180 Z-2,791 DR-
74 CC X-45 Y+25,5
75 CP IPA-180 Z-3,12 DR-
76 CC X-45 Y+25,5
77 CP IPA-180 Z-3,449 DR-
78 CC X-45 Y+25,5
79 CP IPA-180 Z-3,778 DR-
80 CC X-45 Y+25,5
81 CP IPA-180 Z-4,108 DR-
82 CC X-45 Y+25,5
83 CP IPA-180 Z-4,437 DR-
84 CC X-45 Y+25,5
85 CP IPA-180 Z-4,766 DR-
86 CC X-45 Y+25,5
87 CP IPA-180 Z-5,095 DR-
88 CC X-45 Y+25,5
89 CP IPA-180 Z-5,424 DR-
90 CC X-45 Y+25,5
91 CP IPA-180 Z-5,753 DR-
92 CC X-45 Y+25,5
93 CP IPA-180 Z-6,082 DR-
94 CC X-45 Y+25,5
95 CP IPA-180 Z-6,412 DR-
96 CC X-45 Y+25,5
97 CP IPA-180 Z-6,741 DR-
98 CC X-45 Y+25,5
99 CP IPA-180 Z-7,07 DR-
100 CC X-45 Y+25,5
101 CP IPA-180 Z-7,399 DR-
102 CC X-45 Y+25,5
103 CP IPA-180 Z-7,728 DR-
104 CC X-45 Y+25,5
105 CP IPA-180 Z-8,057 DR-
106 CC X-45 Y+25,5
107 CP IPA-180 Z-8,386 DR-
108 CC X-45 Y+25,5
109 CP IPA-180 Z-8,715 DR-
110 CC X-45 Y+25,5
111 CP IPA-155,665 Z-9 DR-
112 L X-44 Y+25,5 F315
113 CC X-47 Y+25,5
114 C X-47,75 Y+28,405 DR+
115 CC X-45 Y+25,5
116 C X-41 Y+25,5 DR+
117 CC X-45 Y+25,5
118 C X-47,75 Y+28,405 DR+
119 L Z+10 FMAX
120 L X-47,733 Y+26,736 FMAX
121 L Z-7 FMAX
122 L Z-8,5 F500
123 CC X-45 Y+25,5
124 CP IPA-180 Z-8,829 DR-
125 CC X-45 Y+25,5
126 CP IPA-180 Z-9,158 DR-
127 CC X-45 Y+25,5
128 CP IPA-180 Z-9,487 DR-
129 CC X-45 Y+25,5
130 CP IPA-180 Z-9,816 DR-
131 CC X-45 Y+25,5
132 CP IPA-180 Z-10,146 DR-
133 CC X-45 Y+25,5
134 CP IPA-180 Z-10,475 DR-
135 CC X-45 Y+25,5
136 CP IPA-180 Z-10,804 DR-
137 CC X-45 Y+25,5
138 CP IPA-180 Z-11,133 DR-
139 CC X-45 Y+25,5
140 CP IPA-180 Z-11,462 DR-
141 CC X-45 Y+25,5
142 CP IPA-180 Z-11,791 DR-
143 CC X-45 Y+25,5
144 CP IPA-180 Z-12,12 DR-
145 CC X-45 Y+25,5
146 CP IPA-180 Z-12,449 DR-
147 CC X-45 Y+25,5
148 CP IPA-180 Z-12,779 DR-
149 CC X-45 Y+25,5
150 CP IPA-180 Z-13,108 DR-
151 CC X-45 Y+25,5
152 CP IPA-180 Z-13,437 DR-
153 CC X-45 Y+25,5
154 CP IPA-180 Z-13,766 DR-
155 CC X-45 Y+25,5
156 CP IPA-180 Z-14,095 DR-
157 CC X-45 Y+25,5
158 CP IPA-180 Z-14,424 DR-
159 CC X-45 Y+25,5
160 CP IPA-180 Z-14,753 DR-
161 CC X-45 Y+25,5
162 CP IPA-180 Z-15,082 DR-
163 CC X-45 Y+25,5
164 CP IPA-180 Z-15,412 DR-
165 CC X-45 Y+25,5
166 CP IPA-180 Z-15,741 DR-
167 CC X-45 Y+25,5
168 CP IPA-180 Z-16,07 DR-
169 CC X-45 Y+25,5
170 CP IPA-180 Z-16,399 DR-
171 CC X-45 Y+25,5
172 CP IPA-180 Z-16,728 DR-
173 CC X-45 Y+25,5
174 CP IPA-180 Z-17,057 DR-
175 CC X-45 Y+25,5
176 CP IPA-180 Z-17,386 DR-
177 CC X-45 Y+25,5
178 CP IPA-180 Z-17,715 DR-
179 CC X-45 Y+25,5
180 CP IPA-155,665 Z-18 DR-
181 L X-44 Y+25,5 F315
182 CC X-47 Y+25,5
183 C X-47,75 Y+28,405 DR+
184 CC X-45 Y+25,5
185 C X-41 Y+25,5 DR+
186 CC X-45 Y+25,5
187 C X-47,75 Y+28,405 DR+
188 L Z+50 FMAX
189 L X+42,267 Y+26,736 FMAX
190 L Z+2 FMAX
191 L Z+0,5 F500
192 CC X+45 Y+25,5
193 CP IPA-180 Z+0,171 DR-
194 CC X+45 Y+25,5
195 CP IPA-180 Z-0,158 DR-
196 CC X+45 Y+25,5
197 CP IPA-180 Z-0,487 DR-
198 CC X+45 Y+25,5
199 CP IPA-180 Z-0,816 DR-
200 CC X+45 Y+25,5
201 CP IPA-180 Z-1,146 DR-
202 CC X+45 Y+25,5
203 CP IPA-180 Z-1,475 DR-
204 CC X+45 Y+25,5
205 CP IPA-180 Z-1,804 DR-
206 CC X+45 Y+25,5
207 CP IPA-180 Z-2,133 DR-
208 CC X+45 Y+25,5
209 CP IPA-180 Z-2,462 DR-
210 CC X+45 Y+25,5
211 CP IPA-180 Z-2,791 DR-
212 CC X+45 Y+25,5
213 CP IPA-180 Z-3,12 DR-
214 CC X+45 Y+25,5
215 CP IPA-180 Z-3,449 DR-
216 CC X+45 Y+25,5
217 CP IPA-180 Z-3,778 DR-
218 CC X+45 Y+25,5
219 CP IPA-180 Z-4,108 DR-
220 CC X+45 Y+25,5
221 CP IPA-180 Z-4,437 DR-
222 CC X+45 Y+25,5
223 CP IPA-180 Z-4,766 DR-
224 CC X+45 Y+25,5
225 CP IPA-180 Z-5,095 DR-
226 CC X+45 Y+25,5
227 CP IPA-180 Z-5,424 DR-
228 CC X+45 Y+25,5
229 CP IPA-180 Z-5,753 DR-
230 CC X+45 Y+25,5
231 CP IPA-180 Z-6,082 DR-
232 CC X+45 Y+25,5
233 CP IPA-180 Z-6,412 DR-
234 CC X+45 Y+25,5
235 CP IPA-180 Z-6,741 DR-
236 CC X+45 Y+25,5
237 CP IPA-180 Z-7,07 DR-
238 CC X+45 Y+25,5
239 CP IPA-180 Z-7,399 DR-
240 CC X+45 Y+25,5
241 CP IPA-180 Z-7,728 DR-
242 CC X+45 Y+25,5
243 CP IPA-180 Z-8,057 DR-
244 CC X+45 Y+25,5
245 CP IPA-180 Z-8,386 DR-
246 CC X+45 Y+25,5
247 CP IPA-180 Z-8,715 DR-
248 CC X+45 Y+25,5
249 CP IPA-155,665 Z-9 DR-
250 L X+46 Y+25,5 F315
251 CC X+43 Y+25,5
252 C X+42,25 Y+28,405 DR+
253 CC X+45 Y+25,5
254 C X+49 Y+25,5 DR+
255 CC X+45 Y+25,5
256 C X+42,25 Y+28,405 DR+
257 L Z+10 FMAX
258 L X+42,267 Y+26,736 FMAX
259 L Z-7 FMAX
260 L Z-8,5 F500
261 CC X+45 Y+25,5
262 CP IPA-180 Z-8,829 DR-
263 CC X+45 Y+25,5
264 CP IPA-180 Z-9,158 DR-
265 CC X+45 Y+25,5
266 CP IPA-180 Z-9,487 DR-
267 CC X+45 Y+25,5
268 CP IPA-180 Z-9,816 DR-
269 CC X+45 Y+25,5
270 CP IPA-180 Z-10,146 DR-
271 CC X+45 Y+25,5
272 CP IPA-180 Z-10,475 DR-
273 CC X+45 Y+25,5
274 CP IPA-180 Z-10,804 DR-
275 CC X+45 Y+25,5
276 CP IPA-180 Z-11,133 DR-
277 CC X+45 Y+25,5
278 CP IPA-180 Z-11,462 DR-
279 CC X+45 Y+25,5
280 CP IPA-180 Z-11,791 DR-
281 CC X+45 Y+25,5
282 CP IPA-180 Z-12,12 DR-
283 CC X+45 Y+25,5
284 CP IPA-180 Z-12,449 DR-
285 CC X+45 Y+25,5
286 CP IPA-180 Z-12,779 DR-
287 CC X+45 Y+25,5
288 CP IPA-180 Z-13,108 DR-
289 CC X+45 Y+25,5
290 CP IPA-180 Z-13,437 DR-
291 CC X+45 Y+25,5
292 CP IPA-180 Z-13,766 DR-
293 CC X+45 Y+25,5
294 CP IPA-180 Z-14,095 DR-
295 CC X+45 Y+25,5
296 CP IPA-180 Z-14,424 DR-
297 CC X+45 Y+25,5
298 CP IPA-180 Z-14,753 DR-
299 CC X+45 Y+25,5
300 CP IPA-180 Z-15,082 DR-
301 CC X+45 Y+25,5
302 CP IPA-180 Z-15,412 DR-
303 CC X+45 Y+25,5
304 CP IPA-180 Z-15,741 DR-
305 CC X+45 Y+25,5
306 CP IPA-180 Z-16,07 DR-
307 CC X+45 Y+25,5
308 CP IPA-180 Z-16,399 DR-
309 CC X+45 Y+25,5
310 CP IPA-180 Z-16,728 DR-
311 CC X+45 Y+25,5
312 CP IPA-180 Z-17,057 DR-
313 CC X+45 Y+25,5
314 CP IPA-180 Z-17,386 DR-
315 CC X+45 Y+25,5
316 CP IPA-180 Z-17,715 DR-
317 CC X+45 Y+25,5
318 CP IPA-155,665 Z-18 DR-
319 L X+46 Y+25,5 F315
320 CC X+43 Y+25,5
321 C X+42,25 Y+28,405 DR+
322 CC X+45 Y+25,5
323 C X+49 Y+25,5 DR+
324 CC X+45 Y+25,5
325 C X+42,25 Y+28,405 DR+
326 L Z+50 FMAX
327 L X+17,267 Y-24,264 FMAX
328 L Z+2 FMAX
329 L Z+0,5 F500
330 CC X+20 Y-25,5
331 CP IPA-180 Z+0,171 DR-
332 CC X+20 Y-25,5
333 CP IPA-180 Z-0,158 DR-
334 CC X+20 Y-25,5
335 CP IPA-180 Z-0,487 DR-
336 CC X+20 Y-25,5
337 CP IPA-180 Z-0,816 DR-
338 CC X+20 Y-25,5
339 CP IPA-180 Z-1,146 DR-
340 CC X+20 Y-25,5
341 CP IPA-180 Z-1,475 DR-
342 CC X+20 Y-25,5
343 CP IPA-180 Z-1,804 DR-
344 CC X+20 Y-25,5
345 CP IPA-180 Z-2,133 DR-
346 CC X+20 Y-25,5
347 CP IPA-180 Z-2,462 DR-
348 CC X+20 Y-25,5
349 CP IPA-180 Z-2,791 DR-
350 CC X+20 Y-25,5
351 CP IPA-180 Z-3,12 DR-
352 CC X+20 Y-25,5
353 CP IPA-180 Z-3,449 DR-
354 CC X+20 Y-25,5
355 CP IPA-180 Z-3,778 DR-
356 CC X+20 Y-25,5
357 CP IPA-180 Z-4,108 DR-
358 CC X+20 Y-25,5
359 CP IPA-180 Z-4,437 DR-
360 CC X+20 Y-25,5
361 CP IPA-180 Z-4,766 DR-
362 CC X+20 Y-25,5
363 CP IPA-180 Z-5,095 DR-
364 CC X+20 Y-25,5
365 CP IPA-180 Z-5,424 DR-
366 CC X+20 Y-25,5
367 CP IPA-180 Z-5,753 DR-
368 CC X+20 Y-25,5
369 CP IPA-180 Z-6,082 DR-
370 CC X+20 Y-25,5
371 CP IPA-180 Z-6,412 DR-
372 CC X+20 Y-25,5
373 CP IPA-180 Z-6,741 DR-
374 CC X+20 Y-25,5
375 CP IPA-180 Z-7,07 DR-
376 CC X+20 Y-25,5
377 CP IPA-180 Z-7,399 DR-
378 CC X+20 Y-25,5
379 CP IPA-180 Z-7,728 DR-
380 CC X+20 Y-25,5
381 CP IPA-180 Z-8,057 DR-
382 CC X+20 Y-25,5
383 CP IPA-180 Z-8,386 DR-
384 CC X+20 Y-25,5
385 CP IPA-180 Z-8,715 DR-
386 CC X+20 Y-25,5
387 CP IPA-155,665 Z-9 DR-
388 L X+21 Y-25,5 F315
389 CC X+18 Y-25,5
390 C X+17,25 Y-22,595 DR+
391 CC X+20 Y-25,5
392 C X+24 Y-25,5 DR+
393 CC X+20 Y-25,5
394 C X+17,25 Y-22,595 DR+
395 L Z+10 FMAX
396 L X+17,267 Y-24,264 FMAX
397 L Z-7 FMAX
398 L Z-8,5 F500
399 CC X+20 Y-25,5
400 CP IPA-180 Z-8,829 DR-
401 CC X+20 Y-25,5
402 CP IPA-180 Z-9,158 DR-
403 CC X+20 Y-25,5
404 CP IPA-180 Z-9,487 DR-
405 CC X+20 Y-25,5
406 CP IPA-180 Z-9,816 DR-
407 CC X+20 Y-25,5
408 CP IPA-180 Z-10,146 DR-
409 CC X+20 Y-25,5
410 CP IPA-180 Z-10,475 DR-
411 CC X+20 Y-25,5
412 CP IPA-180 Z-10,804 DR-
413 CC X+20 Y-25,5
414 CP IPA-180 Z-11,133 DR-
415 CC X+20 Y-25,5
416 CP IPA-180 Z-11,462 DR-
417 CC X+20 Y-25,5
418 CP IPA-180 Z-11,791 DR-
419 CC X+20 Y-25,5
420 CP IPA-180 Z-12,12 DR-
421 CC X+20 Y-25,5
422 CP IPA-180 Z-12,449 DR-
423 CC X+20 Y-25,5
424 CP IPA-180 Z-12,779 DR-
425 CC X+20 Y-25,5
426 CP IPA-180 Z-13,108 DR-
427 CC X+20 Y-25,5
428 CP IPA-180 Z-13,437 DR-
429 CC X+20 Y-25,5
430 CP IPA-180 Z-13,766 DR-
431 CC X+20 Y-25,5
432 CP IPA-180 Z-14,095 DR-
433 CC X+20 Y-25,5
434 CP IPA-180 Z-14,424 DR-
435 CC X+20 Y-25,5
436 CP IPA-180 Z-14,753 DR-
437 CC X+20 Y-25,5
438 CP IPA-180 Z-15,082 DR-
439 CC X+20 Y-25,5
440 CP IPA-180 Z-15,412 DR-
441 CC X+20 Y-25,5
442 CP IPA-180 Z-15,741 DR-
443 CC X+20 Y-25,5
444 CP IPA-180 Z-16,07 DR-
445 CC X+20 Y-25,5
446 CP IPA-180 Z-16,399 DR-
447 CC X+20 Y-25,5
448 CP IPA-180 Z-16,728 DR-
449 CC X+20 Y-25,5
450 CP IPA-180 Z-17,057 DR-
451 CC X+20 Y-25,5
452 CP IPA-180 Z-17,386 DR-
453 CC X+20 Y-25,5
454 CP IPA-180 Z-17,715 DR-
455 CC X+20 Y-25,5
456 CP IPA-155,665 Z-18 DR-
457 L X+21 Y-25,5 F315
458 CC X+18 Y-25,5
459 C X+17,25 Y-22,595 DR+
460 CC X+20 Y-25,5
461 C X+24 Y-25,5 DR+
462 CC X+20 Y-25,5
463 C X+17,25 Y-22,595 DR+
464 L Z+50 FMAX
465 TOOL CALL 18 Z S1751 DR-5
466 L X-45 Y+25,5 Z+50 FMAX
467 L Z-7 FMAX
468 L Z-18 F500
469 L X-47 Y+26,5 RL F315
470 L X-48
471 CC X-48 Y+25,5
472 C X-49 Y+25,5 DR+
473 CC X-45 Y+25,5
474 C X-41 Y+25,5 DR+
475 CC X-45 Y+25,5
476 C X-49 Y+25,5 DR+
477 CC X-45 Y+25,5
478 C X-48,876 Y+24,51 DR+
479 CC X-45 Y+25,5
480 C X-41 Y+25,5 DR+
481 CC X-45 Y+25,5
482 C X-49 Y+25,5 DR+
483 CC X-45 Y+25,5
484 C X-48,876 Y+24,51 DR+
485 CC X-47,907 Y+24,758
486 C X-47,659 Y+23,789 DR+
487 L X-46,69 Y+24,036
488 L X-45 Y+25,5 R0
489 L Z+50 FMAX
490 L X+45 FMAX
491 L Z-7 FMAX
492 L Z-18 F500
493 L X+43 Y+26,5 RL F315
494 L X+42
495 CC X+42 Y+25,5
496 C X+41 Y+25,5 DR+
497 CC X+45 Y+25,5
498 C X+49 Y+25,5 DR+
499 CC X+45 Y+25,5
500 C X+41 Y+25,5 DR+
501 CC X+45 Y+25,5
502 C X+41,124 Y+24,51 DR+
503 CC X+45 Y+25,5
504 C X+49 Y+25,5 DR+
505 CC X+45 Y+25,5
506 C X+41 Y+25,5 DR+
507 CC X+45 Y+25,5
508 C X+41,124 Y+24,51 DR+
509 CC X+42,093 Y+24,758
510 C X+42,341 Y+23,789 DR+
511 L X+43,31 Y+24,036
512 L X+45 Y+25,5 R0
513 L Z+50 FMAX
514 L X+20 Y-25,5 FMAX
515 L Z-7 FMAX
516 L Z-18 F500
517 L X+18 Y-24,5 RL F315
518 L X+17
519 CC X+17 Y-25,5
520 C X+16 Y-25,5 DR+
521 CC X+20 Y-25,5
522 C X+24 Y-25,5 DR+
523 CC X+20 Y-25,5
524 C X+16 Y-25,5 DR+
525 CC X+20 Y-25,5
526 C X+16,124 Y-26,49 DR+
527 CC X+20 Y-25,5
528 C X+24 Y-25,5 DR+
529 CC X+20 Y-25,5
530 C X+16 Y-25,5 DR+
531 CC X+20 Y-25,5
532 C X+16,124 Y-26,49 DR+
533 CC X+17,093 Y-26,242
534 C X+17,341 Y-27,211 DR+
535 L X+18,31 Y-26,964
536 L X+20 Y-25,5 R0
537 L Z+50 FMAX
538 M78
539 M5
540 L Z-1 FMAX M91
541 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
542 ; CORRECTION USURE GAUCHE
543 ; SUREP R 0. SUREP Z 0.
544 TOOL CALL 1 Z S6000 DR-2,5
545 TOOL DEF 2
546 L X-45 Y+25,5 FMAX M3
547 L Z+50 FMAX
548 L Z+2 FMAX
549 L Z-2,5 F800
550 L X-50,5 Y+26 RL F1200
551 L X-51
552 CC X-51 Y+25,5
553 C X-51,5 Y+25,5 DR+
554 CC X-45 Y+25,5
555 C X-38,5 Y+25,5 DR+
556 CC X-45 Y+25,5
557 C X-51,5 Y+25,5 DR+
558 CC X-45 Y+25,5
559 C X-51,423 Y+24,504 DR+
560 CC X-50,929 Y+24,581
561 C X-50,853 Y+24,086 DR+
562 L X-50,358 Y+24,163
563 L X-45 Y+25,5 R0
564 L Z+50 FMAX
565 L X+45 FMAX
566 L Z+2 FMAX
567 L Z-2,5 F800
568 L X+39,5 Y+26 RL F1200
569 L X+39
570 CC X+39 Y+25,5
571 C X+38,5 Y+25,5 DR+
572 CC X+45 Y+25,5
573 C X+51,5 Y+25,5 DR+
574 CC X+45 Y+25,5
575 C X+38,5 Y+25,5 DR+
576 CC X+45 Y+25,5
577 C X+38,577 Y+24,504 DR+
578 CC X+39,071 Y+24,581
579 C X+39,147 Y+24,086 DR+
580 L X+39,642 Y+24,163
581 L X+45 Y+25,5 R0
582 L Z+50 FMAX
583 L X+20 Y-25,5 FMAX
584 L Z+2 FMAX
585 L Z-2,5 F800
586 L X+14,5 Y-25 RL F1200
587 L X+14
588 CC X+14 Y-25,5
589 C X+13,5 Y-25,5 DR+
590 CC X+20 Y-25,5
591 C X+26,5 Y-25,5 DR+
592 CC X+20 Y-25,5
593 C X+13,5 Y-25,5 DR+
594 CC X+20 Y-25,5
595 C X+13,577 Y-26,496 DR+
596 CC X+14,071 Y-26,419
597 C X+14,147 Y-26,914 DR+
598 L X+14,642 Y-26,837
599 L X+20 Y-25,5 R0
600 L Z+50 FMAX
601 M5
602 L Z-1 FMAX M91
603 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
604 TOOL CALL 1 Z S1856 DR+0
605 TOOL DEF 2
606 L X-45 Y+5,5 FMAX M3
607 L Z+50 FMAX M8
608 ;  POINTAGE-PERCAGE
609 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
610 L X-45 Y+5,5 FMAX M99
611 L X+45 Y-25,5 FMAX M99
612 L Z+50 FMAX
613 M9
614 M5
615 L Z-1 FMAX M91
616 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
617 TOOL CALL 2 Z S2000 DR+0
618 TOOL DEF 18
619 L X-45 Y+5,5 FMAX M3
620 L Z+50 FMAX M7
621 ;  DEBOURRAGE
622 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-46 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
623 L X-45 Y+5,5 FMAX M99
624 L X+45 Y-25,5 FMAX M99
625 L Z+50 FMAX
626 M9
627 M5
628 L Z-1 FMAX M91
629 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
630 ; CORRECTION USURE GAUCHE
631 ; SUREP R 0. SUREP Z 0.
632 TOOL CALL 18 Z S1751 DR-5
633 TOOL DEF 1
634 L X+58,021 Y+58,521 FMAX M3
635 L Z+50 FMAX M25
636 L Z+2 FMAX
637 L Z-11 F500
638 L Y+52,521 RL F315
639 CC X+62,021 Y+52,521
640 C X+59,192 Y+49,692 DR+
641 L X+69,192 Y+39,692
642 CC X+72,021 Y+42,521
643 C X+72,021 Y+38,521 DR+
644 L X+78,021 R0
645 L Z+10 FMAX
646 L X+55,192 Y+55,692 FMAX
647 L Z+2 FMAX
648 L Z-11 F500
649 L Y+49,692 RL F315
650 CC X+59,192 Y+49,692
651 C X+56,364 Y+46,864 DR+
652 L X+66,364 Y+36,864
653 CC X+69,192 Y+39,692
654 C X+69,192 Y+35,692 DR+
655 L X+75,192 R0
656 L Z+10 FMAX
657 L X+52,364 Y+52,864 FMAX
658 L Z+2 FMAX
659 L Z-11 F500
660 L Y+46,864 RL F315
661 CC X+56,364 Y+46,864
662 C X+53,536 Y+44,036 DR+
663 L X+63,536 Y+34,036
664 CC X+66,364 Y+36,864
665 C X+66,364 Y+32,864 DR+
666 L X+72,364 R0
667 L Z+10 FMAX
668 L X+58,021 Y+58,521 FMAX
669 L Z-9 FMAX
670 L Z-22 F500
671 L Y+52,521 RL F315
672 CC X+62,021 Y+52,521
673 C X+59,192 Y+49,692 DR+
674 L X+69,192 Y+39,692
675 CC X+72,021 Y+42,521
676 C X+72,021 Y+38,521 DR+
677 L X+78,021 R0
678 L Z+10 FMAX
679 L X+55,192 Y+55,692 FMAX
680 L Z-9 FMAX
681 L Z-22 F500
682 L Y+49,692 RL F315
683 CC X+59,192 Y+49,692
684 C X+56,364 Y+46,864 DR+
685 L X+66,364 Y+36,864
686 CC X+69,192 Y+39,692
687 C X+69,192 Y+35,692 DR+
688 L X+75,192 R0
689 L Z+10 FMAX
690 L X+52,364 Y+52,864 FMAX
691 L Z-9 FMAX
692 L Z-22 F500
693 L Y+46,864 RL F315
694 CC X+56,364 Y+46,864
695 C X+53,536 Y+44,036 DR+
696 L X+63,536 Y+34,036
697 CC X+66,364 Y+36,864
698 C X+66,364 Y+32,864 DR+
699 L X+72,364 R0
700 L Z+10 FMAX
701 L X+52,364 Y+52,864 FMAX
702 L Z-9 FMAX
703 L Z-22 F500
704 L Y+46,864 RL F315
705 CC X+56,364 Y+46,864
706 C X+53,536 Y+44,036 DR+
707 L X+63,536 Y+34,036
708 CC X+66,364 Y+36,864
709 C X+66,364 Y+32,864 DR+
710 L X+72,364 R0
711 L Z+10 FMAX
712 L X+52,364 Y+52,864 FMAX
713 L Z-9 FMAX
714 L Z-22 F500
715 L Y+46,864 RL F315
716 CC X+56,364 Y+46,864
717 C X+53,536 Y+44,036 DR+
718 L X+63,536 Y+34,036
719 CC X+66,364 Y+36,864
720 C X+66,364 Y+32,864 DR+
721 L X+72,364 R0
722 L Z+50 FMAX
723 M78
724 M5
725 L Z-1 FMAX M91
726 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
727 ; CORRECTION USURE GAUCHE
728 ; SUREP R 0. SUREP Z 0.
729 TOOL CALL 1 Z S6000 DR-2,5
730 TOOL DEF 20
731 L X-8,536 Y+45,707 FMAX M3
732 L Z+50 FMAX
733 L Z+2 FMAX
734 L Z-2,2 F800
735 L X-6,414 Y+43,586 RL F1200
736 CC X-5 Y+45
737 C X-5 Y+43 DR+
738 L X+50
739 CC X+50 Y+40,5
740 C X+51,768 Y+42,268 DR-
741 L X+61,768 Y+32,268
742 CC X+60 Y+30,5
743 C X+62,5 Y+30,5 DR-
744 L Y-40,5
745 CC X+60 Y-40,5
746 C X+60 Y-43 DR-
747 L X-60
748 CC X-60 Y-40,5
749 C X-62,5 Y-40,5 DR-
750 L Y+40,5
751 CC X-60 Y+40,5
752 C X-60 Y+43 DR-
753 L X-5
754 CC X-5 Y+45
755 C X-3,586 Y+43,586 DR+
756 L X-1,464 Y+45,707 R0
757 L Z+50 FMAX
758 M5
759 L Z-1 FMAX M91
760 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
761 TOOL CALL 1 Z S1856 DR+0
762 TOOL DEF 20
763 L X-0,432 Y+8,266 FMAX M3
764 L Z+50 FMAX M8
765 ;  POINTAGE-PERCAGE
766 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
767 L X-0,432 Y+8,266 FMAX M99
768 M9
769 M5
770 L Z-1 FMAX M91
771 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
772 TOOL CALL 20 Z S3800 DR+0
773 TOOL DEF 1
774 L X-0,432 Y+8,266 FMAX M3
775 L Z+50 FMAX M7
776 ;  DEBOURRAGE
777 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-46 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
778 L X-0,432 Y+8,266 FMAX M99
779 M9
780 M5
781 L Z-1 FMAX M91
782 L Y-1 FMAX M91
783 M30
784 END PGM REP26-CASSETTE-1-MATRICE-E MM
