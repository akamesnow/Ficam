0 BEGIN PGM REP05-20977-OP20-A-PORTE POINCON MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP05-20977-OP20-A-PORTE POINCON
4 ; PROG-CN DU 28-09-20 A 19:29
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T11 FO DIA KEN 15 5  OK DMF FORET DIAM=15.5 2 DENTS A=118. CARBURE
10 ; T21 ALESOIR DIA 16 CARB VC 15 ALESOIR DIAM=16. 5 DENTS ARS
11 ; T22 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-4*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 11
19 L X+60 Y-45 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,35 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X+60 Y-45 FMAX M99
24 L X-85 Y+0 FMAX M99
25 L Z+50 FMAX
26 M9
27 M5
28 L Z-1 FMAX M91
29 ; T11 FO DIA KEN 15 5  OK DMF FORET DIAM=15.5 2 DENTS A=118. CARBURE
30 TOOL CALL 11 Z S1000 DR+0
31 TOOL DEF 21
32 L X+60 Y-45 FMAX M3
33 L Z+50 FMAX M8
34 ;  DEBOURRAGE
35 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-88 ; PROFONDEUR~
    Q206=100 ; AVANCE PLONGEE PROF.~
    Q202=+7,75 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
36 L X+60 Y-45 FMAX M99
37 L X-85 Y+0 FMAX M99
38 L Z+50 FMAX
39 M9
40 M5
41 L Z-1 FMAX M91
42 ; T21 ALESOIR DIA 16 CARB VC 15 ALESOIR DIAM=16. 5 DENTS ARS
43 TOOL CALL 21 Z S320 DR+0
44 TOOL DEF 1
45 L X-85 Y+0 FMAX M3
46 L Z+50 FMAX M8
47 ;  POINTAGE-PERCAGE
48 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-88 ; PROFONDEUR~
    Q206=40 ; AVANCE PLONGEE PROF.~
    Q202=+88 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
