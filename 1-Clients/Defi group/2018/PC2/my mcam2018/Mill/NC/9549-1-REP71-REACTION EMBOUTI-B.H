0 BEGIN PGM 9549-1-REP71-REACTION EMBOUTI-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - 9549-1-REP71-REACTION EMBOUTI-B
4 ; PROG-CN DU 11-07-19 A 14:05
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T21 P15323610  Z CONTOURNAGE FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-2*
14 ; T21 P15323610  Z CONTOURNAGE FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
15 ; CORRECTION USURE GAUCHE
16 ; SUREP R -0.5 SUREP Z 0.
17 TOOL CALL 21 Z S1393 DR-8
18 TOOL DEF 1
19 L X-59,203 Y+35,203 FMAX M3
20 L Z+50 FMAX M25
21 L Z+2 FMAX
22 L Z-22,5 F1000
23 L X-50,203 RL F501
24 CC X-50,203 Y+40,203
25 C X-46,667 Y+36,667 DR+
26 L X-36,667 Y+46,667
27 CC X-40,203 Y+50,203
28 C X-35,203 Y+50,203 DR+
29 L Y+59,203 R0
30 L Z+10 FMAX
31 L X-57,081 Y+33,081 FMAX
32 L Z+2 FMAX
33 L Z-22,5 F1000
34 L X-48,081 RL F501
35 CC X-48,081 Y+38,081
36 C X-44,546 Y+34,546 DR+
37 L X-34,546 Y+44,546
38 CC X-38,081 Y+48,081
39 C X-33,081 Y+48,081 DR+
40 L Y+57,081 R0
41 L Z+10 FMAX
42 L X-54,96 Y+30,96 FMAX
43 L Z+2 FMAX
44 L Z-22,5 F1000
45 L X-45,96 RL F501
46 CC X-45,96 Y+35,96
47 C X-42,425 Y+32,425 DR+
48 L X-32,425 Y+42,425
49 CC X-35,96 Y+45,96
50 C X-30,96 Y+45,96 DR+
51 L Y+54,96 R0
52 L Z+10 FMAX
53 L X-52,839 Y+28,839 FMAX
54 L Z+2 FMAX
55 L Z-22,5 F1000
56 L X-43,839 RL F501
57 CC X-43,839 Y+33,839
58 C X-40,303 Y+30,303 DR+
59 L X-30,303 Y+40,303
60 CC X-33,839 Y+43,839
61 C X-28,839 Y+43,839 DR+
62 L Y+52,839 R0
63 L Z+10 FMAX
64 L X-59,203 Y+35,203 FMAX
65 L Z-20,5 FMAX
66 L Z-45 F1000
67 L X-50,203 RL F501
68 CC X-50,203 Y+40,203
69 C X-46,667 Y+36,667 DR+
70 L X-36,667 Y+46,667
71 CC X-40,203 Y+50,203
72 C X-35,203 Y+50,203 DR+
73 L Y+59,203 R0
74 L Z+10 FMAX
75 L X-57,081 Y+33,081 FMAX
76 L Z-20,5 FMAX
77 L Z-45 F1000
78 L X-48,081 RL F501
79 CC X-48,081 Y+38,081
80 C X-44,546 Y+34,546 DR+
81 L X-34,546 Y+44,546
82 CC X-38,081 Y+48,081
83 C X-33,081 Y+48,081 DR+
84 L Y+57,081 R0
85 L Z+10 FMAX
86 L X-54,96 Y+30,96 FMAX
87 L Z-20,5 FMAX
88 L Z-45 F1000
89 L X-45,96 RL F501
90 CC X-45,96 Y+35,96
91 C X-42,425 Y+32,425 DR+
92 L X-32,425 Y+42,425
93 CC X-35,96 Y+45,96
94 C X-30,96 Y+45,96 DR+
95 L Y+54,96 R0
96 L Z+10 FMAX
97 L X-52,839 Y+28,839 FMAX
98 L Z-20,5 FMAX
99 L Z-45 F1000
100 L X-43,839 RL F501
101 CC X-43,839 Y+33,839
102 C X-40,303 Y+30,303 DR+
103 L X-30,303 Y+40,303
104 CC X-33,839 Y+43,839
105 C X-28,839 Y+43,839 DR+
106 L Y+52,839 R0
107 L Z+10 FMAX
108 L X-52,839 Y+28,839 FMAX
109 L Z-20,5 FMAX
110 L Z-45 F1000
111 L X-43,839 RL F501
112 CC X-43,839 Y+33,839
113 C X-40,303 Y+30,303 DR+
114 L X-30,303 Y+40,303
115 CC X-33,839 Y+43,839
116 C X-28,839 Y+43,839 DR+
117 L Y+52,839 R0
118 L Z+10 FMAX
119 L X-52,839 Y+28,839 FMAX
120 L Z-20,5 FMAX
121 L Z-45 F1000
122 L X-43,839 RL F501
123 CC X-43,839 Y+33,839
124 C X-40,303 Y+30,303 DR+
125 L X-30,303 Y+40,303
126 CC X-33,839 Y+43,839
127 C X-28,839 Y+43,839 DR+
128 L Y+52,839 R0
129 L Z+50 FMAX
130 L X+35,203 Y+59,203 FMAX
131 L Z+2 FMAX
132 L Z-22,5 F1000
133 L Y+50,203 RL F501
134 CC X+40,203 Y+50,203
135 C X+36,667 Y+46,667 DR+
136 L X+46,667 Y+36,667
137 CC X+50,203 Y+40,203
138 C X+50,203 Y+35,203 DR+
139 L X+59,203 R0
140 L Z+10 FMAX
141 L X+33,081 Y+57,081 FMAX
142 L Z+2 FMAX
143 L Z-22,5 F1000
144 L Y+48,081 RL F501
145 CC X+38,081 Y+48,081
146 C X+34,546 Y+44,546 DR+
147 L X+44,546 Y+34,546
148 CC X+48,081 Y+38,081
149 C X+48,081 Y+33,081 DR+
150 L X+57,081 R0
151 L Z+10 FMAX
152 L X+30,96 Y+54,96 FMAX
153 L Z+2 FMAX
154 L Z-22,5 F1000
155 L Y+45,96 RL F501
156 CC X+35,96 Y+45,96
157 C X+32,425 Y+42,425 DR+
158 L X+42,425 Y+32,425
159 CC X+45,96 Y+35,96
160 C X+45,96 Y+30,96 DR+
161 L X+54,96 R0
162 L Z+10 FMAX
163 L X+28,839 Y+52,839 FMAX
164 L Z+2 FMAX
165 L Z-22,5 F1000
166 L Y+43,839 RL F501
167 CC X+33,839 Y+43,839
168 C X+30,303 Y+40,303 DR+
169 L X+40,303 Y+30,303
170 CC X+43,839 Y+33,839
171 C X+43,839 Y+28,839 DR+
172 L X+52,839 R0
173 L Z+10 FMAX
174 L X+35,203 Y+59,203 FMAX
175 L Z-20,5 FMAX
176 L Z-45 F1000
177 L Y+50,203 RL F501
178 CC X+40,203 Y+50,203
179 C X+36,667 Y+46,667 DR+
180 L X+46,667 Y+36,667
181 CC X+50,203 Y+40,203
182 C X+50,203 Y+35,203 DR+
183 L X+59,203 R0
184 L Z+10 FMAX
185 L X+33,081 Y+57,081 FMAX
186 L Z-20,5 FMAX
187 L Z-45 F1000
188 L Y+48,081 RL F501
189 CC X+38,081 Y+48,081
190 C X+34,546 Y+44,546 DR+
191 L X+44,546 Y+34,546
192 CC X+48,081 Y+38,081
193 C X+48,081 Y+33,081 DR+
194 L X+57,081 R0
195 L Z+10 FMAX
196 L X+30,96 Y+54,96 FMAX
197 L Z-20,5 FMAX
198 L Z-45 F1000
199 L Y+45,96 RL F501
200 CC X+35,96 Y+45,96
201 C X+32,425 Y+42,425 DR+
202 L X+42,425 Y+32,425
203 CC X+45,96 Y+35,96
204 C X+45,96 Y+30,96 DR+
205 L X+54,96 R0
206 L Z+10 FMAX
207 L X+28,839 Y+52,839 FMAX
208 L Z-20,5 FMAX
209 L Z-45 F1000
210 L Y+43,839 RL F501
211 CC X+33,839 Y+43,839
212 C X+30,303 Y+40,303 DR+
213 L X+40,303 Y+30,303
214 CC X+43,839 Y+33,839
215 C X+43,839 Y+28,839 DR+
216 L X+52,839 R0
217 L Z+10 FMAX
218 L X+28,839 Y+52,839 FMAX
219 L Z-20,5 FMAX
220 L Z-45 F1000
221 L Y+43,839 RL F501
222 CC X+33,839 Y+43,839
223 C X+30,303 Y+40,303 DR+
224 L X+40,303 Y+30,303
225 CC X+43,839 Y+33,839
226 C X+43,839 Y+28,839 DR+
227 L X+52,839 R0
228 L Z+10 FMAX
229 L X+28,839 Y+52,839 FMAX
230 L Z-20,5 FMAX
231 L Z-45 F1000
232 L Y+43,839 RL F501
233 CC X+33,839 Y+43,839
234 C X+30,303 Y+40,303 DR+
235 L X+40,303 Y+30,303
236 CC X+43,839 Y+33,839
237 C X+43,839 Y+28,839 DR+
238 L X+52,839 R0
239 L Z+50 FMAX
240 L X+59,203 Y-35,203 FMAX
241 L Z+2 FMAX
242 L Z-22,5 F1000
243 L X+50,203 RL F501
244 CC X+50,203 Y-40,203
245 C X+46,667 Y-36,667 DR+
246 L X+36,667 Y-46,667
247 CC X+40,203 Y-50,203
248 C X+35,203 Y-50,203 DR+
249 L Y-59,203 R0
250 L Z+10 FMAX
251 L X+57,081 Y-33,081 FMAX
252 L Z+2 FMAX
253 L Z-22,5 F1000
254 L X+48,081 RL F501
255 CC X+48,081 Y-38,081
256 C X+44,546 Y-34,546 DR+
257 L X+34,546 Y-44,546
258 CC X+38,081 Y-48,081
259 C X+33,081 Y-48,081 DR+
260 L Y-57,081 R0
261 L Z+10 FMAX
262 L X+54,96 Y-30,96 FMAX
263 L Z+2 FMAX
264 L Z-22,5 F1000
265 L X+45,96 RL F501
266 CC X+45,96 Y-35,96
267 C X+42,425 Y-32,425 DR+
268 L X+32,425 Y-42,425
269 CC X+35,96 Y-45,96
270 C X+30,96 Y-45,96 DR+
271 L Y-54,96 R0
272 L Z+10 FMAX
273 L X+52,839 Y-28,839 FMAX
274 L Z+2 FMAX
275 L Z-22,5 F1000
276 L X+43,839 RL F501
277 CC X+43,839 Y-33,839
278 C X+40,303 Y-30,303 DR+
279 L X+30,303 Y-40,303
280 CC X+33,839 Y-43,839
281 C X+28,839 Y-43,839 DR+
282 L Y-52,839 R0
283 L Z+10 FMAX
284 L X+59,203 Y-35,203 FMAX
285 L Z-20,5 FMAX
286 L Z-45 F1000
287 L X+50,203 RL F501
288 CC X+50,203 Y-40,203
289 C X+46,667 Y-36,667 DR+
290 L X+36,667 Y-46,667
291 CC X+40,203 Y-50,203
292 C X+35,203 Y-50,203 DR+
293 L Y-59,203 R0
294 L Z+10 FMAX
295 L X+57,081 Y-33,081 FMAX
296 L Z-20,5 FMAX
297 L Z-45 F1000
298 L X+48,081 RL F501
299 CC X+48,081 Y-38,081
300 C X+44,546 Y-34,546 DR+
301 L X+34,546 Y-44,546
302 CC X+38,081 Y-48,081
303 C X+33,081 Y-48,081 DR+
304 L Y-57,081 R0
305 L Z+10 FMAX
306 L X+54,96 Y-30,96 FMAX
307 L Z-20,5 FMAX
308 L Z-45 F1000
309 L X+45,96 RL F501
310 CC X+45,96 Y-35,96
311 C X+42,425 Y-32,425 DR+
312 L X+32,425 Y-42,425
313 CC X+35,96 Y-45,96
314 C X+30,96 Y-45,96 DR+
315 L Y-54,96 R0
316 L Z+10 FMAX
317 L X+52,839 Y-28,839 FMAX
318 L Z-20,5 FMAX
319 L Z-45 F1000
320 L X+43,839 RL F501
321 CC X+43,839 Y-33,839
322 C X+40,303 Y-30,303 DR+
323 L X+30,303 Y-40,303
324 CC X+33,839 Y-43,839
325 C X+28,839 Y-43,839 DR+
326 L Y-52,839 R0
327 L Z+10 FMAX
328 L X+52,839 Y-28,839 FMAX
329 L Z-20,5 FMAX
330 L Z-45 F1000
331 L X+43,839 RL F501
332 CC X+43,839 Y-33,839
333 C X+40,303 Y-30,303 DR+
334 L X+30,303 Y-40,303
335 CC X+33,839 Y-43,839
336 C X+28,839 Y-43,839 DR+
337 L Y-52,839 R0
338 L Z+10 FMAX
339 L X+52,839 Y-28,839 FMAX
340 L Z-20,5 FMAX
341 L Z-45 F1000
342 L X+43,839 RL F501
343 CC X+43,839 Y-33,839
344 C X+40,303 Y-30,303 DR+
345 L X+30,303 Y-40,303
346 CC X+33,839 Y-43,839
347 C X+28,839 Y-43,839 DR+
348 L Y-52,839 R0
349 L Z+50 FMAX
350 L X-35,203 Y-59,203 FMAX
351 L Z+2 FMAX
352 L Z-22,5 F1000
353 L Y-50,203 RL F501
354 CC X-40,203 Y-50,203
355 C X-36,667 Y-46,667 DR+
356 L X-46,667 Y-36,667
357 CC X-50,203 Y-40,203
358 C X-50,203 Y-35,203 DR+
359 L X-59,203 R0
360 L Z+10 FMAX
361 L X-33,081 Y-57,081 FMAX
362 L Z+2 FMAX
363 L Z-22,5 F1000
364 L Y-48,081 RL F501
365 CC X-38,081 Y-48,081
366 C X-34,546 Y-44,546 DR+
367 L X-44,546 Y-34,546
368 CC X-48,081 Y-38,081
369 C X-48,081 Y-33,081 DR+
370 L X-57,081 R0
371 L Z+10 FMAX
372 L X-30,96 Y-54,96 FMAX
373 L Z+2 FMAX
374 L Z-22,5 F1000
375 L Y-45,96 RL F501
376 CC X-35,96 Y-45,96
377 C X-32,425 Y-42,425 DR+
378 L X-42,425 Y-32,425
379 CC X-45,96 Y-35,96
380 C X-45,96 Y-30,96 DR+
381 L X-54,96 R0
382 L Z+10 FMAX
383 L X-28,839 Y-52,839 FMAX
384 L Z+2 FMAX
385 L Z-22,5 F1000
386 L Y-43,839 RL F501
387 CC X-33,839 Y-43,839
388 C X-30,303 Y-40,303 DR+
389 L X-40,303 Y-30,303
390 CC X-43,839 Y-33,839
391 C X-43,839 Y-28,839 DR+
392 L X-52,839 R0
393 L Z+10 FMAX
394 L X-35,203 Y-59,203 FMAX
395 L Z-20,5 FMAX
396 L Z-45 F1000
397 L Y-50,203 RL F501
398 CC X-40,203 Y-50,203
399 C X-36,667 Y-46,667 DR+
400 L X-46,667 Y-36,667
401 CC X-50,203 Y-40,203
402 C X-50,203 Y-35,203 DR+
403 L X-59,203 R0
404 L Z+10 FMAX
405 L X-33,081 Y-57,081 FMAX
406 L Z-20,5 FMAX
407 L Z-45 F1000
408 L Y-48,081 RL F501
409 CC X-38,081 Y-48,081
410 C X-34,546 Y-44,546 DR+
411 L X-44,546 Y-34,546
412 CC X-48,081 Y-38,081
413 C X-48,081 Y-33,081 DR+
414 L X-57,081 R0
415 L Z+10 FMAX
416 L X-30,96 Y-54,96 FMAX
417 L Z-20,5 FMAX
418 L Z-45 F1000
419 L Y-45,96 RL F501
420 CC X-35,96 Y-45,96
421 C X-32,425 Y-42,425 DR+
422 L X-42,425 Y-32,425
423 CC X-45,96 Y-35,96
424 C X-45,96 Y-30,96 DR+
425 L X-54,96 R0
426 L Z+10 FMAX
427 L X-28,839 Y-52,839 FMAX
428 L Z-20,5 FMAX
429 L Z-45 F1000
430 L Y-43,839 RL F501
431 CC X-33,839 Y-43,839
432 C X-30,303 Y-40,303 DR+
433 L X-40,303 Y-30,303
434 CC X-43,839 Y-33,839
435 C X-43,839 Y-28,839 DR+
436 L X-52,839 R0
437 L Z+10 FMAX
438 L X-28,839 Y-52,839 FMAX
439 L Z-20,5 FMAX
440 L Z-45 F1000
441 L Y-43,839 RL F501
442 CC X-33,839 Y-43,839
443 C X-30,303 Y-40,303 DR+
444 L X-40,303 Y-30,303
445 CC X-43,839 Y-33,839
446 C X-43,839 Y-28,839 DR+
447 L X-52,839 R0
448 L Z+10 FMAX
449 L X-28,839 Y-52,839 FMAX
450 L Z-20,5 FMAX
451 L Z-45 F1000
452 L Y-43,839 RL F501
453 CC X-33,839 Y-43,839
454 C X-30,303 Y-40,303 DR+
455 L X-40,303 Y-30,303
456 CC X-43,839 Y-33,839
457 C X-43,839 Y-28,839 DR+
458 L X-52,839 R0
459 L Z+50 FMAX
460 M78
461 M5
462 L Z-1 FMAX M91
463 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
464 ; CORRECTION USURE GAUCHE
465 ; SUREP R 0. SUREP Z 0.
466 TOOL CALL 1 Z S6000 DR-2,5
467 TOOL DEF 21
468 L X-3,094 Y+39,946 FMAX M3
469 L Z+50 FMAX
470 L Z+2 FMAX
471 L Z-2,5 F800
472 L X-1,105 Y+37,958 RL F1200
473 CC X+0 Y+39,063
474 C X+0 Y+37,5 DR+
475 L X+25
476 CC X+25 Y+35
477 C X+26,768 Y+36,768 DR-
478 L X+36,768 Y+26,768
479 CC X+35 Y+25
480 C X+37,5 Y+25 DR-
481 L Y-25
482 CC X+35 Y-25
483 C X+36,768 Y-26,768 DR-
484 L X+26,768 Y-36,768
485 CC X+25 Y-35
486 C X+25 Y-37,5 DR-
487 L X-25
488 CC X-25 Y-35
489 C X-26,768 Y-36,768 DR-
490 L X-36,768 Y-26,768
491 CC X-35 Y-25
492 C X-37,5 Y-25 DR-
493 L Y+25
494 CC X-35 Y+25
495 C X-36,768 Y+26,768 DR-
496 L X-26,768 Y+36,768
497 CC X-25 Y+35
498 C X-25 Y+37,5 DR-
499 L X+0
500 CC X+0 Y+39,063
501 C X+1,105 Y+37,958 DR+
502 L X+3,094 Y+39,946 R0
503 L Z+50 FMAX
504 M5
505 L Z-1 FMAX M91
506 L Y-1 FMAX M91
507 M30
508 END PGM 9549-1-REP71-REACTION EMBOUTI-B MM
