0 BEGIN PGM REP 16 21294 OP 10 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP 16 21294 OP 10
4 ; PROG-CN DU 10-05-22 A 10:34
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T10 GUHRING 1685 XC48 ALESOIR DIAM=20. 5 DENTS ARS
9 ; T23 P15323610 XC48 POCHE SANS TROU FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-2*
17 ; T10 GUHRING 1685 XC48 ALESOIR DIAM=20. 5 DENTS ARS
18 TOOL CALL 10 Z S1920 DR+0
19 TOOL DEF 23
20 L X-37,055 Y+349,994 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-95 ; PROFONDEUR~
    Q206=2600 ; AVANCE PLONGEE PROF.~
    Q202=+95 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-37,055 Y+349,994 FMAX M99
25 L X+562,945 Y+350,088 FMAX M99
26 L Z+50 FMAX
27 M9
28 M5
29 L Z-1 FMAX M91
30 ; T23 P15323610 XC48 POCHE SANS TROU FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
31 ; CORRECTION AUCUNE
32 ; SUREP R 0. SUREP Z 0.
33 TOOL CALL 23 Z S2387 DR+0
34 TOOL DEF 1
35 L X-39,133 Y+353,412 FMAX M3
36 L Z+50 FMAX M25
37 L Z+2 FMAX
38 L Z+0,5 F477
39 CC X-37,055 Y+349,994
40 CP IPA-180 Z-0,378 DR-
41 CC X-37,055 Y+349,994
42 CP IPA-180 Z-1,257 DR-
43 CC X-37,055 Y+349,994
44 CP IPA-180 Z-2,136 DR-
45 CC X-37,055 Y+349,994
46 CP IPA-180 Z-3,015 DR-
47 CC X-37,055 Y+349,994
48 CP IPA-180 Z-3,894 DR-
49 CC X-37,055 Y+349,994
50 CP IPA-180 Z-4,772 DR-
51 CC X-37,055 Y+349,994
52 CP IPA-180 Z-5,651 DR-
53 CC X-37,055 Y+349,994
54 CP IPA-180 Z-6,53 DR-
55 CC X-37,055 Y+349,994
56 CP IPA-180 Z-7,409 DR-
57 CC X-37,055 Y+349,994
58 CP IPA-180 Z-8,287 DR-
59 CC X-37,055 Y+349,994
60 CP IPA-180 Z-9,166 DR-
61 CC X-37,055 Y+349,994
62 CP IPA-180 Z-10,045 DR-
63 CC X-37,055 Y+349,994
64 CP IPA-180 Z-10,924 DR-
65 CC X-37,055 Y+349,994
66 CP IPA-180 Z-11,802 DR-
67 CC X-37,055 Y+349,994
68 CP IPA-180 Z-12,681 DR-
69 CC X-37,055 Y+349,994
70 CP IPA-180 Z-13,56 DR-
71 CC X-37,055 Y+349,994
72 CP IPA-180 Z-14,439 DR-
73 CC X-37,055 Y+349,994
74 CP IPA-180 Z-15,317 DR-
75 CC X-37,055 Y+349,994
76 CP IPA-180 Z-16,196 DR-
77 CC X-37,055 Y+349,994
78 CP IPA-180 Z-17,075 DR-
79 CC X-37,055 Y+349,994
80 CP IPA-121,298 Z-17,667 DR-
81 L X-36,595 Y+349,994
82 CC X-37,975 Y+349,994
83 C X-39,355 Y+349,994 DR+
84 CC X-36,135 Y+349,994
85 C X-32,915 Y+349,994 DR+
86 CC X-37,975 Y+349,994
87 C X-37,187 Y+354,992 DR+
88 CC X-37,055 Y+349,994
89 C X-37,056 Y+354,994 DR+
90 CC X-37,055 Y+349,994
91 C X-37,187 Y+354,992 DR+
92 L Z+10 FMAX
93 L X-39,133 Y+353,412 FMAX
94 L Z-15,667 FMAX
95 L Z-17,167
96 CC X-37,055 Y+349,994
97 CP IPA-180 Z-18,046 DR-
98 CC X-37,055 Y+349,994
99 CP IPA-180 Z-18,924 DR-
100 CC X-37,055 Y+349,994
101 CP IPA-180 Z-19,803 DR-
102 CC X-37,055 Y+349,994
103 CP IPA-180 Z-20,682 DR-
104 CC X-37,055 Y+349,994
105 CP IPA-180 Z-21,56 DR-
106 CC X-37,055 Y+349,994
107 CP IPA-180 Z-22,439 DR-
108 CC X-37,055 Y+349,994
109 CP IPA-180 Z-23,318 DR-
110 CC X-37,055 Y+349,994
111 CP IPA-180 Z-24,196 DR-
112 CC X-37,055 Y+349,994
113 CP IPA-180 Z-25,075 DR-
114 CC X-37,055 Y+349,994
115 CP IPA-180 Z-25,954 DR-
116 CC X-37,055 Y+349,994
117 CP IPA-180 Z-26,833 DR-
118 CC X-37,055 Y+349,994
119 CP IPA-180 Z-27,711 DR-
120 CC X-37,055 Y+349,994
121 CP IPA-180 Z-28,59 DR-
122 CC X-37,055 Y+349,994
123 CP IPA-180 Z-29,469 DR-
124 CC X-37,055 Y+349,994
125 CP IPA-180 Z-30,348 DR-
126 CC X-37,055 Y+349,994
127 CP IPA-180 Z-31,226 DR-
128 CC X-37,055 Y+349,994
129 CP IPA-180 Z-32,105 DR-
130 CC X-37,055 Y+349,994
131 CP IPA-180 Z-32,984 DR-
132 CC X-37,055 Y+349,994
133 CP IPA-180 Z-33,862 DR-
134 CC X-37,055 Y+349,994
135 CP IPA-180 Z-34,741 DR-
136 CC X-37,055 Y+349,994
137 CP IPA-121,298 Z-35,333 DR-
138 L X-36,595 Y+349,994
139 CC X-37,975 Y+349,994
140 C X-39,355 Y+349,994 DR+
141 CC X-36,135 Y+349,994
142 C X-32,915 Y+349,994 DR+
143 CC X-37,975 Y+349,994
144 C X-37,187 Y+354,992 DR+
145 CC X-37,055 Y+349,994
146 C X-37,056 Y+354,994 DR+
147 CC X-37,055 Y+349,994
148 C X-37,187 Y+354,992 DR+
149 L Z+10 FMAX
150 L X-39,133 Y+353,412 FMAX
151 L Z-33,333 FMAX
152 L Z-34,833
153 CC X-37,055 Y+349,994
154 CP IPA-180 Z-35,712 DR-
155 CC X-37,055 Y+349,994
156 CP IPA-180 Z-36,591 DR-
157 CC X-37,055 Y+349,994
158 CP IPA-180 Z-37,469 DR-
159 CC X-37,055 Y+349,994
160 CP IPA-180 Z-38,348 DR-
161 CC X-37,055 Y+349,994
162 CP IPA-180 Z-39,227 DR-
163 CC X-37,055 Y+349,994
164 CP IPA-180 Z-40,106 DR-
165 CC X-37,055 Y+349,994
166 CP IPA-180 Z-40,984 DR-
167 CC X-37,055 Y+349,994
168 CP IPA-180 Z-41,863 DR-
169 CC X-37,055 Y+349,994
170 CP IPA-180 Z-42,742 DR-
171 CC X-37,055 Y+349,994
172 CP IPA-180 Z-43,621 DR-
173 CC X-37,055 Y+349,994
174 CP IPA-180 Z-44,499 DR-
175 CC X-37,055 Y+349,994
176 CP IPA-180 Z-45,378 DR-
177 CC X-37,055 Y+349,994
178 CP IPA-180 Z-46,257 DR-
179 CC X-37,055 Y+349,994
180 CP IPA-180 Z-47,136 DR-
181 CC X-37,055 Y+349,994
182 CP IPA-180 Z-48,014 DR-
183 CC X-37,055 Y+349,994
184 CP IPA-180 Z-48,893 DR-
185 CC X-37,055 Y+349,994
186 CP IPA-180 Z-49,772 DR-
187 CC X-37,055 Y+349,994
188 CP IPA-180 Z-50,65 DR-
189 CC X-37,055 Y+349,994
190 CP IPA-180 Z-51,529 DR-
191 CC X-37,055 Y+349,994
192 CP IPA-180 Z-52,408 DR-
193 CC X-37,055 Y+349,994
194 CP IPA-121,298 Z-53 DR-
195 L X-36,595 Y+349,994
196 CC X-37,975 Y+349,994
197 C X-39,355 Y+349,994 DR+
198 CC X-36,135 Y+349,994
199 C X-32,915 Y+349,994 DR+
200 CC X-37,975 Y+349,994
201 C X-37,187 Y+354,992 DR+
202 CC X-37,055 Y+349,994
203 C X-37,056 Y+354,994 DR+
204 CC X-37,055 Y+349,994
205 C X-37,187 Y+354,992 DR+
206 L Z+50 FMAX
207 L X+560,867 Y+353,506 FMAX
208 L Z+2 FMAX
209 L Z+0,5
210 CC X+562,945 Y+350,088
211 CP IPA-180 Z-0,378 DR-
212 CC X+562,945 Y+350,088
213 CP IPA-180 Z-1,257 DR-
214 CC X+562,945 Y+350,088
215 CP IPA-180 Z-2,136 DR-
216 CC X+562,945 Y+350,088
217 CP IPA-180 Z-3,015 DR-
218 CC X+562,945 Y+350,088
219 CP IPA-180 Z-3,894 DR-
220 CC X+562,945 Y+350,088
221 CP IPA-180 Z-4,772 DR-
222 CC X+562,945 Y+350,088
223 CP IPA-180 Z-5,651 DR-
224 CC X+562,945 Y+350,088
225 CP IPA-180 Z-6,53 DR-
226 CC X+562,945 Y+350,088
227 CP IPA-180 Z-7,409 DR-
228 CC X+562,945 Y+350,088
229 CP IPA-180 Z-8,287 DR-
230 CC X+562,945 Y+350,088
231 CP IPA-180 Z-9,166 DR-
232 CC X+562,945 Y+350,088
233 CP IPA-180 Z-10,045 DR-
234 CC X+562,945 Y+350,088
235 CP IPA-180 Z-10,924 DR-
236 CC X+562,945 Y+350,088
237 CP IPA-180 Z-11,802 DR-
238 CC X+562,945 Y+350,088
239 CP IPA-180 Z-12,681 DR-
240 CC X+562,945 Y+350,088
241 CP IPA-180 Z-13,56 DR-
242 CC X+562,945 Y+350,088
243 CP IPA-180 Z-14,439 DR-
244 CC X+562,945 Y+350,088
245 CP IPA-180 Z-15,317 DR-
246 CC X+562,945 Y+350,088
247 CP IPA-180 Z-16,196 DR-
248 CC X+562,945 Y+350,088
249 CP IPA-180 Z-17,075 DR-
250 CC X+562,945 Y+350,088
251 CP IPA-121,298 Z-17,667 DR-
252 L X+563,405 Y+350,088
253 CC X+562,025 Y+350,088
254 C X+560,645 Y+350,088 DR+
255 CC X+563,865 Y+350,088
256 C X+567,085 Y+350,088 DR+
257 CC X+562,025 Y+350,088
258 C X+562,813 Y+355,087 DR+
259 CC X+562,945 Y+350,088
260 C X+562,944 Y+355,088 DR+
261 CC X+562,945 Y+350,088
262 C X+562,813 Y+355,087 DR+
263 L Z+10 FMAX
264 L X+560,867 Y+353,506 FMAX
265 L Z-15,667 FMAX
266 L Z-17,167
267 CC X+562,945 Y+350,088
268 CP IPA-180 Z-18,046 DR-
269 CC X+562,945 Y+350,088
270 CP IPA-180 Z-18,924 DR-
271 CC X+562,945 Y+350,088
272 CP IPA-180 Z-19,803 DR-
273 CC X+562,945 Y+350,088
274 CP IPA-180 Z-20,682 DR-
275 CC X+562,945 Y+350,088
276 CP IPA-180 Z-21,56 DR-
277 CC X+562,945 Y+350,088
278 CP IPA-180 Z-22,439 DR-
279 CC X+562,945 Y+350,088
280 CP IPA-180 Z-23,318 DR-
281 CC X+562,945 Y+350,088
282 CP IPA-180 Z-24,196 DR-
283 CC X+562,945 Y+350,088
284 CP IPA-180 Z-25,075 DR-
285 CC X+562,945 Y+350,088
286 CP IPA-180 Z-25,954 DR-
287 CC X+562,945 Y+350,088
288 CP IPA-180 Z-26,833 DR-
289 CC X+562,945 Y+350,088
290 CP IPA-180 Z-27,711 DR-
291 CC X+562,945 Y+350,088
292 CP IPA-180 Z-28,59 DR-
293 CC X+562,945 Y+350,088
294 CP IPA-180 Z-29,469 DR-
295 CC X+562,945 Y+350,088
296 CP IPA-180 Z-30,348 DR-
297 CC X+562,945 Y+350,088
298 CP IPA-180 Z-31,226 DR-
299 CC X+562,945 Y+350,088
300 CP IPA-180 Z-32,105 DR-
301 CC X+562,945 Y+350,088
302 CP IPA-180 Z-32,984 DR-
303 CC X+562,945 Y+350,088
304 CP IPA-180 Z-33,862 DR-
305 CC X+562,945 Y+350,088
306 CP IPA-180 Z-34,741 DR-
307 CC X+562,945 Y+350,088
308 CP IPA-121,298 Z-35,333 DR-
309 L X+563,405 Y+350,088
310 CC X+562,025 Y+350,088
311 C X+560,645 Y+350,088 DR+
312 CC X+563,865 Y+350,088
313 C X+567,085 Y+350,088 DR+
314 CC X+562,025 Y+350,088
315 C X+562,813 Y+355,087 DR+
316 CC X+562,945 Y+350,088
317 C X+562,944 Y+355,088 DR+
318 CC X+562,945 Y+350,088
319 C X+562,813 Y+355,087 DR+
320 L Z+10 FMAX
321 L X+560,867 Y+353,506 FMAX
322 L Z-33,333 FMAX
323 L Z-34,833
324 CC X+562,945 Y+350,088
325 CP IPA-180 Z-35,712 DR-
326 CC X+562,945 Y+350,088
327 CP IPA-180 Z-36,591 DR-
328 CC X+562,945 Y+350,088
329 CP IPA-180 Z-37,469 DR-
330 CC X+562,945 Y+350,088
331 CP IPA-180 Z-38,348 DR-
332 CC X+562,945 Y+350,088
333 CP IPA-180 Z-39,227 DR-
334 CC X+562,945 Y+350,088
335 CP IPA-180 Z-40,106 DR-
336 CC X+562,945 Y+350,088
337 CP IPA-180 Z-40,984 DR-
338 CC X+562,945 Y+350,088
339 CP IPA-180 Z-41,863 DR-
340 CC X+562,945 Y+350,088
341 CP IPA-180 Z-42,742 DR-
342 CC X+562,945 Y+350,088
343 CP IPA-180 Z-43,621 DR-
344 CC X+562,945 Y+350,088
345 CP IPA-180 Z-44,499 DR-
346 CC X+562,945 Y+350,088
347 CP IPA-180 Z-45,378 DR-
348 CC X+562,945 Y+350,088
349 CP IPA-180 Z-46,257 DR-
350 CC X+562,945 Y+350,088
351 CP IPA-180 Z-47,136 DR-
352 CC X+562,945 Y+350,088
353 CP IPA-180 Z-48,014 DR-
354 CC X+562,945 Y+350,088
355 CP IPA-180 Z-48,893 DR-
356 CC X+562,945 Y+350,088
357 CP IPA-180 Z-49,772 DR-
358 CC X+562,945 Y+350,088
359 CP IPA-180 Z-50,65 DR-
360 CC X+562,945 Y+350,088
361 CP IPA-180 Z-51,529 DR-
362 CC X+562,945 Y+350,088
363 CP IPA-180 Z-52,408 DR-
364 CC X+562,945 Y+350,088
365 CP IPA-121,298 Z-53 DR-
366 L X+563,405 Y+350,088
367 CC X+562,025 Y+350,088
368 C X+560,645 Y+350,088 DR+
369 CC X+563,865 Y+350,088
370 C X+567,085 Y+350,088 DR+
371 CC X+562,025 Y+350,088
372 C X+562,813 Y+355,087 DR+
373 CC X+562,945 Y+350,088
374 C X+562,944 Y+355,088 DR+
375 CC X+562,945 Y+350,088
376 C X+562,813 Y+355,087 DR+
377 L Z+50 FMAX
378 TOOL CALL 23 Z S2387 DR-8
379 L X-37,055 Y+349,994 Z+50 FMAX
380 L Z-33,333 FMAX
381 L Z-53
382 L X-38,655 Y+348,194 RL
383 L X-38,654 Y+346,594
384 CC X-37,054 Y+346,594
385 C X-37,054 Y+344,994 DR+
386 CC X-37,055 Y+349,994
387 C X-37,056 Y+354,994 DR+
388 CC X-37,055 Y+349,994
389 C X-37,054 Y+344,994 DR+
390 CC X-37,055 Y+349,994
391 C X-34,231 Y+345,868 DR+
392 CC X-37,055 Y+349,994
393 C X-37,056 Y+354,994 DR+
394 CC X-37,055 Y+349,994
395 C X-37,054 Y+344,994 DR+
396 CC X-37,055 Y+349,994
397 C X-34,231 Y+345,868 DR+
398 CC X-35,135 Y+347,188
399 C X-33,814 Y+348,092 DR+
400 L X-34,718 Y+349,412
401 L X-37,055 Y+349,994 R0
402 L Z+50 FMAX
403 L X+562,945 Y+350,088 FMAX
404 L Z-33,333 FMAX
405 L Z-53
406 L X+561,345 Y+348,288 RL
407 L X+561,346 Y+346,688
408 CC X+562,946 Y+346,688
409 C X+562,946 Y+345,088 DR+
410 CC X+562,945 Y+350,088
411 C X+562,944 Y+355,088 DR+
412 CC X+562,945 Y+350,088
413 C X+562,946 Y+345,088 DR+
414 CC X+562,945 Y+350,088
415 C X+565,769 Y+345,962 DR+
416 CC X+562,945 Y+350,088
417 C X+562,944 Y+355,088 DR+
418 CC X+562,945 Y+350,088
419 C X+562,946 Y+345,088 DR+
420 CC X+562,945 Y+350,088
421 C X+565,769 Y+345,962 DR+
422 CC X+564,865 Y+347,283
423 C X+566,186 Y+348,186 DR+
424 L X+565,282 Y+349,507
425 L X+562,945 Y+350,088 R0
426 L Z+50 FMAX
427 M78
428 M5
429 L Z-1 FMAX M91
430 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
431 ; CORRECTION USURE GAUCHE
432 ; SUREP R 0. SUREP Z 0.
433 TOOL CALL 1 Z S6000 DR-2,5
434 TOOL DEF 20
435 L X-37,055 Y+349,994 FMAX M3
436 L Z+50 FMAX
437 L Z+2 FMAX
438 L Z-2,5 F800
439 L X-37,553 Y+340,494 RL F1200
440 L Y+339,994
441 CC X-37,053 Y+339,994
442 C X-37,053 Y+339,494 DR+
443 CC X-37,055 Y+349,994
444 C X-37,057 Y+360,494 DR+
445 CC X-37,055 Y+349,994
446 C X-37,053 Y+339,494 DR+
447 CC X-37,055 Y+349,994
448 C X-34,094 Y+339,92 DR+
449 CC X-34,235 Y+340,4
450 C X-33,755 Y+340,541 DR+
451 L X-33,896 Y+341,021
452 L X-37,055 Y+349,994 R0
453 L Z+50 FMAX
454 L X+562,945 Y+350,088 FMAX
455 L Z+2 FMAX
456 L Z-2,5 F800
457 L X+562,447 Y+340,588 RL F1200
458 L Y+340,088
459 CC X+562,947 Y+340,088
460 C X+562,947 Y+339,588 DR+
461 CC X+562,945 Y+350,088
462 C X+562,943 Y+360,588 DR+
463 CC X+562,945 Y+350,088
464 C X+562,947 Y+339,588 DR+
465 CC X+562,945 Y+350,088
466 C X+565,906 Y+340,015 DR+
467 CC X+565,765 Y+340,494
468 C X+566,245 Y+340,635 DR+
469 L X+566,104 Y+341,115
470 L X+562,945 Y+350,088 R0
471 L Z+50 FMAX
472 L X+451,003 Y+259,763 FMAX
473 L Z+2 FMAX
474 L Z-2,5 F800
475 L X+455,503 Y+259,264 RL F1200
476 L X+456,003
477 CC X+456,003 Y+259,764
478 C X+456,503 Y+259,764 DR+
479 CC X+451,003 Y+259,763
480 C X+445,503 Y+259,762 DR+
481 CC X+451,003 Y+259,763
482 C X+456,503 Y+259,764 DR+
483 CC X+451,003 Y+259,763
484 C X+455,704 Y+262,617 DR+
485 CC X+455,277 Y+262,358
486 C X+455,017 Y+262,785 DR+
487 L X+454,59 Y+262,526
488 L X+451,003 Y+259,763 R0
489 L Z+50 FMAX
490 L X+453,871 Y+61,763 FMAX
491 L Z+2 FMAX
492 L Z-2,5 F800
493 L X+458,371 Y+61,264 RL F1200
494 L X+458,871
495 CC X+458,871 Y+61,764
496 C X+459,371 Y+61,764 DR+
497 CC X+453,871 Y+61,763
498 C X+448,371 Y+61,763 DR+
499 CC X+453,871 Y+61,763
500 C X+459,371 Y+61,764 DR+
501 CC X+453,871 Y+61,763
502 C X+458,573 Y+64,618 DR+
503 CC X+458,145 Y+64,358
504 C X+457,886 Y+64,786 DR+
505 L X+457,458 Y+64,526
506 L X+453,871 Y+61,763 R0
507 L Z+50 FMAX
508 L X+85,029 Y+90,705 FMAX
509 L Z+2 FMAX
510 L Z-2,5 F800
511 L X+84,53 Y+86,205 RL F1200
512 L Y+85,705
513 CC X+85,03 Y+85,705
514 C X+85,03 Y+85,205 DR+
515 CC X+85,029 Y+90,705
516 C X+85,029 Y+96,205 DR+
517 CC X+85,029 Y+90,705
518 C X+85,03 Y+85,205 DR+
519 CC X+85,029 Y+90,705
520 C X+87,884 Y+86,004 DR+
521 CC X+87,624 Y+86,431
522 C X+88,052 Y+86,691 DR+
523 L X+87,792 Y+87,118
524 L X+85,029 Y+90,705 R0
525 L Z+50 FMAX
526 L X+85,004 Y+255,705 FMAX
527 L Z+2 FMAX
528 L Z-2,5 F800
529 L X+84,504 Y+251,205 RL F1200
530 L Y+250,705
531 CC X+85,004 Y+250,705
532 C X+85,004 Y+250,205 DR+
533 CC X+85,004 Y+255,705
534 C X+85,003 Y+261,205 DR+
535 CC X+85,004 Y+255,705
536 C X+85,004 Y+250,205 DR+
537 CC X+85,004 Y+255,705
538 C X+87,858 Y+251,004 DR+
539 CC X+87,598 Y+251,431
540 C X+88,026 Y+251,691 DR+
541 L X+87,766 Y+252,118
542 L X+85,004 Y+255,705 R0
543 L Z+50 FMAX
544 M5
545 L Z-1 FMAX M91
546 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
547 TOOL CALL 1 Z S1856 DR+0
548 TOOL DEF 20
549 L X-37,813 Y+177,994 FMAX M3
550 L Z+50 FMAX M8
551 ;  POINTAGE-PERCAGE
552 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
553 L X-37,813 Y+177,994 FMAX M99
554 L X-17,034 Y+213,997 FMAX M99
555 L X+3,757 Y+178,001 FMAX M99
556 L X+522,187 Y+178,082 FMAX M99
557 L X+542,966 Y+214,085 FMAX M99
558 L X+563,757 Y+178,089 FMAX M99
559 L Z+50 FMAX
560 M9
561 M5
562 L Z-1 FMAX M91
563 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
564 TOOL CALL 20 Z S3800 DR+0
565 TOOL DEF 29
566 L X-37,813 Y+177,994 FMAX M3
567 L Z+50 FMAX M8
568 ;  DEBOURRAGE
569 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
570 L X-37,813 Y+177,994 FMAX M99
571 L X-17,034 Y+213,997 FMAX M99
572 L X+3,757 Y+178,001 FMAX M99
573 L X+522,187 Y+178,082 FMAX M99
574 L X+542,966 Y+214,085 FMAX M99
575 L X+563,757 Y+178,089 FMAX M99
576 L Z+50 FMAX
577 M9
578 M5
579 L Z-1 FMAX M91
580 M00
581 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
582 TOOL CALL 29 Z S200 DR+0
583 TOOL DEF 10
584 L X-37,813 Y+177,994 FMAX M3
585 L Z+50 FMAX M8
586 ;  TARAUDAGE
587 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q239=1. ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
588 L X-37,813 Y+177,994 FMAX M99
589 L X-17,034 Y+213,997 FMAX M99
590 L X+3,757 Y+178,001 FMAX M99
591 L X+522,187 Y+178,082 FMAX M99
592 L X+542,966 Y+214,085 FMAX M99
593 L X+563,757 Y+178,089 FMAX M99
594 L Z+50 FMAX
595 M9
596 M5
597 L Z-1 FMAX M91
598 L Y-1 FMAX M91
599 M30
600 END PGM REP 16 21294 OP 10 MM
