0 BEGIN PGM REP35-20977-OP10-CALE DE CHOCS MATRICE-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP35-20977-OP10-CALE DE CHOCS MATRICE-B
4 ; PROG-CN DU 27-10-20 A 13:13
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T19 DIA 6 AIR FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 25
18 L X+2,586 Y-13,156 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X+2,586 Y-13,156 FMAX M99
23 L X+36,414 Y-0,844 FMAX M99
24 L X+82,5 Y-45 FMAX M99
25 L X+57,5 Y+45 FMAX M99
26 L X-82,5 Y-45 FMAX M99
27 L X+82,5 Y+45 FMAX M99
28 L X-82,5 FMAX M99
29 L Y-20 FMAX M99
30 L X-17,5 Y-45 FMAX M99
31 L X+77,5 Y+0 FMAX M99
32 L X-42,5 Y+45 FMAX M99
33 L X-61,223 Y+22,815 FMAX M99
34 L X-40,018 Y-35,446 FMAX M99
35 L Z+50 FMAX
36 M9
37 M5
38 L Z-1 FMAX M91
39 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
40 TOOL CALL 25 Z S3000 DR+0
41 TOOL DEF 19
42 L X+2,586 Y-13,156 FMAX M3
43 L Z+50 FMAX M7
44 ;  DEBOURRAGE
45 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-12 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
46 L X+2,586 Y-13,156 FMAX M99
47 L X+36,414 Y-0,844 FMAX M99
48 L X+82,5 Y-45 FMAX M99
49 L X+57,5 Y+45 FMAX M99
50 L X-82,5 Y-45 FMAX M99
51 L X+82,5 Y+45 FMAX M99
52 L X-82,5 FMAX M99
53 L Y-20 FMAX M99
54 L X-17,5 Y-45 FMAX M99
55 L X+77,5 Y+0 FMAX M99
56 L X-42,5 Y+45 FMAX M99
57 L X-61,223 Y+22,815 FMAX M99
58 L X-40,018 Y-35,446 FMAX M99
59 L Z+50 FMAX
60 M9
61 M5
62 L Z-1 FMAX M91
63 ; T19 DIA 6 AIR FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
64 ; CORRECTION AUCUNE
65 ; SUREP R 0. SUREP Z 0.
66 TOOL CALL 19 Z S7427 DR+0
67 TOOL DEF 1
68 L X-82,5 Y+45 FMAX M3
69 L Z+50 FMAX M25
70 L Z+2 FMAX
71 L Z-10 F297
72 L X-82,475 F3565
73 CC X-82,55 Y+45
74 C X-82,625 Y+45 DR+
75 CC X-82,45 Y+45
76 C X-82,275 Y+45 DR+
77 CC X-82,55 Y+45
78 C X-82,825 Y+45 DR+
79 CC X-82,45 Y+45
80 C X-82,075 Y+45 DR+
81 CC X-82,55 Y+45
82 C X-83,025 Y+45 DR+
83 CC X-82,45 Y+45
84 C X-81,875 Y+45 DR+
85 CC X-82,55 Y+45
86 C X-83,225 Y+45 DR+
87 CC X-82,45 Y+45
88 C X-81,675 Y+45 DR+
89 CC X-82,55 Y+45
90 C X-83,425 Y+45 DR+
91 CC X-82,45 Y+45
92 C X-81,475 Y+45 DR+
93 CC X-82,55 Y+45
94 C X-83,625 Y+45 DR+
95 CC X-82,45 Y+45
96 C X-81,275 Y+45 DR+
97 CC X-82,55 Y+45
98 C X-83,825 Y+45 DR+
99 CC X-82,45 Y+45
100 C X-81,075 Y+45 DR+
101 CC X-82,55 Y+45
102 C X-84,025 Y+45 DR+
103 CC X-82,45 Y+45
104 C X-80,875 Y+45 DR+
105 CC X-82,55 Y+45
106 C X-84,225 Y+45 DR+
107 CC X-82,45 Y+45
108 C X-80,675 Y+45 DR+
109 CC X-82,55 Y+45
110 C X-84,425 Y+45 DR+
111 CC X-82,45 Y+45
112 C X-80,475 Y+45 DR+
113 CC X-82,55 Y+45
114 C X-84,625 Y+45 DR+
115 CC X-82,45 Y+45
116 C X-80,275 Y+45 DR+
117 CC X-82,55 Y+45
118 C X-84,825 Y+45 DR+
119 CC X-82,45 Y+45
120 C X-80,075 Y+45 DR+
121 CC X-82,55 Y+45
122 C X-83,769 Y+47,154 DR+
123 CC X-82,5 Y+45
124 C X-80 Y+45 DR+
125 CC X-82,5 Y+45
126 C X-83,769 Y+47,154 DR+
127 L Z+50 FMAX
128 L X-42,5 Y+45 FMAX
129 L Z+2 FMAX
130 L Z-10 F297
131 L X-42,475 F3565
132 CC X-42,55 Y+45
133 C X-42,625 Y+45 DR+
134 CC X-42,45 Y+45
135 C X-42,275 Y+45 DR+
136 CC X-42,55 Y+45
137 C X-42,825 Y+45 DR+
138 CC X-42,45 Y+45
139 C X-42,075 Y+45 DR+
140 CC X-42,55 Y+45
141 C X-43,025 Y+45 DR+
142 CC X-42,45 Y+45
143 C X-41,875 Y+45 DR+
144 CC X-42,55 Y+45
145 C X-43,225 Y+45 DR+
146 CC X-42,45 Y+45
147 C X-41,675 Y+45 DR+
148 CC X-42,55 Y+45
149 C X-43,425 Y+45 DR+
150 CC X-42,45 Y+45
151 C X-41,475 Y+45 DR+
152 CC X-42,55 Y+45
153 C X-43,625 Y+45 DR+
154 CC X-42,45 Y+45
155 C X-41,275 Y+45 DR+
156 CC X-42,55 Y+45
157 C X-43,825 Y+45 DR+
158 CC X-42,45 Y+45
159 C X-41,075 Y+45 DR+
160 CC X-42,55 Y+45
161 C X-44,025 Y+45 DR+
162 CC X-42,45 Y+45
163 C X-40,875 Y+45 DR+
164 CC X-42,55 Y+45
165 C X-44,225 Y+45 DR+
166 CC X-42,45 Y+45
167 C X-40,675 Y+45 DR+
168 CC X-42,55 Y+45
169 C X-44,425 Y+45 DR+
170 CC X-42,45 Y+45
171 C X-40,475 Y+45 DR+
172 CC X-42,55 Y+45
173 C X-44,625 Y+45 DR+
174 CC X-42,45 Y+45
175 C X-40,275 Y+45 DR+
176 CC X-42,55 Y+45
177 C X-44,825 Y+45 DR+
178 CC X-42,45 Y+45
179 C X-40,075 Y+45 DR+
180 CC X-42,55 Y+45
181 C X-45,025 Y+45 DR+
182 CC X-42,45 Y+45
183 C X-39,875 Y+45 DR+
184 CC X-42,55 Y+45
185 C X-45,225 Y+45 DR+
186 CC X-42,45 Y+45
187 C X-39,675 Y+45 DR+
188 CC X-42,55 Y+45
189 C X-45,425 Y+45 DR+
190 CC X-42,45 Y+45
191 C X-39,475 Y+45 DR+
192 CC X-42,55 Y+45
193 C X-45,625 Y+45 DR+
194 CC X-42,45 Y+45
195 C X-39,275 Y+45 DR+
196 CC X-42,55 Y+45
197 C X-45,825 Y+45 DR+
198 CC X-42,45 Y+45
199 C X-39,075 Y+45 DR+
200 CC X-42,55 Y+45
201 C X-46,025 Y+45 DR+
202 CC X-42,45 Y+45
203 C X-38,875 Y+45 DR+
204 CC X-42,55 Y+45
205 C X-46,225 Y+45 DR+
206 CC X-42,45 Y+45
207 C X-44,356 Y+41,742 DR+
208 CC X-42,5 Y+45
209 C X-38,75 Y+45 DR+
210 CC X-42,5 Y+45
211 C X-44,356 Y+41,742 DR+
212 L Z+50 FMAX
213 L X+57,5 Y+45 FMAX
214 L Z+2 FMAX
215 L Z-10 F297
216 L X+57,525 F3565
217 CC X+57,45 Y+45
218 C X+57,375 Y+45 DR+
219 CC X+57,55 Y+45
220 C X+57,725 Y+45 DR+
221 CC X+57,45 Y+45
222 C X+57,175 Y+45 DR+
223 CC X+57,55 Y+45
224 C X+57,925 Y+45 DR+
225 CC X+57,45 Y+45
226 C X+56,975 Y+45 DR+
227 CC X+57,55 Y+45
228 C X+58,125 Y+45 DR+
229 CC X+57,45 Y+45
230 C X+56,775 Y+45 DR+
231 CC X+57,55 Y+45
232 C X+58,325 Y+45 DR+
233 CC X+57,45 Y+45
234 C X+56,575 Y+45 DR+
235 CC X+57,55 Y+45
236 C X+58,525 Y+45 DR+
237 CC X+57,45 Y+45
238 C X+56,375 Y+45 DR+
239 CC X+57,55 Y+45
240 C X+58,725 Y+45 DR+
241 CC X+57,45 Y+45
242 C X+56,175 Y+45 DR+
243 CC X+57,55 Y+45
244 C X+58,925 Y+45 DR+
245 CC X+57,45 Y+45
246 C X+55,975 Y+45 DR+
247 CC X+57,55 Y+45
248 C X+59,125 Y+45 DR+
249 CC X+57,45 Y+45
250 C X+55,775 Y+45 DR+
251 CC X+57,55 Y+45
252 C X+59,325 Y+45 DR+
253 CC X+57,45 Y+45
254 C X+55,575 Y+45 DR+
255 CC X+57,55 Y+45
256 C X+59,525 Y+45 DR+
257 CC X+57,45 Y+45
258 C X+55,375 Y+45 DR+
259 CC X+57,55 Y+45
260 C X+59,725 Y+45 DR+
261 CC X+57,45 Y+45
262 C X+55,175 Y+45 DR+
263 CC X+57,55 Y+45
264 C X+59,925 Y+45 DR+
265 CC X+57,45 Y+45
266 C X+54,975 Y+45 DR+
267 CC X+57,55 Y+45
268 C X+60,125 Y+45 DR+
269 CC X+57,45 Y+45
270 C X+54,775 Y+45 DR+
271 CC X+57,55 Y+45
272 C X+60,325 Y+45 DR+
273 CC X+57,45 Y+45
274 C X+54,575 Y+45 DR+
275 CC X+57,55 Y+45
276 C X+60,525 Y+45 DR+
277 CC X+57,45 Y+45
278 C X+54,375 Y+45 DR+
279 CC X+57,55 Y+45
280 C X+60,725 Y+45 DR+
281 CC X+57,45 Y+45
282 C X+59,106 Y+47,825 DR+
283 CC X+57,5 Y+45
284 C X+60,75 Y+45 DR+
285 CC X+57,5 Y+45
286 C X+59,106 Y+47,825 DR+
287 L Z+50 FMAX
288 L X+82,5 Y+45 FMAX
289 L Z+2 FMAX
290 L Z-10 F297
291 L X+82,525 F3565
292 CC X+82,45 Y+45
293 C X+82,375 Y+45 DR+
294 CC X+82,55 Y+45
295 C X+82,725 Y+45 DR+
296 CC X+82,45 Y+45
297 C X+82,175 Y+45 DR+
298 CC X+82,55 Y+45
299 C X+82,925 Y+45 DR+
300 CC X+82,45 Y+45
301 C X+81,975 Y+45 DR+
302 CC X+82,55 Y+45
303 C X+83,125 Y+45 DR+
304 CC X+82,45 Y+45
305 C X+81,775 Y+45 DR+
306 CC X+82,55 Y+45
307 C X+83,325 Y+45 DR+
308 CC X+82,45 Y+45
309 C X+81,575 Y+45 DR+
310 CC X+82,55 Y+45
311 C X+83,525 Y+45 DR+
312 CC X+82,45 Y+45
313 C X+81,375 Y+45 DR+
314 CC X+82,55 Y+45
315 C X+83,725 Y+45 DR+
316 CC X+82,45 Y+45
317 C X+81,175 Y+45 DR+
318 CC X+82,55 Y+45
319 C X+83,925 Y+45 DR+
320 CC X+82,45 Y+45
321 C X+80,975 Y+45 DR+
322 CC X+82,55 Y+45
323 C X+84,125 Y+45 DR+
324 CC X+82,45 Y+45
325 C X+80,775 Y+45 DR+
326 CC X+82,55 Y+45
327 C X+84,325 Y+45 DR+
328 CC X+82,45 Y+45
329 C X+80,575 Y+45 DR+
330 CC X+82,55 Y+45
331 C X+84,525 Y+45 DR+
332 CC X+82,45 Y+45
333 C X+80,375 Y+45 DR+
334 CC X+82,55 Y+45
335 C X+84,725 Y+45 DR+
336 CC X+82,45 Y+45
337 C X+80,175 Y+45 DR+
338 CC X+82,55 Y+45
339 C X+84,925 Y+45 DR+
340 CC X+82,45 Y+45
341 C X+81,231 Y+47,154 DR+
342 CC X+82,5 Y+45
343 C X+85 Y+45 DR+
344 CC X+82,5 Y+45
345 C X+81,231 Y+47,154 DR+
346 L Z+50 FMAX
347 L X+77,5 Y+0 FMAX
348 L Z+2 FMAX
349 L Z-10 F297
350 L X+77,525 F3565
351 CC X+77,45 Y+0
352 C X+77,375 Y+0 DR+
353 CC X+77,55 Y+0
354 C X+77,725 Y+0 DR+
355 CC X+77,45 Y+0
356 C X+77,175 Y+0 DR+
357 CC X+77,55 Y+0
358 C X+77,925 Y+0 DR+
359 CC X+77,45 Y+0
360 C X+76,975 Y+0 DR+
361 CC X+77,55 Y+0
362 C X+78,125 Y+0 DR+
363 CC X+77,45 Y+0
364 C X+76,775 Y+0 DR+
365 CC X+77,55 Y+0
366 C X+78,325 Y+0 DR+
367 CC X+77,45 Y+0
368 C X+76,575 Y+0 DR+
369 CC X+77,55 Y+0
370 C X+78,525 Y+0 DR+
371 CC X+77,45 Y+0
372 C X+76,375 Y+0 DR+
373 CC X+77,55 Y+0
374 C X+78,725 Y+0 DR+
375 CC X+77,45 Y+0
376 C X+76,175 Y+0 DR+
377 CC X+77,55 Y+0
378 C X+78,925 Y+0 DR+
379 CC X+77,45 Y+0
380 C X+75,975 Y+0 DR+
381 CC X+77,55 Y+0
382 C X+79,125 Y+0 DR+
383 CC X+77,45 Y+0
384 C X+75,775 Y+0 DR+
385 CC X+77,55 Y+0
386 C X+79,325 Y+0 DR+
387 CC X+77,45 Y+0
388 C X+75,575 Y+0 DR+
389 CC X+77,55 Y+0
390 C X+79,525 Y+0 DR+
391 CC X+77,45 Y+0
392 C X+75,375 Y+0 DR+
393 CC X+77,55 Y+0
394 C X+79,725 Y+0 DR+
395 CC X+77,45 Y+0
396 C X+75,175 Y+0 DR+
397 CC X+77,55 Y+0
398 C X+79,925 Y+0 DR+
399 CC X+77,45 Y+0
400 C X+74,975 Y+0 DR+
401 CC X+77,55 Y+0
402 C X+80,125 Y+0 DR+
403 CC X+77,45 Y+0
404 C X+74,775 Y+0 DR+
405 CC X+77,55 Y+0
406 C X+80,325 Y+0 DR+
407 CC X+77,45 Y+0
408 C X+74,575 Y+0 DR+
409 CC X+77,55 Y+0
410 C X+80,525 Y+0 DR+
411 CC X+77,45 Y+0
412 C X+74,375 Y+0 DR+
413 CC X+77,55 Y+0
414 C X+80,725 Y+0 DR+
415 CC X+77,45 Y+0
416 C X+74,175 Y+0 DR+
417 CC X+77,55 Y+0
418 C X+80,925 Y+0 DR+
419 CC X+77,45 Y+0
420 C X+73,975 Y+0 DR+
421 CC X+77,55 Y+0
422 C X+81,125 Y+0 DR+
423 CC X+77,45 Y+0
424 C X+73,775 Y+0 DR+
425 CC X+77,55 Y+0
426 C X+75,644 Y-3,258 DR+
427 CC X+77,5 Y+0
428 C X+81,25 Y+0 DR+
429 CC X+77,5 Y+0
430 C X+75,644 Y-3,258 DR+
431 L Z+50 FMAX
432 L X+36,414 Y-0,844 FMAX
433 L Z+2 FMAX
434 L Z-10 F297
435 L X+36,439 F3565
436 CC X+36,364 Y-0,844
437 C X+36,289 Y-0,844 DR+
438 CC X+36,464 Y-0,844
439 C X+36,639 Y-0,844 DR+
440 CC X+36,364 Y-0,844
441 C X+36,089 Y-0,844 DR+
442 CC X+36,464 Y-0,844
443 C X+36,839 Y-0,844 DR+
444 CC X+36,364 Y-0,844
445 C X+35,889 Y-0,844 DR+
446 CC X+36,464 Y-0,844
447 C X+37,039 Y-0,844 DR+
448 CC X+36,364 Y-0,844
449 C X+35,689 Y-0,844 DR+
450 CC X+36,464 Y-0,844
451 C X+37,239 Y-0,844 DR+
452 CC X+36,364 Y-0,844
453 C X+35,489 Y-0,844 DR+
454 CC X+36,464 Y-0,844
455 C X+37,439 Y-0,844 DR+
456 CC X+36,364 Y-0,844
457 C X+35,289 Y-0,844 DR+
458 CC X+36,464 Y-0,844
459 C X+37,639 Y-0,844 DR+
460 CC X+36,364 Y-0,844
461 C X+35,089 Y-0,844 DR+
462 CC X+36,464 Y-0,844
463 C X+37,839 Y-0,844 DR+
464 CC X+36,364 Y-0,844
465 C X+34,889 Y-0,844 DR+
466 CC X+36,464 Y-0,844
467 C X+38,039 Y-0,844 DR+
468 CC X+36,364 Y-0,844
469 C X+34,689 Y-0,844 DR+
470 CC X+36,464 Y-0,844
471 C X+38,239 Y-0,844 DR+
472 CC X+36,364 Y-0,844
473 C X+34,489 Y-0,844 DR+
474 CC X+36,464 Y-0,844
475 C X+38,439 Y-0,844 DR+
476 CC X+36,364 Y-0,844
477 C X+34,289 Y-0,844 DR+
478 CC X+36,464 Y-0,844
479 C X+38,639 Y-0,844 DR+
480 CC X+36,364 Y-0,844
481 C X+34,089 Y-0,844 DR+
482 CC X+36,464 Y-0,844
483 C X+38,839 Y-0,844 DR+
484 CC X+36,364 Y-0,844
485 C X+33,889 Y-0,844 DR+
486 CC X+36,464 Y-0,844
487 C X+39,039 Y-0,844 DR+
488 CC X+36,364 Y-0,844
489 C X+33,689 Y-0,844 DR+
490 CC X+36,464 Y-0,844
491 C X+39,239 Y-0,844 DR+
492 CC X+36,364 Y-0,844
493 C X+33,489 Y-0,844 DR+
494 CC X+36,464 Y-0,844
495 C X+39,439 Y-0,844 DR+
496 CC X+36,364 Y-0,844
497 C X+33,289 Y-0,844 DR+
498 CC X+36,464 Y-0,844
499 C X+39,639 Y-0,844 DR+
500 CC X+36,364 Y-0,844
501 C X+33,089 Y-0,844 DR+
502 CC X+36,464 Y-0,844
503 C X+39,839 Y-0,844 DR+
504 CC X+36,364 Y-0,844
505 C X+34,646 Y+2,177 DR+
506 CC X+36,414 Y-0,844
507 C X+39,914 Y-0,844 DR+
508 CC X+36,414 Y-0,844
509 C X+34,646 Y+2,177 DR+
510 L Z+50 FMAX
511 L X+2,586 Y-13,156 FMAX
512 L Z+2 FMAX
513 L Z-10 F297
514 L X+2,611 F3565
515 CC X+2,536 Y-13,156
516 C X+2,461 Y-13,156 DR+
517 CC X+2,636 Y-13,156
518 C X+2,811 Y-13,156 DR+
519 CC X+2,536 Y-13,156
520 C X+2,261 Y-13,156 DR+
521 CC X+2,636 Y-13,156
522 C X+3,011 Y-13,156 DR+
523 CC X+2,536 Y-13,156
524 C X+2,061 Y-13,156 DR+
525 CC X+2,636 Y-13,156
526 C X+3,211 Y-13,156 DR+
527 CC X+2,536 Y-13,156
528 C X+1,861 Y-13,156 DR+
529 CC X+2,636 Y-13,156
530 C X+3,411 Y-13,156 DR+
531 CC X+2,536 Y-13,156
532 C X+1,661 Y-13,156 DR+
533 CC X+2,636 Y-13,156
534 C X+3,611 Y-13,156 DR+
535 CC X+2,536 Y-13,156
536 C X+1,461 Y-13,156 DR+
537 CC X+2,636 Y-13,156
538 C X+3,811 Y-13,156 DR+
539 CC X+2,536 Y-13,156
540 C X+1,261 Y-13,156 DR+
541 CC X+2,636 Y-13,156
542 C X+4,011 Y-13,156 DR+
543 CC X+2,536 Y-13,156
544 C X+1,061 Y-13,156 DR+
545 CC X+2,636 Y-13,156
546 C X+4,211 Y-13,156 DR+
547 CC X+2,536 Y-13,156
548 C X+0,861 Y-13,156 DR+
549 CC X+2,636 Y-13,156
550 C X+4,411 Y-13,156 DR+
551 CC X+2,536 Y-13,156
552 C X+0,661 Y-13,156 DR+
553 CC X+2,636 Y-13,156
554 C X+4,611 Y-13,156 DR+
555 CC X+2,536 Y-13,156
556 C X+0,461 Y-13,156 DR+
557 CC X+2,636 Y-13,156
558 C X+4,811 Y-13,156 DR+
559 CC X+2,536 Y-13,156
560 C X+0,261 Y-13,156 DR+
561 CC X+2,636 Y-13,156
562 C X+5,011 Y-13,156 DR+
563 CC X+2,536 Y-13,156
564 C X+1,317 Y-11,002 DR+
565 CC X+2,586 Y-13,156
566 C X+5,086 Y-13,156 DR+
567 CC X+2,586 Y-13,156
568 C X+1,317 Y-11,002 DR+
569 L Z+50 FMAX
570 L X-82,5 Y-20 FMAX
571 L Z+2 FMAX
572 L Z-10 F297
573 L X-82,475 F3565
574 CC X-82,55 Y-20
575 C X-82,625 Y-20 DR+
576 CC X-82,45 Y-20
577 C X-82,275 Y-20 DR+
578 CC X-82,55 Y-20
579 C X-82,825 Y-20 DR+
580 CC X-82,45 Y-20
581 C X-82,075 Y-20 DR+
582 CC X-82,55 Y-20
583 C X-83,025 Y-20 DR+
584 CC X-82,45 Y-20
585 C X-81,875 Y-20 DR+
586 CC X-82,55 Y-20
587 C X-83,225 Y-20 DR+
588 CC X-82,45 Y-20
589 C X-81,675 Y-20 DR+
590 CC X-82,55 Y-20
591 C X-83,425 Y-20 DR+
592 CC X-82,45 Y-20
593 C X-81,475 Y-20 DR+
594 CC X-82,55 Y-20
595 C X-83,625 Y-20 DR+
596 CC X-82,45 Y-20
597 C X-81,275 Y-20 DR+
598 CC X-82,55 Y-20
599 C X-83,825 Y-20 DR+
600 CC X-82,45 Y-20
601 C X-81,075 Y-20 DR+
602 CC X-82,55 Y-20
603 C X-84,025 Y-20 DR+
604 CC X-82,45 Y-20
605 C X-80,875 Y-20 DR+
606 CC X-82,55 Y-20
607 C X-84,225 Y-20 DR+
608 CC X-82,45 Y-20
609 C X-80,675 Y-20 DR+
610 CC X-82,55 Y-20
611 C X-84,425 Y-20 DR+
612 CC X-82,45 Y-20
613 C X-80,475 Y-20 DR+
614 CC X-82,55 Y-20
615 C X-84,625 Y-20 DR+
616 CC X-82,45 Y-20
617 C X-80,275 Y-20 DR+
618 CC X-82,55 Y-20
619 C X-84,825 Y-20 DR+
620 CC X-82,45 Y-20
621 C X-80,075 Y-20 DR+
622 CC X-82,55 Y-20
623 C X-85,025 Y-20 DR+
624 CC X-82,45 Y-20
625 C X-79,875 Y-20 DR+
626 CC X-82,55 Y-20
627 C X-85,225 Y-20 DR+
628 CC X-82,45 Y-20
629 C X-79,675 Y-20 DR+
630 CC X-82,55 Y-20
631 C X-85,425 Y-20 DR+
632 CC X-82,45 Y-20
633 C X-79,475 Y-20 DR+
634 CC X-82,55 Y-20
635 C X-85,625 Y-20 DR+
636 CC X-82,45 Y-20
637 C X-79,275 Y-20 DR+
638 CC X-82,55 Y-20
639 C X-80,894 Y-17,175 DR+
640 CC X-82,5 Y-20
641 C X-79,25 Y-20 DR+
642 CC X-82,5 Y-20
643 C X-80,894 Y-17,175 DR+
644 L Z+50 FMAX
645 L X-82,5 Y-45 FMAX
646 L Z+2 FMAX
647 L Z-10 F297
648 L X-82,475 F3565
649 CC X-82,55 Y-45
650 C X-82,625 Y-45 DR+
651 CC X-82,45 Y-45
652 C X-82,275 Y-45 DR+
653 CC X-82,55 Y-45
654 C X-82,825 Y-45 DR+
655 CC X-82,45 Y-45
656 C X-82,075 Y-45 DR+
657 CC X-82,55 Y-45
658 C X-83,025 Y-45 DR+
659 CC X-82,45 Y-45
660 C X-81,875 Y-45 DR+
661 CC X-82,55 Y-45
662 C X-83,225 Y-45 DR+
663 CC X-82,45 Y-45
664 C X-81,675 Y-45 DR+
665 CC X-82,55 Y-45
666 C X-83,425 Y-45 DR+
667 CC X-82,45 Y-45
668 C X-81,475 Y-45 DR+
669 CC X-82,55 Y-45
670 C X-83,625 Y-45 DR+
671 CC X-82,45 Y-45
672 C X-81,275 Y-45 DR+
673 CC X-82,55 Y-45
674 C X-83,825 Y-45 DR+
675 CC X-82,45 Y-45
676 C X-81,075 Y-45 DR+
677 CC X-82,55 Y-45
678 C X-84,025 Y-45 DR+
679 CC X-82,45 Y-45
680 C X-80,875 Y-45 DR+
681 CC X-82,55 Y-45
682 C X-84,225 Y-45 DR+
683 CC X-82,45 Y-45
684 C X-80,675 Y-45 DR+
685 CC X-82,55 Y-45
686 C X-84,425 Y-45 DR+
687 CC X-82,45 Y-45
688 C X-80,475 Y-45 DR+
689 CC X-82,55 Y-45
690 C X-84,625 Y-45 DR+
691 CC X-82,45 Y-45
692 C X-80,275 Y-45 DR+
693 CC X-82,55 Y-45
694 C X-84,825 Y-45 DR+
695 CC X-82,45 Y-45
696 C X-80,075 Y-45 DR+
697 CC X-82,55 Y-45
698 C X-83,769 Y-42,846 DR+
699 CC X-82,5 Y-45
700 C X-80 Y-45 DR+
701 CC X-82,5 Y-45
702 C X-83,769 Y-42,846 DR+
703 L Z+50 FMAX
704 L X-17,5 Y-45 FMAX
705 L Z+2 FMAX
706 L Z-10 F297
707 L X-17,475 F3565
708 CC X-17,55 Y-45
709 C X-17,625 Y-45 DR+
710 CC X-17,45 Y-45
711 C X-17,275 Y-45 DR+
712 CC X-17,55 Y-45
713 C X-17,825 Y-45 DR+
714 CC X-17,45 Y-45
715 C X-17,075 Y-45 DR+
716 CC X-17,55 Y-45
717 C X-18,025 Y-45 DR+
718 CC X-17,45 Y-45
719 C X-16,875 Y-45 DR+
720 CC X-17,55 Y-45
721 C X-18,225 Y-45 DR+
722 CC X-17,45 Y-45
723 C X-16,675 Y-45 DR+
724 CC X-17,55 Y-45
725 C X-18,425 Y-45 DR+
726 CC X-17,45 Y-45
727 C X-16,475 Y-45 DR+
728 CC X-17,55 Y-45
729 C X-18,625 Y-45 DR+
730 CC X-17,45 Y-45
731 C X-16,275 Y-45 DR+
732 CC X-17,55 Y-45
733 C X-18,825 Y-45 DR+
734 CC X-17,45 Y-45
735 C X-16,075 Y-45 DR+
736 CC X-17,55 Y-45
737 C X-19,025 Y-45 DR+
738 CC X-17,45 Y-45
739 C X-15,875 Y-45 DR+
740 CC X-17,55 Y-45
741 C X-19,225 Y-45 DR+
742 CC X-17,45 Y-45
743 C X-15,675 Y-45 DR+
744 CC X-17,55 Y-45
745 C X-19,425 Y-45 DR+
746 CC X-17,45 Y-45
747 C X-15,475 Y-45 DR+
748 CC X-17,55 Y-45
749 C X-19,625 Y-45 DR+
750 CC X-17,45 Y-45
751 C X-15,275 Y-45 DR+
752 CC X-17,55 Y-45
753 C X-19,825 Y-45 DR+
754 CC X-17,45 Y-45
755 C X-15,075 Y-45 DR+
756 CC X-17,55 Y-45
757 C X-20,025 Y-45 DR+
758 CC X-17,45 Y-45
759 C X-14,875 Y-45 DR+
760 CC X-17,55 Y-45
761 C X-20,225 Y-45 DR+
762 CC X-17,45 Y-45
763 C X-14,675 Y-45 DR+
764 CC X-17,55 Y-45
765 C X-20,425 Y-45 DR+
766 CC X-17,45 Y-45
767 C X-14,475 Y-45 DR+
768 CC X-17,55 Y-45
769 C X-20,625 Y-45 DR+
770 CC X-17,45 Y-45
771 C X-14,275 Y-45 DR+
772 CC X-17,55 Y-45
773 C X-20,825 Y-45 DR+
774 CC X-17,45 Y-45
775 C X-14,075 Y-45 DR+
776 CC X-17,55 Y-45
777 C X-21,025 Y-45 DR+
778 CC X-17,45 Y-45
779 C X-13,875 Y-45 DR+
780 CC X-17,55 Y-45
781 C X-21,225 Y-45 DR+
782 CC X-17,45 Y-45
783 C X-19,356 Y-48,258 DR+
784 CC X-17,5 Y-45
785 C X-13,75 Y-45 DR+
786 CC X-17,5 Y-45
787 C X-19,356 Y-48,258 DR+
788 L Z+50 FMAX
789 L X+82,5 Y-45 FMAX
790 L Z+2 FMAX
791 L Z-10 F297
792 L X+82,525 F3565
793 CC X+82,45 Y-45
794 C X+82,375 Y-45 DR+
795 CC X+82,55 Y-45
796 C X+82,725 Y-45 DR+
797 CC X+82,45 Y-45
798 C X+82,175 Y-45 DR+
799 CC X+82,55 Y-45
800 C X+82,925 Y-45 DR+
801 CC X+82,45 Y-45
802 C X+81,975 Y-45 DR+
803 CC X+82,55 Y-45
804 C X+83,125 Y-45 DR+
805 CC X+82,45 Y-45
806 C X+81,775 Y-45 DR+
807 CC X+82,55 Y-45
808 C X+83,325 Y-45 DR+
809 CC X+82,45 Y-45
810 C X+81,575 Y-45 DR+
811 CC X+82,55 Y-45
812 C X+83,525 Y-45 DR+
813 CC X+82,45 Y-45
814 C X+81,375 Y-45 DR+
815 CC X+82,55 Y-45
816 C X+83,725 Y-45 DR+
817 CC X+82,45 Y-45
818 C X+81,175 Y-45 DR+
819 CC X+82,55 Y-45
820 C X+83,925 Y-45 DR+
821 CC X+82,45 Y-45
822 C X+80,975 Y-45 DR+
823 CC X+82,55 Y-45
824 C X+84,125 Y-45 DR+
825 CC X+82,45 Y-45
826 C X+80,775 Y-45 DR+
827 CC X+82,55 Y-45
828 C X+84,325 Y-45 DR+
829 CC X+82,45 Y-45
830 C X+80,575 Y-45 DR+
831 CC X+82,55 Y-45
832 C X+84,525 Y-45 DR+
833 CC X+82,45 Y-45
834 C X+80,375 Y-45 DR+
835 CC X+82,55 Y-45
836 C X+84,725 Y-45 DR+
837 CC X+82,45 Y-45
838 C X+80,175 Y-45 DR+
839 CC X+82,55 Y-45
840 C X+84,925 Y-45 DR+
841 CC X+82,45 Y-45
842 C X+81,231 Y-42,846 DR+
843 CC X+82,5 Y-45
844 C X+85 Y-45 DR+
845 CC X+82,5 Y-45
846 C X+81,231 Y-42,846 DR+
847 L Z+50 FMAX
848 TOOL CALL 19 Z S7427 DR-3
849 L X-82,5 Y+45 Z+50 FMAX
850 L Z+2 FMAX
851 L Z-10 F297
852 L X-83,8 Y+45,6 RL F3565
853 L X-84,4
854 CC X-84,4 Y+45
855 C X-85 Y+45 DR+
856 CC X-82,5 Y+45
857 C X-80 Y+45 DR+
858 CC X-82,5 Y+45
859 C X-85 Y+45 DR+
860 CC X-82,5 Y+45
861 C X-84,242 Y+43,207 DR+
862 CC X-82,5 Y+45
863 C X-80 Y+45 DR+
864 CC X-82,5 Y+45
865 C X-85 Y+45 DR+
866 CC X-82,5 Y+45
867 C X-84,242 Y+43,207 DR+
868 CC X-83,824 Y+43,637
869 C X-83,393 Y+43,219 DR+
870 L X-82,975 Y+43,649
871 L X-82,5 Y+45 R0
872 L Z+50 FMAX
873 L X-42,5 FMAX
874 L Z+2 FMAX
875 L Z-10 F297
876 L X-45,05 Y+45,6 RL F3565
877 L X-45,65
878 CC X-45,65 Y+45
879 C X-46,25 Y+45 DR+
880 CC X-42,5 Y+45
881 C X-38,75 Y+45 DR+
882 CC X-42,5 Y+45
883 C X-46,25 Y+45 DR+
884 CC X-42,5 Y+45
885 C X-45,729 Y+43,093 DR+
886 CC X-42,5 Y+45
887 C X-38,75 Y+45 DR+
888 CC X-42,5 Y+45
889 C X-46,25 Y+45 DR+
890 CC X-42,5 Y+45
891 C X-45,729 Y+43,093 DR+
892 CC X-45,213 Y+43,399
893 C X-44,907 Y+42,882 DR+
894 L X-44,391 Y+43,187
895 L X-42,5 Y+45 R0
896 L Z+50 FMAX
897 L X+57,5 FMAX
898 L Z+2 FMAX
899 L Z-10 F297
900 L X+55,45 Y+45,6 RL F3565
901 L X+54,85
902 CC X+54,85 Y+45
903 C X+54,25 Y+45 DR+
904 CC X+57,5 Y+45
905 C X+60,75 Y+45 DR+
906 CC X+57,5 Y+45
907 C X+54,25 Y+45 DR+
908 CC X+57,5 Y+45
909 C X+54,846 Y+43,124 DR+
910 CC X+57,5 Y+45
911 C X+60,75 Y+45 DR+
912 CC X+57,5 Y+45
913 C X+54,25 Y+45 DR+
914 CC X+57,5 Y+45
915 C X+54,846 Y+43,124 DR+
916 CC X+55,336 Y+43,47
917 C X+55,682 Y+42,98 DR+
918 L X+56,172 Y+43,327
919 L X+57,5 Y+45 R0
920 L Z+50 FMAX
921 L X+82,5 FMAX
922 L Z+2 FMAX
923 L Z-10 F297
924 L X+81,2 Y+45,6 RL F3565
925 L X+80,6
926 CC X+80,6 Y+45
927 C X+80 Y+45 DR+
928 CC X+82,5 Y+45
929 C X+85 Y+45 DR+
930 CC X+82,5 Y+45
931 C X+80 Y+45 DR+
932 CC X+82,5 Y+45
933 C X+80,758 Y+43,207 DR+
934 CC X+82,5 Y+45
935 C X+85 Y+45 DR+
936 CC X+82,5 Y+45
937 C X+80 Y+45 DR+
938 CC X+82,5 Y+45
939 C X+80,758 Y+43,207 DR+
940 CC X+81,176 Y+43,637
941 C X+81,607 Y+43,219 DR+
942 L X+82,025 Y+43,649
943 L X+82,5 Y+45 R0
944 L Z+50 FMAX
945 L X+77,5 Y+0 FMAX
946 L Z+2 FMAX
947 L Z-10 F297
948 L X+74,95 Y+0,6 RL F3565
949 L X+74,35
950 CC X+74,35 Y+0
951 C X+73,75 Y+0 DR+
952 CC X+77,5 Y+0
953 C X+81,25 Y+0 DR+
954 CC X+77,5 Y+0
955 C X+73,75 Y+0 DR+
956 CC X+77,5 Y+0
957 C X+74,271 Y-1,907 DR+
958 CC X+77,5 Y+0
959 C X+81,25 Y+0 DR+
960 CC X+77,5 Y+0
961 C X+73,75 Y+0 DR+
962 CC X+77,5 Y+0
963 C X+74,271 Y-1,907 DR+
964 CC X+74,787 Y-1,601
965 C X+75,093 Y-2,118 DR+
966 L X+75,609 Y-1,813
967 L X+77,5 Y+0 R0
968 L Z+50 FMAX
969 L X+36,414 Y-0,844 FMAX
970 L Z+2 FMAX
971 L Z-10 F297
972 L X+34,114 Y-0,244 RL F3565
973 L X+33,514
974 CC X+33,514 Y-0,844
975 C X+32,914 Y-0,844 DR+
976 CC X+36,414 Y-0,844
977 C X+39,914 Y-0,844 DR+
978 CC X+36,414 Y-0,844
979 C X+32,914 Y-0,844 DR+
980 CC X+36,414 Y-0,844
981 C X+33,471 Y-2,737 DR+
982 CC X+36,414 Y-0,844
983 C X+39,914 Y-0,844 DR+
984 CC X+36,414 Y-0,844
985 C X+32,914 Y-0,844 DR+
986 CC X+36,414 Y-0,844
987 C X+33,471 Y-2,737 DR+
988 CC X+33,975 Y-2,412
989 C X+34,3 Y-2,917 DR+
990 L X+34,804 Y-2,592
991 L X+36,414 Y-0,844 R0
992 L Z+50 FMAX
993 L X+2,586 Y-13,156 FMAX
994 L Z+2 FMAX
995 L Z-10 F297
996 L X+1,286 Y-12,556 RL F3565
997 L X+0,686
998 CC X+0,686 Y-13,156
999 C X+0,086 Y-13,156 DR+
1000 CC X+2,586 Y-13,156
1001 C X+5,086 Y-13,156 DR+
1002 CC X+2,586 Y-13,156
1003 C X+0,086 Y-13,156 DR+
1004 CC X+2,586 Y-13,156
1005 C X+0,844 Y-14,95 DR+
1006 CC X+2,586 Y-13,156
1007 C X+5,086 Y-13,156 DR+
1008 CC X+2,586 Y-13,156
1009 C X+0,086 Y-13,156 DR+
1010 CC X+2,586 Y-13,156
1011 C X+0,844 Y-14,95 DR+
1012 CC X+1,262 Y-14,519
1013 C X+1,692 Y-14,937 DR+
1014 L X+2,11 Y-14,507
1015 L X+2,586 Y-13,156 R0
1016 L Z+50 FMAX
1017 L X-82,5 Y-20 FMAX
1018 L Z+2 FMAX
1019 L Z-10 F297
1020 L X-84,55 Y-19,4 RL F3565
1021 L X-85,15
1022 CC X-85,15 Y-20
1023 C X-85,75 Y-20 DR+
1024 CC X-82,5 Y-20
1025 C X-79,25 Y-20 DR+
1026 CC X-82,5 Y-20
1027 C X-85,75 Y-20 DR+
1028 CC X-82,5 Y-20
1029 C X-85,154 Y-21,876 DR+
1030 CC X-82,5 Y-20
1031 C X-79,25 Y-20 DR+
1032 CC X-82,5 Y-20
1033 C X-85,75 Y-20 DR+
1034 CC X-82,5 Y-20
1035 C X-85,154 Y-21,876 DR+
1036 CC X-84,664 Y-21,53
1037 C X-84,318 Y-22,02 DR+
1038 L X-83,828 Y-21,673
1039 L X-82,5 Y-20 R0
1040 L Z+50 FMAX
1041 L Y-45 FMAX
1042 L Z+2 FMAX
1043 L Z-10 F297
1044 L X-83,8 Y-44,4 RL F3565
1045 L X-84,4
1046 CC X-84,4 Y-45
1047 C X-85 Y-45 DR+
1048 CC X-82,5 Y-45
1049 C X-80 Y-45 DR+
1050 CC X-82,5 Y-45
1051 C X-85 Y-45 DR+
1052 CC X-82,5 Y-45
1053 C X-84,242 Y-46,793 DR+
1054 CC X-82,5 Y-45
1055 C X-80 Y-45 DR+
1056 CC X-82,5 Y-45
1057 C X-85 Y-45 DR+
1058 CC X-82,5 Y-45
1059 C X-84,242 Y-46,793 DR+
1060 CC X-83,824 Y-46,363
1061 C X-83,393 Y-46,781 DR+
1062 L X-82,975 Y-46,351
1063 L X-82,5 Y-45 R0
1064 L Z+50 FMAX
1065 L X-17,5 FMAX
1066 L Z+2 FMAX
1067 L Z-10 F297
1068 L X-20,05 Y-44,4 RL F3565
1069 L X-20,65
1070 CC X-20,65 Y-45
1071 C X-21,25 Y-45 DR+
1072 CC X-17,5 Y-45
1073 C X-13,75 Y-45 DR+
1074 CC X-17,5 Y-45
1075 C X-21,25 Y-45 DR+
1076 CC X-17,5 Y-45
1077 C X-20,729 Y-46,907 DR+
1078 CC X-17,5 Y-45
1079 C X-13,75 Y-45 DR+
1080 CC X-17,5 Y-45
1081 C X-21,25 Y-45 DR+
1082 CC X-17,5 Y-45
1083 C X-20,729 Y-46,907 DR+
1084 CC X-20,213 Y-46,601
1085 C X-19,907 Y-47,118 DR+
1086 L X-19,391 Y-46,813
1087 L X-17,5 Y-45 R0
1088 L Z+50 FMAX
1089 L X+82,5 FMAX
1090 L Z+2 FMAX
1091 L Z-10 F297
1092 L X+81,2 Y-44,4 RL F3565
1093 L X+80,6
1094 CC X+80,6 Y-45
1095 C X+80 Y-45 DR+
1096 CC X+82,5 Y-45
1097 C X+85 Y-45 DR+
1098 CC X+82,5 Y-45
1099 C X+80 Y-45 DR+
1100 CC X+82,5 Y-45
1101 C X+80,758 Y-46,793 DR+
1102 CC X+82,5 Y-45
1103 C X+85 Y-45 DR+
1104 CC X+82,5 Y-45
1105 C X+80 Y-45 DR+
1106 CC X+82,5 Y-45
1107 C X+80,758 Y-46,793 DR+
1108 CC X+81,176 Y-46,363
1109 C X+81,607 Y-46,781 DR+
1110 L X+82,025 Y-46,351
1111 L X+82,5 Y-45 R0
1112 L Z+50 FMAX
1113 M78
1114 M5
1115 L Z-1 FMAX M91
1116 L Y-1 FMAX M91
1117 M30
1118 END PGM REP35-20977-OP10-CALE DE CHOCS MATRICE-B MM
