0 BEGIN PGM REP10 MM
1 ; POST-PRO FICAM
2 ; MACHINE - 
3 ; DESSIN MASTERCAM - REP10
4 ; PROG-CN DU 08-09-21 A 10:49
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T9 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
10 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
11 ; T8 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
12 ; T13 ALESOIR DIA 13 CARB VC 15 ALESOIR DIAM=13. 5 DENTS ARS
13 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
14 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
15 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
16 ; FIN DE LISTE DES OUTILS
17 L R0 FMAX
18 L Z-1 FMAX M91
19 ; *GROUPE D'USINAGE-2*
20 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
21 TOOL CALL 1 Z S1856 DR+0
22 TOOL DEF 9
23 L X-535 Y+35 FMAX M3
24 L Z+50 FMAX M8
25 ;  POINTAGE-PERCAGE
26 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,7 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,7 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
27 L X-535 Y+35 FMAX M99
28 L X-55 Y-45 FMAX M99
29 L Z+50 FMAX
30 M9
31 M5
32 L Z-1 FMAX M91
33 ; T9 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
34 TOOL CALL 9 Z S1600 DR+0
35 TOOL DEF 10
36 L X-535 Y+35 FMAX M3
37 L Z+50 FMAX M8
38 ;  DEBOURRAGE
39 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-35 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+4,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
40 L X-535 Y+35 FMAX M99
41 L X-55 Y-45 FMAX M99
42 L Z+50 FMAX
43 M9
44 M5
45 L Z-1 FMAX M91
46 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
47 TOOL CALL 10 Z S500 DR+0
48 TOOL DEF 1
49 L X-535 Y+35 FMAX M3
50 L Z+50 FMAX M8
51 ;  POINTAGE-PERCAGE
52 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-35 ; PROFONDEUR~
    Q206=75 ; AVANCE PLONGEE PROF.~
    Q202=+35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
53 L X-535 Y+35 FMAX M99
54 L X-55 Y-45 FMAX M99
55 L Z+50 FMAX
56 M9
57 M5
58 L Z-1 FMAX M91
59 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
60 TOOL CALL 1 Z S1856 DR+0
61 TOOL DEF 8
62 L X-529 Y+0 FMAX M3
63 L Z+50 FMAX M8
64 ;  POINTAGE-PERCAGE
65 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
66 L X-529 Y+0 FMAX M99
67 L X-469 FMAX M99
68 L Z+50 FMAX
69 M9
70 M5
71 L Z-1 FMAX M91
72 ; T8 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
73 TOOL CALL 8 Z S1650 DR+0
74 TOOL DEF 13
75 L X-529 Y+0 FMAX M3
76 L Z+50 FMAX M8
77 ;  DEBOURRAGE
78 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-35 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
79 L X-529 Y+0 FMAX M99
80 L X-469 FMAX M99
81 L Z+50 FMAX
82 M9
83 M5
84 L Z-1 FMAX M91
85 ; T13 ALESOIR DIA 13 CARB VC 15 ALESOIR DIAM=13. 5 DENTS ARS
86 TOOL CALL 13 Z S416 DR+0
87 TOOL DEF 19
88 L X-529 Y+0 FMAX M3
89 L Z+50 FMAX M8
90 ;  POINTAGE-PERCAGE
91 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-35 ; PROFONDEUR~
    Q206=63 ; AVANCE PLONGEE PROF.~
    Q202=+35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
