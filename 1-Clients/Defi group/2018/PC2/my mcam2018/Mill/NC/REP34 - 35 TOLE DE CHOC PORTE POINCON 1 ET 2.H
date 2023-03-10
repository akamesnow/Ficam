0 BEGIN PGM REP34 - 35 TOLE DE CHOC PORTE POINCON 1 ET 2 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP34 - 35 TOLE DE CHOC PORTE POINCON 1 ET 2
4 ; PROG-CN DU 25-02-21 A 13:18
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T16 P15322391 TB SANS TROU FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-4*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 4
18 L X-96,5 Y+70,5 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X-96,5 Y+70,5 FMAX M99
23 L X-23,5 FMAX M99
24 L X+96,5 FMAX M99
25 L X+61,496 Y+47,5 FMAX M99
26 L X+14,496 Y+57,5 FMAX M99
27 L X-83,504 Y+52,5 FMAX M99
28 L X-96,5 Y-16,5 FMAX M99
29 L X-69,003 Y+9,914 FMAX M99
30 L X+6,697 Y+7,969 FMAX M99
31 L X+82,396 Y+6,024 FMAX M99
32 L X+96,5 Y-16,5 FMAX M99
33 L X+53,496 Y-18 FMAX M99
34 L X+82,464 Y-43,029 FMAX M99
35 L X+96,5 Y-70,5 FMAX M99
36 L X+6,5 FMAX M99
37 L X+15,748 Y-43,029 FMAX M99
38 L X-26,504 Y-53,5 FMAX M99
39 L X-78,504 Y-47,5 FMAX M99
40 L X-96,5 Y-70,5 FMAX M99
41 L Z+50 FMAX
42 M9
43 M5
44 L Z-1 FMAX M91
45 ; T4 DIA 11 VC 40 FORET DIAM=11. 2 DENTS A=118. ARS
46 TOOL CALL 4 Z S1400 DR+0
47 TOOL DEF 16
48 L X-96,5 Y+70,5 FMAX M3
49 L Z+50 FMAX M7
50 ;  DEBOURRAGE
51 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-16 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
52 L X-96,5 Y+70,5 FMAX M99
53 L X-23,5 FMAX M99
54 L X+96,5 FMAX M99
55 L X+61,496 Y+47,5 FMAX M99
56 L X+14,496 Y+57,5 FMAX M99
57 L X-83,504 Y+52,5 FMAX M99
58 L X-96,5 Y-16,5 FMAX M99
59 L X-69,003 Y+9,914 FMAX M99
60 L X+6,697 Y+7,969 FMAX M99
61 L X+82,396 Y+6,024 FMAX M99
62 L X+96,5 Y-16,5 FMAX M99
63 L X+53,496 Y-18 FMAX M99
64 L X+82,464 Y-43,029 FMAX M99
65 L X+96,5 Y-70,5 FMAX M99
66 L X+6,5 FMAX M99
67 L X+15,748 Y-43,029 FMAX M99
68 L X-26,504 Y-53,5 FMAX M99
69 L X-78,504 Y-47,5 FMAX M99
70 L X-96,5 Y-70,5 FMAX M99
71 L Z+50 FMAX
72 M9
73 M5
74 L Z-1 FMAX M91
75 ; T16 P15322391 TB SANS TROU FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
76 ; CORRECTION AUCUNE
77 ; SUREP R -0.05 SUREP Z 0.
78 TOOL CALL 16 Z S1592 DR+0
79 TOOL DEF 1
80 L X-81,81 Y+48,876 FMAX M3
81 L Z+50 FMAX M25
82 L Z+2 FMAX
83 L Z+0,5 F159
84 CC X-83,504 Y+52,5
85 CP IPA-180 Z-0,378 DR-
86 CC X-83,504 Y+52,5
87 CP IPA-180 Z-1,257 DR-
88 CC X-83,504 Y+52,5
89 CP IPA-180 Z-2,136 DR-
90 CC X-83,504 Y+52,5
91 CP IPA-180 Z-3,015 DR-
92 CC X-83,504 Y+52,5
93 CP IPA-180 Z-3,894 DR-
94 CC X-83,504 Y+52,5
95 CP IPA-180 Z-4,772 DR-
96 CC X-83,504 Y+52,5
97 CP IPA-180 Z-5,651 DR-
98 CC X-83,504 Y+52,5
99 CP IPA-180 Z-6,53 DR-
100 CC X-83,504 Y+52,5
101 CP IPA-180 Z-7,409 DR-
102 CC X-83,504 Y+52,5
103 CP IPA-180 Z-8,287 DR-
104 CC X-83,504 Y+52,5
105 CP IPA-180 Z-9,166 DR-
106 CC X-83,504 Y+52,5
107 CP IPA-180 Z-10,045 DR-
108 CC X-83,504 Y+52,5
109 CP IPA-180 Z-10,924 DR-
110 CC X-83,504 Y+52,5
111 CP IPA-180 Z-11,802 DR-
112 CC X-83,504 Y+52,5
113 CP IPA-180 Z-12,681 DR-
114 CC X-83,504 Y+52,5
115 CP IPA-180 Z-13,56 DR-
116 CC X-83,504 Y+52,5
117 CP IPA-295,053 Z-15 DR-
118 L X-82,904 Y+52,5
119 CC X-84,704 Y+52,5
120 C X-86,504 Y+52,5 DR+
121 CC X-82,304 Y+52,5
122 C X-81,628 Y+48,355 DR+
123 CC X-83,504 Y+52,5
124 C X-78,954 Y+52,5 DR+
125 CC X-83,504 Y+52,5
126 C X-81,628 Y+48,355 DR+
127 L Z+50 FMAX
128 L X+16,19 Y+53,876 FMAX
129 L Z+2 FMAX
130 L Z+0,5
131 CC X+14,496 Y+57,5
132 CP IPA-180 Z-0,378 DR-
133 CC X+14,496 Y+57,5
134 CP IPA-180 Z-1,257 DR-
135 CC X+14,496 Y+57,5
136 CP IPA-180 Z-2,136 DR-
137 CC X+14,496 Y+57,5
138 CP IPA-180 Z-3,015 DR-
139 CC X+14,496 Y+57,5
140 CP IPA-180 Z-3,894 DR-
141 CC X+14,496 Y+57,5
142 CP IPA-180 Z-4,772 DR-
143 CC X+14,496 Y+57,5
144 CP IPA-180 Z-5,651 DR-
145 CC X+14,496 Y+57,5
146 CP IPA-180 Z-6,53 DR-
147 CC X+14,496 Y+57,5
148 CP IPA-180 Z-7,409 DR-
149 CC X+14,496 Y+57,5
150 CP IPA-180 Z-8,287 DR-
151 CC X+14,496 Y+57,5
152 CP IPA-180 Z-9,166 DR-
153 CC X+14,496 Y+57,5
154 CP IPA-180 Z-10,045 DR-
155 CC X+14,496 Y+57,5
156 CP IPA-180 Z-10,924 DR-
157 CC X+14,496 Y+57,5
158 CP IPA-180 Z-11,802 DR-
159 CC X+14,496 Y+57,5
160 CP IPA-180 Z-12,681 DR-
161 CC X+14,496 Y+57,5
162 CP IPA-180 Z-13,56 DR-
163 CC X+14,496 Y+57,5
164 CP IPA-295,053 Z-15 DR-
165 L X+15,096 Y+57,5
166 CC X+13,296 Y+57,5
167 C X+11,496 Y+57,5 DR+
168 CC X+15,696 Y+57,5
169 C X+19,896 Y+57,5 DR+
170 CC X+13,296 Y+57,5
171 C X+6,696 Y+57,5 DR+
172 CC X+15,696 Y+57,5
173 C X+24,696 Y+57,5 DR+
174 CC X+13,296 Y+57,5
175 C X+1,896 Y+57,5 DR+
176 CC X+15,696 Y+57,5
177 C X+29,496 Y+57,5 DR+
178 CC X+13,296 Y+57,5
179 C X+22,495 Y+70,835 DR+
180 CC X+14,496 Y+57,5
181 C X+30,046 Y+57,5 DR+
182 CC X+14,496 Y+57,5
183 C X+22,495 Y+70,835 DR+
184 L Z+50 FMAX
185 L X+63,19 Y+43,876 FMAX
186 L Z+2 FMAX
187 L Z+0,5
188 CC X+61,496 Y+47,5
189 CP IPA-180 Z-0,378 DR-
190 CC X+61,496 Y+47,5
191 CP IPA-180 Z-1,257 DR-
192 CC X+61,496 Y+47,5
193 CP IPA-180 Z-2,136 DR-
194 CC X+61,496 Y+47,5
195 CP IPA-180 Z-3,015 DR-
196 CC X+61,496 Y+47,5
197 CP IPA-180 Z-3,894 DR-
198 CC X+61,496 Y+47,5
199 CP IPA-180 Z-4,772 DR-
200 CC X+61,496 Y+47,5
201 CP IPA-180 Z-5,651 DR-
202 CC X+61,496 Y+47,5
203 CP IPA-180 Z-6,53 DR-
204 CC X+61,496 Y+47,5
205 CP IPA-180 Z-7,409 DR-
206 CC X+61,496 Y+47,5
207 CP IPA-180 Z-8,287 DR-
208 CC X+61,496 Y+47,5
209 CP IPA-180 Z-9,166 DR-
210 CC X+61,496 Y+47,5
211 CP IPA-180 Z-10,045 DR-
212 CC X+61,496 Y+47,5
213 CP IPA-180 Z-10,924 DR-
214 CC X+61,496 Y+47,5
215 CP IPA-180 Z-11,802 DR-
216 CC X+61,496 Y+47,5
217 CP IPA-180 Z-12,681 DR-
218 CC X+61,496 Y+47,5
219 CP IPA-180 Z-13,56 DR-
220 CC X+61,496 Y+47,5
221 CP IPA-295,053 Z-15 DR-
222 L X+62,096 Y+47,5
223 CC X+60,296 Y+47,5
224 C X+58,496 Y+47,5 DR+
225 CC X+62,696 Y+47,5
226 C X+66,896 Y+47,5 DR+
227 CC X+60,296 Y+47,5
228 C X+61,17 Y+54,042 DR+
229 CC X+61,496 Y+47,5
230 C X+68,046 Y+47,5 DR+
231 CC X+61,496 Y+47,5
232 C X+61,17 Y+54,042 DR+
233 L Z+50 FMAX
234 L X+98,025 Y-16,016 FMAX
235 L Z+2 FMAX
236 L Z+0,5
237 CC X+96,5 Y-16,5
238 CP IPA-180 Z+0,148 DR-
239 CC X+96,5 Y-16,5
240 CP IPA-180 Z-0,203 DR-
241 CC X+96,5 Y-16,5
242 CP IPA-180 Z-0,554 DR-
243 CC X+96,5 Y-16,5
244 CP IPA-180 Z-0,906 DR-
245 CC X+96,5 Y-16,5
246 CP IPA-180 Z-1,258 DR-
247 CC X+96,5 Y-16,5
248 CP IPA-180 Z-1,609 DR-
249 CC X+96,5 Y-16,5
250 CP IPA-180 Z-1,96 DR-
251 CC X+96,5 Y-16,5
252 CP IPA-180 Z-2,312 DR-
253 CC X+96,5 Y-16,5
254 CP IPA-180 Z-2,664 DR-
255 CC X+96,5 Y-16,5
256 CP IPA-180 Z-3,015 DR-
257 CC X+96,5 Y-16,5
258 CP IPA-180 Z-3,367 DR-
259 CC X+96,5 Y-16,5
260 CP IPA-180 Z-3,718 DR-
261 CC X+96,5 Y-16,5
262 CP IPA-180 Z-4,069 DR-
263 CC X+96,5 Y-16,5
264 CP IPA-180 Z-4,421 DR-
265 CC X+96,5 Y-16,5
266 CP IPA-180 Z-4,773 DR-
267 CC X+96,5 Y-16,5
268 CP IPA-180 Z-5,124 DR-
269 CC X+96,5 Y-16,5
270 CP IPA-180 Z-5,476 DR-
271 CC X+96,5 Y-16,5
272 CP IPA-180 Z-5,827 DR-
273 CC X+96,5 Y-16,5
274 CP IPA-180 Z-6,178 DR-
275 CC X+96,5 Y-16,5
276 CP IPA-180 Z-6,53 DR-
277 CC X+96,5 Y-16,5
278 CP IPA-180 Z-6,882 DR-
279 CC X+96,5 Y-16,5
280 CP IPA-180 Z-7,233 DR-
281 CC X+96,5 Y-16,5
282 CP IPA-180 Z-7,585 DR-
283 CC X+96,5 Y-16,5
284 CP IPA-180 Z-7,936 DR-
285 CC X+96,5 Y-16,5
286 CP IPA-180 Z-8,287 DR-
287 CC X+96,5 Y-16,5
288 CP IPA-180 Z-8,639 DR-
289 CC X+96,5 Y-16,5
290 CP IPA-180 Z-8,991 DR-
291 CC X+96,5 Y-16,5
292 CP IPA-180 Z-9,342 DR-
293 CC X+96,5 Y-16,5
294 CP IPA-180 Z-9,694 DR-
295 CC X+96,5 Y-16,5
296 CP IPA-180 Z-10,045 DR-
297 CC X+96,5 Y-16,5
298 CP IPA-180 Z-10,397 DR-
299 CC X+96,5 Y-16,5
300 CP IPA-180 Z-10,748 DR-
301 CC X+96,5 Y-16,5
302 CP IPA-180 Z-11,099 DR-
303 CC X+96,5 Y-16,5
304 CP IPA-180 Z-11,451 DR-
305 CC X+96,5 Y-16,5
306 CP IPA-180 Z-11,803 DR-
307 CC X+96,5 Y-16,5
308 CP IPA-180 Z-12,154 DR-
309 CC X+96,5 Y-16,5
310 CP IPA-180 Z-12,506 DR-
311 CC X+96,5 Y-16,5
312 CP IPA-180 Z-12,857 DR-
313 CC X+96,5 Y-16,5
314 CP IPA-180 Z-13,209 DR-
315 CC X+96,5 Y-16,5
316 CP IPA-180 Z-13,56 DR-
317 CC X+96,5 Y-16,5
318 CP IPA-180 Z-13,912 DR-
319 CC X+96,5 Y-16,5
320 CP IPA-180 Z-14,263 DR-
321 CC X+96,5 Y-16,5
322 CP IPA-180 Z-14,615 DR-
323 CC X+96,5 Y-16,5
324 CP IPA-180 Z-14,966 DR-
325 CC X+96,5 Y-16,5
326 CP IPA-17,608 Z-15 DR-
327 L X+97,1 Y-16,5
328 CC X+95,3 Y-16,5
329 C X+95,324 Y-14,7 DR+
330 CC X+96,5 Y-16,5
331 C X+98,65 Y-16,5 DR+
332 CC X+96,5 Y-16,5
333 C X+95,324 Y-14,7 DR+
334 L Z+50 FMAX
335 L X+55,19 Y-21,624 FMAX
336 L Z+2 FMAX
337 L Z+0,5
338 CC X+53,496 Y-18
339 CP IPA-180 Z-0,378 DR-
340 CC X+53,496 Y-18
341 CP IPA-180 Z-1,257 DR-
342 CC X+53,496 Y-18
343 CP IPA-180 Z-2,136 DR-
344 CC X+53,496 Y-18
345 CP IPA-180 Z-3,015 DR-
346 CC X+53,496 Y-18
347 CP IPA-180 Z-3,894 DR-
348 CC X+53,496 Y-18
349 CP IPA-180 Z-4,772 DR-
350 CC X+53,496 Y-18
351 CP IPA-180 Z-5,651 DR-
352 CC X+53,496 Y-18
353 CP IPA-180 Z-6,53 DR-
354 CC X+53,496 Y-18
355 CP IPA-180 Z-7,409 DR-
356 CC X+53,496 Y-18
357 CP IPA-180 Z-8,287 DR-
358 CC X+53,496 Y-18
359 CP IPA-180 Z-9,166 DR-
360 CC X+53,496 Y-18
361 CP IPA-180 Z-10,045 DR-
362 CC X+53,496 Y-18
363 CP IPA-180 Z-10,924 DR-
364 CC X+53,496 Y-18
365 CP IPA-180 Z-11,802 DR-
366 CC X+53,496 Y-18
367 CP IPA-180 Z-12,681 DR-
368 CC X+53,496 Y-18
369 CP IPA-180 Z-13,56 DR-
370 CC X+53,496 Y-18
371 CP IPA-295,053 Z-15 DR-
372 L X+54,096 Y-18
373 CC X+52,296 Y-18
374 C X+50,496 Y-18 DR+
375 CC X+54,696 Y-18
376 C X+55,372 Y-22,145 DR+
377 CC X+53,496 Y-18
378 C X+58,046 Y-18 DR+
379 CC X+53,496 Y-18
380 C X+55,372 Y-22,145 DR+
381 L Z+50 FMAX
382 L X-24,81 Y-57,124 FMAX
383 L Z+2 FMAX
384 L Z+0,5
385 CC X-26,504 Y-53,5
386 CP IPA-180 Z-0,378 DR-
387 CC X-26,504 Y-53,5
388 CP IPA-180 Z-1,257 DR-
389 CC X-26,504 Y-53,5
390 CP IPA-180 Z-2,136 DR-
391 CC X-26,504 Y-53,5
392 CP IPA-180 Z-3,015 DR-
393 CC X-26,504 Y-53,5
394 CP IPA-180 Z-3,894 DR-
395 CC X-26,504 Y-53,5
396 CP IPA-180 Z-4,772 DR-
397 CC X-26,504 Y-53,5
398 CP IPA-180 Z-5,651 DR-
399 CC X-26,504 Y-53,5
400 CP IPA-180 Z-6,53 DR-
401 CC X-26,504 Y-53,5
402 CP IPA-180 Z-7,409 DR-
403 CC X-26,504 Y-53,5
404 CP IPA-180 Z-8,287 DR-
405 CC X-26,504 Y-53,5
406 CP IPA-180 Z-9,166 DR-
407 CC X-26,504 Y-53,5
408 CP IPA-180 Z-10,045 DR-
409 CC X-26,504 Y-53,5
410 CP IPA-180 Z-10,924 DR-
411 CC X-26,504 Y-53,5
412 CP IPA-180 Z-11,802 DR-
413 CC X-26,504 Y-53,5
414 CP IPA-180 Z-12,681 DR-
415 CC X-26,504 Y-53,5
416 CP IPA-180 Z-13,56 DR-
417 CC X-26,504 Y-53,5
418 CP IPA-295,053 Z-15 DR-
419 L X-25,904 Y-53,5
420 CC X-27,704 Y-53,5
421 C X-29,504 Y-53,5 DR+
422 CC X-25,304 Y-53,5
423 C X-21,104 Y-53,5 DR+
424 CC X-27,704 Y-53,5
425 C X-34,304 Y-53,5 DR+
426 CC X-25,304 Y-53,5
427 C X-16,304 Y-53,5 DR+
428 CC X-27,704 Y-53,5
429 C X-39,104 Y-53,5 DR+
430 CC X-25,304 Y-53,5
431 C X-11,504 Y-53,5 DR+
432 CC X-27,704 Y-53,5
433 C X-18,505 Y-40,165 DR+
434 CC X-26,504 Y-53,5
435 C X-10,954 Y-53,5 DR+
436 CC X-26,504 Y-53,5
437 C X-18,505 Y-40,165 DR+
438 L Z+50 FMAX
439 L X-76,81 Y-51,124 FMAX
440 L Z+2 FMAX
441 L Z+0,5
442 CC X-78,504 Y-47,5
443 CP IPA-180 Z-0,378 DR-
444 CC X-78,504 Y-47,5
445 CP IPA-180 Z-1,257 DR-
446 CC X-78,504 Y-47,5
447 CP IPA-180 Z-2,136 DR-
448 CC X-78,504 Y-47,5
449 CP IPA-180 Z-3,015 DR-
450 CC X-78,504 Y-47,5
451 CP IPA-180 Z-3,894 DR-
452 CC X-78,504 Y-47,5
453 CP IPA-180 Z-4,772 DR-
454 CC X-78,504 Y-47,5
455 CP IPA-180 Z-5,651 DR-
456 CC X-78,504 Y-47,5
457 CP IPA-180 Z-6,53 DR-
458 CC X-78,504 Y-47,5
459 CP IPA-180 Z-7,409 DR-
460 CC X-78,504 Y-47,5
461 CP IPA-180 Z-8,287 DR-
462 CC X-78,504 Y-47,5
463 CP IPA-180 Z-9,166 DR-
464 CC X-78,504 Y-47,5
465 CP IPA-180 Z-10,045 DR-
466 CC X-78,504 Y-47,5
467 CP IPA-180 Z-10,924 DR-
468 CC X-78,504 Y-47,5
469 CP IPA-180 Z-11,802 DR-
470 CC X-78,504 Y-47,5
471 CP IPA-180 Z-12,681 DR-
472 CC X-78,504 Y-47,5
473 CP IPA-180 Z-13,56 DR-
474 CC X-78,504 Y-47,5
475 CP IPA-295,053 Z-15 DR-
476 L X-77,904 Y-47,5
477 CC X-79,704 Y-47,5
478 C X-81,504 Y-47,5 DR+
479 CC X-77,304 Y-47,5
480 C X-73,104 Y-47,5 DR+
481 CC X-79,704 Y-47,5
482 C X-78,83 Y-40,958 DR+
483 CC X-78,504 Y-47,5
484 C X-71,954 Y-47,5 DR+
485 CC X-78,504 Y-47,5
486 C X-78,83 Y-40,958 DR+
487 L Z+50 FMAX
488 L X-94,975 Y-16,016 FMAX
489 L Z+2 FMAX
490 L Z+0,5
491 CC X-96,5 Y-16,5
492 CP IPA-180 Z+0,148 DR-
493 CC X-96,5 Y-16,5
494 CP IPA-180 Z-0,203 DR-
495 CC X-96,5 Y-16,5
496 CP IPA-180 Z-0,554 DR-
497 CC X-96,5 Y-16,5
498 CP IPA-180 Z-0,906 DR-
499 CC X-96,5 Y-16,5
500 CP IPA-180 Z-1,258 DR-
501 CC X-96,5 Y-16,5
502 CP IPA-180 Z-1,609 DR-
503 CC X-96,5 Y-16,5
504 CP IPA-180 Z-1,96 DR-
505 CC X-96,5 Y-16,5
506 CP IPA-180 Z-2,312 DR-
507 CC X-96,5 Y-16,5
508 CP IPA-180 Z-2,664 DR-
509 CC X-96,5 Y-16,5
510 CP IPA-180 Z-3,015 DR-
511 CC X-96,5 Y-16,5
512 CP IPA-180 Z-3,367 DR-
513 CC X-96,5 Y-16,5
514 CP IPA-180 Z-3,718 DR-
515 CC X-96,5 Y-16,5
516 CP IPA-180 Z-4,069 DR-
517 CC X-96,5 Y-16,5
518 CP IPA-180 Z-4,421 DR-
519 CC X-96,5 Y-16,5
520 CP IPA-180 Z-4,773 DR-
521 CC X-96,5 Y-16,5
522 CP IPA-180 Z-5,124 DR-
523 CC X-96,5 Y-16,5
524 CP IPA-180 Z-5,476 DR-
525 CC X-96,5 Y-16,5
526 CP IPA-180 Z-5,827 DR-
527 CC X-96,5 Y-16,5
528 CP IPA-180 Z-6,178 DR-
529 CC X-96,5 Y-16,5
530 CP IPA-180 Z-6,53 DR-
531 CC X-96,5 Y-16,5
532 CP IPA-180 Z-6,882 DR-
533 CC X-96,5 Y-16,5
534 CP IPA-180 Z-7,233 DR-
535 CC X-96,5 Y-16,5
536 CP IPA-180 Z-7,585 DR-
537 CC X-96,5 Y-16,5
538 CP IPA-180 Z-7,936 DR-
539 CC X-96,5 Y-16,5
540 CP IPA-180 Z-8,287 DR-
541 CC X-96,5 Y-16,5
542 CP IPA-180 Z-8,639 DR-
543 CC X-96,5 Y-16,5
544 CP IPA-180 Z-8,991 DR-
545 CC X-96,5 Y-16,5
546 CP IPA-180 Z-9,342 DR-
547 CC X-96,5 Y-16,5
548 CP IPA-180 Z-9,694 DR-
549 CC X-96,5 Y-16,5
550 CP IPA-180 Z-10,045 DR-
551 CC X-96,5 Y-16,5
552 CP IPA-180 Z-10,397 DR-
553 CC X-96,5 Y-16,5
554 CP IPA-180 Z-10,748 DR-
555 CC X-96,5 Y-16,5
556 CP IPA-180 Z-11,099 DR-
557 CC X-96,5 Y-16,5
558 CP IPA-180 Z-11,451 DR-
559 CC X-96,5 Y-16,5
560 CP IPA-180 Z-11,803 DR-
561 CC X-96,5 Y-16,5
562 CP IPA-180 Z-12,154 DR-
563 CC X-96,5 Y-16,5
564 CP IPA-180 Z-12,506 DR-
565 CC X-96,5 Y-16,5
566 CP IPA-180 Z-12,857 DR-
567 CC X-96,5 Y-16,5
568 CP IPA-180 Z-13,209 DR-
569 CC X-96,5 Y-16,5
570 CP IPA-180 Z-13,56 DR-
571 CC X-96,5 Y-16,5
572 CP IPA-180 Z-13,912 DR-
573 CC X-96,5 Y-16,5
574 CP IPA-180 Z-14,263 DR-
575 CC X-96,5 Y-16,5
576 CP IPA-180 Z-14,615 DR-
577 CC X-96,5 Y-16,5
578 CP IPA-180 Z-14,966 DR-
579 CC X-96,5 Y-16,5
580 CP IPA-17,608 Z-15 DR-
581 L X-95,9 Y-16,5
582 CC X-97,7 Y-16,5
583 C X-97,676 Y-14,7 DR+
584 CC X-96,5 Y-16,5
585 C X-94,35 Y-16,5 DR+
586 CC X-96,5 Y-16,5
587 C X-97,676 Y-14,7 DR+
588 L Z+50 FMAX
589 TOOL CALL 16 Z S1592 DR-4
590 L X-83,504 Y+52,5 Z+50 FMAX
591 L Z+2 FMAX
592 L Z-15
593 L X-86,454 Y+53,3 RL
594 L X-87,254
595 CC X-87,254 Y+52,5
596 C X-88,054 Y+52,5 DR+
597 CC X-83,504 Y+52,5
598 C X-78,954 Y+52,5 DR+
599 CC X-83,504 Y+52,5
600 C X-88,054 Y+52,5 DR+
601 CC X-83,504 Y+52,5
602 C X-87,621 Y+50,564 DR+
603 CC X-83,504 Y+52,5
604 C X-78,954 Y+52,5 DR+
605 CC X-83,504 Y+52,5
606 C X-88,054 Y+52,5 DR+
607 CC X-83,504 Y+52,5
608 C X-87,621 Y+50,564 DR+
609 CC X-86,897 Y+50,904
610 C X-86,557 Y+50,18 DR+
611 L X-85,833 Y+50,521
612 L X-83,504 Y+52,5 R0
613 L Z+50 FMAX
614 L X+14,496 Y+57,5 FMAX
615 L Z+2 FMAX
616 L Z-15
617 L X+0,546 Y+58,3 RL
618 L X-0,254
619 CC X-0,254 Y+57,5
620 C X-1,054 Y+57,5 DR+
621 CC X+14,496 Y+57,5
622 C X+30,046 Y+57,5 DR+
623 CC X+14,496 Y+57,5
624 C X-1,054 Y+57,5 DR+
625 CC X+14,496 Y+57,5
626 C X-0,925 Y+55,506 DR+
627 CC X+14,496 Y+57,5
628 C X+30,046 Y+57,5 DR+
629 CC X+14,496 Y+57,5
630 C X-1,054 Y+57,5 DR+
631 CC X+14,496 Y+57,5
632 C X-0,925 Y+55,506 DR+
633 CC X-0,132 Y+55,608
634 C X-0,029 Y+54,815 DR+
635 L X+0,764 Y+54,917
636 L X+14,496 Y+57,5 R0
637 L Z+50 FMAX
638 L X+61,496 Y+47,5 FMAX
639 L Z+2 FMAX
640 L Z-15
641 L X+56,546 Y+48,3 RL
642 L X+55,746
643 CC X+55,746 Y+47,5
644 C X+54,946 Y+47,5 DR+
645 CC X+61,496 Y+47,5
646 C X+68,046 Y+47,5 DR+
647 CC X+61,496 Y+47,5
648 C X+54,946 Y+47,5 DR+
649 CC X+61,496 Y+47,5
650 C X+55,249 Y+45,531 DR+
651 CC X+61,496 Y+47,5
652 C X+68,046 Y+47,5 DR+
653 CC X+61,496 Y+47,5
654 C X+54,946 Y+47,5 DR+
655 CC X+61,496 Y+47,5
656 C X+55,249 Y+45,531 DR+
657 CC X+56,012 Y+45,771
658 C X+56,253 Y+45,008 DR+
659 L X+57,016 Y+45,249
660 L X+61,496 Y+47,5 R0
661 L Z+50 FMAX
662 L X+96,5 Y-16,5 FMAX
663 L Z+2 FMAX
664 L Z-15
665 L X+95,95 Y-15,7 RL
666 L X+95,15
667 CC X+95,15 Y-16,5
668 C X+94,35 Y-16,5 DR+
669 CC X+96,5 Y-16,5
670 C X+98,65 Y-16,5 DR+
671 CC X+96,5 Y-16,5
672 C X+94,35 Y-16,5 DR+
673 CC X+96,5 Y-16,5
674 C X+95,215 Y-18,224 DR+
675 CC X+96,5 Y-16,5
676 C X+98,65 Y-16,5 DR+
677 CC X+96,5 Y-16,5
678 C X+94,35 Y-16,5 DR+
679 CC X+96,5 Y-16,5
680 C X+95,215 Y-18,224 DR+
681 CC X+95,693 Y-17,582
682 C X+96,335 Y-18,06 DR+
683 L X+96,813 Y-17,419
684 L X+96,5 Y-16,5 R0
685 L Z+50 FMAX
686 L X+53,496 Y-18 FMAX
687 L Z+2 FMAX
688 L Z-15
689 L X+50,546 Y-17,2 RL
690 L X+49,746
691 CC X+49,746 Y-18
692 C X+48,946 Y-18 DR+
693 CC X+53,496 Y-18
694 C X+58,046 Y-18 DR+
695 CC X+53,496 Y-18
696 C X+48,946 Y-18 DR+
697 CC X+53,496 Y-18
698 C X+49,379 Y-19,936 DR+
699 CC X+53,496 Y-18
700 C X+58,046 Y-18 DR+
701 CC X+53,496 Y-18
702 C X+48,946 Y-18 DR+
703 CC X+53,496 Y-18
704 C X+49,379 Y-19,936 DR+
705 CC X+50,103 Y-19,596
706 C X+50,443 Y-20,32 DR+
707 L X+51,167 Y-19,979
708 L X+53,496 Y-18 R0
709 L Z+50 FMAX
710 L X-26,504 Y-53,5 FMAX
711 L Z+2 FMAX
712 L Z-15
713 L X-40,454 Y-52,7 RL
714 L X-41,254
715 CC X-41,254 Y-53,5
716 C X-42,054 Y-53,5 DR+
717 CC X-26,504 Y-53,5
718 C X-10,954 Y-53,5 DR+
719 CC X-26,504 Y-53,5
720 C X-42,054 Y-53,5 DR+
721 CC X-26,504 Y-53,5
722 C X-41,925 Y-55,494 DR+
723 CC X-26,504 Y-53,5
724 C X-10,954 Y-53,5 DR+
725 CC X-26,504 Y-53,5
726 C X-42,054 Y-53,5 DR+
727 CC X-26,504 Y-53,5
728 C X-41,925 Y-55,494 DR+
729 CC X-41,132 Y-55,392
730 C X-41,029 Y-56,185 DR+
731 L X-40,236 Y-56,083
732 L X-26,504 Y-53,5 R0
733 L Z+50 FMAX
734 L X-78,504 Y-47,5 FMAX
735 L Z+2 FMAX
736 L Z-15
737 L X-83,454 Y-46,7 RL
738 L X-84,254
739 CC X-84,254 Y-47,5
740 C X-85,054 Y-47,5 DR+
741 CC X-78,504 Y-47,5
742 C X-71,954 Y-47,5 DR+
743 CC X-78,504 Y-47,5
744 C X-85,054 Y-47,5 DR+
745 CC X-78,504 Y-47,5
746 C X-84,751 Y-49,469 DR+
747 CC X-78,504 Y-47,5
748 C X-71,954 Y-47,5 DR+
749 CC X-78,504 Y-47,5
750 C X-85,054 Y-47,5 DR+
751 CC X-78,504 Y-47,5
752 C X-84,751 Y-49,469 DR+
753 CC X-83,988 Y-49,229
754 C X-83,747 Y-49,992 DR+
755 L X-82,984 Y-49,751
756 L X-78,504 Y-47,5 R0
757 L Z+50 FMAX
758 L X-96,5 Y-16,5 FMAX
759 L Z+2 FMAX
760 L Z-15
761 L X-97,05 Y-15,7 RL
762 L X-97,85
763 CC X-97,85 Y-16,5
764 C X-98,65 Y-16,5 DR+
765 CC X-96,5 Y-16,5
766 C X-94,35 Y-16,5 DR+
767 CC X-96,5 Y-16,5
768 C X-98,65 Y-16,5 DR+
769 CC X-96,5 Y-16,5
770 C X-97,785 Y-18,224 DR+
771 CC X-96,5 Y-16,5
772 C X-94,35 Y-16,5 DR+
773 CC X-96,5 Y-16,5
774 C X-98,65 Y-16,5 DR+
775 CC X-96,5 Y-16,5
776 C X-97,785 Y-18,224 DR+
777 CC X-97,307 Y-17,582
778 C X-96,665 Y-18,06 DR+
779 L X-96,187 Y-17,419
780 L X-96,5 Y-16,5 R0
781 L Z+50 FMAX
782 M78
783 M5
784 L Z-1 FMAX M91
785 L Y-1 FMAX M91
786 M30
787 END PGM REP34 - 35 TOLE DE CHOC PORTE POINCON 1 ET 2 MM
