0 BEGIN PGM REHAUSSE MATRICE MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REHAUSSE MATRICE
4 ; PROG-CN DU 03-03-20 A 09:19
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T17 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
11 ; T7 CARB DIA 7.7  VC 40 DMF FORET DIAM=7.7 2 DENTS A=118. ARS
12 ; T11 ALESOIR CARBURE DIA 8 VC 15 ALESOIR DIAM=8. 5 DENTS ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-1*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 2
20 L X-42 Y-36 FMAX M3
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
24 L X-42 Y-36 FMAX M99
25 L X+42 FMAX M99
26 L Y+36 FMAX M99
27 L X-42 FMAX M99
28 L Z+50 FMAX
29 M9
30 M5
31 L Z-1 FMAX M91
32 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
33 TOOL CALL 2 Z S2000 DR+0
34 TOOL DEF 17
35 L X-42 Y-36 FMAX M3
36 L Z+50 FMAX M7
37 ;  DEBOURRAGE
38 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-42 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
39 L X-42 Y-36 FMAX M99
40 L X+42 FMAX M99
41 L Y+36 FMAX M99
42 L X-42 FMAX M99
43 L Z+50 FMAX
44 M9
45 M5
46 L Z-1 FMAX M91
47 ; T17 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
48 ; CORRECTION AUCUNE
49 ; SUREP R 0. SUREP Z 0.
50 TOOL CALL 17 Z S2387 DR+0
51 TOOL DEF 1
52 L X+5,124 Y-3,123 FMAX M3
53 L Z+50 FMAX M25
54 L Z+2 FMAX
55 L Z+0,5 F300
56 CC X+0 Y-0,001
57 CP IPA-180 Z-0,158 DR-
58 CC X+0 Y-0,001
59 CP IPA-180 Z-0,816 DR-
60 CC X+0 Y-0,001
61 CP IPA-180 Z-1,474 DR-
62 CC X+0 Y-0,001
63 CP IPA-180 Z-2,133 DR-
64 CC X+0 Y-0,001
65 CP IPA-180 Z-2,791 DR-
66 CC X+0 Y-0,001
67 CP IPA-180 Z-3,449 DR-
68 CC X+0 Y-0,001
69 CP IPA-180 Z-4,107 DR-
70 CC X+0 Y-0,001
71 CP IPA-180 Z-4,766 DR-
72 CC X+0 Y-0,001
73 CP IPA-180 Z-5,424 DR-
74 CC X+0 Y-0,001
75 CP IPA-180 Z-6,082 DR-
76 CC X+0 Y-0,001
77 CP IPA-180 Z-6,74 DR-
78 CC X+0 Y-0,001
79 CP IPA-180 Z-7,399 DR-
80 CC X+0 Y-0,001
81 CP IPA-180 Z-8,057 DR-
82 CC X+0 Y-0,001
83 CP IPA-180 Z-8,715 DR-
84 CC X+0 Y-0,001
85 CP IPA-180 Z-9,373 DR-
86 CC X+0 Y-0,001
87 CP IPA-180 Z-10,032 DR-
88 CC X+0 Y-0,001
89 CP IPA-180 Z-10,69 DR-
90 CC X+0 Y-0,001
91 CP IPA-180 Z-11,348 DR-
92 CC X+0 Y-0,001
93 CP IPA-180 Z-12,006 DR-
94 CC X+0 Y-0,001
95 CP IPA-180 Z-12,665 DR-
96 CC X+0 Y-0,001
97 CP IPA-182,797 Z-13,333 DR-
98 L X-2,98 Y+2,02 F382
99 CC X+0 Y+0
100 C X+2,98 Y-2,02 DR+
101 CC X+0 Y+0
102 C X-2,98 Y+2,02 DR+
103 CC X-0,389 Y-0,842
104 C X-4,249 Y-0,904 DR+
105 CC X+2,264 Y-1,18
106 C X-3,927 Y-3,221 DR+
107 L X-3,638 Y-3,646
108 CC X+0,434 Y+0,977
109 C X-0,234 Y-5,147 DR+
110 CC X+1,42 Y+8,346
111 C X+5,03 Y-4,76 DR+
112 L X+5,446 Y-4,522
113 L X+5,768 Y-4,18
114 CC X-5,524 Y+1,364
115 C X+7,024 Y+0,473 DR+
116 CC X-15,114 Y+2,327
117 C X+6,952 Y+4,903 DR+
118 L X+6,878 Y+5,182
119 L X+6,759 Y+5,445
120 L X+6,598 Y+5,681
121 L X+6,403 Y+5,88
122 L X+6,184 Y+6,036
123 CC X-1,225 Y-11,852
124 C X-0,249 Y+7,485 DR+
125 CC X-2,412 Y-29,581
126 C X-7,281 Y+7,227 DR+
127 L X-7,621 Y+7,146
128 L X-7,943 Y+7,001
129 L X-8,232 Y+6,799
130 L X-8,475 Y+6,548
131 L X-8,66 Y+6,261
132 CC X+5 Y+1,544
133 C X-9,179 Y+4,337 DR+
134 CC X+32,554 Y-3,82
135 C X-9,856 Y-6,914 DR+
136 CC X-7,875 Y-6,639
137 C X-9,59 Y-7,668 DR+
138 L X-9,352 Y-7,985
139 L X-9,06 Y-8,242
140 L X-8,73 Y-8,425
141 CC X+2,319 Y+34,661
142 C X+0,759 Y-9,792 DR+
143 CC X+3,8 Y+67,923
144 C X+9,756 Y-9,623 DR+
145 CC X+9,576 Y-7,478
146 C X+11,682 Y-7,92 DR+
147 CC X-65,513 Y+5,458
148 C X+12,795 Y+7,897 DR+
149 CC X-8,735 Y+7,699
150 C X+12,761 Y+8,925 DR+
151 CC X+10,528 Y+8,694
152 C X+10,811 Y+10,921 DR+
153 CC X-5,26 Y-91,011
154 C X-8,217 Y+12,138 DR+
155 CC X-4,981 Y-165,091
156 C X-12,231 Y+12,019 DR+
157 CC X-12,076 Y+9,47
158 C X-14,446 Y+10,422 DR+
159 CC X-10,155 Y+9,035
160 C X-14,654 Y+9,342 DR+
161 CC X+130,324 Y-8,056
162 C X-15,666 Y-10,936 DR+
163 CC X-13,024 Y-10,673
164 C X-13,822 Y-13,205 DR+
165 CC X-5,06 Y+44,509
166 C X-10,268 Y-13,633 DR+
167 CC X+8,619 Y+192,008
168 C X+14,014 Y-14,428 DR+
169 CC X+14,263 Y-9,525
170 C X+15,392 Y-14,303 DR+
171 L X+16,033 Y-14,036
172 L X+16,591 Y-13,629
173 L X+17,035 Y-13,107
174 L X+17,338 Y-12,503
175 CC X+12,247 Y-11,018
176 C X+17,547 Y-11,194 DR+
177 CC X-235,799 Y+11,635
178 C X+18,57 Y+12,948 DR+
179 L X+18,41 Y+13,673
180 L X+18,085 Y+14,337
181 L X+17,615 Y+14,9
182 L X+17,03 Y+15,327
183 L X+16,367 Y+15,595
184 CC X+10,912 Y-25,473
185 C X+13,551 Y+15,871 DR+
186 CC X-12,925 Y-347,22
187 C X-17,182 Y+16,81 DR+
188 L X-17,982 Y+16,689
189 L X-18,729 Y+16,381
190 L X-19,378 Y+15,906
191 L X-19,888 Y+15,294
192 L X-20,231 Y+14,583
193 CC X-14,331 Y+12,995
194 C X-20,441 Y+13,045 DR+
195 CC X+425,959 Y-17,464
196 C X-21,475 Y-14,959 DR+
197 L X-21,293 Y-15,796
198 L X-20,916 Y-16,561
199 L X-20,369 Y-17,205
200 L X-19,686 Y-17,689
201 L X-18,913 Y-17,984
202 CC X-13,486 Y+31,849
203 C X-15,633 Y-18,233 DR+
204 CC X+20,511 Y+652,213
205 C X+19,658 Y-19,206 DR+
206 L X+20,573 Y-19,075
207 L X+21,426 Y-18,726
208 L X+22,164 Y-18,183
209 L X+22,742 Y-17,481
210 L X+23,123 Y-16,664
211 CC X+16,41 Y-14,968
212 C X+23,334 Y-14,897 DR+
213 CC X-810,21 Y+28,406
214 C X+24,38 Y+16,97 DR+
215 L X+24,176 Y+17,919
216 L X+23,748 Y+18,784
217 L X+23,123 Y+19,51
218 L X+22,343 Y+20,051
219 L X+21,459 Y+20,374
220 CC X+17,176 Y-24,233
221 C X+18,656 Y+20,555 DR+
222 L X+6,189 Y+21,012
223 L X-7,741 Y+21,36
224 L X-22,133 Y+21,602
225 L X-23,163 Y+21,461
226 L X-24,122 Y+21,071
227 L X-24,951 Y+20,46
228 L X-25,595 Y+19,667
229 L X-26,016 Y+18,745
230 CC X-18,486 Y+16,938
231 C X-26,227 Y+16,748 DR+
232 L X-26,767 Y+1,344
233 L X-27,283 Y-17,891
234 L X-27,284 Y-18,982
235 L X-27,059 Y-20,042
236 L X-26,579 Y-21,007
237 L X-25,877 Y-21,814
238 L X-24,999 Y-22,413
239 L X-24,005 Y-22,764
240 CC X-21,898 Y-5,606
241 C X-21,908 Y-22,893 DR+
242 L X-1,418 Y-23,438
243 L X+24,609 Y-23,998
244 L X+25,753 Y-23,846
245 L X+26,819 Y-23,417
246 L X+27,737 Y-22,737
247 L X+28,449 Y-21,854
248 L X+28,908 Y-20,825
249 CC X+20,561 Y-18,907
250 C X+29,121 Y-18,6 DR+
251 L X+29,475 Y-6,11
252 L X+29,5
253 L Y+19,998
254 CC X+25 Y+20
255 C X+25 Y+24,5 DR+
256 L X-25
257 CC X-25 Y+20
258 C X-29,5 Y+20 DR+
259 L Y-20,002
260 CC X-25 Y-20
261 C X-25 Y-24,5 DR+
262 L X+25
263 CC X+25 Y-20
264 C X+29,5 Y-20 DR+
265 L Y-6,11
266 L Z+10 FMAX
267 L X+5,124 Y-3,123 FMAX
268 L Z-11,333 FMAX
269 L Z-12,833 F300
270 CC X+0 Y-0,001
271 CP IPA-180 Z-13,492 DR-
272 CC X+0 Y-0,001
273 CP IPA-180 Z-14,15 DR-
274 CC X+0 Y-0,001
275 CP IPA-180 Z-14,808 DR-
276 CC X+0 Y-0,001
277 CP IPA-180 Z-15,466 DR-
278 CC X+0 Y-0,001
279 CP IPA-180 Z-16,125 DR-
280 CC X+0 Y-0,001
281 CP IPA-180 Z-16,783 DR-
282 CC X+0 Y-0,001
283 CP IPA-180 Z-17,441 DR-
284 CC X+0 Y-0,001
285 CP IPA-180 Z-18,099 DR-
286 CC X+0 Y-0,001
287 CP IPA-180 Z-18,758 DR-
288 CC X+0 Y-0,001
289 CP IPA-180 Z-19,416 DR-
290 CC X+0 Y-0,001
291 CP IPA-180 Z-20,074 DR-
292 CC X+0 Y-0,001
293 CP IPA-180 Z-20,732 DR-
294 CC X+0 Y-0,001
295 CP IPA-180 Z-21,39 DR-
296 CC X+0 Y-0,001
297 CP IPA-180 Z-22,049 DR-
298 CC X+0 Y-0,001
299 CP IPA-180 Z-22,707 DR-
300 CC X+0 Y-0,001
301 CP IPA-180 Z-23,365 DR-
302 CC X+0 Y-0,001
303 CP IPA-180 Z-24,023 DR-
304 CC X+0 Y-0,001
305 CP IPA-180 Z-24,682 DR-
306 CC X+0 Y-0,001
307 CP IPA-180 Z-25,34 DR-
308 CC X+0 Y-0,001
309 CP IPA-180 Z-25,998 DR-
310 CC X+0 Y-0,001
311 CP IPA-182,797 Z-26,667 DR-
312 L X-2,98 Y+2,02 F382
313 CC X+0 Y+0
314 C X+2,98 Y-2,02 DR+
315 CC X+0 Y+0
316 C X-2,98 Y+2,02 DR+
317 CC X-0,389 Y-0,842
318 C X-4,249 Y-0,904 DR+
319 CC X+2,264 Y-1,18
320 C X-3,927 Y-3,221 DR+
321 L X-3,638 Y-3,646
322 CC X+0,434 Y+0,977
323 C X-0,234 Y-5,147 DR+
324 CC X+1,42 Y+8,346
325 C X+5,03 Y-4,76 DR+
326 L X+5,446 Y-4,522
327 L X+5,768 Y-4,18
328 CC X-5,524 Y+1,364
329 C X+7,024 Y+0,473 DR+
330 CC X-15,114 Y+2,327
331 C X+6,952 Y+4,903 DR+
332 L X+6,878 Y+5,182
333 L X+6,759 Y+5,445
334 L X+6,598 Y+5,681
335 L X+6,403 Y+5,88
336 L X+6,184 Y+6,036
337 CC X-1,225 Y-11,852
338 C X-0,249 Y+7,485 DR+
339 CC X-2,412 Y-29,581
340 C X-7,281 Y+7,227 DR+
341 L X-7,621 Y+7,146
342 L X-7,943 Y+7,001
343 L X-8,232 Y+6,799
344 L X-8,475 Y+6,548
345 L X-8,66 Y+6,261
346 CC X+5 Y+1,544
347 C X-9,179 Y+4,337 DR+
348 CC X+32,554 Y-3,82
349 C X-9,856 Y-6,914 DR+
350 CC X-7,875 Y-6,639
351 C X-9,59 Y-7,668 DR+
352 L X-9,352 Y-7,985
353 L X-9,06 Y-8,242
354 L X-8,73 Y-8,425
355 CC X+2,319 Y+34,661
356 C X+0,759 Y-9,792 DR+
357 CC X+3,8 Y+67,923
358 C X+9,756 Y-9,623 DR+
359 CC X+9,576 Y-7,478
360 C X+11,682 Y-7,92 DR+
361 CC X-65,513 Y+5,458
362 C X+12,795 Y+7,897 DR+
363 CC X-8,735 Y+7,699
364 C X+12,761 Y+8,925 DR+
365 CC X+10,528 Y+8,694
366 C X+10,811 Y+10,921 DR+
367 CC X-5,26 Y-91,011
368 C X-8,217 Y+12,138 DR+
369 CC X-4,981 Y-165,091
370 C X-12,231 Y+12,019 DR+
371 CC X-12,076 Y+9,47
372 C X-14,446 Y+10,422 DR+
373 CC X-10,155 Y+9,035
374 C X-14,654 Y+9,342 DR+
375 CC X+130,324 Y-8,056
376 C X-15,666 Y-10,936 DR+
377 CC X-13,024 Y-10,673
378 C X-13,822 Y-13,205 DR+
379 CC X-5,06 Y+44,509
380 C X-10,268 Y-13,633 DR+
381 CC X+8,619 Y+192,008
382 C X+14,014 Y-14,428 DR+
383 CC X+14,263 Y-9,525
384 C X+15,392 Y-14,303 DR+
385 L X+16,033 Y-14,036
386 L X+16,591 Y-13,629
387 L X+17,035 Y-13,107
388 L X+17,338 Y-12,503
389 CC X+12,247 Y-11,018
390 C X+17,547 Y-11,194 DR+
391 CC X-235,799 Y+11,635
392 C X+18,57 Y+12,948 DR+
393 L X+18,41 Y+13,673
394 L X+18,085 Y+14,337
395 L X+17,615 Y+14,9
396 L X+17,03 Y+15,327
397 L X+16,367 Y+15,595
398 CC X+10,912 Y-25,473
399 C X+13,551 Y+15,871 DR+
400 CC X-12,925 Y-347,22
401 C X-17,182 Y+16,81 DR+
402 L X-17,982 Y+16,689
403 L X-18,729 Y+16,381
404 L X-19,378 Y+15,906
405 L X-19,888 Y+15,294
406 L X-20,231 Y+14,583
407 CC X-14,331 Y+12,995
408 C X-20,441 Y+13,045 DR+
409 CC X+425,959 Y-17,464
410 C X-21,475 Y-14,959 DR+
411 L X-21,293 Y-15,796
412 L X-20,916 Y-16,561
413 L X-20,369 Y-17,205
414 L X-19,686 Y-17,689
415 L X-18,913 Y-17,984
416 CC X-13,486 Y+31,849
417 C X-15,633 Y-18,233 DR+
418 CC X+20,511 Y+652,213
419 C X+19,658 Y-19,206 DR+
420 L X+20,573 Y-19,075
421 L X+21,426 Y-18,726
422 L X+22,164 Y-18,183
423 L X+22,742 Y-17,481
424 L X+23,123 Y-16,664
425 CC X+16,41 Y-14,968
426 C X+23,334 Y-14,897 DR+
427 CC X-810,21 Y+28,406
428 C X+24,38 Y+16,97 DR+
429 L X+24,176 Y+17,919
430 L X+23,748 Y+18,784
431 L X+23,123 Y+19,51
432 L X+22,343 Y+20,051
433 L X+21,459 Y+20,374
434 CC X+17,176 Y-24,233
435 C X+18,656 Y+20,555 DR+
436 L X+6,189 Y+21,012
437 L X-7,741 Y+21,36
438 L X-22,133 Y+21,602
439 L X-23,163 Y+21,461
440 L X-24,122 Y+21,071
441 L X-24,951 Y+20,46
442 L X-25,595 Y+19,667
443 L X-26,016 Y+18,745
444 CC X-18,486 Y+16,938
445 C X-26,227 Y+16,748 DR+
446 L X-26,767 Y+1,344
447 L X-27,283 Y-17,891
448 L X-27,284 Y-18,982
449 L X-27,059 Y-20,042
450 L X-26,579 Y-21,007
451 L X-25,877 Y-21,814
452 L X-24,999 Y-22,413
453 L X-24,005 Y-22,764
454 CC X-21,898 Y-5,606
455 C X-21,908 Y-22,893 DR+
456 L X-1,418 Y-23,438
457 L X+24,609 Y-23,998
458 L X+25,753 Y-23,846
459 L X+26,819 Y-23,417
460 L X+27,737 Y-22,737
461 L X+28,449 Y-21,854
462 L X+28,908 Y-20,825
463 CC X+20,561 Y-18,907
464 C X+29,121 Y-18,6 DR+
465 L X+29,475 Y-6,11
466 L X+29,5
467 L Y+19,998
468 CC X+25 Y+20
469 C X+25 Y+24,5 DR+
470 L X-25
471 CC X-25 Y+20
472 C X-29,5 Y+20 DR+
473 L Y-20,002
474 CC X-25 Y-20
475 C X-25 Y-24,5 DR+
476 L X+25
477 CC X+25 Y-20
478 C X+29,5 Y-20 DR+
479 L Y-6,11
480 L Z+10 FMAX
481 L X+5,124 Y-3,123 FMAX
482 L Z-24,667 FMAX
483 L Z-26,167 F300
484 CC X+0 Y-0,001
485 CP IPA-180 Z-26,825 DR-
486 CC X+0 Y-0,001
487 CP IPA-180 Z-27,483 DR-
488 CC X+0 Y-0,001
489 CP IPA-180 Z-28,142 DR-
490 CC X+0 Y-0,001
491 CP IPA-180 Z-28,8 DR-
492 CC X+0 Y-0,001
493 CP IPA-180 Z-29,458 DR-
494 CC X+0 Y-0,001
495 CP IPA-180 Z-30,116 DR-
496 CC X+0 Y-0,001
497 CP IPA-180 Z-30,775 DR-
498 CC X+0 Y-0,001
499 CP IPA-180 Z-31,433 DR-
500 CC X+0 Y-0,001
501 CP IPA-180 Z-32,091 DR-
502 CC X+0 Y-0,001
503 CP IPA-180 Z-32,749 DR-
504 CC X+0 Y-0,001
505 CP IPA-180 Z-33,407 DR-
506 CC X+0 Y-0,001
507 CP IPA-180 Z-34,066 DR-
508 CC X+0 Y-0,001
509 CP IPA-180 Z-34,724 DR-
510 CC X+0 Y-0,001
511 CP IPA-180 Z-35,382 DR-
512 CC X+0 Y-0,001
513 CP IPA-180 Z-36,04 DR-
514 CC X+0 Y-0,001
515 CP IPA-180 Z-36,699 DR-
516 CC X+0 Y-0,001
517 CP IPA-180 Z-37,357 DR-
518 CC X+0 Y-0,001
519 CP IPA-180 Z-38,015 DR-
520 CC X+0 Y-0,001
521 CP IPA-180 Z-38,673 DR-
522 CC X+0 Y-0,001
523 CP IPA-180 Z-39,331 DR-
524 CC X+0 Y-0,001
525 CP IPA-182,797 Z-40 DR-
526 L X-2,98 Y+2,02 F382
527 CC X+0 Y+0
528 C X+2,98 Y-2,02 DR+
529 CC X+0 Y+0
530 C X-2,98 Y+2,02 DR+
531 CC X-0,389 Y-0,842
532 C X-4,249 Y-0,904 DR+
533 CC X+2,264 Y-1,18
534 C X-3,927 Y-3,221 DR+
535 L X-3,638 Y-3,646
536 CC X+0,434 Y+0,977
537 C X-0,234 Y-5,147 DR+
538 CC X+1,42 Y+8,346
539 C X+5,03 Y-4,76 DR+
540 L X+5,446 Y-4,522
541 L X+5,768 Y-4,18
542 CC X-5,524 Y+1,364
543 C X+7,024 Y+0,473 DR+
544 CC X-15,114 Y+2,327
545 C X+6,952 Y+4,903 DR+
546 L X+6,878 Y+5,182
547 L X+6,759 Y+5,445
548 L X+6,598 Y+5,681
549 L X+6,403 Y+5,88
550 L X+6,184 Y+6,036
551 CC X-1,225 Y-11,852
552 C X-0,249 Y+7,485 DR+
553 CC X-2,412 Y-29,581
554 C X-7,281 Y+7,227 DR+
555 L X-7,621 Y+7,146
556 L X-7,943 Y+7,001
557 L X-8,232 Y+6,799
558 L X-8,475 Y+6,548
559 L X-8,66 Y+6,261
560 CC X+5 Y+1,544
561 C X-9,179 Y+4,337 DR+
562 CC X+32,554 Y-3,82
563 C X-9,856 Y-6,914 DR+
564 CC X-7,875 Y-6,639
565 C X-9,59 Y-7,668 DR+
566 L X-9,352 Y-7,985
567 L X-9,06 Y-8,242
568 L X-8,73 Y-8,425
569 CC X+2,319 Y+34,661
570 C X+0,759 Y-9,792 DR+
571 CC X+3,8 Y+67,923
572 C X+9,756 Y-9,623 DR+
573 CC X+9,576 Y-7,478
574 C X+11,682 Y-7,92 DR+
575 CC X-65,513 Y+5,458
576 C X+12,795 Y+7,897 DR+
577 CC X-8,735 Y+7,699
578 C X+12,761 Y+8,925 DR+
579 CC X+10,528 Y+8,694
580 C X+10,811 Y+10,921 DR+
581 CC X-5,26 Y-91,011
582 C X-8,217 Y+12,138 DR+
583 CC X-4,981 Y-165,091
584 C X-12,231 Y+12,019 DR+
585 CC X-12,076 Y+9,47
586 C X-14,446 Y+10,422 DR+
587 CC X-10,155 Y+9,035
588 C X-14,654 Y+9,342 DR+
589 CC X+130,324 Y-8,056
590 C X-15,666 Y-10,936 DR+
591 CC X-13,024 Y-10,673
592 C X-13,822 Y-13,205 DR+
593 CC X-5,06 Y+44,509
594 C X-10,268 Y-13,633 DR+
595 CC X+8,619 Y+192,008
596 C X+14,014 Y-14,428 DR+
597 CC X+14,263 Y-9,525
598 C X+15,392 Y-14,303 DR+
599 L X+16,033 Y-14,036
600 L X+16,591 Y-13,629
601 L X+17,035 Y-13,107
602 L X+17,338 Y-12,503
603 CC X+12,247 Y-11,018
604 C X+17,547 Y-11,194 DR+
605 CC X-235,799 Y+11,635
606 C X+18,57 Y+12,948 DR+
607 L X+18,41 Y+13,673
608 L X+18,085 Y+14,337
609 L X+17,615 Y+14,9
610 L X+17,03 Y+15,327
611 L X+16,367 Y+15,595
612 CC X+10,912 Y-25,473
613 C X+13,551 Y+15,871 DR+
614 CC X-12,925 Y-347,22
615 C X-17,182 Y+16,81 DR+
616 L X-17,982 Y+16,689
617 L X-18,729 Y+16,381
618 L X-19,378 Y+15,906
619 L X-19,888 Y+15,294
620 L X-20,231 Y+14,583
621 CC X-14,331 Y+12,995
622 C X-20,441 Y+13,045 DR+
623 CC X+425,959 Y-17,464
624 C X-21,475 Y-14,959 DR+
625 L X-21,293 Y-15,796
626 L X-20,916 Y-16,561
627 L X-20,369 Y-17,205
628 L X-19,686 Y-17,689
629 L X-18,913 Y-17,984
630 CC X-13,486 Y+31,849
631 C X-15,633 Y-18,233 DR+
632 CC X+20,511 Y+652,213
633 C X+19,658 Y-19,206 DR+
634 L X+20,573 Y-19,075
635 L X+21,426 Y-18,726
636 L X+22,164 Y-18,183
637 L X+22,742 Y-17,481
638 L X+23,123 Y-16,664
639 CC X+16,41 Y-14,968
640 C X+23,334 Y-14,897 DR+
641 CC X-810,21 Y+28,406
642 C X+24,38 Y+16,97 DR+
643 L X+24,176 Y+17,919
644 L X+23,748 Y+18,784
645 L X+23,123 Y+19,51
646 L X+22,343 Y+20,051
647 L X+21,459 Y+20,374
648 CC X+17,176 Y-24,233
649 C X+18,656 Y+20,555 DR+
650 L X+6,189 Y+21,012
651 L X-7,741 Y+21,36
652 L X-22,133 Y+21,602
653 L X-23,163 Y+21,461
654 L X-24,122 Y+21,071
655 L X-24,951 Y+20,46
656 L X-25,595 Y+19,667
657 L X-26,016 Y+18,745
658 CC X-18,486 Y+16,938
659 C X-26,227 Y+16,748 DR+
660 L X-26,767 Y+1,344
661 L X-27,283 Y-17,891
662 L X-27,284 Y-18,982
663 L X-27,059 Y-20,042
664 L X-26,579 Y-21,007
665 L X-25,877 Y-21,814
666 L X-24,999 Y-22,413
667 L X-24,005 Y-22,764
668 CC X-21,898 Y-5,606
669 C X-21,908 Y-22,893 DR+
670 L X-1,418 Y-23,438
671 L X+24,609 Y-23,998
672 L X+25,753 Y-23,846
673 L X+26,819 Y-23,417
674 L X+27,737 Y-22,737
675 L X+28,449 Y-21,854
676 L X+28,908 Y-20,825
677 CC X+20,561 Y-18,907
678 C X+29,121 Y-18,6 DR+
679 L X+29,475 Y-6,11
680 L X+29,5
681 L Y+19,998
682 CC X+25 Y+20
683 C X+25 Y+24,5 DR+
684 L X-25
685 CC X-25 Y+20
686 C X-29,5 Y+20 DR+
687 L Y-20,002
688 CC X-25 Y-20
689 C X-25 Y-24,5 DR+
690 L X+25
691 CC X+25 Y-20
692 C X+29,5 Y-20 DR+
693 L Y-6,11
694 L X+0 Y-0,001
695 TOOL CALL 17 Z S2387 DR-6
696 L X-27,1 Y+1,199 Z-40 RL
697 L X-28,3
698 CC X-28,3 Y-0,001
699 C X-29,5 Y-0,001 DR+
700 L Y-20,002
701 CC X-25 Y-20
702 C X-25 Y-24,5 DR+
703 L X+25
704 CC X+25 Y-20
705 C X+29,5 Y-20 DR+
706 L Y+19,998
707 CC X+25 Y+20
708 C X+25 Y+24,5 DR+
709 L X-25
710 CC X-25 Y+20
711 C X-29,5 Y+20 DR+
712 L Y-2,001
713 L Y-20,002
714 CC X-25 Y-20
715 C X-25 Y-24,5 DR+
716 L X+25
717 CC X+25 Y-20
718 C X+29,5 Y-20 DR+
719 L Y+19,998
720 CC X+25 Y+20
721 C X+25 Y+24,5 DR+
722 L X-25
723 CC X-25 Y+20
724 C X-29,5 Y+20 DR+
725 L Y-2,001
726 L Y-20,002
727 CC X-25 Y-20
728 C X-25 Y-24,5 DR+
729 L X+25
730 CC X+25 Y-20
731 C X+29,5 Y-20 DR+
732 L Y+19,998
733 CC X+25 Y+20
734 C X+25 Y+24,5 DR+
735 L X-25
736 CC X-25 Y+20
737 C X-29,5 Y+20 DR+
738 L Y-2,001
739 CC X-28,3 Y-2,001
740 C X-28,3 Y-3,201 DR+
741 L X-27,1
742 L X+0 Y-0,001 R0
743 L Z+50 FMAX
744 M78
745 M5
746 L Z-1 FMAX M91
747 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
748 ; CORRECTION USURE GAUCHE
749 ; SUREP R 0. SUREP Z 0.
750 TOOL CALL 1 Z S6000 DR-2,5
751 TOOL DEF 7
752 L X+0 Y-0,001 FMAX M3
753 L Z+50 FMAX
754 L Z+2 FMAX
755 L Z-2,3 F800
756 L X-32 Y+0,499 RL F1200
757 L X-32,5
758 CC X-32,5 Y-0,001
759 C X-33 Y-0,001 DR+
760 L Y-20,003
761 CC X-25 Y-20
762 C X-25 Y-28 DR+
763 L X+25
764 CC X+25 Y-20
765 C X+33 Y-20 DR+
766 L Y+19,997
767 CC X+25 Y+20
768 C X+25 Y+28 DR+
769 L X-25
770 CC X-25 Y+20
771 C X-33 Y+20 DR+
772 L Y-2,001
773 CC X-32,5 Y-2,001
774 C X-32,5 Y-2,501 DR+
775 L X-32
776 L X+0 Y-0,001 R0
777 L Z+50 FMAX
778 M5
779 L Z-1 FMAX M91
780 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
781 TOOL CALL 1 Z S1856 DR+0
782 TOOL DEF 7
783 L X-22 Y-36 FMAX M3
784 L Z+50 FMAX M8
785 ;  POINTAGE-PERCAGE
786 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
787 L X-22 Y-36 FMAX M99
788 L X+22 Y+36 FMAX M99
789 L Z+50 FMAX
790 M9
791 M5
792 L Z-1 FMAX M91
793 ; T7 CARB DIA 7.7  VC 40 DMF FORET DIAM=7.7 2 DENTS A=118. ARS
794 TOOL CALL 7 Z S1850 DR+0
795 TOOL DEF 11
796 L X-22 Y-36 FMAX M3
797 L Z+50 FMAX M7
798 ;  DEBOURRAGE
799 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-46 ; PROFONDEUR~
    Q206=175 ; AVANCE PLONGEE PROF.~
    Q202=+3,465 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
800 L X-22 Y-36 FMAX M99
801 L X+22 Y+36 FMAX M99
802 L Z+50 FMAX
803 M9
804 M5
805 L Z-1 FMAX M91
806 ; T11 ALESOIR CARBURE DIA 8 VC 15 ALESOIR DIAM=8. 5 DENTS ARS
807 TOOL CALL 11 Z S625 DR+0
808 TOOL DEF 1
809 L X-22 Y-36 FMAX M3
810 L Z+50 FMAX M8
811 ;  POINTAGE-PERCAGE
812 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-46 ; PROFONDEUR~
    Q206=64 ; AVANCE PLONGEE PROF.~
    Q202=+46 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
813 L X-22 Y-36 FMAX M99
814 L X+22 Y+36 FMAX M99
815 L Z+50 FMAX
816 M9
817 M5
818 L Z-1 FMAX M91
819 L Y-1 FMAX M91
820 M30
821 END PGM REHAUSSE MATRICE MM
