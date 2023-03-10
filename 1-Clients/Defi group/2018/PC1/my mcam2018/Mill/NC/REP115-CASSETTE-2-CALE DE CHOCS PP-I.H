0 BEGIN PGM REP115-CASSETTE-2-CALE DE CHOCS PP-I MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP115-CASSETTE-2-CALE DE CHOCS PP-I
4 ; PROG-CN DU 20-01-20 A 09:51
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T13 DIA 9 CARBURE VC 40 DMF FORET DIAM=9. 2 DENTS A=118. ARS
10 ; T24 FRAISE DE FINITION DIA 8  FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 13
18 L X-36,113 Y-37,893 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,1 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X-36,113 Y-37,893 FMAX M99
23 L X-28,09 Y-7,95 FMAX M99
24 L X+49 Y+36 FMAX M99
25 L Y+52 FMAX M99
26 L X+40 Y-60 FMAX M99
27 L X-70 FMAX M99
28 L Y+60 FMAX M99
29 L X+70 FMAX M99
30 L X+0 Y-60 FMAX M99
31 L Y+60 FMAX M99
32 L Z+50 FMAX
33 M9
34 M5
35 L Z-1 FMAX M91
36 ; T13 DIA 9 CARBURE VC 40 DMF FORET DIAM=9. 2 DENTS A=118. ARS
37 TOOL CALL 13 Z S2000 DR+0
38 TOOL DEF 24
39 L X-36,113 Y-37,893 FMAX M3
40 L Z+50 FMAX M7
41 ;  DEBOURRAGE
42 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-12 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+2,25 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
43 L X-36,113 Y-37,893 FMAX M99
44 L X-28,09 Y-7,95 FMAX M99
45 L X+49 Y+36 FMAX M99
46 L Y+52 FMAX M99
47 L X+40 Y-60 FMAX M99
48 L X-70 FMAX M99
49 L Y+60 FMAX M99
50 L X+70 FMAX M99
51 L X+0 Y-60 FMAX M99
52 L Y+60 FMAX M99
53 L Z+50 FMAX
54 M9
55 M5
56 L Z-1 FMAX M91
57 ; T24 FRAISE DE FINITION DIA 8  FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
58 ; CORRECTION AUCUNE
59 ; SUREP R 0. SUREP Z 0.
60 TOOL CALL 24 Z S1800 DR+0
61 TOOL DEF 1
62 L X+0 Y+60 FMAX M3
63 L Z+50 FMAX M8
64 L Z+2 FMAX
65 L Z-10 F500
66 L X+0,025 F400
67 CC X-0,05 Y+60
68 C X-0,125 Y+60 DR+
69 CC X+0,05 Y+60
70 C X+0,225 Y+60 DR+
71 CC X-0,05 Y+60
72 C X-0,325 Y+60 DR+
73 CC X+0,05 Y+60
74 C X+0,425 Y+60 DR+
75 CC X-0,05 Y+60
76 C X-0,525 Y+60 DR+
77 CC X+0,05 Y+60
78 C X+0,625 Y+60 DR+
79 CC X-0,05 Y+60
80 C X-0,725 Y+60 DR+
81 CC X+0,05 Y+60
82 C X+0,825 Y+60 DR+
83 CC X-0,05 Y+60
84 C X-0,925 Y+60 DR+
85 CC X+0,05 Y+60
86 C X+1,025 Y+60 DR+
87 CC X-0,05 Y+60
88 C X-1,125 Y+60 DR+
89 CC X+0,05 Y+60
90 C X+1,225 Y+60 DR+
91 CC X-0,05 Y+60
92 C X-1,325 Y+60 DR+
93 CC X+0,05 Y+60
94 C X+1,425 Y+60 DR+
95 CC X-0,05 Y+60
96 C X-1,525 Y+60 DR+
97 CC X+0,05 Y+60
98 C X+1,625 Y+60 DR+
99 CC X-0,05 Y+60
100 C X-1,725 Y+60 DR+
101 CC X+0,05 Y+60
102 C X+1,825 Y+60 DR+
103 CC X-0,05 Y+60
104 C X-1,925 Y+60 DR+
105 CC X+0,05 Y+60
106 C X+2,025 Y+60 DR+
107 CC X-0,05 Y+60
108 C X-1,069 Y+61,808 DR+
109 CC X+0 Y+60
110 C X+2,1 Y+60 DR+
111 CC X+0 Y+60
112 C X-1,069 Y+61,808 DR+
113 L Z+50 FMAX
114 L X+0 Y-60 FMAX
115 L Z+2 FMAX
116 L Z-10 F500
117 L X+0,025 F400
118 CC X-0,05 Y-60
119 C X-0,125 Y-60 DR+
120 CC X+0,05 Y-60
121 C X+0,225 Y-60 DR+
122 CC X-0,05 Y-60
123 C X-0,325 Y-60 DR+
124 CC X+0,05 Y-60
125 C X+0,425 Y-60 DR+
126 CC X-0,05 Y-60
127 C X-0,525 Y-60 DR+
128 CC X+0,05 Y-60
129 C X+0,625 Y-60 DR+
130 CC X-0,05 Y-60
131 C X-0,725 Y-60 DR+
132 CC X+0,05 Y-60
133 C X+0,825 Y-60 DR+
134 CC X-0,05 Y-60
135 C X-0,925 Y-60 DR+
136 CC X+0,05 Y-60
137 C X+1,025 Y-60 DR+
138 CC X-0,05 Y-60
139 C X-1,125 Y-60 DR+
140 CC X+0,05 Y-60
141 C X+1,225 Y-60 DR+
142 CC X-0,05 Y-60
143 C X-1,325 Y-60 DR+
144 CC X+0,05 Y-60
145 C X+1,425 Y-60 DR+
146 CC X-0,05 Y-60
147 C X-1,525 Y-60 DR+
148 CC X+0,05 Y-60
149 C X+1,625 Y-60 DR+
150 CC X-0,05 Y-60
151 C X-1,725 Y-60 DR+
152 CC X+0,05 Y-60
153 C X+1,825 Y-60 DR+
154 CC X-0,05 Y-60
155 C X-1,925 Y-60 DR+
156 CC X+0,05 Y-60
157 C X+2,025 Y-60 DR+
158 CC X-0,05 Y-60
159 C X-1,069 Y-58,192 DR+
160 CC X+0 Y-60
161 C X+2,1 Y-60 DR+
162 CC X+0 Y-60
163 C X-1,069 Y-58,192 DR+
164 L Z+50 FMAX
165 L X-70 Y+60 FMAX
166 L Z+2 FMAX
167 L Z-10 F500
168 L X-69,975 F400
169 CC X-70,05 Y+60
170 C X-70,125 Y+60 DR+
171 CC X-69,95 Y+60
172 C X-69,775 Y+60 DR+
173 CC X-70,05 Y+60
174 C X-70,325 Y+60 DR+
175 CC X-69,95 Y+60
176 C X-69,575 Y+60 DR+
177 CC X-70,05 Y+60
178 C X-70,525 Y+60 DR+
179 CC X-69,95 Y+60
180 C X-69,375 Y+60 DR+
181 CC X-70,05 Y+60
182 C X-70,725 Y+60 DR+
183 CC X-69,95 Y+60
184 C X-69,175 Y+60 DR+
185 CC X-70,05 Y+60
186 C X-70,925 Y+60 DR+
187 CC X-69,95 Y+60
188 C X-68,975 Y+60 DR+
189 CC X-70,05 Y+60
190 C X-71,125 Y+60 DR+
191 CC X-69,95 Y+60
192 C X-68,775 Y+60 DR+
193 CC X-70,05 Y+60
194 C X-71,325 Y+60 DR+
195 CC X-69,95 Y+60
196 C X-68,575 Y+60 DR+
197 CC X-70,05 Y+60
198 C X-70,769 Y+61,288 DR+
199 CC X-70 Y+60
200 C X-68,5 Y+60 DR+
201 CC X-70 Y+60
202 C X-70,769 Y+61,288 DR+
203 L Z+50 FMAX
204 L X-70 Y-60 FMAX
205 L Z+2 FMAX
206 L Z-10 F500
207 L X-69,975 F400
208 CC X-70,05 Y-60
209 C X-70,125 Y-60 DR+
210 CC X-69,95 Y-60
211 C X-69,775 Y-60 DR+
212 CC X-70,05 Y-60
213 C X-70,325 Y-60 DR+
214 CC X-69,95 Y-60
215 C X-69,575 Y-60 DR+
216 CC X-70,05 Y-60
217 C X-70,525 Y-60 DR+
218 CC X-69,95 Y-60
219 C X-69,375 Y-60 DR+
220 CC X-70,05 Y-60
221 C X-70,725 Y-60 DR+
222 CC X-69,95 Y-60
223 C X-69,175 Y-60 DR+
224 CC X-70,05 Y-60
225 C X-70,925 Y-60 DR+
226 CC X-69,95 Y-60
227 C X-68,975 Y-60 DR+
228 CC X-70,05 Y-60
229 C X-71,125 Y-60 DR+
230 CC X-69,95 Y-60
231 C X-68,775 Y-60 DR+
232 CC X-70,05 Y-60
233 C X-71,325 Y-60 DR+
234 CC X-69,95 Y-60
235 C X-68,575 Y-60 DR+
236 CC X-70,05 Y-60
237 C X-70,769 Y-58,712 DR+
238 CC X-70 Y-60
239 C X-68,5 Y-60 DR+
240 CC X-70 Y-60
241 C X-70,769 Y-58,712 DR+
242 L Z+50 FMAX
243 L X+40 Y-60 FMAX
244 L Z+2 FMAX
245 L Z-10 F500
246 L X+40,025 F400
247 CC X+39,95 Y-60
248 C X+39,875 Y-60 DR+
249 CC X+40,05 Y-60
250 C X+40,225 Y-60 DR+
251 CC X+39,95 Y-60
252 C X+39,675 Y-60 DR+
253 CC X+40,05 Y-60
254 C X+40,425 Y-60 DR+
255 CC X+39,95 Y-60
256 C X+39,475 Y-60 DR+
257 CC X+40,05 Y-60
258 C X+40,625 Y-60 DR+
259 CC X+39,95 Y-60
260 C X+39,275 Y-60 DR+
261 CC X+40,05 Y-60
262 C X+40,825 Y-60 DR+
263 CC X+39,95 Y-60
264 C X+39,075 Y-60 DR+
265 CC X+40,05 Y-60
266 C X+41,025 Y-60 DR+
267 CC X+39,95 Y-60
268 C X+38,875 Y-60 DR+
269 CC X+40,05 Y-60
270 C X+41,225 Y-60 DR+
271 CC X+39,95 Y-60
272 C X+38,675 Y-60 DR+
273 CC X+40,05 Y-60
274 C X+41,425 Y-60 DR+
275 CC X+39,95 Y-60
276 C X+39,231 Y-58,712 DR+
277 CC X+40 Y-60
278 C X+41,5 Y-60 DR+
279 CC X+40 Y-60
280 C X+39,231 Y-58,712 DR+
281 L Z+50 FMAX
282 L X+70 Y+60 FMAX
283 L Z+2 FMAX
284 L Z-10 F500
285 L X+70,025 F400
286 CC X+69,95 Y+60
287 C X+69,875 Y+60 DR+
288 CC X+70,05 Y+60
289 C X+70,225 Y+60 DR+
290 CC X+69,95 Y+60
291 C X+69,675 Y+60 DR+
292 CC X+70,05 Y+60
293 C X+70,425 Y+60 DR+
294 CC X+69,95 Y+60
295 C X+69,475 Y+60 DR+
296 CC X+70,05 Y+60
297 C X+70,625 Y+60 DR+
298 CC X+69,95 Y+60
299 C X+69,275 Y+60 DR+
300 CC X+70,05 Y+60
301 C X+70,825 Y+60 DR+
302 CC X+69,95 Y+60
303 C X+69,075 Y+60 DR+
304 CC X+70,05 Y+60
305 C X+71,025 Y+60 DR+
306 CC X+69,95 Y+60
307 C X+68,875 Y+60 DR+
308 CC X+70,05 Y+60
309 C X+71,225 Y+60 DR+
310 CC X+69,95 Y+60
311 C X+68,675 Y+60 DR+
312 CC X+70,05 Y+60
313 C X+71,425 Y+60 DR+
314 CC X+69,95 Y+60
315 C X+69,231 Y+61,288 DR+
316 CC X+70 Y+60
317 C X+71,5 Y+60 DR+
318 CC X+70 Y+60
319 C X+69,231 Y+61,288 DR+
320 L Z+50 FMAX
321 TOOL CALL 24 Z S1800 DR-4
322 L X+0 Y+60 Z+50 FMAX
323 L Z+2 FMAX
324 L Z-10 F500
325 L X-0,5 Y+60,8 RL F400
326 L X-1,3
327 CC X-1,3 Y+60
328 C X-2,1 Y+60 DR+
329 CC X+0 Y+60
330 C X+2,1 Y+60 DR+
331 CC X+0 Y+60
332 C X-2,1 Y+60 DR+
333 CC X+0 Y+60
334 C X-1,866 Y+59,037 DR+
335 CC X+0 Y+60
336 C X+2,1 Y+60 DR+
337 CC X+0 Y+60
338 C X-2,1 Y+60 DR+
339 CC X+0 Y+60
340 C X-1,866 Y+59,037 DR+
341 CC X-1,155 Y+59,404
342 C X-0,789 Y+58,693 DR+
343 L X-0,078 Y+59,06
344 L X+0 Y+60 R0
345 L Z+50 FMAX
346 L Y-60 FMAX
347 L Z+2 FMAX
348 L Z-10 F500
349 L X-0,5 Y-59,2 RL F400
350 L X-1,3
351 CC X-1,3 Y-60
352 C X-2,1 Y-60 DR+
353 CC X+0 Y-60
354 C X+2,1 Y-60 DR+
355 CC X+0 Y-60
356 C X-2,1 Y-60 DR+
357 CC X+0 Y-60
358 C X-1,866 Y-60,963 DR+
359 CC X+0 Y-60
360 C X+2,1 Y-60 DR+
361 CC X+0 Y-60
362 C X-2,1 Y-60 DR+
363 CC X+0 Y-60
364 C X-1,866 Y-60,963 DR+
365 CC X-1,155 Y-60,596
366 C X-0,789 Y-61,307 DR+
367 L X-0,078 Y-60,94
368 L X+0 Y-60 R0
369 L Z+50 FMAX
370 L X-70 Y+60 FMAX
371 L Z+2 FMAX
372 L Z-10 F500
373 L X-69,9 Y+60,8 RL F400
374 L X-70,7
375 CC X-70,7 Y+60
376 C X-71,5 Y+60 DR+
377 CC X-70 Y+60
378 C X-68,5 Y+60 DR+
379 CC X-70 Y+60
380 C X-71,5 Y+60 DR+
381 CC X-70 Y+60
382 C X-71,179 Y+59,072 DR+
383 CC X-70 Y+60
384 C X-68,5 Y+60 DR+
385 CC X-70 Y+60
386 C X-71,5 Y+60 DR+
387 CC X-70 Y+60
388 C X-71,179 Y+59,072 DR+
389 CC X-70,55 Y+59,567
390 C X-70,055 Y+58,938 DR+
391 L X-69,427 Y+59,433
392 L X-70 Y+60 R0
393 L Z+50 FMAX
394 L Y-60 FMAX
395 L Z+2 FMAX
396 L Z-10 F500
397 L X-69,9 Y-59,2 RL F400
398 L X-70,7
399 CC X-70,7 Y-60
400 C X-71,5 Y-60 DR+
401 CC X-70 Y-60
402 C X-68,5 Y-60 DR+
403 CC X-70 Y-60
404 C X-71,5 Y-60 DR+
405 CC X-70 Y-60
406 C X-71,179 Y-60,928 DR+
407 CC X-70 Y-60
408 C X-68,5 Y-60 DR+
409 CC X-70 Y-60
410 C X-71,5 Y-60 DR+
411 CC X-70 Y-60
412 C X-71,179 Y-60,928 DR+
413 CC X-70,55 Y-60,433
414 C X-70,055 Y-61,062 DR+
415 L X-69,427 Y-60,567
416 L X-70 Y-60 R0
417 L Z+50 FMAX
418 L X+40 FMAX
419 L Z+2 FMAX
420 L Z-10 F500
421 L X+40,1 Y-59,2 RL F400
422 L X+39,3
423 CC X+39,3 Y-60
424 C X+38,5 Y-60 DR+
425 CC X+40 Y-60
426 C X+41,5 Y-60 DR+
427 CC X+40 Y-60
428 C X+38,5 Y-60 DR+
429 CC X+40 Y-60
430 C X+38,821 Y-60,928 DR+
431 CC X+40 Y-60
432 C X+41,5 Y-60 DR+
433 CC X+40 Y-60
434 C X+38,5 Y-60 DR+
435 CC X+40 Y-60
436 C X+38,821 Y-60,928 DR+
437 CC X+39,45 Y-60,433
438 C X+39,945 Y-61,062 DR+
439 L X+40,573 Y-60,567
440 L X+40 Y-60 R0
441 L Z+50 FMAX
442 L X+70 Y+60 FMAX
443 L Z+2 FMAX
444 L Z-10 F500
445 L X+70,1 Y+60,8 RL F400
446 L X+69,3
447 CC X+69,3 Y+60
448 C X+68,5 Y+60 DR+
449 CC X+70 Y+60
450 C X+71,5 Y+60 DR+
451 CC X+70 Y+60
452 C X+68,5 Y+60 DR+
453 CC X+70 Y+60
454 C X+68,821 Y+59,072 DR+
455 CC X+70 Y+60
456 C X+71,5 Y+60 DR+
457 CC X+70 Y+60
458 C X+68,5 Y+60 DR+
459 CC X+70 Y+60
460 C X+68,821 Y+59,072 DR+
461 CC X+69,45 Y+59,567
462 C X+69,945 Y+58,938 DR+
463 L X+70,573 Y+59,433
464 L X+70 Y+60 R0
465 L Z+50 FMAX
466 M9
467 M5
468 L Z-1 FMAX M91
469 L Y-1 FMAX M91
470 M30
471 END PGM REP115-CASSETTE-2-CALE DE CHOCS PP-I MM
