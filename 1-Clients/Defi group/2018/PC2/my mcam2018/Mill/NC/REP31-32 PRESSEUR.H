0 BEGIN PGM REP31-32 PRESSEUR MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP31-32 PRESSEUR SYM
4 ; PROG-CN DU 24-02-21 A 13:48
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T23 P15323610 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; T14 DIA 16 FINITION  LONG 53 AIR FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
11 ; T9 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
12 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
13 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
14 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
15 ; FIN DE LISTE DES OUTILS
16 L R0 FMAX
17 L Z-1 FMAX M91
18 ; *GROUPE D'USINAGE-2*
19 ; T23 P15323610 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
20 ; CORRECTION AUCUNE
21 ; SUREP R 0. SUREP Z 0.
22 TOOL CALL 23 Z S1790 DR+0
23 TOOL DEF 1
24 L X+136,027 Y+54,691 FMAX M3
25 L Z+50 FMAX M25
26 L Z+2 FMAX
27 L Z+0,5 F358
28 CC X+132,11 Y+55,5
29 CP IPA-180 Z-0,378 DR-
30 CC X+132,11 Y+55,5
31 CP IPA-180 Z-1,257 DR-
32 CC X+132,11 Y+55,5
33 CP IPA-180 Z-2,136 DR-
34 CC X+132,11 Y+55,5
35 CP IPA-180 Z-3,015 DR-
36 CC X+132,11 Y+55,5
37 CP IPA-180 Z-3,894 DR-
38 CC X+132,11 Y+55,5
39 CP IPA-180 Z-4,772 DR-
40 CC X+132,11 Y+55,5
41 CP IPA-180 Z-5,651 DR-
42 CC X+132,11 Y+55,5
43 CP IPA-180 Z-6,53 DR-
44 CC X+132,11 Y+55,5
45 CP IPA-180 Z-7,409 DR-
46 CC X+132,11 Y+55,5
47 CP IPA-180 Z-8,287 DR-
48 CC X+132,11 Y+55,5
49 CP IPA-180 Z-9,166 DR-
50 CC X+132,11 Y+55,5
51 CP IPA-180 Z-10,045 DR-
52 CC X+132,11 Y+55,5
53 CP IPA-180 Z-10,924 DR-
54 CC X+132,11 Y+55,5
55 CP IPA-180 Z-11,802 DR-
56 CC X+132,11 Y+55,5
57 CP IPA-180 Z-12,681 DR-
58 CC X+132,11 Y+55,5
59 CP IPA-180 Z-13,56 DR-
60 CC X+132,11 Y+55,5
61 CP IPA-180 Z-14,439 DR-
62 CC X+132,11 Y+55,5
63 CP IPA-180 Z-15,317 DR-
64 CC X+132,11 Y+55,5
65 CP IPA-180 Z-16,196 DR-
66 CC X+132,11 Y+55,5
67 CP IPA-180 Z-17,075 DR-
68 CC X+132,11 Y+55,5
69 CP IPA-348,33 Z-18,775 DR-
70 L X+132,585 Y+55,5
71 CC X+131,16 Y+55,5
72 C X+129,735 Y+55,5 DR+
73 CC X+133,06 Y+55,5
74 C X+136,385 Y+55,5 DR+
75 CC X+131,16 Y+55,5
76 C X+132,846 Y+60,445 DR+
77 CC X+132,11 Y+55,5
78 C X+137,11 Y+55,5 DR+
79 CC X+132,11 Y+55,5
80 C X+132,846 Y+60,445 DR+
81 L Z+10 FMAX
82 L X+136,027 Y+54,691 FMAX
83 L Z-16,775 FMAX
84 L Z-18,275
85 CC X+132,11 Y+55,5
86 CP IPA-180 Z-19,154 DR-
87 CC X+132,11 Y+55,5
88 CP IPA-180 Z-20,032 DR-
89 CC X+132,11 Y+55,5
90 CP IPA-180 Z-20,911 DR-
91 CC X+132,11 Y+55,5
92 CP IPA-180 Z-21,79 DR-
93 CC X+132,11 Y+55,5
94 CP IPA-180 Z-22,669 DR-
95 CC X+132,11 Y+55,5
96 CP IPA-180 Z-23,547 DR-
97 CC X+132,11 Y+55,5
98 CP IPA-180 Z-24,426 DR-
99 CC X+132,11 Y+55,5
100 CP IPA-180 Z-25,305 DR-
101 CC X+132,11 Y+55,5
102 CP IPA-180 Z-26,184 DR-
103 CC X+132,11 Y+55,5
104 CP IPA-180 Z-27,062 DR-
105 CC X+132,11 Y+55,5
106 CP IPA-180 Z-27,941 DR-
107 CC X+132,11 Y+55,5
108 CP IPA-180 Z-28,82 DR-
109 CC X+132,11 Y+55,5
110 CP IPA-180 Z-29,699 DR-
111 CC X+132,11 Y+55,5
112 CP IPA-180 Z-30,577 DR-
113 CC X+132,11 Y+55,5
114 CP IPA-180 Z-31,456 DR-
115 CC X+132,11 Y+55,5
116 CP IPA-180 Z-32,335 DR-
117 CC X+132,11 Y+55,5
118 CP IPA-180 Z-33,213 DR-
119 CC X+132,11 Y+55,5
120 CP IPA-180 Z-34,092 DR-
121 CC X+132,11 Y+55,5
122 CP IPA-180 Z-34,971 DR-
123 CC X+132,11 Y+55,5
124 CP IPA-180 Z-35,85 DR-
125 CC X+132,11 Y+55,5
126 CP IPA-348,33 Z-37,55 DR-
127 L X+132,585 Y+55,5
128 CC X+131,16 Y+55,5
129 C X+129,735 Y+55,5 DR+
130 CC X+133,06 Y+55,5
131 C X+136,385 Y+55,5 DR+
132 CC X+131,16 Y+55,5
133 C X+132,846 Y+60,445 DR+
134 CC X+132,11 Y+55,5
135 C X+137,11 Y+55,5 DR+
136 CC X+132,11 Y+55,5
137 C X+132,846 Y+60,445 DR+
138 L Z+10 FMAX
139 L X+136,027 Y+54,691 FMAX
140 L Z-18,775 FMAX
141 CC X+132,11 Y+55,5
142 CP IPA-180 Z-19,654 DR-
143 CC X+132,11 Y+55,5
144 CP IPA-180 Z-20,532 DR-
145 CC X+132,11 Y+55,5
146 CP IPA-180 Z-21,411 DR-
147 CC X+132,11 Y+55,5
148 CP IPA-180 Z-22,29 DR-
149 CC X+132,11 Y+55,5
150 CP IPA-180 Z-23,169 DR-
151 CC X+132,11 Y+55,5
152 CP IPA-180 Z-24,047 DR-
153 CC X+132,11 Y+55,5
154 CP IPA-180 Z-24,926 DR-
155 CC X+132,11 Y+55,5
156 CP IPA-180 Z-25,805 DR-
157 CC X+132,11 Y+55,5
158 CP IPA-180 Z-26,684 DR-
159 CC X+132,11 Y+55,5
160 CP IPA-180 Z-27,562 DR-
161 CC X+132,11 Y+55,5
162 CP IPA-180 Z-28,441 DR-
163 CC X+132,11 Y+55,5
164 CP IPA-180 Z-29,32 DR-
165 CC X+132,11 Y+55,5
166 CP IPA-180 Z-30,199 DR-
167 CC X+132,11 Y+55,5
168 CP IPA-180 Z-31,077 DR-
169 CC X+132,11 Y+55,5
170 CP IPA-180 Z-31,956 DR-
171 CC X+132,11 Y+55,5
172 CP IPA-180 Z-32,835 DR-
173 CC X+132,11 Y+55,5
174 CP IPA-180 Z-33,713 DR-
175 CC X+132,11 Y+55,5
176 CP IPA-180 Z-34,592 DR-
177 CC X+132,11 Y+55,5
178 CP IPA-180 Z-35,471 DR-
179 CC X+132,11 Y+55,5
180 CP IPA-180 Z-36,35 DR-
181 CC X+132,11 Y+55,5
182 CP IPA-348,33 Z-38,05 DR-
183 L X+132,585 Y+55,5
184 CC X+131,16 Y+55,5
185 C X+129,735 Y+55,5 DR+
186 CC X+133,06 Y+55,5
187 C X+136,385 Y+55,5 DR+
188 CC X+131,16 Y+55,5
189 C X+132,846 Y+60,445 DR+
190 CC X+132,11 Y+55,5
191 C X+137,11 Y+55,5 DR+
192 CC X+132,11 Y+55,5
193 C X+132,846 Y+60,445 DR+
194 L Z+50 FMAX
195 L X-128,973 Y+54,691 FMAX
196 L Z+2 FMAX
197 L Z+0,5
198 CC X-132,89 Y+55,5
199 CP IPA-180 Z-0,378 DR-
200 CC X-132,89 Y+55,5
201 CP IPA-180 Z-1,257 DR-
202 CC X-132,89 Y+55,5
203 CP IPA-180 Z-2,136 DR-
204 CC X-132,89 Y+55,5
205 CP IPA-180 Z-3,015 DR-
206 CC X-132,89 Y+55,5
207 CP IPA-180 Z-3,894 DR-
208 CC X-132,89 Y+55,5
209 CP IPA-180 Z-4,772 DR-
210 CC X-132,89 Y+55,5
211 CP IPA-180 Z-5,651 DR-
212 CC X-132,89 Y+55,5
213 CP IPA-180 Z-6,53 DR-
214 CC X-132,89 Y+55,5
215 CP IPA-180 Z-7,409 DR-
216 CC X-132,89 Y+55,5
217 CP IPA-180 Z-8,287 DR-
218 CC X-132,89 Y+55,5
219 CP IPA-180 Z-9,166 DR-
220 CC X-132,89 Y+55,5
221 CP IPA-180 Z-10,045 DR-
222 CC X-132,89 Y+55,5
223 CP IPA-180 Z-10,924 DR-
224 CC X-132,89 Y+55,5
225 CP IPA-180 Z-11,802 DR-
226 CC X-132,89 Y+55,5
227 CP IPA-180 Z-12,681 DR-
228 CC X-132,89 Y+55,5
229 CP IPA-180 Z-13,56 DR-
230 CC X-132,89 Y+55,5
231 CP IPA-180 Z-14,439 DR-
232 CC X-132,89 Y+55,5
233 CP IPA-180 Z-15,317 DR-
234 CC X-132,89 Y+55,5
235 CP IPA-180 Z-16,196 DR-
236 CC X-132,89 Y+55,5
237 CP IPA-180 Z-17,075 DR-
238 CC X-132,89 Y+55,5
239 CP IPA-348,33 Z-18,775 DR-
240 L X-132,415 Y+55,5
241 CC X-133,84 Y+55,5
242 C X-135,265 Y+55,5 DR+
243 CC X-131,94 Y+55,5
244 C X-128,615 Y+55,5 DR+
245 CC X-133,84 Y+55,5
246 C X-132,154 Y+60,445 DR+
247 CC X-132,89 Y+55,5
248 C X-127,89 Y+55,5 DR+
249 CC X-132,89 Y+55,5
250 C X-132,154 Y+60,445 DR+
251 L Z+10 FMAX
252 L X-128,973 Y+54,691 FMAX
253 L Z-16,775 FMAX
254 L Z-18,275
255 CC X-132,89 Y+55,5
256 CP IPA-180 Z-19,154 DR-
257 CC X-132,89 Y+55,5
258 CP IPA-180 Z-20,032 DR-
259 CC X-132,89 Y+55,5
260 CP IPA-180 Z-20,911 DR-
261 CC X-132,89 Y+55,5
262 CP IPA-180 Z-21,79 DR-
263 CC X-132,89 Y+55,5
264 CP IPA-180 Z-22,669 DR-
265 CC X-132,89 Y+55,5
266 CP IPA-180 Z-23,547 DR-
267 CC X-132,89 Y+55,5
268 CP IPA-180 Z-24,426 DR-
269 CC X-132,89 Y+55,5
270 CP IPA-180 Z-25,305 DR-
271 CC X-132,89 Y+55,5
272 CP IPA-180 Z-26,184 DR-
273 CC X-132,89 Y+55,5
274 CP IPA-180 Z-27,062 DR-
275 CC X-132,89 Y+55,5
276 CP IPA-180 Z-27,941 DR-
277 CC X-132,89 Y+55,5
278 CP IPA-180 Z-28,82 DR-
279 CC X-132,89 Y+55,5
280 CP IPA-180 Z-29,699 DR-
281 CC X-132,89 Y+55,5
282 CP IPA-180 Z-30,577 DR-
283 CC X-132,89 Y+55,5
284 CP IPA-180 Z-31,456 DR-
285 CC X-132,89 Y+55,5
286 CP IPA-180 Z-32,335 DR-
287 CC X-132,89 Y+55,5
288 CP IPA-180 Z-33,213 DR-
289 CC X-132,89 Y+55,5
290 CP IPA-180 Z-34,092 DR-
291 CC X-132,89 Y+55,5
292 CP IPA-180 Z-34,971 DR-
293 CC X-132,89 Y+55,5
294 CP IPA-180 Z-35,85 DR-
295 CC X-132,89 Y+55,5
296 CP IPA-348,33 Z-37,55 DR-
297 L X-132,415 Y+55,5
298 CC X-133,84 Y+55,5
299 C X-135,265 Y+55,5 DR+
300 CC X-131,94 Y+55,5
301 C X-128,615 Y+55,5 DR+
302 CC X-133,84 Y+55,5
303 C X-132,154 Y+60,445 DR+
304 CC X-132,89 Y+55,5
305 C X-127,89 Y+55,5 DR+
306 CC X-132,89 Y+55,5
307 C X-132,154 Y+60,445 DR+
308 L Z+10 FMAX
309 L X-128,973 Y+54,691 FMAX
310 L Z-18,775 FMAX
311 CC X-132,89 Y+55,5
312 CP IPA-180 Z-19,654 DR-
313 CC X-132,89 Y+55,5
314 CP IPA-180 Z-20,532 DR-
315 CC X-132,89 Y+55,5
316 CP IPA-180 Z-21,411 DR-
317 CC X-132,89 Y+55,5
318 CP IPA-180 Z-22,29 DR-
319 CC X-132,89 Y+55,5
320 CP IPA-180 Z-23,169 DR-
321 CC X-132,89 Y+55,5
322 CP IPA-180 Z-24,047 DR-
323 CC X-132,89 Y+55,5
324 CP IPA-180 Z-24,926 DR-
325 CC X-132,89 Y+55,5
326 CP IPA-180 Z-25,805 DR-
327 CC X-132,89 Y+55,5
328 CP IPA-180 Z-26,684 DR-
329 CC X-132,89 Y+55,5
330 CP IPA-180 Z-27,562 DR-
331 CC X-132,89 Y+55,5
332 CP IPA-180 Z-28,441 DR-
333 CC X-132,89 Y+55,5
334 CP IPA-180 Z-29,32 DR-
335 CC X-132,89 Y+55,5
336 CP IPA-180 Z-30,199 DR-
337 CC X-132,89 Y+55,5
338 CP IPA-180 Z-31,077 DR-
339 CC X-132,89 Y+55,5
340 CP IPA-180 Z-31,956 DR-
341 CC X-132,89 Y+55,5
342 CP IPA-180 Z-32,835 DR-
343 CC X-132,89 Y+55,5
344 CP IPA-180 Z-33,713 DR-
345 CC X-132,89 Y+55,5
346 CP IPA-180 Z-34,592 DR-
347 CC X-132,89 Y+55,5
348 CP IPA-180 Z-35,471 DR-
349 CC X-132,89 Y+55,5
350 CP IPA-180 Z-36,35 DR-
351 CC X-132,89 Y+55,5
352 CP IPA-348,33 Z-38,05 DR-
353 L X-132,415 Y+55,5
354 CC X-133,84 Y+55,5
355 C X-135,265 Y+55,5 DR+
356 CC X-131,94 Y+55,5
357 C X-128,615 Y+55,5 DR+
358 CC X-133,84 Y+55,5
359 C X-132,154 Y+60,445 DR+
360 CC X-132,89 Y+55,5
361 C X-127,89 Y+55,5 DR+
362 CC X-132,89 Y+55,5
363 C X-132,154 Y+60,445 DR+
364 L Z+50 FMAX
365 L X-128,973 Y-50,309 FMAX
366 L Z+2 FMAX
367 L Z+0,5
368 CC X-132,89 Y-49,5
369 CP IPA-180 Z-0,378 DR-
370 CC X-132,89 Y-49,5
371 CP IPA-180 Z-1,257 DR-
372 CC X-132,89 Y-49,5
373 CP IPA-180 Z-2,136 DR-
374 CC X-132,89 Y-49,5
375 CP IPA-180 Z-3,015 DR-
376 CC X-132,89 Y-49,5
377 CP IPA-180 Z-3,894 DR-
378 CC X-132,89 Y-49,5
379 CP IPA-180 Z-4,772 DR-
380 CC X-132,89 Y-49,5
381 CP IPA-180 Z-5,651 DR-
382 CC X-132,89 Y-49,5
383 CP IPA-180 Z-6,53 DR-
384 CC X-132,89 Y-49,5
385 CP IPA-180 Z-7,409 DR-
386 CC X-132,89 Y-49,5
387 CP IPA-180 Z-8,287 DR-
388 CC X-132,89 Y-49,5
389 CP IPA-180 Z-9,166 DR-
390 CC X-132,89 Y-49,5
391 CP IPA-180 Z-10,045 DR-
392 CC X-132,89 Y-49,5
393 CP IPA-180 Z-10,924 DR-
394 CC X-132,89 Y-49,5
395 CP IPA-180 Z-11,802 DR-
396 CC X-132,89 Y-49,5
397 CP IPA-180 Z-12,681 DR-
398 CC X-132,89 Y-49,5
399 CP IPA-180 Z-13,56 DR-
400 CC X-132,89 Y-49,5
401 CP IPA-180 Z-14,439 DR-
402 CC X-132,89 Y-49,5
403 CP IPA-180 Z-15,317 DR-
404 CC X-132,89 Y-49,5
405 CP IPA-180 Z-16,196 DR-
406 CC X-132,89 Y-49,5
407 CP IPA-180 Z-17,075 DR-
408 CC X-132,89 Y-49,5
409 CP IPA-348,33 Z-18,775 DR-
410 L X-132,415 Y-49,5
411 CC X-133,84 Y-49,5
412 C X-135,265 Y-49,5 DR+
413 CC X-131,94 Y-49,5
414 C X-128,615 Y-49,5 DR+
415 CC X-133,84 Y-49,5
416 C X-132,154 Y-44,554 DR+
417 CC X-132,89 Y-49,5
418 C X-127,89 Y-49,5 DR+
419 CC X-132,89 Y-49,5
420 C X-132,154 Y-44,554 DR+
421 L Z+10 FMAX
422 L X-128,973 Y-50,309 FMAX
423 L Z-16,775 FMAX
424 L Z-18,275
425 CC X-132,89 Y-49,5
426 CP IPA-180 Z-19,154 DR-
427 CC X-132,89 Y-49,5
428 CP IPA-180 Z-20,032 DR-
429 CC X-132,89 Y-49,5
430 CP IPA-180 Z-20,911 DR-
431 CC X-132,89 Y-49,5
432 CP IPA-180 Z-21,79 DR-
433 CC X-132,89 Y-49,5
434 CP IPA-180 Z-22,669 DR-
435 CC X-132,89 Y-49,5
436 CP IPA-180 Z-23,547 DR-
437 CC X-132,89 Y-49,5
438 CP IPA-180 Z-24,426 DR-
439 CC X-132,89 Y-49,5
440 CP IPA-180 Z-25,305 DR-
441 CC X-132,89 Y-49,5
442 CP IPA-180 Z-26,184 DR-
443 CC X-132,89 Y-49,5
444 CP IPA-180 Z-27,062 DR-
445 CC X-132,89 Y-49,5
446 CP IPA-180 Z-27,941 DR-
447 CC X-132,89 Y-49,5
448 CP IPA-180 Z-28,82 DR-
449 CC X-132,89 Y-49,5
450 CP IPA-180 Z-29,699 DR-
451 CC X-132,89 Y-49,5
452 CP IPA-180 Z-30,577 DR-
453 CC X-132,89 Y-49,5
454 CP IPA-180 Z-31,456 DR-
455 CC X-132,89 Y-49,5
456 CP IPA-180 Z-32,335 DR-
457 CC X-132,89 Y-49,5
458 CP IPA-180 Z-33,213 DR-
459 CC X-132,89 Y-49,5
460 CP IPA-180 Z-34,092 DR-
461 CC X-132,89 Y-49,5
462 CP IPA-180 Z-34,971 DR-
463 CC X-132,89 Y-49,5
464 CP IPA-180 Z-35,85 DR-
465 CC X-132,89 Y-49,5
466 CP IPA-348,33 Z-37,55 DR-
467 L X-132,415 Y-49,5
468 CC X-133,84 Y-49,5
469 C X-135,265 Y-49,5 DR+
470 CC X-131,94 Y-49,5
471 C X-128,615 Y-49,5 DR+
472 CC X-133,84 Y-49,5
473 C X-132,154 Y-44,554 DR+
474 CC X-132,89 Y-49,5
475 C X-127,89 Y-49,5 DR+
476 CC X-132,89 Y-49,5
477 C X-132,154 Y-44,554 DR+
478 L Z+10 FMAX
479 L X-128,973 Y-50,309 FMAX
480 L Z-18,775 FMAX
481 CC X-132,89 Y-49,5
482 CP IPA-180 Z-19,654 DR-
483 CC X-132,89 Y-49,5
484 CP IPA-180 Z-20,532 DR-
485 CC X-132,89 Y-49,5
486 CP IPA-180 Z-21,411 DR-
487 CC X-132,89 Y-49,5
488 CP IPA-180 Z-22,29 DR-
489 CC X-132,89 Y-49,5
490 CP IPA-180 Z-23,169 DR-
491 CC X-132,89 Y-49,5
492 CP IPA-180 Z-24,047 DR-
493 CC X-132,89 Y-49,5
494 CP IPA-180 Z-24,926 DR-
495 CC X-132,89 Y-49,5
496 CP IPA-180 Z-25,805 DR-
497 CC X-132,89 Y-49,5
498 CP IPA-180 Z-26,684 DR-
499 CC X-132,89 Y-49,5
500 CP IPA-180 Z-27,562 DR-
501 CC X-132,89 Y-49,5
502 CP IPA-180 Z-28,441 DR-
503 CC X-132,89 Y-49,5
504 CP IPA-180 Z-29,32 DR-
505 CC X-132,89 Y-49,5
506 CP IPA-180 Z-30,199 DR-
507 CC X-132,89 Y-49,5
508 CP IPA-180 Z-31,077 DR-
509 CC X-132,89 Y-49,5
510 CP IPA-180 Z-31,956 DR-
511 CC X-132,89 Y-49,5
512 CP IPA-180 Z-32,835 DR-
513 CC X-132,89 Y-49,5
514 CP IPA-180 Z-33,713 DR-
515 CC X-132,89 Y-49,5
516 CP IPA-180 Z-34,592 DR-
517 CC X-132,89 Y-49,5
518 CP IPA-180 Z-35,471 DR-
519 CC X-132,89 Y-49,5
520 CP IPA-180 Z-36,35 DR-
521 CC X-132,89 Y-49,5
522 CP IPA-348,33 Z-38,05 DR-
523 L X-132,415 Y-49,5
524 CC X-133,84 Y-49,5
525 C X-135,265 Y-49,5 DR+
526 CC X-131,94 Y-49,5
527 C X-128,615 Y-49,5 DR+
528 CC X-133,84 Y-49,5
529 C X-132,154 Y-44,554 DR+
530 CC X-132,89 Y-49,5
531 C X-127,89 Y-49,5 DR+
532 CC X-132,89 Y-49,5
533 C X-132,154 Y-44,554 DR+
534 L Z+50 FMAX
535 L X+58,027 Y-50,309 FMAX
536 L Z+2 FMAX
537 L Z+0,5
538 CC X+54,11 Y-49,5
539 CP IPA-180 Z-0,378 DR-
540 CC X+54,11 Y-49,5
541 CP IPA-180 Z-1,257 DR-
542 CC X+54,11 Y-49,5
543 CP IPA-180 Z-2,136 DR-
544 CC X+54,11 Y-49,5
545 CP IPA-180 Z-3,015 DR-
546 CC X+54,11 Y-49,5
547 CP IPA-180 Z-3,894 DR-
548 CC X+54,11 Y-49,5
549 CP IPA-180 Z-4,772 DR-
550 CC X+54,11 Y-49,5
551 CP IPA-180 Z-5,651 DR-
552 CC X+54,11 Y-49,5
553 CP IPA-180 Z-6,53 DR-
554 CC X+54,11 Y-49,5
555 CP IPA-180 Z-7,409 DR-
556 CC X+54,11 Y-49,5
557 CP IPA-180 Z-8,287 DR-
558 CC X+54,11 Y-49,5
559 CP IPA-180 Z-9,166 DR-
560 CC X+54,11 Y-49,5
561 CP IPA-180 Z-10,045 DR-
562 CC X+54,11 Y-49,5
563 CP IPA-180 Z-10,924 DR-
564 CC X+54,11 Y-49,5
565 CP IPA-180 Z-11,802 DR-
566 CC X+54,11 Y-49,5
567 CP IPA-180 Z-12,681 DR-
568 CC X+54,11 Y-49,5
569 CP IPA-180 Z-13,56 DR-
570 CC X+54,11 Y-49,5
571 CP IPA-180 Z-14,439 DR-
572 CC X+54,11 Y-49,5
573 CP IPA-180 Z-15,317 DR-
574 CC X+54,11 Y-49,5
575 CP IPA-180 Z-16,196 DR-
576 CC X+54,11 Y-49,5
577 CP IPA-180 Z-17,075 DR-
578 CC X+54,11 Y-49,5
579 CP IPA-348,33 Z-18,775 DR-
580 L X+54,585 Y-49,5
581 CC X+53,16 Y-49,5
582 C X+51,735 Y-49,5 DR+
583 CC X+55,06 Y-49,5
584 C X+58,385 Y-49,5 DR+
585 CC X+53,16 Y-49,5
586 C X+54,846 Y-44,554 DR+
587 CC X+54,11 Y-49,5
588 C X+59,11 Y-49,5 DR+
589 CC X+54,11 Y-49,5
590 C X+54,846 Y-44,554 DR+
591 L Z+10 FMAX
592 L X+58,027 Y-50,309 FMAX
593 L Z-16,775 FMAX
594 L Z-18,275
595 CC X+54,11 Y-49,5
596 CP IPA-180 Z-19,154 DR-
597 CC X+54,11 Y-49,5
598 CP IPA-180 Z-20,032 DR-
599 CC X+54,11 Y-49,5
600 CP IPA-180 Z-20,911 DR-
601 CC X+54,11 Y-49,5
602 CP IPA-180 Z-21,79 DR-
603 CC X+54,11 Y-49,5
604 CP IPA-180 Z-22,669 DR-
605 CC X+54,11 Y-49,5
606 CP IPA-180 Z-23,547 DR-
607 CC X+54,11 Y-49,5
608 CP IPA-180 Z-24,426 DR-
609 CC X+54,11 Y-49,5
610 CP IPA-180 Z-25,305 DR-
611 CC X+54,11 Y-49,5
612 CP IPA-180 Z-26,184 DR-
613 CC X+54,11 Y-49,5
614 CP IPA-180 Z-27,062 DR-
615 CC X+54,11 Y-49,5
616 CP IPA-180 Z-27,941 DR-
617 CC X+54,11 Y-49,5
618 CP IPA-180 Z-28,82 DR-
619 CC X+54,11 Y-49,5
620 CP IPA-180 Z-29,699 DR-
621 CC X+54,11 Y-49,5
622 CP IPA-180 Z-30,577 DR-
623 CC X+54,11 Y-49,5
624 CP IPA-180 Z-31,456 DR-
625 CC X+54,11 Y-49,5
626 CP IPA-180 Z-32,335 DR-
627 CC X+54,11 Y-49,5
628 CP IPA-180 Z-33,213 DR-
629 CC X+54,11 Y-49,5
630 CP IPA-180 Z-34,092 DR-
631 CC X+54,11 Y-49,5
632 CP IPA-180 Z-34,971 DR-
633 CC X+54,11 Y-49,5
634 CP IPA-180 Z-35,85 DR-
635 CC X+54,11 Y-49,5
636 CP IPA-348,33 Z-37,55 DR-
637 L X+54,585 Y-49,5
638 CC X+53,16 Y-49,5
639 C X+51,735 Y-49,5 DR+
640 CC X+55,06 Y-49,5
641 C X+58,385 Y-49,5 DR+
642 CC X+53,16 Y-49,5
643 C X+54,846 Y-44,554 DR+
644 CC X+54,11 Y-49,5
645 C X+59,11 Y-49,5 DR+
646 CC X+54,11 Y-49,5
647 C X+54,846 Y-44,554 DR+
648 L Z+10 FMAX
649 L X+58,027 Y-50,309 FMAX
650 L Z-18,775 FMAX
651 CC X+54,11 Y-49,5
652 CP IPA-180 Z-19,654 DR-
653 CC X+54,11 Y-49,5
654 CP IPA-180 Z-20,532 DR-
655 CC X+54,11 Y-49,5
656 CP IPA-180 Z-21,411 DR-
657 CC X+54,11 Y-49,5
658 CP IPA-180 Z-22,29 DR-
659 CC X+54,11 Y-49,5
660 CP IPA-180 Z-23,169 DR-
661 CC X+54,11 Y-49,5
662 CP IPA-180 Z-24,047 DR-
663 CC X+54,11 Y-49,5
664 CP IPA-180 Z-24,926 DR-
665 CC X+54,11 Y-49,5
666 CP IPA-180 Z-25,805 DR-
667 CC X+54,11 Y-49,5
668 CP IPA-180 Z-26,684 DR-
669 CC X+54,11 Y-49,5
670 CP IPA-180 Z-27,562 DR-
671 CC X+54,11 Y-49,5
672 CP IPA-180 Z-28,441 DR-
673 CC X+54,11 Y-49,5
674 CP IPA-180 Z-29,32 DR-
675 CC X+54,11 Y-49,5
676 CP IPA-180 Z-30,199 DR-
677 CC X+54,11 Y-49,5
678 CP IPA-180 Z-31,077 DR-
679 CC X+54,11 Y-49,5
680 CP IPA-180 Z-31,956 DR-
681 CC X+54,11 Y-49,5
682 CP IPA-180 Z-32,835 DR-
683 CC X+54,11 Y-49,5
684 CP IPA-180 Z-33,713 DR-
685 CC X+54,11 Y-49,5
686 CP IPA-180 Z-34,592 DR-
687 CC X+54,11 Y-49,5
688 CP IPA-180 Z-35,471 DR-
689 CC X+54,11 Y-49,5
690 CP IPA-180 Z-36,35 DR-
691 CC X+54,11 Y-49,5
692 CP IPA-348,33 Z-38,05 DR-
693 L X+54,585 Y-49,5
694 CC X+53,16 Y-49,5
695 C X+51,735 Y-49,5 DR+
696 CC X+55,06 Y-49,5
697 C X+58,385 Y-49,5 DR+
698 CC X+53,16 Y-49,5
699 C X+54,846 Y-44,554 DR+
700 CC X+54,11 Y-49,5
701 C X+59,11 Y-49,5 DR+
702 CC X+54,11 Y-49,5
703 C X+54,846 Y-44,554 DR+
704 L Z+50 FMAX
705 TOOL CALL 23 Z S1790 DR-8
706 L X+132,11 Y+55,5 Z+50 FMAX
707 L Z-35,55 FMAX
708 L Z-38,05
709 L X+130,31 Y+57,1 RL
710 L X+128,71
711 CC X+128,71 Y+55,5
712 C X+127,11 Y+55,5 DR+
713 CC X+132,11 Y+55,5
714 C X+137,11 Y+55,5 DR+
715 CC X+132,11 Y+55,5
716 C X+127,11 Y+55,5 DR+
717 CC X+132,11 Y+55,5
718 C X+127,505 Y+53,553 DR+
719 CC X+132,11 Y+55,5
720 C X+137,11 Y+55,5 DR+
721 CC X+132,11 Y+55,5
722 C X+127,11 Y+55,5 DR+
723 CC X+132,11 Y+55,5
724 C X+127,505 Y+53,553 DR+
725 CC X+128,978 Y+54,176
726 C X+129,601 Y+52,702 DR+
727 L X+131,075 Y+53,325
728 L X+132,11 Y+55,5 R0
729 L Z+50 FMAX
730 L X-132,89 FMAX
731 L Z-35,55 FMAX
732 L Z-38,05
733 L X-134,69 Y+57,1 RL
734 L X-136,29
735 CC X-136,29 Y+55,5
736 C X-137,89 Y+55,5 DR+
737 CC X-132,89 Y+55,5
738 C X-127,89 Y+55,5 DR+
739 CC X-132,89 Y+55,5
740 C X-137,89 Y+55,5 DR+
741 CC X-132,89 Y+55,5
742 C X-137,495 Y+53,553 DR+
743 CC X-132,89 Y+55,5
744 C X-127,89 Y+55,5 DR+
745 CC X-132,89 Y+55,5
746 C X-137,89 Y+55,5 DR+
747 CC X-132,89 Y+55,5
748 C X-137,495 Y+53,553 DR+
749 CC X-136,021 Y+54,176
750 C X-135,398 Y+52,702 DR+
751 L X-133,925 Y+53,325
752 L X-132,89 Y+55,5 R0
753 L Z+50 FMAX
754 L Y-49,5 FMAX
755 L Z-35,55 FMAX
756 L Z-38,05
757 L X-134,69 Y-47,9 RL
758 L X-136,29
759 CC X-136,29 Y-49,5
760 C X-137,89 Y-49,5 DR+
761 CC X-132,89 Y-49,5
762 C X-127,89 Y-49,5 DR+
763 CC X-132,89 Y-49,5
764 C X-137,89 Y-49,5 DR+
765 CC X-132,89 Y-49,5
766 C X-137,495 Y-51,447 DR+
767 CC X-132,89 Y-49,5
768 C X-127,89 Y-49,5 DR+
769 CC X-132,89 Y-49,5
770 C X-137,89 Y-49,5 DR+
771 CC X-132,89 Y-49,5
772 C X-137,495 Y-51,447 DR+
773 CC X-136,021 Y-50,824
774 C X-135,398 Y-52,298 DR+
775 L X-133,925 Y-51,675
776 L X-132,89 Y-49,5 R0
777 L Z+50 FMAX
778 L X+54,11 FMAX
779 L Z-35,55 FMAX
780 L Z-38,05
781 L X+52,31 Y-47,9 RL
782 L X+50,71
783 CC X+50,71 Y-49,5
784 C X+49,11 Y-49,5 DR+
785 CC X+54,11 Y-49,5
786 C X+59,11 Y-49,5 DR+
787 CC X+54,11 Y-49,5
788 C X+49,11 Y-49,5 DR+
789 CC X+54,11 Y-49,5
790 C X+49,505 Y-51,447 DR+
791 CC X+54,11 Y-49,5
792 C X+59,11 Y-49,5 DR+
793 CC X+54,11 Y-49,5
794 C X+49,11 Y-49,5 DR+
795 CC X+54,11 Y-49,5
796 C X+49,505 Y-51,447 DR+
797 CC X+50,978 Y-50,824
798 C X+51,601 Y-52,298 DR+
799 L X+53,075 Y-51,675
800 L X+54,11 Y-49,5 R0
801 L Z+50 FMAX
802 M78
803 M5
804 L Z-1 FMAX M91
805 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
806 ; CORRECTION USURE GAUCHE
807 ; SUREP R 0. SUREP Z 0.
808 TOOL CALL 1 Z S6000 DR-2,5
809 TOOL DEF 23
810 L X+132,11 Y+55,5 FMAX M3
811 L Z+50 FMAX
812 L Z+2 FMAX
813 L Z-2,5 F800
814 L X+122,61 Y+56 RL F1200
815 L X+122,11
816 CC X+122,11 Y+55,5
817 C X+121,61 Y+55,5 DR+
818 CC X+132,11 Y+55,5
819 C X+142,61 Y+55,5 DR+
820 CC X+132,11 Y+55,5
821 C X+121,61 Y+55,5 DR+
822 CC X+132,11 Y+55,5
823 C X+121,8 Y+53,512 DR+
824 CC X+122,291 Y+53,607
825 C X+122,385 Y+53,116 DR+
826 L X+122,876 Y+53,21
827 L X+132,11 Y+55,5 R0
828 L Z+50 FMAX
829 L X-132,89 FMAX
830 L Z+2 FMAX
831 L Z-2,5 F800
832 L X-142,39 Y+56 RL F1200
833 L X-142,89
834 CC X-142,89 Y+55,5
835 C X-143,39 Y+55,5 DR+
836 CC X-132,89 Y+55,5
837 C X-122,39 Y+55,5 DR+
838 CC X-132,89 Y+55,5
839 C X-143,39 Y+55,5 DR+
840 CC X-132,89 Y+55,5
841 C X-143,2 Y+53,512 DR+
842 CC X-142,709 Y+53,607
843 C X-142,614 Y+53,116 DR+
844 L X-142,123 Y+53,21
845 L X-132,89 Y+55,5 R0
846 L Z+50 FMAX
847 L Y-49,5 FMAX
848 L Z+2 FMAX
849 L Z-2,5 F800
850 L X-142,39 Y-49 RL F1200
851 L X-142,89
852 CC X-142,89 Y-49,5
853 C X-143,39 Y-49,5 DR+
854 CC X-132,89 Y-49,5
855 C X-122,39 Y-49,5 DR+
856 CC X-132,89 Y-49,5
857 C X-143,39 Y-49,5 DR+
858 CC X-132,89 Y-49,5
859 C X-143,2 Y-51,488 DR+
860 CC X-142,709 Y-51,393
861 C X-142,614 Y-51,884 DR+
862 L X-142,123 Y-51,79
863 L X-132,89 Y-49,5 R0
864 L Z+50 FMAX
865 L X+54,11 FMAX
866 L Z+2 FMAX
867 L Z-2,5 F800
868 L X+44,61 Y-49 RL F1200
869 L X+44,11
870 CC X+44,11 Y-49,5
871 C X+43,61 Y-49,5 DR+
872 CC X+54,11 Y-49,5
873 C X+64,61 Y-49,5 DR+
874 CC X+54,11 Y-49,5
875 C X+43,61 Y-49,5 DR+
876 CC X+54,11 Y-49,5
877 C X+43,8 Y-51,488 DR+
878 CC X+44,291 Y-51,393
879 C X+44,385 Y-51,884 DR+
880 L X+44,876 Y-51,79
881 L X+54,11 Y-49,5 R0
882 L Z+50 FMAX
883 M5
884 L Z-1 FMAX M91
885 ; T23 P15323610 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
886 ; CORRECTION USURE GAUCHE
887 ; SUREP R 0.15 SUREP Z 0.1
888 TOOL CALL 23 Z S1790 DR-8
889 TOOL DEF 14
890 L X+172,5 Y-30,65 FMAX M3
891 L Z+50 FMAX M25
892 L Z+2 FMAX
893 L Z-18,625 F358
894 L X+162,5 RL
895 L X+157,65
896 L Y-79,5
897 L Y-89,5 R0
898 L Z+10 FMAX
899 L X+172,5 Y-24,65 FMAX
900 L Z+2 FMAX
901 L Z-18,625
902 L X+162,5 RL
903 L X+151,65
904 L Y-79,5
905 L Y-89,5 R0
906 L Z+10 FMAX
907 L X+172,5 Y-18,65 FMAX
908 L Z+2 FMAX
909 L Z-18,625
910 L X+162,5 RL
911 L X+145,65
912 L Y-79,5
913 L Y-89,5 R0
914 L Z+10 FMAX
915 L X+172,5 Y-12,65 FMAX
916 L Z+2 FMAX
917 L Z-18,625
918 L X+162,5 RL
919 L X+139,65
920 L Y-79,5
921 L Y-89,5 R0
922 L Z+10 FMAX
923 L X+172,5 Y-6,65 FMAX
924 L Z+2 FMAX
925 L Z-18,625
926 L X+162,5 RL
927 L X+133,65
928 L Y-79,5
929 L Y-89,5 R0
930 L Z+10 FMAX
931 L X+172,5 Y-0,65 FMAX
932 L Z+2 FMAX
933 L Z-18,625
934 L X+162,5 RL
935 L X+127,65
936 L Y-79,5
937 L Y-89,5 R0
938 L Z+10 FMAX
939 L X+172,5 Y+5,35 FMAX
940 L Z+2 FMAX
941 L Z-18,625
942 L X+162,5 RL
943 L X+125,096
944 CC X+125,096 Y+13,5
945 C X+119,334 Y+7,737 DR-
946 CC X+119,298 Y+7,702
947 C X+119,263 Y+7,666 DR+
948 CC X+113,5 Y+1,903
949 C X+121,65 Y+1,903 DR-
950 L Y-79,5
951 L Y-89,5 R0
952 L Z+10 FMAX
953 L X+172,5 Y-30,65 FMAX
954 L Z-16,625 FMAX
955 L Z-37,25
956 L X+162,5 RL
957 L X+157,65
958 L Y-79,5
959 L Y-89,5 R0
960 L Z+10 FMAX
961 L X+172,5 Y-24,65 FMAX
962 L Z-16,625 FMAX
963 L Z-37,25
964 L X+162,5 RL
965 L X+151,65
966 L Y-79,5
967 L Y-89,5 R0
968 L Z+10 FMAX
969 L X+172,5 Y-18,65 FMAX
970 L Z-16,625 FMAX
971 L Z-37,25
972 L X+162,5 RL
973 L X+145,65
974 L Y-79,5
975 L Y-89,5 R0
976 L Z+10 FMAX
977 L X+172,5 Y-12,65 FMAX
978 L Z-16,625 FMAX
979 L Z-37,25
980 L X+162,5 RL
981 L X+139,65
982 L Y-79,5
983 L Y-89,5 R0
984 L Z+10 FMAX
985 L X+172,5 Y-6,65 FMAX
986 L Z-16,625 FMAX
987 L Z-37,25
988 L X+162,5 RL
989 L X+133,65
990 L Y-79,5
991 L Y-89,5 R0
992 L Z+10 FMAX
993 L X+172,5 Y-0,65 FMAX
994 L Z-16,625 FMAX
995 L Z-37,25
996 L X+162,5 RL
997 L X+127,65
998 L Y-79,5
999 L Y-89,5 R0
1000 L Z+10 FMAX
1001 L X+172,5 Y+5,35 FMAX
1002 L Z-16,625 FMAX
1003 L Z-37,25
1004 L X+162,5 RL
1005 L X+125,096
1006 CC X+125,096 Y+13,5
1007 C X+119,334 Y+7,737 DR-
1008 CC X+119,298 Y+7,702
1009 C X+119,263 Y+7,666 DR+
1010 CC X+113,5 Y+1,903
1011 C X+121,65 Y+1,903 DR-
1012 L Y-79,5
1013 L Y-89,5 R0
1014 L Z+10 FMAX
1015 L X+172,5 Y-30,65 FMAX
1016 L Z-35,25 FMAX
1017 L Z-37,65
1018 L X+162,5 RL
1019 L X+157,65
1020 L Y-79,5
1021 L Y-89,5 R0
1022 L Z+10 FMAX
1023 L X+172,5 Y-24,65 FMAX
1024 L Z-35,25 FMAX
1025 L Z-37,65
1026 L X+162,5 RL
1027 L X+151,65
1028 L Y-79,5
1029 L Y-89,5 R0
1030 L Z+10 FMAX
1031 L X+172,5 Y-18,65 FMAX
1032 L Z-35,25 FMAX
1033 L Z-37,65
1034 L X+162,5 RL
1035 L X+145,65
1036 L Y-79,5
1037 L Y-89,5 R0
1038 L Z+10 FMAX
1039 L X+172,5 Y-12,65 FMAX
1040 L Z-35,25 FMAX
1041 L Z-37,65
1042 L X+162,5 RL
1043 L X+139,65
1044 L Y-79,5
1045 L Y-89,5 R0
1046 L Z+10 FMAX
1047 L X+172,5 Y-6,65 FMAX
1048 L Z-35,25 FMAX
1049 L Z-37,65
1050 L X+162,5 RL
1051 L X+133,65
1052 L Y-79,5
1053 L Y-89,5 R0
1054 L Z+10 FMAX
1055 L X+172,5 Y-0,65 FMAX
1056 L Z-35,25 FMAX
1057 L Z-37,65
1058 L X+162,5 RL
1059 L X+127,65
1060 L Y-79,5
1061 L Y-89,5 R0
1062 L Z+10 FMAX
1063 L X+172,5 Y+5,35 FMAX
1064 L Z-35,25 FMAX
1065 L Z-37,65
1066 L X+162,5 RL
1067 L X+125,096
1068 CC X+125,096 Y+13,5
1069 C X+119,334 Y+7,737 DR-
1070 CC X+119,298 Y+7,702
1071 C X+119,263 Y+7,666 DR+
1072 CC X+113,5 Y+1,903
1073 C X+121,65 Y+1,903 DR-
1074 L Y-79,5
1075 L Y-89,5 R0
1076 L Z+10 FMAX
1077 L X+172,5 Y+5,35 FMAX
1078 L Z-35,25 FMAX
1079 L Z-37,65
1080 L X+162,5 RL
1081 L X+125,096
1082 CC X+125,096 Y+13,5
1083 C X+119,334 Y+7,737 DR-
1084 CC X+119,298 Y+7,702
1085 C X+119,263 Y+7,666 DR+
1086 CC X+113,5 Y+1,903
1087 C X+121,65 Y+1,903 DR-
1088 L Y-79,5
1089 L Y-89,5 R0
1090 L Z+10 FMAX
1091 L X+172,5 Y+5,35 FMAX
1092 L Z-35,25 FMAX
1093 L Z-37,65
1094 L X+162,5 RL
1095 L X+125,096
1096 CC X+125,096 Y+13,5
1097 C X+119,334 Y+7,737 DR-
1098 CC X+119,298 Y+7,702
1099 C X+119,263 Y+7,666 DR+
1100 CC X+113,5 Y+1,903
1101 C X+121,65 Y+1,903 DR-
1102 L Y-79,5
1103 L Y-89,5 R0
1104 L Z+10 FMAX
1105 L X+172,5 Y+5,35 FMAX
1106 L Z-35,25 FMAX
1107 L Z-37,65
1108 L X+162,5 RL
1109 L X+125,096
1110 CC X+125,096 Y+13,5
1111 C X+119,334 Y+7,737 DR-
1112 CC X+119,298 Y+7,702
1113 C X+119,263 Y+7,666 DR+
1114 CC X+113,5 Y+1,903
1115 C X+121,65 Y+1,903 DR-
1116 L Y-79,5
1117 L Y-89,5 R0
1118 L Z+50 FMAX
1119 M78
1120 M5
1121 L Z-1 FMAX M91
1122 ; T14 DIA 16 FINITION  LONG 53 AIR FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
1123 ; CORRECTION USURE GAUCHE
1124 ; SUREP R 0.18 SUREP Z 0.
1125 TOOL CALL 14 Z S700 DR-8
1126 TOOL DEF 1
1127 L X+172,5 Y-30,68 FMAX M3
1128 L Z+50 FMAX M25
1129 L Z+2 FMAX
1130 L Z-37,75 F1000
1131 L X+162,5 RL F200
1132 L X+157,68
1133 L Y-79,5
1134 L Y-89,5 R0
1135 L Z+10 FMAX
1136 L X+172,5 Y-24,68 FMAX
1137 L Z+2 FMAX
1138 L Z-37,75 F1000
1139 L X+162,5 RL F200
1140 L X+151,68
1141 L Y-79,5
1142 L Y-89,5 R0
1143 L Z+10 FMAX
1144 L X+172,5 Y-18,68 FMAX
1145 L Z+2 FMAX
1146 L Z-37,75 F1000
1147 L X+162,5 RL F200
1148 L X+145,68
1149 L Y-79,5
1150 L Y-89,5 R0
1151 L Z+10 FMAX
1152 L X+172,5 Y-12,68 FMAX
1153 L Z+2 FMAX
1154 L Z-37,75 F1000
1155 L X+162,5 RL F200
1156 L X+139,68
1157 L Y-79,5
1158 L Y-89,5 R0
1159 L Z+10 FMAX
1160 L X+172,5 Y-6,68 FMAX
1161 L Z+2 FMAX
1162 L Z-37,75 F1000
1163 L X+162,5 RL F200
1164 L X+133,68
1165 L Y-79,5
1166 L Y-89,5 R0
1167 L Z+10 FMAX
1168 L X+172,5 Y-0,68 FMAX
1169 L Z+2 FMAX
1170 L Z-37,75 F1000
1171 L X+162,5 RL F200
1172 L X+127,68
1173 L Y-79,5
1174 L Y-89,5 R0
1175 L Z+10 FMAX
1176 L X+172,5 Y+5,32 FMAX
1177 L Z+2 FMAX
1178 L Z-37,75 F1000
1179 L X+162,5 RL F200
1180 L X+125,096
1181 CC X+125,096 Y+13,5
1182 C X+119,312 Y+7,716 DR-
1183 CC X+119,298 Y+7,702
1184 C X+119,284 Y+7,688 DR+
1185 CC X+113,5 Y+1,903
1186 C X+121,68 Y+1,903 DR-
1187 L Y-79,5
1188 L Y-89,5 R0
1189 L Z+10 FMAX
1190 L X+172,5 Y+5,32 FMAX
1191 L Z+2 FMAX
1192 L Z-37,75 F1000
1193 L X+162,5 RL F200
1194 L X+125,096
1195 CC X+125,096 Y+13,5
1196 C X+119,312 Y+7,716 DR-
1197 CC X+119,298 Y+7,702
1198 C X+119,284 Y+7,688 DR+
1199 CC X+113,5 Y+1,903
1200 C X+121,68 Y+1,903 DR-
1201 L Y-79,5
1202 L Y-89,5 R0
1203 L Z+50 FMAX
1204 M78
1205 M5
1206 L Z-1 FMAX M91
1207 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1208 TOOL CALL 1 Z S1856 DR+0
1209 TOOL DEF 9
1210 L X+132,5 Y+3,5 FMAX M3
1211 L Z+50 FMAX M8
1212 ;  POINTAGE-PERCAGE
1213 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,99 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,99 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-37,76 ; COORD. SURFACE PIECE~
    Q204=+87,76 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1214 L X+132,5 Y+3,5 FMAX M99
