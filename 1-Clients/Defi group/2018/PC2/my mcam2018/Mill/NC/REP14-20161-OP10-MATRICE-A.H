0 BEGIN PGM REP14-20161-OP10-MATRICE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP14-20161-OP10-MATRICE-A
4 ; PROG-CN DU 22-10-19 A 08:02
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T22 FRAISE CARB DIA 8 VC 800 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
9 ; T24 P15322391 110KG SANS TROU FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-2*
15 ; T22 FRAISE CARB DIA 8 VC 800 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
16 ; CORRECTION AUCUNE
17 ; SUREP R 0. SUREP Z 0.
18 TOOL CALL 22 Z S3979 DR+0
19 TOOL DEF 24
20 L X-90 Y+40 FMAX M3
21 L Z+50 FMAX M8
22 L Z+2 FMAX
23 L Z-10,07 F297
24 L X-89,969 F836
25 CC X-90,063 Y+40
26 C X-90,156 Y+40 DR+
27 CC X-89,938 Y+40
28 C X-89,719 Y+40 DR+
29 CC X-90,063 Y+40
30 C X-90,406 Y+40 DR+
31 CC X-89,938 Y+40
32 C X-89,469 Y+40 DR+
33 CC X-90,063 Y+40
34 C X-90,656 Y+40 DR+
35 CC X-89,938 Y+40
36 C X-89,219 Y+40 DR+
37 CC X-90,063 Y+40
38 C X-90,906 Y+40 DR+
39 CC X-89,938 Y+40
40 C X-88,969 Y+40 DR+
41 CC X-90,063 Y+40
42 C X-91,156 Y+40 DR+
43 CC X-89,938 Y+40
44 C X-88,719 Y+40 DR+
45 CC X-90,063 Y+40
46 C X-91,406 Y+40 DR+
47 CC X-89,938 Y+40
48 C X-88,469 Y+40 DR+
49 CC X-90,063 Y+40
50 C X-91,656 Y+40 DR+
51 CC X-89,938 Y+40
52 C X-88,219 Y+40 DR+
53 CC X-90,063 Y+40
54 C X-91,906 Y+40 DR+
55 CC X-89,938 Y+40
56 C X-87,969 Y+40 DR+
57 CC X-90,063 Y+40
58 C X-92,156 Y+40 DR+
59 CC X-89,938 Y+40
60 C X-87,719 Y+40 DR+
61 CC X-90,063 Y+40
62 C X-92,406 Y+40 DR+
63 CC X-89,938 Y+40
64 C X-87,469 Y+40 DR+
65 CC X-90,063 Y+40
66 C X-92,656 Y+40 DR+
67 CC X-89,938 Y+40
68 C X-87,219 Y+40 DR+
69 CC X-90,063 Y+40
70 C X-92,906 Y+40 DR+
71 CC X-89,938 Y+40
72 C X-86,969 Y+40 DR+
73 CC X-90,063 Y+40
74 C X-93,156 Y+40 DR+
75 CC X-89,938 Y+40
76 C X-86,719 Y+40 DR+
77 CC X-90,063 Y+40
78 C X-93,406 Y+40 DR+
79 CC X-89,938 Y+40
80 C X-86,469 Y+40 DR+
81 CC X-90,063 Y+40
82 C X-93,656 Y+40 DR+
83 CC X-89,938 Y+40
84 C X-86,219 Y+40 DR+
85 CC X-90,063 Y+40
86 C X-93,906 Y+40 DR+
87 CC X-89,938 Y+40
88 C X-85,969 Y+40 DR+
89 CC X-90,063 Y+40
90 C X-94,156 Y+40 DR+
91 CC X-89,938 Y+40
92 C X-85,719 Y+40 DR+
93 CC X-90,063 Y+40
94 C X-94,406 Y+40 DR+
95 CC X-89,938 Y+40
96 C X-85,469 Y+40 DR+
97 CC X-90,063 Y+40
98 C X-94,656 Y+40 DR+
99 CC X-89,938 Y+40
100 C X-85,219 Y+40 DR+
101 CC X-90,063 Y+40
102 C X-94,906 Y+40 DR+
103 CC X-89,938 Y+40
104 C X-84,969 Y+40 DR+
105 CC X-90,063 Y+40
106 C X-95,156 Y+40 DR+
107 CC X-89,938 Y+40
108 C X-84,719 Y+40 DR+
109 CC X-90,063 Y+40
110 C X-95,406 Y+40 DR+
111 CC X-89,938 Y+40
112 C X-84,469 Y+40 DR+
113 CC X-90,063 Y+40
114 C X-95,656 Y+40 DR+
115 CC X-89,938 Y+40
116 C X-84,219 Y+40 DR+
117 CC X-90,063 Y+40
118 C X-95,906 Y+40 DR+
119 CC X-89,938 Y+40
120 C X-83,969 Y+40 DR+
121 CC X-90,063 Y+40
122 C X-96,156 Y+40 DR+
123 CC X-89,938 Y+40
124 C X-83,719 Y+40 DR+
125 CC X-90,063 Y+40
126 C X-96,406 Y+40 DR+
127 CC X-89,938 Y+40
128 C X-83,469 Y+40 DR+
129 CC X-90,063 Y+40
130 C X-96,656 Y+40 DR+
131 CC X-89,938 Y+40
132 C X-83,219 Y+40 DR+
133 CC X-90,063 Y+40
134 C X-96,906 Y+40 DR+
135 CC X-89,938 Y+40
136 C X-82,969 Y+40 DR+
137 CC X-90,063 Y+40
138 C X-97,156 Y+40 DR+
139 CC X-89,938 Y+40
140 C X-82,719 Y+40 DR+
141 CC X-90,063 Y+40
142 C X-97,406 Y+40 DR+
143 CC X-89,938 Y+40
144 C X-82,469 Y+40 DR+
145 CC X-90,063 Y+40
146 C X-97,656 Y+40 DR+
147 CC X-89,938 Y+40
148 C X-82,219 Y+40 DR+
149 CC X-90,063 Y+40
150 C X-97,906 Y+40 DR+
151 CC X-89,938 Y+40
152 C X-81,969 Y+40 DR+
153 CC X-90,063 Y+40
154 C X-98,156 Y+40 DR+
155 CC X-89,938 Y+40
156 C X-81,719 Y+40 DR+
157 CC X-90,063 Y+40
158 C X-98,406 Y+40 DR+
159 CC X-89,938 Y+40
160 C X-81,469 Y+40 DR+
161 CC X-90,063 Y+40
162 C X-98,656 Y+40 DR+
163 CC X-89,938 Y+40
164 C X-81,219 Y+40 DR+
165 CC X-90,063 Y+40
166 C X-98,906 Y+40 DR+
167 CC X-89,938 Y+40
168 C X-80,969 Y+40 DR+
169 CC X-90,063 Y+40
170 C X-99,156 Y+40 DR+
171 CC X-89,938 Y+40
172 C X-80,719 Y+40 DR+
173 CC X-90,063 Y+40
174 C X-99,406 Y+40 DR+
175 CC X-89,938 Y+40
176 C X-80,469 Y+40 DR+
177 CC X-90,063 Y+40
178 C X-99,656 Y+40 DR+
179 CC X-89,938 Y+40
180 C X-80,219 Y+40 DR+
181 CC X-90,063 Y+40
182 C X-99,906 Y+40 DR+
183 CC X-89,938 Y+40
184 C X-79,969 Y+40 DR+
185 CC X-90,063 Y+40
186 C X-100,156 Y+40 DR+
187 CC X-89,938 Y+40
188 C X-79,719 Y+40 DR+
189 CC X-90,063 Y+40
190 C X-100,406 Y+40 DR+
191 CC X-89,938 Y+40
192 C X-84,727 Y+30,92 DR+
193 CC X-90 Y+40
194 C X-90 Y+50,5 DR+
195 CC X-90 Y+40
196 C X-84,727 Y+30,92 DR+
197 L Z+50 FMAX
198 L X+40 Y+40 FMAX
199 L Z+2 FMAX
200 L Z-10,07 F297
201 L X+40,031 F836
202 CC X+39,937 Y+40
203 C X+39,844 Y+40 DR+
204 CC X+40,062 Y+40
205 C X+40,281 Y+40 DR+
206 CC X+39,937 Y+40
207 C X+39,594 Y+40 DR+
208 CC X+40,062 Y+40
209 C X+40,531 Y+40 DR+
210 CC X+39,937 Y+40
211 C X+39,344 Y+40 DR+
212 CC X+40,062 Y+40
213 C X+40,781 Y+40 DR+
214 CC X+39,937 Y+40
215 C X+39,094 Y+40 DR+
216 CC X+40,062 Y+40
217 C X+41,031 Y+40 DR+
218 CC X+39,937 Y+40
219 C X+38,844 Y+40 DR+
220 CC X+40,062 Y+40
221 C X+41,281 Y+40 DR+
222 CC X+39,937 Y+40
223 C X+38,594 Y+40 DR+
224 CC X+40,062 Y+40
225 C X+41,531 Y+40 DR+
226 CC X+39,937 Y+40
227 C X+38,344 Y+40 DR+
228 CC X+40,062 Y+40
229 C X+41,781 Y+40 DR+
230 CC X+39,937 Y+40
231 C X+38,094 Y+40 DR+
232 CC X+40,062 Y+40
233 C X+42,031 Y+40 DR+
234 CC X+39,937 Y+40
235 C X+37,844 Y+40 DR+
236 CC X+40,062 Y+40
237 C X+42,281 Y+40 DR+
238 CC X+39,937 Y+40
239 C X+37,594 Y+40 DR+
240 CC X+40,062 Y+40
241 C X+42,531 Y+40 DR+
242 CC X+39,937 Y+40
243 C X+37,344 Y+40 DR+
244 CC X+40,062 Y+40
245 C X+42,781 Y+40 DR+
246 CC X+39,937 Y+40
247 C X+37,094 Y+40 DR+
248 CC X+40,062 Y+40
249 C X+43,031 Y+40 DR+
250 CC X+39,937 Y+40
251 C X+36,844 Y+40 DR+
252 CC X+40,062 Y+40
253 C X+43,281 Y+40 DR+
254 CC X+39,937 Y+40
255 C X+36,594 Y+40 DR+
256 CC X+40,062 Y+40
257 C X+43,531 Y+40 DR+
258 CC X+39,937 Y+40
259 C X+36,344 Y+40 DR+
260 CC X+40,062 Y+40
261 C X+43,781 Y+40 DR+
262 CC X+39,937 Y+40
263 C X+36,094 Y+40 DR+
264 CC X+40,062 Y+40
265 C X+44,031 Y+40 DR+
266 CC X+39,937 Y+40
267 C X+35,844 Y+40 DR+
268 CC X+40,062 Y+40
269 C X+44,281 Y+40 DR+
270 CC X+39,937 Y+40
271 C X+35,594 Y+40 DR+
272 CC X+40,062 Y+40
273 C X+44,531 Y+40 DR+
274 CC X+39,937 Y+40
275 C X+35,344 Y+40 DR+
276 CC X+40,062 Y+40
277 C X+44,781 Y+40 DR+
278 CC X+39,937 Y+40
279 C X+35,094 Y+40 DR+
280 CC X+40,062 Y+40
281 C X+45,031 Y+40 DR+
282 CC X+39,937 Y+40
283 C X+34,844 Y+40 DR+
284 CC X+40,062 Y+40
285 C X+45,281 Y+40 DR+
286 CC X+39,937 Y+40
287 C X+34,594 Y+40 DR+
288 CC X+40,062 Y+40
289 C X+45,531 Y+40 DR+
290 CC X+39,937 Y+40
291 C X+34,344 Y+40 DR+
292 CC X+40,062 Y+40
293 C X+45,781 Y+40 DR+
294 CC X+39,937 Y+40
295 C X+34,094 Y+40 DR+
296 CC X+40,062 Y+40
297 C X+46,031 Y+40 DR+
298 CC X+39,937 Y+40
299 C X+33,844 Y+40 DR+
300 CC X+40,062 Y+40
301 C X+46,281 Y+40 DR+
302 CC X+39,937 Y+40
303 C X+33,594 Y+40 DR+
304 CC X+40,062 Y+40
305 C X+46,531 Y+40 DR+
306 CC X+39,937 Y+40
307 C X+33,344 Y+40 DR+
308 CC X+40,062 Y+40
309 C X+46,781 Y+40 DR+
310 CC X+39,937 Y+40
311 C X+33,094 Y+40 DR+
312 CC X+40,062 Y+40
313 C X+47,031 Y+40 DR+
314 CC X+39,937 Y+40
315 C X+32,844 Y+40 DR+
316 CC X+40,062 Y+40
317 C X+47,281 Y+40 DR+
318 CC X+39,937 Y+40
319 C X+32,594 Y+40 DR+
320 CC X+40,062 Y+40
321 C X+47,531 Y+40 DR+
322 CC X+39,937 Y+40
323 C X+32,344 Y+40 DR+
324 CC X+40,062 Y+40
325 C X+47,781 Y+40 DR+
326 CC X+39,937 Y+40
327 C X+32,094 Y+40 DR+
328 CC X+40,062 Y+40
329 C X+44,023 Y+33,085 DR+
330 CC X+40 Y+40
331 C X+40 Y+48 DR+
332 CC X+40 Y+40
333 C X+44,023 Y+33,085 DR+
334 L Z+50 FMAX
335 L X+110 Y+0 FMAX
336 L Z+2 FMAX
337 L Z-10,07 F297
338 L X+110,031 F836
339 CC X+109,937 Y+0
340 C X+109,844 Y+0 DR+
341 CC X+110,062 Y+0
342 C X+110,281 Y+0 DR+
343 CC X+109,937 Y+0
344 C X+109,594 Y+0 DR+
345 CC X+110,062 Y+0
346 C X+110,531 Y+0 DR+
347 CC X+109,937 Y+0
348 C X+109,344 Y+0 DR+
349 CC X+110,062 Y+0
350 C X+110,781 Y+0 DR+
351 CC X+109,937 Y+0
352 C X+109,094 Y+0 DR+
353 CC X+110,062 Y+0
354 C X+111,031 Y+0 DR+
355 CC X+109,937 Y+0
356 C X+108,844 Y+0 DR+
357 CC X+110,062 Y+0
358 C X+111,281 Y+0 DR+
359 CC X+109,937 Y+0
360 C X+108,594 Y+0 DR+
361 CC X+110,062 Y+0
362 C X+111,531 Y+0 DR+
363 CC X+109,937 Y+0
364 C X+108,344 Y+0 DR+
365 CC X+110,062 Y+0
366 C X+111,781 Y+0 DR+
367 CC X+109,937 Y+0
368 C X+108,094 Y+0 DR+
369 CC X+110,062 Y+0
370 C X+112,031 Y+0 DR+
371 CC X+109,937 Y+0
372 C X+107,844 Y+0 DR+
373 CC X+110,062 Y+0
374 C X+112,281 Y+0 DR+
375 CC X+109,937 Y+0
376 C X+107,594 Y+0 DR+
377 CC X+110,062 Y+0
378 C X+112,531 Y+0 DR+
379 CC X+109,937 Y+0
380 C X+107,344 Y+0 DR+
381 CC X+110,062 Y+0
382 C X+112,781 Y+0 DR+
383 CC X+109,937 Y+0
384 C X+107,094 Y+0 DR+
385 CC X+110,062 Y+0
386 C X+113,031 Y+0 DR+
387 CC X+109,937 Y+0
388 C X+106,844 Y+0 DR+
389 CC X+110,062 Y+0
390 C X+113,281 Y+0 DR+
391 CC X+109,937 Y+0
392 C X+106,594 Y+0 DR+
393 CC X+110,062 Y+0
394 C X+113,531 Y+0 DR+
395 CC X+109,937 Y+0
396 C X+106,344 Y+0 DR+
397 CC X+110,062 Y+0
398 C X+113,781 Y+0 DR+
399 CC X+109,937 Y+0
400 C X+106,094 Y+0 DR+
401 CC X+110,062 Y+0
402 C X+114,031 Y+0 DR+
403 CC X+109,937 Y+0
404 C X+105,844 Y+0 DR+
405 CC X+110,062 Y+0
406 C X+114,281 Y+0 DR+
407 CC X+109,937 Y+0
408 C X+105,594 Y+0 DR+
409 CC X+110,062 Y+0
410 C X+114,531 Y+0 DR+
411 CC X+109,937 Y+0
412 C X+105,344 Y+0 DR+
413 CC X+110,062 Y+0
414 C X+114,781 Y+0 DR+
415 CC X+109,937 Y+0
416 C X+105,094 Y+0 DR+
417 CC X+110,062 Y+0
418 C X+115,031 Y+0 DR+
419 CC X+109,937 Y+0
420 C X+104,844 Y+0 DR+
421 CC X+110,062 Y+0
422 C X+115,281 Y+0 DR+
423 CC X+109,937 Y+0
424 C X+104,594 Y+0 DR+
425 CC X+110,062 Y+0
426 C X+115,531 Y+0 DR+
427 CC X+109,937 Y+0
428 C X+104,344 Y+0 DR+
429 CC X+110,062 Y+0
430 C X+115,781 Y+0 DR+
431 CC X+109,937 Y+0
432 C X+104,094 Y+0 DR+
433 CC X+110,062 Y+0
434 C X+116,031 Y+0 DR+
435 CC X+109,937 Y+0
436 C X+103,844 Y+0 DR+
437 CC X+110,062 Y+0
438 C X+116,281 Y+0 DR+
439 CC X+109,937 Y+0
440 C X+103,594 Y+0 DR+
441 CC X+110,062 Y+0
442 C X+116,531 Y+0 DR+
443 CC X+109,937 Y+0
444 C X+103,344 Y+0 DR+
445 CC X+110,062 Y+0
446 C X+116,781 Y+0 DR+
447 CC X+109,937 Y+0
448 C X+103,094 Y+0 DR+
449 CC X+110,062 Y+0
450 C X+117,031 Y+0 DR+
451 CC X+109,937 Y+0
452 C X+102,844 Y+0 DR+
453 CC X+110,062 Y+0
454 C X+117,281 Y+0 DR+
455 CC X+109,937 Y+0
456 C X+102,594 Y+0 DR+
457 CC X+110,062 Y+0
458 C X+117,531 Y+0 DR+
459 CC X+109,937 Y+0
460 C X+102,344 Y+0 DR+
461 CC X+110,062 Y+0
462 C X+117,781 Y+0 DR+
463 CC X+109,937 Y+0
464 C X+102,094 Y+0 DR+
465 CC X+110,062 Y+0
466 C X+118,031 Y+0 DR+
467 CC X+109,937 Y+0
468 C X+101,844 Y+0 DR+
469 CC X+110,062 Y+0
470 C X+118,281 Y+0 DR+
471 CC X+109,937 Y+0
472 C X+101,594 Y+0 DR+
473 CC X+110,062 Y+0
474 C X+118,531 Y+0 DR+
475 CC X+109,937 Y+0
476 C X+101,344 Y+0 DR+
477 CC X+110,062 Y+0
478 C X+118,781 Y+0 DR+
479 CC X+109,937 Y+0
480 C X+101,094 Y+0 DR+
481 CC X+110,062 Y+0
482 C X+119,031 Y+0 DR+
483 CC X+109,937 Y+0
484 C X+100,844 Y+0 DR+
485 CC X+110,062 Y+0
486 C X+119,281 Y+0 DR+
487 CC X+109,937 Y+0
488 C X+100,594 Y+0 DR+
489 CC X+110,062 Y+0
490 C X+119,531 Y+0 DR+
491 CC X+109,937 Y+0
492 C X+100,344 Y+0 DR+
493 CC X+110,062 Y+0
494 C X+119,781 Y+0 DR+
495 CC X+109,937 Y+0
496 C X+100,094 Y+0 DR+
497 CC X+110,062 Y+0
498 C X+120,031 Y+0 DR+
499 CC X+109,937 Y+0
500 C X+99,844 Y+0 DR+
501 CC X+110,062 Y+0
502 C X+120,281 Y+0 DR+
503 CC X+109,937 Y+0
504 C X+99,594 Y+0 DR+
505 CC X+110,062 Y+0
506 C X+115,273 Y-9,08 DR+
507 CC X+110 Y+0
508 C X+110 Y+10,5 DR+
509 CC X+110 Y+0
510 C X+115,273 Y-9,08 DR+
511 L Z+50 FMAX
512 TOOL CALL 22 Z S3979 DR-4
513 L X-90 Y+40 Z+50 FMAX
514 L Z+2 FMAX
515 L Z-10,07 F297
516 L X-90,8 Y+31,1 RL F836
517 L Y+30,3
518 CC X-90 Y+30,3
519 C X-90 Y+29,5 DR+
520 CC X-90 Y+40
521 C X-90 Y+50,5 DR+
522 CC X-90 Y+40
523 C X-90 Y+29,5 DR+
524 CC X-90 Y+40
525 C X-88,012 Y+29,69 DR+
526 CC X-90 Y+40
527 C X-90 Y+50,5 DR+
528 CC X-90 Y+40
529 C X-90 Y+29,5 DR+
530 CC X-90 Y+40
531 C X-88,012 Y+29,69 DR+
532 CC X-88,164 Y+30,475
533 C X-87,378 Y+30,627 DR+
534 L X-87,529 Y+31,412
535 L X-90 Y+40 R0
536 L Z+50 FMAX
537 L X+40 FMAX
538 L Z+2 FMAX
539 L Z-10,07 F297
540 L X+39,2 Y+33,6 RL F836
541 L Y+32,8
542 CC X+40 Y+32,8
543 C X+40 Y+32 DR+
544 CC X+40 Y+40
545 C X+40 Y+48 DR+
546 CC X+40 Y+40
547 C X+40 Y+32 DR+
548 CC X+40 Y+40
549 C X+41,979 Y+32,249 DR+
550 CC X+40 Y+40
551 C X+40 Y+48 DR+
552 CC X+40 Y+40
553 C X+40 Y+32 DR+
554 CC X+40 Y+40
555 C X+41,979 Y+32,249 DR+
556 CC X+41,781 Y+33,024
557 C X+42,556 Y+33,222 DR+
558 L X+42,359 Y+33,997
559 L X+40 Y+40 R0
560 L Z+50 FMAX
561 L X+110 Y+0 FMAX
562 L Z+2 FMAX
563 L Z-10,07 F297
564 L X+109,2 Y-8,9 RL F836
565 L Y-9,7
566 CC X+110 Y-9,7
567 C X+110 Y-10,5 DR+
568 CC X+110 Y+0
569 C X+110 Y+10,5 DR+
570 CC X+110 Y+0
571 C X+110 Y-10,5 DR+
572 CC X+110 Y+0
573 C X+111,988 Y-10,31 DR+
574 CC X+110 Y+0
575 C X+110 Y+10,5 DR+
576 CC X+110 Y+0
577 C X+110 Y-10,5 DR+
578 CC X+110 Y+0
579 C X+111,988 Y-10,31 DR+
580 CC X+111,836 Y-9,525
581 C X+112,622 Y-9,373 DR+
582 L X+112,471 Y-8,588
583 L X+110 Y+0 R0
584 L Z+50 FMAX
585 M9
586 M5
587 L Z-1 FMAX M91
588 ; T24 P15322391 110KG SANS TROU FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
589 ; CORRECTION AUCUNE
590 ; SUREP R 0.1 SUREP Z 0.
591 TOOL CALL 24 Z S3581 DR+0
592 TOOL DEF 22
593 L X-53,611 Y-57,093 FMAX M3
594 L Z+50 FMAX M8
595 L Z+2 FMAX
596 L Z+0,5 F573
597 CC X-57,581 Y-57,581
598 CP IPA-180 Z+0,061 DR-
599 CC X-57,581 Y-57,581
600 CP IPA-180 Z-0,378 DR-
601 CC X-57,581 Y-57,581
602 CP IPA-180 Z-0,817 DR-
603 CC X-57,581 Y-57,581
604 CP IPA-180 Z-1,255 DR-
605 CC X-57,581 Y-57,581
606 CP IPA-180 Z-1,694 DR-
607 CC X-57,581 Y-57,581
608 CP IPA-180 Z-2,133 DR-
609 CC X-57,581 Y-57,581
610 CP IPA-180 Z-2,572 DR-
611 CC X-57,581 Y-57,581
612 CP IPA-180 Z-3,011 DR-
613 CC X-57,581 Y-57,581
614 CP IPA-180 Z-3,45 DR-
615 CC X-57,581 Y-57,581
616 CP IPA-180 Z-3,888 DR-
617 CC X-57,581 Y-57,581
618 CP IPA-180 Z-4,327 DR-
619 CC X-57,581 Y-57,581
620 CP IPA-180 Z-4,766 DR-
621 CC X-57,581 Y-57,581
622 CP IPA-180 Z-5,205 DR-
623 CC X-57,581 Y-57,581
624 CP IPA-180 Z-5,644 DR-
625 CC X-57,581 Y-57,581
626 CP IPA-180 Z-6,082 DR-
627 CC X-57,581 Y-57,581
628 CP IPA-180 Z-6,521 DR-
629 CC X-57,581 Y-57,581
630 CP IPA-180 Z-6,96 DR-
631 CC X-57,581 Y-57,581
632 CP IPA-180 Z-7,399 DR-
633 CC X-57,581 Y-57,581
634 CP IPA-180 Z-7,838 DR-
635 CC X-57,581 Y-57,581
636 CP IPA-180 Z-8,277 DR-
637 CC X-57,581 Y-57,581
638 CP IPA-180 Z-8,715 DR-
639 CC X-57,581 Y-57,581
640 CP IPA-180 Z-9,154 DR-
641 CC X-57,581 Y-57,581
642 CP IPA-180 Z-9,593 DR-
643 CC X-57,581 Y-57,581
644 CP IPA-180 Z-10,032 DR-
645 CC X-57,581 Y-57,581
646 CP IPA-7,452 Z-10,05 DR-
647 L X-56,976 Y-57,585
648 CC X-58,776 Y-57,585
649 C X-60,576 Y-57,585 DR+
650 CC X-56,376 Y-57,585
651 C X-52,176 Y-57,585 DR+
652 CC X-58,776 Y-57,585
653 C X-65,376 Y-57,585 DR+
654 CC X-56,376 Y-57,585
655 C X-56,817 Y-66,575 DR+
656 L X-47,385 Y-57,143
657 CC X-58,776 Y-57,585
658 C X-47,999 Y-53,869 DR+
659 L X-50,934 Y-50,934
660 CC X-57,581 Y-57,581
661 C X-64,228 Y-64,228 DR+
662 L X-59,349 Y-69,107
663 L X-46,055 Y-55,813
664 L X-47,999 Y-53,869
665 L Z+10 FMAX
666 L X-57,581 Y-57,581 FMAX
667 TOOL CALL 24 Z S3581 DR-4
668 L X-57,581 Y-57,581 Z+2 FMAX
669 L Z-10,05
670 L X-63,593 Y-62,555 RL
671 L X-64,181 Y-63,097
672 CC X-63,639 Y-63,686
673 C X-64,228 Y-64,228 DR+
674 L X-59,349 Y-69,107
675 L X-46,055 Y-55,813
676 L X-50,934 Y-50,934
677 CC X-57,581 Y-57,581
678 C X-64,228 Y-64,228 DR+
679 L X-62,813 Y-65,642
680 CC X-62,248 Y-65,076
681 C X-61,682 Y-65,642 DR+
682 L X-61,116 Y-65,076
683 L X-57,581 Y-57,581 R0
684 L Z+50 FMAX
685 M9
686 M5
687 L Z-1 FMAX M91
688 ; T22 FRAISE CARB DIA 8 VC 800 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
689 ; CORRECTION USURE GAUCHE
690 ; SUREP R 0.05 SUREP Z 0.
691 TOOL CALL 22 Z S3979 DR-4
692 TOOL DEF 1
693 L X-57,581 Y-57,581 FMAX M3
694 L Z+50 FMAX M8
695 L Z+2 FMAX
696 L Z-10,07 F297
697 L X-63,628 Y-62,59 RL F836
698 L X-64,216 Y-63,132
699 CC X-63,674 Y-63,721
700 C X-64,263 Y-64,263 DR+
701 L X-59,349 Y-69,177
702 L X-45,984 Y-55,813
703 L X-50,899 Y-50,899
704 CC X-57,581 Y-57,581
705 C X-64,263 Y-64,263 DR+
706 L X-62,849 Y-65,677
707 CC X-62,283 Y-65,111
708 C X-61,717 Y-65,677 DR+
709 L X-61,152 Y-65,111
710 L X-57,581 Y-57,581 R0
711 L Z+50 FMAX
712 M9
713 M5
714 L Z-1 FMAX M91
715 M00
716 ; T22 FRAISE CARB DIA 8 VC 800 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
717 ; CORRECTION USURE GAUCHE
718 ; SUREP R 0. SUREP Z 0.
719 TOOL CALL 22 Z S3979 DR-4
720 TOOL DEF 1
721 L X-57,581 Y-57,581 FMAX M3
722 L Z+50 FMAX M8
723 L Z+2 FMAX
724 L Z-10,07 F297
725 L X-63,663 Y-62,626 RL F836
726 L X-64,252 Y-63,168
727 CC X-63,71 Y-63,756
728 C X-64,298 Y-64,298 DR+
729 L X-59,349 Y-69,248
730 L X-45,913 Y-55,813
731 L X-50,863 Y-50,863
732 CC X-57,581 Y-57,581
733 C X-64,298 Y-64,298 DR+
734 L X-62,884 Y-65,712
735 CC X-62,318 Y-65,147
736 C X-61,753 Y-65,712 DR+
737 L X-61,187 Y-65,147
738 L X-57,581 Y-57,581 R0
739 L Z+50 FMAX
740 M9
741 M5
742 L Z-1 FMAX M91
743 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
744 ; CORRECTION USURE GAUCHE
745 ; SUREP R 0. SUREP Z 0.
746 TOOL CALL 1 Z S6000 DR-2,5
747 TOOL DEF 22
748 L X-135,5 Y+46 FMAX M3
749 L Z+50 FMAX
750 L Z+2 FMAX
751 L Z-2,3 F800
752 L X-113,64 Y+65,441 RL F1200
753 L X-113,573 Y+65,937
754 CC X-114,068 Y+66,005
755 C X-114 Y+66,5 DR+
756 L X-157
757 CC X-157 Y+64
758 C X-159,5 Y+64 DR+
759 L Y+28
760 CC X-157 Y+28
761 C X-157 Y+25,5 DR+
762 L X-119
763 CC X-119 Y+33
764 C X-111,5 Y+33 DR+
765 L Y+64
766 CC X-114 Y+64
767 C X-114 Y+66,5 DR+
768 L X-116
769 CC X-116 Y+66
770 C X-116,5 Y+66 DR+
771 L Y+65,5
772 L X-135,5 Y+46 R0
773 L Z+50 FMAX
774 L X-90 Y+40 FMAX
775 L Z+2 FMAX
776 L Z-2,3 F800
777 L X-90,5 Y+29 RL F1200
778 L Y+28,5
779 CC X-90 Y+28,5
780 C X-90 Y+28 DR+
781 CC X-90 Y+40
782 C X-90 Y+52 DR+
783 CC X-90 Y+40
784 C X-90 Y+28 DR+
785 CC X-90 Y+40
786 C X-88,009 Y+28,166 DR+
787 CC X-88,092 Y+28,659
788 C X-87,599 Y+28,742 DR+
789 L X-87,682 Y+29,235
790 L X-90 Y+40 R0
791 L Z+50 FMAX
792 L X+40 FMAX
793 L Z+2 FMAX
794 L Z-2,3 F800
795 L X+39,5 Y+31,5 RL F1200
796 L Y+31
797 CC X+40 Y+31
798 C X+40 Y+30,5 DR+
799 CC X+40 Y+40
800 C X+40 Y+49,5 DR+
801 CC X+40 Y+40
802 C X+40 Y+30,5 DR+
803 CC X+40 Y+40
804 C X+41,985 Y+30,71 DR+
805 CC X+41,881 Y+31,199
806 C X+42,37 Y+31,303 DR+
807 L X+42,265 Y+31,792
808 L X+40 Y+40 R0
809 L Z+50 FMAX
810 L X+110 Y+0 FMAX
811 L Z+2 FMAX
812 L Z-2,3 F800
813 L X+109,5 Y-11 RL F1200
814 L Y-11,5
815 CC X+110 Y-11,5
816 C X+110 Y-12 DR+
817 CC X+110 Y+0
818 C X+110 Y+12 DR+
819 CC X+110 Y+0
820 C X+110 Y-12 DR+
821 CC X+110 Y+0
822 C X+111,991 Y-11,834 DR+
823 CC X+111,908 Y-11,341
824 C X+112,401 Y-11,258 DR+
825 L X+112,318 Y-10,765
826 L X+110 Y+0 R0
827 L Z+50 FMAX
828 L X-57,581 Y-57,581 FMAX
829 L Z+2 FMAX
830 L Z-2,3 F800
831 L X-64,962 Y-64,314 RL F1200
832 L X-65,33 Y-64,652
833 CC X-64,991 Y-65,02
834 C X-65,359 Y-65,359 DR+
835 L X-60,409 Y-70,309
836 CC X-59,349 Y-69,248
837 C X-58,288 Y-70,309 DR+
838 L X-44,855 Y-56,875
839 CC X-45,913 Y-55,813
840 C X-44,856 Y-54,749 DR+
841 L X-49,803 Y-49,803
842 CC X-57,581 Y-57,581
843 C X-65,359 Y-65,359 DR+
844 L X-63,945 Y-66,773
845 CC X-63,591 Y-66,42
846 C X-63,238 Y-66,773 DR+
847 L X-62,884 Y-66,42
848 L X-57,581 Y-57,581 R0
849 L Z+50 FMAX
850 M5
851 L Z-1 FMAX M91
852 L Y-1 FMAX M91
853 M30
854 END PGM REP14-20161-OP10-MATRICE-A MM
