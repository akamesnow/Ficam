0 BEGIN PGM 9549-1-REP27-SUPPORT BOBINE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - 9549-1-REP27-SUPPORT BOBINE-A
4 ; PROG-CN DU 16-07-19 A 08:48
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T5 FO DIA 11.8 VC40 DMF FORET DIAM=11.7 2 DENTS A=118. ARS
12 ; T12 ALESOIR DIA 12 CARB VC 15 ALESOIR DIAM=12. 5 DENTS ARS
13 ; T17 P15323450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
14 ; T14 FRAISE DE FINITION DIA 10 FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
15 ; FIN DE LISTE DES OUTILS
16 L R0 FMAX
17 L Z-1 FMAX M91
18 ; *GROUPE D'USINAGE-1*
19 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
20 TOOL CALL 1 Z S1856 DR+0
21 TOOL DEF 4
22 L X+39,5 Y+13 FMAX M3
23 L Z+50 FMAX M8
24 ;  POINTAGE-PERCAGE
25 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
26 L X+39,5 Y+13 FMAX M99
27 L X-39,5 Y-13 FMAX M99
28 L Z+50 FMAX
29 M9
30 M5
31 L Z-1 FMAX M91
32 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
33 TOOL CALL 4 Z S1400 DR+0
34 TOOL DEF 18
35 L X+39,5 Y+13 FMAX M3
36 L Z+50 FMAX M7
37 ;  DEBOURRAGE
38 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-27 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
39 L X+39,5 Y+13 FMAX M99
40 L X-39,5 Y-13 FMAX M99
41 L Z+50 FMAX
42 M9
43 M5
44 L Z-1 FMAX M91
45 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
46 ; CORRECTION AUCUNE
47 ; SUREP R 0. SUREP Z 0.
48 TOOL CALL 18 Z S2865 DR+0
49 TOOL DEF 1
50 L X-37,543 Y-15,274 FMAX M3
51 L Z+50 FMAX M25
52 L Z+2 FMAX
53 L Z+0,5 F500
54 CC X-39,5 Y-13
55 CP IPA-180 Z+0,171 DR-
56 CC X-39,5 Y-13
57 CP IPA-180 Z-0,158 DR-
58 CC X-39,5 Y-13
59 CP IPA-180 Z-0,487 DR-
60 CC X-39,5 Y-13
61 CP IPA-180 Z-0,816 DR-
62 CC X-39,5 Y-13
63 CP IPA-180 Z-1,146 DR-
64 CC X-39,5 Y-13
65 CP IPA-180 Z-1,475 DR-
66 CC X-39,5 Y-13
67 CP IPA-180 Z-1,804 DR-
68 CC X-39,5 Y-13
69 CP IPA-180 Z-2,133 DR-
70 CC X-39,5 Y-13
71 CP IPA-180 Z-2,462 DR-
72 CC X-39,5 Y-13
73 CP IPA-180 Z-2,791 DR-
74 CC X-39,5 Y-13
75 CP IPA-180 Z-3,12 DR-
76 CC X-39,5 Y-13
77 CP IPA-180 Z-3,449 DR-
78 CC X-39,5 Y-13
79 CP IPA-180 Z-3,778 DR-
80 CC X-39,5 Y-13
81 CP IPA-180 Z-4,108 DR-
82 CC X-39,5 Y-13
83 CP IPA-180 Z-4,437 DR-
84 CC X-39,5 Y-13
85 CP IPA-180 Z-4,766 DR-
86 CC X-39,5 Y-13
87 CP IPA-180 Z-5,095 DR-
88 CC X-39,5 Y-13
89 CP IPA-180 Z-5,424 DR-
90 CC X-39,5 Y-13
91 CP IPA-180 Z-5,753 DR-
92 CC X-39,5 Y-13
93 CP IPA-180 Z-6,082 DR-
94 CC X-39,5 Y-13
95 CP IPA-180 Z-6,412 DR-
96 CC X-39,5 Y-13
97 CP IPA-180 Z-6,741 DR-
98 CC X-39,5 Y-13
99 CP IPA-180 Z-7,07 DR-
100 CC X-39,5 Y-13
101 CP IPA-180 Z-7,399 DR-
102 CC X-39,5 Y-13
103 CP IPA-180 Z-7,728 DR-
104 CC X-39,5 Y-13
105 CP IPA-180 Z-8,057 DR-
106 CC X-39,5 Y-13
107 CP IPA-180 Z-8,386 DR-
108 CC X-39,5 Y-13
109 CP IPA-180 Z-8,715 DR-
110 CC X-39,5 Y-13
111 CP IPA-180 Z-9,044 DR-
112 CC X-39,5 Y-13
113 CP IPA-180 Z-9,374 DR-
114 CC X-39,5 Y-13
115 CP IPA-180 Z-9,703 DR-
116 CC X-39,5 Y-13
117 CP IPA-180 Z-10,032 DR-
118 CC X-39,5 Y-13
119 CP IPA-310,715 Z-10,6 DR-
120 L X-38,75 Y-13 F401
121 CC X-41 Y-13
122 C X-43,25 Y-13 DR+
123 CC X-38 Y-13
124 C X-42,604 Y-15,523 DR+
125 CC X-39,5 Y-13
126 C X-35,5 Y-13 DR+
127 CC X-39,5 Y-13
128 C X-42,604 Y-15,523 DR+
129 L Z+50 FMAX
130 L X+41,457 Y+10,726 FMAX
131 L Z+2 FMAX
132 L Z+0,5 F500
133 CC X+39,5 Y+13
134 CP IPA-180 Z+0,171 DR-
135 CC X+39,5 Y+13
136 CP IPA-180 Z-0,158 DR-
137 CC X+39,5 Y+13
138 CP IPA-180 Z-0,487 DR-
139 CC X+39,5 Y+13
140 CP IPA-180 Z-0,816 DR-
141 CC X+39,5 Y+13
142 CP IPA-180 Z-1,146 DR-
143 CC X+39,5 Y+13
144 CP IPA-180 Z-1,475 DR-
145 CC X+39,5 Y+13
146 CP IPA-180 Z-1,804 DR-
147 CC X+39,5 Y+13
148 CP IPA-180 Z-2,133 DR-
149 CC X+39,5 Y+13
150 CP IPA-180 Z-2,462 DR-
151 CC X+39,5 Y+13
152 CP IPA-180 Z-2,791 DR-
153 CC X+39,5 Y+13
154 CP IPA-180 Z-3,12 DR-
155 CC X+39,5 Y+13
156 CP IPA-180 Z-3,449 DR-
157 CC X+39,5 Y+13
158 CP IPA-180 Z-3,778 DR-
159 CC X+39,5 Y+13
160 CP IPA-180 Z-4,108 DR-
161 CC X+39,5 Y+13
162 CP IPA-180 Z-4,437 DR-
163 CC X+39,5 Y+13
164 CP IPA-180 Z-4,766 DR-
165 CC X+39,5 Y+13
166 CP IPA-180 Z-5,095 DR-
167 CC X+39,5 Y+13
168 CP IPA-180 Z-5,424 DR-
169 CC X+39,5 Y+13
170 CP IPA-180 Z-5,753 DR-
171 CC X+39,5 Y+13
172 CP IPA-180 Z-6,082 DR-
173 CC X+39,5 Y+13
174 CP IPA-180 Z-6,412 DR-
175 CC X+39,5 Y+13
176 CP IPA-180 Z-6,741 DR-
177 CC X+39,5 Y+13
178 CP IPA-180 Z-7,07 DR-
179 CC X+39,5 Y+13
180 CP IPA-180 Z-7,399 DR-
181 CC X+39,5 Y+13
182 CP IPA-180 Z-7,728 DR-
183 CC X+39,5 Y+13
184 CP IPA-180 Z-8,057 DR-
185 CC X+39,5 Y+13
186 CP IPA-180 Z-8,386 DR-
187 CC X+39,5 Y+13
188 CP IPA-180 Z-8,715 DR-
189 CC X+39,5 Y+13
190 CP IPA-180 Z-9,044 DR-
191 CC X+39,5 Y+13
192 CP IPA-180 Z-9,374 DR-
193 CC X+39,5 Y+13
194 CP IPA-180 Z-9,703 DR-
195 CC X+39,5 Y+13
196 CP IPA-180 Z-10,032 DR-
197 CC X+39,5 Y+13
198 CP IPA-310,715 Z-10,6 DR-
199 L X+40,25 Y+13 F401
200 CC X+38 Y+13
201 C X+35,75 Y+13 DR+
202 CC X+41 Y+13
203 C X+36,396 Y+10,477 DR+
204 CC X+39,5 Y+13
205 C X+43,5 Y+13 DR+
206 CC X+39,5 Y+13
207 C X+36,396 Y+10,477 DR+
208 L Z+50 FMAX
209 TOOL CALL 18 Z S2865 DR-5
210 L X-39,5 Y-13 Z+50 FMAX
211 L Z+2 FMAX
212 L Z-10,6 F500
213 L X-41,5 Y-12 RL F401
214 L X-42,5
215 CC X-42,5 Y-13
216 C X-43,5 Y-13 DR+
217 CC X-39,5 Y-13
218 C X-35,5 Y-13 DR+
219 CC X-39,5 Y-13
220 C X-43,5 Y-13 DR+
221 CC X-39,5 Y-13
222 C X-43,376 Y-13,99 DR+
223 CC X-42,407 Y-13,742
224 C X-42,159 Y-14,711 DR+
225 L X-41,19 Y-14,464
226 L X-39,5 Y-13 R0
227 L Z+50 FMAX
228 L X+39,5 Y+13 FMAX
229 L Z+2 FMAX
230 L Z-10,6 F500
231 L X+37,5 Y+14 RL F401
232 L X+36,5
233 CC X+36,5 Y+13
234 C X+35,5 Y+13 DR+
235 CC X+39,5 Y+13
236 C X+43,5 Y+13 DR+
237 CC X+39,5 Y+13
238 C X+35,5 Y+13 DR+
239 CC X+39,5 Y+13
240 C X+35,624 Y+12,01 DR+
241 CC X+36,593 Y+12,258
242 C X+36,841 Y+11,289 DR+
243 L X+37,81 Y+11,536
244 L X+39,5 Y+13 R0
245 L Z+50 FMAX
246 M78
247 M5
248 L Z-1 FMAX M91
249 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
250 ; CORRECTION USURE GAUCHE
251 ; SUREP R 0. SUREP Z 0.
252 TOOL CALL 1 Z S6000 DR-2,5
253 TOOL DEF 5
254 L X-39,5 Y-13 FMAX M3
255 L Z+50 FMAX
256 L Z+2 FMAX
257 L Z-2,5 F800
258 L X-45 Y-12,5 RL F1200
259 L X-45,5
260 CC X-45,5 Y-13
261 C X-46 Y-13 DR+
262 CC X-39,5 Y-13
263 C X-33 Y-13 DR+
264 CC X-39,5 Y-13
265 C X-46 Y-13 DR+
266 CC X-39,5 Y-13
267 C X-45,923 Y-13,996 DR+
268 CC X-45,429 Y-13,919
269 C X-45,353 Y-14,414 DR+
270 L X-44,858 Y-14,337
271 L X-39,5 Y-13 R0
272 L Z+50 FMAX
273 L X+39,5 Y+13 FMAX
274 L Z+2 FMAX
275 L Z-2,5 F800
276 L X+34 Y+13,5 RL F1200
277 L X+33,5
278 CC X+33,5 Y+13
279 C X+33 Y+13 DR+
280 CC X+39,5 Y+13
281 C X+46 Y+13 DR+
282 CC X+39,5 Y+13
283 C X+33 Y+13 DR+
284 CC X+39,5 Y+13
285 C X+33,077 Y+12,004 DR+
286 CC X+33,571 Y+12,081
287 C X+33,647 Y+11,586 DR+
288 L X+34,142 Y+11,663
289 L X+39,5 Y+13 R0
290 L Z+50 FMAX
291 M5
292 L Z-1 FMAX M91
293 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
294 TOOL CALL 1 Z S1856 DR+0
295 TOOL DEF 5
296 L X+61,5 Y+0 FMAX M3
297 L Z+50 FMAX M8
298 ;  POINTAGE-PERCAGE
299 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,35 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
300 L X+61,5 Y+0 FMAX M99
301 L X-66,5 FMAX M99
302 L X+39,5 Y-13 FMAX M99
303 L X-39,5 Y+13 FMAX M99
304 L Z+50 FMAX
305 M9
306 M5
307 L Z-1 FMAX M91
308 ; T5 FO DIA 11.8 VC40 DMF FORET DIAM=11.7 2 DENTS A=118. ARS
309 TOOL CALL 5 Z S1650 DR+0
310 TOOL DEF 12
311 L X+61,5 Y+0 FMAX M3
312 L Z+50 FMAX M7
313 ;  DEBOURRAGE
314 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-27 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+5,85 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
315 L X+61,5 Y+0 FMAX M99
316 L X-66,5 FMAX M99
317 L X+39,5 Y-13 FMAX M99
318 L X-39,5 Y+13 FMAX M99
319 L Z+50 FMAX
320 M9
321 M5
322 L Z-1 FMAX M91
323 ; T12 ALESOIR DIA 12 CARB VC 15 ALESOIR DIAM=12. 5 DENTS ARS
324 TOOL CALL 12 Z S416 DR+0
325 TOOL DEF 17
326 L X+39,5 Y-13 FMAX M3
327 L Z+50 FMAX M8
328 ;  POINTAGE-PERCAGE
329 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-27 ; PROFONDEUR~
    Q206=63 ; AVANCE PLONGEE PROF.~
    Q202=+27 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
