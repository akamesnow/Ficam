0 BEGIN PGM REP24-20162-OP10-CALE DE CHOCS MATRICE-C MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP24-20162-OP10-CALE DE CHOCS MATRICE-C
4 ; PROG-CN DU 23-10-19 A 14:48
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T19 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 4
18 L X-140 Y-30,5 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X-140 Y-30,5 FMAX M99
23 L Y+28,5 FMAX M99
24 L X-75 Y+33,5 FMAX M99
25 L X+75 FMAX M99
26 L X+100 Y+28,5 FMAX M99
27 L X+140 FMAX M99
28 L Y-30,5 FMAX M99
29 L Z+50 FMAX
30 M9
31 M5
32 L Z-1 FMAX M91
33 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
34 TOOL CALL 4 Z S1400 DR+0
35 TOOL DEF 19
36 L X-140 Y-30,5 FMAX M3
37 L Z+50 FMAX M7
38 ;  DEBOURRAGE
39 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-12 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
40 L X-140 Y-30,5 FMAX M99
41 L Y+28,5 FMAX M99
42 L X-75 Y+33,5 FMAX M99
43 L X+75 FMAX M99
44 L X+100 Y+28,5 FMAX M99
45 L X+140 FMAX M99
46 L Y-30,5 FMAX M99
47 L Z+50 FMAX
48 M9
49 M5
50 L Z-1 FMAX M91
51 ; T19 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
52 ; CORRECTION AUCUNE
53 ; SUREP R 0. SUREP Z 0.
54 TOOL CALL 19 Z S6000 DR+0
55 TOOL DEF 1
56 L X-140 Y+28,5 FMAX M3
57 L Z+50 FMAX M8
58 L Z+2 FMAX
59 L Z-10 F297
60 L X-139,987 F500
61 CC X-140,025 Y+28,5
62 C X-140,062 Y+28,5 DR+
63 CC X-139,975 Y+28,5
64 C X-139,887 Y+28,5 DR+
65 CC X-140,025 Y+28,5
66 C X-140,162 Y+28,5 DR+
67 CC X-139,975 Y+28,5
68 C X-139,787 Y+28,5 DR+
69 CC X-140,025 Y+28,5
70 C X-140,262 Y+28,5 DR+
71 CC X-139,975 Y+28,5
72 C X-139,687 Y+28,5 DR+
73 CC X-140,025 Y+28,5
74 C X-140,362 Y+28,5 DR+
75 CC X-139,975 Y+28,5
76 C X-139,587 Y+28,5 DR+
77 CC X-140,025 Y+28,5
78 C X-140,462 Y+28,5 DR+
79 CC X-139,975 Y+28,5
80 C X-139,487 Y+28,5 DR+
81 CC X-140,025 Y+28,5
82 C X-140,562 Y+28,5 DR+
83 CC X-139,975 Y+28,5
84 C X-139,387 Y+28,5 DR+
85 CC X-140,025 Y+28,5
86 C X-140,662 Y+28,5 DR+
87 CC X-139,975 Y+28,5
88 C X-139,287 Y+28,5 DR+
89 CC X-140,025 Y+28,5
90 C X-140,762 Y+28,5 DR+
91 CC X-139,975 Y+28,5
92 C X-139,187 Y+28,5 DR+
93 CC X-140,025 Y+28,5
94 C X-140,862 Y+28,5 DR+
95 CC X-139,975 Y+28,5
96 C X-139,087 Y+28,5 DR+
97 CC X-140,025 Y+28,5
98 C X-140,962 Y+28,5 DR+
99 CC X-139,975 Y+28,5
100 C X-138,987 Y+28,5 DR+
101 CC X-140,025 Y+28,5
102 C X-141,062 Y+28,5 DR+
103 CC X-139,975 Y+28,5
104 C X-138,887 Y+28,5 DR+
105 CC X-140,025 Y+28,5
106 C X-141,162 Y+28,5 DR+
107 CC X-139,975 Y+28,5
108 C X-138,787 Y+28,5 DR+
109 CC X-140,025 Y+28,5
110 C X-141,262 Y+28,5 DR+
111 CC X-139,975 Y+28,5
112 C X-138,687 Y+28,5 DR+
113 CC X-140,025 Y+28,5
114 C X-141,362 Y+28,5 DR+
115 CC X-139,975 Y+28,5
116 C X-138,587 Y+28,5 DR+
117 CC X-140,025 Y+28,5
118 C X-141,462 Y+28,5 DR+
119 CC X-139,975 Y+28,5
120 C X-138,487 Y+28,5 DR+
121 CC X-140,025 Y+28,5
122 C X-141,562 Y+28,5 DR+
123 CC X-139,975 Y+28,5
124 C X-138,387 Y+28,5 DR+
125 CC X-140,025 Y+28,5
126 C X-141,662 Y+28,5 DR+
127 CC X-139,975 Y+28,5
128 C X-138,287 Y+28,5 DR+
129 CC X-140,025 Y+28,5
130 C X-141,762 Y+28,5 DR+
131 CC X-139,975 Y+28,5
132 C X-138,187 Y+28,5 DR+
133 CC X-140,025 Y+28,5
134 C X-141,862 Y+28,5 DR+
135 CC X-139,975 Y+28,5
136 C X-138,087 Y+28,5 DR+
137 CC X-140,025 Y+28,5
138 C X-141,962 Y+28,5 DR+
139 CC X-139,975 Y+28,5
140 C X-137,987 Y+28,5 DR+
141 CC X-140,025 Y+28,5
142 C X-142,062 Y+28,5 DR+
143 CC X-139,975 Y+28,5
144 C X-137,887 Y+28,5 DR+
145 CC X-140,025 Y+28,5
146 C X-142,162 Y+28,5 DR+
147 CC X-139,975 Y+28,5
148 C X-137,787 Y+28,5 DR+
149 CC X-140,025 Y+28,5
150 C X-142,262 Y+28,5 DR+
151 CC X-139,975 Y+28,5
152 C X-137,687 Y+28,5 DR+
153 CC X-140,025 Y+28,5
154 C X-142,362 Y+28,5 DR+
155 CC X-139,975 Y+28,5
156 C X-137,587 Y+28,5 DR+
157 CC X-140,025 Y+28,5
158 C X-142,462 Y+28,5 DR+
159 CC X-139,975 Y+28,5
160 C X-137,487 Y+28,5 DR+
161 CC X-140,025 Y+28,5
162 C X-142,562 Y+28,5 DR+
163 CC X-139,975 Y+28,5
164 C X-137,387 Y+28,5 DR+
165 CC X-140,025 Y+28,5
166 C X-142,662 Y+28,5 DR+
167 CC X-139,975 Y+28,5
168 C X-137,287 Y+28,5 DR+
169 CC X-140,025 Y+28,5
170 C X-142,762 Y+28,5 DR+
171 CC X-139,975 Y+28,5
172 C X-137,187 Y+28,5 DR+
173 CC X-140,025 Y+28,5
174 C X-142,862 Y+28,5 DR+
175 CC X-139,975 Y+28,5
176 C X-137,087 Y+28,5 DR+
177 CC X-140,025 Y+28,5
178 C X-142,962 Y+28,5 DR+
179 CC X-139,975 Y+28,5
180 C X-136,987 Y+28,5 DR+
181 CC X-140,025 Y+28,5
182 C X-143,062 Y+28,5 DR+
183 CC X-139,975 Y+28,5
184 C X-136,887 Y+28,5 DR+
185 CC X-140,025 Y+28,5
186 C X-143,162 Y+28,5 DR+
187 CC X-139,975 Y+28,5
188 C X-136,787 Y+28,5 DR+
189 CC X-140,025 Y+28,5
190 C X-141,634 Y+31,309 DR+
191 CC X-140 Y+28,5
192 C X-140 Y+25,25 DR+
193 CC X-140 Y+28,5
194 C X-141,634 Y+31,309 DR+
195 L Z+50 FMAX
196 L X+100 Y+28,5 FMAX
197 L Z+2 FMAX
198 L Z-10 F297
199 L X+100,013 F500
200 CC X+99,975 Y+28,5
201 C X+99,938 Y+28,5 DR+
202 CC X+100,025 Y+28,5
203 C X+100,113 Y+28,5 DR+
204 CC X+99,975 Y+28,5
205 C X+99,838 Y+28,5 DR+
206 CC X+100,025 Y+28,5
207 C X+100,213 Y+28,5 DR+
208 CC X+99,975 Y+28,5
209 C X+99,738 Y+28,5 DR+
210 CC X+100,025 Y+28,5
211 C X+100,313 Y+28,5 DR+
212 CC X+99,975 Y+28,5
213 C X+99,638 Y+28,5 DR+
214 CC X+100,025 Y+28,5
215 C X+100,413 Y+28,5 DR+
216 CC X+99,975 Y+28,5
217 C X+99,538 Y+28,5 DR+
218 CC X+100,025 Y+28,5
219 C X+100,513 Y+28,5 DR+
220 CC X+99,975 Y+28,5
221 C X+99,438 Y+28,5 DR+
222 CC X+100,025 Y+28,5
223 C X+100,613 Y+28,5 DR+
224 CC X+99,975 Y+28,5
225 C X+99,338 Y+28,5 DR+
226 CC X+100,025 Y+28,5
227 C X+100,713 Y+28,5 DR+
228 CC X+99,975 Y+28,5
229 C X+99,238 Y+28,5 DR+
230 CC X+100,025 Y+28,5
231 C X+100,813 Y+28,5 DR+
232 CC X+99,975 Y+28,5
233 C X+99,138 Y+28,5 DR+
234 CC X+100,025 Y+28,5
235 C X+100,913 Y+28,5 DR+
236 CC X+99,975 Y+28,5
237 C X+99,038 Y+28,5 DR+
238 CC X+100,025 Y+28,5
239 C X+101,013 Y+28,5 DR+
240 CC X+99,975 Y+28,5
241 C X+98,938 Y+28,5 DR+
242 CC X+100,025 Y+28,5
243 C X+101,113 Y+28,5 DR+
244 CC X+99,975 Y+28,5
245 C X+98,838 Y+28,5 DR+
246 CC X+100,025 Y+28,5
247 C X+101,213 Y+28,5 DR+
248 CC X+99,975 Y+28,5
249 C X+98,738 Y+28,5 DR+
250 CC X+100,025 Y+28,5
251 C X+101,313 Y+28,5 DR+
252 CC X+99,975 Y+28,5
253 C X+98,638 Y+28,5 DR+
254 CC X+100,025 Y+28,5
255 C X+101,413 Y+28,5 DR+
256 CC X+99,975 Y+28,5
257 C X+98,538 Y+28,5 DR+
258 CC X+100,025 Y+28,5
259 C X+101,513 Y+28,5 DR+
260 CC X+99,975 Y+28,5
261 C X+98,438 Y+28,5 DR+
262 CC X+100,025 Y+28,5
263 C X+101,613 Y+28,5 DR+
264 CC X+99,975 Y+28,5
265 C X+98,338 Y+28,5 DR+
266 CC X+100,025 Y+28,5
267 C X+101,713 Y+28,5 DR+
268 CC X+99,975 Y+28,5
269 C X+98,238 Y+28,5 DR+
270 CC X+100,025 Y+28,5
271 C X+101,813 Y+28,5 DR+
272 CC X+99,975 Y+28,5
273 C X+98,138 Y+28,5 DR+
274 CC X+100,025 Y+28,5
275 C X+101,913 Y+28,5 DR+
276 CC X+99,975 Y+28,5
277 C X+98,038 Y+28,5 DR+
278 CC X+100,025 Y+28,5
279 C X+102,013 Y+28,5 DR+
280 CC X+99,975 Y+28,5
281 C X+97,938 Y+28,5 DR+
282 CC X+100,025 Y+28,5
283 C X+102,113 Y+28,5 DR+
284 CC X+99,975 Y+28,5
285 C X+97,838 Y+28,5 DR+
286 CC X+100,025 Y+28,5
287 C X+102,213 Y+28,5 DR+
288 CC X+99,975 Y+28,5
289 C X+97,738 Y+28,5 DR+
290 CC X+100,025 Y+28,5
291 C X+102,313 Y+28,5 DR+
292 CC X+99,975 Y+28,5
293 C X+97,638 Y+28,5 DR+
294 CC X+100,025 Y+28,5
295 C X+102,413 Y+28,5 DR+
296 CC X+99,975 Y+28,5
297 C X+97,538 Y+28,5 DR+
298 CC X+100,025 Y+28,5
299 C X+102,513 Y+28,5 DR+
300 CC X+99,975 Y+28,5
301 C X+97,438 Y+28,5 DR+
302 CC X+100,025 Y+28,5
303 C X+102,613 Y+28,5 DR+
304 CC X+99,975 Y+28,5
305 C X+97,338 Y+28,5 DR+
306 CC X+100,025 Y+28,5
307 C X+102,713 Y+28,5 DR+
308 CC X+99,975 Y+28,5
309 C X+97,238 Y+28,5 DR+
310 CC X+100,025 Y+28,5
311 C X+102,813 Y+28,5 DR+
312 CC X+99,975 Y+28,5
313 C X+97,138 Y+28,5 DR+
314 CC X+100,025 Y+28,5
315 C X+102,913 Y+28,5 DR+
316 CC X+99,975 Y+28,5
317 C X+97,038 Y+28,5 DR+
318 CC X+100,025 Y+28,5
319 C X+103,013 Y+28,5 DR+
320 CC X+99,975 Y+28,5
321 C X+96,938 Y+28,5 DR+
322 CC X+100,025 Y+28,5
323 C X+103,113 Y+28,5 DR+
324 CC X+99,975 Y+28,5
325 C X+96,838 Y+28,5 DR+
326 CC X+100,025 Y+28,5
327 C X+103,213 Y+28,5 DR+
328 CC X+99,975 Y+28,5
329 C X+96,738 Y+28,5 DR+
330 CC X+100,025 Y+28,5
331 C X+103,313 Y+28,5 DR+
332 CC X+99,975 Y+28,5
333 C X+96,638 Y+28,5 DR+
334 CC X+100,025 Y+28,5
335 C X+103,413 Y+28,5 DR+
336 CC X+99,975 Y+28,5
337 C X+96,538 Y+28,5 DR+
338 CC X+100,025 Y+28,5
339 C X+103,513 Y+28,5 DR+
340 CC X+99,975 Y+28,5
341 C X+96,438 Y+28,5 DR+
342 CC X+100,025 Y+28,5
343 C X+103,613 Y+28,5 DR+
344 CC X+99,975 Y+28,5
345 C X+96,338 Y+28,5 DR+
346 CC X+100,025 Y+28,5
347 C X+103,713 Y+28,5 DR+
348 CC X+99,975 Y+28,5
349 C X+98,116 Y+31,742 DR+
350 CC X+100 Y+28,5
351 C X+100 Y+24,75 DR+
352 CC X+100 Y+28,5
353 C X+98,116 Y+31,742 DR+
354 L Z+50 FMAX
355 L X+140 Y+28,5 FMAX
356 L Z+2 FMAX
357 L Z-10 F297
358 L X+140,013 F500
359 CC X+139,975 Y+28,5
360 C X+139,938 Y+28,5 DR+
361 CC X+140,025 Y+28,5
362 C X+140,113 Y+28,5 DR+
363 CC X+139,975 Y+28,5
364 C X+139,838 Y+28,5 DR+
365 CC X+140,025 Y+28,5
366 C X+140,213 Y+28,5 DR+
367 CC X+139,975 Y+28,5
368 C X+139,738 Y+28,5 DR+
369 CC X+140,025 Y+28,5
370 C X+140,313 Y+28,5 DR+
371 CC X+139,975 Y+28,5
372 C X+139,638 Y+28,5 DR+
373 CC X+140,025 Y+28,5
374 C X+140,413 Y+28,5 DR+
375 CC X+139,975 Y+28,5
376 C X+139,538 Y+28,5 DR+
377 CC X+140,025 Y+28,5
378 C X+140,513 Y+28,5 DR+
379 CC X+139,975 Y+28,5
380 C X+139,438 Y+28,5 DR+
381 CC X+140,025 Y+28,5
382 C X+140,613 Y+28,5 DR+
383 CC X+139,975 Y+28,5
384 C X+139,338 Y+28,5 DR+
385 CC X+140,025 Y+28,5
386 C X+140,713 Y+28,5 DR+
387 CC X+139,975 Y+28,5
388 C X+139,238 Y+28,5 DR+
389 CC X+140,025 Y+28,5
390 C X+140,813 Y+28,5 DR+
391 CC X+139,975 Y+28,5
392 C X+139,138 Y+28,5 DR+
393 CC X+140,025 Y+28,5
394 C X+140,913 Y+28,5 DR+
395 CC X+139,975 Y+28,5
396 C X+139,038 Y+28,5 DR+
397 CC X+140,025 Y+28,5
398 C X+141,013 Y+28,5 DR+
399 CC X+139,975 Y+28,5
400 C X+138,938 Y+28,5 DR+
401 CC X+140,025 Y+28,5
402 C X+141,113 Y+28,5 DR+
403 CC X+139,975 Y+28,5
404 C X+138,838 Y+28,5 DR+
405 CC X+140,025 Y+28,5
406 C X+141,213 Y+28,5 DR+
407 CC X+139,975 Y+28,5
408 C X+138,738 Y+28,5 DR+
409 CC X+140,025 Y+28,5
410 C X+141,313 Y+28,5 DR+
411 CC X+139,975 Y+28,5
412 C X+138,638 Y+28,5 DR+
413 CC X+140,025 Y+28,5
414 C X+141,413 Y+28,5 DR+
415 CC X+139,975 Y+28,5
416 C X+138,538 Y+28,5 DR+
417 CC X+140,025 Y+28,5
418 C X+141,513 Y+28,5 DR+
419 CC X+139,975 Y+28,5
420 C X+138,438 Y+28,5 DR+
421 CC X+140,025 Y+28,5
422 C X+141,613 Y+28,5 DR+
423 CC X+139,975 Y+28,5
424 C X+138,338 Y+28,5 DR+
425 CC X+140,025 Y+28,5
426 C X+141,713 Y+28,5 DR+
427 CC X+139,975 Y+28,5
428 C X+138,238 Y+28,5 DR+
429 CC X+140,025 Y+28,5
430 C X+141,813 Y+28,5 DR+
431 CC X+139,975 Y+28,5
432 C X+138,138 Y+28,5 DR+
433 CC X+140,025 Y+28,5
434 C X+141,913 Y+28,5 DR+
435 CC X+139,975 Y+28,5
436 C X+138,038 Y+28,5 DR+
437 CC X+140,025 Y+28,5
438 C X+142,013 Y+28,5 DR+
439 CC X+139,975 Y+28,5
440 C X+137,938 Y+28,5 DR+
441 CC X+140,025 Y+28,5
442 C X+142,113 Y+28,5 DR+
443 CC X+139,975 Y+28,5
444 C X+137,838 Y+28,5 DR+
445 CC X+140,025 Y+28,5
446 C X+142,213 Y+28,5 DR+
447 CC X+139,975 Y+28,5
448 C X+137,738 Y+28,5 DR+
449 CC X+140,025 Y+28,5
450 C X+142,313 Y+28,5 DR+
451 CC X+139,975 Y+28,5
452 C X+137,638 Y+28,5 DR+
453 CC X+140,025 Y+28,5
454 C X+142,413 Y+28,5 DR+
455 CC X+139,975 Y+28,5
456 C X+137,538 Y+28,5 DR+
457 CC X+140,025 Y+28,5
458 C X+142,513 Y+28,5 DR+
459 CC X+139,975 Y+28,5
460 C X+137,438 Y+28,5 DR+
461 CC X+140,025 Y+28,5
462 C X+142,613 Y+28,5 DR+
463 CC X+139,975 Y+28,5
464 C X+137,338 Y+28,5 DR+
465 CC X+140,025 Y+28,5
466 C X+142,713 Y+28,5 DR+
467 CC X+139,975 Y+28,5
468 C X+137,238 Y+28,5 DR+
469 CC X+140,025 Y+28,5
470 C X+142,813 Y+28,5 DR+
471 CC X+139,975 Y+28,5
472 C X+137,138 Y+28,5 DR+
473 CC X+140,025 Y+28,5
474 C X+142,913 Y+28,5 DR+
475 CC X+139,975 Y+28,5
476 C X+137,038 Y+28,5 DR+
477 CC X+140,025 Y+28,5
478 C X+143,013 Y+28,5 DR+
479 CC X+139,975 Y+28,5
480 C X+136,938 Y+28,5 DR+
481 CC X+140,025 Y+28,5
482 C X+143,113 Y+28,5 DR+
483 CC X+139,975 Y+28,5
484 C X+136,838 Y+28,5 DR+
485 CC X+140,025 Y+28,5
486 C X+143,213 Y+28,5 DR+
487 CC X+139,975 Y+28,5
488 C X+138,366 Y+31,309 DR+
489 CC X+140 Y+28,5
490 C X+140 Y+25,25 DR+
491 CC X+140 Y+28,5
492 C X+138,366 Y+31,309 DR+
493 L Z+50 FMAX
494 TOOL CALL 19 Z S6000 DR-3
495 L X-140 Y+28,5 Z+50 FMAX
496 L Z+2 FMAX
497 L Z-10 F297
498 L X-139,4 Y+30,55 RL F500
499 L Y+31,15
500 CC X-140 Y+31,15
501 C X-140 Y+31,75 DR+
502 CC X-140 Y+28,5
503 C X-140 Y+25,25 DR+
504 CC X-140 Y+28,5
505 C X-140 Y+31,75 DR+
506 CC X-140 Y+28,5
507 C X-140,984 Y+31,597 DR+
508 CC X-140 Y+28,5
509 C X-140 Y+25,25 DR+
510 CC X-140 Y+28,5
511 C X-140 Y+31,75 DR+
512 CC X-140 Y+28,5
513 C X-140,984 Y+31,597 DR+
514 CC X-140,803 Y+31,026
515 C X-141,374 Y+30,844 DR+
516 L X-141,193 Y+30,272
517 L X-140 Y+28,5 R0
518 L Z+50 FMAX
519 L X+100 FMAX
520 L Z+2 FMAX
521 L Z-10 F297
522 L X+100,6 Y+31,05 RL F500
523 L Y+31,65
524 CC X+100 Y+31,65
525 C X+100 Y+32,25 DR+
526 CC X+100 Y+28,5
527 C X+100 Y+24,75 DR+
528 CC X+100 Y+28,5
529 C X+100 Y+32,25 DR+
530 CC X+100 Y+28,5
531 C X+99,012 Y+32,117 DR+
532 CC X+100 Y+28,5
533 C X+100 Y+24,75 DR+
534 CC X+100 Y+28,5
535 C X+100 Y+32,25 DR+
536 CC X+100 Y+28,5
537 C X+99,012 Y+32,117 DR+
538 CC X+99,17 Y+31,539
539 C X+98,591 Y+31,381 DR+
540 L X+98,749 Y+30,802
541 L X+100 Y+28,5 R0
542 L Z+50 FMAX
543 L X+140 FMAX
544 L Z+2 FMAX
545 L Z-10 F297
546 L X+140,6 Y+30,55 RL F500
547 L Y+31,15
548 CC X+140 Y+31,15
549 C X+140 Y+31,75 DR+
550 CC X+140 Y+28,5
551 C X+140 Y+25,25 DR+
552 CC X+140 Y+28,5
553 C X+140 Y+31,75 DR+
554 CC X+140 Y+28,5
555 C X+139,016 Y+31,597 DR+
556 CC X+140 Y+28,5
557 C X+140 Y+25,25 DR+
558 CC X+140 Y+28,5
559 C X+140 Y+31,75 DR+
560 CC X+140 Y+28,5
561 C X+139,016 Y+31,597 DR+
562 CC X+139,197 Y+31,026
563 C X+138,626 Y+30,844 DR+
564 L X+138,807 Y+30,272
565 L X+140 Y+28,5 R0
566 L Z+50 FMAX
567 M9
568 M5
569 L Z-1 FMAX M91
570 L Y-1 FMAX M91
571 M30
572 END PGM REP24-20162-OP10-CALE DE CHOCS MATRICE-C MM
