0 BEGIN PGM REP 2009 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP 2009
4 ; PROG-CN DU 27-09-21 A 10:58
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T16 P15323391XC ST FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
9 ; T17 P15323501 XC48 POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-2*
15 ; T16 P15323391XC ST FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
16 ; CORRECTION AUCUNE
17 ; SUREP R 0. SUREP Z 0.
18 TOOL CALL 16 Z S4775 DR+0
19 TOOL DEF 17
20 L X-81,96 Y+40,043 FMAX M3
21 L Z+50 FMAX M25
22 L Z+2 FMAX
23 L Z+0,5 F477
24 CC X-85 Y+37,444
25 CP IPA-180 Z-0,378 DR-
26 CC X-85 Y+37,444
27 CP IPA-180 Z-1,257 DR-
28 CC X-85 Y+37,444
29 CP IPA-180 Z-2,136 DR-
30 CC X-85 Y+37,444
31 CP IPA-180 Z-3,015 DR-
32 CC X-85 Y+37,444
33 CP IPA-180 Z-3,894 DR-
34 CC X-85 Y+37,444
35 CP IPA-180 Z-4,772 DR-
36 CC X-85 Y+37,444
37 CP IPA-180 Z-5,651 DR-
38 CC X-85 Y+37,444
39 CP IPA-180 Z-6,53 DR-
40 CC X-85 Y+37,444
41 CP IPA-180 Z-7,409 DR-
42 CC X-85 Y+37,444
43 CP IPA-180 Z-8,287 DR-
44 CC X-85 Y+37,444
45 CP IPA-180 Z-9,166 DR-
46 CC X-85 Y+37,444
47 CP IPA-180 Z-10,045 DR-
48 CC X-85 Y+37,444
49 CP IPA-180 Z-10,924 DR-
50 CC X-85 Y+37,444
51 CP IPA-180 Z-11,802 DR-
52 CC X-85 Y+37,444
53 CP IPA-40,528 Z-12 DR-
54 L X-84,5 Y+37,444
55 CC X-86 Y+37,444
56 C X-87,5 Y+37,444 DR+
57 CC X-84 Y+37,444
58 C X-80,5 Y+37,444 DR+
59 CC X-86 Y+37,444
60 C X-82,875 Y+41,97 DR+
61 CC X-85 Y+37,444
62 C X-80 Y+37,444 DR+
63 CC X-85 Y+37,444
64 C X-82,875 Y+41,97 DR+
65 L Z+50 FMAX
66 L X-61,96 Y+40,043 FMAX
67 L Z+2 FMAX
68 L Z+0,5
69 CC X-65 Y+37,444
70 CP IPA-180 Z-0,378 DR-
71 CC X-65 Y+37,444
72 CP IPA-180 Z-1,257 DR-
73 CC X-65 Y+37,444
74 CP IPA-180 Z-2,136 DR-
75 CC X-65 Y+37,444
76 CP IPA-180 Z-3,015 DR-
77 CC X-65 Y+37,444
78 CP IPA-180 Z-3,894 DR-
79 CC X-65 Y+37,444
80 CP IPA-180 Z-4,772 DR-
81 CC X-65 Y+37,444
82 CP IPA-180 Z-5,651 DR-
83 CC X-65 Y+37,444
84 CP IPA-180 Z-6,53 DR-
85 CC X-65 Y+37,444
86 CP IPA-180 Z-7,409 DR-
87 CC X-65 Y+37,444
88 CP IPA-180 Z-8,287 DR-
89 CC X-65 Y+37,444
90 CP IPA-180 Z-9,166 DR-
91 CC X-65 Y+37,444
92 CP IPA-180 Z-10,045 DR-
93 CC X-65 Y+37,444
94 CP IPA-180 Z-10,924 DR-
95 CC X-65 Y+37,444
96 CP IPA-180 Z-11,802 DR-
97 CC X-65 Y+37,444
98 CP IPA-40,528 Z-12 DR-
99 L X-64,5 Y+37,444
100 CC X-66 Y+37,444
101 C X-67,5 Y+37,444 DR+
102 CC X-64 Y+37,444
103 C X-60,5 Y+37,444 DR+
104 CC X-66 Y+37,444
105 C X-62,875 Y+41,97 DR+
106 CC X-65 Y+37,444
107 C X-60 Y+37,444 DR+
108 CC X-65 Y+37,444
109 C X-62,875 Y+41,97 DR+
110 L Z+50 FMAX
111 L X-71,96 Y-23,098 FMAX
112 L Z+2 FMAX
113 L Z+0,5
114 CC X-75 Y-25,698
115 CP IPA-180 Z-0,378 DR-
116 CC X-75 Y-25,698
117 CP IPA-180 Z-1,257 DR-
118 CC X-75 Y-25,698
119 CP IPA-180 Z-2,136 DR-
120 CC X-75 Y-25,698
121 CP IPA-180 Z-3,015 DR-
122 CC X-75 Y-25,698
123 CP IPA-180 Z-3,894 DR-
124 CC X-75 Y-25,698
125 CP IPA-180 Z-4,772 DR-
126 CC X-75 Y-25,698
127 CP IPA-180 Z-5,651 DR-
128 CC X-75 Y-25,698
129 CP IPA-180 Z-6,53 DR-
130 CC X-75 Y-25,698
131 CP IPA-180 Z-7,409 DR-
132 CC X-75 Y-25,698
133 CP IPA-180 Z-8,287 DR-
134 CC X-75 Y-25,698
135 CP IPA-180 Z-9,166 DR-
136 CC X-75 Y-25,698
137 CP IPA-180 Z-10,045 DR-
138 CC X-75 Y-25,698
139 CP IPA-180 Z-10,924 DR-
140 CC X-75 Y-25,698
141 CP IPA-180 Z-11,802 DR-
142 CC X-75 Y-25,698
143 CP IPA-40,539 Z-12 DR-
144 L X-74,5 Y-25,698
145 CC X-76 Y-25,698
146 C X-77,5 Y-25,698 DR+
147 CC X-74 Y-25,698
148 C X-70,5 Y-25,698 DR+
149 CC X-76 Y-25,698
150 C X-71,656 Y-22,324 DR+
151 CC X-75 Y-25,698
152 C X-70,25 Y-25,698 DR+
153 CC X-75 Y-25,698
154 C X-71,656 Y-22,324 DR+
155 L Z+50 FMAX
156 L X-71,96 Y-40,845 FMAX
157 L Z+2 FMAX
158 L Z+0,5
159 CC X-75 Y-43,444
160 CP IPA-180 Z-0,378 DR-
161 CC X-75 Y-43,444
162 CP IPA-180 Z-1,257 DR-
163 CC X-75 Y-43,444
164 CP IPA-180 Z-2,136 DR-
165 CC X-75 Y-43,444
166 CP IPA-180 Z-3,015 DR-
167 CC X-75 Y-43,444
168 CP IPA-180 Z-3,894 DR-
169 CC X-75 Y-43,444
170 CP IPA-180 Z-4,772 DR-
171 CC X-75 Y-43,444
172 CP IPA-180 Z-5,651 DR-
173 CC X-75 Y-43,444
174 CP IPA-180 Z-6,53 DR-
175 CC X-75 Y-43,444
176 CP IPA-180 Z-7,409 DR-
177 CC X-75 Y-43,444
178 CP IPA-180 Z-8,287 DR-
179 CC X-75 Y-43,444
180 CP IPA-180 Z-9,166 DR-
181 CC X-75 Y-43,444
182 CP IPA-180 Z-10,045 DR-
183 CC X-75 Y-43,444
184 CP IPA-180 Z-10,924 DR-
185 CC X-75 Y-43,444
186 CP IPA-180 Z-11,802 DR-
187 CC X-75 Y-43,444
188 CP IPA-40,528 Z-12 DR-
189 L X-74,5 Y-43,444
190 CC X-76 Y-43,444
191 C X-77,5 Y-43,444 DR+
192 CC X-74 Y-43,444
193 C X-70,5 Y-43,444 DR+
194 CC X-76 Y-43,444
195 C X-71,656 Y-40,071 DR+
196 CC X-75 Y-43,444
197 C X-70,25 Y-43,444 DR+
198 CC X-75 Y-43,444
199 C X-71,656 Y-40,071 DR+
200 L Z+50 FMAX
201 TOOL CALL 16 Z S4775 DR-4
202 L X-85 Y+37,444 Z+50 FMAX
203 L Z+2 FMAX
204 L Z-12
205 L X-89,333 Y+37,778 RL
206 L X-89,667
207 CC X-89,667 Y+37,444
208 C X-90 Y+37,444 DR+
209 CC X-85 Y+37,444
210 C X-80 Y+37,444 DR+
211 CC X-85 Y+37,444
212 C X-90 Y+37,444 DR+
213 CC X-85 Y+37,444
214 C X-89,605 Y+35,497 DR+
215 CC X-85 Y+37,444
216 C X-80 Y+37,444 DR+
217 CC X-85 Y+37,444
218 C X-90 Y+37,444 DR+
219 CC X-85 Y+37,444
220 C X-89,605 Y+35,497 DR+
221 CC X-89,298 Y+35,627
222 C X-89,169 Y+35,32 DR+
223 L X-88,862 Y+35,45
224 L X-85 Y+37,444 R0
225 L Z+50 FMAX
226 L X-65 FMAX
227 L Z+2 FMAX
228 L Z-12
229 L X-69,333 Y+37,778 RL
230 L X-69,667
231 CC X-69,667 Y+37,444
232 C X-70 Y+37,444 DR+
233 CC X-65 Y+37,444
234 C X-60 Y+37,444 DR+
235 CC X-65 Y+37,444
236 C X-70 Y+37,444 DR+
237 CC X-65 Y+37,444
238 C X-69,605 Y+35,497 DR+
239 CC X-65 Y+37,444
240 C X-60 Y+37,444 DR+
241 CC X-65 Y+37,444
242 C X-70 Y+37,444 DR+
243 CC X-65 Y+37,444
244 C X-69,605 Y+35,497 DR+
245 CC X-69,298 Y+35,627
246 C X-69,169 Y+35,32 DR+
247 L X-68,862 Y+35,45
248 L X-65 Y+37,444 R0
249 L Z+50 FMAX
250 L X-75 Y-25,698 FMAX
251 L Z+2 FMAX
252 L Z-12
253 L X-79,083 Y-25,364 RL
254 L X-79,417
255 CC X-79,417 Y-25,698
256 C X-79,75 Y-25,698 DR+
257 CC X-75 Y-25,698
258 C X-70,25 Y-25,698 DR+
259 CC X-75 Y-25,698
260 C X-79,75 Y-25,698 DR+
261 CC X-75 Y-25,698
262 C X-79,335 Y-27,639 DR+
263 CC X-75 Y-25,698
264 C X-70,25 Y-25,698 DR+
265 CC X-75 Y-25,698
266 C X-79,75 Y-25,698 DR+
267 CC X-75 Y-25,698
268 C X-79,335 Y-27,639 DR+
269 CC X-79,031 Y-27,503
270 C X-78,895 Y-27,807 DR+
271 L X-78,591 Y-27,671
272 L X-75 Y-25,698 R0
273 L Z+50 FMAX
274 L Y-43,444 FMAX
275 L Z+2 FMAX
276 L Z-12
277 L X-79,083 Y-43,111 RL
278 L X-79,417
279 CC X-79,417 Y-43,444
280 C X-79,75 Y-43,444 DR+
281 CC X-75 Y-43,444
282 C X-70,25 Y-43,444 DR+
283 CC X-75 Y-43,444
284 C X-79,75 Y-43,444 DR+
285 CC X-75 Y-43,444
286 C X-79,335 Y-45,386 DR+
287 CC X-75 Y-43,444
288 C X-70,25 Y-43,444 DR+
289 CC X-75 Y-43,444
290 C X-79,75 Y-43,444 DR+
291 CC X-75 Y-43,444
292 C X-79,335 Y-45,386 DR+
293 CC X-79,031 Y-45,25
294 C X-78,895 Y-45,554 DR+
295 L X-78,591 Y-45,418
296 L X-75 Y-43,444 R0
297 L Z+50 FMAX
298 ; CORRECTION AUCUNE
299 ; SUREP R 0. SUREP Z 0.
300 TOOL CALL 16 Z S4775 DR+0
301 L X+72,27 Y+13,462 Z+50 FMAX
302 L Z+2 FMAX
303 L Z+0,5
304 CC X+75,002 Y+14,074
305 CP IPA-180 Z-0,115 DR-
306 CC X+75,002 Y+14,074
307 CP IPA-180 Z-0,73 DR-
308 CC X+75,002 Y+14,074
309 CP IPA-180 Z-1,345 DR-
310 CC X+75,002 Y+14,074
311 CP IPA-180 Z-1,96 DR-
312 CC X+75,002 Y+14,074
313 CP IPA-180 Z-2,575 DR-
314 CC X+75,002 Y+14,074
315 CP IPA-180 Z-3,191 DR-
316 CC X+75,002 Y+14,074
317 CP IPA-180 Z-3,806 DR-
318 CC X+75,002 Y+14,074
319 CP IPA-180 Z-4,421 DR-
320 CC X+75,002 Y+14,074
321 CP IPA-180 Z-5,036 DR-
322 CC X+75,002 Y+14,074
323 CP IPA-180 Z-5,651 DR-
324 CC X+75,002 Y+14,074
325 CP IPA-180 Z-6,266 DR-
326 CC X+75,002 Y+14,074
327 CP IPA-180 Z-6,881 DR-
328 CC X+75,002 Y+14,074
329 CP IPA-180 Z-7,497 DR-
330 CC X+75,002 Y+14,074
331 CP IPA-180 Z-8,112 DR-
332 CC X+75,002 Y+14,074
333 CP IPA-180 Z-8,727 DR-
334 CC X+75,002 Y+14,074
335 CP IPA-180 Z-9,342 DR-
336 CC X+75,002 Y+14,074
337 CP IPA-192,626 Z-10 DR-
338 L X+75,252 Y+14,074
339 CC X+74,502 Y+14,074
340 C X+73,752 Y+14,074 DR+
341 CC X+75,502 Y+14,074
342 C X+77,252 Y+14,074 DR+
343 CC X+74,502 Y+14,074
344 C X+71,752 Y+14,074 DR+
345 CC X+75,502 Y+14,074
346 C X+73,439 Y+10,942 DR+
347 CC X+75,002 Y+14,074
348 C X+78,502 Y+14,074 DR+
349 CC X+75,002 Y+14,074
350 C X+73,439 Y+10,942 DR+
351 L Z+50 FMAX
352 L X+72,275 Y-19,538 FMAX
353 L Z+2 FMAX
354 L Z+0,5
355 CC X+75,007 Y-18,926
356 CP IPA-180 Z-0,115 DR-
357 CC X+75,007 Y-18,926
358 CP IPA-180 Z-0,73 DR-
359 CC X+75,007 Y-18,926
360 CP IPA-180 Z-1,345 DR-
361 CC X+75,007 Y-18,926
362 CP IPA-180 Z-1,96 DR-
363 CC X+75,007 Y-18,926
364 CP IPA-180 Z-2,575 DR-
365 CC X+75,007 Y-18,926
366 CP IPA-180 Z-3,191 DR-
367 CC X+75,007 Y-18,926
368 CP IPA-180 Z-3,806 DR-
369 CC X+75,007 Y-18,926
370 CP IPA-180 Z-4,421 DR-
371 CC X+75,007 Y-18,926
372 CP IPA-180 Z-5,036 DR-
373 CC X+75,007 Y-18,926
374 CP IPA-180 Z-5,651 DR-
375 CC X+75,007 Y-18,926
376 CP IPA-180 Z-6,266 DR-
377 CC X+75,007 Y-18,926
378 CP IPA-180 Z-6,881 DR-
379 CC X+75,007 Y-18,926
380 CP IPA-180 Z-7,497 DR-
381 CC X+75,007 Y-18,926
382 CP IPA-180 Z-8,112 DR-
383 CC X+75,007 Y-18,926
384 CP IPA-180 Z-8,727 DR-
385 CC X+75,007 Y-18,926
386 CP IPA-180 Z-9,342 DR-
387 CC X+75,007 Y-18,926
388 CP IPA-192,626 Z-10 DR-
389 L X+75,257 Y-18,926
390 CC X+74,507 Y-18,926
391 C X+73,757 Y-18,926 DR+
392 CC X+75,507 Y-18,926
393 C X+77,257 Y-18,926 DR+
394 CC X+74,507 Y-18,926
395 C X+71,757 Y-18,926 DR+
396 CC X+75,507 Y-18,926
397 C X+73,444 Y-22,058 DR+
398 CC X+75,007 Y-18,926
399 C X+78,507 Y-18,926 DR+
400 CC X+75,007 Y-18,926
401 C X+73,444 Y-22,058 DR+
402 L Z+50 FMAX
403 TOOL CALL 16 Z S4775 DR-4
404 L X+75,002 Y+14,074 Z+50 FMAX
405 L Z+2 FMAX
406 L Z-10
407 L X+72,169 Y+14,407 RL
408 L X+71,835
409 CC X+71,835 Y+14,074
410 C X+71,502 Y+14,074 DR+
411 CC X+75,002 Y+14,074
412 C X+78,502 Y+14,074 DR+
413 CC X+75,002 Y+14,074
414 C X+71,502 Y+14,074 DR+
415 CC X+75,002 Y+14,074
416 C X+72,058 Y+12,181 DR+
417 CC X+75,002 Y+14,074
418 C X+78,502 Y+14,074 DR+
419 CC X+75,002 Y+14,074
420 C X+71,502 Y+14,074 DR+
421 CC X+75,002 Y+14,074
422 C X+72,058 Y+12,181 DR+
423 CC X+72,338 Y+12,361
424 C X+72,519 Y+12,081 DR+
425 L X+72,799 Y+12,261
426 L X+75,002 Y+14,074 R0
427 L Z+50 FMAX
428 L X+75,007 Y-18,926 FMAX
429 L Z+2 FMAX
430 L Z-10
431 L X+72,174 Y-18,593 RL
432 L X+71,84
433 CC X+71,84 Y-18,926
434 C X+71,507 Y-18,926 DR+
435 CC X+75,007 Y-18,926
436 C X+78,507 Y-18,926 DR+
437 CC X+75,007 Y-18,926
438 C X+71,507 Y-18,926 DR+
439 CC X+75,007 Y-18,926
440 C X+72,063 Y-20,819 DR+
441 CC X+75,007 Y-18,926
442 C X+78,507 Y-18,926 DR+
443 CC X+75,007 Y-18,926
444 C X+71,507 Y-18,926 DR+
445 CC X+75,007 Y-18,926
446 C X+72,063 Y-20,819 DR+
447 CC X+72,343 Y-20,639
448 C X+72,524 Y-20,919 DR+
449 L X+72,804 Y-20,739
450 L X+75,007 Y-18,926 R0
451 L Z+50 FMAX
452 M78
453 M5
454 L Z-1 FMAX M91
455 ; T17 P15323501 XC48 POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
456 ; CORRECTION AUCUNE
457 ; SUREP R 0. SUREP Z 0.
458 TOOL CALL 17 Z S3183 DR+0
459 TOOL DEF 1
460 L X+22,054 Y+12,724 FMAX M3
461 L Z+50 FMAX M25
462 L Z+2 FMAX
463 L Z+0,5 F500
464 CC X+25 Y+12,157
465 CP IPA-180 Z-0,159 DR-
466 CC X+25 Y+12,157
467 CP IPA-180 Z-0,818 DR-
468 CC X+25 Y+12,157
469 CP IPA-180 Z-1,477 DR-
470 CC X+25 Y+12,157
471 CP IPA-180 Z-2,136 DR-
472 CC X+25 Y+12,157
473 CP IPA-180 Z-2,795 DR-
474 CC X+25 Y+12,157
475 CP IPA-180 Z-3,454 DR-
476 CC X+25 Y+12,157
477 CP IPA-180 Z-4,113 DR-
478 CC X+25 Y+12,157
479 CP IPA-180 Z-4,772 DR-
480 CC X+25 Y+12,157
481 CP IPA-180 Z-5,431 DR-
482 CC X+25 Y+12,157
483 CP IPA-180 Z-6,09 DR-
484 CC X+25 Y+12,157
485 CP IPA-180 Z-6,749 DR-
486 CC X+25 Y+12,157
487 CP IPA-180 Z-7,409 DR-
488 CC X+25 Y+12,157
489 CP IPA-180 Z-8,068 DR-
490 CC X+25 Y+12,157
491 CP IPA-180 Z-8,727 DR-
492 CC X+25 Y+12,157
493 CP IPA-180 Z-9,386 DR-
494 CC X+25 Y+12,157
495 CP IPA-180 Z-10,045 DR-
496 CC X+25 Y+12,157
497 CP IPA-180 Z-10,704 DR-
498 CC X+25 Y+12,157
499 CP IPA-180 Z-11,363 DR-
500 CC X+25 Y+12,157
501 CP IPA-180 Z-12,022 DR-
502 CC X+25 Y+12,157
503 CP IPA-180 Z-12,681 DR-
504 CC X+25 Y+12,157
505 CP IPA-169,106 Z-13,3 DR-
506 L X+25,75 Y+12,157 F700
507 CC X+23,5 Y+12,157
508 C X+21,25 Y+12,157 DR+
509 CC X+26,5 Y+12,157
510 C X+21,896 Y+9,634 DR+
511 CC X+25 Y+12,157
512 C X+29 Y+12,157 DR+
513 CC X+25 Y+12,157
514 C X+21,896 Y+9,634 DR+
515 L Z+10 FMAX
516 L X+22,054 Y+12,724 FMAX
517 L Z-11,3 FMAX
518 L Z-12,8 F500
519 CC X+25 Y+12,157
520 CP IPA-180 Z-13,459 DR-
521 CC X+25 Y+12,157
522 CP IPA-180 Z-14,118 DR-
523 CC X+25 Y+12,157
524 CP IPA-180 Z-14,777 DR-
525 CC X+25 Y+12,157
526 CP IPA-180 Z-15,436 DR-
527 CC X+25 Y+12,157
528 CP IPA-180 Z-16,095 DR-
529 CC X+25 Y+12,157
530 CP IPA-180 Z-16,754 DR-
531 CC X+25 Y+12,157
532 CP IPA-180 Z-17,413 DR-
533 CC X+25 Y+12,157
534 CP IPA-180 Z-18,072 DR-
535 CC X+25 Y+12,157
536 CP IPA-180 Z-18,731 DR-
537 CC X+25 Y+12,157
538 CP IPA-180 Z-19,39 DR-
539 CC X+25 Y+12,157
540 CP IPA-180 Z-20,05 DR-
541 CC X+25 Y+12,157
542 CP IPA-180 Z-20,709 DR-
543 CC X+25 Y+12,157
544 CP IPA-180 Z-21,368 DR-
545 CC X+25 Y+12,157
546 CP IPA-180 Z-22,027 DR-
547 CC X+25 Y+12,157
548 CP IPA-180 Z-22,686 DR-
549 CC X+25 Y+12,157
550 CP IPA-180 Z-23,345 DR-
551 CC X+25 Y+12,157
552 CP IPA-180 Z-24,004 DR-
553 CC X+25 Y+12,157
554 CP IPA-180 Z-24,663 DR-
555 CC X+25 Y+12,157
556 CP IPA-180 Z-25,322 DR-
557 CC X+25 Y+12,157
558 CP IPA-180 Z-25,981 DR-
559 CC X+25 Y+12,157
560 CP IPA-169,106 Z-26,6 DR-
561 L X+25,75 Y+12,157 F700
562 CC X+23,5 Y+12,157
563 C X+21,25 Y+12,157 DR+
564 CC X+26,5 Y+12,157
565 C X+21,896 Y+9,634 DR+
566 CC X+25 Y+12,157
567 C X+29 Y+12,157 DR+
568 CC X+25 Y+12,157
569 C X+21,896 Y+9,634 DR+
570 L Z+10 FMAX
571 L X+22,054 Y+12,724 FMAX
572 L Z-13,2 FMAX
573 CC X+25 Y+12,157
574 CP IPA-180 Z-13,859 DR- F500
575 CC X+25 Y+12,157
576 CP IPA-180 Z-14,518 DR-
577 CC X+25 Y+12,157
578 CP IPA-180 Z-15,177 DR-
579 CC X+25 Y+12,157
580 CP IPA-180 Z-15,836 DR-
581 CC X+25 Y+12,157
582 CP IPA-180 Z-16,495 DR-
583 CC X+25 Y+12,157
584 CP IPA-180 Z-17,154 DR-
585 CC X+25 Y+12,157
586 CP IPA-180 Z-17,813 DR-
587 CC X+25 Y+12,157
588 CP IPA-180 Z-18,472 DR-
589 CC X+25 Y+12,157
590 CP IPA-180 Z-19,131 DR-
591 CC X+25 Y+12,157
592 CP IPA-180 Z-19,79 DR-
593 CC X+25 Y+12,157
594 CP IPA-180 Z-20,45 DR-
595 CC X+25 Y+12,157
596 CP IPA-180 Z-21,109 DR-
597 CC X+25 Y+12,157
598 CP IPA-180 Z-21,768 DR-
599 CC X+25 Y+12,157
600 CP IPA-180 Z-22,427 DR-
601 CC X+25 Y+12,157
602 CP IPA-180 Z-23,086 DR-
603 CC X+25 Y+12,157
604 CP IPA-180 Z-23,745 DR-
605 CC X+25 Y+12,157
606 CP IPA-180 Z-24,404 DR-
607 CC X+25 Y+12,157
608 CP IPA-180 Z-25,063 DR-
609 CC X+25 Y+12,157
610 CP IPA-180 Z-25,722 DR-
611 CC X+25 Y+12,157
612 CP IPA-180 Z-26,381 DR-
613 CC X+25 Y+12,157
614 CP IPA-169,106 Z-27 DR-
615 L X+25,75 Y+12,157 F700
616 CC X+23,5 Y+12,157
617 C X+21,25 Y+12,157 DR+
618 CC X+26,5 Y+12,157
619 C X+21,896 Y+9,634 DR+
620 CC X+25 Y+12,157
621 C X+29 Y+12,157 DR+
622 CC X+25 Y+12,157
623 C X+21,896 Y+9,634 DR+
624 L Z+50 FMAX
625 L X+122,054 Y-33,276 FMAX
626 L Z+2 FMAX
627 L Z+0,5 F500
628 CC X+125 Y-33,843
629 CP IPA-180 Z-0,159 DR-
630 CC X+125 Y-33,843
631 CP IPA-180 Z-0,818 DR-
632 CC X+125 Y-33,843
633 CP IPA-180 Z-1,477 DR-
634 CC X+125 Y-33,843
635 CP IPA-180 Z-2,136 DR-
636 CC X+125 Y-33,843
637 CP IPA-180 Z-2,795 DR-
638 CC X+125 Y-33,843
639 CP IPA-180 Z-3,454 DR-
640 CC X+125 Y-33,843
641 CP IPA-180 Z-4,113 DR-
642 CC X+125 Y-33,843
643 CP IPA-180 Z-4,772 DR-
644 CC X+125 Y-33,843
645 CP IPA-180 Z-5,431 DR-
646 CC X+125 Y-33,843
647 CP IPA-180 Z-6,09 DR-
648 CC X+125 Y-33,843
649 CP IPA-180 Z-6,749 DR-
650 CC X+125 Y-33,843
651 CP IPA-180 Z-7,409 DR-
652 CC X+125 Y-33,843
653 CP IPA-180 Z-8,068 DR-
654 CC X+125 Y-33,843
655 CP IPA-180 Z-8,727 DR-
656 CC X+125 Y-33,843
657 CP IPA-180 Z-9,386 DR-
658 CC X+125 Y-33,843
659 CP IPA-180 Z-10,045 DR-
660 CC X+125 Y-33,843
661 CP IPA-180 Z-10,704 DR-
662 CC X+125 Y-33,843
663 CP IPA-180 Z-11,363 DR-
664 CC X+125 Y-33,843
665 CP IPA-180 Z-12,022 DR-
666 CC X+125 Y-33,843
667 CP IPA-180 Z-12,681 DR-
668 CC X+125 Y-33,843
669 CP IPA-169,106 Z-13,3 DR-
670 L X+125,75 Y-33,843 F700
671 CC X+123,5 Y-33,843
672 C X+121,25 Y-33,843 DR+
673 CC X+126,5 Y-33,843
674 C X+121,896 Y-36,366 DR+
675 CC X+125 Y-33,843
676 C X+129 Y-33,843 DR+
677 CC X+125 Y-33,843
678 C X+121,896 Y-36,366 DR+
679 L Z+10 FMAX
680 L X+122,054 Y-33,276 FMAX
681 L Z-11,3 FMAX
682 L Z-12,8 F500
683 CC X+125 Y-33,843
684 CP IPA-180 Z-13,459 DR-
685 CC X+125 Y-33,843
686 CP IPA-180 Z-14,118 DR-
687 CC X+125 Y-33,843
688 CP IPA-180 Z-14,777 DR-
689 CC X+125 Y-33,843
690 CP IPA-180 Z-15,436 DR-
691 CC X+125 Y-33,843
692 CP IPA-180 Z-16,095 DR-
693 CC X+125 Y-33,843
694 CP IPA-180 Z-16,754 DR-
695 CC X+125 Y-33,843
696 CP IPA-180 Z-17,413 DR-
697 CC X+125 Y-33,843
698 CP IPA-180 Z-18,072 DR-
699 CC X+125 Y-33,843
700 CP IPA-180 Z-18,731 DR-
701 CC X+125 Y-33,843
702 CP IPA-180 Z-19,39 DR-
703 CC X+125 Y-33,843
704 CP IPA-180 Z-20,05 DR-
705 CC X+125 Y-33,843
706 CP IPA-180 Z-20,709 DR-
707 CC X+125 Y-33,843
708 CP IPA-180 Z-21,368 DR-
709 CC X+125 Y-33,843
710 CP IPA-180 Z-22,027 DR-
711 CC X+125 Y-33,843
712 CP IPA-180 Z-22,686 DR-
713 CC X+125 Y-33,843
714 CP IPA-180 Z-23,345 DR-
715 CC X+125 Y-33,843
716 CP IPA-180 Z-24,004 DR-
717 CC X+125 Y-33,843
718 CP IPA-180 Z-24,663 DR-
719 CC X+125 Y-33,843
720 CP IPA-180 Z-25,322 DR-
721 CC X+125 Y-33,843
722 CP IPA-180 Z-25,981 DR-
723 CC X+125 Y-33,843
724 CP IPA-169,106 Z-26,6 DR-
725 L X+125,75 Y-33,843 F700
726 CC X+123,5 Y-33,843
727 C X+121,25 Y-33,843 DR+
728 CC X+126,5 Y-33,843
729 C X+121,896 Y-36,366 DR+
730 CC X+125 Y-33,843
731 C X+129 Y-33,843 DR+
732 CC X+125 Y-33,843
733 C X+121,896 Y-36,366 DR+
734 L Z+10 FMAX
735 L X+122,054 Y-33,276 FMAX
736 L Z-13,2 FMAX
737 CC X+125 Y-33,843
738 CP IPA-180 Z-13,859 DR- F500
739 CC X+125 Y-33,843
740 CP IPA-180 Z-14,518 DR-
741 CC X+125 Y-33,843
742 CP IPA-180 Z-15,177 DR-
743 CC X+125 Y-33,843
744 CP IPA-180 Z-15,836 DR-
745 CC X+125 Y-33,843
746 CP IPA-180 Z-16,495 DR-
747 CC X+125 Y-33,843
748 CP IPA-180 Z-17,154 DR-
749 CC X+125 Y-33,843
750 CP IPA-180 Z-17,813 DR-
751 CC X+125 Y-33,843
752 CP IPA-180 Z-18,472 DR-
753 CC X+125 Y-33,843
754 CP IPA-180 Z-19,131 DR-
755 CC X+125 Y-33,843
756 CP IPA-180 Z-19,79 DR-
757 CC X+125 Y-33,843
758 CP IPA-180 Z-20,45 DR-
759 CC X+125 Y-33,843
760 CP IPA-180 Z-21,109 DR-
761 CC X+125 Y-33,843
762 CP IPA-180 Z-21,768 DR-
763 CC X+125 Y-33,843
764 CP IPA-180 Z-22,427 DR-
765 CC X+125 Y-33,843
766 CP IPA-180 Z-23,086 DR-
767 CC X+125 Y-33,843
768 CP IPA-180 Z-23,745 DR-
769 CC X+125 Y-33,843
770 CP IPA-180 Z-24,404 DR-
771 CC X+125 Y-33,843
772 CP IPA-180 Z-25,063 DR-
773 CC X+125 Y-33,843
774 CP IPA-180 Z-25,722 DR-
775 CC X+125 Y-33,843
776 CP IPA-180 Z-26,381 DR-
777 CC X+125 Y-33,843
778 CP IPA-169,106 Z-27 DR-
779 L X+125,75 Y-33,843 F700
780 CC X+123,5 Y-33,843
781 C X+121,25 Y-33,843 DR+
782 CC X+126,5 Y-33,843
783 C X+121,896 Y-36,366 DR+
784 CC X+125 Y-33,843
785 C X+129 Y-33,843 DR+
786 CC X+125 Y-33,843
787 C X+121,896 Y-36,366 DR+
788 L Z+50 FMAX
789 TOOL CALL 17 Z S3183 DR-6
790 L X+25 Y+12,157 Z+50 FMAX
791 L Z-24,6 FMAX
792 L Z-27 F500
793 L X+22 Y+12,657 RL F700
794 L X+21,5
795 CC X+21,5 Y+12,157
796 C X+21 Y+12,157 DR+
797 CC X+25 Y+12,157
798 C X+29 Y+12,157 DR+
799 CC X+25 Y+12,157
800 C X+21 Y+12,157 DR+
801 CC X+25 Y+12,157
802 C X+21,49 Y+10,239 DR+
803 CC X+25 Y+12,157
804 C X+29 Y+12,157 DR+
805 CC X+25 Y+12,157
806 C X+21 Y+12,157 DR+
807 CC X+25 Y+12,157
808 C X+21,49 Y+10,239 DR+
809 CC X+21,929 Y+10,479
810 C X+22,168 Y+10,04 DR+
811 L X+22,607 Y+10,28
812 L X+25 Y+12,157 R0
813 L Z+50 FMAX
814 L X+125 Y-33,843 FMAX
815 L Z-24,6 FMAX
816 L Z-27 F500
817 L X+122 Y-33,343 RL F700
818 L X+121,5
819 CC X+121,5 Y-33,843
820 C X+121 Y-33,843 DR+
821 CC X+125 Y-33,843
822 C X+129 Y-33,843 DR+
823 CC X+125 Y-33,843
824 C X+121 Y-33,843 DR+
825 CC X+125 Y-33,843
826 C X+121,49 Y-35,761 DR+
827 CC X+125 Y-33,843
828 C X+129 Y-33,843 DR+
829 CC X+125 Y-33,843
830 C X+121 Y-33,843 DR+
831 CC X+125 Y-33,843
832 C X+121,49 Y-35,761 DR+
833 CC X+121,929 Y-35,521
834 C X+122,168 Y-35,96 DR+
835 L X+122,607 Y-35,72
836 L X+125 Y-33,843 R0
837 L Z+50 FMAX
838 M78
839 M5
840 L Z-1 FMAX M91
841 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
842 ; CORRECTION USURE GAUCHE
843 ; SUREP R 0. SUREP Z 0.
844 TOOL CALL 1 Z S6000 DR-2,5
845 TOOL DEF 16
846 L X-200 Y+135 FMAX M3
847 L Z+50 FMAX
848 L Z+2 FMAX
849 L Z-2,5 F800
850 L X-203,433 Y+135,208 RL F1200
851 L X-203,642
852 CC X-203,642 Y+135
853 C X-203,85 Y+135 DR+
854 CC X-200 Y+135
855 C X-196,15 Y+135 DR+
856 CC X-200 Y+135
857 C X-203,85 Y+135 DR+
858 CC X-200 Y+135
859 C X-203,342 Y+133,089 DR+
860 CC X-203,161 Y+133,192
861 C X-203,058 Y+133,011 DR+
862 L X-200 Y+135 R0
863 L Z+50 FMAX
864 L X-40 FMAX
865 L Z+2 FMAX
866 L Z-2,5 F800
867 L X-43,433 Y+135,208 RL F1200
868 L X-43,642
869 CC X-43,642 Y+135
870 C X-43,85 Y+135 DR+
871 CC X-40 Y+135
872 C X-36,15 Y+135 DR+
873 CC X-40 Y+135
874 C X-43,85 Y+135 DR+
875 CC X-40 Y+135
876 C X-43,342 Y+133,089 DR+
877 CC X-43,161 Y+133,192
878 C X-43,058 Y+133,011 DR+
879 L X-40 Y+135 R0
880 L Z+50 FMAX
881 L X+195 FMAX
882 L Z+2 FMAX
883 L Z-2,5 F800
884 L X+191,567 Y+135,208 RL F1200
885 L X+191,358
886 CC X+191,358 Y+135
887 C X+191,15 Y+135 DR+
888 CC X+195 Y+135
889 C X+198,85 Y+135 DR+
890 CC X+195 Y+135
891 C X+191,15 Y+135 DR+
892 CC X+195 Y+135
893 C X+191,658 Y+133,089 DR+
894 CC X+191,839 Y+133,192
895 C X+191,942 Y+133,011 DR+
896 L X+195 Y+135 R0
897 L Z+50 FMAX
898 L X+175 Y+50 FMAX
899 L Z+2 FMAX
900 L Z-2,5 F800
901 L X+161,932 Y+50,208 RL F1200
902 L X+161,723
903 CC X+161,723 Y+50
904 C X+161,515 Y+50 DR+
905 CC X+175 Y+50
906 C X+188,485 Y+50 DR+
907 CC X+175 Y+50
908 C X+161,515 Y+50 DR+
909 CC X+175 Y+50
910 C X+161,663 Y+48,007 DR+
911 CC X+161,869 Y+48,038
912 C X+161,9 Y+47,832 DR+
913 L X+175 Y+50 R0
914 L Z+50 FMAX
915 L X+190 Y+0 FMAX
916 L Z+2 FMAX
917 L Z-2,5 F800
918 L X+186,567 Y+0,208 RL F1200
919 L X+186,358
920 CC X+186,358 Y+0
921 C X+186,15 Y+0 DR+
922 CC X+190 Y+0
923 C X+193,85 Y+0 DR+
924 CC X+190 Y+0
925 C X+186,15 Y+0 DR+
926 CC X+190 Y+0
927 C X+186,658 Y-1,911 DR+
928 CC X+186,839 Y-1,808
929 C X+186,942 Y-1,989 DR+
930 L X+190 Y+0 R0
931 L Z+50 FMAX
932 L Y-110 FMAX
933 L Z+2 FMAX
934 L Z-2,5 F800
935 L X+186,567 Y-109,792 RL F1200
936 L X+186,358
937 CC X+186,358 Y-110
938 C X+186,15 Y-110 DR+
939 CC X+190 Y-110
940 C X+193,85 Y-110 DR+
941 CC X+190 Y-110
942 C X+186,15 Y-110 DR+
943 CC X+190 Y-110
944 C X+186,658 Y-111,911 DR+
945 CC X+186,839 Y-111,808
946 C X+186,942 Y-111,989 DR+
947 L X+190 Y-110 R0
948 L Z+50 FMAX
949 L X-40 Y-135 FMAX
950 L Z+2 FMAX
951 L Z-2,5 F800
952 L X-43,433 Y-134,792 RL F1200
953 L X-43,642
954 CC X-43,642 Y-135
955 C X-43,85 Y-135 DR+
956 CC X-40 Y-135
957 C X-36,15 Y-135 DR+
958 CC X-40 Y-135
959 C X-43,85 Y-135 DR+
960 CC X-40 Y-135
961 C X-43,342 Y-136,911 DR+
962 CC X-43,161 Y-136,808
963 C X-43,058 Y-136,989 DR+
964 L X-40 Y-135 R0
965 L Z+50 FMAX
966 L X-25 Y-86 FMAX
967 L Z+2 FMAX
968 L Z-2,5 F800
969 L X-28,083 Y-85,792 RL F1200
970 L X-28,292
971 CC X-28,292 Y-86
972 C X-28,5 Y-86 DR+
973 CC X-25 Y-86
974 C X-21,5 Y-86 DR+
975 CC X-25 Y-86
976 C X-28,5 Y-86 DR+
977 CC X-25 Y-86
978 C X-27,944 Y-87,893 DR+
979 CC X-27,769 Y-87,78
980 C X-27,656 Y-87,955 DR+
981 L X-25 Y-86 R0
982 L Z+50 FMAX
983 L Y+81 FMAX
984 L Z+2 FMAX
985 L Z-2,5 F800
986 L X-28,083 Y+81,208 RL F1200
987 L X-28,292
988 CC X-28,292 Y+81
989 C X-28,5 Y+81 DR+
990 CC X-25 Y+81
991 C X-21,5 Y+81 DR+
992 CC X-25 Y+81
993 C X-28,5 Y+81 DR+
994 CC X-25 Y+81
995 C X-27,944 Y+79,107 DR+
996 CC X-27,769 Y+79,22
997 C X-27,656 Y+79,045 DR+
998 L X-25 Y+81 R0
999 L Z+50 FMAX
1000 L X-125 FMAX
1001 L Z+2 FMAX
1002 L Z-2,5 F800
1003 L X-128,083 Y+81,208 RL F1200
1004 L X-128,292
1005 CC X-128,292 Y+81
1006 C X-128,5 Y+81 DR+
1007 CC X-125 Y+81
1008 C X-121,5 Y+81 DR+
1009 CC X-125 Y+81
1010 C X-128,5 Y+81 DR+
1011 CC X-125 Y+81
1012 C X-127,944 Y+79,107 DR+
1013 CC X-127,769 Y+79,22
1014 C X-127,656 Y+79,045 DR+
1015 L X-125 Y+81 R0
1016 L Z+50 FMAX
1017 L X-75 Y-0,127 FMAX
1018 L Z+2 FMAX
1019 L Z-2,5 F800
1020 L X-88,333 Y+0,082 RL F1200
1021 L X-88,542
1022 CC X-88,542 Y-0,127
1023 C X-88,75 Y-0,127 DR+
1024 CC X-75 Y-0,127
1025 C X-61,25 Y-0,127 DR+
1026 CC X-75 Y-0,127
1027 C X-88,75 Y-0,127 DR+
1028 CC X-75 Y-0,127
1029 C X-88,605 Y-2,12 DR+
1030 CC X-88,399 Y-2,089
1031 C X-88,369 Y-2,295 DR+
1032 L X-75 Y-0,127 R0
1033 L Z+50 FMAX
1034 L X-65 Y+37,444 FMAX
1035 L Z+2 FMAX
1036 L Z-2,5 F800
1037 L X-71,083 Y+37,653 RL F1200
1038 L X-71,292
1039 CC X-71,292 Y+37,444
1040 C X-71,5 Y+37,444 DR+
1041 CC X-65 Y+37,444
1042 C X-58,5 Y+37,444 DR+
1043 CC X-65 Y+37,444
1044 C X-71,5 Y+37,444 DR+
1045 CC X-65 Y+37,444
1046 C X-71,195 Y+35,476 DR+
1047 CC X-70,996 Y+35,539
1048 C X-70,933 Y+35,34 DR+
1049 L X-65 Y+37,444 R0
1050 L Z+50 FMAX
1051 L X-85 FMAX
1052 L Z+2 FMAX
1053 L Z-2,5 F800
1054 L X-91,083 Y+37,653 RL F1200
1055 L X-91,292
1056 CC X-91,292 Y+37,444
1057 C X-91,5 Y+37,444 DR+
1058 CC X-85 Y+37,444
1059 C X-78,5 Y+37,444 DR+
1060 CC X-85 Y+37,444
1061 C X-91,5 Y+37,444 DR+
1062 CC X-85 Y+37,444
1063 C X-91,195 Y+35,476 DR+
1064 CC X-90,996 Y+35,539
1065 C X-90,933 Y+35,34 DR+
1066 L X-85 Y+37,444 R0
1067 L Z+50 FMAX
1068 L X-75 Y-25,698 FMAX
1069 L Z+2 FMAX
1070 L Z-2,5 F800
1071 L X-80,833 Y-25,489 RL F1200
1072 L X-81,042
1073 CC X-81,042 Y-25,698
1074 C X-81,25 Y-25,698 DR+
1075 CC X-75 Y-25,698
1076 C X-68,75 Y-25,698 DR+
1077 CC X-75 Y-25,698
1078 C X-81,25 Y-25,698 DR+
1079 CC X-75 Y-25,698
1080 C X-80,933 Y-27,664 DR+
1081 CC X-80,735 Y-27,598
1082 C X-80,67 Y-27,796 DR+
1083 L X-75 Y-25,698 R0
1084 L Z+50 FMAX
1085 L Y-43,444 FMAX
1086 L Z+2 FMAX
1087 L Z-2,5 F800
1088 L X-80,833 Y-43,236 RL F1200
1089 L X-81,042
1090 CC X-81,042 Y-43,444
1091 C X-81,25 Y-43,444 DR+
1092 CC X-75 Y-43,444
1093 C X-68,75 Y-43,444 DR+
1094 CC X-75 Y-43,444
1095 C X-81,25 Y-43,444 DR+
1096 CC X-75 Y-43,444
1097 C X-80,933 Y-45,41 DR+
1098 CC X-80,735 Y-45,345
1099 C X-80,67 Y-45,543 DR+
1100 L X-75 Y-43,444 R0
1101 L Z+50 FMAX
1102 L X+25 Y+12,157 FMAX
1103 L Z+2 FMAX
1104 L Z-2,5 F800
1105 L X+17,917 Y+12,365 RL F1200
1106 L X+17,708
1107 CC X+17,708 Y+12,157
1108 C X+17,5 Y+12,157 DR+
1109 CC X+25 Y+12,157
1110 C X+32,5 Y+12,157 DR+
1111 CC X+25 Y+12,157
1112 C X+17,5 Y+12,157 DR+
1113 CC X+25 Y+12,157
1114 C X+17,765 Y+10,18 DR+
1115 CC X+17,966 Y+10,235
1116 C X+18,021 Y+10,034 DR+
1117 L X+25 Y+12,157 R0
1118 L Z+50 FMAX
1119 L X+75,007 Y-18,926 FMAX
1120 L Z+2 FMAX
1121 L Z-2,5 F800
1122 L X+70,424 Y-18,718 RL F1200
1123 L X+70,215
1124 CC X+70,215 Y-18,926
1125 C X+70,007 Y-18,926 DR+
1126 CC X+75,007 Y-18,926
1127 C X+80,007 Y-18,926 DR+
1128 CC X+75,007 Y-18,926
1129 C X+70,007 Y-18,926 DR+
1130 CC X+75,007 Y-18,926
1131 C X+70,402 Y-20,873 DR+
1132 CC X+70,593 Y-20,792
1133 C X+70,675 Y-20,984 DR+
1134 L X+75,007 Y-18,926 R0
1135 L Z+50 FMAX
1136 L X+125 Y-33,843 FMAX
1137 L Z+2 FMAX
1138 L Z-2,5 F800
1139 L X+117,917 Y-33,635 RL F1200
1140 L X+117,708
1141 CC X+117,708 Y-33,843
1142 C X+117,5 Y-33,843 DR+
1143 CC X+125 Y-33,843
1144 C X+132,5 Y-33,843 DR+
1145 CC X+125 Y-33,843
1146 C X+117,5 Y-33,843 DR+
1147 CC X+125 Y-33,843
1148 C X+117,765 Y-35,82 DR+
1149 CC X+117,966 Y-35,765
1150 C X+118,021 Y-35,966 DR+
1151 L X+125 Y-33,843 R0
1152 L Z+50 FMAX
1153 L X-125 Y-86 FMAX
1154 L Z+2 FMAX
1155 L Z-2,5 F800
1156 L X-128,083 Y-85,792 RL F1200
1157 L X-128,292
1158 CC X-128,292 Y-86
1159 C X-128,5 Y-86 DR+
1160 CC X-125 Y-86
1161 C X-121,5 Y-86 DR+
1162 CC X-125 Y-86
1163 C X-128,5 Y-86 DR+
1164 CC X-125 Y-86
1165 C X-127,944 Y-87,893 DR+
1166 CC X-127,769 Y-87,78
1167 C X-127,656 Y-87,955 DR+
1168 L X-125 Y-86 R0
1169 L Z+50 FMAX
1170 L X-200 Y-135 FMAX
1171 L Z+2 FMAX
1172 L Z-2,5 F800
1173 L X-203,433 Y-134,792 RL F1200
1174 L X-203,642
1175 CC X-203,642 Y-135
1176 C X-203,85 Y-135 DR+
1177 CC X-200 Y-135
1178 C X-196,15 Y-135 DR+
1179 CC X-200 Y-135
1180 C X-203,85 Y-135 DR+
1181 CC X-200 Y-135
1182 C X-203,342 Y-136,911 DR+
1183 CC X-203,161 Y-136,808
1184 C X-203,058 Y-136,989 DR+
1185 L X-200 Y-135 R0
1186 L Z+50 FMAX
1187 L X-175 Y+50 FMAX
1188 L Z+2 FMAX
1189 L Z-2,5 F800
1190 L X-188,068 Y+50,208 RL F1200
1191 L X-188,277
1192 CC X-188,277 Y+50
1193 C X-188,485 Y+50 DR+
1194 CC X-175 Y+50
1195 C X-161,515 Y+50 DR+
1196 CC X-175 Y+50
1197 C X-188,485 Y+50 DR+
1198 CC X-175 Y+50
1199 C X-188,337 Y+48,007 DR+
1200 CC X-188,131 Y+48,038
1201 C X-188,1 Y+47,832 DR+
1202 L X-175 Y+50 R0
1203 L Z+50 FMAX
1204 L X+105 Y-55,843 FMAX
1205 L Z+2 FMAX
1206 L Z-2,5 F800
1207 L X+102,917 Y-55,635 RL F1200
1208 L X+102,708
1209 CC X+102,708 Y-55,843
1210 C X+102,5 Y-55,843 DR+
1211 CC X+105 Y-55,843
1212 C X+107,5 Y-55,843 DR+
1213 CC X+105 Y-55,843
1214 C X+102,5 Y-55,843 DR+
1215 CC X+105 Y-55,843
1216 C X+103,258 Y-57,637 DR+
1217 CC X+103,404 Y-57,487
1218 C X+103,553 Y-57,633 DR+
1219 L X+105 Y-55,843 R0
1220 L Z+50 FMAX
1221 L X+45 Y+36,157 FMAX
1222 L Z+2 FMAX
1223 L Z-2,5 F800
1224 L X+42,917 Y+36,365 RL F1200
1225 L X+42,708
1226 CC X+42,708 Y+36,157
1227 C X+42,5 Y+36,157 DR+
1228 CC X+45 Y+36,157
1229 C X+47,5 Y+36,157 DR+
1230 CC X+45 Y+36,157
1231 C X+42,5 Y+36,157 DR+
1232 CC X+45 Y+36,157
1233 C X+43,258 Y+34,363 DR+
1234 CC X+43,404 Y+34,513
1235 C X+43,553 Y+34,367 DR+
1236 L X+45 Y+36,157 R0
1237 L Z+50 FMAX
1238 L X+75,002 Y+14,074 FMAX
1239 L Z+2 FMAX
1240 L Z-2,5 F800
1241 L X+70,419 Y+14,282 RL F1200
1242 L X+70,21
1243 CC X+70,21 Y+14,074
1244 C X+70,002 Y+14,074 DR+
1245 CC X+75,002 Y+14,074
1246 C X+80,002 Y+14,074 DR+
1247 CC X+75,002 Y+14,074
1248 C X+70,002 Y+14,074 DR+
1249 CC X+75,002 Y+14,074
1250 C X+70,397 Y+12,127 DR+
1251 CC X+70,589 Y+12,208
1252 C X+70,67 Y+12,016 DR+
1253 L X+75,002 Y+14,074 R0
1254 L Z+50 FMAX
1255 L X+75 Y-2,356 FMAX
1256 L Z+2 FMAX
1257 L Z-2,5 F800
1258 L X+70,817 Y-2,147 RL F1200
1259 L X+70,608
1260 CC X+70,608 Y-2,356
1261 C X+70,4 Y-2,356 DR+
1262 CC X+75 Y-2,356
1263 C X+79,6 Y-2,356 DR+
1264 CC X+75 Y-2,356
1265 C X+70,4 Y-2,356 DR+
1266 CC X+75 Y-2,356
1267 C X+70,828 Y-4,293 DR+
1268 CC X+71,017 Y-4,205
1269 C X+71,105 Y-4,394 DR+
1270 L X+75 Y-2,356 R0
1271 L Z+50 FMAX
1272 L Y-34,786 FMAX
1273 L Z+2 FMAX
1274 L Z-2,5 F800
1275 L X+72,417 Y-34,578 RL F1200
1276 L X+72,208
1277 CC X+72,208 Y-34,786
1278 C X+72 Y-34,786 DR+
1279 CC X+75 Y-34,786
1280 C X+78 Y-34,786 DR+
1281 CC X+75 Y-34,786
1282 C X+72 Y-34,786 DR+
1283 CC X+75 Y-34,786
1284 C X+72,642 Y-36,641 DR+
1285 CC X+72,806 Y-36,512
1286 C X+72,935 Y-36,676 DR+
1287 L X+75 Y-34,786 R0
1288 L Z+50 FMAX
1289 M5
1290 L Z-1 FMAX M91
1291 L Y-1 FMAX M91
1292 M30
1293 END PGM REP 2009 MM
