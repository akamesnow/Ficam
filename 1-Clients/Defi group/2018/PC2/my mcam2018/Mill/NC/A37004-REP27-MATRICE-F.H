0 BEGIN PGM A37004-REP27-MATRICE-F MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - A37004-REP27-MATRICE-F
4 ; PROG-CN DU 20-09-21 A 15:34
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-3*
14 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
15 ; CORRECTION AUCUNE
16 ; SUREP R 0. SUREP Z 0.
17 TOOL CALL 18 Z S1751 DR+0
18 TOOL DEF 1
19 L X-70,973 Y+0,514 FMAX M3
20 L Z+50 FMAX M25
21 L Z+2 FMAX
22 L Z+0,5 F500
23 CC X-66 Y+0
24 CP IPA-180 Z-0,599 DR-
25 CC X-66 Y+0
26 CP IPA-180 Z-1,697 DR-
27 CC X-66 Y+0
28 CP IPA-180 Z-2,796 DR-
29 CC X-66 Y+0
30 CP IPA-180 Z-3,894 DR-
31 CC X-66 Y+0
32 CP IPA-180 Z-4,992 DR-
33 CC X-66 Y+0
34 CP IPA-180 Z-6,09 DR-
35 CC X-66 Y+0
36 CP IPA-180 Z-7,189 DR-
37 CC X-66 Y+0
38 CP IPA-180 Z-8,287 DR-
39 CC X-66 Y+0
40 CP IPA-180 Z-9,386 DR-
41 CC X-66 Y+0
42 CP IPA-180 Z-10,484 DR-
43 CC X-66 Y+0
44 CP IPA-158,292 Z-11,45 DR-
45 L X-62,632 Y+0,953 F250
46 CC X-66 Y+0
47 C X-69,368 Y-0,953 DR+
48 CC X-66 Y+0
49 C X-62,632 Y+0,953 DR+
50 CC X-65,192 Y+0,98
51 C X-64,315 Y+3,385 DR+
52 CC X-66,516 Y-2,464
53 C X-67,964 Y+3,615 DR+
54 CC X-65,082 Y-9,634
55 C X-71,824 Y+2,13 DR+
56 CC X-63,273 Y-1,899
57 C X-72,726 Y-1,904 DR+
58 CC X-67,477 Y+3,184
59 C X-69,238 Y-3,911 DR+
60 CC X-64,975 Y+12,806
61 C X-62,519 Y-4,27 DR+
62 CC X-67,165 Y+30,893
63 C X-56,792 Y-3,025 DR+
64 CC X-66,587 Y+0,454
65 C X-56,353 Y-1,368 DR+
66 CC X-82,381 Y+3,74
67 C X-55,883 Y+2,566 DR+
68 L X-55,915 Y+2,855
69 CC X-65,518 Y-17,749
70 C X-63,471 Y+4,89 DR+
71 CC X-67,669 Y-40,8
72 C X-74,515 Y+4,569 DR+
73 CC X-61,609 Y-89,556
74 C X-78,592 Y+3,92 DR+
75 CC X-72,481 Y+1,919
76 C X-78,845 Y+2,839 DR+
77 CC X-28,351 Y-5,566
78 C X-79,495 Y-3,437 DR+
79 L X-79,443 Y-3,805
80 CC X-64,862 Y+49,956
81 C X-64,825 Y-5,748 DR+
82 CC X-64,885 Y+113,003
83 C X-50,025 Y-4,814 DR+
84 CC X-52,555 Y-3,792
85 C X-49,829 Y-3,926 DR+
86 CC X-142,929 Y+8,161
87 C X-49,127 Y+4,307 DR+
88 L X-49,198 Y+4,756
89 CC X-68,494 Y-105,737
90 C X-71,291 Y+6,393 DR+
91 CC X-65,928 Y-248,808
92 C X-85,359 Y+5,709 DR+
93 CC X-82,415 Y+4,597
94 C X-85,562 Y+4,641 DR+
95 CC X+81,178 Y-11,993
96 C X-86,251 Y-5,177 DR+
97 L X-86,16 Y-5,707
98 CC X-62,019 Y+203,995
99 C X-57,161 Y-7,036 DR+
100 CC X-67,026 Y+534,179
101 C X-43,257 Y-6,604 DR+
102 CC X-46,625 Y-5,395
103 C X-43,047 Y-5,356 DR+
104 CC X-344,878 Y+18,254
105 C X-42,371 Y+6,048 DR+
106 L X-42,482 Y+6,658
107 CC X-72,106 Y-392,452
108 C X-77,668 Y+7,717 DR+
109 L X-91,353 Y+7,517
110 L X-92,127 Y+7,498
111 CC X-88,331 Y+6,19
112 C X-92,344 Y+6,071 DR+
113 CC X+499,278 Y-30,624
114 C X-93,007 Y-6,918 DR+
115 L X-92,877 Y-7,608
116 CC X-55,365 Y+846,528
117 C X-51,117 Y-8,421 DR+
118 L X-36,49 Y-8,393
119 CC X-40,718 Y-6,982
120 C X-36,265 Y-6,786 DR+
121 L X-35,615 Y+7,788
122 L X-35,765 Y+8,559
123 L X-50,97 Y+8,847
124 L X-73,303 Y+9,069
125 L X-89,234 Y+9,2
126 L X-98,5
127 CC X-98,5 Y+9
128 C X-98,7 Y+9 DR+
129 L Y-9
130 CC X-98,5 Y-9
131 C X-98,5 Y-9,2 DR+
132 L X-33,5
133 CC X-33,5 Y-9
134 C X-33,3 Y-9 DR+
135 L Y+9
136 CC X-33,5 Y+9
137 C X-33,5 Y+9,2 DR+
138 L X-89,234
139 L Z+10 FMAX
140 L X-70,973 Y+0,514 FMAX
141 L Z-9,45 FMAX
142 L Z-10,95 F500
143 CC X-66 Y+0
144 CP IPA-180 Z-12,049 DR-
145 CC X-66 Y+0
146 CP IPA-180 Z-13,147 DR-
147 CC X-66 Y+0
148 CP IPA-180 Z-14,246 DR-
149 CC X-66 Y+0
150 CP IPA-180 Z-15,344 DR-
151 CC X-66 Y+0
152 CP IPA-180 Z-16,442 DR-
153 CC X-66 Y+0
154 CP IPA-180 Z-17,54 DR-
155 CC X-66 Y+0
156 CP IPA-180 Z-18,639 DR-
157 CC X-66 Y+0
158 CP IPA-180 Z-19,737 DR-
159 CC X-66 Y+0
160 CP IPA-180 Z-20,836 DR-
161 CC X-66 Y+0
162 CP IPA-180 Z-21,934 DR-
163 CC X-66 Y+0
164 CP IPA-158,292 Z-22,9 DR-
165 L X-62,632 Y+0,953 F250
166 CC X-66 Y+0
167 C X-69,368 Y-0,953 DR+
168 CC X-66 Y+0
169 C X-62,632 Y+0,953 DR+
170 CC X-65,192 Y+0,98
171 C X-64,315 Y+3,385 DR+
172 CC X-66,516 Y-2,464
173 C X-67,964 Y+3,615 DR+
174 CC X-65,082 Y-9,634
175 C X-71,824 Y+2,13 DR+
176 CC X-63,273 Y-1,899
177 C X-72,726 Y-1,904 DR+
178 CC X-67,477 Y+3,184
179 C X-69,238 Y-3,911 DR+
180 CC X-64,975 Y+12,806
181 C X-62,519 Y-4,27 DR+
182 CC X-67,165 Y+30,893
183 C X-56,792 Y-3,025 DR+
184 CC X-66,587 Y+0,454
185 C X-56,353 Y-1,368 DR+
186 CC X-82,381 Y+3,74
187 C X-55,883 Y+2,566 DR+
188 L X-55,915 Y+2,855
189 CC X-65,518 Y-17,749
190 C X-63,471 Y+4,89 DR+
191 CC X-67,669 Y-40,8
192 C X-74,515 Y+4,569 DR+
193 CC X-61,609 Y-89,556
194 C X-78,592 Y+3,92 DR+
195 CC X-72,481 Y+1,919
196 C X-78,845 Y+2,839 DR+
197 CC X-28,351 Y-5,566
198 C X-79,495 Y-3,437 DR+
199 L X-79,443 Y-3,805
200 CC X-64,862 Y+49,956
201 C X-64,825 Y-5,748 DR+
202 CC X-64,885 Y+113,003
203 C X-50,025 Y-4,814 DR+
204 CC X-52,555 Y-3,792
205 C X-49,829 Y-3,926 DR+
206 CC X-142,929 Y+8,161
207 C X-49,127 Y+4,307 DR+
208 L X-49,198 Y+4,756
209 CC X-68,494 Y-105,737
210 C X-71,291 Y+6,393 DR+
211 CC X-65,928 Y-248,808
212 C X-85,359 Y+5,709 DR+
213 CC X-82,415 Y+4,597
214 C X-85,562 Y+4,641 DR+
215 CC X+81,178 Y-11,993
216 C X-86,251 Y-5,177 DR+
217 L X-86,16 Y-5,707
218 CC X-62,019 Y+203,995
219 C X-57,161 Y-7,036 DR+
220 CC X-67,026 Y+534,179
221 C X-43,257 Y-6,604 DR+
222 CC X-46,625 Y-5,395
223 C X-43,047 Y-5,356 DR+
224 CC X-344,878 Y+18,254
225 C X-42,371 Y+6,048 DR+
226 L X-42,482 Y+6,658
227 CC X-72,106 Y-392,452
228 C X-77,668 Y+7,717 DR+
229 L X-91,353 Y+7,517
230 L X-92,127 Y+7,498
231 CC X-88,331 Y+6,19
232 C X-92,344 Y+6,071 DR+
233 CC X+499,278 Y-30,624
234 C X-93,007 Y-6,918 DR+
235 L X-92,877 Y-7,608
236 CC X-55,365 Y+846,528
237 C X-51,117 Y-8,421 DR+
238 L X-36,49 Y-8,393
239 CC X-40,718 Y-6,982
240 C X-36,265 Y-6,786 DR+
241 L X-35,615 Y+7,788
242 L X-35,765 Y+8,559
243 L X-50,97 Y+8,847
244 L X-73,303 Y+9,069
245 L X-89,234 Y+9,2
246 L X-98,5
247 CC X-98,5 Y+9
248 C X-98,7 Y+9 DR+
249 L Y-9
250 CC X-98,5 Y-9
251 C X-98,5 Y-9,2 DR+
252 L X-33,5
253 CC X-33,5 Y-9
254 C X-33,3 Y-9 DR+
255 L Y+9
256 CC X-33,5 Y+9
257 C X-33,5 Y+9,2 DR+
258 L X-89,234
259 L Z+10 FMAX
260 L X-70,973 Y+0,514 FMAX
261 L Z-11,35 FMAX
262 CC X-66 Y+0
263 CP IPA-180 Z-12,448 DR- F500
264 CC X-66 Y+0
265 CP IPA-180 Z-13,547 DR-
266 CC X-66 Y+0
267 CP IPA-180 Z-14,646 DR-
268 CC X-66 Y+0
269 CP IPA-180 Z-15,744 DR-
270 CC X-66 Y+0
271 CP IPA-180 Z-16,842 DR-
272 CC X-66 Y+0
273 CP IPA-180 Z-17,94 DR-
274 CC X-66 Y+0
275 CP IPA-180 Z-19,038 DR-
276 CC X-66 Y+0
277 CP IPA-180 Z-20,137 DR-
278 CC X-66 Y+0
279 CP IPA-180 Z-21,236 DR-
280 CC X-66 Y+0
281 CP IPA-180 Z-22,334 DR-
282 CC X-66 Y+0
283 CP IPA-158,292 Z-23,3 DR-
284 L X-62,632 Y+0,953 F250
285 CC X-66 Y+0
286 C X-69,368 Y-0,953 DR+
287 CC X-66 Y+0
288 C X-62,632 Y+0,953 DR+
289 CC X-65,192 Y+0,98
290 C X-64,315 Y+3,385 DR+
291 CC X-66,516 Y-2,464
292 C X-67,964 Y+3,615 DR+
293 CC X-65,082 Y-9,634
294 C X-71,824 Y+2,13 DR+
295 CC X-63,273 Y-1,899
296 C X-72,726 Y-1,904 DR+
297 CC X-67,477 Y+3,184
298 C X-69,238 Y-3,911 DR+
299 CC X-64,975 Y+12,806
300 C X-62,519 Y-4,27 DR+
301 CC X-67,165 Y+30,893
302 C X-56,792 Y-3,025 DR+
303 CC X-66,587 Y+0,454
304 C X-56,353 Y-1,368 DR+
305 CC X-82,381 Y+3,74
306 C X-55,883 Y+2,566 DR+
307 L X-55,915 Y+2,855
308 CC X-65,518 Y-17,749
309 C X-63,471 Y+4,89 DR+
310 CC X-67,669 Y-40,8
311 C X-74,515 Y+4,569 DR+
312 CC X-61,609 Y-89,556
313 C X-78,592 Y+3,92 DR+
314 CC X-72,481 Y+1,919
315 C X-78,845 Y+2,839 DR+
316 CC X-28,351 Y-5,566
317 C X-79,495 Y-3,437 DR+
318 L X-79,443 Y-3,805
319 CC X-64,862 Y+49,956
320 C X-64,825 Y-5,748 DR+
321 CC X-64,885 Y+113,003
322 C X-50,025 Y-4,814 DR+
323 CC X-52,555 Y-3,792
324 C X-49,829 Y-3,926 DR+
325 CC X-142,929 Y+8,161
326 C X-49,127 Y+4,307 DR+
327 L X-49,198 Y+4,756
328 CC X-68,494 Y-105,737
329 C X-71,291 Y+6,393 DR+
330 CC X-65,928 Y-248,808
331 C X-85,359 Y+5,709 DR+
332 CC X-82,415 Y+4,597
333 C X-85,562 Y+4,641 DR+
334 CC X+81,178 Y-11,993
335 C X-86,251 Y-5,177 DR+
336 L X-86,16 Y-5,707
337 CC X-62,019 Y+203,995
338 C X-57,161 Y-7,036 DR+
339 CC X-67,026 Y+534,179
340 C X-43,257 Y-6,604 DR+
341 CC X-46,625 Y-5,395
342 C X-43,047 Y-5,356 DR+
343 CC X-344,878 Y+18,254
344 C X-42,371 Y+6,048 DR+
345 L X-42,482 Y+6,658
346 CC X-72,106 Y-392,452
347 C X-77,668 Y+7,717 DR+
348 L X-91,353 Y+7,517
349 L X-92,127 Y+7,498
350 CC X-88,331 Y+6,19
351 C X-92,344 Y+6,071 DR+
352 CC X+499,278 Y-30,624
353 C X-93,007 Y-6,918 DR+
354 L X-92,877 Y-7,608
355 CC X-55,365 Y+846,528
356 C X-51,117 Y-8,421 DR+
357 L X-36,49 Y-8,393
358 CC X-40,718 Y-6,982
359 C X-36,265 Y-6,786 DR+
360 L X-35,615 Y+7,788
361 L X-35,765 Y+8,559
362 L X-50,97 Y+8,847
363 L X-73,303 Y+9,069
364 L X-89,234 Y+9,2
365 L X-98,5
366 CC X-98,5 Y+9
367 C X-98,7 Y+9 DR+
368 L Y-9
369 CC X-98,5 Y-9
370 C X-98,5 Y-9,2 DR+
371 L X-33,5
372 CC X-33,5 Y-9
373 C X-33,3 Y-9 DR+
374 L Y+9
375 CC X-33,5 Y+9
376 C X-33,5 Y+9,2 DR+
377 L X-89,234
378 L X-66 Y+0
379 TOOL CALL 18 Z S1751 DR-5
380 L X-65 Y+7,2 Z-23,3 RL
381 L Y+8,2
382 CC X-66 Y+8,2
383 C X-66 Y+9,2 DR+
384 L X-98,5
385 CC X-98,5 Y+9
386 C X-98,7 Y+9 DR+
387 L Y-9
388 CC X-98,5 Y-9
389 C X-98,5 Y-9,2 DR+
390 L X-33,5
391 CC X-33,5 Y-9
392 C X-33,3 Y-9 DR+
393 L Y+9
394 CC X-33,5 Y+9
395 C X-33,5 Y+9,2 DR+
396 L X-68
397 L X-98,5
398 CC X-98,5 Y+9
399 C X-98,7 Y+9 DR+
400 L Y-9
401 CC X-98,5 Y-9
402 C X-98,5 Y-9,2 DR+
403 L X-33,5
404 CC X-33,5 Y-9
405 C X-33,3 Y-9 DR+
406 L Y+9
407 CC X-33,5 Y+9
408 C X-33,5 Y+9,2 DR+
409 L X-68
410 L X-98,5
411 CC X-98,5 Y+9
412 C X-98,7 Y+9 DR+
413 L Y-9
414 CC X-98,5 Y-9
415 C X-98,5 Y-9,2 DR+
416 L X-33,5
417 CC X-33,5 Y-9
418 C X-33,3 Y-9 DR+
419 L Y+9
420 CC X-33,5 Y+9
421 C X-33,5 Y+9,2 DR+
422 L X-68
423 CC X-68 Y+8,2
424 C X-69 Y+8,2 DR+
425 L Y+7,2
426 L X-66 Y+0 R0
427 L Z+50 FMAX
428 M78
429 M5
430 L Z-1 FMAX M91
431 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
432 ; CORRECTION USURE GAUCHE
433 ; SUREP R 0. SUREP Z 0.
434 TOOL CALL 1 Z S6000 DR-2,5
435 TOOL DEF 18
436 L X-66 Y+0 FMAX M3
437 L Z+50 FMAX
438 L Z+2 FMAX
439 L Z-2,3 F800
440 L X-65,5 Y+10,7 RL F1200
441 L Y+11,2
442 CC X-66 Y+11,2
443 C X-66 Y+11,7 DR+
444 L X-98,5
445 CC X-98,5 Y+9
446 C X-101,2 Y+9 DR+
447 L Y-9
448 CC X-98,5 Y-9
449 C X-98,5 Y-11,7 DR+
450 L X-33,5
451 CC X-33,5 Y-9
452 C X-30,8 Y-9 DR+
453 L Y+9
454 CC X-33,5 Y+9
455 C X-33,5 Y+11,7 DR+
456 L X-68
457 CC X-68 Y+11,2
458 C X-68,5 Y+11,2 DR+
459 L Y+10,7
460 L X-66 Y+0 R0
461 L Z+50 FMAX
462 M5
463 L Z-1 FMAX M91
464 L Y-1 FMAX M91
465 M30
466 END PGM A37004-REP27-MATRICE-F MM