1215 M9
1216 M5
1217 L Z-1 FMAX M91
1218 ; T9 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
1219 TOOL CALL 9 Z S1600 DR+0
1220 TOOL DEF 10
1221 L X+132,5 Y+3,5 FMAX M3
1222 L Z+50 FMAX M7
1223 ;  DEBOURRAGE
1224 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32,24 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+4,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-37,76 ; COORD. SURFACE PIECE~
    Q204=+87,76 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1225 L X+132,5 Y+3,5 FMAX M99
1226 M9
1227 M5
1228 L Z-1 FMAX M91
1229 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
1230 TOOL CALL 10 Z S500 DR+0
1231 TOOL DEF 1
1232 L X+132,5 Y+3,5 FMAX M3
1233 L Z+50 FMAX M8
1234 ;  POINTAGE-PERCAGE
1235 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32,24 ; PROFONDEUR~
    Q206=75 ; AVANCE PLONGEE PROF.~
    Q202=+32,24 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-37,76 ; COORD. SURFACE PIECE~
    Q204=+87,76 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1236 L X+132,5 Y+3,5 FMAX M99
1237 M9
1238 M5
1239 L Z-1 FMAX M91
1240 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
1241 TOOL CALL 1 Z S1856 DR+0
1242 TOOL DEF 2
1243 L X+132,5 Y-14,5 FMAX M3
1244 L Z+50 FMAX M8
1245 ;  POINTAGE-PERCAGE
1246 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,59 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,59 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-37,76 ; COORD. SURFACE PIECE~
    Q204=+87,76 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1247 L X+132,5 Y-14,5 FMAX M99
