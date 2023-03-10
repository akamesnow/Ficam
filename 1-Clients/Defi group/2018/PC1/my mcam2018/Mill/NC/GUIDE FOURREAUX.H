0 BEGIN PGM GUIDE FOURREAUX MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - GUIDE FOURREAUX
4 ; PROG-CN DU 24-02-20 A 09:20
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
11 ; T8 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
12 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
13 ; T23 P15323610  Z POCHE S T FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
14 ; T15 P45322501 FINITION LG 44 FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
15 ; FIN DE LISTE DES OUTILS
16 L R0 FMAX
17 L Z-1 FMAX M91
18 ; *GROUPE D'USINAGE-2*
19 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
20 TOOL CALL 1 Z S1856 DR+0
21 TOOL DEF 4
22 L X-23,624 Y+25,143 FMAX M3
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
26 L X-23,624 Y+25,143 FMAX M99
27 L X+23,624 Y-25,143 FMAX M99
28 L Z+50 FMAX
29 M9
30 M5
31 L Z-1 FMAX M91
32 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
33 TOOL CALL 4 Z S1400 DR+0
34 TOOL DEF 18
35 L X-23,624 Y+25,143 FMAX M3
36 L Z+50 FMAX M7
37 ;  DEBOURRAGE
38 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
39 L X-23,624 Y+25,143 FMAX M99
40 L X+23,624 Y-25,143 FMAX M99
41 L Z+50 FMAX
42 M9
43 M5
44 L Z-1 FMAX M91
45 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
46 ; CORRECTION AUCUNE
47 ; SUREP R 0. SUREP Z 0.
48 TOOL CALL 18 Z S1751 DR+0
49 TOOL DEF 1
50 L X-20,63 Y+24,954 FMAX M3
51 L Z+50 FMAX M25
52 L Z+2 FMAX
53 L Z+0,5 F500
54 CC X-23,624 Y+25,143
55 CP IPA-180 Z+0,171 DR-
56 CC X-23,624 Y+25,143
57 CP IPA-180 Z-0,158 DR-
58 CC X-23,624 Y+25,143
59 CP IPA-180 Z-0,487 DR-
60 CC X-23,624 Y+25,143
61 CP IPA-180 Z-0,816 DR-
62 CC X-23,624 Y+25,143
63 CP IPA-180 Z-1,146 DR-
64 CC X-23,624 Y+25,143
65 CP IPA-180 Z-1,475 DR-
66 CC X-23,624 Y+25,143
67 CP IPA-180 Z-1,804 DR-
68 CC X-23,624 Y+25,143
69 CP IPA-180 Z-2,133 DR-
70 CC X-23,624 Y+25,143
71 CP IPA-180 Z-2,462 DR-
72 CC X-23,624 Y+25,143
73 CP IPA-180 Z-2,791 DR-
74 CC X-23,624 Y+25,143
75 CP IPA-180 Z-3,12 DR-
76 CC X-23,624 Y+25,143
77 CP IPA-180 Z-3,449 DR-
78 CC X-23,624 Y+25,143
79 CP IPA-180 Z-3,778 DR-
80 CC X-23,624 Y+25,143
81 CP IPA-180 Z-4,108 DR-
82 CC X-23,624 Y+25,143
83 CP IPA-180 Z-4,437 DR-
84 CC X-23,624 Y+25,143
85 CP IPA-180 Z-4,766 DR-
86 CC X-23,624 Y+25,143
87 CP IPA-180 Z-5,095 DR-
88 CC X-23,624 Y+25,143
89 CP IPA-180 Z-5,424 DR-
90 CC X-23,624 Y+25,143
91 CP IPA-180 Z-5,753 DR-
92 CC X-23,624 Y+25,143
93 CP IPA-180 Z-6,082 DR-
94 CC X-23,624 Y+25,143
95 CP IPA-180 Z-6,412 DR-
96 CC X-23,624 Y+25,143
97 CP IPA-180 Z-6,741 DR-
98 CC X-23,624 Y+25,143
99 CP IPA-180 Z-7,07 DR-
100 CC X-23,624 Y+25,143
101 CP IPA-180 Z-7,399 DR-
102 CC X-23,624 Y+25,143
103 CP IPA-180 Z-7,728 DR-
104 CC X-23,624 Y+25,143
105 CP IPA-180 Z-8,057 DR-
106 CC X-23,624 Y+25,143
107 CP IPA-180 Z-8,386 DR-
108 CC X-23,624 Y+25,143
109 CP IPA-180 Z-8,715 DR-
110 CC X-23,624 Y+25,143
111 CP IPA-180 Z-9,044 DR-
112 CC X-23,624 Y+25,143
113 CP IPA-180 Z-9,374 DR-
114 CC X-23,624 Y+25,143
115 CP IPA-180 Z-9,703 DR-
116 CC X-23,624 Y+25,143
117 CP IPA-180 Z-10,032 DR-
118 CC X-23,624 Y+25,143
119 CP IPA-180 Z-10,361 DR-
120 CC X-23,624 Y+25,143
121 CP IPA-180 Z-10,69 DR-
122 CC X-23,624 Y+25,143
123 CP IPA-180 Z-11,019 DR-
124 CC X-23,624 Y+25,143
125 CP IPA-180 Z-11,348 DR-
126 CC X-23,624 Y+25,143
127 CP IPA-356,388 Z-12 DR-
128 L X-22,874 Y+25,143 F315
129 CC X-25,124 Y+25,143
130 C X-27,374 Y+25,143 DR+
131 CC X-22,124 Y+25,143
132 C X-26,728 Y+22,62 DR+
133 CC X-23,624 Y+25,143
134 C X-19,624 Y+25,143 DR+
135 CC X-23,624 Y+25,143
136 C X-26,728 Y+22,62 DR+
137 L Z+50 FMAX
138 L X+26,618 Y-25,331 FMAX
139 L Z+2 FMAX
140 L Z+0,5 F500
141 CC X+23,624 Y-25,143
142 CP IPA-180 Z+0,171 DR-
143 CC X+23,624 Y-25,143
144 CP IPA-180 Z-0,158 DR-
145 CC X+23,624 Y-25,143
146 CP IPA-180 Z-0,487 DR-
147 CC X+23,624 Y-25,143
148 CP IPA-180 Z-0,816 DR-
149 CC X+23,624 Y-25,143
150 CP IPA-180 Z-1,146 DR-
151 CC X+23,624 Y-25,143
152 CP IPA-180 Z-1,475 DR-
153 CC X+23,624 Y-25,143
154 CP IPA-180 Z-1,804 DR-
155 CC X+23,624 Y-25,143
156 CP IPA-180 Z-2,133 DR-
157 CC X+23,624 Y-25,143
158 CP IPA-180 Z-2,462 DR-
159 CC X+23,624 Y-25,143
160 CP IPA-180 Z-2,791 DR-
161 CC X+23,624 Y-25,143
162 CP IPA-180 Z-3,12 DR-
163 CC X+23,624 Y-25,143
164 CP IPA-180 Z-3,449 DR-
165 CC X+23,624 Y-25,143
166 CP IPA-180 Z-3,778 DR-
167 CC X+23,624 Y-25,143
168 CP IPA-180 Z-4,108 DR-
169 CC X+23,624 Y-25,143
170 CP IPA-180 Z-4,437 DR-
171 CC X+23,624 Y-25,143
172 CP IPA-180 Z-4,766 DR-
173 CC X+23,624 Y-25,143
174 CP IPA-180 Z-5,095 DR-
175 CC X+23,624 Y-25,143
176 CP IPA-180 Z-5,424 DR-
177 CC X+23,624 Y-25,143
178 CP IPA-180 Z-5,753 DR-
179 CC X+23,624 Y-25,143
180 CP IPA-180 Z-6,082 DR-
181 CC X+23,624 Y-25,143
182 CP IPA-180 Z-6,412 DR-
183 CC X+23,624 Y-25,143
184 CP IPA-180 Z-6,741 DR-
185 CC X+23,624 Y-25,143
186 CP IPA-180 Z-7,07 DR-
187 CC X+23,624 Y-25,143
188 CP IPA-180 Z-7,399 DR-
189 CC X+23,624 Y-25,143
190 CP IPA-180 Z-7,728 DR-
191 CC X+23,624 Y-25,143
192 CP IPA-180 Z-8,057 DR-
193 CC X+23,624 Y-25,143
194 CP IPA-180 Z-8,386 DR-
195 CC X+23,624 Y-25,143
196 CP IPA-180 Z-8,715 DR-
197 CC X+23,624 Y-25,143
198 CP IPA-180 Z-9,044 DR-
199 CC X+23,624 Y-25,143
200 CP IPA-180 Z-9,374 DR-
201 CC X+23,624 Y-25,143
202 CP IPA-180 Z-9,703 DR-
203 CC X+23,624 Y-25,143
204 CP IPA-180 Z-10,032 DR-
205 CC X+23,624 Y-25,143
206 CP IPA-180 Z-10,361 DR-
207 CC X+23,624 Y-25,143
208 CP IPA-180 Z-10,69 DR-
209 CC X+23,624 Y-25,143
210 CP IPA-180 Z-11,019 DR-
211 CC X+23,624 Y-25,143
212 CP IPA-180 Z-11,348 DR-
213 CC X+23,624 Y-25,143
214 CP IPA-356,407 Z-12 DR-
215 L X+24,374 Y-25,143 F315
216 CC X+22,124 Y-25,143
217 C X+19,874 Y-25,143 DR+
218 CC X+25,124 Y-25,143
219 C X+20,52 Y-27,665 DR+
220 CC X+23,624 Y-25,143
221 C X+27,624 Y-25,143 DR+
222 CC X+23,624 Y-25,143
223 C X+20,52 Y-27,665 DR+
224 L Z+50 FMAX
225 TOOL CALL 18 Z S1751 DR-5
226 L X-23,624 Y+25,143 Z+50 FMAX
227 L Z+2 FMAX
228 L Z-12 F500
229 L X-25,624 Y+26,143 RL F315
230 L X-26,624
231 CC X-26,624 Y+25,143
232 C X-27,624 Y+25,143 DR+
233 CC X-23,624 Y+25,143
234 C X-19,624 Y+25,143 DR+
235 CC X-23,624 Y+25,143
236 C X-27,624 Y+25,143 DR+
237 CC X-23,624 Y+25,143
238 C X-27,5 Y+24,153 DR+
239 CC X-26,531 Y+24,4
240 C X-26,283 Y+23,432 DR+
241 L X-25,314 Y+23,679
242 L X-23,624 Y+25,143 R0
243 L Z+50 FMAX
244 L X+23,624 Y-25,143 FMAX
245 L Z+2 FMAX
246 L Z-12 F500
247 L X+21,624 Y-24,143 RL F315
248 L X+20,624
249 CC X+20,624 Y-25,143
250 C X+19,624 Y-25,143 DR+
251 CC X+23,624 Y-25,143
252 C X+27,624 Y-25,143 DR+
253 CC X+23,624 Y-25,143
254 C X+19,624 Y-25,143 DR+
255 CC X+23,624 Y-25,143
256 C X+19,748 Y-26,132 DR+
257 CC X+20,717 Y-25,885
258 C X+20,965 Y-26,854 DR+
259 L X+21,934 Y-26,606
260 L X+23,624 Y-25,143 R0
261 L Z+50 FMAX
262 M78
263 M5
264 L Z-1 FMAX M91
265 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
266 ; CORRECTION USURE GAUCHE
267 ; SUREP R 0. SUREP Z 0.
268 TOOL CALL 1 Z S6000 DR-2,5
269 TOOL DEF 8
270 L X-23,624 Y+25,143 FMAX M3
271 L Z+50 FMAX
272 L Z+2 FMAX
273 L Z-2,5 F800
274 L X-29,124 Y+25,643 RL F1200
275 L X-29,624
276 CC X-29,624 Y+25,143
277 C X-30,124 Y+25,143 DR+
278 CC X-23,624 Y+25,143
279 C X-17,124 Y+25,143 DR+
280 CC X-23,624 Y+25,143
281 C X-30,124 Y+25,143 DR+
282 CC X-23,624 Y+25,143
283 C X-30,047 Y+24,147 DR+
284 CC X-29,553 Y+24,223
285 C X-29,477 Y+23,729 DR+
286 L X-28,982 Y+23,806
287 L X-23,624 Y+25,143 R0
288 L Z+50 FMAX
289 L X+23,624 Y-25,143 FMAX
290 L Z+2 FMAX
291 L Z-2,5 F800
292 L X+18,124 Y-24,643 RL F1200
293 L X+17,624
294 CC X+17,624 Y-25,143
295 C X+17,124 Y-25,143 DR+
296 CC X+23,624 Y-25,143
297 C X+30,124 Y-25,143 DR+
298 CC X+23,624 Y-25,143
299 C X+17,124 Y-25,143 DR+
300 CC X+23,624 Y-25,143
301 C X+17,201 Y-26,139 DR+
302 CC X+17,695 Y-26,062
303 C X+17,772 Y-26,556 DR+
304 L X+18,266 Y-26,48
305 L X+23,624 Y-25,143 R0
306 L Z+50 FMAX
307 M5
308 L Z-1 FMAX M91
309 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
310 TOOL CALL 1 Z S1856 DR+0
311 TOOL DEF 8
312 L X-23,624 Y-25,143 FMAX M3
313 L Z+50 FMAX M8
314 ;  POINTAGE-PERCAGE
315 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
316 L X-23,624 Y-25,143 FMAX M99
317 L X+23,624 Y+25,143 FMAX M99
318 L Z+50 FMAX
319 M9
320 M5
321 L Z-1 FMAX M91
322 ; T8 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
323 TOOL CALL 8 Z S1600 DR+0
324 TOOL DEF 10
325 L X-23,624 Y-25,143 FMAX M3
326 L Z+50 FMAX M7
327 ;  DEBOURRAGE
328 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-50 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+4,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
329 L X-23,624 Y-25,143 FMAX M99
330 L X+23,624 Y+25,143 FMAX M99
331 L Z+50 FMAX
332 M9
333 M5
334 L Z-1 FMAX M91
335 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
336 TOOL CALL 10 Z S500 DR+0
337 TOOL DEF 23
338 L X-23,624 Y-25,143 FMAX M3
339 L Z+50 FMAX M8
340 ;  POINTAGE-PERCAGE
341 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-50 ; PROFONDEUR~
    Q206=75 ; AVANCE PLONGEE PROF.~
    Q202=+50 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
