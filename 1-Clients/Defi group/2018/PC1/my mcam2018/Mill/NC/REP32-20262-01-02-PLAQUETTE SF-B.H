0 BEGIN PGM REP32-20262-01-02-PLAQUETTE SF-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP32-20262-01-02-PLAQUETTE SF-B
4 ; PROG-CN DU 19-02-20 A 16:02
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
11 ; T8 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
12 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
13 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
14 ; T19 DIA 6 AIR FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
15 ; FIN DE LISTE DES OUTILS
16 L R0 FMAX
17 L Z-1 FMAX M91
18 ; *GROUPE D'USINAGE-1*
19 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
20 TOOL CALL 1 Z S1856 DR+0
21 TOOL DEF 25
22 L X-57,5 Y-15 FMAX M3
23 L Z+50 FMAX M8
24 ;  POINTAGE-PERCAGE
25 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
26 L X-57,5 Y-15 FMAX M99
27 L X+52 Y+5 FMAX M99
28 L X+167,5 FMAX M99
29 L X-152,5 FMAX M99
30 L X+167,5 Y-90 FMAX M99
31 L X-2,5 Y-100 FMAX M99
32 L X-137,5 FMAX M99
33 L Y+110 FMAX M99
34 L X-2,5 FMAX M99
35 L X+167,5 FMAX M99
36 L Z+50 FMAX
37 M9
38 M5
39 L Z-1 FMAX M91
40 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
41 TOOL CALL 25 Z S3000 DR+0
42 TOOL DEF 28
43 L X-57,5 Y-15 FMAX M3
44 L Z+50 FMAX M7
45 ;  DEBOURRAGE
46 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-25 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
47 L X-57,5 Y-15 FMAX M99
48 L X+52 Y+5 FMAX M99
49 L X+167,5 FMAX M99
50 L X-152,5 FMAX M99
51 L X+167,5 Y-90 FMAX M99
52 L X-2,5 Y-100 FMAX M99
53 L X-137,5 FMAX M99
54 L Y+110 FMAX M99
55 L X-2,5 FMAX M99
56 L X+167,5 FMAX M99
57 L Z+50 FMAX
58 M9
59 M5
60 L Z-1 FMAX M91
61 M00
62 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
63 TOOL CALL 28 Z S100 DR+0
64 TOOL DEF 1
65 L X-57,5 Y-15 FMAX M3
66 L Z+50 FMAX M8
67 ;  TARAUDAGE
68 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
69 L X-57,5 Y-15 FMAX M99
70 L X+52 Y+5 FMAX M99
71 L X+167,5 FMAX M99
72 L X-152,5 FMAX M99
73 L X+167,5 Y-90 FMAX M99
74 L X-2,5 Y-100 FMAX M99
75 L X-137,5 FMAX M99
76 L Y+110 FMAX M99
77 L X-2,5 FMAX M99
78 L X+167,5 FMAX M99
79 L Z+50 FMAX
80 M9
81 M5
82 L Z-1 FMAX M91
83 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
84 TOOL CALL 1 Z S1856 DR+0
85 TOOL DEF 8
86 L X+22 Y-90 FMAX M3
87 L Z+50 FMAX M8
88 ;  POINTAGE-PERCAGE
89 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
90 L X+22 Y-90 FMAX M99
91 L X-158 FMAX M99
92 L X-68 Y+115 FMAX M99
93 L X-158 FMAX M99
94 L X+112 FMAX M99
95 L X+22 FMAX M99
96 L X-68 Y-90 FMAX M99
97 L X+147,5 Y+5 FMAX M99
98 L X-132,5 FMAX M99
99 L Z+50 FMAX
100 M9
101 M5
102 L Z-1 FMAX M91
103 ; T8 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
104 TOOL CALL 8 Z S1600 DR+0
105 TOOL DEF 10
106 L X+22 Y-90 FMAX M3
107 L Z+50 FMAX M7
108 ;  DEBOURRAGE
109 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+4,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
110 L X+22 Y-90 FMAX M99
111 L X-158 FMAX M99
112 L X-68 Y+115 FMAX M99
113 L X-158 FMAX M99
114 L X+112 FMAX M99
115 L X+22 FMAX M99
116 L X-68 Y-90 FMAX M99
117 L X+147,5 Y+5 FMAX M99
118 L X-132,5 FMAX M99
119 L Z+50 FMAX
120 M9
121 M5
122 L Z-1 FMAX M91
123 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
124 TOOL CALL 10 Z S500 DR+0
125 TOOL DEF 1
126 L X+22 Y-90 FMAX M3
127 L Z+50 FMAX M8
128 ;  POINTAGE-PERCAGE
129 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=75 ; AVANCE PLONGEE PROF.~
    Q202=+30 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
