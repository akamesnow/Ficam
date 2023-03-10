0 BEGIN PGM REP 15 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 15
4 ; PROG-CN DU 28-09-22 A 09:01
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T21 DIA 5.8 CARB VC 40 DMF OK FORET DIAM=5.8 2 DENTS A=118. ARS
10 ; T12 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
11 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-1*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 21
19 L X+5,04 Y+0 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X+5,04 Y+0 FMAX M99
24 M9
25 M5
26 L Z-1 FMAX M91
27 ; T21 DIA 5.8 CARB VC 40 DMF OK FORET DIAM=5.8 2 DENTS A=118. ARS
28 TOOL CALL 21 Z S2000 DR+0
29 TOOL DEF 12
30 L X+5,04 Y+0 FMAX M3
31 L Z+50 FMAX M7
32 ;  DEBOURRAGE
33 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=180 ; AVANCE PLONGEE PROF.~
    Q202=+2,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
34 L X+5,04 Y+0 FMAX M99
35 M9
36 M5
37 L Z-1 FMAX M91
38 ; T12 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
39 TOOL CALL 12 Z S833 DR+0
40 TOOL DEF 1
41 L X+5,04 Y+0 FMAX M3
42 L Z+50 FMAX M8
43 ;  POINTAGE-PERCAGE
44 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=83 ; AVANCE PLONGEE PROF.~
    Q202=+30 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
45 L X+5,04 Y+0 FMAX M99
46 M9
47 M5
48 L Z-1 FMAX M91
49 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
50 TOOL CALL 1 Z S1856 DR+0
51 TOOL DEF 21
52 L X-4,96 Y+0 FMAX M3
53 L Z+50 FMAX M8
54 ;  POINTAGE-PERCAGE
55 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
56 L X-4,96 Y+0 FMAX M99
57 M9
58 M5
59 L Z-1 FMAX M91
60 ; T21 DIA 5.8 CARB VC 40 DMF OK FORET DIAM=5.8 2 DENTS A=118. ARS
61 TOOL CALL 21 Z S2000 DR+0
62 TOOL DEF 19
63 L X-4,96 Y+0 FMAX M3
64 L Z+50 FMAX M7
65 ;  DEBOURRAGE
66 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q206=180 ; AVANCE PLONGEE PROF.~
    Q202=+2,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