330 L X+39,5 Y-13 FMAX M99
331 L X-39,5 Y+13 FMAX M99
332 L Z+50 FMAX
333 M9
334 M5
335 L Z-1 FMAX M91
336 ; T17 P15323450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
337 ; CORRECTION AUCUNE
338 ; SUREP R 0.15 SUREP Z 0.
339 TOOL CALL 17 Z S2865 DR+0
340 TOOL DEF 14
341 L X-70,432 Y+3,089 FMAX M3
342 L Z+50 FMAX M25
343 L Z+2 FMAX
344 L Z+0,5 F500
345 CC X-66,5 Y+0
346 CP IPA-180 Z-0,048 DR-
347 CC X-66,5 Y+0
348 CP IPA-180 Z-0,597 DR-
349 CC X-66,5 Y+0
350 CP IPA-180 Z-1,146 DR-
351 CC X-66,5 Y+0
352 CP IPA-180 Z-1,694 DR-
353 CC X-66,5 Y+0
354 CP IPA-180 Z-2,242 DR-
355 CC X-66,5 Y+0
356 CP IPA-180 Z-2,791 DR-
357 CC X-66,5 Y+0
358 CP IPA-180 Z-3,34 DR-
359 CC X-66,5 Y+0
360 CP IPA-180 Z-3,888 DR-
361 CC X-66,5 Y+0
362 CP IPA-180 Z-4,437 DR-
363 CC X-66,5 Y+0
364 CP IPA-180 Z-4,985 DR-
365 CC X-66,5 Y+0
366 CP IPA-180 Z-5,534 DR-
367 CC X-66,5 Y+0
368 CP IPA-180 Z-6,082 DR-
369 CC X-66,5 Y+0
370 CP IPA-180 Z-6,63 DR-
371 CC X-66,5 Y+0
372 CP IPA-180 Z-7,179 DR-
373 CC X-66,5 Y+0
374 CP IPA-180 Z-7,728 DR-
375 CC X-66,5 Y+0
376 CP IPA-180 Z-8,277 DR-
377 CC X-66,5 Y+0
378 CP IPA-180 Z-8,825 DR-
379 CC X-66,5 Y+0
380 CP IPA-180 Z-9,374 DR-
381 CC X-66,5 Y+0
382 CP IPA-180 Z-9,922 DR-
383 CC X-66,5 Y+0
384 CP IPA-180 Z-10,471 DR-
385 CC X-66,5 Y+0
386 CP IPA-180 Z-11,02 DR-
387 CC X-66,5 Y+0
388 CP IPA-180 Z-11,568 DR-
389 CC X-66,5 Y+0
390 CP IPA-141,847 Z-12 DR-
391 L X-65,75 Y+0 F401
392 CC X-68 Y+0
393 C X-70,25 Y+0 DR+
394 CC X-65 Y+0
395 C X-59,75 Y+0 DR+
396 CC X-68 Y+0
397 C X-65,103 Y+7,725 DR+
398 CC X-66,5 Y+0
399 C X-58,65 Y+0 DR+
400 CC X-66,5 Y+0
401 C X-65,103 Y+7,725 DR+
402 L Z+10 FMAX
403 L X-70,432 Y+3,089 FMAX
404 L Z-10 FMAX
405 L Z-11,5 F500
406 CC X-66,5 Y+0
407 CP IPA-180 Z-12,049 DR-
408 CC X-66,5 Y+0
409 CP IPA-180 Z-12,597 DR-
410 CC X-66,5 Y+0
411 CP IPA-180 Z-13,146 DR-
412 CC X-66,5 Y+0
413 CP IPA-180 Z-13,694 DR-
414 CC X-66,5 Y+0
415 CP IPA-180 Z-14,243 DR-
416 CC X-66,5 Y+0
417 CP IPA-180 Z-14,791 DR-
418 CC X-66,5 Y+0
419 CP IPA-180 Z-15,34 DR-
420 CC X-66,5 Y+0
421 CP IPA-180 Z-15,888 DR-
422 CC X-66,5 Y+0
423 CP IPA-180 Z-16,436 DR-
424 CC X-66,5 Y+0
425 CP IPA-180 Z-16,985 DR-
426 CC X-66,5 Y+0
427 CP IPA-180 Z-17,534 DR-
428 CC X-66,5 Y+0
429 CP IPA-180 Z-18,082 DR-
430 CC X-66,5 Y+0
431 CP IPA-180 Z-18,63 DR-
432 CC X-66,5 Y+0
433 CP IPA-180 Z-19,179 DR-
434 CC X-66,5 Y+0
435 CP IPA-180 Z-19,728 DR-
436 CC X-66,5 Y+0
437 CP IPA-180 Z-20,277 DR-
438 CC X-66,5 Y+0
439 CP IPA-180 Z-20,825 DR-
440 CC X-66,5 Y+0
441 CP IPA-180 Z-21,374 DR-
442 CC X-66,5 Y+0
443 CP IPA-180 Z-21,922 DR-
444 CC X-66,5 Y+0
445 CP IPA-180 Z-22,471 DR-
446 CC X-66,5 Y+0
447 CP IPA-180 Z-23,02 DR-
448 CC X-66,5 Y+0
449 CP IPA-180 Z-23,568 DR-
450 CC X-66,5 Y+0
451 CP IPA-141,847 Z-24 DR-
452 L X-65,75 Y+0 F401
453 CC X-68 Y+0
454 C X-70,25 Y+0 DR+
455 CC X-65 Y+0
456 C X-59,75 Y+0 DR+
457 CC X-68 Y+0
458 C X-65,103 Y+7,725 DR+
459 CC X-66,5 Y+0
460 C X-58,65 Y+0 DR+
461 CC X-66,5 Y+0
462 C X-65,103 Y+7,725 DR+
463 L Z+50 FMAX
464 L X+57,568 Y+3,089 FMAX
465 L Z+2 FMAX
466 L Z+0,5 F500
467 CC X+61,5 Y+0
468 CP IPA-180 Z-0,048 DR-
469 CC X+61,5 Y+0
470 CP IPA-180 Z-0,597 DR-
471 CC X+61,5 Y+0
472 CP IPA-180 Z-1,146 DR-
473 CC X+61,5 Y+0
474 CP IPA-180 Z-1,694 DR-
475 CC X+61,5 Y+0
476 CP IPA-180 Z-2,242 DR-
477 CC X+61,5 Y+0
478 CP IPA-180 Z-2,791 DR-
479 CC X+61,5 Y+0
480 CP IPA-180 Z-3,34 DR-
481 CC X+61,5 Y+0
482 CP IPA-180 Z-3,888 DR-
483 CC X+61,5 Y+0
484 CP IPA-180 Z-4,437 DR-
485 CC X+61,5 Y+0
486 CP IPA-180 Z-4,985 DR-
487 CC X+61,5 Y+0
488 CP IPA-180 Z-5,534 DR-
489 CC X+61,5 Y+0
490 CP IPA-180 Z-6,082 DR-
491 CC X+61,5 Y+0
492 CP IPA-180 Z-6,63 DR-
493 CC X+61,5 Y+0
494 CP IPA-180 Z-7,179 DR-
495 CC X+61,5 Y+0
496 CP IPA-180 Z-7,728 DR-
497 CC X+61,5 Y+0
498 CP IPA-180 Z-8,277 DR-
499 CC X+61,5 Y+0
500 CP IPA-180 Z-8,825 DR-
501 CC X+61,5 Y+0
502 CP IPA-180 Z-9,374 DR-
503 CC X+61,5 Y+0
504 CP IPA-180 Z-9,922 DR-
505 CC X+61,5 Y+0
506 CP IPA-180 Z-10,471 DR-
507 CC X+61,5 Y+0
508 CP IPA-180 Z-11,02 DR-
509 CC X+61,5 Y+0
510 CP IPA-180 Z-11,568 DR-
511 CC X+61,5 Y+0
512 CP IPA-141,847 Z-12 DR-
513 L X+62,25 Y+0 F401
514 CC X+60 Y+0
515 C X+57,75 Y+0 DR+
516 CC X+63 Y+0
517 C X+68,25 Y+0 DR+
518 CC X+60 Y+0
519 C X+62,897 Y+7,725 DR+
520 CC X+61,5 Y+0
521 C X+69,35 Y+0 DR+
522 CC X+61,5 Y+0
523 C X+62,897 Y+7,725 DR+
524 L Z+10 FMAX
525 L X+57,568 Y+3,089 FMAX
526 L Z-10 FMAX
527 L Z-11,5 F500
528 CC X+61,5 Y+0
529 CP IPA-180 Z-12,049 DR-
530 CC X+61,5 Y+0
531 CP IPA-180 Z-12,597 DR-
532 CC X+61,5 Y+0
533 CP IPA-180 Z-13,146 DR-
534 CC X+61,5 Y+0
535 CP IPA-180 Z-13,694 DR-
536 CC X+61,5 Y+0
537 CP IPA-180 Z-14,243 DR-
538 CC X+61,5 Y+0
539 CP IPA-180 Z-14,791 DR-
540 CC X+61,5 Y+0
541 CP IPA-180 Z-15,34 DR-
542 CC X+61,5 Y+0
543 CP IPA-180 Z-15,888 DR-
544 CC X+61,5 Y+0
545 CP IPA-180 Z-16,436 DR-
546 CC X+61,5 Y+0
547 CP IPA-180 Z-16,985 DR-
548 CC X+61,5 Y+0
549 CP IPA-180 Z-17,534 DR-
550 CC X+61,5 Y+0
551 CP IPA-180 Z-18,082 DR-
552 CC X+61,5 Y+0
553 CP IPA-180 Z-18,63 DR-
554 CC X+61,5 Y+0
555 CP IPA-180 Z-19,179 DR-
556 CC X+61,5 Y+0
557 CP IPA-180 Z-19,728 DR-
558 CC X+61,5 Y+0
559 CP IPA-180 Z-20,277 DR-
560 CC X+61,5 Y+0
561 CP IPA-180 Z-20,825 DR-
562 CC X+61,5 Y+0
563 CP IPA-180 Z-21,374 DR-
564 CC X+61,5 Y+0
565 CP IPA-180 Z-21,922 DR-
566 CC X+61,5 Y+0
567 CP IPA-180 Z-22,471 DR-
568 CC X+61,5 Y+0
569 CP IPA-180 Z-23,02 DR-
570 CC X+61,5 Y+0
571 CP IPA-180 Z-23,568 DR-
572 CC X+61,5 Y+0
573 CP IPA-141,847 Z-24 DR-
574 L X+62,25 Y+0 F401
575 CC X+60 Y+0
576 C X+57,75 Y+0 DR+
577 CC X+63 Y+0
578 C X+68,25 Y+0 DR+
579 CC X+60 Y+0
580 C X+62,897 Y+7,725 DR+
581 CC X+61,5 Y+0
582 C X+69,35 Y+0 DR+
583 CC X+61,5 Y+0
584 C X+62,897 Y+7,725 DR+
585 L Z+50 FMAX
586 TOOL CALL 17 Z S2865 DR-5
587 L X-66,5 Y+0 Z+50 FMAX
588 L Z-10 FMAX
589 L Z-24 F500
590 L X-72,35 Y+1 RL F401
591 L X-73,35
592 CC X-73,35 Y+0
593 C X-74,35 Y+0 DR+
594 CC X-66,5 Y+0
595 C X-58,65 Y+0 DR+
596 CC X-66,5 Y+0
597 C X-74,35 Y+0 DR+
598 CC X-66,5 Y+0
599 C X-74,286 Y-0,997 DR+
600 CC X-66,5 Y+0
601 C X-58,65 Y+0 DR+
602 CC X-66,5 Y+0
603 C X-74,35 Y+0 DR+
604 CC X-66,5 Y+0
605 C X-74,286 Y-0,997 DR+
606 CC X-73,294 Y-0,87
607 C X-73,167 Y-1,862 DR+
608 L X-72,176 Y-1,735
609 L X-66,5 Y+0 R0
610 L Z+50 FMAX
611 L X+61,5 FMAX
612 L Z-10 FMAX
613 L Z-24 F500
614 L X+55,65 Y+1 RL F401
615 L X+54,65
616 CC X+54,65 Y+0
617 C X+53,65 Y+0 DR+
618 CC X+61,5 Y+0
619 C X+69,35 Y+0 DR+
620 CC X+61,5 Y+0
621 C X+53,65 Y+0 DR+
622 CC X+61,5 Y+0
623 C X+53,714 Y-0,997 DR+
624 CC X+61,5 Y+0
625 C X+69,35 Y+0 DR+
626 CC X+61,5 Y+0
627 C X+53,65 Y+0 DR+
628 CC X+61,5 Y+0
629 C X+53,714 Y-0,997 DR+
630 CC X+54,706 Y-0,87
631 C X+54,833 Y-1,862 DR+
632 L X+55,824 Y-1,735
633 L X+61,5 Y+0 R0
634 L Z+50 FMAX
635 M78
636 M5
637 L Z-1 FMAX M91
638 ; T14 FRAISE DE FINITION DIA 10 FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
639 ; CORRECTION USURE GAUCHE
640 ; SUREP R 0.05 SUREP Z 0.
641 TOOL CALL 14 Z S1200 DR-5
642 TOOL DEF 1
643 L X-66,5 Y+0 FMAX M3
644 L Z+50 FMAX M8
645 L Z+2 FMAX
646 L Z-24 F1000
647 L X-72,45 Y+1 RL F400
648 L X-73,45
649 CC X-73,45 Y+0
650 C X-74,45 Y+0 DR+
651 CC X-66,5 Y+0
652 C X-58,55 Y+0 DR+
653 CC X-66,5 Y+0
654 C X-74,45 Y+0 DR+
655 CC X-66,5 Y+0
656 C X-74,387 Y-0,997 DR+
657 CC X-66,5 Y+0
658 C X-58,55 Y+0 DR+
659 CC X-66,5 Y+0
660 C X-74,45 Y+0 DR+
661 CC X-66,5 Y+0
662 C X-74,387 Y-0,997 DR+
663 CC X-66,5 Y+0
664 C X-58,55 Y+0 DR+
665 CC X-66,5 Y+0
666 C X-74,45 Y+0 DR+
667 CC X-66,5 Y+0
668 C X-74,387 Y-0,997 DR+
669 CC X-66,5 Y+0
670 C X-58,55 Y+0 DR+
671 CC X-66,5 Y+0
672 C X-74,45 Y+0 DR+
673 CC X-66,5 Y+0
674 C X-74,387 Y-0,997 DR+
675 CC X-73,395 Y-0,872
676 C X-73,27 Y-1,864 DR+
677 L X-72,278 Y-1,739
678 L X-66,5 Y+0 R0
679 L Z+50 FMAX
680 L X+61,5 FMAX
681 L Z+2 FMAX
682 L Z-24 F1000
683 L X+55,55 Y+1 RL F400
684 L X+54,55
685 CC X+54,55 Y+0
686 C X+53,55 Y+0 DR+
687 CC X+61,5 Y+0
688 C X+69,45 Y+0 DR+
689 CC X+61,5 Y+0
690 C X+53,55 Y+0 DR+
691 CC X+61,5 Y+0
692 C X+53,613 Y-0,997 DR+
693 CC X+61,5 Y+0
694 C X+69,45 Y+0 DR+
695 CC X+61,5 Y+0
696 C X+53,55 Y+0 DR+
697 CC X+61,5 Y+0
698 C X+53,613 Y-0,997 DR+
699 CC X+61,5 Y+0
700 C X+69,45 Y+0 DR+
701 CC X+61,5 Y+0
702 C X+53,55 Y+0 DR+
703 CC X+61,5 Y+0
704 C X+53,613 Y-0,997 DR+
705 CC X+61,5 Y+0
706 C X+69,45 Y+0 DR+
707 CC X+61,5 Y+0
708 C X+53,55 Y+0 DR+
709 CC X+61,5 Y+0
710 C X+53,613 Y-0,997 DR+
711 CC X+54,605 Y-0,872
712 C X+54,73 Y-1,864 DR+
713 L X+55,722 Y-1,739
714 L X+61,5 Y+0 R0
715 L Z+50 FMAX
716 M9
717 M5
718 L Z-1 FMAX M91
719 M00
720 ; T14 FRAISE DE FINITION DIA 10 FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
721 ; CORRECTION USURE GAUCHE
722 ; SUREP R 0. SUREP Z 0.
723 TOOL CALL 14 Z S1200 DR-5
724 TOOL DEF 1
725 L X-66,5 Y+0 FMAX M3
726 L Z+50 FMAX M8
727 L Z+2 FMAX
728 L Z-24 F100
729 L X-72,5 Y+1 RL
730 L X-73,5
731 CC X-73,5 Y+0
732 C X-74,5 Y+0 DR+
733 CC X-66,5 Y+0
734 C X-58,5 Y+0 DR+
735 CC X-66,5 Y+0
736 C X-74,5 Y+0 DR+
737 CC X-66,5 Y+0
738 C X-74,438 Y-0,997 DR+
739 CC X-66,5 Y+0
740 C X-58,5 Y+0 DR+
741 CC X-66,5 Y+0
742 C X-74,5 Y+0 DR+
743 CC X-66,5 Y+0
744 C X-74,438 Y-0,997 DR+
745 CC X-66,5 Y+0
746 C X-58,5 Y+0 DR+
747 CC X-66,5 Y+0
748 C X-74,5 Y+0 DR+
749 CC X-66,5 Y+0
750 C X-74,438 Y-0,997 DR+
751 CC X-66,5 Y+0
752 C X-58,5 Y+0 DR+
753 CC X-66,5 Y+0
754 C X-74,5 Y+0 DR+
755 CC X-66,5 Y+0
756 C X-74,438 Y-0,997 DR+
757 CC X-73,445 Y-0,873
758 C X-73,321 Y-1,865 DR+
759 L X-72,329 Y-1,74
760 L X-66,5 Y+0 R0
761 L Z+50 FMAX
762 L X+61,5 FMAX
763 L Z+2 FMAX
764 L Z-24
765 L X+55,5 Y+1 RL
766 L X+54,5
767 CC X+54,5 Y+0
768 C X+53,5 Y+0 DR+
769 CC X+61,5 Y+0
770 C X+69,5 Y+0 DR+
771 CC X+61,5 Y+0
772 C X+53,5 Y+0 DR+
773 CC X+61,5 Y+0
774 C X+53,562 Y-0,997 DR+
775 CC X+61,5 Y+0
776 C X+69,5 Y+0 DR+
777 CC X+61,5 Y+0
778 C X+53,5 Y+0 DR+
779 CC X+61,5 Y+0
780 C X+53,562 Y-0,997 DR+
781 CC X+61,5 Y+0
782 C X+69,5 Y+0 DR+
783 CC X+61,5 Y+0
784 C X+53,5 Y+0 DR+
785 CC X+61,5 Y+0
786 C X+53,562 Y-0,997 DR+
787 CC X+61,5 Y+0
788 C X+69,5 Y+0 DR+
789 CC X+61,5 Y+0
790 C X+53,5 Y+0 DR+
791 CC X+61,5 Y+0
792 C X+53,562 Y-0,997 DR+
793 CC X+54,555 Y-0,873
794 C X+54,679 Y-1,865 DR+
795 L X+55,671 Y-1,74
796 L X+61,5 Y+0 R0
797 L Z+50 FMAX
798 M9
799 M5
800 L Z-1 FMAX M91
801 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
802 ; CORRECTION USURE GAUCHE
803 ; SUREP R 0. SUREP Z 0.
804 TOOL CALL 1 Z S6000 DR-2,5
805 L X-66,5 Y+0 FMAX M3
806 L Z+50 FMAX
807 L Z+2 FMAX
808 L Z-2,3 F800
809 L X-76 Y+0,5 RL F1200
810 L X-76,5
811 CC X-76,5 Y+0
812 C X-77 Y+0 DR+
813 CC X-66,5 Y+0
814 C X-56 Y+0 DR+
815 CC X-66,5 Y+0
816 C X-77 Y+0 DR+
817 CC X-66,5 Y+0
818 C X-76,952 Y-0,998 DR+
819 CC X-76,455 Y-0,951
820 C X-76,407 Y-1,449 DR+
821 L X-75,909 Y-1,401
822 L X-66,5 Y+0 R0
823 L Z+50 FMAX
824 L X+61,5 FMAX
825 L Z+2 FMAX
826 L Z-2,3 F800
827 L X+52 Y+0,5 RL F1200
828 L X+51,5
829 CC X+51,5 Y+0
830 C X+51 Y+0 DR+
831 CC X+61,5 Y+0
832 C X+72 Y+0 DR+
833 CC X+61,5 Y+0
834 C X+51 Y+0 DR+
835 CC X+61,5 Y+0
836 C X+51,048 Y-0,998 DR+
837 CC X+51,545 Y-0,951
838 C X+51,593 Y-1,449 DR+
839 L X+52,091 Y-1,401
840 L X+61,5 Y+0 R0
841 L Z+50 FMAX
842 M5
843 L Z-1 FMAX M91
844 L Y-1 FMAX M91
845 M30
846 END PGM 9549-1-REP27-SUPPORT BOBINE-A MM
