0 BEGIN PGM REP77-MATRICE DECOUPE-D-21280 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP77-MATRICE DECOUPE-D-21280
4 ; PROG-CN DU 03-06-22 A 10:12
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
12 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
13 ; T8 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
14 ; FIN DE LISTE DES OUTILS
15 L R0 FMAX
16 L Z-1 FMAX M91
17 ; *GROUPE D'USINAGE-1*
18 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
19 TOOL CALL 1 Z S1856 DR+0
20 TOOL DEF 4
21 L X-105 Y-72,5 FMAX M3
22 L Z+50 FMAX M8
23 ;  POINTAGE-PERCAGE
24 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
25 L X-105 Y-72,5 FMAX M99
26 L Y+17,5 FMAX M99
27 L X-35 Y+72,5 FMAX M99
28 L X+35 FMAX M99
29 L X+105 Y+17,5 FMAX M99
30 L Y-72,5 FMAX M99
31 L Z+50 FMAX
32 M9
33 M5
34 L Z-1 FMAX M91
35 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
36 TOOL CALL 4 Z S1400 DR+0
37 TOOL DEF 18
38 L X-105 Y-72,5 FMAX M3
39 L Z+50 FMAX M7
40 ;  DEBOURRAGE
41 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-37 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
42 L X-105 Y-72,5 FMAX M99
43 L Y+17,5 FMAX M99
44 L X-35 Y+72,5 FMAX M99
45 L X+35 FMAX M99
46 L X+105 Y+17,5 FMAX M99
47 L Y-72,5 FMAX M99
48 L Z+50 FMAX
49 M9
50 M5
51 L Z-1 FMAX M91
52 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
53 ; CORRECTION AUCUNE
54 ; SUREP R 0. SUREP Z 0.
55 TOOL CALL 18 Z S1751 DR+0
56 TOOL DEF 1
57 L X-102,435 Y-74,056 FMAX M3
58 L Z+50 FMAX M25
59 L Z+2 FMAX
60 L Z+0,5 F500
61 CC X-105 Y-72,5
62 CP IPA-180 Z+0,171 DR-
63 CC X-105 Y-72,5
64 CP IPA-180 Z-0,158 DR-
65 CC X-105 Y-72,5
66 CP IPA-180 Z-0,487 DR-
67 CC X-105 Y-72,5
68 CP IPA-180 Z-0,816 DR-
69 CC X-105 Y-72,5
70 CP IPA-180 Z-1,146 DR-
71 CC X-105 Y-72,5
72 CP IPA-180 Z-1,475 DR-
73 CC X-105 Y-72,5
74 CP IPA-180 Z-1,804 DR-
75 CC X-105 Y-72,5
76 CP IPA-180 Z-2,133 DR-
77 CC X-105 Y-72,5
78 CP IPA-180 Z-2,462 DR-
79 CC X-105 Y-72,5
80 CP IPA-180 Z-2,791 DR-
81 CC X-105 Y-72,5
82 CP IPA-180 Z-3,12 DR-
83 CC X-105 Y-72,5
84 CP IPA-180 Z-3,449 DR-
85 CC X-105 Y-72,5
86 CP IPA-180 Z-3,778 DR-
87 CC X-105 Y-72,5
88 CP IPA-180 Z-4,108 DR-
89 CC X-105 Y-72,5
90 CP IPA-180 Z-4,437 DR-
91 CC X-105 Y-72,5
92 CP IPA-180 Z-4,766 DR-
93 CC X-105 Y-72,5
94 CP IPA-180 Z-5,095 DR-
95 CC X-105 Y-72,5
96 CP IPA-180 Z-5,424 DR-
97 CC X-105 Y-72,5
98 CP IPA-180 Z-5,753 DR-
99 CC X-105 Y-72,5
100 CP IPA-180 Z-6,082 DR-
101 CC X-105 Y-72,5
102 CP IPA-180 Z-6,412 DR-
103 CC X-105 Y-72,5
104 CP IPA-180 Z-6,741 DR-
105 CC X-105 Y-72,5
106 CP IPA-180 Z-7,07 DR-
107 CC X-105 Y-72,5
108 CP IPA-180 Z-7,399 DR-
109 CC X-105 Y-72,5
110 CP IPA-328,758 Z-8 DR-
111 L X-104,25 Y-72,5 F315
112 CC X-106,5 Y-72,5
113 C X-108,75 Y-72,5 DR+
114 CC X-103,5 Y-72,5
115 C X-108,104 Y-75,023 DR+
116 CC X-105 Y-72,5
117 C X-101 Y-72,5 DR+
118 CC X-105 Y-72,5
119 C X-108,104 Y-75,023 DR+
120 L Z+10 FMAX
121 L X-102,435 Y-74,056 FMAX
122 L Z-6 FMAX
123 L Z-7,5 F500
124 CC X-105 Y-72,5
125 CP IPA-180 Z-7,829 DR-
126 CC X-105 Y-72,5
127 CP IPA-180 Z-8,158 DR-
128 CC X-105 Y-72,5
129 CP IPA-180 Z-8,487 DR-
130 CC X-105 Y-72,5
131 CP IPA-180 Z-8,816 DR-
132 CC X-105 Y-72,5
133 CP IPA-180 Z-9,146 DR-
134 CC X-105 Y-72,5
135 CP IPA-180 Z-9,475 DR-
136 CC X-105 Y-72,5
137 CP IPA-180 Z-9,804 DR-
138 CC X-105 Y-72,5
139 CP IPA-180 Z-10,133 DR-
140 CC X-105 Y-72,5
141 CP IPA-180 Z-10,462 DR-
142 CC X-105 Y-72,5
143 CP IPA-180 Z-10,791 DR-
144 CC X-105 Y-72,5
145 CP IPA-180 Z-11,12 DR-
146 CC X-105 Y-72,5
147 CP IPA-180 Z-11,449 DR-
148 CC X-105 Y-72,5
149 CP IPA-180 Z-11,779 DR-
150 CC X-105 Y-72,5
151 CP IPA-180 Z-12,108 DR-
152 CC X-105 Y-72,5
153 CP IPA-180 Z-12,437 DR-
154 CC X-105 Y-72,5
155 CP IPA-180 Z-12,766 DR-
156 CC X-105 Y-72,5
157 CP IPA-180 Z-13,095 DR-
158 CC X-105 Y-72,5
159 CP IPA-180 Z-13,424 DR-
160 CC X-105 Y-72,5
161 CP IPA-180 Z-13,753 DR-
162 CC X-105 Y-72,5
163 CP IPA-180 Z-14,082 DR-
164 CC X-105 Y-72,5
165 CP IPA-180 Z-14,412 DR-
166 CC X-105 Y-72,5
167 CP IPA-180 Z-14,741 DR-
168 CC X-105 Y-72,5
169 CP IPA-180 Z-15,07 DR-
170 CC X-105 Y-72,5
171 CP IPA-180 Z-15,399 DR-
172 CC X-105 Y-72,5
173 CP IPA-328,758 Z-16 DR-
174 L X-104,25 Y-72,5 F315
175 CC X-106,5 Y-72,5
176 C X-108,75 Y-72,5 DR+
177 CC X-103,5 Y-72,5
178 C X-108,104 Y-75,023 DR+
179 CC X-105 Y-72,5
180 C X-101 Y-72,5 DR+
181 CC X-105 Y-72,5
182 C X-108,104 Y-75,023 DR+
183 L Z+50 FMAX
184 L X-102,435 Y+15,944 FMAX
185 L Z+2 FMAX
186 L Z+0,5 F500
187 CC X-105 Y+17,5
188 CP IPA-180 Z+0,171 DR-
189 CC X-105 Y+17,5
190 CP IPA-180 Z-0,158 DR-
191 CC X-105 Y+17,5
192 CP IPA-180 Z-0,487 DR-
193 CC X-105 Y+17,5
194 CP IPA-180 Z-0,816 DR-
195 CC X-105 Y+17,5
196 CP IPA-180 Z-1,146 DR-
197 CC X-105 Y+17,5
198 CP IPA-180 Z-1,475 DR-
199 CC X-105 Y+17,5
200 CP IPA-180 Z-1,804 DR-
201 CC X-105 Y+17,5
202 CP IPA-180 Z-2,133 DR-
203 CC X-105 Y+17,5
204 CP IPA-180 Z-2,462 DR-
205 CC X-105 Y+17,5
206 CP IPA-180 Z-2,791 DR-
207 CC X-105 Y+17,5
208 CP IPA-180 Z-3,12 DR-
209 CC X-105 Y+17,5
210 CP IPA-180 Z-3,449 DR-
211 CC X-105 Y+17,5
212 CP IPA-180 Z-3,778 DR-
213 CC X-105 Y+17,5
214 CP IPA-180 Z-4,108 DR-
215 CC X-105 Y+17,5
216 CP IPA-180 Z-4,437 DR-
217 CC X-105 Y+17,5
218 CP IPA-180 Z-4,766 DR-
219 CC X-105 Y+17,5
220 CP IPA-180 Z-5,095 DR-
221 CC X-105 Y+17,5
222 CP IPA-180 Z-5,424 DR-
223 CC X-105 Y+17,5
224 CP IPA-180 Z-5,753 DR-
225 CC X-105 Y+17,5
226 CP IPA-180 Z-6,082 DR-
227 CC X-105 Y+17,5
228 CP IPA-180 Z-6,412 DR-
229 CC X-105 Y+17,5
230 CP IPA-180 Z-6,741 DR-
231 CC X-105 Y+17,5
232 CP IPA-180 Z-7,07 DR-
233 CC X-105 Y+17,5
234 CP IPA-180 Z-7,399 DR-
235 CC X-105 Y+17,5
236 CP IPA-328,758 Z-8 DR-
237 L X-104,25 Y+17,5 F315
238 CC X-106,5 Y+17,5
239 C X-108,75 Y+17,5 DR+
240 CC X-103,5 Y+17,5
241 C X-108,104 Y+14,977 DR+
242 CC X-105 Y+17,5
243 C X-101 Y+17,5 DR+
244 CC X-105 Y+17,5
245 C X-108,104 Y+14,977 DR+
246 L Z+10 FMAX
247 L X-102,435 Y+15,944 FMAX
248 L Z-6 FMAX
249 L Z-7,5 F500
250 CC X-105 Y+17,5
251 CP IPA-180 Z-7,829 DR-
252 CC X-105 Y+17,5
253 CP IPA-180 Z-8,158 DR-
254 CC X-105 Y+17,5
255 CP IPA-180 Z-8,487 DR-
256 CC X-105 Y+17,5
257 CP IPA-180 Z-8,816 DR-
258 CC X-105 Y+17,5
259 CP IPA-180 Z-9,146 DR-
260 CC X-105 Y+17,5
261 CP IPA-180 Z-9,475 DR-
262 CC X-105 Y+17,5
263 CP IPA-180 Z-9,804 DR-
264 CC X-105 Y+17,5
265 CP IPA-180 Z-10,133 DR-
266 CC X-105 Y+17,5
267 CP IPA-180 Z-10,462 DR-
268 CC X-105 Y+17,5
269 CP IPA-180 Z-10,791 DR-
270 CC X-105 Y+17,5
271 CP IPA-180 Z-11,12 DR-
272 CC X-105 Y+17,5
273 CP IPA-180 Z-11,449 DR-
274 CC X-105 Y+17,5
275 CP IPA-180 Z-11,779 DR-
276 CC X-105 Y+17,5
277 CP IPA-180 Z-12,108 DR-
278 CC X-105 Y+17,5
279 CP IPA-180 Z-12,437 DR-
280 CC X-105 Y+17,5
281 CP IPA-180 Z-12,766 DR-
282 CC X-105 Y+17,5
283 CP IPA-180 Z-13,095 DR-
284 CC X-105 Y+17,5
285 CP IPA-180 Z-13,424 DR-
286 CC X-105 Y+17,5
287 CP IPA-180 Z-13,753 DR-
288 CC X-105 Y+17,5
289 CP IPA-180 Z-14,082 DR-
290 CC X-105 Y+17,5
291 CP IPA-180 Z-14,412 DR-
292 CC X-105 Y+17,5
293 CP IPA-180 Z-14,741 DR-
294 CC X-105 Y+17,5
295 CP IPA-180 Z-15,07 DR-
296 CC X-105 Y+17,5
297 CP IPA-180 Z-15,399 DR-
298 CC X-105 Y+17,5
299 CP IPA-328,758 Z-16 DR-
300 L X-104,25 Y+17,5 F315
301 CC X-106,5 Y+17,5
302 C X-108,75 Y+17,5 DR+
303 CC X-103,5 Y+17,5
304 C X-108,104 Y+14,977 DR+
305 CC X-105 Y+17,5
306 C X-101 Y+17,5 DR+
307 CC X-105 Y+17,5
308 C X-108,104 Y+14,977 DR+
309 L Z+50 FMAX
310 L X-32,435 Y+70,944 FMAX
311 L Z+2 FMAX
312 L Z+0,5 F500
313 CC X-35 Y+72,5
314 CP IPA-180 Z+0,171 DR-
315 CC X-35 Y+72,5
316 CP IPA-180 Z-0,158 DR-
317 CC X-35 Y+72,5
318 CP IPA-180 Z-0,487 DR-
319 CC X-35 Y+72,5
320 CP IPA-180 Z-0,816 DR-
321 CC X-35 Y+72,5
322 CP IPA-180 Z-1,146 DR-
323 CC X-35 Y+72,5
324 CP IPA-180 Z-1,475 DR-
325 CC X-35 Y+72,5
326 CP IPA-180 Z-1,804 DR-
327 CC X-35 Y+72,5
328 CP IPA-180 Z-2,133 DR-
329 CC X-35 Y+72,5
330 CP IPA-180 Z-2,462 DR-
331 CC X-35 Y+72,5
332 CP IPA-180 Z-2,791 DR-
333 CC X-35 Y+72,5
334 CP IPA-180 Z-3,12 DR-
335 CC X-35 Y+72,5
336 CP IPA-180 Z-3,449 DR-
337 CC X-35 Y+72,5
338 CP IPA-180 Z-3,778 DR-
339 CC X-35 Y+72,5
340 CP IPA-180 Z-4,108 DR-
341 CC X-35 Y+72,5
342 CP IPA-180 Z-4,437 DR-
343 CC X-35 Y+72,5
344 CP IPA-180 Z-4,766 DR-
345 CC X-35 Y+72,5
346 CP IPA-180 Z-5,095 DR-
347 CC X-35 Y+72,5
348 CP IPA-180 Z-5,424 DR-
349 CC X-35 Y+72,5
350 CP IPA-180 Z-5,753 DR-
351 CC X-35 Y+72,5
352 CP IPA-180 Z-6,082 DR-
353 CC X-35 Y+72,5
354 CP IPA-180 Z-6,412 DR-
355 CC X-35 Y+72,5
356 CP IPA-180 Z-6,741 DR-
357 CC X-35 Y+72,5
358 CP IPA-180 Z-7,07 DR-
359 CC X-35 Y+72,5
360 CP IPA-180 Z-7,399 DR-
361 CC X-35 Y+72,5
362 CP IPA-328,758 Z-8 DR-
363 L X-34,25 Y+72,5 F315
364 CC X-36,5 Y+72,5
365 C X-38,75 Y+72,5 DR+
366 CC X-33,5 Y+72,5
367 C X-38,104 Y+69,977 DR+
368 CC X-35 Y+72,5
369 C X-31 Y+72,5 DR+
370 CC X-35 Y+72,5
371 C X-38,104 Y+69,977 DR+
372 L Z+10 FMAX
373 L X-32,435 Y+70,944 FMAX
374 L Z-6 FMAX
375 L Z-7,5 F500
376 CC X-35 Y+72,5
377 CP IPA-180 Z-7,829 DR-
378 CC X-35 Y+72,5
379 CP IPA-180 Z-8,158 DR-
380 CC X-35 Y+72,5
381 CP IPA-180 Z-8,487 DR-
382 CC X-35 Y+72,5
383 CP IPA-180 Z-8,816 DR-
384 CC X-35 Y+72,5
385 CP IPA-180 Z-9,146 DR-
386 CC X-35 Y+72,5
387 CP IPA-180 Z-9,475 DR-
388 CC X-35 Y+72,5
389 CP IPA-180 Z-9,804 DR-
390 CC X-35 Y+72,5
391 CP IPA-180 Z-10,133 DR-
392 CC X-35 Y+72,5
393 CP IPA-180 Z-10,462 DR-
394 CC X-35 Y+72,5
395 CP IPA-180 Z-10,791 DR-
396 CC X-35 Y+72,5
397 CP IPA-180 Z-11,12 DR-
398 CC X-35 Y+72,5
399 CP IPA-180 Z-11,449 DR-
400 CC X-35 Y+72,5
401 CP IPA-180 Z-11,779 DR-
402 CC X-35 Y+72,5
403 CP IPA-180 Z-12,108 DR-
404 CC X-35 Y+72,5
405 CP IPA-180 Z-12,437 DR-
406 CC X-35 Y+72,5
407 CP IPA-180 Z-12,766 DR-
408 CC X-35 Y+72,5
409 CP IPA-180 Z-13,095 DR-
410 CC X-35 Y+72,5
411 CP IPA-180 Z-13,424 DR-
412 CC X-35 Y+72,5
413 CP IPA-180 Z-13,753 DR-
414 CC X-35 Y+72,5
415 CP IPA-180 Z-14,082 DR-
416 CC X-35 Y+72,5
417 CP IPA-180 Z-14,412 DR-
418 CC X-35 Y+72,5
419 CP IPA-180 Z-14,741 DR-
420 CC X-35 Y+72,5
421 CP IPA-180 Z-15,07 DR-
422 CC X-35 Y+72,5
423 CP IPA-180 Z-15,399 DR-
424 CC X-35 Y+72,5
425 CP IPA-328,758 Z-16 DR-
426 L X-34,25 Y+72,5 F315
427 CC X-36,5 Y+72,5
428 C X-38,75 Y+72,5 DR+
429 CC X-33,5 Y+72,5
430 C X-38,104 Y+69,977 DR+
431 CC X-35 Y+72,5
432 C X-31 Y+72,5 DR+
433 CC X-35 Y+72,5
434 C X-38,104 Y+69,977 DR+
435 L Z+50 FMAX
436 L X+37,565 Y+70,944 FMAX
437 L Z+2 FMAX
438 L Z+0,5 F500
439 CC X+35 Y+72,5
440 CP IPA-180 Z+0,171 DR-
441 CC X+35 Y+72,5
442 CP IPA-180 Z-0,158 DR-
443 CC X+35 Y+72,5
444 CP IPA-180 Z-0,487 DR-
445 CC X+35 Y+72,5
446 CP IPA-180 Z-0,816 DR-
447 CC X+35 Y+72,5
448 CP IPA-180 Z-1,146 DR-
449 CC X+35 Y+72,5
450 CP IPA-180 Z-1,475 DR-
451 CC X+35 Y+72,5
452 CP IPA-180 Z-1,804 DR-
453 CC X+35 Y+72,5
454 CP IPA-180 Z-2,133 DR-
455 CC X+35 Y+72,5
456 CP IPA-180 Z-2,462 DR-
457 CC X+35 Y+72,5
458 CP IPA-180 Z-2,791 DR-
459 CC X+35 Y+72,5
460 CP IPA-180 Z-3,12 DR-
461 CC X+35 Y+72,5
462 CP IPA-180 Z-3,449 DR-
463 CC X+35 Y+72,5
464 CP IPA-180 Z-3,778 DR-
465 CC X+35 Y+72,5
466 CP IPA-180 Z-4,108 DR-
467 CC X+35 Y+72,5
468 CP IPA-180 Z-4,437 DR-
469 CC X+35 Y+72,5
470 CP IPA-180 Z-4,766 DR-
471 CC X+35 Y+72,5
472 CP IPA-180 Z-5,095 DR-
473 CC X+35 Y+72,5
474 CP IPA-180 Z-5,424 DR-
475 CC X+35 Y+72,5
476 CP IPA-180 Z-5,753 DR-
477 CC X+35 Y+72,5
478 CP IPA-180 Z-6,082 DR-
479 CC X+35 Y+72,5
480 CP IPA-180 Z-6,412 DR-
481 CC X+35 Y+72,5
482 CP IPA-180 Z-6,741 DR-
483 CC X+35 Y+72,5
484 CP IPA-180 Z-7,07 DR-
485 CC X+35 Y+72,5
486 CP IPA-180 Z-7,399 DR-
487 CC X+35 Y+72,5
488 CP IPA-328,758 Z-8 DR-
489 L X+35,75 Y+72,5 F315
490 CC X+33,5 Y+72,5
491 C X+31,25 Y+72,5 DR+
492 CC X+36,5 Y+72,5
493 C X+31,896 Y+69,977 DR+
494 CC X+35 Y+72,5
495 C X+39 Y+72,5 DR+
496 CC X+35 Y+72,5
497 C X+31,896 Y+69,977 DR+
498 L Z+10 FMAX
499 L X+37,565 Y+70,944 FMAX
500 L Z-6 FMAX
501 L Z-7,5 F500
502 CC X+35 Y+72,5
503 CP IPA-180 Z-7,829 DR-
504 CC X+35 Y+72,5
505 CP IPA-180 Z-8,158 DR-
506 CC X+35 Y+72,5
507 CP IPA-180 Z-8,487 DR-
508 CC X+35 Y+72,5
509 CP IPA-180 Z-8,816 DR-
510 CC X+35 Y+72,5
511 CP IPA-180 Z-9,146 DR-
512 CC X+35 Y+72,5
513 CP IPA-180 Z-9,475 DR-
514 CC X+35 Y+72,5
515 CP IPA-180 Z-9,804 DR-
516 CC X+35 Y+72,5
517 CP IPA-180 Z-10,133 DR-
518 CC X+35 Y+72,5
519 CP IPA-180 Z-10,462 DR-
520 CC X+35 Y+72,5
521 CP IPA-180 Z-10,791 DR-
522 CC X+35 Y+72,5
523 CP IPA-180 Z-11,12 DR-
524 CC X+35 Y+72,5
525 CP IPA-180 Z-11,449 DR-
526 CC X+35 Y+72,5
527 CP IPA-180 Z-11,779 DR-
528 CC X+35 Y+72,5
529 CP IPA-180 Z-12,108 DR-
530 CC X+35 Y+72,5
531 CP IPA-180 Z-12,437 DR-
532 CC X+35 Y+72,5
533 CP IPA-180 Z-12,766 DR-
534 CC X+35 Y+72,5
535 CP IPA-180 Z-13,095 DR-
536 CC X+35 Y+72,5
537 CP IPA-180 Z-13,424 DR-
538 CC X+35 Y+72,5
539 CP IPA-180 Z-13,753 DR-
540 CC X+35 Y+72,5
541 CP IPA-180 Z-14,082 DR-
542 CC X+35 Y+72,5
543 CP IPA-180 Z-14,412 DR-
544 CC X+35 Y+72,5
545 CP IPA-180 Z-14,741 DR-
546 CC X+35 Y+72,5
547 CP IPA-180 Z-15,07 DR-
548 CC X+35 Y+72,5
549 CP IPA-180 Z-15,399 DR-
550 CC X+35 Y+72,5
551 CP IPA-328,758 Z-16 DR-
552 L X+35,75 Y+72,5 F315
553 CC X+33,5 Y+72,5
554 C X+31,25 Y+72,5 DR+
555 CC X+36,5 Y+72,5
556 C X+31,896 Y+69,977 DR+
557 CC X+35 Y+72,5
558 C X+39 Y+72,5 DR+
559 CC X+35 Y+72,5
560 C X+31,896 Y+69,977 DR+
561 L Z+50 FMAX
562 L X+107,565 Y+15,944 FMAX
563 L Z+2 FMAX
564 L Z+0,5 F500
565 CC X+105 Y+17,5
566 CP IPA-180 Z+0,171 DR-
567 CC X+105 Y+17,5
568 CP IPA-180 Z-0,158 DR-
569 CC X+105 Y+17,5
570 CP IPA-180 Z-0,487 DR-
571 CC X+105 Y+17,5
572 CP IPA-180 Z-0,816 DR-
573 CC X+105 Y+17,5
574 CP IPA-180 Z-1,146 DR-
575 CC X+105 Y+17,5
576 CP IPA-180 Z-1,475 DR-
577 CC X+105 Y+17,5
578 CP IPA-180 Z-1,804 DR-
579 CC X+105 Y+17,5
580 CP IPA-180 Z-2,133 DR-
581 CC X+105 Y+17,5
582 CP IPA-180 Z-2,462 DR-
583 CC X+105 Y+17,5
584 CP IPA-180 Z-2,791 DR-
585 CC X+105 Y+17,5
586 CP IPA-180 Z-3,12 DR-
587 CC X+105 Y+17,5
588 CP IPA-180 Z-3,449 DR-
589 CC X+105 Y+17,5
590 CP IPA-180 Z-3,778 DR-
591 CC X+105 Y+17,5
592 CP IPA-180 Z-4,108 DR-
593 CC X+105 Y+17,5
594 CP IPA-180 Z-4,437 DR-
595 CC X+105 Y+17,5
596 CP IPA-180 Z-4,766 DR-
597 CC X+105 Y+17,5
598 CP IPA-180 Z-5,095 DR-
599 CC X+105 Y+17,5
600 CP IPA-180 Z-5,424 DR-
601 CC X+105 Y+17,5
602 CP IPA-180 Z-5,753 DR-
603 CC X+105 Y+17,5
604 CP IPA-180 Z-6,082 DR-
605 CC X+105 Y+17,5
606 CP IPA-180 Z-6,412 DR-
607 CC X+105 Y+17,5
608 CP IPA-180 Z-6,741 DR-
609 CC X+105 Y+17,5
610 CP IPA-180 Z-7,07 DR-
611 CC X+105 Y+17,5
612 CP IPA-180 Z-7,399 DR-
613 CC X+105 Y+17,5
614 CP IPA-328,758 Z-8 DR-
615 L X+105,75 Y+17,5 F315
616 CC X+103,5 Y+17,5
617 C X+101,25 Y+17,5 DR+
618 CC X+106,5 Y+17,5
619 C X+101,896 Y+14,977 DR+
620 CC X+105 Y+17,5
621 C X+109 Y+17,5 DR+
622 CC X+105 Y+17,5
623 C X+101,896 Y+14,977 DR+
624 L Z+10 FMAX
625 L X+107,565 Y+15,944 FMAX
626 L Z-6 FMAX
627 L Z-7,5 F500
628 CC X+105 Y+17,5
629 CP IPA-180 Z-7,829 DR-
630 CC X+105 Y+17,5
631 CP IPA-180 Z-8,158 DR-
632 CC X+105 Y+17,5
633 CP IPA-180 Z-8,487 DR-
634 CC X+105 Y+17,5
635 CP IPA-180 Z-8,816 DR-
636 CC X+105 Y+17,5
637 CP IPA-180 Z-9,146 DR-
638 CC X+105 Y+17,5
639 CP IPA-180 Z-9,475 DR-
640 CC X+105 Y+17,5
641 CP IPA-180 Z-9,804 DR-
642 CC X+105 Y+17,5
643 CP IPA-180 Z-10,133 DR-
644 CC X+105 Y+17,5
645 CP IPA-180 Z-10,462 DR-
646 CC X+105 Y+17,5
647 CP IPA-180 Z-10,791 DR-
648 CC X+105 Y+17,5
649 CP IPA-180 Z-11,12 DR-
650 CC X+105 Y+17,5
651 CP IPA-180 Z-11,449 DR-
652 CC X+105 Y+17,5
653 CP IPA-180 Z-11,779 DR-
654 CC X+105 Y+17,5
655 CP IPA-180 Z-12,108 DR-
656 CC X+105 Y+17,5
657 CP IPA-180 Z-12,437 DR-
658 CC X+105 Y+17,5
659 CP IPA-180 Z-12,766 DR-
660 CC X+105 Y+17,5
661 CP IPA-180 Z-13,095 DR-
662 CC X+105 Y+17,5
663 CP IPA-180 Z-13,424 DR-
664 CC X+105 Y+17,5
665 CP IPA-180 Z-13,753 DR-
666 CC X+105 Y+17,5
667 CP IPA-180 Z-14,082 DR-
668 CC X+105 Y+17,5
669 CP IPA-180 Z-14,412 DR-
670 CC X+105 Y+17,5
671 CP IPA-180 Z-14,741 DR-
672 CC X+105 Y+17,5
673 CP IPA-180 Z-15,07 DR-
674 CC X+105 Y+17,5
675 CP IPA-180 Z-15,399 DR-
676 CC X+105 Y+17,5
677 CP IPA-328,758 Z-16 DR-
678 L X+105,75 Y+17,5 F315
679 CC X+103,5 Y+17,5
680 C X+101,25 Y+17,5 DR+
681 CC X+106,5 Y+17,5
682 C X+101,896 Y+14,977 DR+
683 CC X+105 Y+17,5
684 C X+109 Y+17,5 DR+
685 CC X+105 Y+17,5
686 C X+101,896 Y+14,977 DR+
687 L Z+50 FMAX
688 L X+107,565 Y-74,056 FMAX
689 L Z+2 FMAX
690 L Z+0,5 F500
691 CC X+105 Y-72,5
692 CP IPA-180 Z+0,171 DR-
693 CC X+105 Y-72,5
694 CP IPA-180 Z-0,158 DR-
695 CC X+105 Y-72,5
696 CP IPA-180 Z-0,487 DR-
697 CC X+105 Y-72,5
698 CP IPA-180 Z-0,816 DR-
699 CC X+105 Y-72,5
700 CP IPA-180 Z-1,146 DR-
701 CC X+105 Y-72,5
702 CP IPA-180 Z-1,475 DR-
703 CC X+105 Y-72,5
704 CP IPA-180 Z-1,804 DR-
705 CC X+105 Y-72,5
706 CP IPA-180 Z-2,133 DR-
707 CC X+105 Y-72,5
708 CP IPA-180 Z-2,462 DR-
709 CC X+105 Y-72,5
710 CP IPA-180 Z-2,791 DR-
711 CC X+105 Y-72,5
712 CP IPA-180 Z-3,12 DR-
713 CC X+105 Y-72,5
714 CP IPA-180 Z-3,449 DR-
715 CC X+105 Y-72,5
716 CP IPA-180 Z-3,778 DR-
717 CC X+105 Y-72,5
718 CP IPA-180 Z-4,108 DR-
719 CC X+105 Y-72,5
720 CP IPA-180 Z-4,437 DR-
721 CC X+105 Y-72,5
722 CP IPA-180 Z-4,766 DR-
723 CC X+105 Y-72,5
724 CP IPA-180 Z-5,095 DR-
725 CC X+105 Y-72,5
726 CP IPA-180 Z-5,424 DR-
727 CC X+105 Y-72,5
728 CP IPA-180 Z-5,753 DR-
729 CC X+105 Y-72,5
730 CP IPA-180 Z-6,082 DR-
731 CC X+105 Y-72,5
732 CP IPA-180 Z-6,412 DR-
733 CC X+105 Y-72,5
734 CP IPA-180 Z-6,741 DR-
735 CC X+105 Y-72,5
736 CP IPA-180 Z-7,07 DR-
737 CC X+105 Y-72,5
738 CP IPA-180 Z-7,399 DR-
739 CC X+105 Y-72,5
740 CP IPA-328,758 Z-8 DR-
741 L X+105,75 Y-72,5 F315
742 CC X+103,5 Y-72,5
743 C X+101,25 Y-72,5 DR+
744 CC X+106,5 Y-72,5
745 C X+101,896 Y-75,023 DR+
746 CC X+105 Y-72,5
747 C X+109 Y-72,5 DR+
748 CC X+105 Y-72,5
749 C X+101,896 Y-75,023 DR+
750 L Z+10 FMAX
751 L X+107,565 Y-74,056 FMAX
752 L Z-6 FMAX
753 L Z-7,5 F500
754 CC X+105 Y-72,5
755 CP IPA-180 Z-7,829 DR-
756 CC X+105 Y-72,5
757 CP IPA-180 Z-8,158 DR-
758 CC X+105 Y-72,5
759 CP IPA-180 Z-8,487 DR-
760 CC X+105 Y-72,5
761 CP IPA-180 Z-8,816 DR-
762 CC X+105 Y-72,5
763 CP IPA-180 Z-9,146 DR-
764 CC X+105 Y-72,5
765 CP IPA-180 Z-9,475 DR-
766 CC X+105 Y-72,5
767 CP IPA-180 Z-9,804 DR-
768 CC X+105 Y-72,5
769 CP IPA-180 Z-10,133 DR-
770 CC X+105 Y-72,5
771 CP IPA-180 Z-10,462 DR-
772 CC X+105 Y-72,5
773 CP IPA-180 Z-10,791 DR-
774 CC X+105 Y-72,5
775 CP IPA-180 Z-11,12 DR-
776 CC X+105 Y-72,5
777 CP IPA-180 Z-11,449 DR-
778 CC X+105 Y-72,5
779 CP IPA-180 Z-11,779 DR-
780 CC X+105 Y-72,5
781 CP IPA-180 Z-12,108 DR-
782 CC X+105 Y-72,5
783 CP IPA-180 Z-12,437 DR-
784 CC X+105 Y-72,5
785 CP IPA-180 Z-12,766 DR-
786 CC X+105 Y-72,5
787 CP IPA-180 Z-13,095 DR-
788 CC X+105 Y-72,5
789 CP IPA-180 Z-13,424 DR-
790 CC X+105 Y-72,5
791 CP IPA-180 Z-13,753 DR-
792 CC X+105 Y-72,5
793 CP IPA-180 Z-14,082 DR-
794 CC X+105 Y-72,5
795 CP IPA-180 Z-14,412 DR-
796 CC X+105 Y-72,5
797 CP IPA-180 Z-14,741 DR-
798 CC X+105 Y-72,5
799 CP IPA-180 Z-15,07 DR-
800 CC X+105 Y-72,5
801 CP IPA-180 Z-15,399 DR-
802 CC X+105 Y-72,5
803 CP IPA-328,758 Z-16 DR-
804 L X+105,75 Y-72,5 F315
805 CC X+103,5 Y-72,5
806 C X+101,25 Y-72,5 DR+
807 CC X+106,5 Y-72,5
808 C X+101,896 Y-75,023 DR+
809 CC X+105 Y-72,5
810 C X+109 Y-72,5 DR+
811 CC X+105 Y-72,5
812 C X+101,896 Y-75,023 DR+
813 L Z+50 FMAX
814 TOOL CALL 18 Z S1751 DR-5
815 L X-105 Y-72,5 Z+50 FMAX
816 L Z-6 FMAX
817 L Z-16 F500
818 L X-107 Y-71,5 RL F315
819 L X-108
820 CC X-108 Y-72,5
821 C X-109 Y-72,5 DR+
822 CC X-105 Y-72,5
823 C X-101 Y-72,5 DR+
824 CC X-105 Y-72,5
825 C X-109 Y-72,5 DR+
826 CC X-105 Y-72,5
827 C X-108,51 Y-74,418 DR+
828 CC X-105 Y-72,5
829 C X-101 Y-72,5 DR+
830 CC X-105 Y-72,5
831 C X-109 Y-72,5 DR+
832 CC X-105 Y-72,5
833 C X-108,51 Y-74,418 DR+
834 CC X-107,633 Y-73,938
835 C X-107,153 Y-74,816 DR+
836 L X-106,276 Y-74,336
837 L X-105 Y-72,5 R0
838 L Z+50 FMAX
839 L Y+17,5 FMAX
840 L Z-6 FMAX
841 L Z-16 F500
842 L X-107 Y+18,5 RL F315
843 L X-108
844 CC X-108 Y+17,5
845 C X-109 Y+17,5 DR+
846 CC X-105 Y+17,5
847 C X-101 Y+17,5 DR+
848 CC X-105 Y+17,5
849 C X-109 Y+17,5 DR+
850 CC X-105 Y+17,5
851 C X-108,51 Y+15,582 DR+
852 CC X-105 Y+17,5
853 C X-101 Y+17,5 DR+
854 CC X-105 Y+17,5
855 C X-109 Y+17,5 DR+
856 CC X-105 Y+17,5
857 C X-108,51 Y+15,582 DR+
858 CC X-107,633 Y+16,062
859 C X-107,153 Y+15,184 DR+
860 L X-106,276 Y+15,664
861 L X-105 Y+17,5 R0
862 L Z+50 FMAX
863 L X-35 Y+72,5 FMAX
864 L Z-6 FMAX
865 L Z-16 F500
866 L X-37 Y+73,5 RL F315
867 L X-38
868 CC X-38 Y+72,5
869 C X-39 Y+72,5 DR+
870 CC X-35 Y+72,5
871 C X-31 Y+72,5 DR+
872 CC X-35 Y+72,5
873 C X-39 Y+72,5 DR+
874 CC X-35 Y+72,5
875 C X-38,51 Y+70,582 DR+
876 CC X-35 Y+72,5
877 C X-31 Y+72,5 DR+
878 CC X-35 Y+72,5
879 C X-39 Y+72,5 DR+
880 CC X-35 Y+72,5
881 C X-38,51 Y+70,582 DR+
882 CC X-37,633 Y+71,062
883 C X-37,153 Y+70,184 DR+
884 L X-36,276 Y+70,664
885 L X-35 Y+72,5 R0
886 L Z+50 FMAX
887 L X+35 FMAX
888 L Z-6 FMAX
889 L Z-16 F500
890 L X+33 Y+73,5 RL F315
891 L X+32
892 CC X+32 Y+72,5
893 C X+31 Y+72,5 DR+
894 CC X+35 Y+72,5
895 C X+39 Y+72,5 DR+
896 CC X+35 Y+72,5
897 C X+31 Y+72,5 DR+
898 CC X+35 Y+72,5
899 C X+31,49 Y+70,582 DR+
900 CC X+35 Y+72,5
901 C X+39 Y+72,5 DR+
902 CC X+35 Y+72,5
903 C X+31 Y+72,5 DR+
904 CC X+35 Y+72,5
905 C X+31,49 Y+70,582 DR+
906 CC X+32,367 Y+71,062
907 C X+32,847 Y+70,184 DR+
908 L X+33,724 Y+70,664
909 L X+35 Y+72,5 R0
910 L Z+50 FMAX
911 L X+105 Y+17,5 FMAX
912 L Z-6 FMAX
913 L Z-16 F500
914 L X+103 Y+18,5 RL F315
915 L X+102
916 CC X+102 Y+17,5
917 C X+101 Y+17,5 DR+
918 CC X+105 Y+17,5
919 C X+109 Y+17,5 DR+
920 CC X+105 Y+17,5
921 C X+101 Y+17,5 DR+
922 CC X+105 Y+17,5
923 C X+101,49 Y+15,582 DR+
924 CC X+105 Y+17,5
925 C X+109 Y+17,5 DR+
926 CC X+105 Y+17,5
927 C X+101 Y+17,5 DR+
928 CC X+105 Y+17,5
929 C X+101,49 Y+15,582 DR+
930 CC X+102,367 Y+16,062
931 C X+102,847 Y+15,184 DR+
932 L X+103,724 Y+15,664
933 L X+105 Y+17,5 R0
934 L Z+50 FMAX
935 L Y-72,5 FMAX
936 L Z-6 FMAX
937 L Z-16 F500
938 L X+103 Y-71,5 RL F315
939 L X+102
940 CC X+102 Y-72,5
941 C X+101 Y-72,5 DR+
942 CC X+105 Y-72,5
943 C X+109 Y-72,5 DR+
944 CC X+105 Y-72,5
945 C X+101 Y-72,5 DR+
946 CC X+105 Y-72,5
947 C X+101,49 Y-74,418 DR+
948 CC X+105 Y-72,5
949 C X+109 Y-72,5 DR+
950 CC X+105 Y-72,5
951 C X+101 Y-72,5 DR+
952 CC X+105 Y-72,5
953 C X+101,49 Y-74,418 DR+
954 CC X+102,367 Y-73,938
955 C X+102,847 Y-74,816 DR+
956 L X+103,724 Y-74,336
957 L X+105 Y-72,5 R0
958 L Z+50 FMAX
959 M78
960 M5
961 L Z-1 FMAX M91
962 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
963 ; CORRECTION USURE GAUCHE
964 ; SUREP R 0. SUREP Z 0.
965 TOOL CALL 1 Z S6000 DR-2,5
966 TOOL DEF 2
967 L X-105 Y-72,5 FMAX M3
968 L Z+50 FMAX
969 L Z+2 FMAX
970 L Z-2,5 F800
971 L X-110,5 Y-72 RL F1200
972 L X-111
973 CC X-111 Y-72,5
974 C X-111,5 Y-72,5 DR+
975 CC X-105 Y-72,5
976 C X-98,5 Y-72,5 DR+
977 CC X-105 Y-72,5
978 C X-111,5 Y-72,5 DR+
979 CC X-105 Y-72,5
980 C X-111,195 Y-74,469 DR+
981 CC X-110,718 Y-74,317
982 C X-110,567 Y-74,794 DR+
983 L X-110,09 Y-74,642
984 L X-105 Y-72,5 R0
985 L Z+50 FMAX
986 L Y+17,5 FMAX
987 L Z+2 FMAX
988 L Z-2,5 F800
989 L X-110,5 Y+18 RL F1200
990 L X-111
991 CC X-111 Y+17,5
992 C X-111,5 Y+17,5 DR+
993 CC X-105 Y+17,5
994 C X-98,5 Y+17,5 DR+
995 CC X-105 Y+17,5
996 C X-111,5 Y+17,5 DR+
997 CC X-105 Y+17,5
998 C X-111,195 Y+15,531 DR+
999 CC X-110,718 Y+15,683
1000 C X-110,567 Y+15,206 DR+
1001 L X-110,09 Y+15,358
1002 L X-105 Y+17,5 R0
1003 L Z+50 FMAX
1004 L X-35 Y+72,5 FMAX
1005 L Z+2 FMAX
1006 L Z-2,5 F800
1007 L X-40,5 Y+73 RL F1200
1008 L X-41
1009 CC X-41 Y+72,5
1010 C X-41,5 Y+72,5 DR+
1011 CC X-35 Y+72,5
1012 C X-28,5 Y+72,5 DR+
1013 CC X-35 Y+72,5
1014 C X-41,5 Y+72,5 DR+
1015 CC X-35 Y+72,5
1016 C X-41,195 Y+70,531 DR+
1017 CC X-40,718 Y+70,683
1018 C X-40,567 Y+70,206 DR+
1019 L X-40,09 Y+70,358
1020 L X-35 Y+72,5 R0
1021 L Z+50 FMAX
1022 L X+35 FMAX
1023 L Z+2 FMAX
1024 L Z-2,5 F800
1025 L X+29,5 Y+73 RL F1200
1026 L X+29
1027 CC X+29 Y+72,5
1028 C X+28,5 Y+72,5 DR+
1029 CC X+35 Y+72,5
1030 C X+41,5 Y+72,5 DR+
1031 CC X+35 Y+72,5
1032 C X+28,5 Y+72,5 DR+
1033 CC X+35 Y+72,5
1034 C X+28,805 Y+70,531 DR+
1035 CC X+29,282 Y+70,683
1036 C X+29,433 Y+70,206 DR+
1037 L X+29,91 Y+70,358
1038 L X+35 Y+72,5 R0
1039 L Z+50 FMAX
1040 L X+105 Y+17,5 FMAX
1041 L Z+2 FMAX
1042 L Z-2,5 F800
1043 L X+99,5 Y+18 RL F1200
1044 L X+99
1045 CC X+99 Y+17,5
1046 C X+98,5 Y+17,5 DR+
1047 CC X+105 Y+17,5
1048 C X+111,5 Y+17,5 DR+
1049 CC X+105 Y+17,5
1050 C X+98,5 Y+17,5 DR+
1051 CC X+105 Y+17,5
1052 C X+98,805 Y+15,531 DR+
1053 CC X+99,282 Y+15,683
1054 C X+99,433 Y+15,206 DR+
1055 L X+99,91 Y+15,358
1056 L X+105 Y+17,5 R0
1057 L Z+50 FMAX
1058 L Y-72,5 FMAX
1059 L Z+2 FMAX
1060 L Z-2,5 F800
1061 L X+99,5 Y-72 RL F1200
1062 L X+99
1063 CC X+99 Y-72,5
1064 C X+98,5 Y-72,5 DR+
1065 CC X+105 Y-72,5
1066 C X+111,5 Y-72,5 DR+
1067 CC X+105 Y-72,5
1068 C X+98,5 Y-72,5 DR+
1069 CC X+105 Y-72,5
1070 C X+98,805 Y-74,469 DR+
1071 CC X+99,282 Y-74,317
1072 C X+99,433 Y-74,794 DR+
1073 L X+99,91 Y-74,642
1074 L X+105 Y-72,5 R0
1075 L Z+50 FMAX
1076 M5
1077 L Z-1 FMAX M91
1078 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1079 TOOL CALL 1 Z S1856 DR+0
1080 TOOL DEF 2
1081 L X-105 Y+72,5 FMAX M3
1082 L Z+50 FMAX M8
1083 ;  POINTAGE-PERCAGE
1084 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1085 L X-105 Y+72,5 FMAX M99
1086 L X+105 FMAX M99
1087 L Z+50 FMAX
1088 M9
1089 M5
1090 L Z-1 FMAX M91
1091 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
1092 TOOL CALL 2 Z S2000 DR+0
1093 TOOL DEF 1
1094 L X-105 Y+72,5 FMAX M3
1095 L Z+50 FMAX M7
1096 ;  DEBOURRAGE
1097 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-37 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1098 L X-105 Y+72,5 FMAX M99
1099 L X+105 FMAX M99
1100 L Z+50 FMAX
1101 M9
1102 M5
1103 L Z-1 FMAX M91
1104 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1105 TOOL CALL 1 Z S1856 DR+0
1106 TOOL DEF 20
1107 L X+0 Y+42,5 FMAX M3
1108 L Z+50 FMAX M8
1109 ;  POINTAGE-PERCAGE
1110 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1111 L X+0 Y+42,5 FMAX M99
1112 M9
1113 M5
1114 L Z-1 FMAX M91
1115 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
1116 TOOL CALL 20 Z S3800 DR+0
1117 TOOL DEF 1
1118 L X+0 Y+42,5 FMAX M3
1119 L Z+50 FMAX M7
1120 ;  DEBOURRAGE
1121 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-37 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1122 L X+0 Y+42,5 FMAX M99
1123 M9
1124 M5
1125 L Z-1 FMAX M91
1126 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1127 TOOL CALL 1 Z S1856 DR+0
1128 TOOL DEF 8
1129 L X+0 Y-45,5 FMAX M3
1130 L Z+50 FMAX M8
1131 ;  POINTAGE-PERCAGE
1132 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1133 L X+0 Y-45,5 FMAX M99
1134 M9
1135 M5
1136 L Z-1 FMAX M91
1137 ; T8 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
1138 TOOL CALL 8 Z S1650 DR+0
1139 TOOL DEF 18
1140 L X+0 Y-45,5 FMAX M3
1141 L Z+50 FMAX M7
1142 ;  DEBOURRAGE
1143 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-37 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1144 L X+0 Y-45,5 FMAX M99
1145 M9
1146 M5
1147 L Z-1 FMAX M91
1148 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
1149 ; CORRECTION USURE GAUCHE
1150 ; SUREP R 0. SUREP Z 0.
1151 TOOL CALL 18 Z S1751 DR-5
1152 TOOL DEF 1
1153 L X+131 Y-91,5 FMAX M3
1154 L Z+50 FMAX M25
1155 L Z+2 FMAX
1156 L Z-2 F500
1157 L X+125 RL F315
1158 L X-125
1159 L X-131 R0
1160 L Z+10 FMAX
1161 L X+131 Y-86,5 FMAX
1162 L Z+2 FMAX
1163 L Z-2 F500
1164 L X+125 RL F315
1165 L X-125
1166 L X-131 R0
1167 L Z+10 FMAX
1168 L X+131 Y-81,5 FMAX
1169 L Z+2 FMAX
1170 L Z-2 F500
1171 L X+125 RL F315
1172 L X-125
1173 L X-131 R0
1174 L Z+10 FMAX
1175 L X+131 Y-76,5 FMAX
1176 L Z+2 FMAX
1177 L Z-2 F500
1178 L X+125 RL F315
1179 L X-125
1180 L X-131 R0
1181 L Z+10 FMAX
1182 L X+131 Y-71,5 FMAX
1183 L Z+2 FMAX
1184 L Z-2 F500
1185 L X+125 RL F315
1186 L X-125
1187 L X-131 R0
1188 L Z+10 FMAX
1189 L X+131 Y-91,5 FMAX
1190 L Z+0 FMAX
1191 L Z-2,2 F500
1192 L X+125 RL F315
1193 L X-125
1194 L X-131 R0
1195 L Z+10 FMAX
1196 L X+131 Y-86,5 FMAX
1197 L Z+0 FMAX
1198 L Z-2,2 F500
1199 L X+125 RL F315
1200 L X-125
1201 L X-131 R0
1202 L Z+10 FMAX
1203 L X+131 Y-81,5 FMAX
1204 L Z+0 FMAX
1205 L Z-2,2 F500
1206 L X+125 RL F315
1207 L X-125
1208 L X-131 R0
1209 L Z+10 FMAX
1210 L X+131 Y-76,5 FMAX
1211 L Z+0 FMAX
1212 L Z-2,2 F500
1213 L X+125 RL F315
1214 L X-125
1215 L X-131 R0
1216 L Z+10 FMAX
1217 L X+131 Y-71,5 FMAX
1218 L Z+0 FMAX
1219 L Z-2,2 F500
1220 L X+125 RL F315
1221 L X-125
1222 L X-131 R0
1223 L Z+10 FMAX
1224 L X+131 FMAX
1225 L Z+0 FMAX
1226 L Z-2,2 F500
1227 L X+125 RL F315
1228 L X-125
1229 L X-131 R0
1230 L Z+50 FMAX
1231 M78
1232 M5
1233 L Z-1 FMAX M91
1234 L Y-1 FMAX M91
1235 M30
1236 END PGM REP77-MATRICE DECOUPE-D-21280 MM