130 L X+22 Y-90 FMAX M99
131 L X-158 FMAX M99
132 L X-68 Y+115 FMAX M99
133 L X-158 FMAX M99
134 L X+112 FMAX M99
135 L X+22 FMAX M99
136 L X-68 Y-90 FMAX M99
137 L X+147,5 Y+5 FMAX M99
138 L X-132,5 FMAX M99
139 L Z+50 FMAX
140 M9
141 M5
142 L Z-1 FMAX M91
143 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
144 TOOL CALL 1 Z S1856 DR+0
145 TOOL DEF 20
146 L X-68 Y-76 FMAX M3
147 L Z+50 FMAX M8
148 ;  POINTAGE-PERCAGE
149 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
150 L X-68 Y-76 FMAX M99
151 L X+22 Y-104 FMAX M99
152 L Y-76 FMAX M99
153 L X-68 Y-104 FMAX M99
154 L X-158 Y-76 FMAX M99
155 L Y+101 FMAX M99
156 L X-68 FMAX M99
157 L X+22 FMAX M99
158 L X-158 Y-104 FMAX M99
159 L X+112 Y+101 FMAX M99
160 L X+32 Y-7 FMAX M99
161 L X-102 Y+20 FMAX M99
162 L X+142 Y-104,6 FMAX M99
163 L Z+50 FMAX
164 M9
165 M5
166 L Z-1 FMAX M91
167 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
168 TOOL CALL 20 Z S3800 DR+0
169 TOOL DEF 19
170 L X-68 Y-76 FMAX M3
171 L Z+50 FMAX M7
172 ;  DEBOURRAGE
173 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-25 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
174 L X-68 Y-76 FMAX M99
175 L X+22 Y-104 FMAX M99
176 L Y-76 FMAX M99
177 L X-68 Y-104 FMAX M99
178 L X-158 Y-76 FMAX M99
179 L Y+101 FMAX M99
180 L X-68 FMAX M99
181 L X+22 FMAX M99
182 L X-158 Y-104 FMAX M99
183 L X+112 Y+101 FMAX M99
184 L X+32 Y-7 FMAX M99
185 L X-102 Y+20 FMAX M99
186 L X+142 Y-104,6 FMAX M99
187 L Z+50 FMAX
188 M9
189 M5
190 L Z-1 FMAX M91
191 ; T19 DIA 6 AIR FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
192 ; CORRECTION AUCUNE
193 ; SUREP R 0. SUREP Z 0.
194 TOOL CALL 19 Z S7427 DR+0
195 TOOL DEF 1
196 L X-158 Y+115 FMAX M3
197 L Z+50 FMAX M25
198 L Z+2 FMAX
199 L Z-5,07 F297
200 L X-157,981 F3565
201 CC X-158,038 Y+115
202 C X-158,094 Y+115 DR+
203 CC X-157,963 Y+115
204 C X-157,831 Y+115 DR+
205 CC X-158,038 Y+115
206 C X-158,244 Y+115 DR+
207 CC X-157,963 Y+115
208 C X-157,681 Y+115 DR+
209 CC X-158,038 Y+115
210 C X-158,394 Y+115 DR+
211 CC X-157,963 Y+115
212 C X-157,531 Y+115 DR+
213 CC X-158,038 Y+115
214 C X-158,544 Y+115 DR+
215 CC X-157,963 Y+115
216 C X-157,381 Y+115 DR+
217 CC X-158,038 Y+115
218 C X-158,694 Y+115 DR+
219 CC X-157,963 Y+115
220 C X-157,231 Y+115 DR+
221 CC X-158,038 Y+115
222 C X-158,844 Y+115 DR+
223 CC X-157,963 Y+115
224 C X-157,081 Y+115 DR+
225 CC X-158,038 Y+115
226 C X-158,994 Y+115 DR+
227 CC X-157,963 Y+115
228 C X-156,931 Y+115 DR+
229 CC X-158,038 Y+115
230 C X-159,144 Y+115 DR+
231 CC X-157,963 Y+115
232 C X-156,781 Y+115 DR+
233 CC X-158,038 Y+115
234 C X-159,294 Y+115 DR+
235 CC X-157,963 Y+115
236 C X-156,631 Y+115 DR+
237 CC X-158,038 Y+115
238 C X-159,444 Y+115 DR+
239 CC X-157,963 Y+115
240 C X-156,481 Y+115 DR+
241 CC X-158,038 Y+115
242 C X-159,594 Y+115 DR+
243 CC X-157,963 Y+115
244 C X-156,331 Y+115 DR+
245 CC X-158,038 Y+115
246 C X-159,744 Y+115 DR+
247 CC X-157,963 Y+115
248 C X-156,181 Y+115 DR+
249 CC X-158,038 Y+115
250 C X-159,894 Y+115 DR+
251 CC X-157,963 Y+115
252 C X-156,031 Y+115 DR+
253 CC X-158,038 Y+115
254 C X-160,044 Y+115 DR+
255 CC X-157,963 Y+115
256 C X-155,881 Y+115 DR+
257 CC X-158,038 Y+115
258 C X-160,194 Y+115 DR+
259 CC X-157,963 Y+115
260 C X-155,731 Y+115 DR+
261 CC X-158,038 Y+115
262 C X-160,344 Y+115 DR+
263 CC X-157,963 Y+115
264 C X-155,581 Y+115 DR+
265 CC X-158,038 Y+115
266 C X-160,494 Y+115 DR+
267 CC X-157,963 Y+115
268 C X-155,431 Y+115 DR+
269 CC X-158,038 Y+115
270 C X-160,644 Y+115 DR+
271 CC X-157,963 Y+115
272 C X-155,281 Y+115 DR+
273 CC X-158,038 Y+115
274 C X-160,794 Y+115 DR+
275 CC X-157,963 Y+115
276 C X-155,131 Y+115 DR+
277 CC X-158,038 Y+115
278 C X-160,944 Y+115 DR+
279 CC X-157,963 Y+115
280 C X-154,981 Y+115 DR+
281 CC X-158,038 Y+115
282 C X-161,094 Y+115 DR+
283 CC X-157,963 Y+115
284 C X-154,831 Y+115 DR+
285 CC X-158,038 Y+115
286 C X-161,244 Y+115 DR+
287 CC X-157,963 Y+115
288 C X-154,681 Y+115 DR+
289 CC X-158,038 Y+115
290 C X-161,394 Y+115 DR+
291 CC X-157,963 Y+115
292 C X-154,531 Y+115 DR+
293 CC X-158,038 Y+115
294 C X-161,544 Y+115 DR+
295 CC X-157,963 Y+115
296 C X-154,381 Y+115 DR+
297 CC X-158,038 Y+115
298 C X-161,694 Y+115 DR+
299 CC X-157,963 Y+115
300 C X-154,231 Y+115 DR+
301 CC X-158,038 Y+115
302 C X-161,844 Y+115 DR+
303 CC X-157,963 Y+115
304 C X-154,081 Y+115 DR+
305 CC X-158,038 Y+115
306 C X-161,994 Y+115 DR+
307 CC X-157,963 Y+115
308 C X-161,328 Y+112,78 DR+
309 CC X-158 Y+115
310 C X-154 Y+115 DR+
311 CC X-158 Y+115
312 C X-161,328 Y+112,78 DR+
313 L Z+50 FMAX
314 L X-68 Y+115 FMAX
315 L Z+2 FMAX
316 L Z-5,07 F297
317 L X-67,981 F3565
318 CC X-68,038 Y+115
319 C X-68,094 Y+115 DR+
320 CC X-67,963 Y+115
321 C X-67,831 Y+115 DR+
322 CC X-68,038 Y+115
323 C X-68,244 Y+115 DR+
324 CC X-67,963 Y+115
325 C X-67,681 Y+115 DR+
326 CC X-68,038 Y+115
327 C X-68,394 Y+115 DR+
328 CC X-67,963 Y+115
329 C X-67,531 Y+115 DR+
330 CC X-68,038 Y+115
331 C X-68,544 Y+115 DR+
332 CC X-67,963 Y+115
333 C X-67,381 Y+115 DR+
334 CC X-68,038 Y+115
335 C X-68,694 Y+115 DR+
336 CC X-67,963 Y+115
337 C X-67,231 Y+115 DR+
338 CC X-68,038 Y+115
339 C X-68,844 Y+115 DR+
340 CC X-67,963 Y+115
341 C X-67,081 Y+115 DR+
342 CC X-68,038 Y+115
343 C X-68,994 Y+115 DR+
344 CC X-67,963 Y+115
345 C X-66,931 Y+115 DR+
346 CC X-68,038 Y+115
347 C X-69,144 Y+115 DR+
348 CC X-67,963 Y+115
349 C X-66,781 Y+115 DR+
350 CC X-68,038 Y+115
351 C X-69,294 Y+115 DR+
352 CC X-67,963 Y+115
353 C X-66,631 Y+115 DR+
354 CC X-68,038 Y+115
355 C X-69,444 Y+115 DR+
356 CC X-67,963 Y+115
357 C X-66,481 Y+115 DR+
358 CC X-68,038 Y+115
359 C X-69,594 Y+115 DR+
360 CC X-67,963 Y+115
361 C X-66,331 Y+115 DR+
362 CC X-68,038 Y+115
363 C X-69,744 Y+115 DR+
364 CC X-67,963 Y+115
365 C X-66,181 Y+115 DR+
366 CC X-68,038 Y+115
367 C X-69,894 Y+115 DR+
368 CC X-67,963 Y+115
369 C X-66,031 Y+115 DR+
370 CC X-68,038 Y+115
371 C X-70,044 Y+115 DR+
372 CC X-67,963 Y+115
373 C X-65,881 Y+115 DR+
374 CC X-68,038 Y+115
375 C X-70,194 Y+115 DR+
376 CC X-67,963 Y+115
377 C X-65,731 Y+115 DR+
378 CC X-68,038 Y+115
379 C X-70,344 Y+115 DR+
380 CC X-67,963 Y+115
381 C X-65,581 Y+115 DR+
382 CC X-68,038 Y+115
383 C X-70,494 Y+115 DR+
384 CC X-67,963 Y+115
385 C X-65,431 Y+115 DR+
386 CC X-68,038 Y+115
387 C X-70,644 Y+115 DR+
388 CC X-67,963 Y+115
389 C X-65,281 Y+115 DR+
390 CC X-68,038 Y+115
391 C X-70,794 Y+115 DR+
392 CC X-67,963 Y+115
393 C X-65,131 Y+115 DR+
394 CC X-68,038 Y+115
395 C X-70,944 Y+115 DR+
396 CC X-67,963 Y+115
397 C X-64,981 Y+115 DR+
398 CC X-68,038 Y+115
399 C X-71,094 Y+115 DR+
400 CC X-67,963 Y+115
401 C X-64,831 Y+115 DR+
402 CC X-68,038 Y+115
403 C X-71,244 Y+115 DR+
404 CC X-67,963 Y+115
405 C X-64,681 Y+115 DR+
406 CC X-68,038 Y+115
407 C X-71,394 Y+115 DR+
408 CC X-67,963 Y+115
409 C X-64,531 Y+115 DR+
410 CC X-68,038 Y+115
411 C X-71,544 Y+115 DR+
412 CC X-67,963 Y+115
413 C X-64,381 Y+115 DR+
414 CC X-68,038 Y+115
415 C X-71,694 Y+115 DR+
416 CC X-67,963 Y+115
417 C X-64,231 Y+115 DR+
418 CC X-68,038 Y+115
419 C X-71,844 Y+115 DR+
420 CC X-67,963 Y+115
421 C X-64,081 Y+115 DR+
422 CC X-68,038 Y+115
423 C X-71,994 Y+115 DR+
424 CC X-67,963 Y+115
425 C X-71,328 Y+112,78 DR+
426 CC X-68 Y+115
427 C X-64 Y+115 DR+
428 CC X-68 Y+115
429 C X-71,328 Y+112,78 DR+
430 L Z+50 FMAX
431 L X+22 Y+115 FMAX
432 L Z+2 FMAX
433 L Z-5,07 F297
434 L X+22,019 F3565
435 CC X+21,962 Y+115
436 C X+21,906 Y+115 DR+
437 CC X+22,037 Y+115
438 C X+22,169 Y+115 DR+
439 CC X+21,962 Y+115
440 C X+21,756 Y+115 DR+
441 CC X+22,037 Y+115
442 C X+22,319 Y+115 DR+
443 CC X+21,962 Y+115
444 C X+21,606 Y+115 DR+
445 CC X+22,037 Y+115
446 C X+22,469 Y+115 DR+
447 CC X+21,962 Y+115
448 C X+21,456 Y+115 DR+
449 CC X+22,037 Y+115
450 C X+22,619 Y+115 DR+
451 CC X+21,962 Y+115
452 C X+21,306 Y+115 DR+
453 CC X+22,037 Y+115
454 C X+22,769 Y+115 DR+
455 CC X+21,962 Y+115
456 C X+21,156 Y+115 DR+
457 CC X+22,037 Y+115
458 C X+22,919 Y+115 DR+
459 CC X+21,962 Y+115
460 C X+21,006 Y+115 DR+
461 CC X+22,037 Y+115
462 C X+23,069 Y+115 DR+
463 CC X+21,962 Y+115
464 C X+20,856 Y+115 DR+
465 CC X+22,037 Y+115
466 C X+23,219 Y+115 DR+
467 CC X+21,962 Y+115
468 C X+20,706 Y+115 DR+
469 CC X+22,037 Y+115
470 C X+23,369 Y+115 DR+
471 CC X+21,962 Y+115
472 C X+20,556 Y+115 DR+
473 CC X+22,037 Y+115
474 C X+23,519 Y+115 DR+
475 CC X+21,962 Y+115
476 C X+20,406 Y+115 DR+
477 CC X+22,037 Y+115
478 C X+23,669 Y+115 DR+
479 CC X+21,962 Y+115
480 C X+20,256 Y+115 DR+
481 CC X+22,037 Y+115
482 C X+23,819 Y+115 DR+
483 CC X+21,962 Y+115
484 C X+20,106 Y+115 DR+
485 CC X+22,037 Y+115
486 C X+23,969 Y+115 DR+
487 CC X+21,962 Y+115
488 C X+19,956 Y+115 DR+
489 CC X+22,037 Y+115
490 C X+24,119 Y+115 DR+
491 CC X+21,962 Y+115
492 C X+19,806 Y+115 DR+
493 CC X+22,037 Y+115
494 C X+24,269 Y+115 DR+
495 CC X+21,962 Y+115
496 C X+19,656 Y+115 DR+
497 CC X+22,037 Y+115
498 C X+24,419 Y+115 DR+
499 CC X+21,962 Y+115
500 C X+19,506 Y+115 DR+
501 CC X+22,037 Y+115
502 C X+24,569 Y+115 DR+
503 CC X+21,962 Y+115
504 C X+19,356 Y+115 DR+
505 CC X+22,037 Y+115
506 C X+24,719 Y+115 DR+
507 CC X+21,962 Y+115
508 C X+19,206 Y+115 DR+
509 CC X+22,037 Y+115
510 C X+24,869 Y+115 DR+
511 CC X+21,962 Y+115
512 C X+19,056 Y+115 DR+
513 CC X+22,037 Y+115
514 C X+25,019 Y+115 DR+
515 CC X+21,962 Y+115
516 C X+18,906 Y+115 DR+
517 CC X+22,037 Y+115
518 C X+25,169 Y+115 DR+
519 CC X+21,962 Y+115
520 C X+18,756 Y+115 DR+
521 CC X+22,037 Y+115
522 C X+25,319 Y+115 DR+
523 CC X+21,962 Y+115
524 C X+18,606 Y+115 DR+
525 CC X+22,037 Y+115
526 C X+25,469 Y+115 DR+
527 CC X+21,962 Y+115
528 C X+18,456 Y+115 DR+
529 CC X+22,037 Y+115
530 C X+25,619 Y+115 DR+
531 CC X+21,962 Y+115
532 C X+18,306 Y+115 DR+
533 CC X+22,037 Y+115
534 C X+25,769 Y+115 DR+
535 CC X+21,962 Y+115
536 C X+18,156 Y+115 DR+
537 CC X+22,037 Y+115
538 C X+25,919 Y+115 DR+
539 CC X+21,962 Y+115
540 C X+18,006 Y+115 DR+
541 CC X+22,037 Y+115
542 C X+18,672 Y+112,78 DR+
543 CC X+22 Y+115
544 C X+26 Y+115 DR+
545 CC X+22 Y+115
546 C X+18,672 Y+112,78 DR+
547 L Z+50 FMAX
548 L X+112 Y+115 FMAX
549 L Z+2 FMAX
550 L Z-5,07 F297
551 L X+112,019 F3565
552 CC X+111,962 Y+115
553 C X+111,906 Y+115 DR+
554 CC X+112,037 Y+115
555 C X+112,169 Y+115 DR+
556 CC X+111,962 Y+115
557 C X+111,756 Y+115 DR+
558 CC X+112,037 Y+115
559 C X+112,319 Y+115 DR+
560 CC X+111,962 Y+115
561 C X+111,606 Y+115 DR+
562 CC X+112,037 Y+115
563 C X+112,469 Y+115 DR+
564 CC X+111,962 Y+115
565 C X+111,456 Y+115 DR+
566 CC X+112,037 Y+115
567 C X+112,619 Y+115 DR+
568 CC X+111,962 Y+115
569 C X+111,306 Y+115 DR+
570 CC X+112,037 Y+115
571 C X+112,769 Y+115 DR+
572 CC X+111,962 Y+115
573 C X+111,156 Y+115 DR+
574 CC X+112,037 Y+115
575 C X+112,919 Y+115 DR+
576 CC X+111,962 Y+115
577 C X+111,006 Y+115 DR+
578 CC X+112,037 Y+115
579 C X+113,069 Y+115 DR+
580 CC X+111,962 Y+115
581 C X+110,856 Y+115 DR+
582 CC X+112,037 Y+115
583 C X+113,219 Y+115 DR+
584 CC X+111,962 Y+115
585 C X+110,706 Y+115 DR+
586 CC X+112,037 Y+115
587 C X+113,369 Y+115 DR+
588 CC X+111,962 Y+115
589 C X+110,556 Y+115 DR+
590 CC X+112,037 Y+115
591 C X+113,519 Y+115 DR+
592 CC X+111,962 Y+115
593 C X+110,406 Y+115 DR+
594 CC X+112,037 Y+115
595 C X+113,669 Y+115 DR+
596 CC X+111,962 Y+115
597 C X+110,256 Y+115 DR+
598 CC X+112,037 Y+115
599 C X+113,819 Y+115 DR+
600 CC X+111,962 Y+115
601 C X+110,106 Y+115 DR+
602 CC X+112,037 Y+115
603 C X+113,969 Y+115 DR+
604 CC X+111,962 Y+115
605 C X+109,956 Y+115 DR+
606 CC X+112,037 Y+115
607 C X+114,119 Y+115 DR+
608 CC X+111,962 Y+115
609 C X+109,806 Y+115 DR+
610 CC X+112,037 Y+115
611 C X+114,269 Y+115 DR+
612 CC X+111,962 Y+115
613 C X+109,656 Y+115 DR+
614 CC X+112,037 Y+115
615 C X+114,419 Y+115 DR+
616 CC X+111,962 Y+115
617 C X+109,506 Y+115 DR+
618 CC X+112,037 Y+115
619 C X+114,569 Y+115 DR+
620 CC X+111,962 Y+115
621 C X+109,356 Y+115 DR+
622 CC X+112,037 Y+115
623 C X+114,719 Y+115 DR+
624 CC X+111,962 Y+115
625 C X+109,206 Y+115 DR+
626 CC X+112,037 Y+115
627 C X+114,869 Y+115 DR+
628 CC X+111,962 Y+115
629 C X+109,056 Y+115 DR+
630 CC X+112,037 Y+115
631 C X+115,019 Y+115 DR+
632 CC X+111,962 Y+115
633 C X+108,906 Y+115 DR+
634 CC X+112,037 Y+115
635 C X+115,169 Y+115 DR+
636 CC X+111,962 Y+115
637 C X+108,756 Y+115 DR+
638 CC X+112,037 Y+115
639 C X+115,319 Y+115 DR+
640 CC X+111,962 Y+115
641 C X+108,606 Y+115 DR+
642 CC X+112,037 Y+115
643 C X+115,469 Y+115 DR+
644 CC X+111,962 Y+115
645 C X+108,456 Y+115 DR+
646 CC X+112,037 Y+115
647 C X+115,619 Y+115 DR+
648 CC X+111,962 Y+115
649 C X+108,306 Y+115 DR+
650 CC X+112,037 Y+115
651 C X+115,769 Y+115 DR+
652 CC X+111,962 Y+115
653 C X+108,156 Y+115 DR+
654 CC X+112,037 Y+115
655 C X+115,919 Y+115 DR+
656 CC X+111,962 Y+115
657 C X+108,006 Y+115 DR+
658 CC X+112,037 Y+115
659 C X+108,672 Y+112,78 DR+
660 CC X+112 Y+115
661 C X+116 Y+115 DR+
662 CC X+112 Y+115
663 C X+108,672 Y+112,78 DR+
664 L Z+50 FMAX
665 L X+22 Y-90 FMAX
666 L Z+2 FMAX
667 L Z-5,07 F297
668 L X+22,019 F3565
669 CC X+21,962 Y-90
670 C X+21,906 Y-90 DR+
671 CC X+22,037 Y-90
672 C X+22,169 Y-90 DR+
673 CC X+21,962 Y-90
674 C X+21,756 Y-90 DR+
675 CC X+22,037 Y-90
676 C X+22,319 Y-90 DR+
677 CC X+21,962 Y-90
678 C X+21,606 Y-90 DR+
679 CC X+22,037 Y-90
680 C X+22,469 Y-90 DR+
681 CC X+21,962 Y-90
682 C X+21,456 Y-90 DR+
683 CC X+22,037 Y-90
684 C X+22,619 Y-90 DR+
685 CC X+21,962 Y-90
686 C X+21,306 Y-90 DR+
687 CC X+22,037 Y-90
688 C X+22,769 Y-90 DR+
689 CC X+21,962 Y-90
690 C X+21,156 Y-90 DR+
691 CC X+22,037 Y-90
692 C X+22,919 Y-90 DR+
693 CC X+21,962 Y-90
694 C X+21,006 Y-90 DR+
695 CC X+22,037 Y-90
696 C X+23,069 Y-90 DR+
697 CC X+21,962 Y-90
698 C X+20,856 Y-90 DR+
699 CC X+22,037 Y-90
700 C X+23,219 Y-90 DR+
701 CC X+21,962 Y-90
702 C X+20,706 Y-90 DR+
703 CC X+22,037 Y-90
704 C X+23,369 Y-90 DR+
705 CC X+21,962 Y-90
706 C X+20,556 Y-90 DR+
707 CC X+22,037 Y-90
708 C X+23,519 Y-90 DR+
709 CC X+21,962 Y-90
710 C X+20,406 Y-90 DR+
711 CC X+22,037 Y-90
712 C X+23,669 Y-90 DR+
713 CC X+21,962 Y-90
714 C X+20,256 Y-90 DR+
715 CC X+22,037 Y-90
716 C X+23,819 Y-90 DR+
717 CC X+21,962 Y-90
718 C X+20,106 Y-90 DR+
719 CC X+22,037 Y-90
720 C X+23,969 Y-90 DR+
721 CC X+21,962 Y-90
722 C X+19,956 Y-90 DR+
723 CC X+22,037 Y-90
724 C X+24,119 Y-90 DR+
725 CC X+21,962 Y-90
726 C X+19,806 Y-90 DR+
727 CC X+22,037 Y-90
728 C X+24,269 Y-90 DR+
729 CC X+21,962 Y-90
730 C X+19,656 Y-90 DR+
731 CC X+22,037 Y-90
732 C X+24,419 Y-90 DR+
733 CC X+21,962 Y-90
734 C X+19,506 Y-90 DR+
735 CC X+22,037 Y-90
736 C X+24,569 Y-90 DR+
737 CC X+21,962 Y-90
738 C X+19,356 Y-90 DR+
739 CC X+22,037 Y-90
740 C X+24,719 Y-90 DR+
741 CC X+21,962 Y-90
742 C X+19,206 Y-90 DR+
743 CC X+22,037 Y-90
744 C X+24,869 Y-90 DR+
745 CC X+21,962 Y-90
746 C X+19,056 Y-90 DR+
747 CC X+22,037 Y-90
748 C X+25,019 Y-90 DR+
749 CC X+21,962 Y-90
750 C X+18,906 Y-90 DR+
751 CC X+22,037 Y-90
752 C X+25,169 Y-90 DR+
753 CC X+21,962 Y-90
754 C X+18,756 Y-90 DR+
755 CC X+22,037 Y-90
756 C X+25,319 Y-90 DR+
757 CC X+21,962 Y-90
758 C X+18,606 Y-90 DR+
759 CC X+22,037 Y-90
760 C X+25,469 Y-90 DR+
761 CC X+21,962 Y-90
762 C X+18,456 Y-90 DR+
763 CC X+22,037 Y-90
764 C X+25,619 Y-90 DR+
765 CC X+21,962 Y-90
766 C X+18,306 Y-90 DR+
767 CC X+22,037 Y-90
768 C X+25,769 Y-90 DR+
769 CC X+21,962 Y-90
770 C X+18,156 Y-90 DR+
771 CC X+22,037 Y-90
772 C X+25,919 Y-90 DR+
773 CC X+21,962 Y-90
774 C X+18,006 Y-90 DR+
775 CC X+22,037 Y-90
776 C X+18,672 Y-92,22 DR+
777 CC X+22 Y-90
778 C X+26 Y-90 DR+
779 CC X+22 Y-90
780 C X+18,672 Y-92,22 DR+
781 L Z+50 FMAX
782 L X-68 Y-90 FMAX
783 L Z+2 FMAX
784 L Z-5,07 F297
785 L X-67,981 F3565
786 CC X-68,038 Y-90
787 C X-68,094 Y-90 DR+
788 CC X-67,963 Y-90
789 C X-67,831 Y-90 DR+
790 CC X-68,038 Y-90
791 C X-68,244 Y-90 DR+
792 CC X-67,963 Y-90
793 C X-67,681 Y-90 DR+
794 CC X-68,038 Y-90
795 C X-68,394 Y-90 DR+
796 CC X-67,963 Y-90
797 C X-67,531 Y-90 DR+
798 CC X-68,038 Y-90
799 C X-68,544 Y-90 DR+
800 CC X-67,963 Y-90
801 C X-67,381 Y-90 DR+
802 CC X-68,038 Y-90
803 C X-68,694 Y-90 DR+
804 CC X-67,963 Y-90
805 C X-67,231 Y-90 DR+
806 CC X-68,038 Y-90
807 C X-68,844 Y-90 DR+
808 CC X-67,963 Y-90
809 C X-67,081 Y-90 DR+
810 CC X-68,038 Y-90
811 C X-68,994 Y-90 DR+
812 CC X-67,963 Y-90
813 C X-66,931 Y-90 DR+
814 CC X-68,038 Y-90
815 C X-69,144 Y-90 DR+
816 CC X-67,963 Y-90
817 C X-66,781 Y-90 DR+
818 CC X-68,038 Y-90
819 C X-69,294 Y-90 DR+
820 CC X-67,963 Y-90
821 C X-66,631 Y-90 DR+
822 CC X-68,038 Y-90
823 C X-69,444 Y-90 DR+
824 CC X-67,963 Y-90
825 C X-66,481 Y-90 DR+
826 CC X-68,038 Y-90
827 C X-69,594 Y-90 DR+
828 CC X-67,963 Y-90
829 C X-66,331 Y-90 DR+
830 CC X-68,038 Y-90
831 C X-69,744 Y-90 DR+
832 CC X-67,963 Y-90
833 C X-66,181 Y-90 DR+
834 CC X-68,038 Y-90
835 C X-69,894 Y-90 DR+
836 CC X-67,963 Y-90
837 C X-66,031 Y-90 DR+
838 CC X-68,038 Y-90
839 C X-70,044 Y-90 DR+
840 CC X-67,963 Y-90
841 C X-65,881 Y-90 DR+
842 CC X-68,038 Y-90
843 C X-70,194 Y-90 DR+
844 CC X-67,963 Y-90
845 C X-65,731 Y-90 DR+
846 CC X-68,038 Y-90
847 C X-70,344 Y-90 DR+
848 CC X-67,963 Y-90
849 C X-65,581 Y-90 DR+
850 CC X-68,038 Y-90
851 C X-70,494 Y-90 DR+
852 CC X-67,963 Y-90
853 C X-65,431 Y-90 DR+
854 CC X-68,038 Y-90
855 C X-70,644 Y-90 DR+
856 CC X-67,963 Y-90
857 C X-65,281 Y-90 DR+
858 CC X-68,038 Y-90
859 C X-70,794 Y-90 DR+
860 CC X-67,963 Y-90
861 C X-65,131 Y-90 DR+
862 CC X-68,038 Y-90
863 C X-70,944 Y-90 DR+
864 CC X-67,963 Y-90
865 C X-64,981 Y-90 DR+
866 CC X-68,038 Y-90
867 C X-71,094 Y-90 DR+
868 CC X-67,963 Y-90
869 C X-64,831 Y-90 DR+
870 CC X-68,038 Y-90
871 C X-71,244 Y-90 DR+
872 CC X-67,963 Y-90
873 C X-64,681 Y-90 DR+
874 CC X-68,038 Y-90
875 C X-71,394 Y-90 DR+
876 CC X-67,963 Y-90
877 C X-64,531 Y-90 DR+
878 CC X-68,038 Y-90
879 C X-71,544 Y-90 DR+
880 CC X-67,963 Y-90
881 C X-64,381 Y-90 DR+
882 CC X-68,038 Y-90
883 C X-71,694 Y-90 DR+
884 CC X-67,963 Y-90
885 C X-64,231 Y-90 DR+
886 CC X-68,038 Y-90
887 C X-71,844 Y-90 DR+
888 CC X-67,963 Y-90
889 C X-64,081 Y-90 DR+
890 CC X-68,038 Y-90
891 C X-71,994 Y-90 DR+
892 CC X-67,963 Y-90
893 C X-71,328 Y-92,22 DR+
894 CC X-68 Y-90
895 C X-64 Y-90 DR+
896 CC X-68 Y-90
897 C X-71,328 Y-92,22 DR+
898 L Z+50 FMAX
899 L X-158 Y-90 FMAX
900 L Z+2 FMAX
901 L Z-5,07 F297
902 L X-157,981 F3565
903 CC X-158,038 Y-90
904 C X-158,094 Y-90 DR+
905 CC X-157,963 Y-90
906 C X-157,831 Y-90 DR+
907 CC X-158,038 Y-90
908 C X-158,244 Y-90 DR+
909 CC X-157,963 Y-90
910 C X-157,681 Y-90 DR+
911 CC X-158,038 Y-90
912 C X-158,394 Y-90 DR+
913 CC X-157,963 Y-90
914 C X-157,531 Y-90 DR+
915 CC X-158,038 Y-90
916 C X-158,544 Y-90 DR+
917 CC X-157,963 Y-90
918 C X-157,381 Y-90 DR+
919 CC X-158,038 Y-90
920 C X-158,694 Y-90 DR+
921 CC X-157,963 Y-90
922 C X-157,231 Y-90 DR+
923 CC X-158,038 Y-90
924 C X-158,844 Y-90 DR+
925 CC X-157,963 Y-90
926 C X-157,081 Y-90 DR+
927 CC X-158,038 Y-90
928 C X-158,994 Y-90 DR+
929 CC X-157,963 Y-90
930 C X-156,931 Y-90 DR+
931 CC X-158,038 Y-90
932 C X-159,144 Y-90 DR+
933 CC X-157,963 Y-90
934 C X-156,781 Y-90 DR+
935 CC X-158,038 Y-90
936 C X-159,294 Y-90 DR+
937 CC X-157,963 Y-90
938 C X-156,631 Y-90 DR+
939 CC X-158,038 Y-90
940 C X-159,444 Y-90 DR+
941 CC X-157,963 Y-90
942 C X-156,481 Y-90 DR+
943 CC X-158,038 Y-90
944 C X-159,594 Y-90 DR+
945 CC X-157,963 Y-90
946 C X-156,331 Y-90 DR+
947 CC X-158,038 Y-90
948 C X-159,744 Y-90 DR+
949 CC X-157,963 Y-90
950 C X-156,181 Y-90 DR+
951 CC X-158,038 Y-90
952 C X-159,894 Y-90 DR+
953 CC X-157,963 Y-90
954 C X-156,031 Y-90 DR+
955 CC X-158,038 Y-90
956 C X-160,044 Y-90 DR+
957 CC X-157,963 Y-90
958 C X-155,881 Y-90 DR+
959 CC X-158,038 Y-90
960 C X-160,194 Y-90 DR+
961 CC X-157,963 Y-90
962 C X-155,731 Y-90 DR+
963 CC X-158,038 Y-90
964 C X-160,344 Y-90 DR+
965 CC X-157,963 Y-90
966 C X-155,581 Y-90 DR+
967 CC X-158,038 Y-90
968 C X-160,494 Y-90 DR+
969 CC X-157,963 Y-90
970 C X-155,431 Y-90 DR+
971 CC X-158,038 Y-90
972 C X-160,644 Y-90 DR+
973 CC X-157,963 Y-90
974 C X-155,281 Y-90 DR+
975 CC X-158,038 Y-90
976 C X-160,794 Y-90 DR+
977 CC X-157,963 Y-90
978 C X-155,131 Y-90 DR+
979 CC X-158,038 Y-90
980 C X-160,944 Y-90 DR+
981 CC X-157,963 Y-90
982 C X-154,981 Y-90 DR+
983 CC X-158,038 Y-90
984 C X-161,094 Y-90 DR+
985 CC X-157,963 Y-90
986 C X-154,831 Y-90 DR+
987 CC X-158,038 Y-90
988 C X-161,244 Y-90 DR+
989 CC X-157,963 Y-90
990 C X-154,681 Y-90 DR+
991 CC X-158,038 Y-90
992 C X-161,394 Y-90 DR+
993 CC X-157,963 Y-90
994 C X-154,531 Y-90 DR+
995 CC X-158,038 Y-90
996 C X-161,544 Y-90 DR+
997 CC X-157,963 Y-90
998 C X-154,381 Y-90 DR+
999 CC X-158,038 Y-90
1000 C X-161,694 Y-90 DR+
1001 CC X-157,963 Y-90
1002 C X-154,231 Y-90 DR+
1003 CC X-158,038 Y-90
1004 C X-161,844 Y-90 DR+
1005 CC X-157,963 Y-90
1006 C X-154,081 Y-90 DR+
1007 CC X-158,038 Y-90
1008 C X-161,994 Y-90 DR+
1009 CC X-157,963 Y-90
1010 C X-161,328 Y-92,22 DR+
1011 CC X-158 Y-90
1012 C X-154 Y-90 DR+
1013 CC X-158 Y-90
1014 C X-161,328 Y-92,22 DR+
1015 L Z+50 FMAX
1016 TOOL CALL 19 Z S7427 DR-3
1017 L X-158 Y+115 Z+50 FMAX
1018 L Z+2 FMAX
1019 L Z-5,07 F297
1020 L X-160,8 Y+115,6 RL F3565
1021 L X-161,4
1022 CC X-161,4 Y+115
1023 C X-162 Y+115 DR+
1024 CC X-158 Y+115
1025 C X-154 Y+115 DR+
1026 CC X-158 Y+115
1027 C X-162 Y+115 DR+
1028 CC X-158 Y+115
1029 C X-161,876 Y+114,01 DR+
1030 CC X-158 Y+115
1031 C X-154 Y+115 DR+
1032 CC X-158 Y+115
1033 C X-162 Y+115 DR+
1034 CC X-158 Y+115
1035 C X-161,876 Y+114,01 DR+
1036 CC X-161,294 Y+114,159
1037 C X-161,146 Y+113,577 DR+
1038 L X-160,565 Y+113,726
1039 L X-158 Y+115 R0
1040 L Z+50 FMAX
1041 L X-68 FMAX
1042 L Z+2 FMAX
1043 L Z-5,07 F297
1044 L X-70,8 Y+115,6 RL F3565
1045 L X-71,4
1046 CC X-71,4 Y+115
1047 C X-72 Y+115 DR+
1048 CC X-68 Y+115
1049 C X-64 Y+115 DR+
1050 CC X-68 Y+115
1051 C X-72 Y+115 DR+
1052 CC X-68 Y+115
1053 C X-71,876 Y+114,01 DR+
1054 CC X-68 Y+115
1055 C X-64 Y+115 DR+
1056 CC X-68 Y+115
1057 C X-72 Y+115 DR+
1058 CC X-68 Y+115
1059 C X-71,876 Y+114,01 DR+
1060 CC X-71,294 Y+114,159
1061 C X-71,146 Y+113,577 DR+
1062 L X-70,565 Y+113,726
1063 L X-68 Y+115 R0
1064 L Z+50 FMAX
1065 L X+22 FMAX
1066 L Z+2 FMAX
1067 L Z-5,07 F297
1068 L X+19,2 Y+115,6 RL F3565
1069 L X+18,6
1070 CC X+18,6 Y+115
1071 C X+18 Y+115 DR+
1072 CC X+22 Y+115
1073 C X+26 Y+115 DR+
1074 CC X+22 Y+115
1075 C X+18 Y+115 DR+
1076 CC X+22 Y+115
1077 C X+18,124 Y+114,01 DR+
1078 CC X+22 Y+115
1079 C X+26 Y+115 DR+
1080 CC X+22 Y+115
1081 C X+18 Y+115 DR+
1082 CC X+22 Y+115
1083 C X+18,124 Y+114,01 DR+
1084 CC X+18,706 Y+114,159
1085 C X+18,854 Y+113,577 DR+
1086 L X+19,435 Y+113,726
1087 L X+22 Y+115 R0
1088 L Z+50 FMAX
1089 L X+112 FMAX
1090 L Z+2 FMAX
1091 L Z-5,07 F297
1092 L X+109,2 Y+115,6 RL F3565
1093 L X+108,6
1094 CC X+108,6 Y+115
1095 C X+108 Y+115 DR+
1096 CC X+112 Y+115
1097 C X+116 Y+115 DR+
1098 CC X+112 Y+115
1099 C X+108 Y+115 DR+
1100 CC X+112 Y+115
1101 C X+108,124 Y+114,01 DR+
1102 CC X+112 Y+115
1103 C X+116 Y+115 DR+
1104 CC X+112 Y+115
1105 C X+108 Y+115 DR+
1106 CC X+112 Y+115
1107 C X+108,124 Y+114,01 DR+
1108 CC X+108,706 Y+114,159
1109 C X+108,854 Y+113,577 DR+
1110 L X+109,435 Y+113,726
1111 L X+112 Y+115 R0
1112 L Z+50 FMAX
1113 L X+22 Y-90 FMAX
1114 L Z+2 FMAX
1115 L Z-5,07 F297
1116 L X+19,2 Y-89,4 RL F3565
1117 L X+18,6
1118 CC X+18,6 Y-90
1119 C X+18 Y-90 DR+
1120 CC X+22 Y-90
1121 C X+26 Y-90 DR+
1122 CC X+22 Y-90
1123 C X+18 Y-90 DR+
1124 CC X+22 Y-90
1125 C X+18,124 Y-90,99 DR+
1126 CC X+22 Y-90
1127 C X+26 Y-90 DR+
1128 CC X+22 Y-90
1129 C X+18 Y-90 DR+
1130 CC X+22 Y-90
1131 C X+18,124 Y-90,99 DR+
1132 CC X+18,706 Y-90,841
1133 C X+18,854 Y-91,423 DR+
1134 L X+19,435 Y-91,274
1135 L X+22 Y-90 R0
1136 L Z+50 FMAX
1137 L X-68 FMAX
1138 L Z+2 FMAX
1139 L Z-5,07 F297
1140 L X-70,8 Y-89,4 RL F3565
1141 L X-71,4
1142 CC X-71,4 Y-90
1143 C X-72 Y-90 DR+
1144 CC X-68 Y-90
1145 C X-64 Y-90 DR+
1146 CC X-68 Y-90
1147 C X-72 Y-90 DR+
1148 CC X-68 Y-90
1149 C X-71,876 Y-90,99 DR+
1150 CC X-68 Y-90
1151 C X-64 Y-90 DR+
1152 CC X-68 Y-90
1153 C X-72 Y-90 DR+
1154 CC X-68 Y-90
1155 C X-71,876 Y-90,99 DR+
1156 CC X-71,294 Y-90,841
1157 C X-71,146 Y-91,423 DR+
1158 L X-70,565 Y-91,274
1159 L X-68 Y-90 R0
1160 L Z+50 FMAX
1161 L X-158 FMAX
1162 L Z+2 FMAX
1163 L Z-5,07 F297
1164 L X-160,8 Y-89,4 RL F3565
1165 L X-161,4
1166 CC X-161,4 Y-90
1167 C X-162 Y-90 DR+
1168 CC X-158 Y-90
1169 C X-154 Y-90 DR+
1170 CC X-158 Y-90
1171 C X-162 Y-90 DR+
1172 CC X-158 Y-90
1173 C X-161,876 Y-90,99 DR+
1174 CC X-158 Y-90
1175 C X-154 Y-90 DR+
1176 CC X-158 Y-90
1177 C X-162 Y-90 DR+
1178 CC X-158 Y-90
1179 C X-161,876 Y-90,99 DR+
1180 CC X-161,294 Y-90,841
1181 C X-161,146 Y-91,423 DR+
1182 L X-160,565 Y-91,274
1183 L X-158 Y-90 R0
1184 L Z+50 FMAX
1185 M78
1186 M5
1187 L Z-1 FMAX M91
1188 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1189 ; CORRECTION USURE GAUCHE
1190 ; SUREP R 0. SUREP Z 0.
1191 TOOL CALL 1 Z S6000 DR-2,5
1192 L X-158 Y+115 FMAX M3
1193 L Z+50 FMAX
1194 L Z+2 FMAX
1195 L Z-2,4 F800
1196 L X-161,5 Y+115,5 RL F1200
1197 L X-162
1198 CC X-162 Y+115
1199 C X-162,5 Y+115 DR+
1200 CC X-158 Y+115
1201 C X-153,5 Y+115 DR+
1202 CC X-158 Y+115
1203 C X-162,5 Y+115 DR+
1204 CC X-158 Y+115
1205 C X-162,389 Y+114,008 DR+
1206 CC X-161,902 Y+114,118
1207 C X-161,791 Y+113,631 DR+
1208 L X-161,304 Y+113,741
1209 L X-158 Y+115 R0
1210 L Z+50 FMAX
1211 L X-68 FMAX
1212 L Z+2 FMAX
1213 L Z-2,4 F800
1214 L X-71,5 Y+115,5 RL F1200
1215 L X-72
1216 CC X-72 Y+115
1217 C X-72,5 Y+115 DR+
1218 CC X-68 Y+115
1219 C X-63,5 Y+115 DR+
1220 CC X-68 Y+115
1221 C X-72,5 Y+115 DR+
1222 CC X-68 Y+115
1223 C X-72,389 Y+114,008 DR+
1224 CC X-71,902 Y+114,118
1225 C X-71,791 Y+113,631 DR+
1226 L X-71,304 Y+113,741
1227 L X-68 Y+115 R0
1228 L Z+50 FMAX
1229 L X+22 FMAX
1230 L Z+2 FMAX
1231 L Z-2,4 F800
1232 L X+18,5 Y+115,5 RL F1200
1233 L X+18
1234 CC X+18 Y+115
1235 C X+17,5 Y+115 DR+
1236 CC X+22 Y+115
1237 C X+26,5 Y+115 DR+
1238 CC X+22 Y+115
1239 C X+17,5 Y+115 DR+
1240 CC X+22 Y+115
1241 C X+17,611 Y+114,008 DR+
1242 CC X+18,098 Y+114,118
1243 C X+18,209 Y+113,631 DR+
1244 L X+18,696 Y+113,741
1245 L X+22 Y+115 R0
1246 L Z+50 FMAX
1247 L X+112 FMAX
1248 L Z+2 FMAX
1249 L Z-2,4 F800
1250 L X+108,5 Y+115,5 RL F1200
1251 L X+108
1252 CC X+108 Y+115
1253 C X+107,5 Y+115 DR+
1254 CC X+112 Y+115
1255 C X+116,5 Y+115 DR+
1256 CC X+112 Y+115
1257 C X+107,5 Y+115 DR+
1258 CC X+112 Y+115
1259 C X+107,611 Y+114,008 DR+
1260 CC X+108,098 Y+114,118
1261 C X+108,209 Y+113,631 DR+
1262 L X+108,696 Y+113,741
1263 L X+112 Y+115 R0
1264 L Z+50 FMAX
1265 L X+22 Y-90 FMAX
1266 L Z+2 FMAX
1267 L Z-2,4 F800
1268 L X+18,5 Y-89,5 RL F1200
1269 L X+18
1270 CC X+18 Y-90
1271 C X+17,5 Y-90 DR+
1272 CC X+22 Y-90
1273 C X+26,5 Y-90 DR+
1274 CC X+22 Y-90
1275 C X+17,5 Y-90 DR+
1276 CC X+22 Y-90
1277 C X+17,611 Y-90,992 DR+
1278 CC X+18,098 Y-90,882
1279 C X+18,209 Y-91,369 DR+
1280 L X+18,696 Y-91,259
1281 L X+22 Y-90 R0
1282 L Z+50 FMAX
1283 L X-68 FMAX
1284 L Z+2 FMAX
1285 L Z-2,4 F800
1286 L X-71,5 Y-89,5 RL F1200
1287 L X-72
1288 CC X-72 Y-90
1289 C X-72,5 Y-90 DR+
1290 CC X-68 Y-90
1291 C X-63,5 Y-90 DR+
1292 CC X-68 Y-90
1293 C X-72,5 Y-90 DR+
1294 CC X-68 Y-90
1295 C X-72,389 Y-90,992 DR+
1296 CC X-71,902 Y-90,882
1297 C X-71,791 Y-91,369 DR+
1298 L X-71,304 Y-91,259
1299 L X-68 Y-90 R0
1300 L Z+50 FMAX
1301 L X-158 FMAX
1302 L Z+2 FMAX
1303 L Z-2,4 F800
1304 L X-161,5 Y-89,5 RL F1200
1305 L X-162
1306 CC X-162 Y-90
1307 C X-162,5 Y-90 DR+
1308 CC X-158 Y-90
1309 C X-153,5 Y-90 DR+
1310 CC X-158 Y-90
1311 C X-162,5 Y-90 DR+
1312 CC X-158 Y-90
1313 C X-162,389 Y-90,992 DR+
1314 CC X-161,902 Y-90,882
1315 C X-161,791 Y-91,369 DR+
1316 L X-161,304 Y-91,259
1317 L X-158 Y-90 R0
1318 L Z+50 FMAX
1319 M5
1320 L Z-1 FMAX M91
1321 L Y-1 FMAX M91
1322 M30
1323 END PGM REP32-20262-01-02-PLAQUETTE SF-B MM
