0 BEGIN PGM REP119-CASSETTE-2-PLAQUETTE SF-E MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP119-CASSETTE-2-PLAQUETTE SF-E
4 ; PROG-CN DU 09-06-20 A 14:20
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
9 ; T24 FRAISE DIA 12 FINITION FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-4*
15 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
16 ; CORRECTION AUCUNE
17 ; SUREP R 0.1 SUREP Z 0.
18 TOOL CALL 19 Z S7427 DR+0
19 TOOL DEF 24
20 L X+90,882 Y-51,67 FMAX M3
21 L Z+50 FMAX M8
22 L Z+2 FMAX
23 L Z+0,5 F297
24 CC X+93,877 Y-51,497
25 CP IPA-180 Z+0,171 DR-
26 CC X+93,877 Y-51,497
27 CP IPA-180 Z-0,158 DR-
28 CC X+93,877 Y-51,497
29 CP IPA-180 Z-0,487 DR-
30 CC X+93,877 Y-51,497
31 CP IPA-180 Z-0,816 DR-
32 CC X+93,877 Y-51,497
33 CP IPA-180 Z-1,146 DR-
34 CC X+93,877 Y-51,497
35 CP IPA-180 Z-1,475 DR-
36 CC X+93,877 Y-51,497
37 CP IPA-180 Z-1,804 DR-
38 CC X+93,877 Y-51,497
39 CP IPA-180 Z-2,133 DR-
40 CC X+93,877 Y-51,497
41 CP IPA-180 Z-2,462 DR-
42 CC X+93,877 Y-51,497
43 CP IPA-180 Z-2,791 DR-
44 CC X+93,877 Y-51,497
45 CP IPA-180 Z-3,12 DR-
46 CC X+93,877 Y-51,497
47 CP IPA-180 Z-3,449 DR-
48 CC X+93,877 Y-51,497
49 CP IPA-180 Z-3,778 DR-
50 CC X+93,877 Y-51,497
51 CP IPA-180 Z-4,108 DR-
52 CC X+93,877 Y-51,497
53 CP IPA-180 Z-4,437 DR-
54 CC X+93,877 Y-51,497
55 CP IPA-180 Z-4,766 DR-
56 CC X+93,877 Y-51,497
57 CP IPA-180 Z-5,095 DR-
58 CC X+93,877 Y-51,497
59 CP IPA-180 Z-5,424 DR-
60 CC X+93,877 Y-51,497
61 CP IPA-180 Z-5,753 DR-
62 CC X+93,877 Y-51,497
63 CP IPA-180 Z-6,082 DR-
64 CC X+93,877 Y-51,497
65 CP IPA-180 Z-6,412 DR-
66 CC X+93,877 Y-51,497
67 CP IPA-180 Z-6,741 DR-
68 CC X+93,877 Y-51,497
69 CP IPA-180 Z-7,07 DR-
70 CC X+93,877 Y-51,497
71 CP IPA-180 Z-7,399 DR-
72 CC X+93,877 Y-51,497
73 CP IPA-180 Z-7,728 DR-
74 CC X+93,877 Y-51,497
75 CP IPA-180 Z-8,057 DR-
76 CC X+93,877 Y-51,497
77 CP IPA-180 Z-8,386 DR-
78 CC X+93,877 Y-51,497
79 CP IPA-180 Z-8,715 DR-
80 CC X+93,877 Y-51,497
81 CP IPA-180 Z-9,044 DR-
82 CC X+93,877 Y-51,497
83 CP IPA-180 Z-9,374 DR-
84 CC X+93,877 Y-51,497
85 CP IPA-180 Z-9,703 DR-
86 CC X+93,877 Y-51,497
87 CP IPA-180 Z-10,032 DR-
88 CC X+93,877 Y-51,497
89 CP IPA-180 Z-10,361 DR-
90 CC X+93,877 Y-51,497
91 CP IPA-180 Z-10,69 DR-
92 CC X+93,877 Y-51,497
93 CP IPA-180 Z-11,019 DR-
94 CC X+93,877 Y-51,497
95 CP IPA-180 Z-11,348 DR-
96 CC X+93,877 Y-51,497
97 CP IPA-180 Z-11,678 DR-
98 CC X+93,877 Y-51,497
99 CP IPA-180 Z-12,007 DR-
100 CC X+93,877 Y-51,497
101 CP IPA-180 Z-12,336 DR-
102 CC X+93,877 Y-51,497
103 CP IPA-180 Z-12,665 DR-
104 CC X+93,877 Y-51,497
105 CP IPA-183,306 Z-13 DR-
106 L X+93,889 Y-51,497 F3565
107 CC X+93,852 Y-51,497
108 C X+93,814 Y-51,497 DR+
109 CC X+93,902 Y-51,497
110 C X+93,989 Y-51,497 DR+
111 CC X+93,852 Y-51,497
112 C X+93,714 Y-51,497 DR+
113 CC X+93,902 Y-51,497
114 C X+94,089 Y-51,497 DR+
115 CC X+93,852 Y-51,497
116 C X+93,614 Y-51,497 DR+
117 CC X+93,902 Y-51,497
118 C X+94,189 Y-51,497 DR+
119 CC X+93,852 Y-51,497
120 C X+93,514 Y-51,497 DR+
121 CC X+93,902 Y-51,497
122 C X+94,289 Y-51,497 DR+
123 CC X+93,852 Y-51,497
124 C X+93,414 Y-51,497 DR+
125 CC X+93,902 Y-51,497
126 C X+94,389 Y-51,497 DR+
127 CC X+93,852 Y-51,497
128 C X+93,314 Y-51,497 DR+
129 CC X+93,902 Y-51,497
130 C X+94,489 Y-51,497 DR+
131 CC X+93,852 Y-51,497
132 C X+93,214 Y-51,497 DR+
133 CC X+93,902 Y-51,497
134 C X+94,589 Y-51,497 DR+
135 CC X+93,852 Y-51,497
136 C X+93,114 Y-51,497 DR+
137 CC X+93,902 Y-51,497
138 C X+94,689 Y-51,497 DR+
139 CC X+93,852 Y-51,497
140 C X+93,014 Y-51,497 DR+
141 CC X+93,902 Y-51,497
142 C X+94,789 Y-51,497 DR+
143 CC X+93,852 Y-51,497
144 C X+92,914 Y-51,497 DR+
145 CC X+93,902 Y-51,497
146 C X+94,889 Y-51,497 DR+
147 CC X+93,852 Y-51,497
148 C X+92,814 Y-51,497 DR+
149 CC X+93,902 Y-51,497
150 C X+94,989 Y-51,497 DR+
151 CC X+93,852 Y-51,497
152 C X+92,714 Y-51,497 DR+
153 CC X+93,902 Y-51,497
154 C X+95,089 Y-51,497 DR+
155 CC X+93,852 Y-51,497
156 C X+92,614 Y-51,497 DR+
157 CC X+93,902 Y-51,497
158 C X+95,189 Y-51,497 DR+
159 CC X+93,852 Y-51,497
160 C X+92,514 Y-51,497 DR+
161 CC X+93,902 Y-51,497
162 C X+95,289 Y-51,497 DR+
163 CC X+93,852 Y-51,497
164 C X+92,414 Y-51,497 DR+
165 CC X+93,902 Y-51,497
166 C X+95,389 Y-51,497 DR+
167 CC X+93,852 Y-51,497
168 C X+92,314 Y-51,497 DR+
169 CC X+93,902 Y-51,497
170 C X+95,489 Y-51,497 DR+
171 CC X+93,852 Y-51,497
172 C X+92,214 Y-51,497 DR+
173 CC X+93,902 Y-51,497
174 C X+95,589 Y-51,497 DR+
175 CC X+93,852 Y-51,497
176 C X+92,114 Y-51,497 DR+
177 CC X+93,902 Y-51,497
178 C X+95,689 Y-51,497 DR+
179 CC X+93,852 Y-51,497
180 C X+92,014 Y-51,497 DR+
181 CC X+93,902 Y-51,497
182 C X+95,789 Y-51,497 DR+
183 CC X+93,852 Y-51,497
184 C X+91,914 Y-51,497 DR+
185 CC X+93,902 Y-51,497
186 C X+95,889 Y-51,497 DR+
187 CC X+93,852 Y-51,497
188 C X+91,814 Y-51,497 DR+
189 CC X+93,902 Y-51,497
190 C X+95,989 Y-51,497 DR+
191 CC X+93,852 Y-51,497
192 C X+91,714 Y-51,497 DR+
193 CC X+93,902 Y-51,497
194 C X+96,089 Y-51,497 DR+
195 CC X+93,852 Y-51,497
196 C X+91,614 Y-51,497 DR+
197 CC X+93,902 Y-51,497
198 C X+96,189 Y-51,497 DR+
199 CC X+93,852 Y-51,497
200 C X+91,514 Y-51,497 DR+
201 CC X+93,902 Y-51,497
202 C X+96,289 Y-51,497 DR+
203 CC X+93,852 Y-51,497
204 C X+91,414 Y-51,497 DR+
205 CC X+93,902 Y-51,497
206 C X+96,389 Y-51,497 DR+
207 CC X+93,852 Y-51,497
208 C X+91,314 Y-51,497 DR+
209 CC X+93,902 Y-51,497
210 C X+96,489 Y-51,497 DR+
211 CC X+93,852 Y-51,497
212 C X+91,214 Y-51,497 DR+
213 CC X+93,902 Y-51,497
214 C X+96,589 Y-51,497 DR+
215 CC X+93,852 Y-51,497
216 C X+91,114 Y-51,497 DR+
217 CC X+93,902 Y-51,497
218 C X+96,689 Y-51,497 DR+
219 CC X+93,852 Y-51,497
220 C X+91,014 Y-51,497 DR+
221 CC X+93,902 Y-51,497
222 C X+96,789 Y-51,497 DR+
223 CC X+93,852 Y-51,497
224 C X+90,914 Y-51,497 DR+
225 CC X+93,902 Y-51,497
226 C X+96,889 Y-51,497 DR+
227 CC X+93,852 Y-51,497
228 C X+90,814 Y-51,497 DR+
229 CC X+93,902 Y-51,497
230 C X+96,989 Y-51,497 DR+
231 CC X+93,852 Y-51,497
232 C X+90,714 Y-51,497 DR+
233 CC X+93,902 Y-51,497
234 C X+97,089 Y-51,497 DR+
235 CC X+93,852 Y-51,497
236 C X+90,614 Y-51,497 DR+
237 CC X+93,902 Y-51,497
238 C X+97,189 Y-51,497 DR+
239 CC X+93,852 Y-51,497
240 C X+90,514 Y-51,497 DR+
241 CC X+93,902 Y-51,497
242 C X+97,289 Y-51,497 DR+
243 CC X+93,852 Y-51,497
244 C X+90,414 Y-51,497 DR+
245 CC X+93,902 Y-51,497
246 C X+97,389 Y-51,497 DR+
247 CC X+93,852 Y-51,497
248 C X+90,314 Y-51,497 DR+
249 CC X+93,902 Y-51,497
250 C X+97,489 Y-51,497 DR+
251 CC X+93,852 Y-51,497
252 C X+90,214 Y-51,497 DR+
253 CC X+93,902 Y-51,497
254 C X+97,589 Y-51,497 DR+
255 CC X+93,852 Y-51,497
256 C X+90,114 Y-51,497 DR+
257 CC X+93,902 Y-51,497
258 C X+97,689 Y-51,497 DR+
259 CC X+93,852 Y-51,497
260 C X+90,014 Y-51,497 DR+
261 CC X+93,902 Y-51,497
262 C X+97,789 Y-51,497 DR+
263 CC X+93,852 Y-51,497
264 C X+89,914 Y-51,497 DR+
265 CC X+93,902 Y-51,497
266 C X+97,889 Y-51,497 DR+
267 CC X+93,852 Y-51,497
268 C X+89,814 Y-51,497 DR+
269 CC X+93,902 Y-51,497
270 C X+97,989 Y-51,497 DR+
271 CC X+93,852 Y-51,497
272 C X+89,714 Y-51,497 DR+
273 CC X+93,902 Y-51,497
274 C X+98,089 Y-51,497 DR+
275 CC X+93,852 Y-51,497
276 C X+89,614 Y-51,497 DR+
277 CC X+93,902 Y-51,497
278 C X+98,189 Y-51,497 DR+
279 CC X+93,852 Y-51,497
280 C X+89,514 Y-51,497 DR+
281 CC X+93,902 Y-51,497
282 C X+98,289 Y-51,497 DR+
283 CC X+93,852 Y-51,497
284 C X+89,414 Y-51,497 DR+
285 CC X+93,902 Y-51,497
286 C X+98,389 Y-51,497 DR+
287 CC X+93,852 Y-51,497
288 C X+89,314 Y-51,497 DR+
289 CC X+93,902 Y-51,497
290 C X+98,489 Y-51,497 DR+
291 CC X+93,852 Y-51,497
292 C X+89,214 Y-51,497 DR+
293 CC X+93,902 Y-51,497
294 C X+98,589 Y-51,497 DR+
295 CC X+93,852 Y-51,497
296 C X+89,114 Y-51,497 DR+
297 CC X+93,902 Y-51,497
298 C X+98,689 Y-51,497 DR+
299 CC X+93,852 Y-51,497
300 C X+89,014 Y-51,497 DR+
301 CC X+93,902 Y-51,497
302 C X+98,789 Y-51,497 DR+
303 CC X+93,852 Y-51,497
304 C X+88,914 Y-51,497 DR+
305 CC X+93,902 Y-51,497
306 C X+98,889 Y-51,497 DR+
307 CC X+93,852 Y-51,497
308 C X+88,814 Y-51,497 DR+
309 CC X+93,902 Y-51,497
310 C X+98,989 Y-51,497 DR+
311 CC X+93,852 Y-51,497
312 C X+88,714 Y-51,497 DR+
313 CC X+93,902 Y-51,497
314 C X+99,089 Y-51,497 DR+
315 CC X+93,852 Y-51,497
316 C X+88,614 Y-51,497 DR+
317 CC X+93,902 Y-51,497
318 C X+99,189 Y-51,497 DR+
319 CC X+93,852 Y-51,497
320 C X+88,514 Y-51,497 DR+
321 CC X+93,902 Y-51,497
322 C X+99,289 Y-51,497 DR+
323 CC X+93,852 Y-51,497
324 C X+88,414 Y-51,497 DR+
325 CC X+93,902 Y-51,497
326 C X+99,389 Y-51,497 DR+
327 CC X+93,852 Y-51,497
328 C X+88,314 Y-51,497 DR+
329 CC X+93,902 Y-51,497
330 C X+99,489 Y-51,497 DR+
331 CC X+93,852 Y-51,497
332 C X+88,214 Y-51,497 DR+
333 CC X+93,902 Y-51,497
334 C X+99,589 Y-51,497 DR+
335 CC X+93,852 Y-51,497
336 C X+88,114 Y-51,497 DR+
337 CC X+93,902 Y-51,497
338 C X+99,689 Y-51,497 DR+
339 CC X+93,852 Y-51,497
340 C X+88,014 Y-51,497 DR+
341 CC X+93,902 Y-51,497
342 C X+96,836 Y-56,601 DR+
343 CC X+93,877 Y-51,497
344 C X+99,777 Y-51,5 DR+
345 CC X+93,877 Y-51,497
346 C X+96,836 Y-56,601 DR+
347 L X+93,877 Y-51,497
348 TOOL CALL 19 Z S7427 DR-3
349 L X+88,077 Y-51,444 Z-13 RL
350 L X+88,027
351 CC X+88,027 Y-51,494
352 C X+87,977 Y-51,494 DR+
353 CC X+93,877 Y-51,497
354 C X+99,777 Y-51,5 DR+
355 CC X+93,877 Y-51,497
356 C X+87,977 Y-51,494 DR+
357 CC X+93,877 Y-51,497
358 C X+88,311 Y-53,456 DR+
359 CC X+93,877 Y-51,497
360 C X+99,777 Y-51,5 DR+
361 CC X+93,877 Y-51,497
362 C X+87,977 Y-51,494 DR+
363 CC X+93,877 Y-51,497
364 C X+88,311 Y-53,456 DR+
365 CC X+93,877 Y-51,497
366 C X+99,777 Y-51,5 DR+
367 CC X+93,877 Y-51,497
368 C X+87,977 Y-51,494 DR+
369 CC X+93,877 Y-51,497
370 C X+88,311 Y-53,456 DR+
371 CC X+88,358 Y-53,439
372 C X+88,375 Y-53,486 DR+
373 L X+93,877 Y-51,497 R0
374 L Z+50 FMAX
375 M9
376 M5
377 L Z-1 FMAX M91
378 ; T24 FRAISE DIA 12 FINITION FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
379 ; CORRECTION USURE GAUCHE
380 ; SUREP R 0.05 SUREP Z 0.
381 TOOL CALL 24 Z S1200 DR-6
382 TOOL DEF 1
383 L X+93,877 Y-51,497 FMAX M3
384 L Z+50 FMAX M25
385 L Z+2 FMAX
386 L Z-18 F500
387 L X+92,927 Y-50,496 RL
388 L X+91,927
389 CC X+91,927 Y-51,496
390 C X+90,927 Y-51,495 DR+
391 CC X+93,877 Y-51,497
392 C X+96,827 Y-51,499 DR+
393 CC X+93,877 Y-51,497
394 C X+90,927 Y-51,495 DR+
395 CC X+93,877 Y-51,497
396 C X+91,578 Y-53,346 DR+
397 CC X+93,877 Y-51,497
398 C X+96,827 Y-51,499 DR+
399 CC X+93,877 Y-51,497
400 C X+90,927 Y-51,495 DR+
401 CC X+93,877 Y-51,497
402 C X+91,578 Y-53,346 DR+
403 CC X+93,877 Y-51,497
404 C X+96,827 Y-51,499 DR+
405 CC X+93,877 Y-51,497
406 C X+90,927 Y-51,495 DR+
407 CC X+93,877 Y-51,497
408 C X+91,578 Y-53,346 DR+
409 CC X+92,357 Y-52,719
410 C X+92,984 Y-53,498 DR+
411 L X+93,763 Y-52,872
412 L X+93,877 Y-51,497 R0
413 L Z+50 FMAX
414 M78
415 M5
416 L Z-1 FMAX M91
417 M00
418 ; T24 FRAISE DIA 12 FINITION FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
419 ; CORRECTION USURE GAUCHE
420 ; SUREP R 0. SUREP Z 0.
421 TOOL CALL 24 Z S1200 DR-6
422 TOOL DEF 1
423 L X+93,877 Y-51,497 FMAX M3
424 L Z+50 FMAX M25
425 L Z+2 FMAX
426 L Z-18 F500
427 L X+92,877 Y-50,496 RL
428 L X+91,877
429 CC X+91,877 Y-51,496
430 C X+90,877 Y-51,495 DR+
431 CC X+93,877 Y-51,497
432 C X+96,877 Y-51,499 DR+
433 CC X+93,877 Y-51,497
434 C X+90,877 Y-51,495 DR+
435 CC X+93,877 Y-51,497
436 C X+91,518 Y-53,351 DR+
437 CC X+93,877 Y-51,497
438 C X+96,877 Y-51,499 DR+
439 CC X+93,877 Y-51,497
440 C X+90,877 Y-51,495 DR+
441 CC X+93,877 Y-51,497
442 C X+91,518 Y-53,351 DR+
443 CC X+93,877 Y-51,497
444 C X+96,877 Y-51,499 DR+
445 CC X+93,877 Y-51,497
446 C X+90,877 Y-51,495 DR+
447 CC X+93,877 Y-51,497
448 C X+91,518 Y-53,351 DR+
449 CC X+92,304 Y-52,733
450 C X+92,922 Y-53,519 DR+
451 L X+93,708 Y-52,901
452 L X+93,877 Y-51,497 R0
453 L Z+50 FMAX
454 M78
455 M5
456 L Z-1 FMAX M91
457 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
458 ; CORRECTION USURE GAUCHE
459 ; SUREP R 0. SUREP Z 0.
460 TOOL CALL 1 Z S6000 DR-2,5
461 TOOL DEF 19
462 L X+93,877 Y-51,497 FMAX M3
463 L Z+50 FMAX
464 L Z+2 FMAX
465 L Z-2,3 F800
466 L X+88,21 Y-51,077 RL F1200
467 L X+87,793
468 CC X+87,793 Y-51,493
469 C X+87,377 Y-51,493 DR+
470 CC X+93,877 Y-51,497
471 C X+100,377 Y-51,501 DR+
472 CC X+93,877 Y-51,497
473 C X+87,377 Y-51,493 DR+
474 CC X+93,877 Y-51,497
475 C X+87,681 Y-53,462 DR+
476 CC X+88,078 Y-53,336
477 C X+88,204 Y-53,733 DR+
478 L X+88,601 Y-53,607
479 L X+93,877 Y-51,497 R0
480 L Z+50 FMAX
481 M5
482 L Z-1 FMAX M91
483 L Y-1 FMAX M91
484 M30
485 END PGM REP119-CASSETTE-2-PLAQUETTE SF-E MM
