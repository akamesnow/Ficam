0 BEGIN PGM REP 103 IND A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 103 IND A
4 ; PROG-CN DU 05-01-22 A 13:33
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T17 P15323450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T8 CARBURE DIA 4.2 VC 40 DMF FORET DIAM=4.2 2 DENTS A=118. ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-1*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 2
20 L X-17,663 Y+0 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,8 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,8 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-17,663 Y+0 FMAX M99
25 L X+17,663 FMAX M99
26 L Z+50 FMAX
27 M9
28 M5
29 L Z-1 FMAX M91
30 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
31 TOOL CALL 2 Z S2000 DR+0
32 TOOL DEF 17
33 L X-17,663 Y+0 FMAX M3
34 L Z+50 FMAX M7
35 ;  DEBOURRAGE
36 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
37 L X-17,663 Y+0 FMAX M99
38 L X+17,663 FMAX M99
39 L Z+50 FMAX
40 M9
41 M5
42 L Z-1 FMAX M91
43 ; T17 P15323450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
44 ; CORRECTION AUCUNE
45 ; SUREP R 0. SUREP Z 0.
46 TOOL CALL 17 Z S1745 DR+0
47 TOOL DEF 1
48 L X-19,084 Y+0,481 FMAX M3
49 L Z+50 FMAX M25
50 L Z+2 FMAX
51 L Z+0,5 F500
52 CC X-17,663 Y+0
53 CP IPA-180 Z+0,336 DR-
54 CC X-17,663 Y+0
55 CP IPA-180 Z+0,171 DR-
56 CC X-17,663 Y+0
57 CP IPA-180 Z+0,007 DR-
58 CC X-17,663 Y+0
59 CP IPA-180 Z-0,158 DR-
60 CC X-17,663 Y+0
61 CP IPA-180 Z-0,323 DR-
62 CC X-17,663 Y+0
63 CP IPA-180 Z-0,487 DR-
64 CC X-17,663 Y+0
65 CP IPA-180 Z-0,651 DR-
66 CC X-17,663 Y+0
67 CP IPA-180 Z-0,816 DR-
68 CC X-17,663 Y+0
69 CP IPA-180 Z-0,981 DR-
70 CC X-17,663 Y+0
71 CP IPA-180 Z-1,146 DR-
72 CC X-17,663 Y+0
73 CP IPA-180 Z-1,311 DR-
74 CC X-17,663 Y+0
75 CP IPA-180 Z-1,475 DR-
76 CC X-17,663 Y+0
77 CP IPA-180 Z-1,64 DR-
78 CC X-17,663 Y+0
79 CP IPA-180 Z-1,804 DR-
80 CC X-17,663 Y+0
81 CP IPA-180 Z-1,969 DR-
82 CC X-17,663 Y+0
83 CP IPA-180 Z-2,133 DR-
84 CC X-17,663 Y+0
85 CP IPA-180 Z-2,298 DR-
86 CC X-17,663 Y+0
87 CP IPA-180 Z-2,462 DR-
88 CC X-17,663 Y+0
89 CP IPA-180 Z-2,627 DR-
90 CC X-17,663 Y+0
91 CP IPA-180 Z-2,791 DR-
92 CC X-17,663 Y+0
93 CP IPA-180 Z-2,955 DR-
94 CC X-17,663 Y+0
95 CP IPA-180 Z-3,12 DR-
96 CC X-17,663 Y+0
97 CP IPA-180 Z-3,285 DR-
98 CC X-17,663 Y+0
99 CP IPA-180 Z-3,449 DR-
100 CC X-17,663 Y+0
101 CP IPA-180 Z-3,614 DR-
102 CC X-17,663 Y+0
103 CP IPA-180 Z-3,779 DR-
104 CC X-17,663 Y+0
105 CP IPA-180 Z-3,943 DR-
106 CC X-17,663 Y+0
107 CP IPA-180 Z-4,108 DR-
108 CC X-17,663 Y+0
109 CP IPA-180 Z-4,273 DR-
110 CC X-17,663 Y+0
111 CP IPA-180 Z-4,437 DR-
112 CC X-17,663 Y+0
113 CP IPA-180 Z-4,601 DR-
114 CC X-17,663 Y+0
115 CP IPA-180 Z-4,766 DR-
116 CC X-17,663 Y+0
117 CP IPA-180 Z-4,931 DR-
118 CC X-17,663 Y+0
119 CP IPA-180 Z-5,095 DR-
120 CC X-17,663 Y+0
121 CP IPA-180 Z-5,26 DR-
122 CC X-17,663 Y+0
123 CP IPA-180 Z-5,424 DR-
124 CC X-17,663 Y+0
125 CP IPA-180 Z-5,588 DR-
126 CC X-17,663 Y+0
127 CP IPA-180 Z-5,753 DR-
128 CC X-17,663 Y+0
129 CP IPA-180 Z-5,918 DR-
130 CC X-17,663 Y+0
131 CP IPA-180 Z-6,082 DR-
132 CC X-17,663 Y+0
133 CP IPA-180 Z-6,247 DR-
134 CC X-17,663 Y+0
135 CP IPA-180 Z-6,412 DR-
136 CC X-17,663 Y+0
137 CP IPA-180 Z-6,576 DR-
138 CC X-17,663 Y+0
139 CP IPA-180 Z-6,741 DR-
140 CC X-17,663 Y+0
141 CP IPA-180 Z-6,906 DR-
142 CC X-17,663 Y+0
143 CP IPA-180 Z-7,07 DR-
144 CC X-17,663 Y+0
145 CP IPA-180 Z-7,235 DR-
146 CC X-17,663 Y+0
147 CP IPA-180 Z-7,399 DR-
148 CC X-17,663 Y+0
149 CP IPA-180 Z-7,563 DR-
150 CC X-17,663 Y+0
151 CP IPA-180 Z-7,728 DR-
152 CC X-17,663 Y+0
153 CP IPA-180 Z-7,893 DR-
154 CC X-17,663 Y+0
155 CP IPA-180 Z-8,057 DR-
156 CC X-17,663 Y+0
157 CP IPA-180 Z-8,221 DR-
158 CC X-17,663 Y+0
159 CP IPA-180 Z-8,386 DR-
160 CC X-17,663 Y+0
161 CP IPA-180 Z-8,55 DR-
162 CC X-17,663 Y+0
163 CP IPA-180 Z-8,715 DR-
164 CC X-17,663 Y+0
165 CP IPA-180 Z-8,88 DR-
166 CC X-17,663 Y+0
167 CP IPA-180 Z-9,044 DR-
168 CC X-17,663 Y+0
169 CP IPA-180 Z-9,209 DR-
170 CC X-17,663 Y+0
171 CP IPA-180 Z-9,374 DR-
172 CC X-17,663 Y+0
173 CP IPA-180 Z-9,538 DR-
174 CC X-17,663 Y+0
175 CP IPA-180 Z-9,703 DR-
176 CC X-17,663 Y+0
177 CP IPA-180 Z-9,867 DR-
178 CC X-17,663 Y+0
179 CP IPA-180 Z-10,032 DR-
180 CC X-17,663 Y+0
181 CP IPA-180 Z-10,197 DR-
182 CC X-17,663 Y+0
183 CP IPA-180 Z-10,361 DR-
184 CC X-17,663 Y+0
185 CP IPA-180 Z-10,526 DR-
186 CC X-17,663 Y+0
187 CP IPA-180 Z-10,69 DR-
188 CC X-17,663 Y+0
189 CP IPA-180 Z-10,855 DR-
190 CC X-17,663 Y+0
191 CP IPA-180 Z-11,019 DR-
192 CC X-17,663 Y+0
193 CP IPA-161,299 Z-11,167 DR-
194 L X-17,413 Y+0 F245
195 CC X-18,163 Y+0
196 C X-18,913 Y+0 DR+
197 CC X-17,163 Y+0
198 C X-15,413 Y+0 DR+
199 CC X-18,163 Y+0
200 C X-16,601 Y+2,263 DR+
201 CC X-17,663 Y+0
202 C X-15,163 Y+0 DR+
203 CC X-17,663 Y+0
204 C X-16,601 Y+2,263 DR+
205 L Z+10 FMAX
206 L X-19,084 Y+0,481 FMAX
207 L Z-9,167 FMAX
208 L Z-10,667 F500
209 CC X-17,663 Y+0
210 CP IPA-180 Z-10,832 DR-
211 CC X-17,663 Y+0
212 CP IPA-180 Z-10,996 DR-
213 CC X-17,663 Y+0
214 CP IPA-180 Z-11,16 DR-
215 CC X-17,663 Y+0
216 CP IPA-180 Z-11,325 DR-
217 CC X-17,663 Y+0
218 CP IPA-180 Z-11,49 DR-
219 CC X-17,663 Y+0
220 CP IPA-180 Z-11,654 DR-
221 CC X-17,663 Y+0
222 CP IPA-180 Z-11,819 DR-
223 CC X-17,663 Y+0
224 CP IPA-180 Z-11,983 DR-
225 CC X-17,663 Y+0
226 CP IPA-180 Z-12,148 DR-
227 CC X-17,663 Y+0
228 CP IPA-180 Z-12,312 DR-
229 CC X-17,663 Y+0
230 CP IPA-180 Z-12,477 DR-
231 CC X-17,663 Y+0
232 CP IPA-180 Z-12,641 DR-
233 CC X-17,663 Y+0
234 CP IPA-180 Z-12,806 DR-
235 CC X-17,663 Y+0
236 CP IPA-180 Z-12,971 DR-
237 CC X-17,663 Y+0
238 CP IPA-180 Z-13,136 DR-
239 CC X-17,663 Y+0
240 CP IPA-180 Z-13,3 DR-
241 CC X-17,663 Y+0
242 CP IPA-180 Z-13,465 DR-
243 CC X-17,663 Y+0
244 CP IPA-180 Z-13,629 DR-
245 CC X-17,663 Y+0
246 CP IPA-180 Z-13,794 DR-
247 CC X-17,663 Y+0
248 CP IPA-180 Z-13,958 DR-
249 CC X-17,663 Y+0
250 CP IPA-180 Z-14,123 DR-
251 CC X-17,663 Y+0
252 CP IPA-180 Z-14,287 DR-
253 CC X-17,663 Y+0
254 CP IPA-180 Z-14,451 DR-
255 CC X-17,663 Y+0
256 CP IPA-180 Z-14,616 DR-
257 CC X-17,663 Y+0
258 CP IPA-180 Z-14,781 DR-
259 CC X-17,663 Y+0
260 CP IPA-180 Z-14,945 DR-
261 CC X-17,663 Y+0
262 CP IPA-180 Z-15,11 DR-
263 CC X-17,663 Y+0
264 CP IPA-180 Z-15,274 DR-
265 CC X-17,663 Y+0
266 CP IPA-180 Z-15,438 DR-
267 CC X-17,663 Y+0
268 CP IPA-180 Z-15,603 DR-
269 CC X-17,663 Y+0
270 CP IPA-180 Z-15,768 DR-
271 CC X-17,663 Y+0
272 CP IPA-180 Z-15,933 DR-
273 CC X-17,663 Y+0
274 CP IPA-180 Z-16,098 DR-
275 CC X-17,663 Y+0
276 CP IPA-180 Z-16,262 DR-
277 CC X-17,663 Y+0
278 CP IPA-180 Z-16,427 DR-
279 CC X-17,663 Y+0
280 CP IPA-180 Z-16,591 DR-
281 CC X-17,663 Y+0
282 CP IPA-180 Z-16,756 DR-
283 CC X-17,663 Y+0
284 CP IPA-180 Z-16,92 DR-
285 CC X-17,663 Y+0
286 CP IPA-180 Z-17,084 DR-
287 CC X-17,663 Y+0
288 CP IPA-180 Z-17,249 DR-
289 CC X-17,663 Y+0
290 CP IPA-180 Z-17,413 DR-
291 CC X-17,663 Y+0
292 CP IPA-180 Z-17,578 DR-
293 CC X-17,663 Y+0
294 CP IPA-180 Z-17,743 DR-
295 CC X-17,663 Y+0
296 CP IPA-180 Z-17,907 DR-
297 CC X-17,663 Y+0
298 CP IPA-180 Z-18,072 DR-
299 CC X-17,663 Y+0
300 CP IPA-180 Z-18,236 DR-
301 CC X-17,663 Y+0
302 CP IPA-180 Z-18,401 DR-
303 CC X-17,663 Y+0
304 CP IPA-180 Z-18,566 DR-
305 CC X-17,663 Y+0
306 CP IPA-180 Z-18,73 DR-
307 CC X-17,663 Y+0
308 CP IPA-180 Z-18,895 DR-
309 CC X-17,663 Y+0
310 CP IPA-180 Z-19,06 DR-
311 CC X-17,663 Y+0
312 CP IPA-180 Z-19,224 DR-
313 CC X-17,663 Y+0
314 CP IPA-180 Z-19,389 DR-
315 CC X-17,663 Y+0
316 CP IPA-180 Z-19,553 DR-
317 CC X-17,663 Y+0
318 CP IPA-180 Z-19,718 DR-
319 CC X-17,663 Y+0
320 CP IPA-180 Z-19,882 DR-
321 CC X-17,663 Y+0
322 CP IPA-180 Z-20,047 DR-
323 CC X-17,663 Y+0
324 CP IPA-180 Z-20,211 DR-
325 CC X-17,663 Y+0
326 CP IPA-180 Z-20,375 DR-
327 CC X-17,663 Y+0
328 CP IPA-180 Z-20,54 DR-
329 CC X-17,663 Y+0
330 CP IPA-180 Z-20,704 DR-
331 CC X-17,663 Y+0
332 CP IPA-180 Z-20,869 DR-
333 CC X-17,663 Y+0
334 CP IPA-180 Z-21,034 DR-
335 CC X-17,663 Y+0
336 CP IPA-180 Z-21,199 DR-
337 CC X-17,663 Y+0
338 CP IPA-180 Z-21,364 DR-
339 CC X-17,663 Y+0
340 CP IPA-180 Z-21,528 DR-
341 CC X-17,663 Y+0
342 CP IPA-180 Z-21,692 DR-
343 CC X-17,663 Y+0
344 CP IPA-180 Z-21,857 DR-
345 CC X-17,663 Y+0
346 CP IPA-180 Z-22,022 DR-
347 CC X-17,663 Y+0
348 CP IPA-180 Z-22,186 DR-
349 CC X-17,663 Y+0
350 CP IPA-161,299 Z-22,333 DR-
351 L X-17,413 Y+0 F245
352 CC X-18,163 Y+0
353 C X-18,913 Y+0 DR+
354 CC X-17,163 Y+0
355 C X-15,413 Y+0 DR+
356 CC X-18,163 Y+0
357 C X-16,601 Y+2,263 DR+
358 CC X-17,663 Y+0
359 C X-15,163 Y+0 DR+
360 CC X-17,663 Y+0
361 C X-16,601 Y+2,263 DR+
362 L Z+10 FMAX
363 L X-19,084 Y+0,481 FMAX
364 L Z-20,333 FMAX
365 L Z-21,833 F500
366 CC X-17,663 Y+0
367 CP IPA-180 Z-21,997 DR-
368 CC X-17,663 Y+0
369 CP IPA-180 Z-22,162 DR-
370 CC X-17,663 Y+0
371 CP IPA-180 Z-22,327 DR-
372 CC X-17,663 Y+0
373 CP IPA-180 Z-22,492 DR-
374 CC X-17,663 Y+0
375 CP IPA-180 Z-22,657 DR-
376 CC X-17,663 Y+0
377 CP IPA-180 Z-22,821 DR-
378 CC X-17,663 Y+0
379 CP IPA-180 Z-22,986 DR-
380 CC X-17,663 Y+0
381 CP IPA-180 Z-23,15 DR-
382 CC X-17,663 Y+0
383 CP IPA-180 Z-23,314 DR-
384 CC X-17,663 Y+0
385 CP IPA-180 Z-23,479 DR-
386 CC X-17,663 Y+0
387 CP IPA-180 Z-23,644 DR-
388 CC X-17,663 Y+0
389 CP IPA-180 Z-23,808 DR-
390 CC X-17,663 Y+0
391 CP IPA-180 Z-23,973 DR-
392 CC X-17,663 Y+0
393 CP IPA-180 Z-24,137 DR-
394 CC X-17,663 Y+0
395 CP IPA-180 Z-24,302 DR-
396 CC X-17,663 Y+0
397 CP IPA-180 Z-24,466 DR-
398 CC X-17,663 Y+0
399 CP IPA-180 Z-24,631 DR-
400 CC X-17,663 Y+0
401 CP IPA-180 Z-24,795 DR-
402 CC X-17,663 Y+0
403 CP IPA-180 Z-24,96 DR-
404 CC X-17,663 Y+0
405 CP IPA-180 Z-25,125 DR-
406 CC X-17,663 Y+0
407 CP IPA-180 Z-25,29 DR-
408 CC X-17,663 Y+0
409 CP IPA-180 Z-25,454 DR-
410 CC X-17,663 Y+0
411 CP IPA-180 Z-25,619 DR-
412 CC X-17,663 Y+0
413 CP IPA-180 Z-25,783 DR-
414 CC X-17,663 Y+0
415 CP IPA-180 Z-25,947 DR-
416 CC X-17,663 Y+0
417 CP IPA-180 Z-26,112 DR-
418 CC X-17,663 Y+0
419 CP IPA-180 Z-26,276 DR-
420 CC X-17,663 Y+0
421 CP IPA-180 Z-26,441 DR-
422 CC X-17,663 Y+0
423 CP IPA-180 Z-26,605 DR-
424 CC X-17,663 Y+0
425 CP IPA-180 Z-26,77 DR-
426 CC X-17,663 Y+0
427 CP IPA-180 Z-26,935 DR-
428 CC X-17,663 Y+0
429 CP IPA-180 Z-27,099 DR-
430 CC X-17,663 Y+0
431 CP IPA-180 Z-27,264 DR-
432 CC X-17,663 Y+0
433 CP IPA-180 Z-27,428 DR-
434 CC X-17,663 Y+0
435 CP IPA-180 Z-27,593 DR-
436 CC X-17,663 Y+0
437 CP IPA-180 Z-27,758 DR-
438 CC X-17,663 Y+0
439 CP IPA-180 Z-27,922 DR-
440 CC X-17,663 Y+0
441 CP IPA-180 Z-28,087 DR-
442 CC X-17,663 Y+0
443 CP IPA-180 Z-28,252 DR-
444 CC X-17,663 Y+0
445 CP IPA-180 Z-28,416 DR-
446 CC X-17,663 Y+0
447 CP IPA-180 Z-28,581 DR-
448 CC X-17,663 Y+0
449 CP IPA-180 Z-28,745 DR-
450 CC X-17,663 Y+0
451 CP IPA-180 Z-28,91 DR-
452 CC X-17,663 Y+0
453 CP IPA-180 Z-29,074 DR-
454 CC X-17,663 Y+0
455 CP IPA-180 Z-29,239 DR-
456 CC X-17,663 Y+0
457 CP IPA-180 Z-29,403 DR-
458 CC X-17,663 Y+0
459 CP IPA-180 Z-29,567 DR-
460 CC X-17,663 Y+0
461 CP IPA-180 Z-29,732 DR-
462 CC X-17,663 Y+0
463 CP IPA-180 Z-29,897 DR-
464 CC X-17,663 Y+0
465 CP IPA-180 Z-30,061 DR-
466 CC X-17,663 Y+0
467 CP IPA-180 Z-30,226 DR-
468 CC X-17,663 Y+0
469 CP IPA-180 Z-30,39 DR-
470 CC X-17,663 Y+0
471 CP IPA-180 Z-30,555 DR-
472 CC X-17,663 Y+0
473 CP IPA-180 Z-30,72 DR-
474 CC X-17,663 Y+0
475 CP IPA-180 Z-30,884 DR-
476 CC X-17,663 Y+0
477 CP IPA-180 Z-31,049 DR-
478 CC X-17,663 Y+0
479 CP IPA-180 Z-31,214 DR-
480 CC X-17,663 Y+0
481 CP IPA-180 Z-31,378 DR-
482 CC X-17,663 Y+0
483 CP IPA-180 Z-31,543 DR-
484 CC X-17,663 Y+0
485 CP IPA-180 Z-31,707 DR-
486 CC X-17,663 Y+0
487 CP IPA-180 Z-31,872 DR-
488 CC X-17,663 Y+0
489 CP IPA-180 Z-32,036 DR-
490 CC X-17,663 Y+0
491 CP IPA-180 Z-32,201 DR-
492 CC X-17,663 Y+0
493 CP IPA-180 Z-32,365 DR-
494 CC X-17,663 Y+0
495 CP IPA-180 Z-32,529 DR-
496 CC X-17,663 Y+0
497 CP IPA-180 Z-32,694 DR-
498 CC X-17,663 Y+0
499 CP IPA-180 Z-32,859 DR-
500 CC X-17,663 Y+0
501 CP IPA-180 Z-33,023 DR-
502 CC X-17,663 Y+0
503 CP IPA-180 Z-33,188 DR-
504 CC X-17,663 Y+0
505 CP IPA-180 Z-33,353 DR-
506 CC X-17,663 Y+0
507 CP IPA-161,299 Z-33,5 DR-
508 L X-17,413 Y+0 F245
509 CC X-18,163 Y+0
510 C X-18,913 Y+0 DR+
511 CC X-17,163 Y+0
512 C X-15,413 Y+0 DR+
513 CC X-18,163 Y+0
514 C X-16,601 Y+2,263 DR+
515 CC X-17,663 Y+0
516 C X-15,163 Y+0 DR+
517 CC X-17,663 Y+0
518 C X-16,601 Y+2,263 DR+
519 L Z+50 FMAX
520 L X+16,243 Y+0,481 FMAX
521 L Z+2 FMAX
522 L Z+0,5 F500
523 CC X+17,663 Y+0
524 CP IPA-180 Z+0,336 DR-
525 CC X+17,663 Y+0
526 CP IPA-180 Z+0,171 DR-
527 CC X+17,663 Y+0
528 CP IPA-180 Z+0,007 DR-
529 CC X+17,663 Y+0
530 CP IPA-180 Z-0,158 DR-
531 CC X+17,663 Y+0
532 CP IPA-180 Z-0,323 DR-
533 CC X+17,663 Y+0
534 CP IPA-180 Z-0,487 DR-
535 CC X+17,663 Y+0
536 CP IPA-180 Z-0,651 DR-
537 CC X+17,663 Y+0
538 CP IPA-180 Z-0,816 DR-
539 CC X+17,663 Y+0
540 CP IPA-180 Z-0,981 DR-
541 CC X+17,663 Y+0
542 CP IPA-180 Z-1,146 DR-
543 CC X+17,663 Y+0
544 CP IPA-180 Z-1,311 DR-
545 CC X+17,663 Y+0
546 CP IPA-180 Z-1,475 DR-
547 CC X+17,663 Y+0
548 CP IPA-180 Z-1,64 DR-
549 CC X+17,663 Y+0
550 CP IPA-180 Z-1,804 DR-
551 CC X+17,663 Y+0
552 CP IPA-180 Z-1,969 DR-
553 CC X+17,663 Y+0
554 CP IPA-180 Z-2,133 DR-
555 CC X+17,663 Y+0
556 CP IPA-180 Z-2,298 DR-
557 CC X+17,663 Y+0
558 CP IPA-180 Z-2,462 DR-
559 CC X+17,663 Y+0
560 CP IPA-180 Z-2,627 DR-
561 CC X+17,663 Y+0
562 CP IPA-180 Z-2,791 DR-
563 CC X+17,663 Y+0
564 CP IPA-180 Z-2,955 DR-
565 CC X+17,663 Y+0
566 CP IPA-180 Z-3,12 DR-
567 CC X+17,663 Y+0
568 CP IPA-180 Z-3,285 DR-
569 CC X+17,663 Y+0
570 CP IPA-180 Z-3,449 DR-
571 CC X+17,663 Y+0
572 CP IPA-180 Z-3,614 DR-
573 CC X+17,663 Y+0
574 CP IPA-180 Z-3,779 DR-
575 CC X+17,663 Y+0
576 CP IPA-180 Z-3,943 DR-
577 CC X+17,663 Y+0
578 CP IPA-180 Z-4,108 DR-
579 CC X+17,663 Y+0
580 CP IPA-180 Z-4,273 DR-
581 CC X+17,663 Y+0
582 CP IPA-180 Z-4,437 DR-
583 CC X+17,663 Y+0
584 CP IPA-180 Z-4,601 DR-
585 CC X+17,663 Y+0
586 CP IPA-180 Z-4,766 DR-
587 CC X+17,663 Y+0
588 CP IPA-180 Z-4,931 DR-
589 CC X+17,663 Y+0
590 CP IPA-180 Z-5,095 DR-
591 CC X+17,663 Y+0
592 CP IPA-180 Z-5,26 DR-
593 CC X+17,663 Y+0
594 CP IPA-180 Z-5,424 DR-
595 CC X+17,663 Y+0
596 CP IPA-180 Z-5,588 DR-
597 CC X+17,663 Y+0
598 CP IPA-180 Z-5,753 DR-
599 CC X+17,663 Y+0
600 CP IPA-180 Z-5,918 DR-
601 CC X+17,663 Y+0
602 CP IPA-180 Z-6,082 DR-
603 CC X+17,663 Y+0
604 CP IPA-180 Z-6,247 DR-
605 CC X+17,663 Y+0
606 CP IPA-180 Z-6,412 DR-
607 CC X+17,663 Y+0
608 CP IPA-180 Z-6,576 DR-
609 CC X+17,663 Y+0
610 CP IPA-180 Z-6,741 DR-
611 CC X+17,663 Y+0
612 CP IPA-180 Z-6,906 DR-
613 CC X+17,663 Y+0
614 CP IPA-180 Z-7,07 DR-
615 CC X+17,663 Y+0
616 CP IPA-180 Z-7,235 DR-
617 CC X+17,663 Y+0
618 CP IPA-180 Z-7,399 DR-
619 CC X+17,663 Y+0
620 CP IPA-180 Z-7,563 DR-
621 CC X+17,663 Y+0
622 CP IPA-180 Z-7,728 DR-
623 CC X+17,663 Y+0
624 CP IPA-180 Z-7,893 DR-
625 CC X+17,663 Y+0
626 CP IPA-180 Z-8,057 DR-
627 CC X+17,663 Y+0
628 CP IPA-180 Z-8,221 DR-
629 CC X+17,663 Y+0
630 CP IPA-180 Z-8,386 DR-
631 CC X+17,663 Y+0
632 CP IPA-180 Z-8,55 DR-
633 CC X+17,663 Y+0
634 CP IPA-180 Z-8,715 DR-
635 CC X+17,663 Y+0
636 CP IPA-180 Z-8,88 DR-
637 CC X+17,663 Y+0
638 CP IPA-180 Z-9,044 DR-
639 CC X+17,663 Y+0
640 CP IPA-180 Z-9,209 DR-
641 CC X+17,663 Y+0
642 CP IPA-180 Z-9,374 DR-
643 CC X+17,663 Y+0
644 CP IPA-180 Z-9,538 DR-
645 CC X+17,663 Y+0
646 CP IPA-180 Z-9,703 DR-
647 CC X+17,663 Y+0
648 CP IPA-180 Z-9,867 DR-
649 CC X+17,663 Y+0
650 CP IPA-180 Z-10,032 DR-
651 CC X+17,663 Y+0
652 CP IPA-180 Z-10,197 DR-
653 CC X+17,663 Y+0
654 CP IPA-180 Z-10,361 DR-
655 CC X+17,663 Y+0
656 CP IPA-180 Z-10,526 DR-
657 CC X+17,663 Y+0
658 CP IPA-180 Z-10,69 DR-
659 CC X+17,663 Y+0
660 CP IPA-180 Z-10,855 DR-
661 CC X+17,663 Y+0
662 CP IPA-180 Z-11,019 DR-
663 CC X+17,663 Y+0
664 CP IPA-161,287 Z-11,167 DR-
665 L X+17,913 Y+0 F245
666 CC X+17,163 Y+0
667 C X+16,413 Y+0 DR+
668 CC X+18,163 Y+0
669 C X+19,913 Y+0 DR+
670 CC X+17,163 Y+0
671 C X+18,726 Y+2,263 DR+
672 CC X+17,663 Y+0
673 C X+20,163 Y+0 DR+
674 CC X+17,663 Y+0
675 C X+18,726 Y+2,263 DR+
676 L Z+10 FMAX
677 L X+16,243 Y+0,481 FMAX
678 L Z-9,167 FMAX
679 L Z-10,667 F500
680 CC X+17,663 Y+0
681 CP IPA-180 Z-10,832 DR-
682 CC X+17,663 Y+0
683 CP IPA-180 Z-10,996 DR-
684 CC X+17,663 Y+0
685 CP IPA-180 Z-11,16 DR-
686 CC X+17,663 Y+0
687 CP IPA-180 Z-11,325 DR-
688 CC X+17,663 Y+0
689 CP IPA-180 Z-11,49 DR-
690 CC X+17,663 Y+0
691 CP IPA-180 Z-11,654 DR-
692 CC X+17,663 Y+0
693 CP IPA-180 Z-11,819 DR-
694 CC X+17,663 Y+0
695 CP IPA-180 Z-11,983 DR-
696 CC X+17,663 Y+0
697 CP IPA-180 Z-12,148 DR-
698 CC X+17,663 Y+0
699 CP IPA-180 Z-12,312 DR-
700 CC X+17,663 Y+0
701 CP IPA-180 Z-12,477 DR-
702 CC X+17,663 Y+0
703 CP IPA-180 Z-12,641 DR-
704 CC X+17,663 Y+0
705 CP IPA-180 Z-12,806 DR-
706 CC X+17,663 Y+0
707 CP IPA-180 Z-12,971 DR-
708 CC X+17,663 Y+0
709 CP IPA-180 Z-13,136 DR-
710 CC X+17,663 Y+0
711 CP IPA-180 Z-13,3 DR-
712 CC X+17,663 Y+0
713 CP IPA-180 Z-13,465 DR-
714 CC X+17,663 Y+0
715 CP IPA-180 Z-13,629 DR-
716 CC X+17,663 Y+0
717 CP IPA-180 Z-13,794 DR-
718 CC X+17,663 Y+0
719 CP IPA-180 Z-13,958 DR-
720 CC X+17,663 Y+0
721 CP IPA-180 Z-14,123 DR-
722 CC X+17,663 Y+0
723 CP IPA-180 Z-14,287 DR-
724 CC X+17,663 Y+0
725 CP IPA-180 Z-14,451 DR-
726 CC X+17,663 Y+0
727 CP IPA-180 Z-14,616 DR-
728 CC X+17,663 Y+0
729 CP IPA-180 Z-14,781 DR-
730 CC X+17,663 Y+0
731 CP IPA-180 Z-14,945 DR-
732 CC X+17,663 Y+0
733 CP IPA-180 Z-15,11 DR-
734 CC X+17,663 Y+0
735 CP IPA-180 Z-15,274 DR-
736 CC X+17,663 Y+0
737 CP IPA-180 Z-15,438 DR-
738 CC X+17,663 Y+0
739 CP IPA-180 Z-15,603 DR-
740 CC X+17,663 Y+0
741 CP IPA-180 Z-15,768 DR-
742 CC X+17,663 Y+0
743 CP IPA-180 Z-15,933 DR-
744 CC X+17,663 Y+0
745 CP IPA-180 Z-16,098 DR-
746 CC X+17,663 Y+0
747 CP IPA-180 Z-16,262 DR-
748 CC X+17,663 Y+0
749 CP IPA-180 Z-16,427 DR-
750 CC X+17,663 Y+0
751 CP IPA-180 Z-16,591 DR-
752 CC X+17,663 Y+0
753 CP IPA-180 Z-16,756 DR-
754 CC X+17,663 Y+0
755 CP IPA-180 Z-16,92 DR-
756 CC X+17,663 Y+0
757 CP IPA-180 Z-17,084 DR-
758 CC X+17,663 Y+0
759 CP IPA-180 Z-17,249 DR-
760 CC X+17,663 Y+0
761 CP IPA-180 Z-17,413 DR-
762 CC X+17,663 Y+0
763 CP IPA-180 Z-17,578 DR-
764 CC X+17,663 Y+0
765 CP IPA-180 Z-17,743 DR-
766 CC X+17,663 Y+0
767 CP IPA-180 Z-17,907 DR-
768 CC X+17,663 Y+0
769 CP IPA-180 Z-18,072 DR-
770 CC X+17,663 Y+0
771 CP IPA-180 Z-18,236 DR-
772 CC X+17,663 Y+0
773 CP IPA-180 Z-18,401 DR-
774 CC X+17,663 Y+0
775 CP IPA-180 Z-18,566 DR-
776 CC X+17,663 Y+0
777 CP IPA-180 Z-18,73 DR-
778 CC X+17,663 Y+0
779 CP IPA-180 Z-18,895 DR-
780 CC X+17,663 Y+0
781 CP IPA-180 Z-19,06 DR-
782 CC X+17,663 Y+0
783 CP IPA-180 Z-19,224 DR-
784 CC X+17,663 Y+0
785 CP IPA-180 Z-19,389 DR-
786 CC X+17,663 Y+0
787 CP IPA-180 Z-19,553 DR-
788 CC X+17,663 Y+0
789 CP IPA-180 Z-19,718 DR-
790 CC X+17,663 Y+0
791 CP IPA-180 Z-19,882 DR-
792 CC X+17,663 Y+0
793 CP IPA-180 Z-20,047 DR-
794 CC X+17,663 Y+0
795 CP IPA-180 Z-20,211 DR-
796 CC X+17,663 Y+0
797 CP IPA-180 Z-20,375 DR-
798 CC X+17,663 Y+0
799 CP IPA-180 Z-20,54 DR-
800 CC X+17,663 Y+0
801 CP IPA-180 Z-20,704 DR-
802 CC X+17,663 Y+0
803 CP IPA-180 Z-20,869 DR-
804 CC X+17,663 Y+0
805 CP IPA-180 Z-21,034 DR-
806 CC X+17,663 Y+0
807 CP IPA-180 Z-21,199 DR-
808 CC X+17,663 Y+0
809 CP IPA-180 Z-21,364 DR-
810 CC X+17,663 Y+0
811 CP IPA-180 Z-21,528 DR-
812 CC X+17,663 Y+0
813 CP IPA-180 Z-21,692 DR-
814 CC X+17,663 Y+0
815 CP IPA-180 Z-21,857 DR-
816 CC X+17,663 Y+0
817 CP IPA-180 Z-22,022 DR-
818 CC X+17,663 Y+0
819 CP IPA-180 Z-22,186 DR-
820 CC X+17,663 Y+0
821 CP IPA-161,287 Z-22,333 DR-
822 L X+17,913 Y+0 F245
823 CC X+17,163 Y+0
824 C X+16,413 Y+0 DR+
825 CC X+18,163 Y+0
826 C X+19,913 Y+0 DR+
827 CC X+17,163 Y+0
828 C X+18,726 Y+2,263 DR+
829 CC X+17,663 Y+0
830 C X+20,163 Y+0 DR+
831 CC X+17,663 Y+0
832 C X+18,726 Y+2,263 DR+
833 L Z+10 FMAX
834 L X+16,243 Y+0,481 FMAX
835 L Z-20,333 FMAX
836 L Z-21,833 F500
837 CC X+17,663 Y+0
838 CP IPA-180 Z-21,997 DR-
839 CC X+17,663 Y+0
840 CP IPA-180 Z-22,162 DR-
841 CC X+17,663 Y+0
842 CP IPA-180 Z-22,327 DR-
843 CC X+17,663 Y+0
844 CP IPA-180 Z-22,492 DR-
845 CC X+17,663 Y+0
846 CP IPA-180 Z-22,657 DR-
847 CC X+17,663 Y+0
848 CP IPA-180 Z-22,821 DR-
849 CC X+17,663 Y+0
850 CP IPA-180 Z-22,986 DR-
851 CC X+17,663 Y+0
852 CP IPA-180 Z-23,15 DR-
853 CC X+17,663 Y+0
854 CP IPA-180 Z-23,314 DR-
855 CC X+17,663 Y+0
856 CP IPA-180 Z-23,479 DR-
857 CC X+17,663 Y+0
858 CP IPA-180 Z-23,644 DR-
859 CC X+17,663 Y+0
860 CP IPA-180 Z-23,808 DR-
861 CC X+17,663 Y+0
862 CP IPA-180 Z-23,973 DR-
863 CC X+17,663 Y+0
864 CP IPA-180 Z-24,137 DR-
865 CC X+17,663 Y+0
866 CP IPA-180 Z-24,302 DR-
867 CC X+17,663 Y+0
868 CP IPA-180 Z-24,466 DR-
869 CC X+17,663 Y+0
870 CP IPA-180 Z-24,631 DR-
871 CC X+17,663 Y+0
872 CP IPA-180 Z-24,795 DR-
873 CC X+17,663 Y+0
874 CP IPA-180 Z-24,96 DR-
875 CC X+17,663 Y+0
876 CP IPA-180 Z-25,125 DR-
877 CC X+17,663 Y+0
878 CP IPA-180 Z-25,29 DR-
879 CC X+17,663 Y+0
880 CP IPA-180 Z-25,454 DR-
881 CC X+17,663 Y+0
882 CP IPA-180 Z-25,619 DR-
883 CC X+17,663 Y+0
884 CP IPA-180 Z-25,783 DR-
885 CC X+17,663 Y+0
886 CP IPA-180 Z-25,947 DR-
887 CC X+17,663 Y+0
888 CP IPA-180 Z-26,112 DR-
889 CC X+17,663 Y+0
890 CP IPA-180 Z-26,276 DR-
891 CC X+17,663 Y+0
892 CP IPA-180 Z-26,441 DR-
893 CC X+17,663 Y+0
894 CP IPA-180 Z-26,605 DR-
895 CC X+17,663 Y+0
896 CP IPA-180 Z-26,77 DR-
897 CC X+17,663 Y+0
898 CP IPA-180 Z-26,935 DR-
899 CC X+17,663 Y+0
900 CP IPA-180 Z-27,099 DR-
901 CC X+17,663 Y+0
902 CP IPA-180 Z-27,264 DR-
903 CC X+17,663 Y+0
904 CP IPA-180 Z-27,428 DR-
905 CC X+17,663 Y+0
906 CP IPA-180 Z-27,593 DR-
907 CC X+17,663 Y+0
908 CP IPA-180 Z-27,758 DR-
909 CC X+17,663 Y+0
910 CP IPA-180 Z-27,922 DR-
911 CC X+17,663 Y+0
912 CP IPA-180 Z-28,087 DR-
913 CC X+17,663 Y+0
914 CP IPA-180 Z-28,252 DR-
915 CC X+17,663 Y+0
916 CP IPA-180 Z-28,416 DR-
917 CC X+17,663 Y+0
918 CP IPA-180 Z-28,581 DR-
919 CC X+17,663 Y+0
920 CP IPA-180 Z-28,745 DR-
921 CC X+17,663 Y+0
922 CP IPA-180 Z-28,91 DR-
923 CC X+17,663 Y+0
924 CP IPA-180 Z-29,074 DR-
925 CC X+17,663 Y+0
926 CP IPA-180 Z-29,239 DR-
927 CC X+17,663 Y+0
928 CP IPA-180 Z-29,403 DR-
929 CC X+17,663 Y+0
930 CP IPA-180 Z-29,567 DR-
931 CC X+17,663 Y+0
932 CP IPA-180 Z-29,732 DR-
933 CC X+17,663 Y+0
934 CP IPA-180 Z-29,897 DR-
935 CC X+17,663 Y+0
936 CP IPA-180 Z-30,061 DR-
937 CC X+17,663 Y+0
938 CP IPA-180 Z-30,226 DR-
939 CC X+17,663 Y+0
940 CP IPA-180 Z-30,39 DR-
941 CC X+17,663 Y+0
942 CP IPA-180 Z-30,555 DR-
943 CC X+17,663 Y+0
944 CP IPA-180 Z-30,72 DR-
945 CC X+17,663 Y+0
946 CP IPA-180 Z-30,884 DR-
947 CC X+17,663 Y+0
948 CP IPA-180 Z-31,049 DR-
949 CC X+17,663 Y+0
950 CP IPA-180 Z-31,214 DR-
951 CC X+17,663 Y+0
952 CP IPA-180 Z-31,378 DR-
953 CC X+17,663 Y+0
954 CP IPA-180 Z-31,543 DR-
955 CC X+17,663 Y+0
956 CP IPA-180 Z-31,707 DR-
957 CC X+17,663 Y+0
958 CP IPA-180 Z-31,872 DR-
959 CC X+17,663 Y+0
960 CP IPA-180 Z-32,036 DR-
961 CC X+17,663 Y+0
962 CP IPA-180 Z-32,201 DR-
963 CC X+17,663 Y+0
964 CP IPA-180 Z-32,365 DR-
965 CC X+17,663 Y+0
966 CP IPA-180 Z-32,529 DR-
967 CC X+17,663 Y+0
968 CP IPA-180 Z-32,694 DR-
969 CC X+17,663 Y+0
970 CP IPA-180 Z-32,859 DR-
971 CC X+17,663 Y+0
972 CP IPA-180 Z-33,023 DR-
973 CC X+17,663 Y+0
974 CP IPA-180 Z-33,188 DR-
975 CC X+17,663 Y+0
976 CP IPA-180 Z-33,353 DR-
977 CC X+17,663 Y+0
978 CP IPA-161,287 Z-33,5 DR-
979 L X+17,913 Y+0 F245
980 CC X+17,163 Y+0
981 C X+16,413 Y+0 DR+
982 CC X+18,163 Y+0
983 C X+19,913 Y+0 DR+
984 CC X+17,163 Y+0
985 C X+18,726 Y+2,263 DR+
986 CC X+17,663 Y+0
987 C X+20,163 Y+0 DR+
988 CC X+17,663 Y+0
989 C X+18,726 Y+2,263 DR+
990 L Z+50 FMAX
991 TOOL CALL 17 Z S1745 DR-5
992 L X-17,663 Y+0 Z+50 FMAX
993 L Z-20,333 FMAX
994 L Z-33,5 F500
995 L X-18,163 Y+1 RL F245
996 L X-19,163
997 CC X-19,163 Y+0
998 C X-20,163 Y+0 DR+
999 CC X-17,663 Y+0
1000 C X-15,163 Y+0 DR+
1001 CC X-17,663 Y+0
1002 C X-20,163 Y+0 DR+
1003 CC X-17,663 Y+0
1004 C X-19,966 Y-0,974 DR+
1005 CC X-17,663 Y+0
1006 C X-15,163 Y+0 DR+
1007 CC X-17,663 Y+0
1008 C X-20,163 Y+0 DR+
1009 CC X-17,663 Y+0
1010 C X-19,966 Y-0,974 DR+
1011 CC X-19,045 Y-0,584
1012 C X-18,655 Y-1,505 DR+
1013 L X-17,734 Y-1,116
1014 L X-17,663 Y+0 R0
1015 L Z+50 FMAX
1016 L X+17,663 FMAX
1017 L Z-20,333 FMAX
1018 L Z-33,5 F500
1019 L X+17,163 Y+1 RL F245
1020 L X+16,163
1021 CC X+16,163 Y+0
1022 C X+15,163 Y+0 DR+
1023 CC X+17,663 Y+0
1024 C X+20,163 Y+0 DR+
1025 CC X+17,663 Y+0
1026 C X+15,163 Y+0 DR+
1027 CC X+17,663 Y+0
1028 C X+15,361 Y-0,974 DR+
1029 CC X+17,663 Y+0
1030 C X+20,163 Y+0 DR+
1031 CC X+17,663 Y+0
1032 C X+15,163 Y+0 DR+
1033 CC X+17,663 Y+0
1034 C X+15,361 Y-0,974 DR+
1035 CC X+16,282 Y-0,584
1036 C X+16,671 Y-1,505 DR+
1037 L X+17,592 Y-1,116
1038 L X+17,663 Y+0 R0
1039 L Z+50 FMAX
1040 M78
1041 M5
1042 L Z-1 FMAX M91
1043 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1044 TOOL CALL 1 Z S1856 DR+0
1045 TOOL DEF 20
1046 L X-17,663 Y-16 FMAX M3
1047 L Z+50 FMAX M8
1048 ;  POINTAGE-PERCAGE
1049 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1050 L X-17,663 Y-16 FMAX M99
1051 L X+17,663 FMAX M99
1052 L X-17,663 Y+16 FMAX M99
1053 L X+17,663 FMAX M99
1054 L Z+50 FMAX
1055 M9
1056 M5
1057 L Z-1 FMAX M91
1058 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
1059 TOOL CALL 20 Z S3800 DR+0
1060 TOOL DEF 1
1061 L X-17,663 Y-16 FMAX M3
1062 L Z+50 FMAX M7
1063 ;  DEBOURRAGE
1064 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1065 L X-17,663 Y-16 FMAX M99
1066 L X+17,663 FMAX M99
1067 L X-17,663 Y+16 FMAX M99
1068 L X+17,663 FMAX M99
1069 L Z+50 FMAX
1070 M9
1071 M5
1072 L Z-1 FMAX M91
1073 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1074 TOOL CALL 1 Z S1856 DR+0
1075 TOOL DEF 8
1076 L X-6 Y+0 FMAX M3
1077 L Z+50 FMAX M8
1078 ;  POINTAGE-PERCAGE
1079 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-1,7 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+1,7 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1080 L X-6 Y+0 FMAX M99
1081 L X+6 FMAX M99
1082 L Z+50 FMAX
1083 M9
1084 M5
1085 L Z-1 FMAX M91
1086 ; T8 CARBURE DIA 4.2 VC 40 DMF FORET DIAM=4.2 2 DENTS A=118. ARS
1087 TOOL CALL 8 Z S5300 DR+0
1088 TOOL DEF 1
1089 L X-6 Y+0 FMAX M3
1090 L Z+50 FMAX M7
1091 ;  DEBOURRAGE
1092 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+1,05 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1093 L X-6 Y+0 FMAX M99
1094 L X+6 FMAX M99
1095 L Z+50 FMAX
1096 M9
1097 M5
1098 L Z-1 FMAX M91
1099 L Y-1 FMAX M91
1100 M30
1101 END PGM REP 103 IND A MM
