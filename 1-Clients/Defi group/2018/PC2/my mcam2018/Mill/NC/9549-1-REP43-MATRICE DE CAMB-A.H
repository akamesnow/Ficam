0 BEGIN PGM 9549-1-REP43-MATRICE DE CAMB-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - 9549-1-REP43-MATRICE DE CAMB-A
4 ; PROG-CN DU 08-07-19 A 11:01
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T18 P15322450 Z160 POCHE AVEC TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 2
18 L X-30,255 Y+15,5 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X-30,255 Y+15,5 FMAX M99
23 L Y-15,5 FMAX M99
24 L Z+50 FMAX
25 M9
26 M5
27 L Z-1 FMAX M91
28 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
29 TOOL CALL 2 Z S2000 DR+0
30 TOOL DEF 18
31 L X-30,255 Y+15,5 FMAX M3
32 L Z+50 FMAX M7
33 ;  DEBOURRAGE
34 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-60 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
35 L X-30,255 Y+15,5 FMAX M99
36 L Y-15,5 FMAX M99
37 L Z+50 FMAX
38 M9
39 M5
40 L Z-1 FMAX M91
41 ; T18 P15322450 Z160 POCHE AVEC TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
42 ; CORRECTION AUCUNE
43 ; SUREP R 0. SUREP Z 0.
44 TOOL CALL 18 Z S2228 DR+0
45 TOOL DEF 1
46 L X-29,016 Y+16,345 FMAX M3
47 L Z+50 FMAX M25
48 L Z+2 FMAX
49 L Z+0,5 F1000
50 CC X-30,255 Y+15,5
51 CP IPA-180 Z+0,336 DR-
52 CC X-30,255 Y+15,5
53 CP IPA-180 Z+0,171 DR-
54 CC X-30,255 Y+15,5
55 CP IPA-180 Z+0,007 DR-
56 CC X-30,255 Y+15,5
57 CP IPA-180 Z-0,158 DR-
58 CC X-30,255 Y+15,5
59 CP IPA-180 Z-0,323 DR-
60 CC X-30,255 Y+15,5
61 CP IPA-180 Z-0,487 DR-
62 CC X-30,255 Y+15,5
63 CP IPA-180 Z-0,651 DR-
64 CC X-30,255 Y+15,5
65 CP IPA-180 Z-0,816 DR-
66 CC X-30,255 Y+15,5
67 CP IPA-180 Z-0,981 DR-
68 CC X-30,255 Y+15,5
69 CP IPA-180 Z-1,146 DR-
70 CC X-30,255 Y+15,5
71 CP IPA-180 Z-1,311 DR-
72 CC X-30,255 Y+15,5
73 CP IPA-180 Z-1,475 DR-
74 CC X-30,255 Y+15,5
75 CP IPA-180 Z-1,64 DR-
76 CC X-30,255 Y+15,5
77 CP IPA-180 Z-1,804 DR-
78 CC X-30,255 Y+15,5
79 CP IPA-180 Z-1,969 DR-
80 CC X-30,255 Y+15,5
81 CP IPA-180 Z-2,133 DR-
82 CC X-30,255 Y+15,5
83 CP IPA-180 Z-2,298 DR-
84 CC X-30,255 Y+15,5
85 CP IPA-180 Z-2,462 DR-
86 CC X-30,255 Y+15,5
87 CP IPA-180 Z-2,627 DR-
88 CC X-30,255 Y+15,5
89 CP IPA-180 Z-2,791 DR-
90 CC X-30,255 Y+15,5
91 CP IPA-180 Z-2,955 DR-
92 CC X-30,255 Y+15,5
93 CP IPA-180 Z-3,12 DR-
94 CC X-30,255 Y+15,5
95 CP IPA-180 Z-3,285 DR-
96 CC X-30,255 Y+15,5
97 CP IPA-180 Z-3,449 DR-
98 CC X-30,255 Y+15,5
99 CP IPA-180 Z-3,614 DR-
100 CC X-30,255 Y+15,5
101 CP IPA-180 Z-3,779 DR-
102 CC X-30,255 Y+15,5
103 CP IPA-180 Z-3,943 DR-
104 CC X-30,255 Y+15,5
105 CP IPA-180 Z-4,108 DR-
106 CC X-30,255 Y+15,5
107 CP IPA-180 Z-4,273 DR-
108 CC X-30,255 Y+15,5
109 CP IPA-180 Z-4,437 DR-
110 CC X-30,255 Y+15,5
111 CP IPA-180 Z-4,601 DR-
112 CC X-30,255 Y+15,5
113 CP IPA-180 Z-4,766 DR-
114 CC X-30,255 Y+15,5
115 CP IPA-180 Z-4,931 DR-
116 CC X-30,255 Y+15,5
117 CP IPA-180 Z-5,095 DR-
118 CC X-30,255 Y+15,5
119 CP IPA-180 Z-5,26 DR-
120 CC X-30,255 Y+15,5
121 CP IPA-180 Z-5,424 DR-
122 CC X-30,255 Y+15,5
123 CP IPA-180 Z-5,588 DR-
124 CC X-30,255 Y+15,5
125 CP IPA-180 Z-5,753 DR-
126 CC X-30,255 Y+15,5
127 CP IPA-180 Z-5,918 DR-
128 CC X-30,255 Y+15,5
129 CP IPA-180 Z-6,082 DR-
130 CC X-30,255 Y+15,5
131 CP IPA-180 Z-6,247 DR-
132 CC X-30,255 Y+15,5
133 CP IPA-180 Z-6,412 DR-
134 CC X-30,255 Y+15,5
135 CP IPA-180 Z-6,576 DR-
136 CC X-30,255 Y+15,5
137 CP IPA-180 Z-6,741 DR-
138 CC X-30,255 Y+15,5
139 CP IPA-180 Z-6,906 DR-
140 CC X-30,255 Y+15,5
141 CP IPA-180 Z-7,07 DR-
142 CC X-30,255 Y+15,5
143 CP IPA-180 Z-7,235 DR-
144 CC X-30,255 Y+15,5
145 CP IPA-180 Z-7,399 DR-
146 CC X-30,255 Y+15,5
147 CP IPA-180 Z-7,563 DR-
148 CC X-30,255 Y+15,5
149 CP IPA-180 Z-7,728 DR-
150 CC X-30,255 Y+15,5
151 CP IPA-180 Z-7,893 DR-
152 CC X-30,255 Y+15,5
153 CP IPA-180 Z-8,057 DR-
154 CC X-30,255 Y+15,5
155 CP IPA-180 Z-8,221 DR-
156 CC X-30,255 Y+15,5
157 CP IPA-180 Z-8,386 DR-
158 CC X-30,255 Y+15,5
159 CP IPA-180 Z-8,55 DR-
160 CC X-30,255 Y+15,5
161 CP IPA-180 Z-8,715 DR-
162 CC X-30,255 Y+15,5
163 CP IPA-180 Z-8,88 DR-
164 CC X-30,255 Y+15,5
165 CP IPA-180 Z-9,044 DR-
166 CC X-30,255 Y+15,5
167 CP IPA-180 Z-9,209 DR-
168 CC X-30,255 Y+15,5
169 CP IPA-180 Z-9,374 DR-
170 CC X-30,255 Y+15,5
171 CP IPA-180 Z-9,538 DR-
172 CC X-30,255 Y+15,5
173 CP IPA-180 Z-9,703 DR-
174 CC X-30,255 Y+15,5
175 CP IPA-180 Z-9,867 DR-
176 CC X-30,255 Y+15,5
177 CP IPA-180 Z-10,032 DR-
178 CC X-30,255 Y+15,5
179 CP IPA-180 Z-10,197 DR-
180 CC X-30,255 Y+15,5
181 CP IPA-180 Z-10,361 DR-
182 CC X-30,255 Y+15,5
183 CP IPA-180 Z-10,526 DR-
184 CC X-30,255 Y+15,5
185 CP IPA-180 Z-10,69 DR-
186 CC X-30,255 Y+15,5
187 CP IPA-180 Z-10,855 DR-
188 CC X-30,255 Y+15,5
189 CP IPA-180 Z-11,019 DR-
190 CC X-30,255 Y+15,5
191 CP IPA-180 Z-11,184 DR-
192 CC X-30,255 Y+15,5
193 CP IPA-180 Z-11,348 DR-
194 CC X-30,255 Y+15,5
195 CP IPA-180 Z-11,512 DR-
196 CC X-30,255 Y+15,5
197 CP IPA-180 Z-11,677 DR-
198 CC X-30,255 Y+15,5
199 CP IPA-180 Z-11,842 DR-
200 CC X-30,255 Y+15,5
201 CP IPA-180 Z-12,007 DR-
202 CC X-30,255 Y+15,5
203 CP IPA-180 Z-12,172 DR-
204 CC X-30,255 Y+15,5
205 CP IPA-180 Z-12,336 DR-
206 CC X-30,255 Y+15,5
207 CP IPA-180 Z-12,5 DR-
208 CC X-30,255 Y+15,5
209 CP IPA-180 Z-12,665 DR-
210 CC X-30,255 Y+15,5
211 CP IPA-180 Z-12,829 DR-
212 CC X-30,255 Y+15,5
213 CP IPA-180 Z-12,994 DR-
214 CC X-30,255 Y+15,5
215 CP IPA-180 Z-13,159 DR-
216 CC X-30,255 Y+15,5
217 CP IPA-180 Z-13,323 DR-
218 CC X-30,255 Y+15,5
219 CP IPA-180 Z-13,488 DR-
220 CC X-30,255 Y+15,5
221 CP IPA-180 Z-13,652 DR-
222 CC X-30,255 Y+15,5
223 CP IPA-180 Z-13,817 DR-
224 CC X-30,255 Y+15,5
225 CP IPA-180 Z-13,981 DR-
226 CC X-30,255 Y+15,5
227 CP IPA-180 Z-14,146 DR-
228 CC X-30,255 Y+15,5
229 CP IPA-180 Z-14,31 DR-
230 CC X-30,255 Y+15,5
231 CP IPA-180 Z-14,475 DR-
232 CC X-30,255 Y+15,5
233 CP IPA-180 Z-14,64 DR-
234 CC X-30,255 Y+15,5
235 CP IPA-180 Z-14,805 DR-
236 CC X-30,255 Y+15,5
237 CP IPA-180 Z-14,969 DR-
238 CC X-30,255 Y+15,5
239 CP IPA-34,294 Z-15 DR-
240 L X-29,755 Y+15,5 F535
241 CC X-31,255 Y+15,5
242 C X-32,755 Y+15,5 DR+
243 CC X-30,255 Y+15,5
244 C X-30,255 Y+13 DR+
245 CC X-30,255 Y+15,5
246 C X-32,755 Y+15,5 DR+
247 L Z+50 FMAX
248 L X-29,016 Y-14,655 FMAX
249 L Z+2 FMAX
250 L Z+0,5 F1000
251 CC X-30,255 Y-15,5
252 CP IPA-180 Z+0,336 DR-
253 CC X-30,255 Y-15,5
254 CP IPA-180 Z+0,171 DR-
255 CC X-30,255 Y-15,5
256 CP IPA-180 Z+0,007 DR-
257 CC X-30,255 Y-15,5
258 CP IPA-180 Z-0,158 DR-
259 CC X-30,255 Y-15,5
260 CP IPA-180 Z-0,323 DR-
261 CC X-30,255 Y-15,5
262 CP IPA-180 Z-0,487 DR-
263 CC X-30,255 Y-15,5
264 CP IPA-180 Z-0,651 DR-
265 CC X-30,255 Y-15,5
266 CP IPA-180 Z-0,816 DR-
267 CC X-30,255 Y-15,5
268 CP IPA-180 Z-0,981 DR-
269 CC X-30,255 Y-15,5
270 CP IPA-180 Z-1,146 DR-
271 CC X-30,255 Y-15,5
272 CP IPA-180 Z-1,311 DR-
273 CC X-30,255 Y-15,5
274 CP IPA-180 Z-1,475 DR-
275 CC X-30,255 Y-15,5
276 CP IPA-180 Z-1,64 DR-
277 CC X-30,255 Y-15,5
278 CP IPA-180 Z-1,804 DR-
279 CC X-30,255 Y-15,5
280 CP IPA-180 Z-1,969 DR-
281 CC X-30,255 Y-15,5
282 CP IPA-180 Z-2,133 DR-
283 CC X-30,255 Y-15,5
284 CP IPA-180 Z-2,298 DR-
285 CC X-30,255 Y-15,5
286 CP IPA-180 Z-2,462 DR-
287 CC X-30,255 Y-15,5
288 CP IPA-180 Z-2,627 DR-
289 CC X-30,255 Y-15,5
290 CP IPA-180 Z-2,791 DR-
291 CC X-30,255 Y-15,5
292 CP IPA-180 Z-2,955 DR-
293 CC X-30,255 Y-15,5
294 CP IPA-180 Z-3,12 DR-
295 CC X-30,255 Y-15,5
296 CP IPA-180 Z-3,285 DR-
297 CC X-30,255 Y-15,5
298 CP IPA-180 Z-3,449 DR-
299 CC X-30,255 Y-15,5
300 CP IPA-180 Z-3,614 DR-
301 CC X-30,255 Y-15,5
302 CP IPA-180 Z-3,779 DR-
303 CC X-30,255 Y-15,5
304 CP IPA-180 Z-3,943 DR-
305 CC X-30,255 Y-15,5
306 CP IPA-180 Z-4,108 DR-
307 CC X-30,255 Y-15,5
308 CP IPA-180 Z-4,273 DR-
309 CC X-30,255 Y-15,5
310 CP IPA-180 Z-4,437 DR-
311 CC X-30,255 Y-15,5
312 CP IPA-180 Z-4,601 DR-
313 CC X-30,255 Y-15,5
314 CP IPA-180 Z-4,766 DR-
315 CC X-30,255 Y-15,5
316 CP IPA-180 Z-4,931 DR-
317 CC X-30,255 Y-15,5
318 CP IPA-180 Z-5,095 DR-
319 CC X-30,255 Y-15,5
320 CP IPA-180 Z-5,26 DR-
321 CC X-30,255 Y-15,5
322 CP IPA-180 Z-5,424 DR-
323 CC X-30,255 Y-15,5
324 CP IPA-180 Z-5,588 DR-
325 CC X-30,255 Y-15,5
326 CP IPA-180 Z-5,753 DR-
327 CC X-30,255 Y-15,5
328 CP IPA-180 Z-5,918 DR-
329 CC X-30,255 Y-15,5
330 CP IPA-180 Z-6,082 DR-
331 CC X-30,255 Y-15,5
332 CP IPA-180 Z-6,247 DR-
333 CC X-30,255 Y-15,5
334 CP IPA-180 Z-6,412 DR-
335 CC X-30,255 Y-15,5
336 CP IPA-180 Z-6,576 DR-
337 CC X-30,255 Y-15,5
338 CP IPA-180 Z-6,741 DR-
339 CC X-30,255 Y-15,5
340 CP IPA-180 Z-6,906 DR-
341 CC X-30,255 Y-15,5
342 CP IPA-180 Z-7,07 DR-
343 CC X-30,255 Y-15,5
344 CP IPA-180 Z-7,235 DR-
345 CC X-30,255 Y-15,5
346 CP IPA-180 Z-7,399 DR-
347 CC X-30,255 Y-15,5
348 CP IPA-180 Z-7,563 DR-
349 CC X-30,255 Y-15,5
350 CP IPA-180 Z-7,728 DR-
351 CC X-30,255 Y-15,5
352 CP IPA-180 Z-7,893 DR-
353 CC X-30,255 Y-15,5
354 CP IPA-180 Z-8,057 DR-
355 CC X-30,255 Y-15,5
356 CP IPA-180 Z-8,221 DR-
357 CC X-30,255 Y-15,5
358 CP IPA-180 Z-8,386 DR-
359 CC X-30,255 Y-15,5
360 CP IPA-180 Z-8,55 DR-
361 CC X-30,255 Y-15,5
362 CP IPA-180 Z-8,715 DR-
363 CC X-30,255 Y-15,5
364 CP IPA-180 Z-8,88 DR-
365 CC X-30,255 Y-15,5
366 CP IPA-180 Z-9,044 DR-
367 CC X-30,255 Y-15,5
368 CP IPA-180 Z-9,209 DR-
369 CC X-30,255 Y-15,5
370 CP IPA-180 Z-9,374 DR-
371 CC X-30,255 Y-15,5
372 CP IPA-180 Z-9,538 DR-
373 CC X-30,255 Y-15,5
374 CP IPA-180 Z-9,703 DR-
375 CC X-30,255 Y-15,5
376 CP IPA-180 Z-9,867 DR-
377 CC X-30,255 Y-15,5
378 CP IPA-180 Z-10,032 DR-
379 CC X-30,255 Y-15,5
380 CP IPA-180 Z-10,197 DR-
381 CC X-30,255 Y-15,5
382 CP IPA-180 Z-10,361 DR-
383 CC X-30,255 Y-15,5
384 CP IPA-180 Z-10,526 DR-
385 CC X-30,255 Y-15,5
386 CP IPA-180 Z-10,69 DR-
387 CC X-30,255 Y-15,5
388 CP IPA-180 Z-10,855 DR-
389 CC X-30,255 Y-15,5
390 CP IPA-180 Z-11,019 DR-
391 CC X-30,255 Y-15,5
392 CP IPA-180 Z-11,184 DR-
393 CC X-30,255 Y-15,5
394 CP IPA-180 Z-11,348 DR-
395 CC X-30,255 Y-15,5
396 CP IPA-180 Z-11,512 DR-
397 CC X-30,255 Y-15,5
398 CP IPA-180 Z-11,677 DR-
399 CC X-30,255 Y-15,5
400 CP IPA-180 Z-11,842 DR-
401 CC X-30,255 Y-15,5
402 CP IPA-180 Z-12,007 DR-
403 CC X-30,255 Y-15,5
404 CP IPA-180 Z-12,172 DR-
405 CC X-30,255 Y-15,5
406 CP IPA-180 Z-12,336 DR-
407 CC X-30,255 Y-15,5
408 CP IPA-180 Z-12,5 DR-
409 CC X-30,255 Y-15,5
410 CP IPA-180 Z-12,665 DR-
411 CC X-30,255 Y-15,5
412 CP IPA-180 Z-12,829 DR-
413 CC X-30,255 Y-15,5
414 CP IPA-180 Z-12,994 DR-
415 CC X-30,255 Y-15,5
416 CP IPA-180 Z-13,159 DR-
417 CC X-30,255 Y-15,5
418 CP IPA-180 Z-13,323 DR-
419 CC X-30,255 Y-15,5
420 CP IPA-180 Z-13,488 DR-
421 CC X-30,255 Y-15,5
422 CP IPA-180 Z-13,652 DR-
423 CC X-30,255 Y-15,5
424 CP IPA-180 Z-13,817 DR-
425 CC X-30,255 Y-15,5
426 CP IPA-180 Z-13,981 DR-
427 CC X-30,255 Y-15,5
428 CP IPA-180 Z-14,146 DR-
429 CC X-30,255 Y-15,5
430 CP IPA-180 Z-14,31 DR-
431 CC X-30,255 Y-15,5
432 CP IPA-180 Z-14,475 DR-
433 CC X-30,255 Y-15,5
434 CP IPA-180 Z-14,64 DR-
435 CC X-30,255 Y-15,5
436 CP IPA-180 Z-14,805 DR-
437 CC X-30,255 Y-15,5
438 CP IPA-180 Z-14,969 DR-
439 CC X-30,255 Y-15,5
440 CP IPA-34,294 Z-15 DR-
441 L X-29,755 Y-15,5 F535
442 CC X-31,255 Y-15,5
443 C X-32,755 Y-15,5 DR+
444 CC X-30,255 Y-15,5
445 C X-30,255 Y-18 DR+
446 CC X-30,255 Y-15,5
447 C X-32,755 Y-15,5 DR+
448 L Z+50 FMAX
449 TOOL CALL 18 Z S2228 DR-5
450 L X-30,255 Y+15,5 Z+50 FMAX
451 L Z+2 FMAX
452 L Z-15 F1000
453 L X-29,255 Y+16 RL F535
454 L Y+17
455 CC X-30,255 Y+17
456 C X-30,255 Y+18 DR+
457 CC X-30,255 Y+15,5
458 C X-30,255 Y+13 DR+
459 CC X-30,255 Y+15,5
460 C X-30,255 Y+18 DR+
461 CC X-30,255 Y+15,5
462 C X-31,229 Y+17,803 DR+
463 CC X-30,839 Y+16,882
464 C X-31,76 Y+16,492 DR+
465 L X-31,371 Y+15,571
466 L X-30,255 Y+15,5 R0
467 L Z+50 FMAX
468 L Y-15,5 FMAX
469 L Z+2 FMAX
470 L Z-15 F1000
471 L X-29,255 Y-15 RL F535
472 L Y-14
473 CC X-30,255 Y-14
474 C X-30,255 Y-13 DR+
475 CC X-30,255 Y-15,5
476 C X-30,255 Y-18 DR+
477 CC X-30,255 Y-15,5
478 C X-30,255 Y-13 DR+
479 CC X-30,255 Y-15,5
480 C X-31,229 Y-13,197 DR+
481 CC X-30,839 Y-14,118
482 C X-31,76 Y-14,508 DR+
483 L X-31,371 Y-15,429
484 L X-30,255 Y-15,5 R0
485 L Z+50 FMAX
486 M78
487 M5
488 L Z-1 FMAX M91
489 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
490 ; CORRECTION USURE GAUCHE
491 ; SUREP R 0. SUREP Z 0.
492 TOOL CALL 1 Z S6000 DR-2,5
493 L X-30,255 Y+15,5 FMAX M3
494 L Z+50 FMAX
495 L Z+2 FMAX
496 L Z-2,5 F800
497 L X-29,755 Y+19,5 RL F1200
498 L Y+20
499 CC X-30,255 Y+20
500 C X-30,255 Y+20,5 DR+
501 CC X-30,255 Y+15,5
502 C X-30,255 Y+10,5 DR+
503 CC X-30,255 Y+15,5
504 C X-30,255 Y+20,5 DR+
505 CC X-30,255 Y+15,5
506 C X-31,248 Y+20,4 DR+
507 CC X-31,149 Y+19,91
508 C X-31,639 Y+19,811 DR+
509 L X-31,54 Y+19,321
510 L X-30,255 Y+15,5 R0
511 L Z+50 FMAX
512 L Y-15,5 FMAX
513 L Z+2 FMAX
514 L Z-2,5 F800
515 L X-29,755 Y-11,5 RL F1200
516 L Y-11
517 CC X-30,255 Y-11
518 C X-30,255 Y-10,5 DR+
519 CC X-30,255 Y-15,5
520 C X-30,255 Y-20,5 DR+
521 CC X-30,255 Y-15,5
522 C X-30,255 Y-10,5 DR+
523 CC X-30,255 Y-15,5
524 C X-31,248 Y-10,6 DR+
525 CC X-31,149 Y-11,09
526 C X-31,639 Y-11,189 DR+
527 L X-31,54 Y-11,679
528 L X-30,255 Y-15,5 R0
529 L Z+50 FMAX
530 M5
531 L Z-1 FMAX M91
532 L Y-1 FMAX M91
533 M30
534 END PGM 9549-1-REP43-MATRICE DE CAMB-A MM
