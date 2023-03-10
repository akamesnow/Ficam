0 BEGIN PGM REP12-20977-OP20-C-PORTE MATRICE-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP12-20977-OP20-C-PORTE MATRICE-B
4 ; PROG-CN DU 28-09-20 A 10:40
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T8 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
10 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T22 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
12 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
13 ; T11 FO DIA KEN 15 5  OK DMF FORET DIAM=15.5 2 DENTS A=118. CARBURE
14 ; T21 ALESOIR DIA 16 CARB VC 15 ALESOIR DIAM=16. 5 DENTS ARS
15 ; FIN DE LISTE DES OUTILS
16 L R0 FMAX
17 L Z-1 FMAX M91
18 ; *GROUPE D'USINAGE-4*
19 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
20 TOOL CALL 1 Z S1856 DR+0
21 TOOL DEF 8
22 L X-80 Y+16,5 FMAX M3
23 L Z+50 FMAX M8
24 ;  POINTAGE-PERCAGE
25 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
26 L X-80 Y+16,5 FMAX M99
27 L X-40 Y+51,5 FMAX M99
28 L X+80 FMAX M99
29 L Y-23,5 FMAX M99
30 L Z+50 FMAX
31 M9
32 M5
33 L Z-1 FMAX M91
34 ; T8 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
35 TOOL CALL 8 Z S1650 DR+0
36 TOOL DEF 18
37 L X-80 Y+16,5 FMAX M3
38 L Z+50 FMAX M8
39 ;  DEBOURRAGE
40 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-60 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
41 L X-80 Y+16,5 FMAX M99
42 L X-40 Y+51,5 FMAX M99
43 L X+80 FMAX M99
44 L Y-23,5 FMAX M99
45 L Z+50 FMAX
46 M9
47 M5
48 L Z-1 FMAX M91
49 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
50 ; CORRECTION AUCUNE
51 ; SUREP R 0. SUREP Z 0.
52 TOOL CALL 18 Z S2865 DR+0
53 TOOL DEF 22
54 L X-82,128 Y+13,113 FMAX M3
55 L Z+50 FMAX M25
56 L Z+2 FMAX
57 L Z+0,5 F500
58 CC X-80 Y+16,5
59 CP IPA-180 Z+0,061 DR-
60 CC X-80 Y+16,5
61 CP IPA-180 Z-0,378 DR-
62 CC X-80 Y+16,5
63 CP IPA-180 Z-0,817 DR-
64 CC X-80 Y+16,5
65 CP IPA-180 Z-1,255 DR-
66 CC X-80 Y+16,5
67 CP IPA-180 Z-1,694 DR-
68 CC X-80 Y+16,5
69 CP IPA-180 Z-2,133 DR-
70 CC X-80 Y+16,5
71 CP IPA-180 Z-2,572 DR-
72 CC X-80 Y+16,5
73 CP IPA-180 Z-3,011 DR-
74 CC X-80 Y+16,5
75 CP IPA-180 Z-3,45 DR-
76 CC X-80 Y+16,5
77 CP IPA-180 Z-3,888 DR-
78 CC X-80 Y+16,5
79 CP IPA-180 Z-4,327 DR-
80 CC X-80 Y+16,5
81 CP IPA-180 Z-4,766 DR-
82 CC X-80 Y+16,5
83 CP IPA-180 Z-5,205 DR-
84 CC X-80 Y+16,5
85 CP IPA-180 Z-5,644 DR-
86 CC X-80 Y+16,5
87 CP IPA-180 Z-6,082 DR-
88 CC X-80 Y+16,5
89 CP IPA-180 Z-6,521 DR-
90 CC X-80 Y+16,5
91 CP IPA-180 Z-6,96 DR-
92 CC X-80 Y+16,5
93 CP IPA-180 Z-7,399 DR-
94 CC X-80 Y+16,5
95 CP IPA-180 Z-7,838 DR-
96 CC X-80 Y+16,5
97 CP IPA-180 Z-8,277 DR-
98 CC X-80 Y+16,5
99 CP IPA-180 Z-8,715 DR-
100 CC X-80 Y+16,5
101 CP IPA-180 Z-9,154 DR-
102 CC X-80 Y+16,5
103 CP IPA-180 Z-9,593 DR-
104 CC X-80 Y+16,5
105 CP IPA-180 Z-10,032 DR-
106 CC X-80 Y+16,5
107 CP IPA-180 Z-10,471 DR-
108 CC X-80 Y+16,5
109 CP IPA-180 Z-10,91 DR-
110 CC X-80 Y+16,5
111 CP IPA-180 Z-11,349 DR-
112 CC X-80 Y+16,5
113 CP IPA-180 Z-11,787 DR-
114 CC X-80 Y+16,5
115 CP IPA-180 Z-12,226 DR-
116 CC X-80 Y+16,5
117 CP IPA-180 Z-12,665 DR-
118 CC X-80 Y+16,5
119 CP IPA-180 Z-13,104 DR-
120 CC X-80 Y+16,5
121 CP IPA-180 Z-13,542 DR-
122 CC X-80 Y+16,5
123 CP IPA-180 Z-13,981 DR-
124 CC X-80 Y+16,5
125 CP IPA-180 Z-14,42 DR-
126 CC X-80 Y+16,5
127 CP IPA-237,859 Z-15 DR-
128 L X-79,25 Y+16,5 F401
129 CC X-81,5 Y+16,5
130 C X-83,75 Y+16,5 DR+
131 CC X-78,5 Y+16,5
132 C X-80,104 Y+11,501 DR+
133 CC X-80 Y+16,5
134 C X-75 Y+16,5 DR+
135 CC X-80 Y+16,5
136 C X-80,104 Y+11,501 DR+
137 L Z+50 FMAX
138 L X-42,128 Y+48,113 FMAX
139 L Z+2 FMAX
140 L Z+0,5 F500
141 CC X-40 Y+51,5
142 CP IPA-180 Z+0,061 DR-
143 CC X-40 Y+51,5
144 CP IPA-180 Z-0,378 DR-
145 CC X-40 Y+51,5
146 CP IPA-180 Z-0,817 DR-
147 CC X-40 Y+51,5
148 CP IPA-180 Z-1,255 DR-
149 CC X-40 Y+51,5
150 CP IPA-180 Z-1,694 DR-
151 CC X-40 Y+51,5
152 CP IPA-180 Z-2,133 DR-
153 CC X-40 Y+51,5
154 CP IPA-180 Z-2,572 DR-
155 CC X-40 Y+51,5
156 CP IPA-180 Z-3,011 DR-
157 CC X-40 Y+51,5
158 CP IPA-180 Z-3,45 DR-
159 CC X-40 Y+51,5
160 CP IPA-180 Z-3,888 DR-
161 CC X-40 Y+51,5
162 CP IPA-180 Z-4,327 DR-
163 CC X-40 Y+51,5
164 CP IPA-180 Z-4,766 DR-
165 CC X-40 Y+51,5
166 CP IPA-180 Z-5,205 DR-
167 CC X-40 Y+51,5
168 CP IPA-180 Z-5,644 DR-
169 CC X-40 Y+51,5
170 CP IPA-180 Z-6,082 DR-
171 CC X-40 Y+51,5
172 CP IPA-180 Z-6,521 DR-
173 CC X-40 Y+51,5
174 CP IPA-180 Z-6,96 DR-
175 CC X-40 Y+51,5
176 CP IPA-180 Z-7,399 DR-
177 CC X-40 Y+51,5
178 CP IPA-180 Z-7,838 DR-
179 CC X-40 Y+51,5
180 CP IPA-180 Z-8,277 DR-
181 CC X-40 Y+51,5
182 CP IPA-180 Z-8,715 DR-
183 CC X-40 Y+51,5
184 CP IPA-180 Z-9,154 DR-
185 CC X-40 Y+51,5
186 CP IPA-180 Z-9,593 DR-
187 CC X-40 Y+51,5
188 CP IPA-180 Z-10,032 DR-
189 CC X-40 Y+51,5
190 CP IPA-180 Z-10,471 DR-
191 CC X-40 Y+51,5
192 CP IPA-180 Z-10,91 DR-
193 CC X-40 Y+51,5
194 CP IPA-180 Z-11,349 DR-
195 CC X-40 Y+51,5
196 CP IPA-180 Z-11,787 DR-
197 CC X-40 Y+51,5
198 CP IPA-180 Z-12,226 DR-
199 CC X-40 Y+51,5
200 CP IPA-180 Z-12,665 DR-
201 CC X-40 Y+51,5
202 CP IPA-180 Z-13,104 DR-
203 CC X-40 Y+51,5
204 CP IPA-180 Z-13,542 DR-
205 CC X-40 Y+51,5
206 CP IPA-180 Z-13,981 DR-
207 CC X-40 Y+51,5
208 CP IPA-180 Z-14,42 DR-
209 CC X-40 Y+51,5
210 CP IPA-237,859 Z-15 DR-
211 L X-39,25 Y+51,5 F401
212 CC X-41,5 Y+51,5
213 C X-43,75 Y+51,5 DR+
214 CC X-38,5 Y+51,5
215 C X-40,104 Y+46,501 DR+
216 CC X-40 Y+51,5
217 C X-35 Y+51,5 DR+
218 CC X-40 Y+51,5
219 C X-40,104 Y+46,501 DR+
220 L Z+50 FMAX
221 L X+77,872 Y+48,113 FMAX
222 L Z+2 FMAX
223 L Z+0,5 F500
224 CC X+80 Y+51,5
225 CP IPA-180 Z+0,061 DR-
226 CC X+80 Y+51,5
227 CP IPA-180 Z-0,378 DR-
228 CC X+80 Y+51,5
229 CP IPA-180 Z-0,817 DR-
230 CC X+80 Y+51,5
231 CP IPA-180 Z-1,255 DR-
232 CC X+80 Y+51,5
233 CP IPA-180 Z-1,694 DR-
234 CC X+80 Y+51,5
235 CP IPA-180 Z-2,133 DR-
236 CC X+80 Y+51,5
237 CP IPA-180 Z-2,572 DR-
238 CC X+80 Y+51,5
239 CP IPA-180 Z-3,011 DR-
240 CC X+80 Y+51,5
241 CP IPA-180 Z-3,45 DR-
242 CC X+80 Y+51,5
243 CP IPA-180 Z-3,888 DR-
244 CC X+80 Y+51,5
245 CP IPA-180 Z-4,327 DR-
246 CC X+80 Y+51,5
247 CP IPA-180 Z-4,766 DR-
248 CC X+80 Y+51,5
249 CP IPA-180 Z-5,205 DR-
250 CC X+80 Y+51,5
251 CP IPA-180 Z-5,644 DR-
252 CC X+80 Y+51,5
253 CP IPA-180 Z-6,082 DR-
254 CC X+80 Y+51,5
255 CP IPA-180 Z-6,521 DR-
256 CC X+80 Y+51,5
257 CP IPA-180 Z-6,96 DR-
258 CC X+80 Y+51,5
259 CP IPA-180 Z-7,399 DR-
260 CC X+80 Y+51,5
261 CP IPA-180 Z-7,838 DR-
262 CC X+80 Y+51,5
263 CP IPA-180 Z-8,277 DR-
264 CC X+80 Y+51,5
265 CP IPA-180 Z-8,715 DR-
266 CC X+80 Y+51,5
267 CP IPA-180 Z-9,154 DR-
268 CC X+80 Y+51,5
269 CP IPA-180 Z-9,593 DR-
270 CC X+80 Y+51,5
271 CP IPA-180 Z-10,032 DR-
272 CC X+80 Y+51,5
273 CP IPA-180 Z-10,471 DR-
274 CC X+80 Y+51,5
275 CP IPA-180 Z-10,91 DR-
276 CC X+80 Y+51,5
277 CP IPA-180 Z-11,349 DR-
278 CC X+80 Y+51,5
279 CP IPA-180 Z-11,787 DR-
280 CC X+80 Y+51,5
281 CP IPA-180 Z-12,226 DR-
282 CC X+80 Y+51,5
283 CP IPA-180 Z-12,665 DR-
284 CC X+80 Y+51,5
285 CP IPA-180 Z-13,104 DR-
286 CC X+80 Y+51,5
287 CP IPA-180 Z-13,542 DR-
288 CC X+80 Y+51,5
289 CP IPA-180 Z-13,981 DR-
290 CC X+80 Y+51,5
291 CP IPA-180 Z-14,42 DR-
292 CC X+80 Y+51,5
293 CP IPA-237,859 Z-15 DR-
294 L X+80,75 Y+51,5 F401
295 CC X+78,5 Y+51,5
296 C X+76,25 Y+51,5 DR+
297 CC X+81,5 Y+51,5
298 C X+79,896 Y+46,501 DR+
299 CC X+80 Y+51,5
300 C X+85 Y+51,5 DR+
301 CC X+80 Y+51,5
302 C X+79,896 Y+46,501 DR+
303 L Z+50 FMAX
304 L X+77,872 Y-26,887 FMAX
305 L Z+2 FMAX
306 L Z+0,5 F500
307 CC X+80 Y-23,5
308 CP IPA-180 Z+0,061 DR-
309 CC X+80 Y-23,5
310 CP IPA-180 Z-0,378 DR-
311 CC X+80 Y-23,5
312 CP IPA-180 Z-0,817 DR-
313 CC X+80 Y-23,5
314 CP IPA-180 Z-1,255 DR-
315 CC X+80 Y-23,5
316 CP IPA-180 Z-1,694 DR-
317 CC X+80 Y-23,5
318 CP IPA-180 Z-2,133 DR-
319 CC X+80 Y-23,5
320 CP IPA-180 Z-2,572 DR-
321 CC X+80 Y-23,5
322 CP IPA-180 Z-3,011 DR-
323 CC X+80 Y-23,5
324 CP IPA-180 Z-3,45 DR-
325 CC X+80 Y-23,5
326 CP IPA-180 Z-3,888 DR-
327 CC X+80 Y-23,5
328 CP IPA-180 Z-4,327 DR-
329 CC X+80 Y-23,5
330 CP IPA-180 Z-4,766 DR-
331 CC X+80 Y-23,5
332 CP IPA-180 Z-5,205 DR-
333 CC X+80 Y-23,5
334 CP IPA-180 Z-5,644 DR-
335 CC X+80 Y-23,5
336 CP IPA-180 Z-6,082 DR-
337 CC X+80 Y-23,5
338 CP IPA-180 Z-6,521 DR-
339 CC X+80 Y-23,5
340 CP IPA-180 Z-6,96 DR-
341 CC X+80 Y-23,5
342 CP IPA-180 Z-7,399 DR-
343 CC X+80 Y-23,5
344 CP IPA-180 Z-7,838 DR-
345 CC X+80 Y-23,5
346 CP IPA-180 Z-8,277 DR-
347 CC X+80 Y-23,5
348 CP IPA-180 Z-8,715 DR-
349 CC X+80 Y-23,5
350 CP IPA-180 Z-9,154 DR-
351 CC X+80 Y-23,5
352 CP IPA-180 Z-9,593 DR-
353 CC X+80 Y-23,5
354 CP IPA-180 Z-10,032 DR-
355 CC X+80 Y-23,5
356 CP IPA-180 Z-10,471 DR-
357 CC X+80 Y-23,5
358 CP IPA-180 Z-10,91 DR-
359 CC X+80 Y-23,5
360 CP IPA-180 Z-11,349 DR-
361 CC X+80 Y-23,5
362 CP IPA-180 Z-11,787 DR-
363 CC X+80 Y-23,5
364 CP IPA-180 Z-12,226 DR-
365 CC X+80 Y-23,5
366 CP IPA-180 Z-12,665 DR-
367 CC X+80 Y-23,5
368 CP IPA-180 Z-13,104 DR-
369 CC X+80 Y-23,5
370 CP IPA-180 Z-13,542 DR-
371 CC X+80 Y-23,5
372 CP IPA-180 Z-13,981 DR-
373 CC X+80 Y-23,5
374 CP IPA-180 Z-14,42 DR-
375 CC X+80 Y-23,5
376 CP IPA-237,859 Z-15 DR-
377 L X+80,75 Y-23,5 F401
378 CC X+78,5 Y-23,5
379 C X+76,25 Y-23,5 DR+
380 CC X+81,5 Y-23,5
381 C X+79,896 Y-28,499 DR+
382 CC X+80 Y-23,5
383 C X+85 Y-23,5 DR+
384 CC X+80 Y-23,5
385 C X+79,896 Y-28,499 DR+
386 L Z+50 FMAX
387 TOOL CALL 18 Z S2865 DR-5
388 L X-80 Y+16,5 Z+50 FMAX
389 L Z+2 FMAX
390 L Z-15 F500
391 L X-83 Y+17,5 RL F401
392 L X-84
393 CC X-84 Y+16,5
394 C X-85 Y+16,5 DR+
395 CC X-80 Y+16,5
396 C X-75 Y+16,5 DR+
397 CC X-80 Y+16,5
398 C X-85 Y+16,5 DR+
399 CC X-80 Y+16,5
400 C X-84,9 Y+15,507 DR+
401 CC X-83,92 Y+15,705
402 C X-83,722 Y+14,725 DR+
403 L X-82,742 Y+14,924
404 L X-80 Y+16,5 R0
405 L Z+50 FMAX
406 L X-40 Y+51,5 FMAX
407 L Z+2 FMAX
408 L Z-15 F500
409 L X-43 Y+52,5 RL F401
410 L X-44
411 CC X-44 Y+51,5
412 C X-45 Y+51,5 DR+
413 CC X-40 Y+51,5
414 C X-35 Y+51,5 DR+
415 CC X-40 Y+51,5
416 C X-45 Y+51,5 DR+
417 CC X-40 Y+51,5
418 C X-44,9 Y+50,507 DR+
419 CC X-43,92 Y+50,705
420 C X-43,722 Y+49,725 DR+
421 L X-42,742 Y+49,924
422 L X-40 Y+51,5 R0
423 L Z+50 FMAX
424 L X+80 FMAX
425 L Z+2 FMAX
426 L Z-15 F500
427 L X+77 Y+52,5 RL F401
428 L X+76
429 CC X+76 Y+51,5
430 C X+75 Y+51,5 DR+
431 CC X+80 Y+51,5
432 C X+85 Y+51,5 DR+
433 CC X+80 Y+51,5
434 C X+75 Y+51,5 DR+
435 CC X+80 Y+51,5
436 C X+75,1 Y+50,507 DR+
437 CC X+76,08 Y+50,705
438 C X+76,278 Y+49,725 DR+
439 L X+77,258 Y+49,924
440 L X+80 Y+51,5 R0
441 L Z+50 FMAX
442 L Y-23,5 FMAX
443 L Z+2 FMAX
444 L Z-15 F500
445 L X+77 Y-22,5 RL F401
446 L X+76
447 CC X+76 Y-23,5
448 C X+75 Y-23,5 DR+
449 CC X+80 Y-23,5
450 C X+85 Y-23,5 DR+
451 CC X+80 Y-23,5
452 C X+75 Y-23,5 DR+
453 CC X+80 Y-23,5
454 C X+75,1 Y-24,493 DR+
455 CC X+76,08 Y-24,295
456 C X+76,278 Y-25,275 DR+
457 L X+77,258 Y-25,076
458 L X+80 Y-23,5 R0
459 L Z+50 FMAX
460 M78
461 M5
462 L Z-1 FMAX M91
463 ; T22 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
464 ; CORRECTION USURE GAUCHE
465 ; SUREP R 0.2 SUREP Z 0.2
466 TOOL CALL 22 Z S2387 DR-6
467 TOOL DEF 15
468 L X+6,1 Y-83,7 FMAX M3
469 L Z+50 FMAX M25
470 L Z+2 FMAX
471 L Z-14,75 F300
472 L Y-76,5 RL F382
473 L Y-17,4
474 L X-1,1
475 L Y-76,5
476 L Y-83,7 R0
477 L Z+10 FMAX
478 L X+12,2 FMAX
479 L Z+2 FMAX
480 L Z-14,75 F300
481 L Y-76,5 RL F382
482 L Y-11,3
483 L X-7,2
484 L Y-76,5
485 L Y-83,7 R0
486 L Z+10 FMAX
487 L X+18,3 FMAX
488 L Z+2 FMAX
489 L Z-14,75 F300
490 L Y-76,5 RL F382
491 L Y-5,2
492 L X-13,3
493 L Y-76,5
494 L Y-83,7 R0
495 L Z+10 FMAX
496 L X+24,4 FMAX
497 L Z+2 FMAX
498 L Z-14,75 F300
499 L Y-76,5 RL F382
500 L Y+0,9
501 L X-19,4
502 L Y-76,5
503 L Y-83,7 R0
504 L Z+10 FMAX
505 L X+30,5 FMAX
506 L Z+2 FMAX
507 L Z-14,75 F300
508 L Y-76,5 RL F382
509 L Y+7
510 L X-25,5
511 L Y-76,5
512 L Y-83,7 R0
513 L Z+10 FMAX
514 L X+36,6 FMAX
515 L Z+2 FMAX
516 L Z-14,75 F300
517 L Y-76,5 RL F382
518 L Y+13,1
519 L X-31,6
520 L Y-76,5
521 L Y-83,7 R0
522 L Z+10 FMAX
523 L X+42,7 FMAX
524 L Z+2 FMAX
525 L Z-14,75 F300
526 L Y-76,5 RL F382
527 L Y+19,2
528 L X-37,7
529 L Y-76,5
530 L Y-83,7 R0
531 L Z+10 FMAX
532 L X+48,8 FMAX
533 L Z+2 FMAX
534 L Z-14,75 F300
535 L Y-76,5 RL F382
536 L Y+21,5
537 CC X+45 Y+21,5
538 C X+45 Y+25,3 DR+
539 L X-40
540 CC X-40 Y+21,5
541 C X-43,8 Y+21,5 DR+
542 L Y-76,5
543 L Y-83,7 R0
544 L Z+10 FMAX
545 L X+6,1 FMAX
546 L Z-12,75 FMAX
547 L Z-29,5 F300
548 L Y-76,5 RL F382
549 L Y-17,4
550 L X-1,1
551 L Y-76,5
552 L Y-83,7 R0
553 L Z+10 FMAX
554 L X+12,2 FMAX
555 L Z-12,75 FMAX
556 L Z-29,5 F300
557 L Y-76,5 RL F382
558 L Y-11,3
559 L X-7,2
560 L Y-76,5
561 L Y-83,7 R0
562 L Z+10 FMAX
563 L X+18,3 FMAX
564 L Z-12,75 FMAX
565 L Z-29,5 F300
566 L Y-76,5 RL F382
567 L Y-5,2
568 L X-13,3
569 L Y-76,5
570 L Y-83,7 R0
571 L Z+10 FMAX
572 L X+24,4 FMAX
573 L Z-12,75 FMAX
574 L Z-29,5 F300
575 L Y-76,5 RL F382
576 L Y+0,9
577 L X-19,4
578 L Y-76,5
579 L Y-83,7 R0
580 L Z+10 FMAX
581 L X+30,5 FMAX
582 L Z-12,75 FMAX
583 L Z-29,5 F300
584 L Y-76,5 RL F382
585 L Y+7
586 L X-25,5
587 L Y-76,5
588 L Y-83,7 R0
589 L Z+10 FMAX
590 L X+36,6 FMAX
591 L Z-12,75 FMAX
592 L Z-29,5 F300
593 L Y-76,5 RL F382
594 L Y+13,1
595 L X-31,6
596 L Y-76,5
597 L Y-83,7 R0
598 L Z+10 FMAX
599 L X+42,7 FMAX
600 L Z-12,75 FMAX
601 L Z-29,5 F300
602 L Y-76,5 RL F382
603 L Y+19,2
604 L X-37,7
605 L Y-76,5
606 L Y-83,7 R0
607 L Z+10 FMAX
608 L X+48,8 FMAX
609 L Z-12,75 FMAX
610 L Z-29,5 F300
611 L Y-76,5 RL F382
612 L Y+21,5
613 CC X+45 Y+21,5
614 C X+45 Y+25,3 DR+
615 L X-40
616 CC X-40 Y+21,5
617 C X-43,8 Y+21,5 DR+
618 L Y-76,5
619 L Y-83,7 R0
620 L Z+10 FMAX
621 L X+6,1 FMAX
622 L Z-27,5 FMAX
623 L Z-29,8 F300
624 L Y-76,5 RL F382
625 L Y-17,4
626 L X-1,1
627 L Y-76,5
628 L Y-83,7 R0
629 L Z+10 FMAX
630 L X+12,2 FMAX
631 L Z-27,5 FMAX
632 L Z-29,8 F300
633 L Y-76,5 RL F382
634 L Y-11,3
635 L X-7,2
636 L Y-76,5
637 L Y-83,7 R0
638 L Z+10 FMAX
639 L X+18,3 FMAX
640 L Z-27,5 FMAX
641 L Z-29,8 F300
642 L Y-76,5 RL F382
643 L Y-5,2
644 L X-13,3
645 L Y-76,5
646 L Y-83,7 R0
647 L Z+10 FMAX
648 L X+24,4 FMAX
649 L Z-27,5 FMAX
650 L Z-29,8 F300
651 L Y-76,5 RL F382
652 L Y+0,9
653 L X-19,4
654 L Y-76,5
655 L Y-83,7 R0
656 L Z+10 FMAX
657 L X+30,5 FMAX
658 L Z-27,5 FMAX
659 L Z-29,8 F300
660 L Y-76,5 RL F382
661 L Y+7
662 L X-25,5
663 L Y-76,5
664 L Y-83,7 R0
665 L Z+10 FMAX
666 L X+36,6 FMAX
667 L Z-27,5 FMAX
668 L Z-29,8 F300
669 L Y-76,5 RL F382
670 L Y+13,1
671 L X-31,6
672 L Y-76,5
673 L Y-83,7 R0
674 L Z+10 FMAX
675 L X+42,7 FMAX
676 L Z-27,5 FMAX
677 L Z-29,8 F300
678 L Y-76,5 RL F382
679 L Y+19,2
680 L X-37,7
681 L Y-76,5
682 L Y-83,7 R0
683 L Z+10 FMAX
684 L X+48,8 FMAX
685 L Z-27,5 FMAX
686 L Z-29,8 F300
687 L Y-76,5 RL F382
688 L Y+21,5
689 CC X+45 Y+21,5
690 C X+45 Y+25,3 DR+
691 L X-40
692 CC X-40 Y+21,5
693 C X-43,8 Y+21,5 DR+
694 L Y-76,5
695 L Y-83,7 R0
696 L Z+10 FMAX
697 L X+48,8 FMAX
698 L Z-27,5 FMAX
699 L Z-29,8 F300
700 L Y-76,5 RL F382
701 L Y+21,5
702 CC X+45 Y+21,5
703 C X+45 Y+25,3 DR+
704 L X-40
705 CC X-40 Y+21,5
706 C X-43,8 Y+21,5 DR+
707 L Y-76,5
708 L Y-83,7 R0
709 L Z+50 FMAX
710 M78
711 M5
712 L Z-1 FMAX M91
713 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
714 ; CORRECTION USURE GAUCHE
715 ; SUREP R 0.4 SUREP Z 0.
716 TOOL CALL 15 Z S2546 DR-5
717 TOOL DEF 1
718 L X+5,6 Y-82,5 FMAX M3
719 L Z+50 FMAX M25
720 L Z+2 FMAX
721 L Z-30 F1000
722 L Y-76,5 RL F397
723 L Y-17,9
724 L X-0,6
725 L Y-76,5
726 L Y-82,5 R0
727 L Z+10 FMAX
728 L X+11,1 FMAX
729 L Z+2 FMAX
730 L Z-30 F1000
731 L Y-76,5 RL F397
732 L Y-12,4
733 L X-6,1
734 L Y-76,5
735 L Y-82,5 R0
736 L Z+10 FMAX
737 L X+16,6 FMAX
738 L Z+2 FMAX
739 L Z-30 F1000
740 L Y-76,5 RL F397
741 L Y-6,9
742 L X-11,6
743 L Y-76,5
744 L Y-82,5 R0
745 L Z+10 FMAX
746 L X+22,1 FMAX
747 L Z+2 FMAX
748 L Z-30 F1000
749 L Y-76,5 RL F397
750 L Y-1,4
751 L X-17,1
752 L Y-76,5
753 L Y-82,5 R0
754 L Z+10 FMAX
755 L X+27,6 FMAX
756 L Z+2 FMAX
757 L Z-30 F1000
758 L Y-76,5 RL F397
759 L Y+4,1
760 L X-22,6
761 L Y-76,5
762 L Y-82,5 R0
763 L Z+10 FMAX
764 L X+33,1 FMAX
765 L Z+2 FMAX
766 L Z-30 F1000
767 L Y-76,5 RL F397
768 L Y+9,6
769 L X-28,1
770 L Y-76,5
771 L Y-82,5 R0
772 L Z+10 FMAX
773 L X+38,6 FMAX
774 L Z+2 FMAX
775 L Z-30 F1000
776 L Y-76,5 RL F397
777 L Y+15,1
778 L X-33,6
779 L Y-76,5
780 L Y-82,5 R0
781 L Z+10 FMAX
782 L X+44,1 FMAX
783 L Z+2 FMAX
784 L Z-30 F1000
785 L Y-76,5 RL F397
786 L Y+20,6
787 L X-39,1
788 L Y-76,5
789 L Y-82,5 R0
790 L Z+10 FMAX
791 L X+49,6 FMAX
792 L Z+2 FMAX
793 L Z-30 F1000
794 L Y-76,5 RL F397
795 L Y+21,5
796 CC X+45 Y+21,5
797 C X+45 Y+26,1 DR+
798 L X-40
799 CC X-40 Y+21,5
800 C X-44,6 Y+21,5 DR+
801 L Y-76,5
802 L Y-82,5 R0
803 L Z+10 FMAX
804 L X+49,6 FMAX
805 L Z+2 FMAX
806 L Z-30 F1000
807 L Y-76,5 RL F397
808 L Y+21,5
809 CC X+45 Y+21,5
810 C X+45 Y+26,1 DR+
811 L X-40
812 CC X-40 Y+21,5
813 C X-44,6 Y+21,5 DR+
814 L Y-76,5
815 L Y-82,5 R0
816 L Z+50 FMAX
817 M78
818 M5
819 L Z-1 FMAX M91
820 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
821 ; CORRECTION USURE GAUCHE
822 ; SUREP R 0.1 SUREP Z 0.05
823 TOOL CALL 15 Z S2546 DR-5
824 TOOL DEF 1
825 L X+49,9 Y-82,5 FMAX M3
826 L Z+50 FMAX M25
827 L Z+2 FMAX
828 L Z-29,95 F1000
829 L Y-76,5 RL F397
830 L Y+21,5
831 CC X+45 Y+21,5
832 C X+45 Y+26,4 DR+
833 L X-40
834 CC X-40 Y+21,5
835 C X-44,9 Y+21,5 DR+
836 L Y-76,5
837 L Y-82,5 R0
838 L Z+10 FMAX
839 L X+49,9 FMAX
840 L Z+2 FMAX
841 L Z-29,95 F1000
842 L Y-76,5 RL F397
843 L Y+21,5
844 CC X+45 Y+21,5
845 C X+45 Y+26,4 DR+
846 L X-40
847 CC X-40 Y+21,5
848 C X-44,9 Y+21,5 DR+
849 L Y-76,5
850 L Y-82,5 R0
851 L Z+10 FMAX
852 L X+49,9 FMAX
853 L Z+2 FMAX
854 L Z-29,95 F1000
855 L Y-76,5 RL F397
856 L Y+21,5
857 CC X+45 Y+21,5
858 C X+45 Y+26,4 DR+
859 L X-40
860 CC X-40 Y+21,5
861 C X-44,9 Y+21,5 DR+
862 L Y-76,5
863 L Y-82,5 R0
864 L Z+10 FMAX
865 L X+49,9 FMAX
866 L Z+2 FMAX
867 L Z-29,95 F1000
868 L Y-76,5 RL F397
869 L Y+21,5
870 CC X+45 Y+21,5
871 C X+45 Y+26,4 DR+
872 L X-40
873 CC X-40 Y+21,5
874 C X-44,9 Y+21,5 DR+
875 L Y-76,5
876 L Y-82,5 R0
877 L Z+50 FMAX
878 M78
879 M5
880 L Z-1 FMAX M91
881 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
882 ; CORRECTION USURE GAUCHE
883 ; SUREP R 0.05 SUREP Z 0.05
884 TOOL CALL 15 Z S2546 DR-5
885 TOOL DEF 1
886 L X+49,95 Y-82,5 FMAX M3
887 L Z+50 FMAX M25
888 L Z+2 FMAX
889 L Z-29,95 F1000
890 L Y-76,5 RL F397
891 L Y+21,5
892 CC X+45 Y+21,5
893 C X+45 Y+26,45 DR+
894 L X-40
895 CC X-40 Y+21,5
896 C X-44,95 Y+21,5 DR+
897 L Y-76,5
898 L Y-82,5 R0
899 L Z+10 FMAX
900 L X+49,95 FMAX
901 L Z+2 FMAX
902 L Z-29,95 F1000
903 L Y-76,5 RL F397
904 L Y+21,5
905 CC X+45 Y+21,5
906 C X+45 Y+26,45 DR+
907 L X-40
908 CC X-40 Y+21,5
909 C X-44,95 Y+21,5 DR+
910 L Y-76,5
911 L Y-82,5 R0
912 L Z+10 FMAX
913 L X+49,95 FMAX
914 L Z+2 FMAX
915 L Z-29,95 F1000
916 L Y-76,5 RL F397
917 L Y+21,5
918 CC X+45 Y+21,5
919 C X+45 Y+26,45 DR+
920 L X-40
921 CC X-40 Y+21,5
922 C X-44,95 Y+21,5 DR+
923 L Y-76,5
924 L Y-82,5 R0
925 L Z+10 FMAX
926 L X+49,95 FMAX
927 L Z+2 FMAX
928 L Z-29,95 F1000
929 L Y-76,5 RL F397
930 L Y+21,5
931 CC X+45 Y+21,5
932 C X+45 Y+26,45 DR+
933 L X-40
934 CC X-40 Y+21,5
935 C X-44,95 Y+21,5 DR+
936 L Y-76,5
937 L Y-82,5 R0
938 L Z+50 FMAX
939 M78
940 M5
941 L Z-1 FMAX M91
942 M00
943 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
944 ; CORRECTION USURE GAUCHE
945 ; SUREP R 0. SUREP Z 0.05
946 TOOL CALL 15 Z S2546 DR-5
947 TOOL DEF 1
948 L X+50 Y-82,5 FMAX M3
949 L Z+50 FMAX M25
950 L Z+2 FMAX
951 L Z-29,95 F1000
952 L Y-76,5 RL F397
953 L Y+21,5
954 CC X+45 Y+21,5
955 C X+45 Y+26,5 DR+
956 L X-40
957 CC X-40 Y+21,5
958 C X-45 Y+21,5 DR+
959 L Y-76,5
960 L Y-82,5 R0
961 L Z+10 FMAX
962 L X+50 FMAX
963 L Z+2 FMAX
964 L Z-29,95 F1000
965 L Y-76,5 RL F397
966 L Y+21,5
967 CC X+45 Y+21,5
968 C X+45 Y+26,5 DR+
969 L X-40
970 CC X-40 Y+21,5
971 C X-45 Y+21,5 DR+
972 L Y-76,5
973 L Y-82,5 R0
974 L Z+10 FMAX
975 L X+50 FMAX
976 L Z+2 FMAX
977 L Z-29,95 F1000
978 L Y-76,5 RL F397
979 L Y+21,5
980 CC X+45 Y+21,5
981 C X+45 Y+26,5 DR+
982 L X-40
983 CC X-40 Y+21,5
984 C X-45 Y+21,5 DR+
985 L Y-76,5
986 L Y-82,5 R0
987 L Z+10 FMAX
988 L X+50 FMAX
989 L Z+2 FMAX
990 L Z-29,95 F1000
991 L Y-76,5 RL F397
992 L Y+21,5
993 CC X+45 Y+21,5
994 C X+45 Y+26,5 DR+
995 L X-40
996 CC X-40 Y+21,5
997 C X-45 Y+21,5 DR+
998 L Y-76,5
999 L Y-82,5 R0
1000 L Z+50 FMAX
1001 M78
1002 M5
1003 L Z-1 FMAX M91
1004 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1005 TOOL CALL 1 Z S1856 DR+0
1006 TOOL DEF 11
1007 L X-80 Y+51,5 FMAX M3
1008 L Z+50 FMAX M8
1009 ;  POINTAGE-PERCAGE
1010 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1011 L X-80 Y+51,5 FMAX M99
1012 L X+80 Y+21,5 FMAX M99
1013 L Z+50 FMAX
1014 M9
1015 M5
1016 L Z-1 FMAX M91
1017 ; T11 FO DIA KEN 15 5  OK DMF FORET DIAM=15.5 2 DENTS A=118. CARBURE
1018 TOOL CALL 11 Z S1000 DR+0
1019 TOOL DEF 21
1020 L X-80 Y+51,5 FMAX M3
1021 L Z+50 FMAX M8
1022 ;  DEBOURRAGE
1023 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-65 ; PROFONDEUR~
    Q206=100 ; AVANCE PLONGEE PROF.~
    Q202=+7,75 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1024 L X-80 Y+51,5 FMAX M99
