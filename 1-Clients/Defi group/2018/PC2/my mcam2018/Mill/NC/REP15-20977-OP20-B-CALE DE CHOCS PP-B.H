0 BEGIN PGM REP15-20977-OP20-B-CALE DE CHOCS PP-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP15-20977-OP20-B-CALE DE CHOCS PP-B
4 ; PROG-CN DU 29-09-20 A 11:23
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
11 ; T18 P15322450 TB POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-2*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 2
19 L X+62,5 Y+55 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,8 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,8 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X+62,5 Y+55 FMAX M99
24 L X-47,5 FMAX M99
25 L X+27,5 Y+30 FMAX M99
26 L Y-30 FMAX M99
27 L X-22,5 Y+30 FMAX M99
28 L X-62,5 Y-55 FMAX M99
29 L Y-25 FMAX M99
30 L X+62,5 Y-55 FMAX M99
31 L Y-25 FMAX M99
32 L X-37,5 Y-39,5 FMAX M99
33 L Y-23,5 FMAX M99
34 L Z+50 FMAX
35 M9
36 M5
37 L Z-1 FMAX M91
38 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
39 TOOL CALL 2 Z S2000 DR+0
40 TOOL DEF 19
41 L X+62,5 Y+55 FMAX M3
42 L Z+50 FMAX M8
43 ;  DEBOURRAGE
44 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-12 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
45 L X+62,5 Y+55 FMAX M99
46 L X-47,5 FMAX M99
47 L X+27,5 Y+30 FMAX M99
48 L Y-30 FMAX M99
49 L X-22,5 Y+30 FMAX M99
50 L X-62,5 Y-55 FMAX M99
51 L Y-25 FMAX M99
52 L X+62,5 Y-55 FMAX M99
53 L Y-25 FMAX M99
54 L X-37,5 Y-39,5 FMAX M99
55 L Y-23,5 FMAX M99
56 L Z+50 FMAX
57 M9
58 M5
59 L Z-1 FMAX M91
60 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
61 ; CORRECTION AUCUNE
62 ; SUREP R 0. SUREP Z 0.
63 TOOL CALL 19 Z S7427 DR+0
64 TOOL DEF 18
65 L X-47,5 Y+55 FMAX M3
66 L Z+50 FMAX M8
67 L Z+2 FMAX
68 L Z-10 F297
69 L X-47,475 F3565
70 CC X-47,55 Y+55
71 C X-47,625 Y+55 DR+
72 CC X-47,45 Y+55
73 C X-47,275 Y+55 DR+
74 CC X-47,55 Y+55
75 C X-47,825 Y+55 DR+
76 CC X-47,45 Y+55
77 C X-47,075 Y+55 DR+
78 CC X-47,55 Y+55
79 C X-48,025 Y+55 DR+
80 CC X-47,45 Y+55
81 C X-46,875 Y+55 DR+
82 CC X-47,55 Y+55
83 C X-48,225 Y+55 DR+
84 CC X-47,45 Y+55
85 C X-46,675 Y+55 DR+
86 CC X-47,55 Y+55
87 C X-48,425 Y+55 DR+
88 CC X-47,45 Y+55
89 C X-46,475 Y+55 DR+
90 CC X-47,55 Y+55
91 C X-48,625 Y+55 DR+
92 CC X-47,45 Y+55
93 C X-46,275 Y+55 DR+
94 CC X-47,55 Y+55
95 C X-48,825 Y+55 DR+
96 CC X-47,45 Y+55
97 C X-46,075 Y+55 DR+
98 CC X-47,55 Y+55
99 C X-49,025 Y+55 DR+
100 CC X-47,45 Y+55
101 C X-45,875 Y+55 DR+
102 CC X-47,55 Y+55
103 C X-49,225 Y+55 DR+
104 CC X-47,45 Y+55
105 C X-45,675 Y+55 DR+
106 CC X-47,55 Y+55
107 C X-49,425 Y+55 DR+
108 CC X-47,45 Y+55
109 C X-45,475 Y+55 DR+
110 CC X-47,55 Y+55
111 C X-49,625 Y+55 DR+
112 CC X-47,45 Y+55
113 C X-45,275 Y+55 DR+
114 CC X-47,55 Y+55
115 C X-49,825 Y+55 DR+
116 CC X-47,45 Y+55
117 C X-45,075 Y+55 DR+
118 CC X-47,55 Y+55
119 C X-50,025 Y+55 DR+
120 CC X-47,45 Y+55
121 C X-44,875 Y+55 DR+
122 CC X-47,55 Y+55
123 C X-50,225 Y+55 DR+
124 CC X-47,45 Y+55
125 C X-44,675 Y+55 DR+
126 CC X-47,55 Y+55
127 C X-50,425 Y+55 DR+
128 CC X-47,45 Y+55
129 C X-44,475 Y+55 DR+
130 CC X-47,55 Y+55
131 C X-50,625 Y+55 DR+
132 CC X-47,45 Y+55
133 C X-44,275 Y+55 DR+
134 CC X-47,55 Y+55
135 C X-50,825 Y+55 DR+
136 CC X-47,45 Y+55
137 C X-44,075 Y+55 DR+
138 CC X-47,55 Y+55
139 C X-49,269 Y+58,02 DR+
140 CC X-47,5 Y+55
141 C X-44 Y+55 DR+
142 CC X-47,5 Y+55
143 C X-49,269 Y+58,02 DR+
144 L Z+50 FMAX
145 L X+62,5 Y+55 FMAX
146 L Z+2 FMAX
147 L Z-10 F297
148 L X+62,525 F3565
149 CC X+62,45 Y+55
150 C X+62,375 Y+55 DR+
151 CC X+62,55 Y+55
152 C X+62,725 Y+55 DR+
153 CC X+62,45 Y+55
154 C X+62,175 Y+55 DR+
155 CC X+62,55 Y+55
156 C X+62,925 Y+55 DR+
157 CC X+62,45 Y+55
158 C X+61,975 Y+55 DR+
159 CC X+62,55 Y+55
160 C X+63,125 Y+55 DR+
161 CC X+62,45 Y+55
162 C X+61,775 Y+55 DR+
163 CC X+62,55 Y+55
164 C X+63,325 Y+55 DR+
165 CC X+62,45 Y+55
166 C X+61,575 Y+55 DR+
167 CC X+62,55 Y+55
168 C X+63,525 Y+55 DR+
169 CC X+62,45 Y+55
170 C X+61,375 Y+55 DR+
171 CC X+62,55 Y+55
172 C X+63,725 Y+55 DR+
173 CC X+62,45 Y+55
174 C X+61,175 Y+55 DR+
175 CC X+62,55 Y+55
176 C X+63,925 Y+55 DR+
177 CC X+62,45 Y+55
178 C X+60,975 Y+55 DR+
179 CC X+62,55 Y+55
180 C X+64,125 Y+55 DR+
181 CC X+62,45 Y+55
182 C X+60,775 Y+55 DR+
183 CC X+62,55 Y+55
184 C X+64,325 Y+55 DR+
185 CC X+62,45 Y+55
186 C X+60,575 Y+55 DR+
187 CC X+62,55 Y+55
188 C X+64,525 Y+55 DR+
189 CC X+62,45 Y+55
190 C X+60,375 Y+55 DR+
191 CC X+62,55 Y+55
192 C X+64,725 Y+55 DR+
193 CC X+62,45 Y+55
194 C X+60,175 Y+55 DR+
195 CC X+62,55 Y+55
196 C X+64,925 Y+55 DR+
197 CC X+62,45 Y+55
198 C X+59,975 Y+55 DR+
199 CC X+62,55 Y+55
200 C X+65,125 Y+55 DR+
201 CC X+62,45 Y+55
202 C X+59,775 Y+55 DR+
203 CC X+62,55 Y+55
204 C X+65,325 Y+55 DR+
205 CC X+62,45 Y+55
206 C X+59,575 Y+55 DR+
207 CC X+62,55 Y+55
208 C X+65,525 Y+55 DR+
209 CC X+62,45 Y+55
210 C X+59,375 Y+55 DR+
211 CC X+62,55 Y+55
212 C X+65,725 Y+55 DR+
213 CC X+62,45 Y+55
214 C X+59,175 Y+55 DR+
215 CC X+62,55 Y+55
216 C X+65,925 Y+55 DR+
217 CC X+62,45 Y+55
218 C X+60,731 Y+58,02 DR+
219 CC X+62,5 Y+55
220 C X+66 Y+55 DR+
221 CC X+62,5 Y+55
222 C X+60,731 Y+58,02 DR+
223 L Z+50 FMAX
224 L X+27,5 Y+30 FMAX
225 L Z+2 FMAX
226 L Z-10 F297
227 L X+27,525 F3565
228 CC X+27,45 Y+30
229 C X+27,375 Y+30 DR+
230 CC X+27,55 Y+30
231 C X+27,725 Y+30 DR+
232 CC X+27,45 Y+30
233 C X+27,175 Y+30 DR+
234 CC X+27,55 Y+30
235 C X+27,925 Y+30 DR+
236 CC X+27,45 Y+30
237 C X+26,975 Y+30 DR+
238 CC X+27,55 Y+30
239 C X+28,125 Y+30 DR+
240 CC X+27,45 Y+30
241 C X+26,775 Y+30 DR+
242 CC X+27,55 Y+30
243 C X+28,325 Y+30 DR+
244 CC X+27,45 Y+30
245 C X+26,575 Y+30 DR+
246 CC X+27,55 Y+30
247 C X+28,525 Y+30 DR+
248 CC X+27,45 Y+30
249 C X+26,375 Y+30 DR+
250 CC X+27,55 Y+30
251 C X+28,725 Y+30 DR+
252 CC X+27,45 Y+30
253 C X+26,175 Y+30 DR+
254 CC X+27,55 Y+30
255 C X+28,925 Y+30 DR+
256 CC X+27,45 Y+30
257 C X+25,975 Y+30 DR+
258 CC X+27,55 Y+30
259 C X+29,125 Y+30 DR+
260 CC X+27,45 Y+30
261 C X+25,775 Y+30 DR+
262 CC X+27,55 Y+30
263 C X+29,325 Y+30 DR+
264 CC X+27,45 Y+30
265 C X+25,575 Y+30 DR+
266 CC X+27,55 Y+30
267 C X+29,525 Y+30 DR+
268 CC X+27,45 Y+30
269 C X+25,375 Y+30 DR+
270 CC X+27,55 Y+30
271 C X+29,725 Y+30 DR+
272 CC X+27,45 Y+30
273 C X+25,175 Y+30 DR+
274 CC X+27,55 Y+30
275 C X+29,925 Y+30 DR+
276 CC X+27,45 Y+30
277 C X+24,975 Y+30 DR+
278 CC X+27,55 Y+30
279 C X+30,125 Y+30 DR+
280 CC X+27,45 Y+30
281 C X+24,775 Y+30 DR+
282 CC X+27,55 Y+30
283 C X+30,325 Y+30 DR+
284 CC X+27,45 Y+30
285 C X+24,575 Y+30 DR+
286 CC X+27,55 Y+30
287 C X+30,525 Y+30 DR+
288 CC X+27,45 Y+30
289 C X+24,375 Y+30 DR+
290 CC X+27,55 Y+30
291 C X+30,725 Y+30 DR+
292 CC X+27,45 Y+30
293 C X+24,175 Y+30 DR+
294 CC X+27,55 Y+30
295 C X+30,925 Y+30 DR+
296 CC X+27,45 Y+30
297 C X+25,731 Y+33,02 DR+
298 CC X+27,5 Y+30
299 C X+31 Y+30 DR+
300 CC X+27,5 Y+30
301 C X+25,731 Y+33,02 DR+
302 L Z+50 FMAX
303 L X-22,5 Y+30 FMAX
304 L Z+2 FMAX
305 L Z-10 F297
306 L X-22,475 F3565
307 CC X-22,55 Y+30
308 C X-22,625 Y+30 DR+
309 CC X-22,45 Y+30
310 C X-22,275 Y+30 DR+
311 CC X-22,55 Y+30
312 C X-22,825 Y+30 DR+
313 CC X-22,45 Y+30
314 C X-22,075 Y+30 DR+
315 CC X-22,55 Y+30
316 C X-23,025 Y+30 DR+
317 CC X-22,45 Y+30
318 C X-21,875 Y+30 DR+
319 CC X-22,55 Y+30
320 C X-23,225 Y+30 DR+
321 CC X-22,45 Y+30
322 C X-21,675 Y+30 DR+
323 CC X-22,55 Y+30
324 C X-23,425 Y+30 DR+
325 CC X-22,45 Y+30
326 C X-21,475 Y+30 DR+
327 CC X-22,55 Y+30
328 C X-23,625 Y+30 DR+
329 CC X-22,45 Y+30
330 C X-21,275 Y+30 DR+
331 CC X-22,55 Y+30
332 C X-23,825 Y+30 DR+
333 CC X-22,45 Y+30
334 C X-21,075 Y+30 DR+
335 CC X-22,55 Y+30
336 C X-24,025 Y+30 DR+
337 CC X-22,45 Y+30
338 C X-20,875 Y+30 DR+
339 CC X-22,55 Y+30
340 C X-24,225 Y+30 DR+
341 CC X-22,45 Y+30
342 C X-20,675 Y+30 DR+
343 CC X-22,55 Y+30
344 C X-24,425 Y+30 DR+
345 CC X-22,45 Y+30
346 C X-20,475 Y+30 DR+
347 CC X-22,55 Y+30
348 C X-24,625 Y+30 DR+
349 CC X-22,45 Y+30
350 C X-20,275 Y+30 DR+
351 CC X-22,55 Y+30
352 C X-24,825 Y+30 DR+
353 CC X-22,45 Y+30
354 C X-20,075 Y+30 DR+
355 CC X-22,55 Y+30
356 C X-25,025 Y+30 DR+
357 CC X-22,45 Y+30
358 C X-19,875 Y+30 DR+
359 CC X-22,55 Y+30
360 C X-25,225 Y+30 DR+
361 CC X-22,45 Y+30
362 C X-19,675 Y+30 DR+
363 CC X-22,55 Y+30
364 C X-25,425 Y+30 DR+
365 CC X-22,45 Y+30
366 C X-19,475 Y+30 DR+
367 CC X-22,55 Y+30
368 C X-25,625 Y+30 DR+
369 CC X-22,45 Y+30
370 C X-19,275 Y+30 DR+
371 CC X-22,55 Y+30
372 C X-25,825 Y+30 DR+
373 CC X-22,45 Y+30
374 C X-19,075 Y+30 DR+
375 CC X-22,55 Y+30
376 C X-24,269 Y+33,02 DR+
377 CC X-22,5 Y+30
378 C X-19 Y+30 DR+
379 CC X-22,5 Y+30
380 C X-24,269 Y+33,02 DR+
381 L Z+50 FMAX
382 L X-62,5 Y-25 FMAX
383 L Z+2 FMAX
384 L Z-10 F297
385 L X-62,475 F3565
386 CC X-62,55 Y-25
387 C X-62,625 Y-25 DR+
388 CC X-62,45 Y-25
389 C X-62,275 Y-25 DR+
390 CC X-62,55 Y-25
391 C X-62,825 Y-25 DR+
392 CC X-62,45 Y-25
393 C X-62,075 Y-25 DR+
394 CC X-62,55 Y-25
395 C X-63,025 Y-25 DR+
396 CC X-62,45 Y-25
397 C X-61,875 Y-25 DR+
398 CC X-62,55 Y-25
399 C X-63,225 Y-25 DR+
400 CC X-62,45 Y-25
401 C X-61,675 Y-25 DR+
402 CC X-62,55 Y-25
403 C X-63,425 Y-25 DR+
404 CC X-62,45 Y-25
405 C X-61,475 Y-25 DR+
406 CC X-62,55 Y-25
407 C X-63,625 Y-25 DR+
408 CC X-62,45 Y-25
409 C X-61,275 Y-25 DR+
410 CC X-62,55 Y-25
411 C X-63,825 Y-25 DR+
412 CC X-62,45 Y-25
413 C X-61,075 Y-25 DR+
414 CC X-62,55 Y-25
415 C X-64,025 Y-25 DR+
416 CC X-62,45 Y-25
417 C X-60,875 Y-25 DR+
418 CC X-62,55 Y-25
419 C X-64,225 Y-25 DR+
420 CC X-62,45 Y-25
421 C X-60,675 Y-25 DR+
422 CC X-62,55 Y-25
423 C X-64,425 Y-25 DR+
424 CC X-62,45 Y-25
425 C X-60,475 Y-25 DR+
426 CC X-62,55 Y-25
427 C X-64,625 Y-25 DR+
428 CC X-62,45 Y-25
429 C X-60,275 Y-25 DR+
430 CC X-62,55 Y-25
431 C X-64,825 Y-25 DR+
432 CC X-62,45 Y-25
433 C X-60,075 Y-25 DR+
434 CC X-62,55 Y-25
435 C X-65,025 Y-25 DR+
436 CC X-62,45 Y-25
437 C X-59,875 Y-25 DR+
438 CC X-62,55 Y-25
439 C X-65,225 Y-25 DR+
440 CC X-62,45 Y-25
441 C X-59,675 Y-25 DR+
442 CC X-62,55 Y-25
443 C X-65,425 Y-25 DR+
444 CC X-62,45 Y-25
445 C X-59,475 Y-25 DR+
446 CC X-62,55 Y-25
447 C X-65,625 Y-25 DR+
448 CC X-62,45 Y-25
449 C X-59,275 Y-25 DR+
450 CC X-62,55 Y-25
451 C X-60,894 Y-22,175 DR+
452 CC X-62,5 Y-25
453 C X-59,25 Y-25 DR+
454 CC X-62,5 Y-25
455 C X-60,894 Y-22,175 DR+
456 L Z+50 FMAX
457 L X-62,5 Y-55 FMAX
458 L Z+2 FMAX
459 L Z-10 F297
460 L X-62,475 F3565
461 CC X-62,55 Y-55
462 C X-62,625 Y-55 DR+
463 CC X-62,45 Y-55
464 C X-62,275 Y-55 DR+
465 CC X-62,55 Y-55
466 C X-62,825 Y-55 DR+
467 CC X-62,45 Y-55
468 C X-62,075 Y-55 DR+
469 CC X-62,55 Y-55
470 C X-63,025 Y-55 DR+
471 CC X-62,45 Y-55
472 C X-61,875 Y-55 DR+
473 CC X-62,55 Y-55
474 C X-63,225 Y-55 DR+
475 CC X-62,45 Y-55
476 C X-61,675 Y-55 DR+
477 CC X-62,55 Y-55
478 C X-63,425 Y-55 DR+
479 CC X-62,45 Y-55
480 C X-61,475 Y-55 DR+
481 CC X-62,55 Y-55
482 C X-63,625 Y-55 DR+
483 CC X-62,45 Y-55
484 C X-61,275 Y-55 DR+
485 CC X-62,55 Y-55
486 C X-63,825 Y-55 DR+
487 CC X-62,45 Y-55
488 C X-61,075 Y-55 DR+
489 CC X-62,55 Y-55
490 C X-64,025 Y-55 DR+
491 CC X-62,45 Y-55
492 C X-60,875 Y-55 DR+
493 CC X-62,55 Y-55
494 C X-64,225 Y-55 DR+
495 CC X-62,45 Y-55
496 C X-60,675 Y-55 DR+
497 CC X-62,55 Y-55
498 C X-64,425 Y-55 DR+
499 CC X-62,45 Y-55
500 C X-60,475 Y-55 DR+
501 CC X-62,55 Y-55
502 C X-64,625 Y-55 DR+
503 CC X-62,45 Y-55
504 C X-60,275 Y-55 DR+
505 CC X-62,55 Y-55
506 C X-64,825 Y-55 DR+
507 CC X-62,45 Y-55
508 C X-60,075 Y-55 DR+
509 CC X-62,55 Y-55
510 C X-65,025 Y-55 DR+
511 CC X-62,45 Y-55
512 C X-59,875 Y-55 DR+
513 CC X-62,55 Y-55
514 C X-65,225 Y-55 DR+
515 CC X-62,45 Y-55
516 C X-59,675 Y-55 DR+
517 CC X-62,55 Y-55
518 C X-65,425 Y-55 DR+
519 CC X-62,45 Y-55
520 C X-59,475 Y-55 DR+
521 CC X-62,55 Y-55
522 C X-65,625 Y-55 DR+
523 CC X-62,45 Y-55
524 C X-59,275 Y-55 DR+
525 CC X-62,55 Y-55
526 C X-65,825 Y-55 DR+
527 CC X-62,45 Y-55
528 C X-59,075 Y-55 DR+
529 CC X-62,55 Y-55
530 C X-64,269 Y-51,98 DR+
531 CC X-62,5 Y-55
532 C X-59 Y-55 DR+
533 CC X-62,5 Y-55
534 C X-64,269 Y-51,98 DR+
535 L Z+50 FMAX
536 L X+62,5 Y-55 FMAX
537 L Z+2 FMAX
538 L Z-10 F297
539 L X+62,525 F3565
540 CC X+62,45 Y-55
541 C X+62,375 Y-55 DR+
542 CC X+62,55 Y-55
543 C X+62,725 Y-55 DR+
544 CC X+62,45 Y-55
545 C X+62,175 Y-55 DR+
546 CC X+62,55 Y-55
547 C X+62,925 Y-55 DR+
548 CC X+62,45 Y-55
549 C X+61,975 Y-55 DR+
550 CC X+62,55 Y-55
551 C X+63,125 Y-55 DR+
552 CC X+62,45 Y-55
553 C X+61,775 Y-55 DR+
554 CC X+62,55 Y-55
555 C X+63,325 Y-55 DR+
556 CC X+62,45 Y-55
557 C X+61,575 Y-55 DR+
558 CC X+62,55 Y-55
559 C X+63,525 Y-55 DR+
560 CC X+62,45 Y-55
561 C X+61,375 Y-55 DR+
562 CC X+62,55 Y-55
563 C X+63,725 Y-55 DR+
564 CC X+62,45 Y-55
565 C X+61,175 Y-55 DR+
566 CC X+62,55 Y-55
567 C X+63,925 Y-55 DR+
568 CC X+62,45 Y-55
569 C X+60,975 Y-55 DR+
570 CC X+62,55 Y-55
571 C X+64,125 Y-55 DR+
572 CC X+62,45 Y-55
573 C X+60,775 Y-55 DR+
574 CC X+62,55 Y-55
575 C X+64,325 Y-55 DR+
576 CC X+62,45 Y-55
577 C X+60,575 Y-55 DR+
578 CC X+62,55 Y-55
579 C X+64,525 Y-55 DR+
580 CC X+62,45 Y-55
581 C X+60,375 Y-55 DR+
582 CC X+62,55 Y-55
583 C X+64,725 Y-55 DR+
584 CC X+62,45 Y-55
585 C X+60,175 Y-55 DR+
586 CC X+62,55 Y-55
587 C X+64,925 Y-55 DR+
588 CC X+62,45 Y-55
589 C X+59,975 Y-55 DR+
590 CC X+62,55 Y-55
591 C X+65,125 Y-55 DR+
592 CC X+62,45 Y-55
593 C X+59,775 Y-55 DR+
594 CC X+62,55 Y-55
595 C X+65,325 Y-55 DR+
596 CC X+62,45 Y-55
597 C X+59,575 Y-55 DR+
598 CC X+62,55 Y-55
599 C X+65,525 Y-55 DR+
600 CC X+62,45 Y-55
601 C X+59,375 Y-55 DR+
602 CC X+62,55 Y-55
603 C X+65,725 Y-55 DR+
604 CC X+62,45 Y-55
605 C X+59,175 Y-55 DR+
606 CC X+62,55 Y-55
607 C X+65,925 Y-55 DR+
608 CC X+62,45 Y-55
609 C X+60,731 Y-51,98 DR+
610 CC X+62,5 Y-55
611 C X+66 Y-55 DR+
612 CC X+62,5 Y-55
613 C X+60,731 Y-51,98 DR+
614 L Z+50 FMAX
615 L X+62,5 Y-25 FMAX
616 L Z+2 FMAX
617 L Z-10 F297
618 L X+62,525 F3565
619 CC X+62,45 Y-25
620 C X+62,375 Y-25 DR+
621 CC X+62,55 Y-25
622 C X+62,725 Y-25 DR+
623 CC X+62,45 Y-25
624 C X+62,175 Y-25 DR+
625 CC X+62,55 Y-25
626 C X+62,925 Y-25 DR+
627 CC X+62,45 Y-25
628 C X+61,975 Y-25 DR+
629 CC X+62,55 Y-25
630 C X+63,125 Y-25 DR+
631 CC X+62,45 Y-25
632 C X+61,775 Y-25 DR+
633 CC X+62,55 Y-25
634 C X+63,325 Y-25 DR+
635 CC X+62,45 Y-25
636 C X+61,575 Y-25 DR+
637 CC X+62,55 Y-25
638 C X+63,525 Y-25 DR+
639 CC X+62,45 Y-25
640 C X+61,375 Y-25 DR+
641 CC X+62,55 Y-25
642 C X+63,725 Y-25 DR+
643 CC X+62,45 Y-25
644 C X+61,175 Y-25 DR+
645 CC X+62,55 Y-25
646 C X+63,925 Y-25 DR+
647 CC X+62,45 Y-25
648 C X+60,975 Y-25 DR+
649 CC X+62,55 Y-25
650 C X+64,125 Y-25 DR+
651 CC X+62,45 Y-25
652 C X+60,775 Y-25 DR+
653 CC X+62,55 Y-25
654 C X+64,325 Y-25 DR+
655 CC X+62,45 Y-25
656 C X+60,575 Y-25 DR+
657 CC X+62,55 Y-25
658 C X+64,525 Y-25 DR+
659 CC X+62,45 Y-25
660 C X+60,375 Y-25 DR+
661 CC X+62,55 Y-25
662 C X+64,725 Y-25 DR+
663 CC X+62,45 Y-25
664 C X+60,175 Y-25 DR+
665 CC X+62,55 Y-25
666 C X+64,925 Y-25 DR+
667 CC X+62,45 Y-25
668 C X+59,975 Y-25 DR+
669 CC X+62,55 Y-25
670 C X+65,125 Y-25 DR+
671 CC X+62,45 Y-25
672 C X+59,775 Y-25 DR+
673 CC X+62,55 Y-25
674 C X+65,325 Y-25 DR+
675 CC X+62,45 Y-25
676 C X+59,575 Y-25 DR+
677 CC X+62,55 Y-25
678 C X+65,525 Y-25 DR+
679 CC X+62,45 Y-25
680 C X+59,375 Y-25 DR+
681 CC X+62,55 Y-25
682 C X+65,725 Y-25 DR+
683 CC X+62,45 Y-25
684 C X+64,106 Y-22,175 DR+
685 CC X+62,5 Y-25
686 C X+65,75 Y-25 DR+
687 CC X+62,5 Y-25
688 C X+64,106 Y-22,175 DR+
689 L Z+50 FMAX
690 L X+27,5 Y-30 FMAX
691 L Z+2 FMAX
692 L Z-10 F297
693 L X+27,525 F3565
694 CC X+27,45 Y-30
695 C X+27,375 Y-30 DR+
696 CC X+27,55 Y-30
697 C X+27,725 Y-30 DR+
698 CC X+27,45 Y-30
699 C X+27,175 Y-30 DR+
700 CC X+27,55 Y-30
701 C X+27,925 Y-30 DR+
702 CC X+27,45 Y-30
703 C X+26,975 Y-30 DR+
704 CC X+27,55 Y-30
705 C X+28,125 Y-30 DR+
706 CC X+27,45 Y-30
707 C X+26,775 Y-30 DR+
708 CC X+27,55 Y-30
709 C X+28,325 Y-30 DR+
710 CC X+27,45 Y-30
711 C X+26,575 Y-30 DR+
712 CC X+27,55 Y-30
713 C X+28,525 Y-30 DR+
714 CC X+27,45 Y-30
715 C X+26,375 Y-30 DR+
716 CC X+27,55 Y-30
717 C X+28,725 Y-30 DR+
718 CC X+27,45 Y-30
719 C X+26,175 Y-30 DR+
720 CC X+27,55 Y-30
721 C X+28,925 Y-30 DR+
722 CC X+27,45 Y-30
723 C X+25,975 Y-30 DR+
724 CC X+27,55 Y-30
725 C X+29,125 Y-30 DR+
726 CC X+27,45 Y-30
727 C X+25,775 Y-30 DR+
728 CC X+27,55 Y-30
729 C X+29,325 Y-30 DR+
730 CC X+27,45 Y-30
731 C X+25,575 Y-30 DR+
732 CC X+27,55 Y-30
733 C X+29,525 Y-30 DR+
734 CC X+27,45 Y-30
735 C X+25,375 Y-30 DR+
736 CC X+27,55 Y-30
737 C X+29,725 Y-30 DR+
738 CC X+27,45 Y-30
739 C X+25,175 Y-30 DR+
740 CC X+27,55 Y-30
741 C X+29,925 Y-30 DR+
742 CC X+27,45 Y-30
743 C X+24,975 Y-30 DR+
744 CC X+27,55 Y-30
745 C X+30,125 Y-30 DR+
746 CC X+27,45 Y-30
747 C X+24,775 Y-30 DR+
748 CC X+27,55 Y-30
749 C X+30,325 Y-30 DR+
750 CC X+27,45 Y-30
751 C X+24,575 Y-30 DR+
752 CC X+27,55 Y-30
753 C X+30,525 Y-30 DR+
754 CC X+27,45 Y-30
755 C X+24,375 Y-30 DR+
756 CC X+27,55 Y-30
757 C X+30,725 Y-30 DR+
758 CC X+27,45 Y-30
759 C X+24,175 Y-30 DR+
760 CC X+27,55 Y-30
761 C X+30,925 Y-30 DR+
762 CC X+27,45 Y-30
763 C X+25,731 Y-26,98 DR+
764 CC X+27,5 Y-30
765 C X+31 Y-30 DR+
766 CC X+27,5 Y-30
767 C X+25,731 Y-26,98 DR+
768 L Z+50 FMAX
769 TOOL CALL 19 Z S7427 DR-3
770 L X-47,5 Y+55 Z+50 FMAX
771 L Z+2 FMAX
772 L Z-10 F297
773 L X-49,8 Y+55,6 RL F3565
774 L X-50,4
775 CC X-50,4 Y+55
776 C X-51 Y+55 DR+
777 CC X-47,5 Y+55
778 C X-44 Y+55 DR+
779 CC X-47,5 Y+55
780 C X-51 Y+55 DR+
781 CC X-47,5 Y+55
782 C X-50,858 Y+54,014 DR+
783 CC X-50,282 Y+54,183
784 C X-50,113 Y+53,607 DR+
785 L X-49,538 Y+53,776
786 L X-47,5 Y+55 R0
787 L Z+50 FMAX
788 L X+62,5 FMAX
789 L Z+2 FMAX
790 L Z-10 F297
791 L X+60,2 Y+55,6 RL F3565
792 L X+59,6
793 CC X+59,6 Y+55
794 C X+59 Y+55 DR+
795 CC X+62,5 Y+55
796 C X+66 Y+55 DR+
797 CC X+62,5 Y+55
798 C X+59 Y+55 DR+
799 CC X+62,5 Y+55
800 C X+59,142 Y+54,014 DR+
801 CC X+59,718 Y+54,183
802 C X+59,887 Y+53,607 DR+
803 L X+60,462 Y+53,776
804 L X+62,5 Y+55 R0
805 L Z+50 FMAX
806 L X+27,5 Y+30 FMAX
807 L Z+2 FMAX
808 L Z-10 F297
809 L X+25,2 Y+30,6 RL F3565
810 L X+24,6
811 CC X+24,6 Y+30
812 C X+24 Y+30 DR+
813 CC X+27,5 Y+30
814 C X+31 Y+30 DR+
815 CC X+27,5 Y+30
816 C X+24 Y+30 DR+
817 CC X+27,5 Y+30
818 C X+24,142 Y+29,014 DR+
819 CC X+24,718 Y+29,183
820 C X+24,887 Y+28,607 DR+
821 L X+25,462 Y+28,776
822 L X+27,5 Y+30 R0
823 L Z+50 FMAX
824 L X-22,5 FMAX
825 L Z+2 FMAX
826 L Z-10 F297
827 L X-24,8 Y+30,6 RL F3565
828 L X-25,4
829 CC X-25,4 Y+30
830 C X-26 Y+30 DR+
831 CC X-22,5 Y+30
832 C X-19 Y+30 DR+
833 CC X-22,5 Y+30
834 C X-26 Y+30 DR+
835 CC X-22,5 Y+30
836 C X-25,858 Y+29,014 DR+
837 CC X-25,282 Y+29,183
838 C X-25,113 Y+28,607 DR+
839 L X-24,538 Y+28,776
840 L X-22,5 Y+30 R0
841 L Z+50 FMAX
842 L X-62,5 Y-25 FMAX
843 L Z+2 FMAX
844 L Z-10 F297
845 L X-64,55 Y-24,4 RL F3565
846 L X-65,15
847 CC X-65,15 Y-25
848 C X-65,75 Y-25 DR+
849 CC X-62,5 Y-25
850 C X-59,25 Y-25 DR+
851 CC X-62,5 Y-25
852 C X-65,75 Y-25 DR+
853 CC X-62,5 Y-25
854 C X-65,597 Y-25,984 DR+
855 CC X-65,026 Y-25,803
856 C X-64,844 Y-26,374 DR+
857 L X-64,272 Y-26,193
858 L X-62,5 Y-25 R0
859 L Z+50 FMAX
860 L Y-55 FMAX
861 L Z+2 FMAX
862 L Z-10 F297
863 L X-64,8 Y-54,4 RL F3565
864 L X-65,4
865 CC X-65,4 Y-55
866 C X-66 Y-55 DR+
867 CC X-62,5 Y-55
868 C X-59 Y-55 DR+
869 CC X-62,5 Y-55
870 C X-66 Y-55 DR+
871 CC X-62,5 Y-55
872 C X-65,858 Y-55,986 DR+
873 CC X-65,282 Y-55,817
874 C X-65,113 Y-56,393 DR+
875 L X-64,538 Y-56,224
876 L X-62,5 Y-55 R0
877 L Z+50 FMAX
878 L X+62,5 FMAX
879 L Z+2 FMAX
880 L Z-10 F297
881 L X+60,2 Y-54,4 RL F3565
882 L X+59,6
883 CC X+59,6 Y-55
884 C X+59 Y-55 DR+
885 CC X+62,5 Y-55
886 C X+66 Y-55 DR+
887 CC X+62,5 Y-55
888 C X+59 Y-55 DR+
889 CC X+62,5 Y-55
890 C X+59,142 Y-55,986 DR+
891 CC X+59,718 Y-55,817
892 C X+59,887 Y-56,393 DR+
893 L X+60,462 Y-56,224
894 L X+62,5 Y-55 R0
895 L Z+50 FMAX
896 L Y-25 FMAX
897 L Z+2 FMAX
898 L Z-10 F297
899 L X+60,45 Y-24,4 RL F3565
900 L X+59,85
901 CC X+59,85 Y-25
902 C X+59,25 Y-25 DR+
903 CC X+62,5 Y-25
904 C X+65,75 Y-25 DR+
905 CC X+62,5 Y-25
906 C X+59,25 Y-25 DR+
907 CC X+62,5 Y-25
908 C X+59,403 Y-25,984 DR+
909 CC X+59,974 Y-25,803
910 C X+60,156 Y-26,374 DR+
911 L X+60,728 Y-26,193
912 L X+62,5 Y-25 R0
913 L Z+50 FMAX
914 L X+27,5 Y-30 FMAX
915 L Z+2 FMAX
916 L Z-10 F297
917 L X+25,2 Y-29,4 RL F3565
918 L X+24,6
919 CC X+24,6 Y-30
920 C X+24 Y-30 DR+
921 CC X+27,5 Y-30
922 C X+31 Y-30 DR+
923 CC X+27,5 Y-30
924 C X+24 Y-30 DR+
925 CC X+27,5 Y-30
926 C X+24,142 Y-30,986 DR+
927 CC X+24,718 Y-30,817
928 C X+24,887 Y-31,393 DR+
929 L X+25,462 Y-31,224
930 L X+27,5 Y-30 R0
931 L Z+50 FMAX
932 M9
933 M5
934 L Z-1 FMAX M91
935 ; T18 P15322450 TB POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
936 ; CORRECTION USURE GAUCHE
937 ; SUREP R 0. SUREP Z 0.
938 TOOL CALL 18 Z S1273 DR-5
939 TOOL DEF 1
940 L X+88,484 Y+36,016 FMAX M3
941 L Z+50 FMAX M25
942 L Z+2 FMAX
943 L Z-10 F1000
944 L X+82,484 Y+36 RL F127
945 CC X+82,5 Y+30
946 C X+82,484 Y+24 DR+
947 L X+88,484 Y+23,984 R0
948 L Z+10 FMAX
949 L X+88,476 Y+39,016 FMAX
950 L Z+2 FMAX
951 L Z-10 F1000
952 L X+82,476 Y+39 RL F127
953 CC X+82,5 Y+30
954 C X+82,476 Y+21 DR+
955 L X+88,476 Y+20,984 R0
956 L Z+10 FMAX
957 L X+88,468 Y+42,016 FMAX
958 L Z+2 FMAX
959 L Z-10 F1000
960 L X+82,468 Y+42 RL F127
961 CC X+82,5 Y+30
962 C X+82,468 Y+18 DR+
963 L X+88,468 Y+17,984 R0
964 L Z+10 FMAX
965 L X+88,46 Y+45,016 FMAX
966 L Z+2 FMAX
967 L Z-10 F1000
968 L X+82,46 Y+45 RL F127
969 CC X+82,5 Y+30
970 C X+82,46 Y+15 DR+
971 L X+88,46 Y+14,984 R0
972 L Z+10 FMAX
973 L Y+45,016 FMAX
974 L Z+2 FMAX
975 L Z-10 F1000
976 L X+82,46 Y+45 RL F127
977 CC X+82,5 Y+30
978 C X+82,46 Y+15 DR+
979 L X+88,46 Y+14,984 R0
980 L Z+50 FMAX
981 M78
982 M5
983 L Z-1 FMAX M91
984 ; T18 P15322450 TB POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
985 ; CORRECTION USURE GAUCHE
986 ; SUREP R 0. SUREP Z 0.
987 TOOL CALL 18 Z S1273 DR-5
988 TOOL DEF 1
989 L X-79,241 Y+28,543 FMAX M3
990 L Z+50 FMAX M25
991 L Z+2 FMAX
992 L Z-10 F1000
993 L X-73,513 Y+26,755 RL F127
994 CC X-72,5 Y+30
995 C X-73,513 Y+33,245 DR+
996 L X-79,241 Y+31,457 R0
997 L Z+10 FMAX
998 L X-80,105 Y+25,775 FMAX
999 L Z+2 FMAX
1000 L Z-10 F1000
1001 L X-74,378 Y+23,986 RL F127
1002 CC X-72,5 Y+30
1003 C X-74,378 Y+36,014 DR+
1004 L X-80,105 Y+34,225 R0
1005 L Z+10 FMAX
1006 L X-80,97 Y+23,007 FMAX
1007 L Z+2 FMAX
1008 L Z-10 F1000
1009 L X-75,242 Y+21,218 RL F127
1010 CC X-72,5 Y+30
1011 C X-75,242 Y+38,782 DR+
1012 L X-80,97 Y+36,993 R0
1013 L Z+10 FMAX
1014 L X-81,834 Y+20,239 FMAX
1015 L Z+2 FMAX
1016 L Z-10 F1000
1017 L X-76,107 Y+18,45 RL F127
1018 CC X-72,5 Y+30
1019 C X-76,107 Y+41,55 DR+
1020 L X-81,834 Y+39,761 R0
1021 L Z+10 FMAX
1022 L X-82,698 Y+17,47 FMAX
1023 L Z+2 FMAX
1024 L Z-10 F1000
1025 L X-76,971 Y+15,682 RL F127
1026 CC X-72,5 Y+30
1027 C X-76,971 Y+44,318 DR+
1028 L X-82,698 Y+42,53 R0
1029 L Z+10 FMAX
1030 L Y+17,47 FMAX
1031 L Z+2 FMAX
1032 L Z-10 F1000
1033 L X-76,971 Y+15,682 RL F127
1034 CC X-72,5 Y+30
1035 C X-76,971 Y+44,318 DR+
1036 L X-82,698 Y+42,53 R0
1037 L Z+50 FMAX
1038 M78
1039 M5
1040 L Z-1 FMAX M91
1041 L Y-1 FMAX M91
1042 M30
1043 END PGM REP15-20977-OP20-B-CALE DE CHOCS PP-B MM
