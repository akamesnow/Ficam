0 BEGIN PGM REP 15 20656 20657 IND E MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 15 20656 20657 IND E
4 ; PROG-CN DU 02-11-21 A 10:12
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T17 P15323450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T16 FRAISE DIA 12 FINITION OK FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
10 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *657*
16 ; T17 P15323450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
17 ; CORRECTION AUCUNE
18 ; SUREP R 0.1 SUREP Z 0.
19 TOOL CALL 17 Z S2865 DR+0
20 TOOL DEF 16
21 L X+8,706 Y-3,538 FMAX M3
22 L Z+50 FMAX M25
23 L Z+2 FMAX
24 L Z+0,5 F500
25 CC X+12,683 Y-3,967
26 CP IPA-180 Z+0,061 DR-
27 CC X+12,683 Y-3,967
28 CP IPA-180 Z-0,378 DR-
29 CC X+12,683 Y-3,967
30 CP IPA-180 Z-0,817 DR-
31 CC X+12,683 Y-3,967
32 CP IPA-180 Z-1,255 DR-
33 CC X+12,683 Y-3,967
34 CP IPA-180 Z-1,694 DR-
35 CC X+12,683 Y-3,967
36 CP IPA-180 Z-2,133 DR-
37 CC X+12,683 Y-3,967
38 CP IPA-180 Z-2,572 DR-
39 CC X+12,683 Y-3,967
40 CP IPA-180 Z-3,011 DR-
41 CC X+12,683 Y-3,967
42 CP IPA-180 Z-3,45 DR-
43 CC X+12,683 Y-3,967
44 CP IPA-180 Z-3,888 DR-
45 CC X+12,683 Y-3,967
46 CP IPA-180 Z-4,327 DR-
47 CC X+12,683 Y-3,967
48 CP IPA-180 Z-4,766 DR-
49 CC X+12,683 Y-3,967
50 CP IPA-180 Z-5,205 DR-
51 CC X+12,683 Y-3,967
52 CP IPA-180 Z-5,644 DR-
53 CC X+12,683 Y-3,967
54 CP IPA-180 Z-6,082 DR-
55 CC X+12,683 Y-3,967
56 CP IPA-180 Z-6,521 DR-
57 CC X+12,683 Y-3,967
58 CP IPA-180 Z-6,96 DR-
59 CC X+12,683 Y-3,967
60 CP IPA-180 Z-7,399 DR-
61 CC X+12,683 Y-3,967
62 CP IPA-180 Z-7,838 DR-
63 CC X+12,683 Y-3,967
64 CP IPA-180 Z-8,277 DR-
65 CC X+12,683 Y-3,967
66 CP IPA-180 Z-8,715 DR-
67 CC X+12,683 Y-3,967
68 CP IPA-180 Z-9,154 DR-
69 CC X+12,683 Y-3,967
70 CP IPA-180 Z-9,593 DR-
71 CC X+12,683 Y-3,967
72 CP IPA-180 Z-10,032 DR-
73 CC X+12,683 Y-3,967
74 CP IPA-180 Z-10,471 DR-
75 CC X+12,683 Y-3,967
76 CP IPA-180 Z-10,91 DR-
77 CC X+12,683 Y-3,967
78 CP IPA-173,843 Z-11,333 DR-
79 L X+12,933 Y-3,967 F401
80 CC X+12,183 Y-3,967
81 C X+11,433 Y-3,967 DR+
82 CC X+13,183 Y-3,967
83 C X+14,933 Y-3,967 DR+
84 CC X+12,183 Y-3,967
85 C X+9,433 Y-3,967 DR+
86 CC X+13,183 Y-3,967
87 C X+16,933 Y-3,967 DR+
88 CC X+12,183 Y-3,967
89 C X+10,985 Y+0,629 DR+
90 CC X+12,683 Y-3,967
91 C X+17,583 Y-3,967 DR+
92 CC X+12,683 Y-3,967
93 C X+10,985 Y+0,629 DR+
94 L Z+10 FMAX
95 L X+8,706 Y-3,538 FMAX
96 L Z-9,333 FMAX
97 L Z-10,833 F500
98 CC X+12,683 Y-3,967
99 CP IPA-180 Z-11,272 DR-
100 CC X+12,683 Y-3,967
101 CP IPA-180 Z-11,711 DR-
102 CC X+12,683 Y-3,967
103 CP IPA-180 Z-12,15 DR-
104 CC X+12,683 Y-3,967
105 CP IPA-180 Z-12,589 DR-
106 CC X+12,683 Y-3,967
107 CP IPA-180 Z-13,028 DR-
108 CC X+12,683 Y-3,967
109 CP IPA-180 Z-13,466 DR-
110 CC X+12,683 Y-3,967
111 CP IPA-180 Z-13,905 DR-
112 CC X+12,683 Y-3,967
113 CP IPA-180 Z-14,344 DR-
114 CC X+12,683 Y-3,967
115 CP IPA-180 Z-14,783 DR-
116 CC X+12,683 Y-3,967
117 CP IPA-180 Z-15,222 DR-
118 CC X+12,683 Y-3,967
119 CP IPA-180 Z-15,66 DR-
120 CC X+12,683 Y-3,967
121 CP IPA-180 Z-16,099 DR-
122 CC X+12,683 Y-3,967
123 CP IPA-180 Z-16,538 DR-
124 CC X+12,683 Y-3,967
125 CP IPA-180 Z-16,977 DR-
126 CC X+12,683 Y-3,967
127 CP IPA-180 Z-17,416 DR-
128 CC X+12,683 Y-3,967
129 CP IPA-180 Z-17,855 DR-
130 CC X+12,683 Y-3,967
131 CP IPA-180 Z-18,294 DR-
132 CC X+12,683 Y-3,967
133 CP IPA-180 Z-18,732 DR-
134 CC X+12,683 Y-3,967
135 CP IPA-180 Z-19,171 DR-
136 CC X+12,683 Y-3,967
137 CP IPA-180 Z-19,61 DR-
138 CC X+12,683 Y-3,967
139 CP IPA-180 Z-20,049 DR-
140 CC X+12,683 Y-3,967
141 CP IPA-180 Z-20,488 DR-
142 CC X+12,683 Y-3,967
143 CP IPA-180 Z-20,926 DR-
144 CC X+12,683 Y-3,967
145 CP IPA-180 Z-21,365 DR-
146 CC X+12,683 Y-3,967
147 CP IPA-180 Z-21,804 DR-
148 CC X+12,683 Y-3,967
149 CP IPA-180 Z-22,243 DR-
150 CC X+12,683 Y-3,967
151 CP IPA-173,843 Z-22,667 DR-
152 L X+12,933 Y-3,967 F401
153 CC X+12,183 Y-3,967
154 C X+11,433 Y-3,967 DR+
155 CC X+13,183 Y-3,967
156 C X+14,933 Y-3,967 DR+
157 CC X+12,183 Y-3,967
158 C X+9,433 Y-3,967 DR+
159 CC X+13,183 Y-3,967
160 C X+16,933 Y-3,967 DR+
161 CC X+12,183 Y-3,967
162 C X+10,985 Y+0,629 DR+
163 CC X+12,683 Y-3,967
164 C X+17,583 Y-3,967 DR+
165 CC X+12,683 Y-3,967
166 C X+10,985 Y+0,629 DR+
167 L Z+10 FMAX
168 L X+8,706 Y-3,538 FMAX
169 L Z-20,667 FMAX
170 L Z-22,167 F500
171 CC X+12,683 Y-3,967
172 CP IPA-180 Z-22,605 DR-
173 CC X+12,683 Y-3,967
174 CP IPA-180 Z-23,044 DR-
175 CC X+12,683 Y-3,967
176 CP IPA-180 Z-23,483 DR-
177 CC X+12,683 Y-3,967
178 CP IPA-180 Z-23,922 DR-
179 CC X+12,683 Y-3,967
180 CP IPA-180 Z-24,361 DR-
181 CC X+12,683 Y-3,967
182 CP IPA-180 Z-24,8 DR-
183 CC X+12,683 Y-3,967
184 CP IPA-180 Z-25,239 DR-
185 CC X+12,683 Y-3,967
186 CP IPA-180 Z-25,677 DR-
187 CC X+12,683 Y-3,967
188 CP IPA-180 Z-26,116 DR-
189 CC X+12,683 Y-3,967
190 CP IPA-180 Z-26,555 DR-
191 CC X+12,683 Y-3,967
192 CP IPA-180 Z-26,994 DR-
193 CC X+12,683 Y-3,967
194 CP IPA-180 Z-27,433 DR-
195 CC X+12,683 Y-3,967
196 CP IPA-180 Z-27,871 DR-
197 CC X+12,683 Y-3,967
198 CP IPA-180 Z-28,31 DR-
199 CC X+12,683 Y-3,967
200 CP IPA-180 Z-28,749 DR-
201 CC X+12,683 Y-3,967
202 CP IPA-180 Z-29,188 DR-
203 CC X+12,683 Y-3,967
204 CP IPA-180 Z-29,627 DR-
205 CC X+12,683 Y-3,967
206 CP IPA-180 Z-30,066 DR-
207 CC X+12,683 Y-3,967
208 CP IPA-180 Z-30,505 DR-
209 CC X+12,683 Y-3,967
210 CP IPA-180 Z-30,943 DR-
211 CC X+12,683 Y-3,967
212 CP IPA-180 Z-31,382 DR-
213 CC X+12,683 Y-3,967
214 CP IPA-180 Z-31,821 DR-
215 CC X+12,683 Y-3,967
216 CP IPA-180 Z-32,26 DR-
217 CC X+12,683 Y-3,967
218 CP IPA-180 Z-32,699 DR-
219 CC X+12,683 Y-3,967
220 CP IPA-180 Z-33,138 DR-
221 CC X+12,683 Y-3,967
222 CP IPA-180 Z-33,576 DR-
223 CC X+12,683 Y-3,967
224 CP IPA-173,843 Z-34 DR-
225 L X+12,933 Y-3,967 F401
226 CC X+12,183 Y-3,967
227 C X+11,433 Y-3,967 DR+
228 CC X+13,183 Y-3,967
229 C X+14,933 Y-3,967 DR+
230 CC X+12,183 Y-3,967
231 C X+9,433 Y-3,967 DR+
232 CC X+13,183 Y-3,967
233 C X+16,933 Y-3,967 DR+
234 CC X+12,183 Y-3,967
235 C X+10,985 Y+0,629 DR+
236 CC X+12,683 Y-3,967
237 C X+17,583 Y-3,967 DR+
238 CC X+12,683 Y-3,967
239 C X+10,985 Y+0,629 DR+
240 L X+12,683 Y-3,967
241 TOOL CALL 17 Z S2865 DR-5
242 L X+9,783 Y-2,967 Z-34 RL
243 L X+8,783
244 CC X+8,783 Y-3,967
245 C X+7,783 Y-3,967 DR+
246 CC X+12,683 Y-3,967
247 C X+17,583 Y-3,967 DR+
248 CC X+12,683 Y-3,967
249 C X+7,783 Y-3,967 DR+
250 CC X+12,683 Y-3,967
251 C X+7,885 Y-4,96 DR+
252 CC X+12,683 Y-3,967
253 C X+17,583 Y-3,967 DR+
254 CC X+12,683 Y-3,967
255 C X+7,783 Y-3,967 DR+
256 CC X+12,683 Y-3,967
257 C X+7,885 Y-4,96 DR+
258 CC X+8,864 Y-4,758
259 C X+9,066 Y-5,737 DR+
260 L X+10,046 Y-5,534
261 L X+12,683 Y-3,967 R0
262 L Z+50 FMAX
263 M78
264 M5
265 L Z-1 FMAX M91
266 ; T16 FRAISE DIA 12 FINITION OK FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
267 ; CORRECTION USURE GAUCHE
268 ; SUREP R 0.05 SUREP Z 0.
269 TOOL CALL 16 Z S1200 DR-6
270 TOOL DEF 15
271 L X+12,683 Y-3,967 FMAX M3
272 L Z+50 FMAX M25
273 L Z+2 FMAX
274 L Z-40 F500
275 L X+11,133 Y-2,767 RL
276 L X+9,933
277 CC X+9,933 Y-3,967
278 C X+8,733 Y-3,967 DR+
279 CC X+12,683 Y-3,967
280 C X+16,633 Y-3,967 DR+
281 CC X+12,683 Y-3,967
282 C X+8,733 Y-3,967 DR+
283 CC X+12,683 Y-3,967
284 C X+8,859 Y-4,957 DR+
285 CC X+12,683 Y-3,967
286 C X+16,633 Y-3,967 DR+
287 CC X+12,683 Y-3,967
288 C X+8,733 Y-3,967 DR+
289 CC X+12,683 Y-3,967
290 C X+8,859 Y-4,957 DR+
291 CC X+12,683 Y-3,967
292 C X+16,633 Y-3,967 DR+
293 CC X+12,683 Y-3,967
294 C X+8,733 Y-3,967 DR+
295 CC X+12,683 Y-3,967
296 C X+8,859 Y-4,957 DR+
297 CC X+12,683 Y-3,967
298 C X+16,633 Y-3,967 DR+
299 CC X+12,683 Y-3,967
300 C X+8,733 Y-3,967 DR+
301 CC X+12,683 Y-3,967
302 C X+8,859 Y-4,957 DR+
303 CC X+10,021 Y-4,656
304 C X+10,321 Y-5,818 DR+
305 L X+11,483 Y-5,517
306 L X+12,683 Y-3,967 R0
307 L Z+50 FMAX
308 M78
309 M5
310 L Z-1 FMAX M91
311 M00
312 ; T16 FRAISE DIA 12 FINITION OK FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
313 ; CORRECTION USURE GAUCHE
314 ; SUREP R 0. SUREP Z 0.
315 TOOL CALL 16 Z S1200 DR-6
316 TOOL DEF 15
317 L X+12,683 Y-3,967 FMAX M3
318 L Z+50 FMAX M25
319 L Z+2 FMAX
320 L Z-40 F500
321 L X+11,083 Y-2,767 RL
322 L X+9,883
323 CC X+9,883 Y-3,967
324 C X+8,683 Y-3,967 DR+
325 CC X+12,683 Y-3,967
326 C X+16,683 Y-3,967 DR+
327 CC X+12,683 Y-3,967
328 C X+8,683 Y-3,967 DR+
329 CC X+12,683 Y-3,967
330 C X+8,807 Y-4,957 DR+
331 CC X+12,683 Y-3,967
332 C X+16,683 Y-3,967 DR+
333 CC X+12,683 Y-3,967
334 C X+8,683 Y-3,967 DR+
335 CC X+12,683 Y-3,967
336 C X+8,807 Y-4,957 DR+
337 CC X+12,683 Y-3,967
338 C X+16,683 Y-3,967 DR+
339 CC X+12,683 Y-3,967
340 C X+8,683 Y-3,967 DR+
341 CC X+12,683 Y-3,967
342 C X+8,807 Y-4,957 DR+
343 CC X+12,683 Y-3,967
344 C X+16,683 Y-3,967 DR+
345 CC X+12,683 Y-3,967
346 C X+8,683 Y-3,967 DR+
347 CC X+12,683 Y-3,967
348 C X+8,807 Y-4,957 DR+
349 CC X+9,97 Y-4,66
350 C X+10,267 Y-5,823 DR+
351 L X+11,429 Y-5,526
352 L X+12,683 Y-3,967 R0
353 L Z+50 FMAX
354 M78
355 M5
356 L Z-1 FMAX M91
357 ; T15 FAVORA FI FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
358 ; CORRECTION AUCUNE
359 ; SUREP R 0. SUREP Z 0.
360 TOOL CALL 15 Z S2546 DR+0
361 TOOL DEF 1
362 L X+12,683 Y-3,967 FMAX M3
363 L Z+50 FMAX M25
364 L Z+2 FMAX
365 L Z-9,9 F1000
366 L X+12,702 F397
367 CC X+12,645 Y-3,967
368 C X+12,589 Y-3,967 DR+
369 CC X+12,72 Y-3,967
370 C X+12,852 Y-3,967 DR+
371 CC X+12,645 Y-3,967
372 C X+12,439 Y-3,967 DR+
373 CC X+12,72 Y-3,967
374 C X+13,002 Y-3,967 DR+
375 CC X+12,645 Y-3,967
376 C X+12,289 Y-3,967 DR+
377 CC X+12,72 Y-3,967
378 C X+13,152 Y-3,967 DR+
379 CC X+12,645 Y-3,967
380 C X+12,139 Y-3,967 DR+
381 CC X+12,72 Y-3,967
382 C X+13,302 Y-3,967 DR+
383 CC X+12,645 Y-3,967
384 C X+11,989 Y-3,967 DR+
385 CC X+12,72 Y-3,967
386 C X+13,452 Y-3,967 DR+
387 CC X+12,645 Y-3,967
388 C X+11,839 Y-3,967 DR+
389 CC X+12,72 Y-3,967
390 C X+13,602 Y-3,967 DR+
391 CC X+12,645 Y-3,967
392 C X+11,689 Y-3,967 DR+
393 CC X+12,72 Y-3,967
394 C X+13,752 Y-3,967 DR+
395 CC X+12,645 Y-3,967
396 C X+11,539 Y-3,967 DR+
397 CC X+12,72 Y-3,967
398 C X+13,902 Y-3,967 DR+
399 CC X+12,645 Y-3,967
400 C X+11,389 Y-3,967 DR+
401 CC X+12,72 Y-3,967
402 C X+14,052 Y-3,967 DR+
403 CC X+12,645 Y-3,967
404 C X+11,239 Y-3,967 DR+
405 CC X+12,72 Y-3,967
406 C X+14,202 Y-3,967 DR+
407 CC X+12,645 Y-3,967
408 C X+11,089 Y-3,967 DR+
409 CC X+12,72 Y-3,967
410 C X+14,352 Y-3,967 DR+
411 CC X+12,645 Y-3,967
412 C X+10,939 Y-3,967 DR+
413 CC X+12,72 Y-3,967
414 C X+14,502 Y-3,967 DR+
415 CC X+12,645 Y-3,967
416 C X+10,789 Y-3,967 DR+
417 CC X+12,72 Y-3,967
418 C X+14,652 Y-3,967 DR+
419 CC X+12,645 Y-3,967
420 C X+10,639 Y-3,967 DR+
421 CC X+12,72 Y-3,967
422 C X+14,802 Y-3,967 DR+
423 CC X+12,645 Y-3,967
424 C X+10,489 Y-3,967 DR+
425 CC X+12,72 Y-3,967
426 C X+14,952 Y-3,967 DR+
427 CC X+12,645 Y-3,967
428 C X+10,339 Y-3,967 DR+
429 CC X+12,72 Y-3,967
430 C X+15,102 Y-3,967 DR+
431 CC X+12,645 Y-3,967
432 C X+10,189 Y-3,967 DR+
433 CC X+12,72 Y-3,967
434 C X+15,252 Y-3,967 DR+
435 CC X+12,645 Y-3,967
436 C X+10,039 Y-3,967 DR+
437 CC X+12,72 Y-3,967
438 C X+15,402 Y-3,967 DR+
439 CC X+12,645 Y-3,967
440 C X+9,889 Y-3,967 DR+
441 CC X+12,72 Y-3,967
442 C X+15,552 Y-3,967 DR+
443 CC X+12,645 Y-3,967
444 C X+9,739 Y-3,967 DR+
445 CC X+12,72 Y-3,967
446 C X+15,702 Y-3,967 DR+
447 CC X+12,645 Y-3,967
448 C X+9,589 Y-3,967 DR+
449 CC X+12,72 Y-3,967
450 C X+15,852 Y-3,967 DR+
451 CC X+12,645 Y-3,967
452 C X+9,439 Y-3,967 DR+
453 CC X+12,72 Y-3,967
454 C X+16,002 Y-3,967 DR+
455 CC X+12,645 Y-3,967
456 C X+9,289 Y-3,967 DR+
457 CC X+12,72 Y-3,967
458 C X+16,152 Y-3,967 DR+
459 CC X+12,645 Y-3,967
460 C X+9,139 Y-3,967 DR+
461 CC X+12,72 Y-3,967
462 C X+16,302 Y-3,967 DR+
463 CC X+12,645 Y-3,967
464 C X+8,989 Y-3,967 DR+
465 CC X+12,72 Y-3,967
466 C X+16,452 Y-3,967 DR+
467 CC X+12,645 Y-3,967
468 C X+8,839 Y-3,967 DR+
469 CC X+12,72 Y-3,967
470 C X+16,602 Y-3,967 DR+
471 CC X+12,645 Y-3,967
472 C X+8,689 Y-3,967 DR+
473 CC X+12,72 Y-3,967
474 C X+16,752 Y-3,967 DR+
475 CC X+12,645 Y-3,967
476 C X+8,539 Y-3,967 DR+
477 CC X+12,72 Y-3,967
478 C X+16,902 Y-3,967 DR+
479 CC X+12,645 Y-3,967
480 C X+8,389 Y-3,967 DR+
481 CC X+12,72 Y-3,967
482 C X+17,052 Y-3,967 DR+
483 CC X+12,645 Y-3,967
484 C X+8,239 Y-3,967 DR+
485 CC X+12,72 Y-3,967
486 C X+17,202 Y-3,967 DR+
487 CC X+12,645 Y-3,967
488 C X+8,089 Y-3,967 DR+
489 CC X+12,72 Y-3,967
490 C X+17,352 Y-3,967 DR+
491 CC X+12,645 Y-3,967
492 C X+7,939 Y-3,967 DR+
493 CC X+12,72 Y-3,967
494 C X+17,502 Y-3,967 DR+
495 CC X+12,645 Y-3,967
496 C X+7,789 Y-3,967 DR+
497 CC X+12,72 Y-3,967
498 C X+17,652 Y-3,967 DR+
499 CC X+12,645 Y-3,967
500 C X+7,639 Y-3,967 DR+
501 CC X+12,72 Y-3,967
502 C X+17,802 Y-3,967 DR+
503 CC X+12,645 Y-3,967
504 C X+7,489 Y-3,967 DR+
505 CC X+12,72 Y-3,967
506 C X+17,952 Y-3,967 DR+
507 CC X+12,645 Y-3,967
508 C X+7,339 Y-3,967 DR+
509 CC X+12,72 Y-3,967
510 C X+18,102 Y-3,967 DR+
511 CC X+12,645 Y-3,967
512 C X+7,189 Y-3,967 DR+
513 CC X+12,72 Y-3,967
514 C X+18,252 Y-3,967 DR+
515 CC X+12,645 Y-3,967
516 C X+7,039 Y-3,967 DR+
517 CC X+12,72 Y-3,967
518 C X+18,402 Y-3,967 DR+
519 CC X+12,645 Y-3,967
520 C X+6,889 Y-3,967 DR+
521 CC X+12,72 Y-3,967
522 C X+18,552 Y-3,967 DR+
523 CC X+12,645 Y-3,967
524 C X+6,739 Y-3,967 DR+
525 CC X+12,72 Y-3,967
526 C X+18,702 Y-3,967 DR+
527 CC X+12,645 Y-3,967
528 C X+6,589 Y-3,967 DR+
529 CC X+12,72 Y-3,967
530 C X+18,852 Y-3,967 DR+
531 CC X+12,645 Y-3,967
532 C X+6,439 Y-3,967 DR+
533 CC X+12,72 Y-3,967
534 C X+19,002 Y-3,967 DR+
535 CC X+12,645 Y-3,967
536 C X+6,289 Y-3,967 DR+
537 CC X+12,72 Y-3,967
538 C X+19,152 Y-3,967 DR+
539 CC X+12,645 Y-3,967
540 C X+6,139 Y-3,967 DR+
541 CC X+12,72 Y-3,967
542 C X+19,302 Y-3,967 DR+
543 CC X+12,645 Y-3,967
544 C X+5,989 Y-3,967 DR+
545 CC X+12,72 Y-3,967
546 C X+19,452 Y-3,967 DR+
547 CC X+12,645 Y-3,967
548 C X+5,839 Y-3,967 DR+
549 CC X+12,72 Y-3,967
550 C X+19,602 Y-3,967 DR+
551 CC X+12,645 Y-3,967
552 C X+5,689 Y-3,967 DR+
553 CC X+12,72 Y-3,967
554 C X+19,752 Y-3,967 DR+
555 CC X+12,645 Y-3,967
556 C X+5,539 Y-3,967 DR+
557 CC X+12,72 Y-3,967
558 C X+19,902 Y-3,967 DR+
559 CC X+12,645 Y-3,967
560 C X+5,389 Y-3,967 DR+
561 CC X+12,72 Y-3,967
562 C X+20,052 Y-3,967 DR+
563 CC X+12,645 Y-3,967
564 C X+5,239 Y-3,967 DR+
565 CC X+12,72 Y-3,967
566 C X+16,447 Y-10,454 DR+
567 CC X+12,683 Y-3,967
568 C X+5,183 Y-3,967 DR+
569 CC X+12,683 Y-3,967
570 C X+16,447 Y-10,454 DR+
571 L Z+10 FMAX
572 L X+12,683 Y-3,967 FMAX
573 L Z-7,9 FMAX
574 L Z-10,1 F1000
575 L X+12,702 F397
576 CC X+12,645 Y-3,967
577 C X+12,589 Y-3,967 DR+
578 CC X+12,72 Y-3,967
579 C X+12,852 Y-3,967 DR+
580 CC X+12,645 Y-3,967
581 C X+12,439 Y-3,967 DR+
582 CC X+12,72 Y-3,967
583 C X+13,002 Y-3,967 DR+
584 CC X+12,645 Y-3,967
585 C X+12,289 Y-3,967 DR+
586 CC X+12,72 Y-3,967
587 C X+13,152 Y-3,967 DR+
588 CC X+12,645 Y-3,967
589 C X+12,139 Y-3,967 DR+
590 CC X+12,72 Y-3,967
591 C X+13,302 Y-3,967 DR+
592 CC X+12,645 Y-3,967
593 C X+11,989 Y-3,967 DR+
594 CC X+12,72 Y-3,967
595 C X+13,452 Y-3,967 DR+
596 CC X+12,645 Y-3,967
597 C X+11,839 Y-3,967 DR+
598 CC X+12,72 Y-3,967
599 C X+13,602 Y-3,967 DR+
600 CC X+12,645 Y-3,967
601 C X+11,689 Y-3,967 DR+
602 CC X+12,72 Y-3,967
603 C X+13,752 Y-3,967 DR+
604 CC X+12,645 Y-3,967
605 C X+11,539 Y-3,967 DR+
606 CC X+12,72 Y-3,967
607 C X+13,902 Y-3,967 DR+
608 CC X+12,645 Y-3,967
609 C X+11,389 Y-3,967 DR+
610 CC X+12,72 Y-3,967
611 C X+14,052 Y-3,967 DR+
612 CC X+12,645 Y-3,967
613 C X+11,239 Y-3,967 DR+
614 CC X+12,72 Y-3,967
615 C X+14,202 Y-3,967 DR+
616 CC X+12,645 Y-3,967
617 C X+11,089 Y-3,967 DR+
618 CC X+12,72 Y-3,967
619 C X+14,352 Y-3,967 DR+
620 CC X+12,645 Y-3,967
621 C X+10,939 Y-3,967 DR+
622 CC X+12,72 Y-3,967
623 C X+14,502 Y-3,967 DR+
624 CC X+12,645 Y-3,967
625 C X+10,789 Y-3,967 DR+
626 CC X+12,72 Y-3,967
627 C X+14,652 Y-3,967 DR+
628 CC X+12,645 Y-3,967
629 C X+10,639 Y-3,967 DR+
630 CC X+12,72 Y-3,967
631 C X+14,802 Y-3,967 DR+
632 CC X+12,645 Y-3,967
633 C X+10,489 Y-3,967 DR+
634 CC X+12,72 Y-3,967
635 C X+14,952 Y-3,967 DR+
636 CC X+12,645 Y-3,967
637 C X+10,339 Y-3,967 DR+
638 CC X+12,72 Y-3,967
639 C X+15,102 Y-3,967 DR+
640 CC X+12,645 Y-3,967
641 C X+10,189 Y-3,967 DR+
642 CC X+12,72 Y-3,967
643 C X+15,252 Y-3,967 DR+
644 CC X+12,645 Y-3,967
645 C X+10,039 Y-3,967 DR+
646 CC X+12,72 Y-3,967
647 C X+15,402 Y-3,967 DR+
648 CC X+12,645 Y-3,967
649 C X+9,889 Y-3,967 DR+
650 CC X+12,72 Y-3,967
651 C X+15,552 Y-3,967 DR+
652 CC X+12,645 Y-3,967
653 C X+9,739 Y-3,967 DR+
654 CC X+12,72 Y-3,967
655 C X+15,702 Y-3,967 DR+
656 CC X+12,645 Y-3,967
657 C X+9,589 Y-3,967 DR+
658 CC X+12,72 Y-3,967
659 C X+15,852 Y-3,967 DR+
660 CC X+12,645 Y-3,967
661 C X+9,439 Y-3,967 DR+
662 CC X+12,72 Y-3,967
663 C X+16,002 Y-3,967 DR+
664 CC X+12,645 Y-3,967
665 C X+9,289 Y-3,967 DR+
666 CC X+12,72 Y-3,967
667 C X+16,152 Y-3,967 DR+
668 CC X+12,645 Y-3,967
669 C X+9,139 Y-3,967 DR+
670 CC X+12,72 Y-3,967
671 C X+16,302 Y-3,967 DR+
672 CC X+12,645 Y-3,967
673 C X+8,989 Y-3,967 DR+
674 CC X+12,72 Y-3,967
675 C X+16,452 Y-3,967 DR+
676 CC X+12,645 Y-3,967
677 C X+8,839 Y-3,967 DR+
678 CC X+12,72 Y-3,967
679 C X+16,602 Y-3,967 DR+
680 CC X+12,645 Y-3,967
681 C X+8,689 Y-3,967 DR+
682 CC X+12,72 Y-3,967
683 C X+16,752 Y-3,967 DR+
684 CC X+12,645 Y-3,967
685 C X+8,539 Y-3,967 DR+
686 CC X+12,72 Y-3,967
687 C X+16,902 Y-3,967 DR+
688 CC X+12,645 Y-3,967
689 C X+8,389 Y-3,967 DR+
690 CC X+12,72 Y-3,967
691 C X+17,052 Y-3,967 DR+
692 CC X+12,645 Y-3,967
693 C X+8,239 Y-3,967 DR+
694 CC X+12,72 Y-3,967
695 C X+17,202 Y-3,967 DR+
696 CC X+12,645 Y-3,967
697 C X+8,089 Y-3,967 DR+
698 CC X+12,72 Y-3,967
699 C X+17,352 Y-3,967 DR+
700 CC X+12,645 Y-3,967
701 C X+7,939 Y-3,967 DR+
702 CC X+12,72 Y-3,967
703 C X+17,502 Y-3,967 DR+
704 CC X+12,645 Y-3,967
705 C X+7,789 Y-3,967 DR+
706 CC X+12,72 Y-3,967
707 C X+17,652 Y-3,967 DR+
708 CC X+12,645 Y-3,967
709 C X+7,639 Y-3,967 DR+
710 CC X+12,72 Y-3,967
711 C X+17,802 Y-3,967 DR+
712 CC X+12,645 Y-3,967
713 C X+7,489 Y-3,967 DR+
714 CC X+12,72 Y-3,967
715 C X+17,952 Y-3,967 DR+
716 CC X+12,645 Y-3,967
717 C X+7,339 Y-3,967 DR+
718 CC X+12,72 Y-3,967
719 C X+18,102 Y-3,967 DR+
720 CC X+12,645 Y-3,967
721 C X+7,189 Y-3,967 DR+
722 CC X+12,72 Y-3,967
723 C X+18,252 Y-3,967 DR+
724 CC X+12,645 Y-3,967
725 C X+7,039 Y-3,967 DR+
726 CC X+12,72 Y-3,967
727 C X+18,402 Y-3,967 DR+
728 CC X+12,645 Y-3,967
729 C X+6,889 Y-3,967 DR+
730 CC X+12,72 Y-3,967
731 C X+18,552 Y-3,967 DR+
732 CC X+12,645 Y-3,967
733 C X+6,739 Y-3,967 DR+
734 CC X+12,72 Y-3,967
735 C X+18,702 Y-3,967 DR+
736 CC X+12,645 Y-3,967
737 C X+6,589 Y-3,967 DR+
738 CC X+12,72 Y-3,967
739 C X+18,852 Y-3,967 DR+
740 CC X+12,645 Y-3,967
741 C X+6,439 Y-3,967 DR+
742 CC X+12,72 Y-3,967
743 C X+19,002 Y-3,967 DR+
744 CC X+12,645 Y-3,967
745 C X+6,289 Y-3,967 DR+
746 CC X+12,72 Y-3,967
747 C X+19,152 Y-3,967 DR+
748 CC X+12,645 Y-3,967
749 C X+6,139 Y-3,967 DR+
750 CC X+12,72 Y-3,967
751 C X+19,302 Y-3,967 DR+
752 CC X+12,645 Y-3,967
753 C X+5,989 Y-3,967 DR+
754 CC X+12,72 Y-3,967
755 C X+19,452 Y-3,967 DR+
756 CC X+12,645 Y-3,967
757 C X+5,839 Y-3,967 DR+
758 CC X+12,72 Y-3,967
759 C X+19,602 Y-3,967 DR+
760 CC X+12,645 Y-3,967
761 C X+5,689 Y-3,967 DR+
762 CC X+12,72 Y-3,967
763 C X+19,752 Y-3,967 DR+
764 CC X+12,645 Y-3,967
765 C X+5,539 Y-3,967 DR+
766 CC X+12,72 Y-3,967
767 C X+19,902 Y-3,967 DR+
768 CC X+12,645 Y-3,967
769 C X+5,389 Y-3,967 DR+
770 CC X+12,72 Y-3,967
771 C X+20,052 Y-3,967 DR+
772 CC X+12,645 Y-3,967
773 C X+5,239 Y-3,967 DR+
774 CC X+12,72 Y-3,967
775 C X+16,447 Y-10,454 DR+
776 CC X+12,683 Y-3,967
777 C X+5,183 Y-3,967 DR+
778 CC X+12,683 Y-3,967
779 C X+16,447 Y-10,454 DR+
780 L X+12,683 Y-3,967
781 TOOL CALL 15 Z S2546 DR-5
782 L X+18,183 Y-4,967 Z-10,1 RL
783 L X+19,183
784 CC X+19,183 Y-3,967
785 C X+20,183 Y-3,967 DR+
786 CC X+12,683 Y-3,967
787 C X+5,183 Y-3,967 DR+
788 CC X+12,683 Y-3,967
789 C X+20,183 Y-3,967 DR+
790 CC X+12,683 Y-3,967
791 C X+20,116 Y-2,97 DR+
792 CC X+12,683 Y-3,967
793 C X+5,183 Y-3,967 DR+
794 CC X+12,683 Y-3,967
795 C X+20,183 Y-3,967 DR+
796 CC X+12,683 Y-3,967
797 C X+20,116 Y-2,97 DR+
798 CC X+19,125 Y-3,103
799 C X+18,992 Y-2,112 DR+
800 L X+18,001 Y-2,245
801 L X+12,683 Y-3,967 R0
802 L Z+50 FMAX
803 M78
804 M5
805 L Z-1 FMAX M91
806 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
807 ; CORRECTION USURE GAUCHE
808 ; SUREP R 0. SUREP Z 0.
809 TOOL CALL 1 Z S6000 DR-2,5
810 TOOL DEF 17
811 L X+12,683 Y-3,967 FMAX M3
812 L Z+50 FMAX
813 L Z+2 FMAX
814 L Z-2,3 F800
815 L X+21,683 Y-4,467 RL F1200
816 L X+22,183
817 CC X+22,183 Y-3,967
818 C X+22,683 Y-3,967 DR+
819 CC X+12,683 Y-3,967
820 C X+2,683 Y-3,967 DR+
821 CC X+12,683 Y-3,967
822 C X+22,683 Y-3,967 DR+
823 CC X+12,683 Y-3,967
824 C X+22,633 Y-2,969 DR+
825 CC X+22,135 Y-3,019
826 C X+22,086 Y-2,521 DR+
827 L X+21,588 Y-2,571
828 L X+12,683 Y-3,967 R0
829 L Z-2,5 F800
830 L X+21,683 Y-4,467 RL F1200
831 L X+22,183
832 CC X+22,183 Y-3,967
833 C X+22,683 Y-3,967 DR+
834 CC X+12,683 Y-3,967
835 C X+2,683 Y-3,967 DR+
836 CC X+12,683 Y-3,967
837 C X+22,683 Y-3,967 DR+
838 CC X+12,683 Y-3,967
839 C X+22,633 Y-2,969 DR+
840 CC X+22,135 Y-3,019
841 C X+22,086 Y-2,521 DR+
842 L X+21,588 Y-2,571
843 L X+12,683 Y-3,967 R0
844 L Z+50 FMAX
845 M5
846 L Z-1 FMAX M91
847 L Y-1 FMAX M91
848 M30
849 END PGM REP 15 20656 20657 IND E MM
