0 BEGIN PGM REP13 MATRICE EMBOUTI 2 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP13 MATRICE EMBOUTI 2
4 ; PROG-CN DU 28-01-21 A 10:24
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-1*
14 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
15 ; CORRECTION AUCUNE
16 ; SUREP R 0. SUREP Z 0.
17 TOOL CALL 19 Z S7427 DR+0
18 TOOL DEF 1
19 L X+4,081 Y+23,338 FMAX M3
20 L Z+50 FMAX M8
21 L Z+2 FMAX
22 L Z+0,5 F297
23 CC X+6,03 Y+21,47
24 CP IPA-180 Z-0,242 DR-
25 CC X+6,03 Y+21,47
26 CP IPA-180 Z-0,984 DR-
27 CC X+6,03 Y+21,47
28 CP IPA-180 Z-1,726 DR-
29 CC X+6,03 Y+21,47
30 CP IPA-180 Z-2,468 DR-
31 CC X+6,03 Y+21,47
32 CP IPA-133,775 Z-3,02 DR-
33 L X+6,043 Y+21,47 F3565
34 CC X+6,005 Y+21,47
35 C X+5,968 Y+21,47 DR+
36 CC X+6,055 Y+21,47
37 C X+6,143 Y+21,47 DR+
38 CC X+6,005 Y+21,47
39 C X+5,868 Y+21,47 DR+
40 CC X+6,055 Y+21,47
41 C X+6,243 Y+21,47 DR+
42 CC X+6,005 Y+21,47
43 C X+5,768 Y+21,47 DR+
44 CC X+6,055 Y+21,47
45 C X+6,343 Y+21,47 DR+
46 CC X+6,005 Y+21,47
47 C X+5,668 Y+21,47 DR+
48 CC X+6,055 Y+21,47
49 C X+6,443 Y+21,47 DR+
50 CC X+6,005 Y+21,47
51 C X+5,568 Y+21,47 DR+
52 CC X+6,055 Y+21,47
53 C X+6,543 Y+21,47 DR+
54 CC X+6,005 Y+21,47
55 C X+5,468 Y+21,47 DR+
56 CC X+6,055 Y+21,47
57 C X+6,643 Y+21,47 DR+
58 CC X+6,005 Y+21,47
59 C X+5,368 Y+21,47 DR+
60 CC X+6,055 Y+21,47
61 C X+6,743 Y+21,47 DR+
62 CC X+6,005 Y+21,47
63 C X+5,268 Y+21,47 DR+
64 CC X+6,055 Y+21,47
65 C X+6,843 Y+21,47 DR+
66 CC X+6,005 Y+21,47
67 C X+5,168 Y+21,47 DR+
68 CC X+6,055 Y+21,47
69 C X+6,943 Y+21,47 DR+
70 CC X+6,005 Y+21,47
71 C X+5,068 Y+21,47 DR+
72 CC X+6,055 Y+21,47
73 C X+7,043 Y+21,47 DR+
74 CC X+6,005 Y+21,47
75 C X+4,968 Y+21,47 DR+
76 CC X+6,055 Y+21,47
77 C X+7,143 Y+21,47 DR+
78 CC X+6,005 Y+21,47
79 C X+4,868 Y+21,47 DR+
80 CC X+6,055 Y+21,47
81 C X+7,243 Y+21,47 DR+
82 CC X+6,005 Y+21,47
83 C X+4,768 Y+21,47 DR+
84 CC X+6,055 Y+21,47
85 C X+7,343 Y+21,47 DR+
86 CC X+6,005 Y+21,47
87 C X+4,668 Y+21,47 DR+
88 CC X+6,055 Y+21,47
89 C X+7,443 Y+21,47 DR+
90 CC X+6,005 Y+21,47
91 C X+4,568 Y+21,47 DR+
92 CC X+6,055 Y+21,47
93 C X+7,543 Y+21,47 DR+
94 CC X+6,005 Y+21,47
95 C X+4,468 Y+21,47 DR+
96 CC X+6,055 Y+21,47
97 C X+7,643 Y+21,47 DR+
98 CC X+6,005 Y+21,47
99 C X+4,368 Y+21,47 DR+
100 CC X+6,055 Y+21,47
101 C X+7,743 Y+21,47 DR+
102 CC X+6,005 Y+21,47
103 C X+4,268 Y+21,47 DR+
104 CC X+6,055 Y+21,47
105 C X+7,843 Y+21,47 DR+
106 CC X+6,005 Y+21,47
107 C X+4,168 Y+21,47 DR+
108 CC X+6,055 Y+21,47
109 C X+7,943 Y+21,47 DR+
110 CC X+6,005 Y+21,47
111 C X+4,068 Y+21,47 DR+
112 CC X+6,055 Y+21,47
113 C X+8,043 Y+21,47 DR+
114 CC X+6,005 Y+21,47
115 C X+3,968 Y+21,47 DR+
116 CC X+6,055 Y+21,47
117 C X+8,143 Y+21,47 DR+
118 CC X+6,005 Y+21,47
119 C X+3,868 Y+21,47 DR+
120 CC X+6,055 Y+21,47
121 C X+8,243 Y+21,47 DR+
122 CC X+6,005 Y+21,47
123 C X+3,768 Y+21,47 DR+
124 CC X+6,055 Y+21,47
125 C X+8,343 Y+21,47 DR+
126 CC X+6,005 Y+21,47
127 C X+3,668 Y+21,47 DR+
128 CC X+6,055 Y+21,47
129 C X+8,443 Y+21,47 DR+
130 CC X+6,005 Y+21,47
131 C X+3,568 Y+21,47 DR+
132 CC X+6,055 Y+21,47
133 C X+8,543 Y+21,47 DR+
134 CC X+6,005 Y+21,47
135 C X+3,468 Y+21,47 DR+
136 CC X+6,055 Y+21,47
137 C X+8,643 Y+21,47 DR+
138 CC X+6,005 Y+21,47
139 C X+3,368 Y+21,47 DR+
140 CC X+6,055 Y+21,47
141 C X+8,743 Y+21,47 DR+
142 CC X+6,005 Y+21,47
143 C X+3,268 Y+21,47 DR+
144 CC X+6,055 Y+21,47
145 C X+8,843 Y+21,47 DR+
146 CC X+6,005 Y+21,47
147 C X+3,168 Y+21,47 DR+
148 CC X+6,055 Y+21,47
149 C X+8,943 Y+21,47 DR+
150 CC X+6,005 Y+21,47
151 C X+3,068 Y+21,47 DR+
152 CC X+6,055 Y+21,47
153 C X+9,043 Y+21,47 DR+
154 CC X+6,005 Y+21,47
155 C X+2,968 Y+21,47 DR+
156 CC X+6,055 Y+21,47
157 C X+9,143 Y+21,47 DR+
158 CC X+6,005 Y+21,47
159 C X+2,868 Y+21,47 DR+
160 CC X+6,055 Y+21,47
161 C X+9,243 Y+21,47 DR+
162 CC X+6,005 Y+21,47
163 C X+2,768 Y+21,47 DR+
164 CC X+6,055 Y+21,47
165 C X+9,343 Y+21,47 DR+
166 CC X+6,005 Y+21,47
167 C X+2,668 Y+21,47 DR+
168 CC X+6,055 Y+21,47
169 C X+9,443 Y+21,47 DR+
170 CC X+6,005 Y+21,47
171 C X+2,568 Y+21,47 DR+
172 CC X+6,055 Y+21,47
173 C X+7,789 Y+18,445 DR+
174 CC X+6,03 Y+21,47
175 C X+9,53 Y+21,47 DR+
176 CC X+6,03 Y+21,47
177 C X+7,789 Y+18,445 DR+
178 L Z+50 FMAX
179 L X+46,619 Y-27,668 FMAX
180 L Z+2 FMAX
181 L Z+0,5 F297
182 CC X+48,573 Y-29,532
183 CP IPA-180 Z-0,242 DR-
184 CC X+48,573 Y-29,532
185 CP IPA-180 Z-0,984 DR-
186 CC X+48,573 Y-29,532
187 CP IPA-180 Z-1,726 DR-
188 CC X+48,573 Y-29,532
189 CP IPA-180 Z-2,468 DR-
190 CC X+48,573 Y-29,532
191 CP IPA-133,782 Z-3,02 DR-
192 L X+48,585 Y-29,531 F3565
193 CC X+48,548 Y-29,531
194 C X+48,51 Y-29,531 DR+
195 CC X+48,598 Y-29,531
196 C X+48,685 Y-29,531 DR+
197 CC X+48,548 Y-29,531
198 C X+48,41 Y-29,531 DR+
199 CC X+48,598 Y-29,531
200 C X+48,785 Y-29,531 DR+
201 CC X+48,548 Y-29,531
202 C X+48,31 Y-29,531 DR+
203 CC X+48,598 Y-29,531
204 C X+48,885 Y-29,531 DR+
205 CC X+48,548 Y-29,531
206 C X+48,21 Y-29,531 DR+
207 CC X+48,598 Y-29,531
208 C X+48,985 Y-29,531 DR+
209 CC X+48,548 Y-29,531
210 C X+48,11 Y-29,531 DR+
211 CC X+48,598 Y-29,531
212 C X+49,085 Y-29,531 DR+
213 CC X+48,548 Y-29,531
214 C X+48,01 Y-29,531 DR+
215 CC X+48,598 Y-29,531
216 C X+49,185 Y-29,531 DR+
217 CC X+48,548 Y-29,531
218 C X+47,91 Y-29,531 DR+
219 CC X+48,598 Y-29,531
220 C X+49,285 Y-29,531 DR+
221 CC X+48,548 Y-29,531
222 C X+47,81 Y-29,531 DR+
223 CC X+48,598 Y-29,531
224 C X+49,385 Y-29,531 DR+
225 CC X+48,548 Y-29,531
226 C X+47,71 Y-29,531 DR+
227 CC X+48,598 Y-29,531
228 C X+49,485 Y-29,531 DR+
229 CC X+48,548 Y-29,531
230 C X+47,61 Y-29,531 DR+
231 CC X+48,598 Y-29,531
232 C X+49,585 Y-29,531 DR+
233 CC X+48,548 Y-29,531
234 C X+47,51 Y-29,531 DR+
235 CC X+48,598 Y-29,531
236 C X+49,685 Y-29,531 DR+
237 CC X+48,548 Y-29,531
238 C X+47,41 Y-29,531 DR+
239 CC X+48,598 Y-29,531
240 C X+49,785 Y-29,531 DR+
241 CC X+48,548 Y-29,531
242 C X+47,31 Y-29,531 DR+
243 CC X+48,598 Y-29,531
244 C X+49,885 Y-29,531 DR+
245 CC X+48,548 Y-29,531
246 C X+47,21 Y-29,531 DR+
247 CC X+48,598 Y-29,531
248 C X+49,985 Y-29,531 DR+
249 CC X+48,548 Y-29,531
250 C X+47,11 Y-29,531 DR+
251 CC X+48,598 Y-29,531
252 C X+50,085 Y-29,531 DR+
253 CC X+48,548 Y-29,531
254 C X+47,01 Y-29,531 DR+
255 CC X+48,598 Y-29,531
256 C X+50,185 Y-29,531 DR+
257 CC X+48,548 Y-29,531
258 C X+46,91 Y-29,531 DR+
259 CC X+48,598 Y-29,531
260 C X+50,285 Y-29,531 DR+
261 CC X+48,548 Y-29,531
262 C X+46,81 Y-29,531 DR+
263 CC X+48,598 Y-29,531
264 C X+50,385 Y-29,531 DR+
265 CC X+48,548 Y-29,531
266 C X+46,71 Y-29,531 DR+
267 CC X+48,598 Y-29,531
268 C X+50,485 Y-29,531 DR+
269 CC X+48,548 Y-29,531
270 C X+46,61 Y-29,531 DR+
271 CC X+48,598 Y-29,531
272 C X+50,585 Y-29,531 DR+
273 CC X+48,548 Y-29,531
274 C X+46,51 Y-29,531 DR+
275 CC X+48,598 Y-29,531
276 C X+50,685 Y-29,531 DR+
277 CC X+48,548 Y-29,531
278 C X+46,41 Y-29,531 DR+
279 CC X+48,598 Y-29,531
280 C X+50,785 Y-29,531 DR+
281 CC X+48,548 Y-29,531
282 C X+46,31 Y-29,531 DR+
283 CC X+48,598 Y-29,531
284 C X+50,885 Y-29,531 DR+
285 CC X+48,548 Y-29,531
286 C X+46,21 Y-29,531 DR+
287 CC X+48,598 Y-29,531
288 C X+50,985 Y-29,531 DR+
289 CC X+48,548 Y-29,531
290 C X+46,11 Y-29,531 DR+
291 CC X+48,598 Y-29,531
292 C X+51,085 Y-29,531 DR+
293 CC X+48,548 Y-29,531
294 C X+46,01 Y-29,531 DR+
295 CC X+48,598 Y-29,531
296 C X+51,185 Y-29,531 DR+
297 CC X+48,548 Y-29,531
298 C X+45,91 Y-29,531 DR+
299 CC X+48,598 Y-29,531
300 C X+51,285 Y-29,531 DR+
301 CC X+48,548 Y-29,531
302 C X+45,81 Y-29,531 DR+
303 CC X+48,598 Y-29,531
304 C X+51,385 Y-29,531 DR+
305 CC X+48,548 Y-29,531
306 C X+45,71 Y-29,531 DR+
307 CC X+48,598 Y-29,531
308 C X+51,485 Y-29,531 DR+
309 CC X+48,548 Y-29,531
310 C X+45,61 Y-29,531 DR+
311 CC X+48,598 Y-29,531
312 C X+51,585 Y-29,531 DR+
313 CC X+48,548 Y-29,531
314 C X+45,51 Y-29,531 DR+
315 CC X+48,598 Y-29,531
316 C X+51,685 Y-29,531 DR+
317 CC X+48,548 Y-29,531
318 C X+45,41 Y-29,531 DR+
319 CC X+48,598 Y-29,531
320 C X+51,785 Y-29,531 DR+
321 CC X+48,548 Y-29,531
322 C X+45,31 Y-29,531 DR+
323 CC X+48,598 Y-29,531
324 C X+51,885 Y-29,531 DR+
325 CC X+48,548 Y-29,531
326 C X+45,21 Y-29,531 DR+
327 CC X+48,598 Y-29,531
328 C X+51,985 Y-29,531 DR+
329 CC X+48,548 Y-29,531
330 C X+45,11 Y-29,531 DR+
331 CC X+48,598 Y-29,531
332 C X+50,332 Y-32,557 DR+
333 CC X+48,573 Y-29,531
334 C X+52,073 Y-29,531 DR+
335 CC X+48,573 Y-29,531
336 C X+50,332 Y-32,557 DR+
337 L Z+50 FMAX
338 TOOL CALL 19 Z S7427 DR-3
339 L X+6,03 Y+21,47 Z+50 FMAX
340 L Z+2 FMAX
341 L Z-3,02 F297
342 L X+3,73 Y+22,07 RL F3565
343 L X+3,13
344 CC X+3,13 Y+21,47
345 C X+2,53 Y+21,47 DR+
346 CC X+6,03 Y+21,47
347 C X+9,53 Y+21,47 DR+
348 CC X+6,03 Y+21,47
349 C X+2,53 Y+21,47 DR+
350 CC X+6,03 Y+21,47
351 C X+2,672 Y+20,484 DR+
352 CC X+6,03 Y+21,47
353 C X+9,53 Y+21,47 DR+
354 CC X+6,03 Y+21,47
355 C X+2,53 Y+21,47 DR+
356 CC X+6,03 Y+21,47
357 C X+2,672 Y+20,484 DR+
358 CC X+6,03 Y+21,47
359 C X+9,53 Y+21,47 DR+
360 CC X+6,03 Y+21,47
361 C X+2,53 Y+21,47 DR+
362 CC X+6,03 Y+21,47
363 C X+2,672 Y+20,484 DR+
364 CC X+3,248 Y+20,653
365 C X+3,417 Y+20,077 DR+
366 L X+3,992 Y+20,247
367 L X+6,03 Y+21,47 R0
368 L Z+50 FMAX
369 L X+48,573 Y-29,532 FMAX
370 L Z+2 FMAX
371 L Z-3,02 F297
372 L X+46,273 Y-28,931 RL F3565
373 L X+45,673
374 CC X+45,673 Y-29,531
375 C X+45,073 Y-29,531 DR+
376 CC X+48,573 Y-29,531
377 C X+52,073 Y-29,531 DR+
378 CC X+48,573 Y-29,531
379 C X+45,073 Y-29,531 DR+
380 CC X+48,573 Y-29,531
381 C X+45,215 Y-30,518 DR+
382 CC X+48,573 Y-29,531
383 C X+52,073 Y-29,531 DR+
384 CC X+48,573 Y-29,531
385 C X+45,073 Y-29,531 DR+
386 CC X+48,573 Y-29,531
387 C X+45,215 Y-30,518 DR+
388 CC X+48,573 Y-29,531
389 C X+52,073 Y-29,531 DR+
390 CC X+48,573 Y-29,531
391 C X+45,073 Y-29,531 DR+
392 CC X+48,573 Y-29,531
393 C X+45,215 Y-30,518 DR+
394 CC X+45,791 Y-30,349
395 C X+45,96 Y-30,924 DR+
396 L X+46,535 Y-30,755
397 L X+48,573 Y-29,532 R0
398 L Z+50 FMAX
399 M9
400 M5
401 L Z-1 FMAX M91
402 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
403 ; CORRECTION USURE GAUCHE
404 ; SUREP R 0. SUREP Z 0.
405 TOOL CALL 1 Z S6000 DR-2,5
406 TOOL DEF 19
407 L X+6,03 Y+21,47 FMAX M3
408 L Z+50 FMAX
409 L Z+2 FMAX
410 L Z-2,3 F800
411 L X+3,03 Y+21,97 RL F1200
412 L X+2,53
413 CC X+2,53 Y+21,47
414 C X+2,03 Y+21,47 DR+
415 CC X+6,03 Y+21,47
416 C X+10,03 Y+21,47 DR+
417 CC X+6,03 Y+21,47
418 C X+2,03 Y+21,47 DR+
419 CC X+6,03 Y+21,47
420 C X+2,154 Y+20,481 DR+
421 CC X+2,639 Y+20,605
422 C X+2,763 Y+20,12 DR+
423 L X+3,247 Y+20,244
424 L X+6,03 Y+21,47 R0
425 L Z+50 FMAX
426 L X+48,573 Y-29,532 FMAX
427 L Z+2 FMAX
428 L Z-2,3 F800
429 L X+45,573 Y-29,031 RL F1200
430 L X+45,073
431 CC X+45,073 Y-29,531
432 C X+44,573 Y-29,531 DR+
433 CC X+48,573 Y-29,531
434 C X+52,573 Y-29,531 DR+
435 CC X+48,573 Y-29,531
436 C X+44,573 Y-29,531 DR+
437 CC X+48,573 Y-29,531
438 C X+44,697 Y-30,521 DR+
439 CC X+45,182 Y-30,397
440 C X+45,305 Y-30,882 DR+
441 L X+45,79 Y-30,758
442 L X+48,573 Y-29,532 R0
443 L Z+50 FMAX
444 M5
445 L Z-1 FMAX M91
446 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
447 ; CORRECTION USURE GAUCHE
448 ; SUREP R 0. SUREP Z 0.
449 TOOL CALL 1 Z S6000 DR-2,5
450 TOOL DEF 19
451 L X-7,071 Y+67,5 FMAX M3
452 L Z+50 FMAX
453 L Z+2 FMAX
454 L Z-2,5 F800
455 L X-3,536 Y+63,964 RL F1200
456 CC X+0 Y+67,5
457 C X+0 Y+62,5 DR+
458 L X+100
459 CC X+100 Y+60
460 C X+102,5 Y+60 DR-
461 L Y-60
462 CC X+100 Y-60
463 C X+100 Y-62,5 DR-
464 L X-100
465 CC X-100 Y-60
466 C X-102,5 Y-60 DR-
467 L Y+60
468 CC X-100 Y+60
469 C X-100 Y+62,5 DR-
470 L X+2
471 CC X+2 Y+67,5
472 C X+5,536 Y+63,964 DR+
473 L X+9,071 Y+67,5 R0
474 L Z+50 FMAX
475 M5
476 L Z-1 FMAX M91
477 L Y-1 FMAX M91
478 M30
479 END PGM REP13 MATRICE EMBOUTI 2 MM