1248 M9
1249 M5
1250 L Z-1 FMAX M91
1251 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
1252 TOOL CALL 2 Z S2000 DR+0
1253 TOOL DEF 27
1254 L X+132,5 Y-14,5 FMAX M3
1255 L Z+50 FMAX M7
1256 ;  DEBOURRAGE
1257 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32,24 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=-37,76 ; COORD. SURFACE PIECE~
    Q204=+87,76 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
1258 L X+132,5 Y-14,5 FMAX M99
1259 M9
1260 M5
1261 L Z-1 FMAX M91
1262 M00
1263 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
1264 TOOL CALL 27 Z S100 DR+0
1265 TOOL DEF 14
1266 L X+132,5 Y-14,5 FMAX M3
1267 L Z+50 FMAX M8
1268 ;  TARAUDAGE
1269 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-12,24 ; PROFONDEUR~
    Q239=1.5 ; PAS DE VIS~
    Q203=-37,76 ; COORD. SURFACE PIECE~
    Q204=+87,76 ; SAUT DE BRIDE
1270 L X+132,5 Y-14,5 FMAX M99
1271 M9
1272 M5
1273 L Z-1 FMAX M91
1274 ; T14 DIA 16 FINITION  LONG 53 AIR FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
1275 ; CORRECTION USURE GAUCHE
1276 ; SUREP R 0.05 SUREP Z 0.1
1277 TOOL CALL 14 Z S700 DR-8
1278 TOOL DEF 1
1279 L X+172,5 Y+5,45 FMAX M3
1280 L Z+50 FMAX M25
1281 L Z+2 FMAX
1282 L Z-37,65 F1000
1283 L X+162,5 RL F200
1284 L X+125,096
1285 CC X+125,096 Y+13,5
1286 C X+119,404 Y+7,808 DR-
1287 CC X+119,298 Y+7,702
1288 C X+119,192 Y+7,596 DR+
1289 CC X+113,5 Y+1,903
1290 C X+121,55 Y+1,903 DR-
1291 L Y-79,5
1292 L Y-89,5 R0
1293 L Z+10 FMAX
1294 L X+172,5 Y+5,45 FMAX
1295 L Z+2 FMAX
1296 L Z-37,65 F1000
1297 L X+162,5 RL F200
1298 L X+125,096
1299 CC X+125,096 Y+13,5
1300 C X+119,404 Y+7,808 DR-
1301 CC X+119,298 Y+7,702
1302 C X+119,192 Y+7,596 DR+
1303 CC X+113,5 Y+1,903
1304 C X+121,55 Y+1,903 DR-
1305 L Y-79,5
1306 L Y-89,5 R0
1307 L Z+10 FMAX
1308 L X+172,5 Y+5,45 FMAX
1309 L Z+2 FMAX
1310 L Z-37,65 F1000
1311 L X+162,5 RL F200
1312 L X+125,096
1313 CC X+125,096 Y+13,5
1314 C X+119,404 Y+7,808 DR-
1315 CC X+119,298 Y+7,702
1316 C X+119,192 Y+7,596 DR+
1317 CC X+113,5 Y+1,903
1318 C X+121,55 Y+1,903 DR-
1319 L Y-79,5
1320 L Y-89,5 R0
1321 L Z+10 FMAX
1322 L X+172,5 Y+5,45 FMAX
1323 L Z+2 FMAX
1324 L Z-37,65 F1000
1325 L X+162,5 RL F200
1326 L X+125,096
1327 CC X+125,096 Y+13,5
1328 C X+119,404 Y+7,808 DR-
1329 CC X+119,298 Y+7,702
1330 C X+119,192 Y+7,596 DR+
1331 CC X+113,5 Y+1,903
1332 C X+121,55 Y+1,903 DR-
1333 L Y-79,5
1334 L Y-89,5 R0
1335 L Z+50 FMAX
1336 M78
1337 M5
1338 L Z-1 FMAX M91
1339 M00
1340 ; T14 DIA 16 FINITION  LONG 53 AIR FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
1341 ; CORRECTION USURE GAUCHE
1342 ; SUREP R 0. SUREP Z 0.1
1343 TOOL CALL 14 Z S700 DR-8
1344 TOOL DEF 1
1345 L X+172,5 Y+5,5 FMAX M3
1346 L Z+50 FMAX M25
1347 L Z+2 FMAX
1348 L Z-37,65 F1000
1349 L X+162,5 RL F200
1350 L X+125,096
1351 CC X+125,096 Y+13,5
1352 C X+119,44 Y+7,843 DR-
1353 CC X+119,298 Y+7,702
1354 C X+119,157 Y+7,56 DR+
1355 CC X+113,5 Y+1,903
1356 C X+121,5 Y+1,903 DR-
1357 L Y-79,5
1358 L Y-89,5 R0
1359 L Z+10 FMAX
1360 L X+172,5 Y+5,5 FMAX
1361 L Z+2 FMAX
1362 L Z-37,65 F1000
1363 L X+162,5 RL F200
1364 L X+125,096
1365 CC X+125,096 Y+13,5
1366 C X+119,44 Y+7,843 DR-
1367 CC X+119,298 Y+7,702
1368 C X+119,157 Y+7,56 DR+
1369 CC X+113,5 Y+1,903
1370 C X+121,5 Y+1,903 DR-
1371 L Y-79,5
1372 L Y-89,5 R0
1373 L Z+10 FMAX
1374 L X+172,5 Y+5,5 FMAX
1375 L Z+2 FMAX
1376 L Z-37,65 F1000
1377 L X+162,5 RL F200
1378 L X+125,096
1379 CC X+125,096 Y+13,5
1380 C X+119,44 Y+7,843 DR-
1381 CC X+119,298 Y+7,702
1382 C X+119,157 Y+7,56 DR+
1383 CC X+113,5 Y+1,903
1384 C X+121,5 Y+1,903 DR-
1385 L Y-79,5
1386 L Y-89,5 R0
1387 L Z+10 FMAX
1388 L X+172,5 Y+5,5 FMAX
1389 L Z+2 FMAX
1390 L Z-37,65 F1000
1391 L X+162,5 RL F200
1392 L X+125,096
1393 CC X+125,096 Y+13,5
1394 C X+119,44 Y+7,843 DR-
1395 CC X+119,298 Y+7,702
1396 C X+119,157 Y+7,56 DR+
1397 CC X+113,5 Y+1,903
1398 C X+121,5 Y+1,903 DR-
1399 L Y-79,5
1400 L Y-89,5 R0
1401 L Z+50 FMAX
1402 M78
1403 M5
1404 L Z-1 FMAX M91
1405 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1406 ; CORRECTION USURE GAUCHE
1407 ; SUREP R 0. SUREP Z 0.1
1408 TOOL CALL 1 Z S6000 DR-2,5
1409 TOOL DEF 23
1410 L X+165,625 Y+11 FMAX M3
1411 L Z+50 FMAX
1412 L Z+2 FMAX
1413 L Z-2,1 F800
1414 L X+162,5 RL F1200
1415 L X+125,096
1416 CC X+125,096 Y+13,5
1417 C X+123,329 Y+11,732 DR-
1418 CC X+119,298 Y+7,702
1419 C X+115,268 Y+3,671 DR+
1420 CC X+113,5 Y+1,903
1421 C X+116 Y+1,903 DR-
1422 L Y-79,5
1423 L Y-82,625 R0
1424 L Z+50 FMAX
1425 M5
1426 L Z-1 FMAX M91
1427 L Y-1 FMAX M91
1428 M30
1429 END PGM REP31-32 PRESSEUR MM
