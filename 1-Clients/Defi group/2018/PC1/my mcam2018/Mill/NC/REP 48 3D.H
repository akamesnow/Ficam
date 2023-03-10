0 BEGIN PGM REP 48 3D MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 48 3D
4 ; PROG-CN DU 02-07-22 A 06:23
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T9 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
10 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
11 ; T5 FO DIA 11.8 VC40 FORET DIAM=11.7 2 DENTS A=118. ARS
12 ; T12 ALESOIR DIA 12 CARB VC 15 ALESOIR DIAM=12. 5 DENTS ARS
13 ; T16 P15322501 110KG POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
14 ; FIN DE LISTE DES OUTILS
15 L R0 FMAX
16 L Z-1 FMAX M91
17 ; *GROUPE D'USINAGE-2*
18 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
19 TOOL CALL 1 Z S1856 DR+0
20 TOOL DEF 9
21 L X-103,5 Y+67,7 FMAX M3
22 L Z+50 FMAX M8
23 ;  POINTAGE-PERCAGE
24 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,7 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,7 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
25 L X-103,5 Y+67,7 FMAX M99
26 L X-47,5 Y+41,7 FMAX M99
27 L X+47,5 Y+67,7 FMAX M99
28 L X+103,5 Y+41,7 FMAX M99
29 L Z+50 FMAX
30 M9
31 M5
32 L Z-1 FMAX M91
33 ; T9 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
34 TOOL CALL 9 Z S1600 DR+0
35 TOOL DEF 10
36 L X-103,5 Y+67,7 FMAX M3
37 L Z+50 FMAX M7
38 ;  DEBOURRAGE
39 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-58 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+4,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
40 L X-103,5 Y+67,7 FMAX M99
41 L X-47,5 Y+41,7 FMAX M99
42 L X+47,5 Y+67,7 FMAX M99
43 L X+103,5 Y+41,7 FMAX M99
44 L Z+50 FMAX
45 M9
46 M5
47 L Z-1 FMAX M91
48 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
49 TOOL CALL 10 Z S500 DR+0
50 TOOL DEF 1
51 L X-103,5 Y+67,7 FMAX M3
52 L Z+50 FMAX M8
53 ;  POINTAGE-PERCAGE
54 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-58 ; PROFONDEUR~
    Q206=75 ; AVANCE PLONGEE PROF.~
    Q202=+58 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
55 L X-103,5 Y+67,7 FMAX M99
56 L X-47,5 Y+41,7 FMAX M99
57 L X+47,5 Y+67,7 FMAX M99
58 L X+103,5 Y+41,7 FMAX M99
59 L Z+50 FMAX
60 M9
61 M5
62 L Z-1 FMAX M91
63 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
64 TOOL CALL 1 Z S1856 DR+0
65 TOOL DEF 5
66 L X+95 Y-5 FMAX M3
67 L Z+50 FMAX M8
68 ;  POINTAGE-PERCAGE
69 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
70 L X+95 Y-5 FMAX M99
71 L X-95 FMAX M99
72 L Z+50 FMAX
73 M9
74 M5
75 L Z-1 FMAX M91
76 ; T5 FO DIA 11.8 VC40 FORET DIAM=11.7 2 DENTS A=118. ARS
77 TOOL CALL 5 Z S1350 DR+0
78 TOOL DEF 12
79 L X+95 Y-5 FMAX M3
80 L Z+50 FMAX M7
81 ;  POINTAGE-PERCAGE
82 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-58 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+58 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
83 L X+95 Y-5 FMAX M99
84 L X-95 FMAX M99
85 L Z+50 FMAX
86 M9
87 M5
88 L Z-1 FMAX M91
89 ; T12 ALESOIR DIA 12 CARB VC 15 ALESOIR DIAM=12. 5 DENTS ARS
90 TOOL CALL 12 Z S146 DR+0
91 TOOL DEF 16
92 L X+95 Y-5 FMAX M3
93 L Z+50 FMAX M8
94 ;  POINTAGE-PERCAGE
95 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-58 ; PROFONDEUR~
    Q206=63 ; AVANCE PLONGEE PROF.~
    Q202=+58 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