342 L X-23,624 Y-25,143 FMAX M99
343 L X+23,624 Y+25,143 FMAX M99
344 L Z+50 FMAX
345 M9
346 M5
347 L Z-1 FMAX M91
348 ; T23 P15323610  Z POCHE S T FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
349 ; CORRECTION AUCUNE
350 ; SUREP R 0.15 SUREP Z 0.
351 TOOL CALL 23 Z S1094 DR+0
352 TOOL DEF 15
353 L X+0,073 Y+8 FMAX M3
354 L Z+50 FMAX M25
355 L Z+2 FMAX
356 L Z+0,5 F219
357 CC X+0 Y+0
358 CP IPA-180 Z-0,377 DR-
359 CC X+0 Y+0
360 CP IPA-180 Z-1,255 DR-
361 CC X+0 Y+0
362 CP IPA-180 Z-2,133 DR-
363 CC X+0 Y+0
364 CP IPA-180 Z-3,011 DR-
365 CC X+0 Y+0
366 CP IPA-180 Z-3,889 DR-
367 CC X+0 Y+0
368 CP IPA-180 Z-4,766 DR-
369 CC X+0 Y+0
370 CP IPA-180 Z-5,643 DR-
371 CC X+0 Y+0
372 CP IPA-180 Z-6,521 DR-
373 CC X+0 Y+0
374 CP IPA-180 Z-7,399 DR-
375 CC X+0 Y+0
376 CP IPA-180 Z-8,277 DR-
377 CC X+0 Y+0
378 CP IPA-180 Z-9,154 DR-
379 CC X+0 Y+0
380 CP IPA-180 Z-10,032 DR-
381 CC X+0 Y+0
382 CP IPA-180 Z-10,91 DR-
383 CC X+0 Y+0
384 CP IPA-180 Z-11,787 DR-
385 CC X+0 Y+0
386 CP IPA-180 Z-12,665 DR-
387 CC X+0 Y+0
388 CP IPA-180 Z-13,542 DR-
389 CC X+0 Y+0
390 CP IPA-180 Z-14,42 DR-
391 CC X+0 Y+0
392 CP IPA-180 Z-15,298 DR-
393 CC X+0 Y+0
394 CP IPA-180 Z-16,176 DR-
395 CC X+0 Y+0
396 CP IPA-180 Z-17,053 DR-
397 CC X+0 Y+0
398 CP IPA-180 Z-17,931 DR-
399 CC X+0 Y+0
400 CP IPA-180 Z-18,808 DR-
401 CC X+0 Y+0
402 CP IPA-180 Z-19,686 DR-
403 CC X+0 Y+0
404 CP IPA-180 Z-20,564 DR-
405 CC X+0 Y+0
406 CP IPA-89,477 Z-21 DR-
407 L X+0,46 Y+0
408 CC X-0,92 Y+0
409 C X-2,3 Y+0 DR+
410 CC X+0,92 Y+0
411 C X+4,14 Y+0 DR+
412 CC X-0,92 Y+0
413 C X-5,98 Y+0 DR+
414 CC X+0,92 Y+0
415 C X+7,82 Y+0 DR+
416 CC X-0,92 Y+0
417 C X-9,66 Y+0 DR+
418 CC X+0,92 Y+0
419 C X+2,723 Y-10,425 DR+
420 CC X+0 Y+0
421 C X+10,775 Y+0 DR+
422 CC X+0 Y+0
423 C X+2,723 Y-10,425 DR+
424 L Z+10 FMAX
425 L X+0,073 Y+8 FMAX
426 L Z-19 FMAX
427 L Z-20,5
428 CC X+0 Y+0
429 CP IPA-180 Z-21,377 DR-
430 CC X+0 Y+0
431 CP IPA-180 Z-22,255 DR-
432 CC X+0 Y+0
433 CP IPA-180 Z-23,133 DR-
434 CC X+0 Y+0
435 CP IPA-180 Z-24,011 DR-
436 CC X+0 Y+0
437 CP IPA-180 Z-24,889 DR-
438 CC X+0 Y+0
439 CP IPA-180 Z-25,766 DR-
440 CC X+0 Y+0
441 CP IPA-180 Z-26,644 DR-
442 CC X+0 Y+0
443 CP IPA-180 Z-27,521 DR-
444 CC X+0 Y+0
445 CP IPA-180 Z-28,399 DR-
446 CC X+0 Y+0
447 CP IPA-180 Z-29,277 DR-
448 CC X+0 Y+0
449 CP IPA-180 Z-30,154 DR-
450 CC X+0 Y+0
451 CP IPA-180 Z-31,032 DR-
452 CC X+0 Y+0
453 CP IPA-180 Z-31,91 DR-
454 CC X+0 Y+0
455 CP IPA-180 Z-32,787 DR-
456 CC X+0 Y+0
457 CP IPA-180 Z-33,665 DR-
458 CC X+0 Y+0
459 CP IPA-180 Z-34,542 DR-
460 CC X+0 Y+0
461 CP IPA-180 Z-35,42 DR-
462 CC X+0 Y+0
463 CP IPA-180 Z-36,298 DR-
464 CC X+0 Y+0
465 CP IPA-180 Z-37,176 DR-
466 CC X+0 Y+0
467 CP IPA-180 Z-38,053 DR-
468 CC X+0 Y+0
469 CP IPA-180 Z-38,93 DR-
470 CC X+0 Y+0
471 CP IPA-180 Z-39,808 DR-
472 CC X+0 Y+0
473 CP IPA-180 Z-40,686 DR-
474 CC X+0 Y+0
475 CP IPA-180 Z-41,564 DR-
476 CC X+0 Y+0
477 CP IPA-89,477 Z-42 DR-
478 L X+0,46 Y+0
479 CC X-0,92 Y+0
480 C X-2,3 Y+0 DR+
481 CC X+0,92 Y+0
482 C X+4,14 Y+0 DR+
483 CC X-0,92 Y+0
484 C X-5,98 Y+0 DR+
485 CC X+0,92 Y+0
486 C X+7,82 Y+0 DR+
487 CC X-0,92 Y+0
488 C X-9,66 Y+0 DR+
489 CC X+0,92 Y+0
490 C X+2,723 Y-10,425 DR+
491 CC X+0 Y+0
492 C X+10,775 Y+0 DR+
493 CC X+0 Y+0
494 C X+2,723 Y-10,425 DR+
495 L X+0 Y+0
496 TOOL CALL 23 Z S1094 DR-8
497 L X-7,575 Y+1,6 Z-42 RL
498 L X-9,175
499 CC X-9,175 Y+0
500 C X-10,775 Y+0 DR+
501 CC X+0 Y+0
502 C X+10,775 Y+0 DR+
503 CC X+0 Y+0
504 C X-10,775 Y+0 DR+
505 CC X+0 Y+0
506 C X-10,729 Y-0,999 DR+
507 CC X+0 Y+0
508 C X+10,775 Y+0 DR+
509 CC X+0 Y+0
510 C X-10,775 Y+0 DR+
511 CC X+0 Y+0
512 C X-10,729 Y-0,999 DR+
513 CC X-9,136 Y-0,85
514 C X-8,987 Y-2,443 DR+
515 L X-7,394 Y-2,295
516 L X+0 Y+0 R0
517 L Z+50 FMAX
518 M78
519 M5
520 L Z-1 FMAX M91
521 ; T15 P45322501 FINITION LG 44 FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
522 ; CORRECTION USURE GAUCHE
523 ; SUREP R 0.1 SUREP Z 0.
524 TOOL CALL 15 Z S1600 DR-6
525 TOOL DEF 1
526 L X+0 Y+0 FMAX M3
527 L Z+50 FMAX M25
528 L Z+2 FMAX
529 L Z-42 F500
530 L X-10,425 Y+1,2 RL
531 L X-11,625
532 CC X-11,625 Y+0
533 C X-12,825 Y+0 DR+
534 CC X+0 Y+0
535 C X+12,825 Y+0 DR+
536 CC X+0 Y+0
537 C X-12,825 Y+0 DR+
538 CC X+0 Y+0
539 C X-12,786 Y-0,999 DR+
540 CC X+0 Y+0
541 C X+12,825 Y+0 DR+
542 CC X+0 Y+0
543 C X-12,825 Y+0 DR+
544 CC X+0 Y+0
545 C X-12,786 Y-0,999 DR+
546 CC X-11,59 Y-0,906
547 C X-11,496 Y-2,102 DR+
548 L X-10,3 Y-2,008
549 L X+0 Y+0 R0
550 L Z+50 FMAX
551 ; CORRECTION USURE GAUCHE
552 ; SUREP R 0.05 SUREP Z 0.
553 L Z+2 FMAX
554 L Z-42
555 L X-10,475 Y+1,2 RL
556 L X-11,675
557 CC X-11,675 Y+0
558 C X-12,875 Y+0 DR+
559 CC X+0 Y+0
560 C X+12,875 Y+0 DR+
561 CC X+0 Y+0
562 C X-12,875 Y+0 DR+
563 CC X+0 Y+0
564 C X-12,836 Y-0,999 DR+
565 CC X+0 Y+0
566 C X+12,875 Y+0 DR+
567 CC X+0 Y+0
568 C X-12,875 Y+0 DR+
569 CC X+0 Y+0
570 C X-12,836 Y-0,999 DR+
571 CC X+0 Y+0
572 C X+12,875 Y+0 DR+
573 CC X+0 Y+0
574 C X-12,875 Y+0 DR+
575 CC X+0 Y+0
576 C X-12,836 Y-0,999 DR+
577 CC X-11,64 Y-0,906
578 C X-11,547 Y-2,102 DR+
579 L X-10,35 Y-2,009
580 L X+0 Y+0 R0
581 L Z+50 FMAX
582 M78
583 M5
584 L Z-1 FMAX M91
585 M00
586 ; T15 P45322501 FINITION LG 44 FRAISE 2 TAILLES DIAM=12. 6 DENTS CARBURE PLAQUETTES
587 ; CORRECTION USURE GAUCHE
588 ; SUREP R 0. SUREP Z 0.
589 TOOL CALL 15 Z S1600 DR-6
590 TOOL DEF 1
591 L X+0 Y+0 FMAX M3
592 L Z+50 FMAX M25
593 L Z+2 FMAX
594 L Z-42 F500
595 L X-10,525 Y+1,2 RL
596 L X-11,725
597 CC X-11,725 Y+0
598 C X-12,925 Y+0 DR+
599 CC X+0 Y+0
600 C X+12,925 Y+0 DR+
601 CC X+0 Y+0
602 C X-12,925 Y+0 DR+
603 CC X+0 Y+0
604 C X-12,886 Y-0,999 DR+
605 CC X+0 Y+0
606 C X+12,925 Y+0 DR+
607 CC X+0 Y+0
608 C X-12,925 Y+0 DR+
609 CC X+0 Y+0
610 C X-12,886 Y-0,999 DR+
611 CC X+0 Y+0
612 C X+12,925 Y+0 DR+
613 CC X+0 Y+0
614 C X-12,925 Y+0 DR+
615 CC X+0 Y+0
616 C X-12,886 Y-0,999 DR+
617 CC X-11,69 Y-0,906
618 C X-11,597 Y-2,103 DR+
619 L X-10,401 Y-2,01
620 L X+0 Y+0 R0
621 L Z+50 FMAX
622 M78
623 M5
624 L Z-1 FMAX M91
625 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
626 ; CORRECTION USURE GAUCHE
627 ; SUREP R 0. SUREP Z 0.
628 TOOL CALL 1 Z S6000 DR-2,5
629 L X+0 Y+0 FMAX M3
630 L Z+50 FMAX
631 L Z+2 FMAX
632 L Z-2,2 F800
633 L X-15,425 Y+0,5 RL F1200
634 L X-15,925
635 CC X-15,925 Y+0
636 C X-16,425 Y+0 DR+
637 CC X+0 Y+0
638 C X+16,425 Y+0 DR+
639 CC X+0 Y+0
640 C X-16,425 Y+0 DR+
641 CC X+0 Y+0
642 C X-16,395 Y-0,999 DR+
643 CC X+0 Y+0
644 C X+16,425 Y+0 DR+
645 CC X+0 Y+0
646 C X-16,425 Y+0 DR+
647 CC X+0 Y+0
648 C X-16,395 Y-0,999 DR+
649 CC X+0 Y+0
650 C X+16,425 Y+0 DR+
651 CC X+0 Y+0
652 C X-16,425 Y+0 DR+
653 CC X+0 Y+0
654 C X-16,395 Y-0,999 DR+
655 CC X-15,895 Y-0,969
656 C X-15,865 Y-1,468 DR+
657 L X+0 Y+0 R0
658 L Z+50 FMAX
659 M5
660 L Z-1 FMAX M91
661 L Y-1 FMAX M91
662 M30
663 END PGM GUIDE FOURREAUX MM