1025 L X+80 Y+21,5 FMAX M99
1026 L Z+50 FMAX
1027 M9
1028 M5
1029 L Z-1 FMAX M91
1030 ; T21 ALESOIR DIA 16 CARB VC 15 ALESOIR DIAM=16. 5 DENTS ARS
1031 TOOL CALL 21 Z S320 DR+0
1032 TOOL DEF 22
1033 L X-80 Y+51,5 FMAX M3
1034 L Z+50 FMAX M8
1035 ;  POINTAGE-PERCAGE
1036 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-65 ; PROFONDEUR~
    Q206=40 ; AVANCE PLONGEE PROF.~
    Q202=+65 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1037 L X-80 Y+51,5 FMAX M99
1038 L X+80 Y+21,5 FMAX M99
1039 L Z+50 FMAX
1040 M9
1041 M5
1042 L Z-1 FMAX M91
1043 ; T22 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
1044 ; CORRECTION USURE GAUCHE
1045 ; SUREP R 0. SUREP Z 0.
1046 TOOL CALL 22 Z S2387 DR-6
1047 TOOL DEF 1
1048 L X-119,728 Y+66,228 FMAX M3
1049 L Z+50 FMAX M25
1050 L Z+2 FMAX
1051 L Z-15 F300
1052 L X-112,728 RL F382
1053 CC X-112,728 Y+74,228
1054 C X-107,071 Y+68,571 DR+
1055 L X-97,071 Y+78,571
1056 CC X-102,728 Y+84,228
1057 C X-94,728 Y+84,228 DR+
1058 L Y+91,228 R0
1059 L Z+10 FMAX
1060 L X-116,9 Y+63,399 FMAX
1061 L Z+2 FMAX
1062 L Z-15 F300
1063 L X-109,9 RL F382
1064 CC X-109,9 Y+71,399
1065 C X-104,243 Y+65,743 DR+
1066 L X-94,243 Y+75,743
1067 CC X-99,9 Y+81,399
1068 C X-91,9 Y+81,399 DR+
1069 L Y+88,399 R0
1070 L Z+10 FMAX
1071 L X-119,728 Y+66,228 FMAX
1072 L Z-13 FMAX
1073 L Z-30 F300
1074 L X-112,728 RL F382
1075 CC X-112,728 Y+74,228
1076 C X-107,071 Y+68,571 DR+
1077 L X-97,071 Y+78,571
1078 CC X-102,728 Y+84,228
1079 C X-94,728 Y+84,228 DR+
1080 L Y+91,228 R0
1081 L Z+10 FMAX
1082 L X-116,9 Y+63,399 FMAX
1083 L Z-13 FMAX
1084 L Z-30 F300
1085 L X-109,9 RL F382
1086 CC X-109,9 Y+71,399
1087 C X-104,243 Y+65,743 DR+
1088 L X-94,243 Y+75,743
1089 CC X-99,9 Y+81,399
1090 C X-91,9 Y+81,399 DR+
1091 L Y+88,399 R0
1092 L Z+10 FMAX
1093 L X-116,9 Y+63,399 FMAX
1094 L Z-13 FMAX
1095 L Z-30 F300
1096 L X-109,9 RL F382
1097 CC X-109,9 Y+71,399
1098 C X-104,243 Y+65,743 DR+
1099 L X-94,243 Y+75,743
1100 CC X-99,9 Y+81,399
1101 C X-91,9 Y+81,399 DR+
1102 L Y+88,399 R0
1103 L Z+50 FMAX
1104 L X+94,728 Y+91,228 FMAX
1105 L Z+2 FMAX
1106 L Z-15 F300
1107 L Y+84,228 RL F382
1108 CC X+102,728 Y+84,228
1109 C X+97,071 Y+78,571 DR+
1110 L X+107,071 Y+68,571
1111 CC X+112,728 Y+74,228
1112 C X+112,728 Y+66,228 DR+
1113 L X+119,728 R0
1114 L Z+10 FMAX
1115 L X+91,899 Y+88,399 FMAX
1116 L Z+2 FMAX
1117 L Z-15 F300
1118 L Y+81,399 RL F382
1119 CC X+99,899 Y+81,4
1120 C X+94,243 Y+75,743 DR+
1121 L X+104,243 Y+65,743
1122 CC X+109,899 Y+71,399
1123 C X+109,899 Y+63,399 DR+
1124 L X+116,899 Y+63,4 R0
1125 L Z+10 FMAX
1126 L X+94,728 Y+91,228 FMAX
1127 L Z-13 FMAX
1128 L Z-30 F300
1129 L Y+84,228 RL F382
1130 CC X+102,728 Y+84,228
1131 C X+97,071 Y+78,571 DR+
1132 L X+107,071 Y+68,571
1133 CC X+112,728 Y+74,228
1134 C X+112,728 Y+66,228 DR+
1135 L X+119,728 R0
1136 L Z+10 FMAX
1137 L X+91,899 Y+88,399 FMAX
1138 L Z-13 FMAX
1139 L Z-30 F300
1140 L Y+81,399 RL F382
1141 CC X+99,899 Y+81,4
1142 C X+94,243 Y+75,743 DR+
1143 L X+104,243 Y+65,743
1144 CC X+109,899 Y+71,399
1145 C X+109,899 Y+63,399 DR+
1146 L X+116,899 Y+63,4 R0
1147 L Z+10 FMAX
1148 L X+91,899 Y+88,399 FMAX
1149 L Z-13 FMAX
1150 L Z-30 F300
1151 L Y+81,399 RL F382
1152 CC X+99,899 Y+81,4
1153 C X+94,243 Y+75,743 DR+
1154 L X+104,243 Y+65,743
1155 CC X+109,899 Y+71,399
1156 C X+109,899 Y+63,399 DR+
1157 L X+116,899 Y+63,4 R0
1158 L Z+50 FMAX
1159 M78
1160 M5
1161 L Z-1 FMAX M91
1162 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1163 ; CORRECTION USURE GAUCHE
1164 ; SUREP R 0. SUREP Z 0.
1165 TOOL CALL 1 Z S6000 DR-2,5
1166 L X-4,419 Y+77,039 FMAX M3
1167 L Z+50 FMAX
1168 L Z+2 FMAX
1169 L Z-3 F800
1170 L X-2,357 Y+74,976 RL F1200
1171 CC X+0 Y+77,333
1172 C X+0 Y+74 DR+
1173 L X+90
1174 CC X+90 Y+71,5
1175 C X+91,768 Y+73,268 DR-
1176 L X+101,768 Y+63,268
1177 CC X+100 Y+61,5
1178 C X+102,5 Y+61,5 DR-
1179 L Y-71,5
1180 CC X+100 Y-71,5
1181 C X+100 Y-74 DR-
1182 L X-100
1183 CC X-100 Y-71,5
1184 C X-102,5 Y-71,5 DR-
1185 L Y+61,5
1186 CC X-100 Y+61,5
1187 C X-101,768 Y+63,268 DR-
1188 L X-91,768 Y+73,268
1189 CC X-90 Y+71,5
1190 C X-90 Y+74 DR-
1191 L X+0
1192 CC X+0 Y+77,333
1193 C X+2,357 Y+74,976 DR+
1194 L X+4,419 Y+77,039 R0
1195 L Z+50 FMAX
1196 M5
1197 L Z-1 FMAX M91
1198 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1199 ; CORRECTION USURE GAUCHE
1200 ; SUREP R 0. SUREP Z 0.
1201 TOOL CALL 1 Z S6000 DR-2,5
1202 L X+49,461 Y-80,919 FMAX M3
1203 L Z+50 FMAX
1204 L Z+2 FMAX
1205 L Z-2,2 F800
1206 L X+51,524 Y-78,857 RL F1200
1207 CC X+49,167 Y-76,5
1208 C X+52,5 Y-76,5 DR+
1209 L Y+21,5
1210 CC X+45 Y+21,5
1211 C X+45 Y+29 DR+
1212 L X-40
1213 CC X-40 Y+21,5
1214 C X-47,5 Y+21,5 DR+
1215 L Y-76,5
1216 CC X-44,167 Y-76,5
1217 C X-46,524 Y-78,857 DR+
1218 L X-44,461 Y-80,919 R0
1219 L Z+50 FMAX
1220 M5
1221 L Z-1 FMAX M91
1222 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1223 ; CORRECTION USURE GAUCHE
1224 ; SUREP R 0. SUREP Z 0.
1225 TOOL CALL 1 Z S6000 DR-2,5
1226 L X-80 Y+16,5 FMAX M3
1227 L Z+50 FMAX
1228 L Z+2 FMAX
1229 L Z-2,5 F800
1230 L X-86,5 Y+17 RL F1200
1231 L X-87
1232 CC X-87 Y+16,5
1233 C X-87,5 Y+16,5 DR+
1234 CC X-80 Y+16,5
1235 C X-72,5 Y+16,5 DR+
1236 CC X-80 Y+16,5
1237 C X-87,5 Y+16,5 DR+
1238 CC X-80 Y+16,5
1239 C X-87,433 Y+15,503 DR+
1240 CC X-86,938 Y+15,569
1241 C X-86,871 Y+15,074 DR+
1242 L X-86,376 Y+15,14
1243 L X-80 Y+16,5 R0
1244 L Z+50 FMAX
1245 L X-40 Y+51,5 FMAX
1246 L Z+2 FMAX
1247 L Z-2,5 F800
1248 L X-46,5 Y+52 RL F1200
1249 L X-47
1250 CC X-47 Y+51,5
1251 C X-47,5 Y+51,5 DR+
1252 CC X-40 Y+51,5
1253 C X-32,5 Y+51,5 DR+
1254 CC X-40 Y+51,5
1255 C X-47,5 Y+51,5 DR+
1256 CC X-40 Y+51,5
1257 C X-47,433 Y+50,503 DR+
1258 CC X-46,938 Y+50,569
1259 C X-46,871 Y+50,074 DR+
1260 L X-46,376 Y+50,14
1261 L X-40 Y+51,5 R0
1262 L Z+50 FMAX
1263 L X+80 FMAX
1264 L Z+2 FMAX
1265 L Z-2,5 F800
1266 L X+73,5 Y+52 RL F1200
1267 L X+73
1268 CC X+73 Y+51,5
1269 C X+72,5 Y+51,5 DR+
1270 CC X+80 Y+51,5
1271 C X+87,5 Y+51,5 DR+
1272 CC X+80 Y+51,5
1273 C X+72,5 Y+51,5 DR+
1274 CC X+80 Y+51,5
1275 C X+72,567 Y+50,503 DR+
1276 CC X+73,062 Y+50,569
1277 C X+73,129 Y+50,074 DR+
1278 L X+73,624 Y+50,14
1279 L X+80 Y+51,5 R0
1280 L Z+50 FMAX
1281 L Y-23,5 FMAX
1282 L Z+2 FMAX
1283 L Z-2,5 F800
1284 L X+73,5 Y-23 RL F1200
1285 L X+73
1286 CC X+73 Y-23,5
1287 C X+72,5 Y-23,5 DR+
1288 CC X+80 Y-23,5
1289 C X+87,5 Y-23,5 DR+
1290 CC X+80 Y-23,5
1291 C X+72,5 Y-23,5 DR+
1292 CC X+80 Y-23,5
1293 C X+72,567 Y-24,497 DR+
1294 CC X+73,062 Y-24,431
1295 C X+73,129 Y-24,926 DR+
1296 L X+73,624 Y-24,86
1297 L X+80 Y-23,5 R0
1298 L Z+50 FMAX
1299 L X-80 Y+51,5 FMAX
1300 L Z+2 FMAX
1301 L Z-2,5 F800
1302 L X-84,5 Y+52 RL F1200
1303 L X-85
1304 CC X-85 Y+51,5
1305 C X-85,5 Y+51,5 DR+
1306 CC X-80 Y+51,5
1307 C X-74,5 Y+51,5 DR+
1308 CC X-80 Y+51,5
1309 C X-85,5 Y+51,5 DR+
1310 CC X-80 Y+51,5
1311 C X-85,409 Y+50,505 DR+
1312 CC X-84,918 Y+50,596
1313 C X-84,827 Y+50,104 DR+
1314 L X-84,335 Y+50,195
1315 L X-80 Y+51,5 R0
1316 L Z+50 FMAX
1317 L X+80 Y+21,5 FMAX
1318 L Z+2 FMAX
1319 L Z-2,5 F800
1320 L X+75,5 Y+22 RL F1200
1321 L X+75
1322 CC X+75 Y+21,5
1323 C X+74,5 Y+21,5 DR+
1324 CC X+80 Y+21,5
1325 C X+85,5 Y+21,5 DR+
1326 CC X+80 Y+21,5
1327 C X+74,5 Y+21,5 DR+
1328 CC X+80 Y+21,5
1329 C X+74,591 Y+20,505 DR+
1330 CC X+75,082 Y+20,596
1331 C X+75,173 Y+20,104 DR+
1332 L X+75,665 Y+20,195
1333 L X+80 Y+21,5 R0
1334 L Z+50 FMAX
1335 M5
1336 L Z-1 FMAX M91
1337 L Y-1 FMAX M91
1338 M30
1339 END PGM REP12-20977-OP20-C-PORTE MATRICE-B MM