49 L X-85 Y+0 FMAX M99
50 L X+60 Y-45 FMAX M99
51 L Z+50 FMAX
52 M9
53 M5
54 L Z-1 FMAX M91
55 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
56 ; CORRECTION USURE GAUCHE
57 ; SUREP R 0. SUREP Z 0.03
58 TOOL CALL 1 Z S6000 DR-2,5
59 TOOL DEF 22
60 L X-85 Y+0 FMAX M3
61 L Z+50 FMAX
62 L Z+2 FMAX
63 L Z-2,47 F800
64 L X-84,5 Y+4,5 RL F1200
65 L Y+5
66 CC X-85 Y+5
67 C X-85 Y+5,5 DR+
68 CC X-85 Y+0
69 C X-85 Y-5,5 DR+
70 CC X-85 Y+0
71 C X-85 Y+5,5 DR+
72 CC X-85 Y+0
73 C X-85,994 Y+5,409 DR+
74 CC X-85,904 Y+4,918
75 C X-86,396 Y+4,827 DR+
76 L X-86,305 Y+4,335
77 L X-85 Y+0 R0
78 L Z+50 FMAX
79 L X+60 Y-45 FMAX
80 L Z+2 FMAX
81 L Z-2,47 F800
82 L X+60,5 Y-40,5 RL F1200
83 L Y-40
84 CC X+60 Y-40
85 C X+60 Y-39,5 DR+
86 CC X+60 Y-45
87 C X+60 Y-50,5 DR+
88 CC X+60 Y-45
89 C X+60 Y-39,5 DR+
90 CC X+60 Y-45
91 C X+59,006 Y-39,591 DR+
92 CC X+59,096 Y-40,082
93 C X+58,604 Y-40,173 DR+
94 L X+58,695 Y-40,665
95 L X+60 Y-45 R0
96 L Z+50 FMAX
97 M5
98 L Z-1 FMAX M91
99 ; T22 P15323501 110 KG POCHJE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
100 ; CORRECTION USURE GAUCHE
101 ; SUREP R 0. SUREP Z 0.
102 TOOL CALL 22 Z S2387 DR-6
103 TOOL DEF 1
104 L X-118,314 Y+60,314 FMAX M3
105 L Z+50 FMAX M25
106 L Z+2 FMAX
107 L Z-14 F300
108 L X-111,314 RL F382
109 CC X-111,314 Y+66,314
110 C X-107,071 Y+62,071 DR+
111 L X-102,071 Y+67,071
112 CC X-106,314 Y+71,314
113 C X-100,314 Y+71,314 DR+
114 L Y+78,314 R0
115 L Z+10 FMAX
116 L X-115,485 Y+57,485 FMAX
117 L Z+2 FMAX
118 L Z-14 F300
119 L X-108,485 RL F382
120 CC X-108,485 Y+63,485
121 C X-104,243 Y+59,243 DR+
122 L X-99,243 Y+64,243
123 CC X-103,485 Y+68,485
124 C X-97,485 Y+68,485 DR+
125 L Y+75,485 R0
126 L Z+10 FMAX
127 L X-118,314 Y+60,314 FMAX
128 L Z-12 FMAX
129 L Z-28 F300
130 L X-111,314 RL F382
131 CC X-111,314 Y+66,314
132 C X-107,071 Y+62,071 DR+
133 L X-102,071 Y+67,071
134 CC X-106,314 Y+71,314
135 C X-100,314 Y+71,314 DR+
136 L Y+78,314 R0
137 L Z+10 FMAX
138 L X-115,485 Y+57,485 FMAX
139 L Z-12 FMAX
140 L Z-28 F300
141 L X-108,485 RL F382
142 CC X-108,485 Y+63,485
143 C X-104,243 Y+59,243 DR+
144 L X-99,243 Y+64,243
145 CC X-103,485 Y+68,485
146 C X-97,485 Y+68,485 DR+
147 L Y+75,485 R0
148 L Z+10 FMAX
149 L X-118,314 Y+60,314 FMAX
150 L Z-26 FMAX
151 L Z-42 F300
152 L X-111,314 RL F382
153 CC X-111,314 Y+66,314
154 C X-107,071 Y+62,071 DR+
155 L X-102,071 Y+67,071
156 CC X-106,314 Y+71,314
157 C X-100,314 Y+71,314 DR+
158 L Y+78,314 R0
159 L Z+10 FMAX
160 L X-115,485 Y+57,485 FMAX
161 L Z-26 FMAX
162 L Z-42 F300
163 L X-108,485 RL F382
164 CC X-108,485 Y+63,485
165 C X-104,243 Y+59,243 DR+
166 L X-99,243 Y+64,243
167 CC X-103,485 Y+68,485
168 C X-97,485 Y+68,485 DR+
169 L Y+75,485 R0
170 L Z+10 FMAX
171 L X-115,485 Y+57,485 FMAX
172 L Z-26 FMAX
173 L Z-42 F300
174 L X-108,485 RL F382
175 CC X-108,485 Y+63,485
176 C X-104,243 Y+59,243 DR+
177 L X-99,243 Y+64,243
178 CC X-103,485 Y+68,485
179 C X-97,485 Y+68,485 DR+
180 L Y+75,485 R0
181 L Z+50 FMAX
182 L X+100,314 Y+78,314 FMAX
183 L Z+2 FMAX
184 L Z-14 F300
185 L Y+71,314 RL F382
186 CC X+106,314 Y+71,314
187 C X+102,071 Y+67,071 DR+
188 L X+107,071 Y+62,071
189 CC X+111,314 Y+66,314
190 C X+111,314 Y+60,314 DR+
191 L X+118,314 R0
192 L Z+10 FMAX
193 L X+97,485 Y+75,485 FMAX
194 L Z+2 FMAX
195 L Z-14 F300
196 L Y+68,485 RL F382
197 CC X+103,485 Y+68,485
198 C X+99,243 Y+64,243 DR+
199 L X+104,243 Y+59,243
200 CC X+108,485 Y+63,485
201 C X+108,485 Y+57,485 DR+
202 L X+115,485 R0
203 L Z+10 FMAX
204 L X+100,314 Y+78,314 FMAX
205 L Z-12 FMAX
206 L Z-28 F300
207 L Y+71,314 RL F382
208 CC X+106,314 Y+71,314
209 C X+102,071 Y+67,071 DR+
210 L X+107,071 Y+62,071
211 CC X+111,314 Y+66,314
212 C X+111,314 Y+60,314 DR+
213 L X+118,314 R0
214 L Z+10 FMAX
215 L X+97,485 Y+75,485 FMAX
216 L Z-12 FMAX
217 L Z-28 F300
218 L Y+68,485 RL F382
219 CC X+103,485 Y+68,485
220 C X+99,243 Y+64,243 DR+
221 L X+104,243 Y+59,243
222 CC X+108,485 Y+63,485
223 C X+108,485 Y+57,485 DR+
224 L X+115,485 R0
225 L Z+10 FMAX
226 L X+100,314 Y+78,314 FMAX
227 L Z-26 FMAX
228 L Z-42 F300
229 L Y+71,314 RL F382
230 CC X+106,314 Y+71,314
231 C X+102,071 Y+67,071 DR+
232 L X+107,071 Y+62,071
233 CC X+111,314 Y+66,314
234 C X+111,314 Y+60,314 DR+
235 L X+118,314 R0
236 L Z+10 FMAX
237 L X+97,485 Y+75,485 FMAX
238 L Z-26 FMAX
239 L Z-42 F300
240 L Y+68,485 RL F382
241 CC X+103,485 Y+68,485
242 C X+99,243 Y+64,243 DR+
243 L X+104,243 Y+59,243
244 CC X+108,485 Y+63,485
245 C X+108,485 Y+57,485 DR+
246 L X+115,485 R0
247 L Z+10 FMAX
248 L X+97,485 Y+75,485 FMAX
249 L Z-26 FMAX
250 L Z-42 F300
251 L Y+68,485 RL F382
252 CC X+103,485 Y+68,485
253 C X+99,243 Y+64,243 DR+
254 L X+104,243 Y+59,243
255 CC X+108,485 Y+63,485
256 C X+108,485 Y+57,485 DR+
257 L X+115,485 R0
258 L Z+50 FMAX
259 L X+118,314 Y-60,314 FMAX
260 L Z+2 FMAX
261 L Z-14 F300
262 L X+111,314 RL F382
263 CC X+111,314 Y-66,314
264 C X+107,071 Y-62,071 DR+
265 L X+102,071 Y-67,071
266 CC X+106,314 Y-71,314
267 C X+100,314 Y-71,314 DR+
268 L Y-78,314 R0
269 L Z+10 FMAX
270 L X+115,485 Y-57,485 FMAX
271 L Z+2 FMAX
272 L Z-14 F300
273 L X+108,485 RL F382
274 CC X+108,485 Y-63,485
275 C X+104,243 Y-59,243 DR+
276 L X+99,243 Y-64,243
277 CC X+103,485 Y-68,485
278 C X+97,485 Y-68,485 DR+
279 L Y-75,485 R0
280 L Z+10 FMAX
281 L X+118,314 Y-60,314 FMAX
282 L Z-12 FMAX
283 L Z-28 F300
284 L X+111,314 RL F382
285 CC X+111,314 Y-66,314
286 C X+107,071 Y-62,071 DR+
287 L X+102,071 Y-67,071
288 CC X+106,314 Y-71,314
289 C X+100,314 Y-71,314 DR+
290 L Y-78,314 R0
291 L Z+10 FMAX
292 L X+115,485 Y-57,485 FMAX
293 L Z-12 FMAX
294 L Z-28 F300
295 L X+108,485 RL F382
296 CC X+108,485 Y-63,485
297 C X+104,243 Y-59,243 DR+
298 L X+99,243 Y-64,243
299 CC X+103,485 Y-68,485
300 C X+97,485 Y-68,485 DR+
301 L Y-75,485 R0
302 L Z+10 FMAX
303 L X+118,314 Y-60,314 FMAX
304 L Z-26 FMAX
305 L Z-42 F300
306 L X+111,314 RL F382
307 CC X+111,314 Y-66,314
308 C X+107,071 Y-62,071 DR+
309 L X+102,071 Y-67,071
310 CC X+106,314 Y-71,314
311 C X+100,314 Y-71,314 DR+
312 L Y-78,314 R0
313 L Z+10 FMAX
314 L X+115,485 Y-57,485 FMAX
315 L Z-26 FMAX
316 L Z-42 F300
317 L X+108,485 RL F382
318 CC X+108,485 Y-63,485
319 C X+104,243 Y-59,243 DR+
320 L X+99,243 Y-64,243
321 CC X+103,485 Y-68,485
322 C X+97,485 Y-68,485 DR+
323 L Y-75,485 R0
324 L Z+10 FMAX
325 L X+115,485 Y-57,485 FMAX
326 L Z-26 FMAX
327 L Z-42 F300
328 L X+108,485 RL F382
329 CC X+108,485 Y-63,485
330 C X+104,243 Y-59,243 DR+
331 L X+99,243 Y-64,243
332 CC X+103,485 Y-68,485
333 C X+97,485 Y-68,485 DR+
334 L Y-75,485 R0
335 L Z+50 FMAX
336 L X-100,314 Y-78,314 FMAX
337 L Z+2 FMAX
338 L Z-14 F300
339 L Y-71,314 RL F382
340 CC X-106,314 Y-71,314
341 C X-102,071 Y-67,071 DR+
342 L X-107,071 Y-62,071
343 CC X-111,314 Y-66,314
344 C X-111,314 Y-60,314 DR+
345 L X-118,314 R0
346 L Z+10 FMAX
347 L X-97,485 Y-75,485 FMAX
348 L Z+2 FMAX
349 L Z-14 F300
350 L Y-68,485 RL F382
351 CC X-103,485 Y-68,485
352 C X-99,243 Y-64,243 DR+
353 L X-104,243 Y-59,243
354 CC X-108,485 Y-63,485
355 C X-108,485 Y-57,485 DR+
356 L X-115,485 R0
357 L Z+10 FMAX
358 L X-100,314 Y-78,314 FMAX
359 L Z-12 FMAX
360 L Z-28 F300
361 L Y-71,314 RL F382
362 CC X-106,314 Y-71,314
363 C X-102,071 Y-67,071 DR+
364 L X-107,071 Y-62,071
365 CC X-111,314 Y-66,314
366 C X-111,314 Y-60,314 DR+
367 L X-118,314 R0
368 L Z+10 FMAX
369 L X-97,485 Y-75,485 FMAX
370 L Z-12 FMAX
371 L Z-28 F300
372 L Y-68,485 RL F382
373 CC X-103,485 Y-68,485
374 C X-99,243 Y-64,243 DR+
375 L X-104,243 Y-59,243
376 CC X-108,485 Y-63,485
377 C X-108,485 Y-57,485 DR+
378 L X-115,485 R0
379 L Z+10 FMAX
380 L X-100,314 Y-78,314 FMAX
381 L Z-26 FMAX
382 L Z-42 F300
383 L Y-71,314 RL F382
384 CC X-106,314 Y-71,314
385 C X-102,071 Y-67,071 DR+
386 L X-107,071 Y-62,071
387 CC X-111,314 Y-66,314
388 C X-111,314 Y-60,314 DR+
389 L X-118,314 R0
390 L Z+10 FMAX
391 L X-97,485 Y-75,485 FMAX
392 L Z-26 FMAX
393 L Z-42 F300
394 L Y-68,485 RL F382
395 CC X-103,485 Y-68,485
396 C X-99,243 Y-64,243 DR+
397 L X-104,243 Y-59,243
398 CC X-108,485 Y-63,485
399 C X-108,485 Y-57,485 DR+
400 L X-115,485 R0
401 L Z+10 FMAX
402 L X-97,485 Y-75,485 FMAX
403 L Z-26 FMAX
404 L Z-42 F300
405 L Y-68,485 RL F382
406 CC X-103,485 Y-68,485
407 C X-99,243 Y-64,243 DR+
408 L X-104,243 Y-59,243
409 CC X-108,485 Y-63,485
410 C X-108,485 Y-57,485 DR+
411 L X-115,485 R0
412 L Z+50 FMAX
413 M78
414 M5
415 L Z-1 FMAX M91
416 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
417 ; CORRECTION USURE GAUCHE
418 ; SUREP R 0. SUREP Z 0.
419 TOOL CALL 1 Z S6000 DR-2,5
420 L X-3,83 Y+65,295 FMAX M3
421 L Z+50 FMAX
422 L Z+2 FMAX
423 L Z-3 F800
424 L X-1,768 Y+63,232 RL F1200
425 CC X+0 Y+65
426 C X+0 Y+62,5 DR+
427 L X+95
428 CC X+95 Y+60
429 C X+96,768 Y+61,768 DR-
430 L X+101,768 Y+56,768
431 CC X+100 Y+55
432 C X+102,5 Y+55 DR-
433 L Y-55
434 CC X+100 Y-55
435 C X+101,768 Y-56,768 DR-
436 L X+96,768 Y-61,768
437 CC X+95 Y-60
438 C X+95 Y-62,5 DR-
439 L X-95
440 CC X-95 Y-60
441 C X-96,768 Y-61,768 DR-
442 L X-101,768 Y-56,768
443 CC X-100 Y-55
444 C X-102,5 Y-55 DR-
445 L Y+55
446 CC X-100 Y+55
447 C X-101,768 Y+56,768 DR-
448 L X-96,768 Y+61,768
449 CC X-95 Y+60
450 C X-95 Y+62,5 DR-
451 L X+0
452 CC X+0 Y+65
453 C X+1,768 Y+63,232 DR+
454 L X+3,83 Y+65,295 R0
455 L Z+10 FMAX
456 L X-3,83 FMAX
457 L Z+2 FMAX
458 L Z-3 F800
459 L X-1,768 Y+63,232 RL F1200
460 CC X+0 Y+65
461 C X+0 Y+62,5 DR+
462 L X+95
463 CC X+95 Y+60
464 C X+96,768 Y+61,768 DR-
465 L X+101,768 Y+56,768
466 CC X+100 Y+55
467 C X+102,5 Y+55 DR-
468 L Y-55
469 CC X+100 Y-55
470 C X+101,768 Y-56,768 DR-
471 L X+96,768 Y-61,768
472 CC X+95 Y-60
473 C X+95 Y-62,5 DR-
474 L X-95
475 CC X-95 Y-60
476 C X-96,768 Y-61,768 DR-
477 L X-101,768 Y-56,768
478 CC X-100 Y-55
479 C X-102,5 Y-55 DR-
480 L Y+55
481 CC X-100 Y+55
482 C X-101,768 Y+56,768 DR-
483 L X-96,768 Y+61,768
484 CC X-95 Y+60
485 C X-95 Y+62,5 DR-
486 L X+0
487 CC X+0 Y+65
488 C X+1,768 Y+63,232 DR+
489 L X+3,83 Y+65,295 R0
490 L Z+50 FMAX
491 M5
492 L Z-1 FMAX M91
493 L Y-1 FMAX M91
494 M30
495 END PGM REP05-20977-OP20-A-PORTE POINCON MM