92 L X-529 Y+0 FMAX M99
93 L X-469 FMAX M99
94 L Z+50 FMAX
95 M9
96 M5
97 L Z-1 FMAX M91
98 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
99 ; CORRECTION AUCUNE
100 ; SUREP R 0. SUREP Z 0.
101 TOOL CALL 19 Z S7427 DR+0
102 TOOL DEF 1
103 L X-528,266 Y+2,909 FMAX M3
104 L Z+50 FMAX M8
105 L Z+2 FMAX
106 L Z+0,5 F297
107 CC X-529 Y+0
108 CP IPA-180 Z-0,159 DR-
109 CC X-529 Y+0
110 CP IPA-180 Z-0,818 DR-
111 CC X-529 Y+0
112 CP IPA-180 Z-1,477 DR-
113 CC X-529 Y+0
114 CP IPA-180 Z-2,136 DR-
115 CC X-529 Y+0
116 CP IPA-180 Z-2,795 DR-
117 CC X-529 Y+0
118 CP IPA-180 Z-3,454 DR-
119 CC X-529 Y+0
120 CP IPA-180 Z-4,113 DR-
121 CC X-529 Y+0
122 CP IPA-180 Z-4,772 DR-
123 CC X-529 Y+0
124 CP IPA-75,839 Z-5,05 DR-
125 L X-528,987 Y+0 F3565
126 CC X-529,025 Y+0
127 C X-529,063 Y+0 DR+
128 CC X-528,975 Y+0
129 C X-528,887 Y+0 DR+
130 CC X-529,025 Y+0
131 C X-529,163 Y+0 DR+
132 CC X-528,975 Y+0
133 C X-528,787 Y+0 DR+
134 CC X-529,025 Y+0
135 C X-529,263 Y+0 DR+
136 CC X-528,975 Y+0
137 C X-528,687 Y+0 DR+
138 CC X-529,025 Y+0
139 C X-529,363 Y+0 DR+
140 CC X-528,975 Y+0
141 C X-528,587 Y+0 DR+
142 CC X-529,025 Y+0
143 C X-529,463 Y+0 DR+
144 CC X-528,975 Y+0
145 C X-528,487 Y+0 DR+
146 CC X-529,025 Y+0
147 C X-529,563 Y+0 DR+
148 CC X-528,975 Y+0
149 C X-528,387 Y+0 DR+
150 CC X-529,025 Y+0
151 C X-529,663 Y+0 DR+
152 CC X-528,975 Y+0
153 C X-528,287 Y+0 DR+
154 CC X-529,025 Y+0
155 C X-529,763 Y+0 DR+
156 CC X-528,975 Y+0
157 C X-528,187 Y+0 DR+
158 CC X-529,025 Y+0
159 C X-529,863 Y+0 DR+
160 CC X-528,975 Y+0
161 C X-528,087 Y+0 DR+
162 CC X-529,025 Y+0
163 C X-529,963 Y+0 DR+
164 CC X-528,975 Y+0
165 C X-527,987 Y+0 DR+
166 CC X-529,025 Y+0
167 C X-530,063 Y+0 DR+
168 CC X-528,975 Y+0
169 C X-527,887 Y+0 DR+
170 CC X-529,025 Y+0
171 C X-530,163 Y+0 DR+
172 CC X-528,975 Y+0
173 C X-527,787 Y+0 DR+
174 CC X-529,025 Y+0
175 C X-530,263 Y+0 DR+
176 CC X-528,975 Y+0
177 C X-527,687 Y+0 DR+
178 CC X-529,025 Y+0
179 C X-530,363 Y+0 DR+
180 CC X-528,975 Y+0
181 C X-527,587 Y+0 DR+
182 CC X-529,025 Y+0
183 C X-530,463 Y+0 DR+
184 CC X-528,975 Y+0
185 C X-527,487 Y+0 DR+
186 CC X-529,025 Y+0
187 C X-530,563 Y+0 DR+
188 CC X-528,975 Y+0
189 C X-527,387 Y+0 DR+
190 CC X-529,025 Y+0
191 C X-530,663 Y+0 DR+
192 CC X-528,975 Y+0
193 C X-527,287 Y+0 DR+
194 CC X-529,025 Y+0
195 C X-530,763 Y+0 DR+
196 CC X-528,975 Y+0
197 C X-527,187 Y+0 DR+
198 CC X-529,025 Y+0
199 C X-530,863 Y+0 DR+
200 CC X-528,975 Y+0
201 C X-527,087 Y+0 DR+
202 CC X-529,025 Y+0
203 C X-530,963 Y+0 DR+
204 CC X-528,975 Y+0
205 C X-526,987 Y+0 DR+
206 CC X-529,025 Y+0
207 C X-531,063 Y+0 DR+
208 CC X-528,975 Y+0
209 C X-526,887 Y+0 DR+
210 CC X-529,025 Y+0
211 C X-531,163 Y+0 DR+
212 CC X-528,975 Y+0
213 C X-526,787 Y+0 DR+
214 CC X-529,025 Y+0
215 C X-531,263 Y+0 DR+
216 CC X-528,975 Y+0
217 C X-526,687 Y+0 DR+
218 CC X-529,025 Y+0
219 C X-531,363 Y+0 DR+
220 CC X-528,975 Y+0
221 C X-526,587 Y+0 DR+
222 CC X-529,025 Y+0
223 C X-531,463 Y+0 DR+
224 CC X-528,975 Y+0
225 C X-526,487 Y+0 DR+
226 CC X-529,025 Y+0
227 C X-531,563 Y+0 DR+
228 CC X-528,975 Y+0
229 C X-526,387 Y+0 DR+
230 CC X-529,025 Y+0
231 C X-531,663 Y+0 DR+
232 CC X-528,975 Y+0
233 C X-526,287 Y+0 DR+
234 CC X-529,025 Y+0
235 C X-531,763 Y+0 DR+
236 CC X-528,975 Y+0
237 C X-526,187 Y+0 DR+
238 CC X-529,025 Y+0
239 C X-531,863 Y+0 DR+
240 CC X-528,975 Y+0
241 C X-526,087 Y+0 DR+
242 CC X-529,025 Y+0
243 C X-531,963 Y+0 DR+
244 CC X-528,975 Y+0
245 C X-525,987 Y+0 DR+
246 CC X-529,025 Y+0
247 C X-532,063 Y+0 DR+
248 CC X-528,975 Y+0
249 C X-525,887 Y+0 DR+
250 CC X-529,025 Y+0
251 C X-532,163 Y+0 DR+
252 CC X-528,975 Y+0
253 C X-525,787 Y+0 DR+
254 CC X-529,025 Y+0
255 C X-532,263 Y+0 DR+
256 CC X-528,975 Y+0
257 C X-525,687 Y+0 DR+
258 CC X-529,025 Y+0
259 C X-532,363 Y+0 DR+
260 CC X-528,975 Y+0
261 C X-525,587 Y+0 DR+
262 CC X-529,025 Y+0
263 C X-532,463 Y+0 DR+
264 CC X-528,975 Y+0
265 C X-525,487 Y+0 DR+
266 CC X-529,025 Y+0
267 C X-532,563 Y+0 DR+
268 CC X-528,975 Y+0
269 C X-525,387 Y+0 DR+
270 CC X-529,025 Y+0
271 C X-532,663 Y+0 DR+
272 CC X-528,975 Y+0
273 C X-525,287 Y+0 DR+
274 CC X-529,025 Y+0
275 C X-532,763 Y+0 DR+
276 CC X-528,975 Y+0
277 C X-525,187 Y+0 DR+
278 CC X-529,025 Y+0
279 C X-532,863 Y+0 DR+
280 CC X-528,975 Y+0
281 C X-525,087 Y+0 DR+
282 CC X-529,025 Y+0
283 C X-532,963 Y+0 DR+
284 CC X-528,975 Y+0
285 C X-524,987 Y+0 DR+
286 CC X-529,025 Y+0
287 C X-533,063 Y+0 DR+
288 CC X-528,975 Y+0
289 C X-524,887 Y+0 DR+
290 CC X-529,025 Y+0
291 C X-533,163 Y+0 DR+
292 CC X-528,975 Y+0
293 C X-524,787 Y+0 DR+
294 CC X-529,025 Y+0
295 C X-533,263 Y+0 DR+
296 CC X-528,975 Y+0
297 C X-524,687 Y+0 DR+
298 CC X-529,025 Y+0
299 C X-533,363 Y+0 DR+
300 CC X-528,975 Y+0
301 C X-524,587 Y+0 DR+
302 CC X-529,025 Y+0
303 C X-533,463 Y+0 DR+
304 CC X-528,975 Y+0
305 C X-524,487 Y+0 DR+
306 CC X-529,025 Y+0
307 C X-533,563 Y+0 DR+
308 CC X-528,975 Y+0
309 C X-524,387 Y+0 DR+
310 CC X-529,025 Y+0
311 C X-533,663 Y+0 DR+
312 CC X-528,975 Y+0
313 C X-524,287 Y+0 DR+
314 CC X-529,025 Y+0
315 C X-533,763 Y+0 DR+
316 CC X-528,975 Y+0
317 C X-524,187 Y+0 DR+
318 CC X-529,025 Y+0
319 C X-533,863 Y+0 DR+
320 CC X-528,975 Y+0
321 C X-524,087 Y+0 DR+
322 CC X-529,025 Y+0
323 C X-533,963 Y+0 DR+
324 CC X-528,975 Y+0
325 C X-523,987 Y+0 DR+
326 CC X-529,025 Y+0
327 C X-534,063 Y+0 DR+
328 CC X-528,975 Y+0
329 C X-523,887 Y+0 DR+
330 CC X-529,025 Y+0
331 C X-534,163 Y+0 DR+
332 CC X-528,975 Y+0
333 C X-523,787 Y+0 DR+
334 CC X-529,025 Y+0
335 C X-534,263 Y+0 DR+
336 CC X-528,975 Y+0
337 C X-523,687 Y+0 DR+
338 CC X-529,025 Y+0
339 C X-534,363 Y+0 DR+
340 CC X-528,975 Y+0
341 C X-523,587 Y+0 DR+
342 CC X-529,025 Y+0
343 C X-534,463 Y+0 DR+
344 CC X-528,975 Y+0
345 C X-523,487 Y+0 DR+
346 CC X-529,025 Y+0
347 C X-534,563 Y+0 DR+
348 CC X-528,975 Y+0
349 C X-523,387 Y+0 DR+
350 CC X-529,025 Y+0
351 C X-534,663 Y+0 DR+
352 CC X-528,975 Y+0
353 C X-523,287 Y+0 DR+
354 CC X-529,025 Y+0
355 C X-534,763 Y+0 DR+
356 CC X-528,975 Y+0
357 C X-523,187 Y+0 DR+
358 CC X-529,025 Y+0
359 C X-534,863 Y+0 DR+
360 CC X-528,975 Y+0
361 C X-523,087 Y+0 DR+
362 CC X-529,025 Y+0
363 C X-534,963 Y+0 DR+
364 CC X-528,975 Y+0
365 C X-525,991 Y-5,191 DR+
366 CC X-529 Y+0
367 C X-523 Y+0 DR+
368 CC X-529 Y+0
369 C X-525,991 Y-5,191 DR+
370 L Z+50 FMAX
371 L X-468,266 Y+2,909 FMAX
372 L Z+2 FMAX
373 L Z+0,5 F297
374 CC X-469 Y+0
375 CP IPA-180 Z-0,159 DR-
376 CC X-469 Y+0
377 CP IPA-180 Z-0,818 DR-
378 CC X-469 Y+0
379 CP IPA-180 Z-1,477 DR-
380 CC X-469 Y+0
381 CP IPA-180 Z-2,136 DR-
382 CC X-469 Y+0
383 CP IPA-180 Z-2,795 DR-
384 CC X-469 Y+0
385 CP IPA-180 Z-3,454 DR-
386 CC X-469 Y+0
387 CP IPA-180 Z-4,113 DR-
388 CC X-469 Y+0
389 CP IPA-180 Z-4,772 DR-
390 CC X-469 Y+0
391 CP IPA-75,839 Z-5,05 DR-
392 L X-468,988 Y+0 F3565
393 CC X-469,025 Y+0
394 C X-469,063 Y+0 DR+
395 CC X-468,975 Y+0
396 C X-468,887 Y+0 DR+
397 CC X-469,025 Y+0
398 C X-469,163 Y+0 DR+
399 CC X-468,975 Y+0
400 C X-468,787 Y+0 DR+
401 CC X-469,025 Y+0
402 C X-469,263 Y+0 DR+
403 CC X-468,975 Y+0
404 C X-468,687 Y+0 DR+
405 CC X-469,025 Y+0
406 C X-469,363 Y+0 DR+
407 CC X-468,975 Y+0
408 C X-468,587 Y+0 DR+
409 CC X-469,025 Y+0
410 C X-469,463 Y+0 DR+
411 CC X-468,975 Y+0
412 C X-468,487 Y+0 DR+
413 CC X-469,025 Y+0
414 C X-469,563 Y+0 DR+
415 CC X-468,975 Y+0
416 C X-468,387 Y+0 DR+
417 CC X-469,025 Y+0
418 C X-469,663 Y+0 DR+
419 CC X-468,975 Y+0
420 C X-468,287 Y+0 DR+
421 CC X-469,025 Y+0
422 C X-469,763 Y+0 DR+
423 CC X-468,975 Y+0
424 C X-468,187 Y+0 DR+
425 CC X-469,025 Y+0
426 C X-469,863 Y+0 DR+
427 CC X-468,975 Y+0
428 C X-468,087 Y+0 DR+
429 CC X-469,025 Y+0
430 C X-469,963 Y+0 DR+
431 CC X-468,975 Y+0
432 C X-467,987 Y+0 DR+
433 CC X-469,025 Y+0
434 C X-470,063 Y+0 DR+
435 CC X-468,975 Y+0
436 C X-467,887 Y+0 DR+
437 CC X-469,025 Y+0
438 C X-470,163 Y+0 DR+
439 CC X-468,975 Y+0
440 C X-467,787 Y+0 DR+
441 CC X-469,025 Y+0
442 C X-470,263 Y+0 DR+
443 CC X-468,975 Y+0
444 C X-467,687 Y+0 DR+
445 CC X-469,025 Y+0
446 C X-470,363 Y+0 DR+
447 CC X-468,975 Y+0
448 C X-467,587 Y+0 DR+
449 CC X-469,025 Y+0
450 C X-470,463 Y+0 DR+
451 CC X-468,975 Y+0
452 C X-467,487 Y+0 DR+
453 CC X-469,025 Y+0
454 C X-470,563 Y+0 DR+
455 CC X-468,975 Y+0
456 C X-467,387 Y+0 DR+
457 CC X-469,025 Y+0
458 C X-470,663 Y+0 DR+
459 CC X-468,975 Y+0
460 C X-467,287 Y+0 DR+
461 CC X-469,025 Y+0
462 C X-470,763 Y+0 DR+
463 CC X-468,975 Y+0
464 C X-467,187 Y+0 DR+
465 CC X-469,025 Y+0
466 C X-470,863 Y+0 DR+
467 CC X-468,975 Y+0
468 C X-467,087 Y+0 DR+
469 CC X-469,025 Y+0
470 C X-470,963 Y+0 DR+
471 CC X-468,975 Y+0
472 C X-466,987 Y+0 DR+
473 CC X-469,025 Y+0
474 C X-471,063 Y+0 DR+
475 CC X-468,975 Y+0
476 C X-466,887 Y+0 DR+
477 CC X-469,025 Y+0
478 C X-471,163 Y+0 DR+
479 CC X-468,975 Y+0
480 C X-466,787 Y+0 DR+
481 CC X-469,025 Y+0
482 C X-471,263 Y+0 DR+
483 CC X-468,975 Y+0
484 C X-466,687 Y+0 DR+
485 CC X-469,025 Y+0
486 C X-471,363 Y+0 DR+
487 CC X-468,975 Y+0
488 C X-466,587 Y+0 DR+
489 CC X-469,025 Y+0
490 C X-471,463 Y+0 DR+
491 CC X-468,975 Y+0
492 C X-466,487 Y+0 DR+
493 CC X-469,025 Y+0
494 C X-471,563 Y+0 DR+
495 CC X-468,975 Y+0
496 C X-466,387 Y+0 DR+
497 CC X-469,025 Y+0
498 C X-471,663 Y+0 DR+
499 CC X-468,975 Y+0
500 C X-466,287 Y+0 DR+
501 CC X-469,025 Y+0
502 C X-471,763 Y+0 DR+
503 CC X-468,975 Y+0
504 C X-466,187 Y+0 DR+
505 CC X-469,025 Y+0
506 C X-471,863 Y+0 DR+
507 CC X-468,975 Y+0
508 C X-466,087 Y+0 DR+
509 CC X-469,025 Y+0
510 C X-471,963 Y+0 DR+
511 CC X-468,975 Y+0
512 C X-465,987 Y+0 DR+
513 CC X-469,025 Y+0
514 C X-472,063 Y+0 DR+
515 CC X-468,975 Y+0
516 C X-465,887 Y+0 DR+
517 CC X-469,025 Y+0
518 C X-472,163 Y+0 DR+
519 CC X-468,975 Y+0
520 C X-465,787 Y+0 DR+
521 CC X-469,025 Y+0
522 C X-472,263 Y+0 DR+
523 CC X-468,975 Y+0
524 C X-465,687 Y+0 DR+
525 CC X-469,025 Y+0
526 C X-472,363 Y+0 DR+
527 CC X-468,975 Y+0
528 C X-465,587 Y+0 DR+
529 CC X-469,025 Y+0
530 C X-472,463 Y+0 DR+
531 CC X-468,975 Y+0
532 C X-465,487 Y+0 DR+
533 CC X-469,025 Y+0
534 C X-472,563 Y+0 DR+
535 CC X-468,975 Y+0
536 C X-465,387 Y+0 DR+
537 CC X-469,025 Y+0
538 C X-472,663 Y+0 DR+
539 CC X-468,975 Y+0
540 C X-465,287 Y+0 DR+
541 CC X-469,025 Y+0
542 C X-472,763 Y+0 DR+
543 CC X-468,975 Y+0
544 C X-465,187 Y+0 DR+
545 CC X-469,025 Y+0
546 C X-472,863 Y+0 DR+
547 CC X-468,975 Y+0
548 C X-465,087 Y+0 DR+
549 CC X-469,025 Y+0
550 C X-472,963 Y+0 DR+
551 CC X-468,975 Y+0
552 C X-464,987 Y+0 DR+
553 CC X-469,025 Y+0
554 C X-473,063 Y+0 DR+
555 CC X-468,975 Y+0
556 C X-464,887 Y+0 DR+
557 CC X-469,025 Y+0
558 C X-473,163 Y+0 DR+
559 CC X-468,975 Y+0
560 C X-464,787 Y+0 DR+
561 CC X-469,025 Y+0
562 C X-473,263 Y+0 DR+
563 CC X-468,975 Y+0
564 C X-464,687 Y+0 DR+
565 CC X-469,025 Y+0
566 C X-473,363 Y+0 DR+
567 CC X-468,975 Y+0
568 C X-464,587 Y+0 DR+
569 CC X-469,025 Y+0
570 C X-473,463 Y+0 DR+
571 CC X-468,975 Y+0
572 C X-464,487 Y+0 DR+
573 CC X-469,025 Y+0
574 C X-473,563 Y+0 DR+
575 CC X-468,975 Y+0
576 C X-464,387 Y+0 DR+
577 CC X-469,025 Y+0
578 C X-473,663 Y+0 DR+
579 CC X-468,975 Y+0
580 C X-464,287 Y+0 DR+
581 CC X-469,025 Y+0
582 C X-473,763 Y+0 DR+
583 CC X-468,975 Y+0
584 C X-464,187 Y+0 DR+
585 CC X-469,025 Y+0
586 C X-473,863 Y+0 DR+
587 CC X-468,975 Y+0
588 C X-464,087 Y+0 DR+
589 CC X-469,025 Y+0
590 C X-473,963 Y+0 DR+
591 CC X-468,975 Y+0
592 C X-463,987 Y+0 DR+
593 CC X-469,025 Y+0
594 C X-474,063 Y+0 DR+
595 CC X-468,975 Y+0
596 C X-463,887 Y+0 DR+
597 CC X-469,025 Y+0
598 C X-474,163 Y+0 DR+
599 CC X-468,975 Y+0
600 C X-463,787 Y+0 DR+
601 CC X-469,025 Y+0
602 C X-474,263 Y+0 DR+
603 CC X-468,975 Y+0
604 C X-463,687 Y+0 DR+
605 CC X-469,025 Y+0
606 C X-474,363 Y+0 DR+
607 CC X-468,975 Y+0
608 C X-463,587 Y+0 DR+
609 CC X-469,025 Y+0
610 C X-474,463 Y+0 DR+
611 CC X-468,975 Y+0
612 C X-463,487 Y+0 DR+
613 CC X-469,025 Y+0
614 C X-474,563 Y+0 DR+
615 CC X-468,975 Y+0
616 C X-463,387 Y+0 DR+
617 CC X-469,025 Y+0
618 C X-474,663 Y+0 DR+
619 CC X-468,975 Y+0
620 C X-463,287 Y+0 DR+
621 CC X-469,025 Y+0
622 C X-474,763 Y+0 DR+
623 CC X-468,975 Y+0
624 C X-463,187 Y+0 DR+
625 CC X-469,025 Y+0
626 C X-474,863 Y+0 DR+
627 CC X-468,975 Y+0
628 C X-463,087 Y+0 DR+
629 CC X-469,025 Y+0
630 C X-474,963 Y+0 DR+
631 CC X-468,975 Y+0
632 C X-465,991 Y-5,191 DR+
633 CC X-469 Y+0
634 C X-463 Y+0 DR+
635 CC X-469 Y+0
636 C X-465,991 Y-5,191 DR+
637 L Z+50 FMAX
638 TOOL CALL 19 Z S7427 DR-3
639 L X-529 Y+0 Z+50 FMAX
640 L Z+2 FMAX
641 L Z-5,05 F297
642 L X-533,8 Y+0,6 RL F3565
643 L X-534,4
644 CC X-534,4 Y+0
645 C X-535 Y+0 DR+
646 CC X-529 Y+0
647 C X-523 Y+0 DR+
648 CC X-529 Y+0
649 C X-535 Y+0 DR+
650 CC X-529 Y+0
651 C X-534,67 Y-1,963 DR+
652 CC X-529 Y+0
653 C X-523 Y+0 DR+
654 CC X-529 Y+0
655 C X-535 Y+0 DR+
656 CC X-529 Y+0
657 C X-534,67 Y-1,963 DR+
658 CC X-534,103 Y-1,767
659 C X-533,906 Y-2,334 DR+
660 L X-533,339 Y-2,138
661 L X-529 Y+0 R0
662 L Z+50 FMAX
663 L X-469 FMAX
664 L Z+2 FMAX
665 L Z-5,05 F297
666 L X-473,8 Y+0,6 RL F3565
667 L X-474,4
668 CC X-474,4 Y+0
669 C X-475 Y+0 DR+
670 CC X-469 Y+0
671 C X-463 Y+0 DR+
672 CC X-469 Y+0
673 C X-475 Y+0 DR+
674 CC X-469 Y+0
675 C X-474,67 Y-1,963 DR+
676 CC X-469 Y+0
677 C X-463 Y+0 DR+
678 CC X-469 Y+0
679 C X-475 Y+0 DR+
680 CC X-469 Y+0
681 C X-474,67 Y-1,963 DR+
682 CC X-474,103 Y-1,767
683 C X-473,906 Y-2,334 DR+
684 L X-473,339 Y-2,138
685 L X-469 Y+0 R0
686 L Z+50 FMAX
687 M9
688 M5
689 L Z-1 FMAX M91
690 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
691 ; CORRECTION USURE GAUCHE
692 ; SUREP R 0. SUREP Z 0.
693 TOOL CALL 1 Z S6000 DR-2,5
694 TOOL DEF 4
695 L X-529 Y+0 FMAX M3
696 L Z+50 FMAX
697 L Z+2 FMAX
698 L Z-2,3 F800
699 L X-534,5 Y+0,5 RL F1200
700 L X-535
701 CC X-535 Y+0
702 C X-535,5 Y+0 DR+
703 CC X-529 Y+0
704 C X-522,5 Y+0 DR+
705 CC X-529 Y+0
706 C X-535,5 Y+0 DR+
707 CC X-529 Y+0
708 C X-535,195 Y-1,969 DR+
709 CC X-534,718 Y-1,817
710 C X-534,567 Y-2,294 DR+
711 L X-534,09 Y-2,142
712 L X-529 Y+0 R0
713 L Z+50 FMAX
714 L X-469 FMAX
715 L Z+2 FMAX
716 L Z-2,3 F800
717 L X-474,5 Y+0,5 RL F1200
718 L X-475
719 CC X-475 Y+0
720 C X-475,5 Y+0 DR+
721 CC X-469 Y+0
722 C X-462,5 Y+0 DR+
723 CC X-469 Y+0
724 C X-475,5 Y+0 DR+
725 CC X-469 Y+0
726 C X-475,195 Y-1,969 DR+
727 CC X-474,718 Y-1,817
728 C X-474,567 Y-2,294 DR+
729 L X-474,09 Y-2,142
730 L X-469 Y+0 R0
731 L Z+50 FMAX
732 M5
733 L Z-1 FMAX M91
734 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
735 TOOL CALL 1 Z S1856 DR+0
736 TOOL DEF 4
737 L X-560 Y+35 FMAX M3
738 L Z+50 FMAX M8
739 ;  POINTAGE-PERCAGE
740 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
741 L X-560 Y+35 FMAX M99
742 L Y-40 FMAX M99
743 L X-430 Y+0 FMAX M99
744 L X-290 Y+35 FMAX M99
745 L Y-40 FMAX M99
746 L X-160 Y+0 FMAX M99
747 L X-35 Y+45 FMAX M99
748 L Y-45 FMAX M99
749 L Z+50 FMAX
750 M9
751 M5
752 L Z-1 FMAX M91
753 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
754 TOOL CALL 4 Z S1400 DR+0
755 TOOL DEF 1
756 L X-560 Y+35 FMAX M3
757 L Z+50 FMAX M8
758 ;  DEBOURRAGE
759 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
760 L X-560 Y+35 FMAX M99
761 L Y-40 FMAX M99
762 L X-430 Y+0 FMAX M99
763 L X-290 Y+35 FMAX M99
764 L Y-40 FMAX M99
765 L X-160 Y+0 FMAX M99
766 L X-35 Y+45 FMAX M99
767 L Y-45 FMAX M99
768 L Z+50 FMAX
769 M9
770 M5
771 L Z-1 FMAX M91
772 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
773 TOOL CALL 1 Z S1856 DR+0
774 TOOL DEF 20
775 L X-466 Y-41 FMAX M3
776 L Z+50 FMAX M8
777 ;  POINTAGE-PERCAGE
778 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
779 L X-466 Y-41 FMAX M99
780 L X-385,868 Y-0,574 FMAX M99
781 L X-75 Y-1 FMAX M99
782 L X-292,868 Y-0,574 FMAX M99
783 L Z+50 FMAX
784 M9
785 M5
786 L Z-1 FMAX M91
787 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
788 TOOL CALL 20 Z S3800 DR+0
789 TOOL DEF 1
790 L X-466 Y-41 FMAX M3
791 L Z+50 FMAX M8
792 ;  DEBOURRAGE
793 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
794 L X-466 Y-41 FMAX M99
795 L X-385,868 Y-0,574 FMAX M99
796 L X-75 Y-1 FMAX M99
797 L X-292,868 Y-0,574 FMAX M99
798 L Z+50 FMAX
799 M9
800 M5
801 L Z-1 FMAX M91
802 L Y-1 FMAX M91
803 M30
804 END PGM REP10 MM