67 L X-4,96 Y+0 FMAX M99
68 M9
69 M5
70 L Z-1 FMAX M91
71 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
72 ; CORRECTION AUCUNE
73 ; SUREP R 0. SUREP Z 0.
74 TOOL CALL 19 Z S7427 DR+0
75 TOOL DEF 1
76 L X-3,926 Y-0,61 FMAX M3
77 L Z+50 FMAX M8
78 L Z+2 FMAX
79 L Z+0,5 F297
80 CC X-4,96 Y+0
81 CP IPA-180 Z+0,236 DR-
82 CC X-4,96 Y+0
83 CP IPA-180 Z-0,027 DR-
84 CC X-4,96 Y+0
85 CP IPA-180 Z-0,291 DR-
86 CC X-4,96 Y+0
87 CP IPA-180 Z-0,554 DR-
88 CC X-4,96 Y+0
89 CP IPA-180 Z-0,818 DR-
90 CC X-4,96 Y+0
91 CP IPA-180 Z-1,082 DR-
92 CC X-4,96 Y+0
93 CP IPA-180 Z-1,345 DR-
94 CC X-4,96 Y+0
95 CP IPA-180 Z-1,609 DR-
96 CC X-4,96 Y+0
97 CP IPA-180 Z-1,873 DR-
98 CC X-4,96 Y+0
99 CP IPA-180 Z-2,136 DR-
100 CC X-4,96 Y+0
101 CP IPA-180 Z-2,399 DR-
102 CC X-4,96 Y+0
103 CP IPA-180 Z-2,663 DR-
104 CC X-4,96 Y+0
105 CP IPA-180 Z-2,927 DR-
106 CC X-4,96 Y+0
107 CP IPA-180 Z-3,191 DR-
108 CC X-4,96 Y+0
109 CP IPA-180 Z-3,454 DR-
110 CC X-4,96 Y+0
111 CP IPA-180 Z-3,718 DR-
112 CC X-4,96 Y+0
113 CP IPA-180 Z-3,982 DR-
114 CC X-4,96 Y+0
115 CP IPA-180 Z-4,245 DR-
116 CC X-4,96 Y+0
117 CP IPA-180 Z-4,508 DR-
118 CC X-4,96 Y+0
119 CP IPA-180 Z-4,772 DR-
120 CC X-4,96 Y+0
121 CP IPA-180 Z-5,036 DR-
122 CC X-4,96 Y+0
123 CP IPA-180 Z-5,3 DR-
124 CC X-4,96 Y+0
125 CP IPA-180 Z-5,563 DR-
126 CC X-4,96 Y+0
127 CP IPA-180 Z-5,827 DR-
128 CC X-4,96 Y+0
129 CP IPA-180 Z-6,091 DR-
130 CC X-4,96 Y+0
131 CP IPA-180 Z-6,354 DR-
132 CC X-4,96 Y+0
133 CP IPA-180 Z-6,617 DR-
134 CC X-4,96 Y+0
135 CP IPA-180 Z-6,881 DR-
136 CC X-4,96 Y+0
137 CP IPA-180 Z-7,145 DR-
138 CC X-4,96 Y+0
139 CP IPA-180 Z-7,409 DR-
140 CC X-4,96 Y+0
141 CP IPA-180 Z-7,672 DR-
142 CC X-4,96 Y+0
143 CP IPA-180 Z-7,936 DR-
144 CC X-4,96 Y+0
145 CP IPA-180 Z-8,2 DR-
146 CC X-4,96 Y+0
147 CP IPA-180 Z-8,463 DR-
148 CC X-4,96 Y+0
149 CP IPA-180 Z-8,726 DR-
150 CC X-4,96 Y+0
151 CP IPA-180 Z-8,99 DR-
152 CC X-4,96 Y+0
153 CP IPA-180 Z-9,253 DR-
154 CC X-4,96 Y+0
155 CP IPA-180 Z-9,517 DR-
156 CC X-4,96 Y+0
157 CP IPA-329,462 Z-10 DR-
158 L X-4,947 Y+0 F3565
159 CC X-4,985 Y+0
160 C X-5,023 Y+0 DR+
161 CC X-4,935 Y+0
162 C X-4,847 Y+0 DR+
163 CC X-4,985 Y+0
164 C X-5,123 Y+0 DR+
165 CC X-4,935 Y+0
166 C X-4,747 Y+0 DR+
167 CC X-4,985 Y+0
168 C X-5,223 Y+0 DR+
169 CC X-4,935 Y+0
170 C X-4,647 Y+0 DR+
171 CC X-4,985 Y+0
172 C X-5,323 Y+0 DR+
173 CC X-4,935 Y+0
174 C X-4,547 Y+0 DR+
175 CC X-4,985 Y+0
176 C X-5,423 Y+0 DR+
177 CC X-4,935 Y+0
178 C X-4,447 Y+0 DR+
179 CC X-4,985 Y+0
180 C X-5,523 Y+0 DR+
181 CC X-4,935 Y+0
182 C X-4,347 Y+0 DR+
183 CC X-4,985 Y+0
184 C X-5,623 Y+0 DR+
185 CC X-4,935 Y+0
186 C X-4,247 Y+0 DR+
187 CC X-4,985 Y+0
188 C X-5,723 Y+0 DR+
189 CC X-4,935 Y+0
190 C X-4,147 Y+0 DR+
191 CC X-4,985 Y+0
192 C X-5,823 Y+0 DR+
193 CC X-4,935 Y+0
194 C X-4,047 Y+0 DR+
195 CC X-4,985 Y+0
196 C X-5,923 Y+0 DR+
197 CC X-4,935 Y+0
198 C X-3,947 Y+0 DR+
199 CC X-4,985 Y+0
200 C X-6,023 Y+0 DR+
201 CC X-4,935 Y+0
202 C X-3,847 Y+0 DR+
203 CC X-4,985 Y+0
204 C X-6,123 Y+0 DR+
205 CC X-4,935 Y+0
206 C X-3,747 Y+0 DR+
207 CC X-4,985 Y+0
208 C X-6,223 Y+0 DR+
209 CC X-4,935 Y+0
210 C X-3,647 Y+0 DR+
211 CC X-4,985 Y+0
212 C X-6,323 Y+0 DR+
213 CC X-4,935 Y+0
214 C X-3,547 Y+0 DR+
215 CC X-4,985 Y+0
216 C X-6,423 Y+0 DR+
217 CC X-4,935 Y+0
218 C X-3,447 Y+0 DR+
219 CC X-4,985 Y+0
220 C X-6,523 Y+0 DR+
221 CC X-4,935 Y+0
222 C X-3,347 Y+0 DR+
223 CC X-4,985 Y+0
224 C X-6,623 Y+0 DR+
225 CC X-4,935 Y+0
226 C X-3,247 Y+0 DR+
227 CC X-4,985 Y+0
228 C X-5,844 Y+1,51 DR+
229 CC X-4,96 Y+0
230 C X-4,96 Y-1,75 DR+
231 CC X-4,96 Y+0
232 C X-5,844 Y+1,51 DR+
233 L X-4,96 Y+0
234 TOOL CALL 19 Z S7427 DR-3
235 L X-4,36 Y+0,55 Z-10 RL
236 L Y+1,15
237 CC X-4,96 Y+1,15
238 C X-4,96 Y+1,75 DR+
239 CC X-4,96 Y+0
240 C X-4,96 Y-1,75 DR+
241 CC X-4,96 Y+0
242 C X-4,96 Y+1,75 DR+
243 CC X-4,96 Y+0
244 C X-5,906 Y+1,472 DR+
245 CC X-4,96 Y+0
246 C X-4,96 Y-1,75 DR+
247 CC X-4,96 Y+0
248 C X-4,96 Y+1,75 DR+
249 CC X-4,96 Y+0
250 C X-5,906 Y+1,472 DR+
251 CC X-4,96 Y+0
252 C X-4,96 Y-1,75 DR+
253 CC X-4,96 Y+0
254 C X-4,96 Y+1,75 DR+
255 CC X-4,96 Y+0
256 C X-5,906 Y+1,472 DR+
257 CC X-5,582 Y+0,967
258 C X-6,087 Y+0,643 DR+
259 L X-5,762 Y+0,138
260 L X-4,96 Y+0 R0
261 L Z+50 FMAX
262 ; CORRECTION USURE GAUCHE
263 ; SUREP R 0. SUREP Z 0.
264 L X-10,127 Y-17,356 FMAX
265 L Z+2 FMAX
266 L Z-5 F297
267 L X-10,645 Y-13,39 RL F3565
268 CC X-12,628 Y-13,648
269 C X-11,409 Y-12,063 DR+
270 L X-14,009 Y-10,063
271 CC X-15,228 Y-11,648
272 C X-15,487 Y-9,665 DR+
273 L X-19,453 Y-10,183 R0
274 L Z+10 FMAX
275 L X-9,518 Y-16,563 FMAX
276 L Z+2 FMAX
277 L Z-5 F297
278 L X-10,035 Y-12,597 RL F3565
279 CC X-12,018 Y-12,856
280 C X-10,799 Y-11,27 DR+
281 L X-13,399 Y-9,27
282 CC X-14,618 Y-10,856
283 C X-14,877 Y-8,873 DR+
284 L X-18,843 Y-9,39 R0
285 L Z+10 FMAX
286 L X-8,908 Y-15,771 FMAX
287 L Z+2 FMAX
288 L Z-5 F297
289 L X-9,425 Y-11,804 RL F3565
290 CC X-11,409 Y-12,063
291 C X-10,189 Y-10,478 DR+
292 L X-12,789 Y-8,478
293 CC X-14,009 Y-10,063
294 C X-14,267 Y-8,08 DR+
295 L X-18,234 Y-8,597 R0
296 L Z+10 FMAX
297 L X-8,908 Y-15,771 FMAX
298 L Z+2 FMAX
299 L Z-5 F297
300 L X-9,425 Y-11,804 RL F3565
301 CC X-11,409 Y-12,063
302 C X-10,189 Y-10,478 DR+
303 L X-12,789 Y-8,478
304 CC X-14,009 Y-10,063
305 C X-14,267 Y-8,08 DR+
306 L X-18,234 Y-8,597 R0
307 L Z+10 FMAX
308 L X-8,908 Y-15,771 FMAX
309 L Z+2 FMAX
310 L Z-5 F297
311 L X-9,425 Y-11,804 RL F3565
312 CC X-11,409 Y-12,063
313 C X-10,189 Y-10,478 DR+
314 L X-12,789 Y-8,478
315 CC X-14,009 Y-10,063
316 C X-14,267 Y-8,08 DR+
317 L X-18,234 Y-8,597 R0
318 L Z+50 FMAX
319 L X-19,453 Y+10,183 FMAX
320 L Z+2 FMAX
321 L Z-5 F297
322 L X-15,487 Y+9,665 RL F3565
323 CC X-15,228 Y+11,648
324 C X-14,009 Y+10,063 DR+
325 L X-11,409 Y+12,063
326 CC X-12,628 Y+13,648
327 C X-10,645 Y+13,39 DR+
328 L X-10,127 Y+17,356 R0
329 L Z+10 FMAX
330 L X-18,843 Y+9,39 FMAX
331 L Z+2 FMAX
332 L Z-5 F297
333 L X-14,877 Y+8,873 RL F3565
334 CC X-14,618 Y+10,856
335 C X-13,399 Y+9,27 DR+
336 L X-10,799 Y+11,27
337 CC X-12,018 Y+12,856
338 C X-10,035 Y+12,597 DR+
339 L X-9,518 Y+16,563 R0
340 L Z+10 FMAX
341 L X-18,234 Y+8,597 FMAX
342 L Z+2 FMAX
343 L Z-5 F297
344 L X-14,267 Y+8,08 RL F3565
345 CC X-14,009 Y+10,063
346 C X-12,789 Y+8,478 DR+
347 L X-10,189 Y+10,478
348 CC X-11,409 Y+12,063
349 C X-9,425 Y+11,804 DR+
350 L X-8,908 Y+15,771 R0
351 L Z+10 FMAX
352 L X-18,234 Y+8,597 FMAX
353 L Z+2 FMAX
354 L Z-5 F297
355 L X-14,267 Y+8,08 RL F3565
356 CC X-14,009 Y+10,063
357 C X-12,789 Y+8,478 DR+
358 L X-10,189 Y+10,478
359 CC X-11,409 Y+12,063
360 C X-9,425 Y+11,804 DR+
361 L X-8,908 Y+15,771 R0
362 L Z+10 FMAX
363 L X-18,234 Y+8,597 FMAX
364 L Z+2 FMAX
365 L Z-5 F297
366 L X-14,267 Y+8,08 RL F3565
367 CC X-14,009 Y+10,063
368 C X-12,789 Y+8,478 DR+
369 L X-10,189 Y+10,478
370 CC X-11,409 Y+12,063
371 C X-9,425 Y+11,804 DR+
372 L X-8,908 Y+15,771 R0
373 L Z+50 FMAX
374 M9
375 M5
376 L Z-1 FMAX M91
377 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
378 ; CORRECTION USURE GAUCHE
379 ; SUREP R 0. SUREP Z 0.
380 TOOL CALL 1 Z S6000 DR-2,5
381 L X-14,496 Y+12,645 FMAX M3
382 L Z+50 FMAX
383 L Z+2 FMAX
384 L Z-3,2 F800
385 L X-12,139 Y+10,288 RL F1200
386 CC X-10,96 Y+11,467
387 C X-10,96 Y+9,8 DR+
388 L X+10,96
389 CC X+10,96 Y+11,467
390 C X+12,139 Y+10,288 DR+
391 L X+14,496 Y+12,645 R0
392 L Z+10 FMAX
393 L X-14,496 Y+11,845 FMAX
394 L Z+2 FMAX
395 L Z-3,2 F800
396 L X-12,139 Y+9,488 RL F1200
397 CC X-10,96 Y+10,667
398 C X-10,96 Y+9 DR+
399 L X+10,96
400 CC X+10,96 Y+10,667
401 C X+12,139 Y+9,488 DR+
402 L X+14,496 Y+11,845 R0
403 L Z+10 FMAX
404 L X-14,496 FMAX
405 L Z+2 FMAX
406 L Z-3,2 F800
407 L X-12,139 Y+9,488 RL F1200
408 CC X-10,96 Y+10,667
409 C X-10,96 Y+9 DR+
410 L X+10,96
411 CC X+10,96 Y+10,667
412 C X+12,139 Y+9,488 DR+
413 L X+14,496 Y+11,845 R0
414 L Z+10 FMAX
415 L X-14,496 FMAX
416 L Z+2 FMAX
417 L Z-3,2 F800
418 L X-12,139 Y+9,488 RL F1200
419 CC X-10,96 Y+10,667
420 C X-10,96 Y+9 DR+
421 L X+10,96
422 CC X+10,96 Y+10,667
423 C X+12,139 Y+9,488 DR+
424 L X+14,496 Y+11,845 R0
425 L Z+50 FMAX
426 L Y-12,645 FMAX
427 L Z+2 FMAX
428 L Z-3,2 F800
429 L X+12,139 Y-10,288 RL F1200
430 CC X+10,96 Y-11,467
431 C X+10,96 Y-9,8 DR+
432 L X-10,96
433 CC X-10,96 Y-11,467
434 C X-12,139 Y-10,288 DR+
435 L X-14,496 Y-12,645 R0
436 L Z+10 FMAX
437 L X+14,496 Y-11,845 FMAX
438 L Z+2 FMAX
439 L Z-3,2 F800
440 L X+12,139 Y-9,488 RL F1200
441 CC X+10,96 Y-10,667
442 C X+10,96 Y-9 DR+
443 L X-10,96
444 CC X-10,96 Y-10,667
445 C X-12,139 Y-9,488 DR+
446 L X-14,496 Y-11,845 R0
447 L Z+10 FMAX
448 L X+14,496 FMAX
449 L Z+2 FMAX
450 L Z-3,2 F800
451 L X+12,139 Y-9,488 RL F1200
452 CC X+10,96 Y-10,667
453 C X+10,96 Y-9 DR+
454 L X-10,96
455 CC X-10,96 Y-10,667
456 C X-12,139 Y-9,488 DR+
457 L X-14,496 Y-11,845 R0
458 L Z+10 FMAX
459 L X+14,496 FMAX
460 L Z+2 FMAX
461 L Z-3,2 F800
462 L X+12,139 Y-9,488 RL F1200
463 CC X+10,96 Y-10,667
464 C X+10,96 Y-9 DR+
465 L X-10,96
466 CC X-10,96 Y-10,667
467 C X-12,139 Y-9,488 DR+
468 L X-14,496 Y-11,845 R0
469 L Z+50 FMAX
470 M5
471 L Z-1 FMAX M91
472 L Y-1 FMAX M91
473 M30
474 END PGM REP 15 MM