96 L X+95 Y-5 FMAX M99
97 L X-95 FMAX M99
98 L Z+50 FMAX
99 M9
100 M5
101 L Z-1 FMAX M91
102 ; T16 P15322501 110KG POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
103 ; CORRECTION USURE GAUCHE
104 ; SUREP R 0. SUREP Z 0.
105 TOOL CALL 16 Z S2387 DR-6
106 TOOL DEF 1
107 L X-151,899 Y+89,899 FMAX M3
108 L Z+50 FMAX M25
109 L Z+2 FMAX
110 L Z-13 F500
111 L X-144,899 RL F525
112 CC X-144,899 Y+94,899
113 C X-141,364 Y+91,364 DR+
114 L X-136,364 Y+96,364
115 CC X-139,899 Y+99,899
116 C X-134,899 Y+99,899 DR+
117 L Y+106,899 R0
118 L Z+10 FMAX
119 L X-149,778 Y+87,778 FMAX
120 L Z+2 FMAX
121 L Z-13 F500
122 L X-142,778 RL F525
123 CC X-142,778 Y+92,778
124 C X-139,243 Y+89,243 DR+
125 L X-134,243 Y+94,243
126 CC X-137,778 Y+97,778
127 C X-132,778 Y+97,778 DR+
128 L Y+104,778 R0
129 L Z+10 FMAX
130 L X-151,899 Y+89,899 FMAX
131 L Z-11 FMAX
132 L Z-26 F500
133 L X-144,899 RL F525
134 CC X-144,899 Y+94,899
135 C X-141,364 Y+91,364 DR+
136 L X-136,364 Y+96,364
137 CC X-139,899 Y+99,899
138 C X-134,899 Y+99,899 DR+
139 L Y+106,899 R0
140 L Z+10 FMAX
141 L X-149,778 Y+87,778 FMAX
142 L Z-11 FMAX
143 L Z-26 F500
144 L X-142,778 RL F525
145 CC X-142,778 Y+92,778
146 C X-139,243 Y+89,243 DR+
147 L X-134,243 Y+94,243
148 CC X-137,778 Y+97,778
149 C X-132,778 Y+97,778 DR+
150 L Y+104,778 R0
151 L Z+10 FMAX
152 L X-149,778 Y+87,778 FMAX
153 L Z-11 FMAX
154 L Z-26 F500
155 L X-142,778 RL F525
156 CC X-142,778 Y+92,778
157 C X-139,243 Y+89,243 DR+
158 L X-134,243 Y+94,243
159 CC X-137,778 Y+97,778
160 C X-132,778 Y+97,778 DR+
161 L Y+104,778 R0
162 L Z+10 FMAX
163 L X-149,778 Y+87,778 FMAX
164 L Z-11 FMAX
165 L Z-26 F500
166 L X-142,778 RL F525
167 CC X-142,778 Y+92,778
168 C X-139,243 Y+89,243 DR+
169 L X-134,243 Y+94,243
170 CC X-137,778 Y+97,778
171 C X-132,778 Y+97,778 DR+
172 L Y+104,778 R0
173 L Z+50 FMAX
174 L X+134,899 Y+106,899 FMAX
175 L Z+2 FMAX
176 L Z-13 F500
177 L Y+99,899 RL F525
178 CC X+139,899 Y+99,899
179 C X+136,364 Y+96,364 DR+
180 L X+141,364 Y+91,364
181 CC X+144,899 Y+94,899
182 C X+144,899 Y+89,899 DR+
183 L X+151,899 R0
184 L Z+10 FMAX
185 L X+132,778 Y+104,778 FMAX
186 L Z+2 FMAX
187 L Z-13 F500
188 L Y+97,778 RL F525
189 CC X+137,778 Y+97,778
190 C X+134,243 Y+94,243 DR+
191 L X+139,243 Y+89,243
192 CC X+142,778 Y+92,778
193 C X+142,778 Y+87,778 DR+
194 L X+149,778 R0
195 L Z+10 FMAX
196 L X+134,899 Y+106,899 FMAX
197 L Z-11 FMAX
198 L Z-26 F500
199 L Y+99,899 RL F525
200 CC X+139,899 Y+99,899
201 C X+136,364 Y+96,364 DR+
202 L X+141,364 Y+91,364
203 CC X+144,899 Y+94,899
204 C X+144,899 Y+89,899 DR+
205 L X+151,899 R0
206 L Z+10 FMAX
207 L X+132,778 Y+104,778 FMAX
208 L Z-11 FMAX
209 L Z-26 F500
210 L Y+97,778 RL F525
211 CC X+137,778 Y+97,778
212 C X+134,243 Y+94,243 DR+
213 L X+139,243 Y+89,243
214 CC X+142,778 Y+92,778
215 C X+142,778 Y+87,778 DR+
216 L X+149,778 R0
217 L Z+10 FMAX
218 L X+132,778 Y+104,778 FMAX
219 L Z-11 FMAX
220 L Z-26 F500
221 L Y+97,778 RL F525
222 CC X+137,778 Y+97,778
223 C X+134,243 Y+94,243 DR+
224 L X+139,243 Y+89,243
225 CC X+142,778 Y+92,778
226 C X+142,778 Y+87,778 DR+
227 L X+149,778 R0
228 L Z+10 FMAX
229 L X+132,778 Y+104,778 FMAX
230 L Z-11 FMAX
231 L Z-26 F500
232 L Y+97,778 RL F525
233 CC X+137,778 Y+97,778
234 C X+134,243 Y+94,243 DR+
235 L X+139,243 Y+89,243
236 CC X+142,778 Y+92,778
237 C X+142,778 Y+87,778 DR+
238 L X+149,778 R0
239 L Z+50 FMAX
240 L X+151,899 Y-89,899 FMAX
241 L Z+2 FMAX
242 L Z-13 F500
243 L X+144,899 RL F525
244 CC X+144,899 Y-94,899
245 C X+141,364 Y-91,364 DR+
246 L X+136,364 Y-96,364
247 CC X+139,899 Y-99,899
248 C X+134,899 Y-99,899 DR+
249 L Y-106,899 R0
250 L Z+10 FMAX
251 L X+149,778 Y-87,778 FMAX
252 L Z+2 FMAX
253 L Z-13 F500
254 L X+142,778 RL F525
255 CC X+142,778 Y-92,778
256 C X+139,243 Y-89,243 DR+
257 L X+134,243 Y-94,243
258 CC X+137,778 Y-97,778
259 C X+132,778 Y-97,778 DR+
260 L Y-104,778 R0
261 L Z+10 FMAX
262 L X+151,899 Y-89,899 FMAX
263 L Z-11 FMAX
264 L Z-26 F500
265 L X+144,899 RL F525
266 CC X+144,899 Y-94,899
267 C X+141,364 Y-91,364 DR+
268 L X+136,364 Y-96,364
269 CC X+139,899 Y-99,899
270 C X+134,899 Y-99,899 DR+
271 L Y-106,899 R0
272 L Z+10 FMAX
273 L X+149,778 Y-87,778 FMAX
274 L Z-11 FMAX
275 L Z-26 F500
276 L X+142,778 RL F525
277 CC X+142,778 Y-92,778
278 C X+139,243 Y-89,243 DR+
279 L X+134,243 Y-94,243
280 CC X+137,778 Y-97,778
281 C X+132,778 Y-97,778 DR+
282 L Y-104,778 R0
283 L Z+10 FMAX
284 L X+149,778 Y-87,778 FMAX
285 L Z-11 FMAX
286 L Z-26 F500
287 L X+142,778 RL F525
288 CC X+142,778 Y-92,778
289 C X+139,243 Y-89,243 DR+
290 L X+134,243 Y-94,243
291 CC X+137,778 Y-97,778
292 C X+132,778 Y-97,778 DR+
293 L Y-104,778 R0
294 L Z+10 FMAX
295 L X+149,778 Y-87,778 FMAX
296 L Z-11 FMAX
297 L Z-26 F500
298 L X+142,778 RL F525
299 CC X+142,778 Y-92,778
300 C X+139,243 Y-89,243 DR+
301 L X+134,243 Y-94,243
302 CC X+137,778 Y-97,778
303 C X+132,778 Y-97,778 DR+
304 L Y-104,778 R0
305 L Z+50 FMAX
306 L X-134,899 Y-106,899 FMAX
307 L Z+2 FMAX
308 L Z-13 F500
309 L Y-99,899 RL F525
310 CC X-139,899 Y-99,899
311 C X-136,364 Y-96,364 DR+
312 L X-141,364 Y-91,364
313 CC X-144,899 Y-94,899
314 C X-144,899 Y-89,899 DR+
315 L X-151,899 R0
316 L Z+10 FMAX
317 L X-132,778 Y-104,778 FMAX
318 L Z+2 FMAX
319 L Z-13 F500
320 L Y-97,778 RL F525
321 CC X-137,778 Y-97,778
322 C X-134,243 Y-94,243 DR+
323 L X-139,243 Y-89,243
324 CC X-142,778 Y-92,778
325 C X-142,778 Y-87,778 DR+
326 L X-149,778 R0
327 L Z+10 FMAX
328 L X-134,899 Y-106,899 FMAX
329 L Z-11 FMAX
330 L Z-26 F500
331 L Y-99,899 RL F525
332 CC X-139,899 Y-99,899
333 C X-136,364 Y-96,364 DR+
334 L X-141,364 Y-91,364
335 CC X-144,899 Y-94,899
336 C X-144,899 Y-89,899 DR+
337 L X-151,899 R0
338 L Z+10 FMAX
339 L X-132,778 Y-104,778 FMAX
340 L Z-11 FMAX
341 L Z-26 F500
342 L Y-97,778 RL F525
343 CC X-137,778 Y-97,778
344 C X-134,243 Y-94,243 DR+
345 L X-139,243 Y-89,243
346 CC X-142,778 Y-92,778
347 C X-142,778 Y-87,778 DR+
348 L X-149,778 R0
349 L Z+10 FMAX
350 L X-132,778 Y-104,778 FMAX
351 L Z-11 FMAX
352 L Z-26 F500
353 L Y-97,778 RL F525
354 CC X-137,778 Y-97,778
355 C X-134,243 Y-94,243 DR+
356 L X-139,243 Y-89,243
357 CC X-142,778 Y-92,778
358 C X-142,778 Y-87,778 DR+
359 L X-149,778 R0
360 L Z+10 FMAX
361 L X-132,778 Y-104,778 FMAX
362 L Z-11 FMAX
363 L Z-26 F500
364 L Y-97,778 RL F525
365 CC X-137,778 Y-97,778
366 C X-134,243 Y-94,243 DR+
367 L X-139,243 Y-89,243
368 CC X-142,778 Y-92,778
369 C X-142,778 Y-87,778 DR+
370 L X-149,778 R0
371 L Z+50 FMAX
372 M78
373 M5
374 L Z-1 FMAX M91
375 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
376 ; CORRECTION USURE GAUCHE
377 ; SUREP R 0. SUREP Z 0.
378 TOOL CALL 1 Z S6000 DR-2,5
379 TOOL DEF 16
380 L X-3,536 Y+95,173 FMAX M3
381 L Z+50 FMAX
382 L Z+2 FMAX
383 L Z-2,2 F800
384 L X-1,473 Y+93,11 RL F1200
385 CC X+0 Y+94,583
386 C X+0 Y+92,5 DR+
387 L X+130
388 CC X+130 Y+90
389 C X+131,768 Y+91,768 DR-
390 L X+136,768 Y+86,768
391 CC X+135 Y+85
392 C X+137,5 Y+85 DR-
393 L Y-85
394 CC X+135 Y-85
395 C X+136,768 Y-86,768 DR-
396 L X+131,768 Y-91,768
397 CC X+130 Y-90
398 C X+130 Y-92,5 DR-
399 L X-130
400 CC X-130 Y-90
401 C X-131,768 Y-91,768 DR-
402 L X-136,768 Y-86,768
403 CC X-135 Y-85
404 C X-137,5 Y-85 DR-
405 L Y+85
406 CC X-135 Y+85
407 C X-136,768 Y+86,768 DR-
408 L X-131,768 Y+91,768
409 CC X-130 Y+90
410 C X-130 Y+92,5 DR-
411 L X+2
412 CC X+2 Y+94,583
413 C X+3,473 Y+93,11 DR+
414 L X+5,536 Y+95,173 R0
415 L Z+50 FMAX
416 M5
417 L Z-1 FMAX M91
418 ; T16 P15322501 110KG POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
419 ; CORRECTION AUCUNE
420 ; SUREP R 0. SUREP Z 0.
421 TOOL CALL 16 Z S2387 DR+0
422 TOOL DEF 1
423 L X-0,76 Y-34,048 FMAX M3
424 L Z+50 FMAX M25
425 L Z+2 FMAX
426 L Z+0,5 F500
427 CC X+0 Y-40
428 CP IPA-180 Z-0,158 DR-
429 CC X+0 Y-40
430 CP IPA-180 Z-0,816 DR-
431 CC X+0 Y-40
432 CP IPA-180 Z-1,474 DR-
433 CC X+0 Y-40
434 CP IPA-180 Z-2,133 DR-
435 CC X+0 Y-40
436 CP IPA-180 Z-2,791 DR-
437 CC X+0 Y-40
438 CP IPA-180 Z-3,449 DR-
439 CC X+0 Y-40
440 CP IPA-180 Z-4,107 DR-
441 CC X+0 Y-40
442 CP IPA-180 Z-4,766 DR-
443 CC X+0 Y-40
444 CP IPA-180 Z-5,424 DR-
445 CC X+0 Y-40
446 CP IPA-180 Z-6,082 DR-
447 CC X+0 Y-40
448 CP IPA-180 Z-6,74 DR-
449 CC X+0 Y-40
450 CP IPA-180 Z-7,399 DR-
451 CC X+0 Y-40
452 CP IPA-180 Z-8,057 DR-
453 CC X+0 Y-40
454 CP IPA-180 Z-8,715 DR-
455 CC X+0 Y-40
456 CP IPA-180 Z-9,373 DR-
457 CC X+0 Y-40
458 CP IPA-180 Z-10,032 DR-
459 CC X+0 Y-40
460 CP IPA-180 Z-10,69 DR-
461 CC X+0 Y-40
462 CP IPA-180 Z-11,348 DR-
463 CC X+0 Y-40
464 CP IPA-180 Z-12,006 DR-
465 CC X+0 Y-40
466 CP IPA-180 Z-12,665 DR-
467 CC X+0 Y-40
468 CP IPA-91,652 Z-13 DR-
469 L X+3,483 Y-39,657 F525
470 CC X+0 Y-40
471 C X-3,483 Y-40,343 DR+
472 CC X+0 Y-40
473 C X+3,483 Y-39,657 DR+
474 CC X+1,071 Y-39,141
475 C X+2,12 Y-36,908 DR+
476 CC X-0,224 Y-41,861
477 C X-1,366 Y-36,502 DR+
478 CC X+1,007 Y-48,001
479 C X-6,618 Y-39,072 DR+
480 CC X+2,559 Y-41,9
481 C X-6,966 Y-40,686 DR+
482 CC X-2,386 Y-38,003
483 C X-4,422 Y-42,905 DR+
484 CC X+0,294 Y-31,589
485 C X+1,616 Y-43,777 DR+
486 CC X-0,871 Y-19,862
487 C X+9,654 Y-41,48 DR+
488 CC X+8,164 Y-37,959
489 C X+10,102 Y-41,254 DR+
490 CC X-9,287 Y-37,138
491 C X+10,449 Y-38,971 DR+
492 CC X+1,934 Y-50,723
493 C X+4,735 Y-36,483 DR+
494 CC X-0,716 Y-63,619
495 C X-5,284 Y-36,321 DR+
496 CC X+2,241 Y-83,561
497 C X-13,587 Y-38,42 DR+
498 CC X+20,527 Y-43,91
499 C X-13,933 Y-41,372 DR+
500 CC X-0,639 Y-11,795
501 C X-2,542 Y-44,166 DR+
502 CC X+0,69 Y+9,52
503 C X+11,313 Y-43,203 DR+
504 CC X-7,973 Y+57,938
505 C X+16,691 Y-42,028 DR+
506 L X+17,072 Y-41,907
507 CC X-36,872 Y-34,954
508 C X+17,416 Y-38,285 DR+
509 CC X-0,426 Y-93,713
510 C X-1,886 Y-35,503 DR+
511 CC X+0,596 Y-133,425
512 C X-18,117 Y-37,276 DR+
513 CC X-10,571 Y-81,029
514 C X-20,556 Y-37,767 DR+
515 CC X+59,021 Y-46,28
516 C X-20,899 Y-42,057 DR+
517 CC X+0,988 Y+45,649
518 C X+5,765 Y-44,621 DR+
519 CC X-2,979 Y+117,538
520 C X+23,497 Y-42,683 DR+
521 L X+24,041 Y-42,559
522 CC X-87,805 Y-32,376
523 C X+24,382 Y-37,6 DR+
524 CC X-1,409 Y-165,705
525 C X-10,002 Y-35,312 DR+
526 CC X+5,68 Y-279,34
527 C X-26,901 Y-36,989 DR+
528 L X-27,526 Y-37,114
529 CC X+124,221 Y-49,093
530 C X-27,865 Y-42,743 DR+
531 CC X+1,726 Y+134,85
532 C X+13,56 Y-44,802 DR+
533 CC X-8,933 Y+309,013
534 C X+30,304 Y-43,339 DR+
535 L X+31,01 Y-43,212
536 CC X-169,476 Y-29,292
537 C X+31,348 Y-36,914 DR+
538 CC X-2,1 Y-276,887
539 C X-0,756 Y-34,598 DR+
540 CC X-0,174 Y-348,673
541 C X-28,651 Y-35,891 DR+
542 CC X+40,972 Y-859,897
543 C X-33,707 Y-36,334 DR+
544 L X-34,495 Y-36,462
545 CC X+225,048 Y-52,49
546 C X-34,832 Y-43,429 DR+
547 CC X+2,763 Y+275,823
548 C X-0,066 Y-45,623 DR+
549 CC X+0,343 Y+358,248
550 C X+32,464 Y-44,343 DR+
551 L X+37,11 Y-43,994
552 L X+37,98 Y-43,865
553 CC X-292,76 Y-25,529
554 C X+38,315 Y-36,228 DR+
555 CC X-3,668 Y-455,274
556 C X+2,047 Y-34,169 DR+
557 CC X-1,185 Y-520,992
558 C X-33,398 Y-35,225 DR+
559 L X-40,513 Y-35,678
560 L X-41,464 Y-35,809
561 CC X+374,894 Y-56,688
562 C X-41,798 Y-44,115 DR+
563 CC X+4,35 Y+492,263
564 C X-2,206 Y-46,056 DR+
565 CC X+1,314 Y+569,663
566 C X+37,299 Y-45,014 DR+
567 L X+43,917 Y-44,649
568 L X+44,949 Y-44,517
569 CC X-474,34 Y-20,814
570 C X+45,281 Y-35,542 DR+
571 L X+32,662 Y-34,74
572 CC X-3,367 Y-653,444
573 C X-28,28 Y-34,192 DR+
574 L X-42,561 Y-34,795
575 L X-47,32 Y-35,023
576 L X-48,434 Y-35,157
577 CC X+594,818 Y-62,028
578 C X-48,764 Y-44,801 DR+
579 L X-35,103 Y-45,551
580 CC X+3,703 Y+721,163
581 C X+30,306 Y-46,072 DR+
582 L X+45,617 Y-45,515
583 L X+50,723 Y-45,305
584 L X+51,918 Y-45,17
585 CC X-741,194 Y-14,709
586 C X+52,247 Y-34,856 DR+
587 L X+36,295 Y-34,105
588 L X+23,606 Y-33,65
589 CC X-4,305 Y-1010,505
590 C X-36,413 Y-33,779 DR+
591 L X-54,126 Y-34,368
592 L X-55,403 Y-34,504
593 CC X+919,962 Y-69,082
594 C X-55,731 Y-45,486 DR+
595 L X-38,65 Y-46,182
596 L X-25,109 Y-46,603
597 L X-12,663 Y-46,857
598 L X-0,016 Y-46,971
599 L X+12,788 Y-46,941
600 L X+27,145 Y-46,749
601 L X+44,483 Y-46,343
602 L X+57,529 Y-45,96
603 L X+58,888 Y-45,822
604 L X+59,214 Y-34,171
605 L X+39,58 Y-33,487
606 L X+23,697 Y-33,081
607 L X+8,962 Y-32,86
608 L X-4,496 Y-32,798
609 L X-19,614 Y-32,881
610 L X-36,384 Y-33,136
611 L X-59,395 Y-33,672
612 CC X-59,609 Y-54,978
613 C X-62,372 Y-33,851 DR+
614 L X-62,697 Y-46,172
615 L X-41,85 Y-46,796
616 L X-25,032 Y-47,166
617 L X-9,456 Y-47,369
618 L X+6,344 Y-47,426
619 L X+22,315 Y-47,34
620 L X+41,641 Y-47,073
621 L X+64,336 Y-46,615
622 L X+65,857 Y-46,475
623 L X+66,18 Y-33,485
624 L X+42,52 Y-32,886
625 L X+24,736 Y-32,562
626 L X+6,638 Y-32,381
627 L X-11,713 Y-32,358
628 L X-30,259 Y-32,485
629 L X-54,062 Y-32,816
630 L X-67,739 Y-33,057
631 L X-69,342 Y-33,199
632 L X-69,663 Y-46,858
633 L X-43,016 Y-47,425
634 L X-22,548 Y-47,722
635 L X-3,478 Y-47,86
636 L X+15,834 Y-47,859
637 L X+38,896 Y-47,694
638 L X+71,142 Y-47,27
639 L X+72,827 Y-47,128
640 L X+73,146 Y-32,799
641 L X+43,338 Y-32,273
642 L X+20,015 Y-32,006
643 L X-1,86 Y-31,902
644 L X-25,858 Y-31,948
645 L X-53,852 Y-32,17
646 L X-74,545 Y-32,402
647 L X-76,311 Y-32,546
648 L X-76,63 Y-47,544
649 L X-43,488 Y-48,021
650 L X-17,135 Y-48,254
651 L X+7,715 Y-48,327
652 L X+34,813 Y-48,255
653 L X+74,002 Y-47,961
654 L X+77,949 Y-47,926
655 L X+79,796 Y-47,78
656 L X+80,113 Y-32,113
657 L X+43,464 Y-31,692
658 L X+13,912 Y-31,495
659 L X-16,103 Y-31,45
660 L X-52,624 Y-31,573
661 L X-81,352 Y-31,747
662 L X-83,281 Y-31,893
663 L X-83,596 Y-48,23
664 L X-43,267 Y-48,587
665 L X-8,27 Y-48,753
666 L X+29,402 Y-48,765
667 L X+84,755 Y-48,581
668 L X+86,765 Y-48,433
669 L X+87,079 Y-31,427
670 L X+38,64 Y-31,12
671 L X-4,398 Y-31
672 L X-59,23 Y-31,035
673 L X-88,158 Y-31,091
674 L X-90,25 Y-31,241
675 L X-90,562 Y-48,915
676 L X-33,486 Y-49,153
677 L X+27,214 Y-49,239
678 L X+91,561 Y-49,236
679 L X+93,735 Y-49,085
680 L X+94,045 Y-30,742
681 L X+13,9 Y-30,572
682 L X-51,891 Y-30,5
683 L X-96,5
684 L Y-49,5
685 L X+96,5
686 L Y-30,5
687 L X-51,891
688 L Z+10 FMAX
689 L X-0,76 Y-34,048 FMAX
690 L Z-11 FMAX
691 L Z-12,5 F500
692 CC X+0 Y-40
693 CP IPA-180 Z-13,158 DR-
694 CC X+0 Y-40
695 CP IPA-180 Z-13,816 DR-
696 CC X+0 Y-40
697 CP IPA-180 Z-14,474 DR-
698 CC X+0 Y-40
699 CP IPA-180 Z-15,133 DR-
700 CC X+0 Y-40
701 CP IPA-180 Z-15,791 DR-
702 CC X+0 Y-40
703 CP IPA-180 Z-16,449 DR-
704 CC X+0 Y-40
705 CP IPA-180 Z-17,108 DR-
706 CC X+0 Y-40
707 CP IPA-180 Z-17,766 DR-
708 CC X+0 Y-40
709 CP IPA-180 Z-18,424 DR-
710 CC X+0 Y-40
711 CP IPA-180 Z-19,082 DR-
712 CC X+0 Y-40
713 CP IPA-180 Z-19,741 DR-
714 CC X+0 Y-40
715 CP IPA-180 Z-20,399 DR-
716 CC X+0 Y-40
717 CP IPA-180 Z-21,057 DR-
718 CC X+0 Y-40
719 CP IPA-180 Z-21,715 DR-
720 CC X+0 Y-40
721 CP IPA-180 Z-22,374 DR-
722 CC X+0 Y-40
723 CP IPA-180 Z-23,032 DR-
724 CC X+0 Y-40
725 CP IPA-180 Z-23,69 DR-
726 CC X+0 Y-40
727 CP IPA-180 Z-24,348 DR-
728 CC X+0 Y-40
729 CP IPA-180 Z-25,006 DR-
730 CC X+0 Y-40
731 CP IPA-180 Z-25,665 DR-
732 CC X+0 Y-40
733 CP IPA-91,652 Z-26 DR-
734 L X+3,483 Y-39,657 F525
735 CC X+0 Y-40
736 C X-3,483 Y-40,343 DR+
737 CC X+0 Y-40
738 C X+3,483 Y-39,657 DR+
739 CC X+1,071 Y-39,141
740 C X+2,12 Y-36,908 DR+
741 CC X-0,224 Y-41,861
742 C X-1,366 Y-36,502 DR+
743 CC X+1,007 Y-48,001
744 C X-6,618 Y-39,072 DR+
745 CC X+2,559 Y-41,9
746 C X-6,966 Y-40,686 DR+
747 CC X-2,386 Y-38,003
748 C X-4,422 Y-42,905 DR+
749 CC X+0,294 Y-31,589
750 C X+1,616 Y-43,777 DR+
751 CC X-0,871 Y-19,862
752 C X+9,654 Y-41,48 DR+
753 CC X+8,164 Y-37,959
754 C X+10,102 Y-41,254 DR+
755 CC X-9,287 Y-37,138
756 C X+10,449 Y-38,971 DR+
757 CC X+1,934 Y-50,723
758 C X+4,735 Y-36,483 DR+
759 CC X-0,716 Y-63,619
760 C X-5,284 Y-36,321 DR+
761 CC X+2,241 Y-83,561
762 C X-13,587 Y-38,42 DR+
763 CC X+20,527 Y-43,91
764 C X-13,933 Y-41,372 DR+
765 CC X-0,639 Y-11,795
766 C X-2,542 Y-44,166 DR+
767 CC X+0,69 Y+9,52
768 C X+11,313 Y-43,203 DR+
769 CC X-7,973 Y+57,938
770 C X+16,691 Y-42,028 DR+
771 L X+17,072 Y-41,907
772 CC X-36,872 Y-34,954
773 C X+17,416 Y-38,285 DR+
774 CC X-0,426 Y-93,713
775 C X-1,886 Y-35,503 DR+
776 CC X+0,596 Y-133,425
777 C X-18,117 Y-37,276 DR+
778 CC X-10,571 Y-81,029
779 C X-20,556 Y-37,767 DR+
780 CC X+59,021 Y-46,28
781 C X-20,899 Y-42,057 DR+
782 CC X+0,988 Y+45,649
783 C X+5,765 Y-44,621 DR+
784 CC X-2,979 Y+117,538
785 C X+23,497 Y-42,683 DR+
786 L X+24,041 Y-42,559
787 CC X-87,805 Y-32,376
788 C X+24,382 Y-37,6 DR+
789 CC X-1,409 Y-165,705
790 C X-10,002 Y-35,312 DR+
791 CC X+5,68 Y-279,34
792 C X-26,901 Y-36,989 DR+
793 L X-27,526 Y-37,114
794 CC X+124,221 Y-49,093
795 C X-27,865 Y-42,743 DR+
796 CC X+1,726 Y+134,85
797 C X+13,56 Y-44,802 DR+
798 CC X-8,933 Y+309,013
799 C X+30,304 Y-43,339 DR+
800 L X+31,01 Y-43,212
801 CC X-169,476 Y-29,292
802 C X+31,348 Y-36,914 DR+
803 CC X-2,1 Y-276,887
804 C X-0,756 Y-34,598 DR+
805 CC X-0,174 Y-348,673
806 C X-28,651 Y-35,891 DR+
807 CC X+40,972 Y-859,897
808 C X-33,707 Y-36,334 DR+
809 L X-34,495 Y-36,462
810 CC X+225,048 Y-52,49
811 C X-34,832 Y-43,429 DR+
812 CC X+2,763 Y+275,823
813 C X-0,066 Y-45,623 DR+
814 CC X+0,343 Y+358,248
815 C X+32,464 Y-44,343 DR+
816 L X+37,11 Y-43,994
817 L X+37,98 Y-43,865
818 CC X-292,76 Y-25,529
819 C X+38,315 Y-36,228 DR+
820 CC X-3,668 Y-455,274
821 C X+2,047 Y-34,169 DR+
822 CC X-1,185 Y-520,992
823 C X-33,398 Y-35,225 DR+
824 L X-40,513 Y-35,678
825 L X-41,464 Y-35,809
826 CC X+374,894 Y-56,688
827 C X-41,798 Y-44,115 DR+
828 CC X+4,35 Y+492,263
829 C X-2,206 Y-46,056 DR+
830 CC X+1,314 Y+569,663
831 C X+37,299 Y-45,014 DR+
832 L X+43,917 Y-44,649
833 L X+44,949 Y-44,517
834 CC X-474,34 Y-20,814
835 C X+45,281 Y-35,542 DR+
836 L X+32,662 Y-34,74
837 CC X-3,367 Y-653,444
838 C X-28,28 Y-34,192 DR+
839 L X-42,561 Y-34,795
840 L X-47,32 Y-35,023
841 L X-48,434 Y-35,157
842 CC X+594,818 Y-62,028
843 C X-48,764 Y-44,801 DR+
844 L X-35,103 Y-45,551
845 CC X+3,703 Y+721,163
846 C X+30,306 Y-46,072 DR+
847 L X+45,617 Y-45,515
848 L X+50,723 Y-45,305
849 L X+51,918 Y-45,17
850 CC X-741,194 Y-14,709
851 C X+52,247 Y-34,856 DR+
852 L X+36,295 Y-34,105
853 L X+23,606 Y-33,65
854 CC X-4,305 Y-1010,505
855 C X-36,413 Y-33,779 DR+
856 L X-54,126 Y-34,368
857 L X-55,403 Y-34,504
858 CC X+919,962 Y-69,082
859 C X-55,731 Y-45,486 DR+
860 L X-38,65 Y-46,182
861 L X-25,109 Y-46,603
862 L X-12,663 Y-46,857
863 L X-0,016 Y-46,971
864 L X+12,788 Y-46,941
865 L X+27,145 Y-46,749
866 L X+44,483 Y-46,343
867 L X+57,529 Y-45,96
868 L X+58,888 Y-45,822
869 L X+59,214 Y-34,171
870 L X+39,58 Y-33,487
871 L X+23,697 Y-33,081
872 L X+8,962 Y-32,86
873 L X-4,496 Y-32,798
874 L X-19,614 Y-32,881
875 L X-36,384 Y-33,136
876 L X-59,395 Y-33,672
877 CC X-59,609 Y-54,978
878 C X-62,372 Y-33,851 DR+
879 L X-62,697 Y-46,172
880 L X-41,85 Y-46,796
881 L X-25,032 Y-47,166
882 L X-9,456 Y-47,369
883 L X+6,344 Y-47,426
884 L X+22,315 Y-47,34
885 L X+41,641 Y-47,073
886 L X+64,336 Y-46,615
887 L X+65,857 Y-46,475
888 L X+66,18 Y-33,485
889 L X+42,52 Y-32,886
890 L X+24,736 Y-32,562
891 L X+6,638 Y-32,381
892 L X-11,713 Y-32,358
893 L X-30,259 Y-32,485
894 L X-54,062 Y-32,816
895 L X-67,739 Y-33,057
896 L X-69,342 Y-33,199
897 L X-69,663 Y-46,858
898 L X-43,016 Y-47,425
899 L X-22,548 Y-47,722
900 L X-3,478 Y-47,86
901 L X+15,834 Y-47,859
902 L X+38,896 Y-47,694
903 L X+71,142 Y-47,27
904 L X+72,827 Y-47,128
905 L X+73,146 Y-32,799
906 L X+43,338 Y-32,273
907 L X+20,015 Y-32,006
908 L X-1,86 Y-31,902
909 L X-25,858 Y-31,948
910 L X-53,852 Y-32,17
911 L X-74,545 Y-32,402
912 L X-76,311 Y-32,546
913 L X-76,63 Y-47,544
914 L X-43,488 Y-48,021
915 L X-17,135 Y-48,254
916 L X+7,715 Y-48,327
917 L X+34,813 Y-48,255
918 L X+74,002 Y-47,961
919 L X+77,949 Y-47,926
920 L X+79,796 Y-47,78
921 L X+80,113 Y-32,113
922 L X+43,464 Y-31,692
923 L X+13,912 Y-31,495
924 L X-16,103 Y-31,45
925 L X-52,624 Y-31,573
926 L X-81,352 Y-31,747
927 L X-83,281 Y-31,893
928 L X-83,596 Y-48,23
929 L X-43,267 Y-48,587
930 L X-8,27 Y-48,753
931 L X+29,402 Y-48,765
932 L X+84,755 Y-48,581
933 L X+86,765 Y-48,433
934 L X+87,079 Y-31,427
935 L X+38,64 Y-31,12
936 L X-4,398 Y-31
937 L X-59,23 Y-31,035
938 L X-88,158 Y-31,091
939 L X-90,25 Y-31,241
940 L X-90,562 Y-48,915
941 L X-33,486 Y-49,153
942 L X+27,214 Y-49,239
943 L X+91,561 Y-49,236
944 L X+93,735 Y-49,085
945 L X+94,045 Y-30,742
946 L X+13,9 Y-30,572
947 L X-51,891 Y-30,5
948 L X-96,5
949 L Y-49,5
950 L X+96,5
951 L Y-30,5
952 L X-51,891
953 L X+0 Y-40
954 TOOL CALL 16 Z S2387 DR-6
955 L X+1,2 Y-32,9 Z-26 RL
956 L Y-31,7
957 CC X+0 Y-31,7
958 C X+0 Y-30,5 DR+
959 L X-96,5
960 L Y-49,5
961 L X+96,5
962 L Y-30,5
963 L X-2
964 L X-96,5
965 L Y-49,5
966 L X+96,5
967 L Y-30,5
968 L X-2
969 CC X-2 Y-31,7
970 C X-3,2 Y-31,7 DR+
971 L Y-32,9
972 L X+0 Y-40 R0
973 L Z+50 FMAX
974 M78
975 M5
976 L Z-1 FMAX M91
977 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
978 ; CORRECTION USURE GAUCHE
979 ; SUREP R 0. SUREP Z 0.
980 TOOL CALL 1 Z S6000 DR-2,5
981 L X+0 Y-40 FMAX M3
982 L Z+50 FMAX
983 L Z+2 FMAX
984 L Z-2,2 F800
985 L X+0,5 Y-28 RL F1200
986 L Y-27,5
987 CC X+0 Y-27,5
988 C X+0 Y-27 DR+
989 L X-96,5
990 CC X-96,5 Y-30,5
991 C X-100 Y-30,5 DR+
992 L Y-49,5
993 CC X-96,5 Y-49,5
994 C X-96,5 Y-53 DR+
995 L X+96,5
996 CC X+96,5 Y-49,5
997 C X+100 Y-49,5 DR+
998 L Y-30,5
999 CC X+96,5 Y-30,5
1000 C X+96,5 Y-27 DR+
1001 L X-2
1002 CC X-2 Y-27,5
1003 C X-2,5 Y-27,5 DR+
1004 L Y-28
1005 L X+0 Y-40 R0
1006 L Z+50 FMAX
1007 L X-75,5 Y+54,7 FMAX
1008 L Z+2 FMAX
1009 L Z-2,2 F800
1010 L X-75 Y+58,3 RL F1200
1011 L Y+58,8
1012 CC X-75,5 Y+58,8
1013 C X-75,5 Y+59,3 DR+
1014 CC X-75,5 Y+54,7
1015 C X-75,5 Y+50,1 DR+
1016 CC X-75,5 Y+54,7
1017 C X-75,5 Y+59,3 DR+
1018 CC X-75,5 Y+54,7
1019 C X-77,438 Y+58,872 DR+
1020 CC X-77,227 Y+58,419
1021 C X-77,68 Y+58,208 DR+
1022 L X-77,47 Y+57,754
1023 L X-75,5 Y+54,7 R0
1024 L Z+50 FMAX
1025 L X+75,5 FMAX
1026 L Z+2 FMAX
1027 L Z-2,2 F800
1028 L X+76 Y+58,3 RL F1200
1029 L Y+58,8
1030 CC X+75,5 Y+58,8
1031 C X+75,5 Y+59,3 DR+
1032 CC X+75,5 Y+54,7
1033 C X+75,5 Y+50,1 DR+
1034 CC X+75,5 Y+54,7
1035 C X+75,5 Y+59,3 DR+
1036 CC X+75,5 Y+54,7
1037 C X+73,562 Y+58,872 DR+
1038 CC X+73,773 Y+58,419
1039 C X+73,32 Y+58,208 DR+
1040 L X+73,53 Y+57,754
1041 L X+75,5 Y+54,7 R0
1042 L Z+50 FMAX
1043 M5
1044 L Z-1 FMAX M91
1045 L Y-1 FMAX M91
1046 M30
1047 END PGM REP 48 3D MM
