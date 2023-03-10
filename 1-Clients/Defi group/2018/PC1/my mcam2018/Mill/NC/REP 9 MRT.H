0 BEGIN PGM REP 9 MRT MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 9 MRT
4 ; PROG-CN DU 26-10-21 A 09:24
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
10 ; T19 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
11 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-2*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 20
19 L X+9,7 Y-2,096 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X+9,7 Y-2,096 FMAX M99
24 L X-9,7 Y-8,904 FMAX M99
25 L Z+50 FMAX
26 M9
27 M5
28 L Z-1 FMAX M91
29 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
30 TOOL CALL 20 Z S3800 DR+0
31 TOOL DEF 19
32 L X+9,7 Y-2,096 FMAX M3
33 L Z+50 FMAX M7
34 ;  DEBOURRAGE
35 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
36 L X+9,7 Y-2,096 FMAX M99
37 L X-9,7 Y-8,904 FMAX M99
38 L Z+50 FMAX
39 M9
40 M5
41 L Z-1 FMAX M91
42 ; T19 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
43 ; CORRECTION AUCUNE
44 ; SUREP R 0. SUREP Z 0.
45 TOOL CALL 19 Z S6000 DR+0
46 TOOL DEF 18
47 L X-10,783 Y-10,342 FMAX M3
48 L Z+50 FMAX M25
49 L Z+2 FMAX
50 L Z+0,5 F297
51 CC X-9,7 Y-8,904
52 CP IPA-180 Z+0,302 DR-
53 CC X-9,7 Y-8,904
54 CP IPA-180 Z+0,105 DR-
55 CC X-9,7 Y-8,904
56 CP IPA-180 Z-0,092 DR-
57 CC X-9,7 Y-8,904
58 CP IPA-180 Z-0,29 DR-
59 CC X-9,7 Y-8,904
60 CP IPA-180 Z-0,488 DR-
61 CC X-9,7 Y-8,904
62 CP IPA-180 Z-0,685 DR-
63 CC X-9,7 Y-8,904
64 CP IPA-180 Z-0,883 DR-
65 CC X-9,7 Y-8,904
66 CP IPA-180 Z-1,08 DR-
67 CC X-9,7 Y-8,904
68 CP IPA-180 Z-1,278 DR-
69 CC X-9,7 Y-8,904
70 CP IPA-180 Z-1,475 DR-
71 CC X-9,7 Y-8,904
72 CP IPA-180 Z-1,673 DR-
73 CC X-9,7 Y-8,904
74 CP IPA-180 Z-1,87 DR-
75 CC X-9,7 Y-8,904
76 CP IPA-180 Z-2,067 DR-
77 CC X-9,7 Y-8,904
78 CP IPA-180 Z-2,265 DR-
79 CC X-9,7 Y-8,904
80 CP IPA-180 Z-2,463 DR-
81 CC X-9,7 Y-8,904
82 CP IPA-180 Z-2,66 DR-
83 CC X-9,7 Y-8,904
84 CP IPA-180 Z-2,857 DR-
85 CC X-9,7 Y-8,904
86 CP IPA-180 Z-3,055 DR-
87 CC X-9,7 Y-8,904
88 CP IPA-180 Z-3,252 DR-
89 CC X-9,7 Y-8,904
90 CP IPA-180 Z-3,449 DR-
91 CC X-9,7 Y-8,904
92 CP IPA-180 Z-3,646 DR-
93 CC X-9,7 Y-8,904
94 CP IPA-180 Z-3,844 DR-
95 CC X-9,7 Y-8,904
96 CP IPA-233,016 Z-4,1 DR-
97 L X-9,687 Y-8,904 F500
98 CC X-9,725 Y-8,904
99 C X-9,762 Y-8,904 DR+
100 CC X-9,675 Y-8,904
101 C X-9,587 Y-8,904 DR+
102 CC X-9,725 Y-8,904
103 C X-9,862 Y-8,904 DR+
104 CC X-9,675 Y-8,904
105 C X-9,487 Y-8,904 DR+
106 CC X-9,725 Y-8,904
107 C X-9,962 Y-8,904 DR+
108 CC X-9,675 Y-8,904
109 C X-9,387 Y-8,904 DR+
110 CC X-9,725 Y-8,904
111 C X-10,062 Y-8,904 DR+
112 CC X-9,675 Y-8,904
113 C X-9,287 Y-8,904 DR+
114 CC X-9,725 Y-8,904
115 C X-10,162 Y-8,904 DR+
116 CC X-9,675 Y-8,904
117 C X-9,187 Y-8,904 DR+
118 CC X-9,725 Y-8,904
119 C X-10,262 Y-8,904 DR+
120 CC X-9,675 Y-8,904
121 C X-9,087 Y-8,904 DR+
122 CC X-9,725 Y-8,904
123 C X-10,362 Y-8,904 DR+
124 CC X-9,675 Y-8,904
125 C X-8,987 Y-8,904 DR+
126 CC X-9,725 Y-8,904
127 C X-10,462 Y-8,904 DR+
128 CC X-9,675 Y-8,904
129 C X-8,887 Y-8,904 DR+
130 CC X-9,725 Y-8,904
131 C X-10,562 Y-8,904 DR+
132 CC X-9,675 Y-8,904
133 C X-8,787 Y-8,904 DR+
134 CC X-9,725 Y-8,904
135 C X-10,662 Y-8,904 DR+
136 CC X-9,675 Y-8,904
137 C X-8,687 Y-8,904 DR+
138 CC X-9,725 Y-8,904
139 C X-10,762 Y-8,904 DR+
140 CC X-9,675 Y-8,904
141 C X-8,587 Y-8,904 DR+
142 CC X-9,725 Y-8,904
143 C X-10,862 Y-8,904 DR+
144 CC X-9,675 Y-8,904
145 C X-8,487 Y-8,904 DR+
146 CC X-9,725 Y-8,904
147 C X-10,962 Y-8,904 DR+
148 CC X-9,675 Y-8,904
149 C X-8,387 Y-8,904 DR+
150 CC X-9,725 Y-8,904
151 C X-11,062 Y-8,904 DR+
152 CC X-9,675 Y-8,904
153 C X-8,287 Y-8,904 DR+
154 CC X-9,725 Y-8,904
155 C X-11,162 Y-8,904 DR+
156 CC X-9,675 Y-8,904
157 C X-8,187 Y-8,904 DR+
158 CC X-9,725 Y-8,904
159 C X-11,262 Y-8,904 DR+
160 CC X-9,675 Y-8,904
161 C X-8,087 Y-8,904 DR+
162 CC X-9,725 Y-8,904
163 C X-11,362 Y-8,904 DR+
164 CC X-9,675 Y-8,904
165 C X-7,987 Y-8,904 DR+
166 CC X-9,725 Y-8,904
167 C X-11,462 Y-8,904 DR+
168 CC X-9,675 Y-8,904
169 C X-7,887 Y-8,904 DR+
170 CC X-9,725 Y-8,904
171 C X-11,562 Y-8,904 DR+
172 CC X-9,675 Y-8,904
173 C X-7,787 Y-8,904 DR+
174 CC X-9,725 Y-8,904
175 C X-11,662 Y-8,904 DR+
176 CC X-9,675 Y-8,904
177 C X-7,687 Y-8,904 DR+
178 CC X-9,725 Y-8,904
179 C X-11,762 Y-8,904 DR+
180 CC X-9,675 Y-8,904
181 C X-7,587 Y-8,904 DR+
182 CC X-9,725 Y-8,904
183 C X-11,862 Y-8,904 DR+
184 CC X-9,675 Y-8,904
185 C X-7,487 Y-8,904 DR+
186 CC X-9,725 Y-8,904
187 C X-11,962 Y-8,904 DR+
188 CC X-9,675 Y-8,904
189 C X-7,387 Y-8,904 DR+
190 CC X-9,725 Y-8,904
191 C X-12,062 Y-8,904 DR+
192 CC X-9,675 Y-8,904
193 C X-7,287 Y-8,904 DR+
194 CC X-9,725 Y-8,904
195 C X-12,162 Y-8,904 DR+
196 CC X-9,675 Y-8,904
197 C X-8,441 Y-11,064 DR+
198 CC X-9,7 Y-8,904
199 C X-12,2 Y-8,904 DR+
200 CC X-9,7 Y-8,904
201 C X-8,441 Y-11,064 DR+
202 L Z+50 FMAX
203 L X+8,617 Y-3,533 FMAX
204 L Z+2 FMAX
205 L Z+0,5 F297
206 CC X+9,7 Y-2,096
207 CP IPA-180 Z+0,302 DR-
208 CC X+9,7 Y-2,096
209 CP IPA-180 Z+0,105 DR-
210 CC X+9,7 Y-2,096
211 CP IPA-180 Z-0,092 DR-
212 CC X+9,7 Y-2,096
213 CP IPA-180 Z-0,29 DR-
214 CC X+9,7 Y-2,096
215 CP IPA-180 Z-0,488 DR-
216 CC X+9,7 Y-2,096
217 CP IPA-180 Z-0,685 DR-
218 CC X+9,7 Y-2,096
219 CP IPA-180 Z-0,883 DR-
220 CC X+9,7 Y-2,096
221 CP IPA-180 Z-1,08 DR-
222 CC X+9,7 Y-2,096
223 CP IPA-180 Z-1,278 DR-
224 CC X+9,7 Y-2,096
225 CP IPA-180 Z-1,475 DR-
226 CC X+9,7 Y-2,096
227 CP IPA-180 Z-1,673 DR-
228 CC X+9,7 Y-2,096
229 CP IPA-180 Z-1,87 DR-
230 CC X+9,7 Y-2,096
231 CP IPA-180 Z-2,067 DR-
232 CC X+9,7 Y-2,096
233 CP IPA-180 Z-2,265 DR-
234 CC X+9,7 Y-2,096
235 CP IPA-180 Z-2,463 DR-
236 CC X+9,7 Y-2,096
237 CP IPA-180 Z-2,66 DR-
238 CC X+9,7 Y-2,096
239 CP IPA-180 Z-2,857 DR-
240 CC X+9,7 Y-2,096
241 CP IPA-180 Z-3,055 DR-
242 CC X+9,7 Y-2,096
243 CP IPA-180 Z-3,252 DR-
244 CC X+9,7 Y-2,096
245 CP IPA-180 Z-3,449 DR-
246 CC X+9,7 Y-2,096
247 CP IPA-180 Z-3,646 DR-
248 CC X+9,7 Y-2,096
249 CP IPA-180 Z-3,844 DR-
250 CC X+9,7 Y-2,096
251 CP IPA-232,996 Z-4,1 DR-
252 L X+9,713 Y-2,096 F500
253 CC X+9,675 Y-2,096
254 C X+9,638 Y-2,096 DR+
255 CC X+9,725 Y-2,096
256 C X+9,813 Y-2,096 DR+
257 CC X+9,675 Y-2,096
258 C X+9,538 Y-2,096 DR+
259 CC X+9,725 Y-2,096
260 C X+9,913 Y-2,096 DR+
261 CC X+9,675 Y-2,096
262 C X+9,438 Y-2,096 DR+
263 CC X+9,725 Y-2,096
264 C X+10,013 Y-2,096 DR+
265 CC X+9,675 Y-2,096
266 C X+9,338 Y-2,096 DR+
267 CC X+9,725 Y-2,096
268 C X+10,113 Y-2,096 DR+
269 CC X+9,675 Y-2,096
270 C X+9,238 Y-2,096 DR+
271 CC X+9,725 Y-2,096
272 C X+10,213 Y-2,096 DR+
273 CC X+9,675 Y-2,096
274 C X+9,138 Y-2,096 DR+
275 CC X+9,725 Y-2,096
276 C X+10,313 Y-2,096 DR+
277 CC X+9,675 Y-2,096
278 C X+9,038 Y-2,096 DR+
279 CC X+9,725 Y-2,096
280 C X+10,413 Y-2,096 DR+
281 CC X+9,675 Y-2,096
282 C X+8,938 Y-2,096 DR+
283 CC X+9,725 Y-2,096
284 C X+10,513 Y-2,096 DR+
285 CC X+9,675 Y-2,096
286 C X+8,838 Y-2,096 DR+
287 CC X+9,725 Y-2,096
288 C X+10,613 Y-2,096 DR+
289 CC X+9,675 Y-2,096
290 C X+8,738 Y-2,096 DR+
291 CC X+9,725 Y-2,096
292 C X+10,713 Y-2,096 DR+
293 CC X+9,675 Y-2,096
294 C X+8,638 Y-2,096 DR+
295 CC X+9,725 Y-2,096
296 C X+10,813 Y-2,096 DR+
297 CC X+9,675 Y-2,096
298 C X+8,538 Y-2,096 DR+
299 CC X+9,725 Y-2,096
300 C X+10,913 Y-2,096 DR+
301 CC X+9,675 Y-2,096
302 C X+8,438 Y-2,096 DR+
303 CC X+9,725 Y-2,096
304 C X+11,013 Y-2,096 DR+
305 CC X+9,675 Y-2,096
306 C X+8,338 Y-2,096 DR+
307 CC X+9,725 Y-2,096
308 C X+11,113 Y-2,096 DR+
309 CC X+9,675 Y-2,096
310 C X+8,238 Y-2,096 DR+
311 CC X+9,725 Y-2,096
312 C X+11,213 Y-2,096 DR+
313 CC X+9,675 Y-2,096
314 C X+8,138 Y-2,096 DR+
315 CC X+9,725 Y-2,096
316 C X+11,313 Y-2,096 DR+
317 CC X+9,675 Y-2,096
318 C X+8,038 Y-2,096 DR+
319 CC X+9,725 Y-2,096
320 C X+11,413 Y-2,096 DR+
321 CC X+9,675 Y-2,096
322 C X+7,938 Y-2,096 DR+
323 CC X+9,725 Y-2,096
324 C X+11,513 Y-2,096 DR+
325 CC X+9,675 Y-2,096
326 C X+7,838 Y-2,096 DR+
327 CC X+9,725 Y-2,096
328 C X+11,613 Y-2,096 DR+
329 CC X+9,675 Y-2,096
330 C X+7,738 Y-2,096 DR+
331 CC X+9,725 Y-2,096
332 C X+11,713 Y-2,096 DR+
333 CC X+9,675 Y-2,096
334 C X+7,638 Y-2,096 DR+
335 CC X+9,725 Y-2,096
336 C X+11,813 Y-2,096 DR+
337 CC X+9,675 Y-2,096
338 C X+7,538 Y-2,096 DR+
339 CC X+9,725 Y-2,096
340 C X+11,913 Y-2,096 DR+
341 CC X+9,675 Y-2,096
342 C X+7,438 Y-2,096 DR+
343 CC X+9,725 Y-2,096
344 C X+12,013 Y-2,096 DR+
345 CC X+9,675 Y-2,096
346 C X+7,338 Y-2,096 DR+
347 CC X+9,725 Y-2,096
348 C X+12,113 Y-2,096 DR+
349 CC X+9,675 Y-2,096
350 C X+7,238 Y-2,096 DR+
351 CC X+9,725 Y-2,096
352 C X+10,959 Y-4,255 DR+
353 CC X+9,7 Y-2,096
354 C X+7,2 Y-2,096 DR+
355 CC X+9,7 Y-2,096
356 C X+10,959 Y-4,255 DR+
357 L Z+50 FMAX
358 TOOL CALL 19 Z S6000 DR-3
359 L X-9,7 Y-8,904 Z+50 FMAX
360 L Z+2 FMAX
361 L Z-4,1 F297
362 L X-8,4 Y-9,504 RL F500
363 L X-7,8
364 CC X-7,8 Y-8,904
365 C X-7,2 Y-8,904 DR+
366 CC X-9,7 Y-8,904
367 C X-12,2 Y-8,904 DR+
368 CC X-9,7 Y-8,904
369 C X-7,2 Y-8,904 DR+
370 CC X-9,7 Y-8,904
371 C X-7,397 Y-7,931 DR+
372 CC X-9,7 Y-8,904
373 C X-12,2 Y-8,904 DR+
374 CC X-9,7 Y-8,904
375 C X-7,2 Y-8,904 DR+
376 CC X-9,7 Y-8,904
377 C X-7,397 Y-7,931 DR+
378 CC X-7,95 Y-8,164
379 C X-8,184 Y-7,612 DR+
380 L X-8,736 Y-7,845
381 L X-9,7 Y-8,904 R0
382 L Z+50 FMAX
383 L X+9,7 Y-2,096 FMAX
384 L Z+2 FMAX
385 L Z-4,1 F297
386 L X+11 Y-2,696 RL F500
387 L X+11,6
388 CC X+11,6 Y-2,096
389 C X+12,2 Y-2,096 DR+
390 CC X+9,7 Y-2,096
391 C X+7,2 Y-2,096 DR+
392 CC X+9,7 Y-2,096
393 C X+12,2 Y-2,096 DR+
394 CC X+9,7 Y-2,096
395 C X+12,003 Y-1,122 DR+
396 CC X+9,7 Y-2,096
397 C X+7,2 Y-2,096 DR+
398 CC X+9,7 Y-2,096
399 C X+12,2 Y-2,096 DR+
400 CC X+9,7 Y-2,096
401 C X+12,003 Y-1,122 DR+
402 CC X+11,45 Y-1,356
403 C X+11,216 Y-0,803 DR+
404 L X+10,664 Y-1,037
405 L X+9,7 Y-2,096 R0
406 L Z+50 FMAX
407 M78
408 M5
409 L Z-1 FMAX M91
410 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
411 ; CORRECTION USURE GAUCHE
412 ; SUREP R -0.5 SUREP Z 0.
413 TOOL CALL 18 Z S1751 DR-5
414 TOOL DEF 1
415 L X-30,207 Y+4,722 FMAX M3
416 L Z+50 FMAX M25
417 L Z+2 FMAX
418 L Z-5,5 F500
419 L X-25,964 Y+8,964 RL F315
420 CC X-29,5 Y+12,5
421 C X-24,5 Y+12,5 DR+
422 CC X-15 Y+12,5
423 C X-15 Y+22 DR-
424 CC X-15 Y+27
425 C X-11,464 Y+23,464 DR+
426 L X-7,222 Y+27,707 R0
427 L Z+10 FMAX
428 L X-30,207 Y+4,722 FMAX
429 L Z+2 FMAX
430 L Z-5,5 F500
431 L X-25,964 Y+8,964 RL F315
432 CC X-29,5 Y+12,5
433 C X-24,5 Y+12,5 DR+
434 CC X-15 Y+12,5
435 C X-15 Y+22 DR-
436 CC X-15 Y+27
437 C X-11,464 Y+23,464 DR+
438 L X-7,222 Y+27,707 R0
439 L Z+50 FMAX
440 L X+7,222 FMAX
441 L Z+2 FMAX
442 L Z-5,5 F500
443 L X+11,464 Y+23,464 RL F315
444 CC X+15 Y+27
445 C X+15 Y+22 DR+
446 CC X+15 Y+12,5
447 C X+24,5 Y+12,5 DR-
448 CC X+29,5 Y+12,5
449 C X+25,964 Y+8,964 DR+
450 L X+30,207 Y+4,722 R0
451 L Z+10 FMAX
452 L X+7,222 Y+27,707 FMAX
453 L Z+2 FMAX
454 L Z-5,5 F500
455 L X+11,464 Y+23,464 RL F315
456 CC X+15 Y+27
457 C X+15 Y+22 DR+
458 CC X+15 Y+12,5
459 C X+24,5 Y+12,5 DR-
460 CC X+29,5 Y+12,5
461 C X+25,964 Y+8,964 DR+
462 L X+30,207 Y+4,722 R0
463 L Z+50 FMAX
464 L Y-4,722 FMAX
465 L Z+2 FMAX
466 L Z-5,5 F500
467 L X+25,964 Y-8,964 RL F315
468 CC X+29,5 Y-12,5
469 C X+24,5 Y-12,5 DR+
470 CC X+15 Y-12,5
471 C X+15 Y-22 DR-
472 CC X+15 Y-27
473 C X+11,464 Y-23,464 DR+
474 L X+7,222 Y-27,707 R0
475 L Z+10 FMAX
476 L X+30,207 Y-4,722 FMAX
477 L Z+2 FMAX
478 L Z-5,5 F500
479 L X+25,964 Y-8,964 RL F315
480 CC X+29,5 Y-12,5
481 C X+24,5 Y-12,5 DR+
482 CC X+15 Y-12,5
483 C X+15 Y-22 DR-
484 CC X+15 Y-27
485 C X+11,464 Y-23,464 DR+
486 L X+7,222 Y-27,707 R0
487 L Z+50 FMAX
488 L X-7,222 FMAX
489 L Z+2 FMAX
490 L Z-5,5 F500
491 L X-11,464 Y-23,464 RL F315
492 CC X-15 Y-27
493 C X-15 Y-22 DR+
494 CC X-15 Y-12,5
495 C X-24,5 Y-12,5 DR-
496 CC X-29,5 Y-12,5
497 C X-25,964 Y-8,964 DR+
498 L X-30,207 Y-4,722 R0
499 L Z+10 FMAX
500 L X-7,222 Y-27,707 FMAX
501 L Z+2 FMAX
502 L Z-5,5 F500
503 L X-11,464 Y-23,464 RL F315
504 CC X-15 Y-27
505 C X-15 Y-22 DR+
506 CC X-15 Y-12,5
507 C X-24,5 Y-12,5 DR-
508 CC X-29,5 Y-12,5
509 C X-25,964 Y-8,964 DR+
510 L X-30,207 Y-4,722 R0
511 L Z+50 FMAX
512 M78
513 M5
514 L Z-1 FMAX M91
515 L Y-1 FMAX M91
516 M30
517 END PGM REP 9 MRT MM
