0 BEGIN PGM REP17-20981-OP20-B-CALE DE CHOCS PP-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP17-20981-OP20-B-CALE DE CHOCS PP-A
4 ; PROG-CN DU 07-09-20 A 15:08
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T19 DIA 6 AIR FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 2
18 L X+0 Y-37,5 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,8 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,8 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X+0 Y-37,5 FMAX M99
23 L Y+42,5 FMAX M99
24 L X-24 Y+19,5 FMAX M99
25 L X-42 Y-0,5 FMAX M99
26 L X+6,8 Y+16,5 FMAX M99
27 L X+40 Y+17,5 FMAX M99
28 L X-55 Y-37,5 FMAX M99
29 L X+55 FMAX M99
30 L Y+42,5 FMAX M99
31 L X-55 FMAX M99
32 L X+40 Y-11,7 FMAX M99
33 L Z+50 FMAX
34 M9
35 M5
36 L Z-1 FMAX M91
37 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
38 TOOL CALL 2 Z S2000 DR+0
39 TOOL DEF 19
40 L X+0 Y-37,5 FMAX M3
41 L Z+50 FMAX M7
42 ;  DEBOURRAGE
43 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-12 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
44 L X+0 Y-37,5 FMAX M99
45 L Y+42,5 FMAX M99
46 L X-24 Y+19,5 FMAX M99
47 L X-42 Y-0,5 FMAX M99
48 L X+6,8 Y+16,5 FMAX M99
49 L X+40 Y+17,5 FMAX M99
50 L X-55 Y-37,5 FMAX M99
51 L X+55 FMAX M99
52 L Y+42,5 FMAX M99
53 L X-55 FMAX M99
54 L X+40 Y-11,7 FMAX M99
55 L Z+50 FMAX
56 M9
57 M5
58 L Z-1 FMAX M91
59 ; T19 DIA 6 AIR FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
60 ; CORRECTION AUCUNE
61 ; SUREP R 0. SUREP Z 0.
62 TOOL CALL 19 Z S7427 DR+0
63 TOOL DEF 1
64 L X-55 Y+42,5 FMAX M3
65 L Z+50 FMAX M25
66 L Z+2 FMAX
67 L Z-10 F297
68 L X-54,975 F3565
69 CC X-55,05 Y+42,5
70 C X-55,125 Y+42,5 DR+
71 CC X-54,95 Y+42,5
72 C X-54,775 Y+42,5 DR+
73 CC X-55,05 Y+42,5
74 C X-55,325 Y+42,5 DR+
75 CC X-54,95 Y+42,5
76 C X-54,575 Y+42,5 DR+
77 CC X-55,05 Y+42,5
78 C X-55,525 Y+42,5 DR+
79 CC X-54,95 Y+42,5
80 C X-54,375 Y+42,5 DR+
81 CC X-55,05 Y+42,5
82 C X-55,725 Y+42,5 DR+
83 CC X-54,95 Y+42,5
84 C X-54,175 Y+42,5 DR+
85 CC X-55,05 Y+42,5
86 C X-55,925 Y+42,5 DR+
87 CC X-54,95 Y+42,5
88 C X-53,975 Y+42,5 DR+
89 CC X-55,05 Y+42,5
90 C X-56,125 Y+42,5 DR+
91 CC X-54,95 Y+42,5
92 C X-53,775 Y+42,5 DR+
93 CC X-55,05 Y+42,5
94 C X-56,325 Y+42,5 DR+
95 CC X-54,95 Y+42,5
96 C X-53,575 Y+42,5 DR+
97 CC X-55,05 Y+42,5
98 C X-56,525 Y+42,5 DR+
99 CC X-54,95 Y+42,5
100 C X-53,375 Y+42,5 DR+
101 CC X-55,05 Y+42,5
102 C X-56,725 Y+42,5 DR+
103 CC X-54,95 Y+42,5
104 C X-53,175 Y+42,5 DR+
105 CC X-55,05 Y+42,5
106 C X-56,925 Y+42,5 DR+
107 CC X-54,95 Y+42,5
108 C X-52,975 Y+42,5 DR+
109 CC X-55,05 Y+42,5
110 C X-57,125 Y+42,5 DR+
111 CC X-54,95 Y+42,5
112 C X-52,775 Y+42,5 DR+
113 CC X-55,05 Y+42,5
114 C X-57,325 Y+42,5 DR+
115 CC X-54,95 Y+42,5
116 C X-52,575 Y+42,5 DR+
117 CC X-55,05 Y+42,5
118 C X-57,525 Y+42,5 DR+
119 CC X-54,95 Y+42,5
120 C X-52,375 Y+42,5 DR+
121 CC X-55,05 Y+42,5
122 C X-57,725 Y+42,5 DR+
123 CC X-54,95 Y+42,5
124 C X-52,175 Y+42,5 DR+
125 CC X-55,05 Y+42,5
126 C X-57,925 Y+42,5 DR+
127 CC X-54,95 Y+42,5
128 C X-51,975 Y+42,5 DR+
129 CC X-55,05 Y+42,5
130 C X-58,125 Y+42,5 DR+
131 CC X-54,95 Y+42,5
132 C X-51,775 Y+42,5 DR+
133 CC X-55,05 Y+42,5
134 C X-58,325 Y+42,5 DR+
135 CC X-54,95 Y+42,5
136 C X-51,575 Y+42,5 DR+
137 CC X-55,05 Y+42,5
138 C X-58,525 Y+42,5 DR+
139 CC X-54,95 Y+42,5
140 C X-51,375 Y+42,5 DR+
141 CC X-55,05 Y+42,5
142 C X-58,725 Y+42,5 DR+
143 CC X-54,95 Y+42,5
144 C X-56,856 Y+39,242 DR+
145 CC X-55 Y+42,5
146 C X-51,25 Y+42,5 DR+
147 CC X-55 Y+42,5
148 C X-56,856 Y+39,242 DR+
149 L Z+50 FMAX
150 L X+0 Y+42,5 FMAX
151 L Z+2 FMAX
152 L Z-10 F297
153 L X+0,025 F3565
154 CC X-0,05 Y+42,5
155 C X-0,125 Y+42,5 DR+
156 CC X+0,05 Y+42,5
157 C X+0,225 Y+42,5 DR+
158 CC X-0,05 Y+42,5
159 C X-0,325 Y+42,5 DR+
160 CC X+0,05 Y+42,5
161 C X+0,425 Y+42,5 DR+
162 CC X-0,05 Y+42,5
163 C X-0,525 Y+42,5 DR+
164 CC X+0,05 Y+42,5
165 C X+0,625 Y+42,5 DR+
166 CC X-0,05 Y+42,5
167 C X-0,725 Y+42,5 DR+
168 CC X+0,05 Y+42,5
169 C X+0,825 Y+42,5 DR+
170 CC X-0,05 Y+42,5
171 C X-0,925 Y+42,5 DR+
172 CC X+0,05 Y+42,5
173 C X+1,025 Y+42,5 DR+
174 CC X-0,05 Y+42,5
175 C X-1,125 Y+42,5 DR+
176 CC X+0,05 Y+42,5
177 C X+1,225 Y+42,5 DR+
178 CC X-0,05 Y+42,5
179 C X-1,325 Y+42,5 DR+
180 CC X+0,05 Y+42,5
181 C X+1,425 Y+42,5 DR+
182 CC X-0,05 Y+42,5
183 C X-1,525 Y+42,5 DR+
184 CC X+0,05 Y+42,5
185 C X+1,625 Y+42,5 DR+
186 CC X-0,05 Y+42,5
187 C X-1,725 Y+42,5 DR+
188 CC X+0,05 Y+42,5
189 C X+1,825 Y+42,5 DR+
190 CC X-0,05 Y+42,5
191 C X-1,925 Y+42,5 DR+
192 CC X+0,05 Y+42,5
193 C X+2,025 Y+42,5 DR+
194 CC X-0,05 Y+42,5
195 C X-2,125 Y+42,5 DR+
196 CC X+0,05 Y+42,5
197 C X+2,225 Y+42,5 DR+
198 CC X-0,05 Y+42,5
199 C X-2,325 Y+42,5 DR+
200 CC X+0,05 Y+42,5
201 C X+2,425 Y+42,5 DR+
202 CC X-0,05 Y+42,5
203 C X-2,525 Y+42,5 DR+
204 CC X+0,05 Y+42,5
205 C X+2,625 Y+42,5 DR+
206 CC X-0,05 Y+42,5
207 C X-2,725 Y+42,5 DR+
208 CC X+0,05 Y+42,5
209 C X+2,825 Y+42,5 DR+
210 CC X-0,05 Y+42,5
211 C X-2,925 Y+42,5 DR+
212 CC X+0,05 Y+42,5
213 C X+3,025 Y+42,5 DR+
214 CC X-0,05 Y+42,5
215 C X-3,125 Y+42,5 DR+
216 CC X+0,05 Y+42,5
217 C X+3,225 Y+42,5 DR+
218 CC X-0,05 Y+42,5
219 C X-3,325 Y+42,5 DR+
220 CC X+0,05 Y+42,5
221 C X+3,425 Y+42,5 DR+
222 CC X-0,05 Y+42,5
223 C X-3,525 Y+42,5 DR+
224 CC X+0,05 Y+42,5
225 C X+3,625 Y+42,5 DR+
226 CC X-0,05 Y+42,5
227 C X-3,725 Y+42,5 DR+
228 CC X+0,05 Y+42,5
229 C X+3,825 Y+42,5 DR+
230 CC X-0,05 Y+42,5
231 C X-3,925 Y+42,5 DR+
232 CC X+0,05 Y+42,5
233 C X+4,025 Y+42,5 DR+
234 CC X-0,05 Y+42,5
235 C X-4,125 Y+42,5 DR+
236 CC X+0,05 Y+42,5
237 C X+4,225 Y+42,5 DR+
238 CC X-0,05 Y+42,5
239 C X-4,325 Y+42,5 DR+
240 CC X+0,05 Y+42,5
241 C X+4,425 Y+42,5 DR+
242 CC X-0,05 Y+42,5
243 C X-4,525 Y+42,5 DR+
244 CC X+0,05 Y+42,5
245 C X+4,625 Y+42,5 DR+
246 CC X-0,05 Y+42,5
247 C X-4,725 Y+42,5 DR+
248 CC X+0,05 Y+42,5
249 C X+4,825 Y+42,5 DR+
250 CC X-0,05 Y+42,5
251 C X-4,925 Y+42,5 DR+
252 CC X+0,05 Y+42,5
253 C X+5,025 Y+42,5 DR+
254 CC X-0,05 Y+42,5
255 C X-5,125 Y+42,5 DR+
256 CC X+0,05 Y+42,5
257 C X+5,225 Y+42,5 DR+
258 CC X-0,05 Y+42,5
259 C X+2,606 Y+47,057 DR+
260 CC X+0 Y+42,5
261 C X+5,25 Y+42,5 DR+
262 CC X+0 Y+42,5
263 C X+2,606 Y+47,057 DR+
264 L Z+50 FMAX
265 L X+55 Y+42,5 FMAX
266 L Z+2 FMAX
267 L Z-10 F297
268 L X+55,025 F3565
269 CC X+54,95 Y+42,5
270 C X+54,875 Y+42,5 DR+
271 CC X+55,05 Y+42,5
272 C X+55,225 Y+42,5 DR+
273 CC X+54,95 Y+42,5
274 C X+54,675 Y+42,5 DR+
275 CC X+55,05 Y+42,5
276 C X+55,425 Y+42,5 DR+
277 CC X+54,95 Y+42,5
278 C X+54,475 Y+42,5 DR+
279 CC X+55,05 Y+42,5
280 C X+55,625 Y+42,5 DR+
281 CC X+54,95 Y+42,5
282 C X+54,275 Y+42,5 DR+
283 CC X+55,05 Y+42,5
284 C X+55,825 Y+42,5 DR+
285 CC X+54,95 Y+42,5
286 C X+54,075 Y+42,5 DR+
287 CC X+55,05 Y+42,5
288 C X+56,025 Y+42,5 DR+
289 CC X+54,95 Y+42,5
290 C X+53,875 Y+42,5 DR+
291 CC X+55,05 Y+42,5
292 C X+56,225 Y+42,5 DR+
293 CC X+54,95 Y+42,5
294 C X+53,675 Y+42,5 DR+
295 CC X+55,05 Y+42,5
296 C X+56,425 Y+42,5 DR+
297 CC X+54,95 Y+42,5
298 C X+53,475 Y+42,5 DR+
299 CC X+55,05 Y+42,5
300 C X+56,625 Y+42,5 DR+
301 CC X+54,95 Y+42,5
302 C X+53,275 Y+42,5 DR+
303 CC X+55,05 Y+42,5
304 C X+56,825 Y+42,5 DR+
305 CC X+54,95 Y+42,5
306 C X+53,075 Y+42,5 DR+
307 CC X+55,05 Y+42,5
308 C X+57,025 Y+42,5 DR+
309 CC X+54,95 Y+42,5
310 C X+52,875 Y+42,5 DR+
311 CC X+55,05 Y+42,5
312 C X+57,225 Y+42,5 DR+
313 CC X+54,95 Y+42,5
314 C X+52,675 Y+42,5 DR+
315 CC X+55,05 Y+42,5
316 C X+57,425 Y+42,5 DR+
317 CC X+54,95 Y+42,5
318 C X+52,475 Y+42,5 DR+
319 CC X+55,05 Y+42,5
320 C X+57,625 Y+42,5 DR+
321 CC X+54,95 Y+42,5
322 C X+52,275 Y+42,5 DR+
323 CC X+55,05 Y+42,5
324 C X+57,825 Y+42,5 DR+
325 CC X+54,95 Y+42,5
326 C X+52,075 Y+42,5 DR+
327 CC X+55,05 Y+42,5
328 C X+58,025 Y+42,5 DR+
329 CC X+54,95 Y+42,5
330 C X+51,875 Y+42,5 DR+
331 CC X+55,05 Y+42,5
332 C X+58,225 Y+42,5 DR+
333 CC X+54,95 Y+42,5
334 C X+51,675 Y+42,5 DR+
335 CC X+55,05 Y+42,5
336 C X+58,425 Y+42,5 DR+
337 CC X+54,95 Y+42,5
338 C X+51,475 Y+42,5 DR+
339 CC X+55,05 Y+42,5
340 C X+58,625 Y+42,5 DR+
341 CC X+54,95 Y+42,5
342 C X+51,275 Y+42,5 DR+
343 CC X+55,05 Y+42,5
344 C X+53,144 Y+39,242 DR+
345 CC X+55 Y+42,5
346 C X+58,75 Y+42,5 DR+
347 CC X+55 Y+42,5
348 C X+53,144 Y+39,242 DR+
349 L Z+50 FMAX
350 L X+55 Y-37,5 FMAX
351 L Z+2 FMAX
352 L Z-10 F297
353 L X+55,025 F3565
354 CC X+54,95 Y-37,5
355 C X+54,875 Y-37,5 DR+
356 CC X+55,05 Y-37,5
357 C X+55,225 Y-37,5 DR+
358 CC X+54,95 Y-37,5
359 C X+54,675 Y-37,5 DR+
360 CC X+55,05 Y-37,5
361 C X+55,425 Y-37,5 DR+
362 CC X+54,95 Y-37,5
363 C X+54,475 Y-37,5 DR+
364 CC X+55,05 Y-37,5
365 C X+55,625 Y-37,5 DR+
366 CC X+54,95 Y-37,5
367 C X+54,275 Y-37,5 DR+
368 CC X+55,05 Y-37,5
369 C X+55,825 Y-37,5 DR+
370 CC X+54,95 Y-37,5
371 C X+54,075 Y-37,5 DR+
372 CC X+55,05 Y-37,5
373 C X+56,025 Y-37,5 DR+
374 CC X+54,95 Y-37,5
375 C X+53,875 Y-37,5 DR+
376 CC X+55,05 Y-37,5
377 C X+56,225 Y-37,5 DR+
378 CC X+54,95 Y-37,5
379 C X+53,675 Y-37,5 DR+
380 CC X+55,05 Y-37,5
381 C X+56,425 Y-37,5 DR+
382 CC X+54,95 Y-37,5
383 C X+53,475 Y-37,5 DR+
384 CC X+55,05 Y-37,5
385 C X+56,625 Y-37,5 DR+
386 CC X+54,95 Y-37,5
387 C X+53,275 Y-37,5 DR+
388 CC X+55,05 Y-37,5
389 C X+56,825 Y-37,5 DR+
390 CC X+54,95 Y-37,5
391 C X+53,075 Y-37,5 DR+
392 CC X+55,05 Y-37,5
393 C X+57,025 Y-37,5 DR+
394 CC X+54,95 Y-37,5
395 C X+52,875 Y-37,5 DR+
396 CC X+55,05 Y-37,5
397 C X+57,225 Y-37,5 DR+
398 CC X+54,95 Y-37,5
399 C X+52,675 Y-37,5 DR+
400 CC X+55,05 Y-37,5
401 C X+57,425 Y-37,5 DR+
402 CC X+54,95 Y-37,5
403 C X+52,475 Y-37,5 DR+
404 CC X+55,05 Y-37,5
405 C X+57,625 Y-37,5 DR+
406 CC X+54,95 Y-37,5
407 C X+52,275 Y-37,5 DR+
408 CC X+55,05 Y-37,5
409 C X+57,825 Y-37,5 DR+
410 CC X+54,95 Y-37,5
411 C X+52,075 Y-37,5 DR+
412 CC X+55,05 Y-37,5
413 C X+58,025 Y-37,5 DR+
414 CC X+54,95 Y-37,5
415 C X+51,875 Y-37,5 DR+
416 CC X+55,05 Y-37,5
417 C X+58,225 Y-37,5 DR+
418 CC X+54,95 Y-37,5
419 C X+51,675 Y-37,5 DR+
420 CC X+55,05 Y-37,5
421 C X+58,425 Y-37,5 DR+
422 CC X+54,95 Y-37,5
423 C X+51,475 Y-37,5 DR+
424 CC X+55,05 Y-37,5
425 C X+58,625 Y-37,5 DR+
426 CC X+54,95 Y-37,5
427 C X+51,275 Y-37,5 DR+
428 CC X+55,05 Y-37,5
429 C X+53,144 Y-40,758 DR+
430 CC X+55 Y-37,5
431 C X+58,75 Y-37,5 DR+
432 CC X+55 Y-37,5
433 C X+53,144 Y-40,758 DR+
434 L Z+50 FMAX
435 L X+0 Y-37,5 FMAX
436 L Z+2 FMAX
437 L Z-10 F297
438 L X+0,025 F3565
439 CC X-0,05 Y-37,5
440 C X-0,125 Y-37,5 DR+
441 CC X+0,05 Y-37,5
442 C X+0,225 Y-37,5 DR+
443 CC X-0,05 Y-37,5
444 C X-0,325 Y-37,5 DR+
445 CC X+0,05 Y-37,5
446 C X+0,425 Y-37,5 DR+
447 CC X-0,05 Y-37,5
448 C X-0,525 Y-37,5 DR+
449 CC X+0,05 Y-37,5
450 C X+0,625 Y-37,5 DR+
451 CC X-0,05 Y-37,5
452 C X-0,725 Y-37,5 DR+
453 CC X+0,05 Y-37,5
454 C X+0,825 Y-37,5 DR+
455 CC X-0,05 Y-37,5
456 C X-0,925 Y-37,5 DR+
457 CC X+0,05 Y-37,5
458 C X+1,025 Y-37,5 DR+
459 CC X-0,05 Y-37,5
460 C X-1,125 Y-37,5 DR+
461 CC X+0,05 Y-37,5
462 C X+1,225 Y-37,5 DR+
463 CC X-0,05 Y-37,5
464 C X-1,325 Y-37,5 DR+
465 CC X+0,05 Y-37,5
466 C X+1,425 Y-37,5 DR+
467 CC X-0,05 Y-37,5
468 C X-1,525 Y-37,5 DR+
469 CC X+0,05 Y-37,5
470 C X+1,625 Y-37,5 DR+
471 CC X-0,05 Y-37,5
472 C X-1,725 Y-37,5 DR+
473 CC X+0,05 Y-37,5
474 C X+1,825 Y-37,5 DR+
475 CC X-0,05 Y-37,5
476 C X-1,925 Y-37,5 DR+
477 CC X+0,05 Y-37,5
478 C X+2,025 Y-37,5 DR+
479 CC X-0,05 Y-37,5
480 C X-2,125 Y-37,5 DR+
481 CC X+0,05 Y-37,5
482 C X+2,225 Y-37,5 DR+
483 CC X-0,05 Y-37,5
484 C X-2,325 Y-37,5 DR+
485 CC X+0,05 Y-37,5
486 C X+2,425 Y-37,5 DR+
487 CC X-0,05 Y-37,5
488 C X-2,525 Y-37,5 DR+
489 CC X+0,05 Y-37,5
490 C X+2,625 Y-37,5 DR+
491 CC X-0,05 Y-37,5
492 C X-2,725 Y-37,5 DR+
493 CC X+0,05 Y-37,5
494 C X+2,825 Y-37,5 DR+
495 CC X-0,05 Y-37,5
496 C X-2,925 Y-37,5 DR+
497 CC X+0,05 Y-37,5
498 C X+3,025 Y-37,5 DR+
499 CC X-0,05 Y-37,5
500 C X-3,125 Y-37,5 DR+
501 CC X+0,05 Y-37,5
502 C X+3,225 Y-37,5 DR+
503 CC X-0,05 Y-37,5
504 C X-3,325 Y-37,5 DR+
505 CC X+0,05 Y-37,5
506 C X+3,425 Y-37,5 DR+
507 CC X-0,05 Y-37,5
508 C X-3,525 Y-37,5 DR+
509 CC X+0,05 Y-37,5
510 C X+3,625 Y-37,5 DR+
511 CC X-0,05 Y-37,5
512 C X-3,725 Y-37,5 DR+
513 CC X+0,05 Y-37,5
514 C X+3,825 Y-37,5 DR+
515 CC X-0,05 Y-37,5
516 C X-3,925 Y-37,5 DR+
517 CC X+0,05 Y-37,5
518 C X+4,025 Y-37,5 DR+
519 CC X-0,05 Y-37,5
520 C X-4,125 Y-37,5 DR+
521 CC X+0,05 Y-37,5
522 C X+4,225 Y-37,5 DR+
523 CC X-0,05 Y-37,5
524 C X-4,325 Y-37,5 DR+
525 CC X+0,05 Y-37,5
526 C X+4,425 Y-37,5 DR+
527 CC X-0,05 Y-37,5
528 C X-4,525 Y-37,5 DR+
529 CC X+0,05 Y-37,5
530 C X+4,625 Y-37,5 DR+
531 CC X-0,05 Y-37,5
532 C X-4,725 Y-37,5 DR+
533 CC X+0,05 Y-37,5
534 C X+4,825 Y-37,5 DR+
535 CC X-0,05 Y-37,5
536 C X-4,925 Y-37,5 DR+
537 CC X+0,05 Y-37,5
538 C X+5,025 Y-37,5 DR+
539 CC X-0,05 Y-37,5
540 C X-5,125 Y-37,5 DR+
541 CC X+0,05 Y-37,5
542 C X+5,225 Y-37,5 DR+
543 CC X-0,05 Y-37,5
544 C X+2,606 Y-32,943 DR+
545 CC X+0 Y-37,5
546 C X+5,25 Y-37,5 DR+
547 CC X+0 Y-37,5
548 C X+2,606 Y-32,943 DR+
549 L Z+50 FMAX
550 L X-55 Y-37,5 FMAX
551 L Z+2 FMAX
552 L Z-10 F297
553 L X-54,975 F3565
554 CC X-55,05 Y-37,5
555 C X-55,125 Y-37,5 DR+
556 CC X-54,95 Y-37,5
557 C X-54,775 Y-37,5 DR+
558 CC X-55,05 Y-37,5
559 C X-55,325 Y-37,5 DR+
560 CC X-54,95 Y-37,5
561 C X-54,575 Y-37,5 DR+
562 CC X-55,05 Y-37,5
563 C X-55,525 Y-37,5 DR+
564 CC X-54,95 Y-37,5
565 C X-54,375 Y-37,5 DR+
566 CC X-55,05 Y-37,5
567 C X-55,725 Y-37,5 DR+
568 CC X-54,95 Y-37,5
569 C X-54,175 Y-37,5 DR+
570 CC X-55,05 Y-37,5
571 C X-55,925 Y-37,5 DR+
572 CC X-54,95 Y-37,5
573 C X-53,975 Y-37,5 DR+
574 CC X-55,05 Y-37,5
575 C X-56,125 Y-37,5 DR+
576 CC X-54,95 Y-37,5
577 C X-53,775 Y-37,5 DR+
578 CC X-55,05 Y-37,5
579 C X-56,325 Y-37,5 DR+
580 CC X-54,95 Y-37,5
581 C X-53,575 Y-37,5 DR+
582 CC X-55,05 Y-37,5
583 C X-56,525 Y-37,5 DR+
584 CC X-54,95 Y-37,5
585 C X-53,375 Y-37,5 DR+
586 CC X-55,05 Y-37,5
587 C X-56,725 Y-37,5 DR+
588 CC X-54,95 Y-37,5
589 C X-53,175 Y-37,5 DR+
590 CC X-55,05 Y-37,5
591 C X-56,925 Y-37,5 DR+
592 CC X-54,95 Y-37,5
593 C X-52,975 Y-37,5 DR+
594 CC X-55,05 Y-37,5
595 C X-57,125 Y-37,5 DR+
596 CC X-54,95 Y-37,5
597 C X-52,775 Y-37,5 DR+
598 CC X-55,05 Y-37,5
599 C X-57,325 Y-37,5 DR+
600 CC X-54,95 Y-37,5
601 C X-52,575 Y-37,5 DR+
602 CC X-55,05 Y-37,5
603 C X-57,525 Y-37,5 DR+
604 CC X-54,95 Y-37,5
605 C X-52,375 Y-37,5 DR+
606 CC X-55,05 Y-37,5
607 C X-57,725 Y-37,5 DR+
608 CC X-54,95 Y-37,5
609 C X-52,175 Y-37,5 DR+
610 CC X-55,05 Y-37,5
611 C X-57,925 Y-37,5 DR+
612 CC X-54,95 Y-37,5
613 C X-51,975 Y-37,5 DR+
614 CC X-55,05 Y-37,5
615 C X-58,125 Y-37,5 DR+
616 CC X-54,95 Y-37,5
617 C X-51,775 Y-37,5 DR+
618 CC X-55,05 Y-37,5
619 C X-58,325 Y-37,5 DR+
620 CC X-54,95 Y-37,5
621 C X-51,575 Y-37,5 DR+
622 CC X-55,05 Y-37,5
623 C X-58,525 Y-37,5 DR+
624 CC X-54,95 Y-37,5
625 C X-51,375 Y-37,5 DR+
626 CC X-55,05 Y-37,5
627 C X-58,725 Y-37,5 DR+
628 CC X-54,95 Y-37,5
629 C X-56,856 Y-40,758 DR+
630 CC X-55 Y-37,5
631 C X-51,25 Y-37,5 DR+
632 CC X-55 Y-37,5
633 C X-56,856 Y-40,758 DR+
634 L Z+50 FMAX
635 TOOL CALL 19 Z S7427 DR-3
636 L X-55 Y+42,5 Z+50 FMAX
637 L Z+2 FMAX
638 L Z-10 F297
639 L X-57,55 Y+43,1 RL F3565
640 L X-58,15
641 CC X-58,15 Y+42,5
642 C X-58,75 Y+42,5 DR+
643 CC X-55 Y+42,5
644 C X-51,25 Y+42,5 DR+
645 CC X-55 Y+42,5
646 C X-58,75 Y+42,5 DR+
647 CC X-55 Y+42,5
648 C X-58,617 Y+41,512 DR+
649 CC X-58,039 Y+41,67
650 C X-57,881 Y+41,091 DR+
651 L X-57,302 Y+41,249
652 L X-55 Y+42,5 R0
653 L Z+50 FMAX
654 L X+0 FMAX
655 L Z+2 FMAX
656 L Z-10 F297
657 L X-4,05 Y+43,1 RL F3565
658 L X-4,65
659 CC X-4,65 Y+42,5
660 C X-5,25 Y+42,5 DR+
661 CC X+0 Y+42,5
662 C X+5,25 Y+42,5 DR+
663 CC X+0 Y+42,5
664 C X-5,25 Y+42,5 DR+
665 CC X+0 Y+42,5
666 C X-5,155 Y+41,506 DR+
667 CC X-4,566 Y+41,62
668 C X-4,452 Y+41,03 DR+
669 L X-3,863 Y+41,144
670 L X+0 Y+42,5 R0
671 L Z+50 FMAX
672 L X+55 FMAX
673 L Z+2 FMAX
674 L Z-10 F297
675 L X+52,45 Y+43,1 RL F3565
676 L X+51,85
677 CC X+51,85 Y+42,5
678 C X+51,25 Y+42,5 DR+
679 CC X+55 Y+42,5
680 C X+58,75 Y+42,5 DR+
681 CC X+55 Y+42,5
682 C X+51,25 Y+42,5 DR+
683 CC X+55 Y+42,5
684 C X+51,383 Y+41,512 DR+
685 CC X+51,961 Y+41,67
686 C X+52,119 Y+41,091 DR+
687 L X+52,698 Y+41,249
688 L X+55 Y+42,5 R0
689 L Z+50 FMAX
690 L Y-37,5 FMAX
691 L Z+2 FMAX
692 L Z-10 F297
693 L X+52,45 Y-36,9 RL F3565
694 L X+51,85
695 CC X+51,85 Y-37,5
696 C X+51,25 Y-37,5 DR+
697 CC X+55 Y-37,5
698 C X+58,75 Y-37,5 DR+
699 CC X+55 Y-37,5
700 C X+51,25 Y-37,5 DR+
701 CC X+55 Y-37,5
702 C X+51,383 Y-38,488 DR+
703 CC X+51,961 Y-38,33
704 C X+52,119 Y-38,909 DR+
705 L X+52,698 Y-38,751
706 L X+55 Y-37,5 R0
707 L Z+50 FMAX
708 L X+0 FMAX
709 L Z+2 FMAX
710 L Z-10 F297
711 L X-4,05 Y-36,9 RL F3565
712 L X-4,65
713 CC X-4,65 Y-37,5
714 C X-5,25 Y-37,5 DR+
715 CC X+0 Y-37,5
716 C X+5,25 Y-37,5 DR+
717 CC X+0 Y-37,5
718 C X-5,25 Y-37,5 DR+
719 CC X+0 Y-37,5
720 C X-5,155 Y-38,494 DR+
721 CC X-4,566 Y-38,38
722 C X-4,452 Y-38,97 DR+
723 L X-3,863 Y-38,856
724 L X+0 Y-37,5 R0
725 L Z+50 FMAX
726 L X-55 FMAX
727 L Z+2 FMAX
728 L Z-10 F297
729 L X-57,55 Y-36,9 RL F3565
730 L X-58,15
731 CC X-58,15 Y-37,5
732 C X-58,75 Y-37,5 DR+
733 CC X-55 Y-37,5
734 C X-51,25 Y-37,5 DR+
735 CC X-55 Y-37,5
736 C X-58,75 Y-37,5 DR+
737 CC X-55 Y-37,5
738 C X-58,617 Y-38,488 DR+
739 CC X-58,039 Y-38,33
740 C X-57,881 Y-38,909 DR+
741 L X-57,302 Y-38,751
742 L X-55 Y-37,5 R0
743 L Z+50 FMAX
744 M78
745 M5
746 L Z-1 FMAX M91
747 L Y-1 FMAX M91
748 M30
749 END PGM REP17-20981-OP20-B-CALE DE CHOCS PP-A MM
