0 BEGIN PGM 9549-1-REP29-SKI-B MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - 9549-1-REP29-SKI-B
4 ; PROG-CN DU 17-07-19 A 13:40
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T16 FRAISE DE FINITION DIA8 OK FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-2*
13 ; T16 FRAISE DE FINITION DIA8 OK FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
14 ; CORRECTION AUCUNE
15 ; SUREP R 0. SUREP Z 0.
16 TOOL CALL 16 Z S1200 DR+0
17 L X-85,75 Y+31,5 FMAX M3
18 L Z+50 FMAX M25
19 L Z+2 FMAX
20 L Z-2 F500
21 L X-85,738
22 CC X-85,775 Y+31,5
23 C X-85,813 Y+31,5 DR+
24 CC X-85,725 Y+31,5
25 C X-85,638 Y+31,5 DR+
26 CC X-85,775 Y+31,5
27 C X-85,913 Y+31,5 DR+
28 CC X-85,725 Y+31,5
29 C X-85,538 Y+31,5 DR+
30 CC X-85,775 Y+31,5
31 C X-86,013 Y+31,5 DR+
32 CC X-85,725 Y+31,5
33 C X-85,438 Y+31,5 DR+
34 CC X-85,775 Y+31,5
35 C X-86,113 Y+31,5 DR+
36 CC X-85,725 Y+31,5
37 C X-85,338 Y+31,5 DR+
38 CC X-85,775 Y+31,5
39 C X-86,213 Y+31,5 DR+
40 CC X-85,725 Y+31,5
41 C X-85,238 Y+31,5 DR+
42 CC X-85,775 Y+31,5
43 C X-86,313 Y+31,5 DR+
44 CC X-85,725 Y+31,5
45 C X-85,138 Y+31,5 DR+
46 CC X-85,775 Y+31,5
47 C X-86,413 Y+31,5 DR+
48 CC X-85,725 Y+31,5
49 C X-85,038 Y+31,5 DR+
50 CC X-85,775 Y+31,5
51 C X-86,513 Y+31,5 DR+
52 CC X-85,725 Y+31,5
53 C X-84,938 Y+31,5 DR+
54 CC X-85,775 Y+31,5
55 C X-86,613 Y+31,5 DR+
56 CC X-85,725 Y+31,5
57 C X-84,838 Y+31,5 DR+
58 CC X-85,775 Y+31,5
59 C X-86,713 Y+31,5 DR+
60 CC X-85,725 Y+31,5
61 C X-84,738 Y+31,5 DR+
62 CC X-85,775 Y+31,5
63 C X-86,813 Y+31,5 DR+
64 CC X-85,725 Y+31,5
65 C X-84,638 Y+31,5 DR+
66 CC X-85,775 Y+31,5
67 C X-86,913 Y+31,5 DR+
68 CC X-85,725 Y+31,5
69 C X-84,538 Y+31,5 DR+
70 CC X-85,775 Y+31,5
71 C X-87,013 Y+31,5 DR+
72 CC X-85,725 Y+31,5
73 C X-84,438 Y+31,5 DR+
74 CC X-85,775 Y+31,5
75 C X-87,113 Y+31,5 DR+
76 CC X-85,725 Y+31,5
77 C X-84,338 Y+31,5 DR+
78 CC X-85,775 Y+31,5
79 C X-87,213 Y+31,5 DR+
80 CC X-85,725 Y+31,5
81 C X-84,238 Y+31,5 DR+
82 CC X-85,775 Y+31,5
83 C X-87,313 Y+31,5 DR+
84 CC X-85,725 Y+31,5
85 C X-84,138 Y+31,5 DR+
86 CC X-85,775 Y+31,5
87 C X-87,413 Y+31,5 DR+
88 CC X-85,725 Y+31,5
89 C X-84,038 Y+31,5 DR+
90 CC X-85,775 Y+31,5
91 C X-87,513 Y+31,5 DR+
92 CC X-85,725 Y+31,5
93 C X-83,938 Y+31,5 DR+
94 CC X-85,775 Y+31,5
95 C X-87,613 Y+31,5 DR+
96 CC X-85,725 Y+31,5
97 C X-83,838 Y+31,5 DR+
98 CC X-85,775 Y+31,5
99 C X-87,713 Y+31,5 DR+
100 CC X-85,725 Y+31,5
101 C X-83,738 Y+31,5 DR+
102 CC X-85,775 Y+31,5
103 C X-87,813 Y+31,5 DR+
104 CC X-85,725 Y+31,5
105 C X-83,638 Y+31,5 DR+
106 CC X-85,775 Y+31,5
107 C X-87,913 Y+31,5 DR+
108 CC X-85,725 Y+31,5
109 C X-83,538 Y+31,5 DR+
110 CC X-85,775 Y+31,5
111 C X-88,013 Y+31,5 DR+
112 CC X-85,725 Y+31,5
113 C X-83,438 Y+31,5 DR+
114 CC X-85,775 Y+31,5
115 C X-88,113 Y+31,5 DR+
116 CC X-85,725 Y+31,5
117 C X-83,338 Y+31,5 DR+
118 CC X-85,775 Y+31,5
119 C X-88,213 Y+31,5 DR+
120 CC X-85,725 Y+31,5
121 C X-83,238 Y+31,5 DR+
122 CC X-85,775 Y+31,5
123 C X-88,313 Y+31,5 DR+
124 CC X-85,725 Y+31,5
125 C X-83,138 Y+31,5 DR+
126 CC X-85,775 Y+31,5
127 C X-88,413 Y+31,5 DR+
128 CC X-85,725 Y+31,5
129 C X-83,038 Y+31,5 DR+
130 CC X-85,775 Y+31,5
131 C X-88,513 Y+31,5 DR+
132 CC X-85,725 Y+31,5
133 C X-82,938 Y+31,5 DR+
134 CC X-85,775 Y+31,5
135 C X-88,613 Y+31,5 DR+
136 CC X-85,725 Y+31,5
137 C X-82,838 Y+31,5 DR+
138 CC X-85,775 Y+31,5
139 C X-88,713 Y+31,5 DR+
140 CC X-85,725 Y+31,5
141 C X-82,738 Y+31,5 DR+
142 CC X-85,775 Y+31,5
143 C X-88,813 Y+31,5 DR+
144 CC X-85,725 Y+31,5
145 C X-82,638 Y+31,5 DR+
146 CC X-85,775 Y+31,5
147 C X-88,913 Y+31,5 DR+
148 CC X-85,725 Y+31,5
149 C X-82,538 Y+31,5 DR+
150 CC X-85,775 Y+31,5
151 C X-89,013 Y+31,5 DR+
152 CC X-85,725 Y+31,5
153 C X-82,438 Y+31,5 DR+
154 CC X-85,775 Y+31,5
155 C X-89,113 Y+31,5 DR+
156 CC X-85,725 Y+31,5
157 C X-82,338 Y+31,5 DR+
158 CC X-85,775 Y+31,5
159 C X-89,213 Y+31,5 DR+
160 CC X-85,725 Y+31,5
161 C X-82,238 Y+31,5 DR+
162 CC X-85,775 Y+31,5
163 C X-89,313 Y+31,5 DR+
164 CC X-85,725 Y+31,5
165 C X-82,138 Y+31,5 DR+
166 CC X-85,775 Y+31,5
167 C X-89,413 Y+31,5 DR+
168 CC X-85,725 Y+31,5
169 C X-82,038 Y+31,5 DR+
170 CC X-85,775 Y+31,5
171 C X-89,513 Y+31,5 DR+
172 CC X-85,725 Y+31,5
173 C X-81,938 Y+31,5 DR+
174 CC X-85,775 Y+31,5
175 C X-89,613 Y+31,5 DR+
176 CC X-85,725 Y+31,5
177 C X-81,838 Y+31,5 DR+
178 CC X-85,775 Y+31,5
179 C X-89,713 Y+31,5 DR+
180 CC X-85,725 Y+31,5
181 C X-81,738 Y+31,5 DR+
182 CC X-85,775 Y+31,5
183 C X-89,813 Y+31,5 DR+
184 CC X-85,725 Y+31,5
185 C X-81,638 Y+31,5 DR+
186 CC X-85,775 Y+31,5
187 C X-89,913 Y+31,5 DR+
188 CC X-85,725 Y+31,5
189 C X-81,538 Y+31,5 DR+
190 CC X-85,775 Y+31,5
191 C X-90,013 Y+31,5 DR+
192 CC X-85,725 Y+31,5
193 C X-81,438 Y+31,5 DR+
194 CC X-85,775 Y+31,5
195 C X-90,113 Y+31,5 DR+
196 CC X-85,725 Y+31,5
197 C X-81,338 Y+31,5 DR+
198 CC X-85,775 Y+31,5
199 C X-90,213 Y+31,5 DR+
200 CC X-85,725 Y+31,5
201 C X-81,238 Y+31,5 DR+
202 CC X-85,775 Y+31,5
203 C X-90,313 Y+31,5 DR+
204 CC X-85,725 Y+31,5
205 C X-81,138 Y+31,5 DR+
206 CC X-85,775 Y+31,5
207 C X-90,413 Y+31,5 DR+
208 CC X-85,725 Y+31,5
209 C X-81,038 Y+31,5 DR+
210 CC X-85,775 Y+31,5
211 C X-90,513 Y+31,5 DR+
212 CC X-85,725 Y+31,5
213 C X-80,938 Y+31,5 DR+
214 CC X-85,775 Y+31,5
215 C X-90,613 Y+31,5 DR+
216 CC X-85,725 Y+31,5
217 C X-80,838 Y+31,5 DR+
218 CC X-85,775 Y+31,5
219 C X-90,713 Y+31,5 DR+
220 CC X-85,725 Y+31,5
221 C X-80,738 Y+31,5 DR+
222 CC X-85,775 Y+31,5
223 C X-90,813 Y+31,5 DR+
224 CC X-85,725 Y+31,5
225 C X-80,638 Y+31,5 DR+
226 CC X-85,775 Y+31,5
227 C X-90,913 Y+31,5 DR+
228 CC X-85,725 Y+31,5
229 C X-80,538 Y+31,5 DR+
230 CC X-85,775 Y+31,5
231 C X-91,013 Y+31,5 DR+
232 CC X-85,725 Y+31,5
233 C X-80,438 Y+31,5 DR+
234 CC X-85,775 Y+31,5
235 C X-91,113 Y+31,5 DR+
236 CC X-85,725 Y+31,5
237 C X-80,338 Y+31,5 DR+
238 CC X-85,775 Y+31,5
239 C X-91,213 Y+31,5 DR+
240 CC X-85,725 Y+31,5
241 C X-80,238 Y+31,5 DR+
242 CC X-85,775 Y+31,5
243 C X-91,313 Y+31,5 DR+
244 CC X-85,725 Y+31,5
245 C X-80,138 Y+31,5 DR+
246 CC X-85,775 Y+31,5
247 C X-91,413 Y+31,5 DR+
248 CC X-85,725 Y+31,5
249 C X-80,038 Y+31,5 DR+
250 CC X-85,775 Y+31,5
251 C X-91,513 Y+31,5 DR+
252 CC X-85,725 Y+31,5
253 C X-79,938 Y+31,5 DR+
254 CC X-85,775 Y+31,5
255 C X-91,613 Y+31,5 DR+
256 CC X-85,725 Y+31,5
257 C X-79,838 Y+31,5 DR+
258 CC X-85,775 Y+31,5
259 C X-91,713 Y+31,5 DR+
260 CC X-85,725 Y+31,5
261 C X-79,738 Y+31,5 DR+
262 CC X-85,775 Y+31,5
263 C X-91,813 Y+31,5 DR+
264 CC X-85,725 Y+31,5
265 C X-79,638 Y+31,5 DR+
266 CC X-85,775 Y+31,5
267 C X-91,913 Y+31,5 DR+
268 CC X-85,725 Y+31,5
269 C X-79,538 Y+31,5 DR+
270 CC X-85,775 Y+31,5
271 C X-92,013 Y+31,5 DR+
272 CC X-85,725 Y+31,5
273 C X-79,438 Y+31,5 DR+
274 CC X-85,775 Y+31,5
275 C X-92,113 Y+31,5 DR+
276 CC X-85,725 Y+31,5
277 C X-79,338 Y+31,5 DR+
278 CC X-85,775 Y+31,5
279 C X-92,213 Y+31,5 DR+
280 CC X-85,725 Y+31,5
281 C X-79,238 Y+31,5 DR+
282 CC X-85,775 Y+31,5
283 C X-92,313 Y+31,5 DR+
284 CC X-85,725 Y+31,5
285 C X-79,138 Y+31,5 DR+
286 CC X-85,775 Y+31,5
287 C X-92,413 Y+31,5 DR+
288 CC X-85,725 Y+31,5
289 C X-79,038 Y+31,5 DR+
290 CC X-85,775 Y+31,5
291 C X-92,513 Y+31,5 DR+
292 CC X-85,725 Y+31,5
293 C X-78,938 Y+31,5 DR+
294 CC X-85,775 Y+31,5
295 C X-92,613 Y+31,5 DR+
296 CC X-85,725 Y+31,5
297 C X-78,838 Y+31,5 DR+
298 CC X-85,775 Y+31,5
299 C X-92,713 Y+31,5 DR+
300 CC X-85,725 Y+31,5
301 C X-78,738 Y+31,5 DR+
302 CC X-85,775 Y+31,5
303 C X-92,813 Y+31,5 DR+
304 CC X-85,725 Y+31,5
305 C X-78,638 Y+31,5 DR+
306 CC X-85,775 Y+31,5
307 C X-92,913 Y+31,5 DR+
308 CC X-85,725 Y+31,5
309 C X-78,538 Y+31,5 DR+
310 CC X-85,775 Y+31,5
311 C X-93,013 Y+31,5 DR+
312 CC X-85,725 Y+31,5
313 C X-78,438 Y+31,5 DR+
314 CC X-85,775 Y+31,5
315 C X-93,113 Y+31,5 DR+
316 CC X-85,725 Y+31,5
317 C X-78,338 Y+31,5 DR+
318 CC X-85,775 Y+31,5
319 C X-93,213 Y+31,5 DR+
320 CC X-85,725 Y+31,5
321 C X-78,238 Y+31,5 DR+
322 CC X-85,775 Y+31,5
323 C X-93,313 Y+31,5 DR+
324 CC X-85,725 Y+31,5
325 C X-78,138 Y+31,5 DR+
326 CC X-85,775 Y+31,5
327 C X-93,413 Y+31,5 DR+
328 CC X-85,725 Y+31,5
329 C X-78,038 Y+31,5 DR+
330 CC X-85,775 Y+31,5
331 C X-93,513 Y+31,5 DR+
332 CC X-85,725 Y+31,5
333 C X-77,938 Y+31,5 DR+
334 CC X-85,775 Y+31,5
335 C X-93,613 Y+31,5 DR+
336 CC X-85,725 Y+31,5
337 C X-77,838 Y+31,5 DR+
338 CC X-85,775 Y+31,5
339 C X-93,713 Y+31,5 DR+
340 CC X-85,725 Y+31,5
341 C X-77,738 Y+31,5 DR+
342 CC X-85,775 Y+31,5
343 C X-93,813 Y+31,5 DR+
344 CC X-85,725 Y+31,5
345 C X-77,638 Y+31,5 DR+
346 CC X-85,775 Y+31,5
347 C X-93,913 Y+31,5 DR+
348 CC X-85,725 Y+31,5
349 C X-77,538 Y+31,5 DR+
350 CC X-85,775 Y+31,5
351 C X-94,013 Y+31,5 DR+
352 CC X-85,725 Y+31,5
353 C X-77,438 Y+31,5 DR+
354 CC X-85,775 Y+31,5
355 C X-94,113 Y+31,5 DR+
356 CC X-85,725 Y+31,5
357 C X-77,338 Y+31,5 DR+
358 CC X-85,775 Y+31,5
359 C X-94,213 Y+31,5 DR+
360 CC X-85,725 Y+31,5
361 C X-77,238 Y+31,5 DR+
362 CC X-85,775 Y+31,5
363 C X-94,313 Y+31,5 DR+
364 CC X-85,725 Y+31,5
365 C X-77,138 Y+31,5 DR+
366 CC X-85,775 Y+31,5
367 C X-94,413 Y+31,5 DR+
368 CC X-85,725 Y+31,5
369 C X-77,038 Y+31,5 DR+
370 CC X-85,775 Y+31,5
371 C X-94,513 Y+31,5 DR+
372 CC X-85,725 Y+31,5
373 C X-76,938 Y+31,5 DR+
374 CC X-85,775 Y+31,5
375 C X-94,613 Y+31,5 DR+
376 CC X-85,725 Y+31,5
377 C X-76,838 Y+31,5 DR+
378 CC X-85,775 Y+31,5
379 C X-94,713 Y+31,5 DR+
380 CC X-85,725 Y+31,5
381 C X-76,738 Y+31,5 DR+
382 CC X-85,775 Y+31,5
383 C X-81,247 Y+39,321 DR+
384 CC X-85,75 Y+31,5
385 C X-94,775 Y+31,5 DR+
386 CC X-85,75 Y+31,5
387 C X-81,247 Y+39,321 DR+
388 L Z+50 FMAX
389 L X-90,75 Y-28,5 FMAX
390 L Z+2 FMAX
391 L Z-2
392 L X-90,738
393 CC X-90,775 Y-28,5
394 C X-90,813 Y-28,5 DR+
395 CC X-90,725 Y-28,5
396 C X-90,638 Y-28,5 DR+
397 CC X-90,775 Y-28,5
398 C X-90,913 Y-28,5 DR+
399 CC X-90,725 Y-28,5
400 C X-90,538 Y-28,5 DR+
401 CC X-90,775 Y-28,5
402 C X-91,013 Y-28,5 DR+
403 CC X-90,725 Y-28,5
404 C X-90,438 Y-28,5 DR+
405 CC X-90,775 Y-28,5
406 C X-91,113 Y-28,5 DR+
407 CC X-90,725 Y-28,5
408 C X-90,338 Y-28,5 DR+
409 CC X-90,775 Y-28,5
410 C X-91,213 Y-28,5 DR+
411 CC X-90,725 Y-28,5
412 C X-90,238 Y-28,5 DR+
413 CC X-90,775 Y-28,5
414 C X-91,313 Y-28,5 DR+
415 CC X-90,725 Y-28,5
416 C X-90,138 Y-28,5 DR+
417 CC X-90,775 Y-28,5
418 C X-91,413 Y-28,5 DR+
419 CC X-90,725 Y-28,5
420 C X-90,038 Y-28,5 DR+
421 CC X-90,775 Y-28,5
422 C X-91,513 Y-28,5 DR+
423 CC X-90,725 Y-28,5
424 C X-89,938 Y-28,5 DR+
425 CC X-90,775 Y-28,5
426 C X-91,613 Y-28,5 DR+
427 CC X-90,725 Y-28,5
428 C X-89,838 Y-28,5 DR+
429 CC X-90,775 Y-28,5
430 C X-91,713 Y-28,5 DR+
431 CC X-90,725 Y-28,5
432 C X-89,738 Y-28,5 DR+
433 CC X-90,775 Y-28,5
434 C X-91,813 Y-28,5 DR+
435 CC X-90,725 Y-28,5
436 C X-89,638 Y-28,5 DR+
437 CC X-90,775 Y-28,5
438 C X-91,913 Y-28,5 DR+
439 CC X-90,725 Y-28,5
440 C X-89,538 Y-28,5 DR+
441 CC X-90,775 Y-28,5
442 C X-92,013 Y-28,5 DR+
443 CC X-90,725 Y-28,5
444 C X-89,438 Y-28,5 DR+
445 CC X-90,775 Y-28,5
446 C X-92,113 Y-28,5 DR+
447 CC X-90,725 Y-28,5
448 C X-89,338 Y-28,5 DR+
449 CC X-90,775 Y-28,5
450 C X-92,213 Y-28,5 DR+
451 CC X-90,725 Y-28,5
452 C X-89,238 Y-28,5 DR+
453 CC X-90,775 Y-28,5
454 C X-92,313 Y-28,5 DR+
455 CC X-90,725 Y-28,5
456 C X-89,138 Y-28,5 DR+
457 CC X-90,775 Y-28,5
458 C X-92,413 Y-28,5 DR+
459 CC X-90,725 Y-28,5
460 C X-89,038 Y-28,5 DR+
461 CC X-90,775 Y-28,5
462 C X-92,513 Y-28,5 DR+
463 CC X-90,725 Y-28,5
464 C X-88,938 Y-28,5 DR+
465 CC X-90,775 Y-28,5
466 C X-92,613 Y-28,5 DR+
467 CC X-90,725 Y-28,5
468 C X-88,838 Y-28,5 DR+
469 CC X-90,775 Y-28,5
470 C X-92,713 Y-28,5 DR+
471 CC X-90,725 Y-28,5
472 C X-88,738 Y-28,5 DR+
473 CC X-90,775 Y-28,5
474 C X-92,813 Y-28,5 DR+
475 CC X-90,725 Y-28,5
476 C X-88,638 Y-28,5 DR+
477 CC X-90,775 Y-28,5
478 C X-92,913 Y-28,5 DR+
479 CC X-90,725 Y-28,5
480 C X-88,538 Y-28,5 DR+
481 CC X-90,775 Y-28,5
482 C X-93,013 Y-28,5 DR+
483 CC X-90,725 Y-28,5
484 C X-88,438 Y-28,5 DR+
485 CC X-90,775 Y-28,5
486 C X-93,113 Y-28,5 DR+
487 CC X-90,725 Y-28,5
488 C X-88,338 Y-28,5 DR+
489 CC X-90,775 Y-28,5
490 C X-93,213 Y-28,5 DR+
491 CC X-90,725 Y-28,5
492 C X-88,238 Y-28,5 DR+
493 CC X-90,775 Y-28,5
494 C X-93,313 Y-28,5 DR+
495 CC X-90,725 Y-28,5
496 C X-88,138 Y-28,5 DR+
497 CC X-90,775 Y-28,5
498 C X-93,413 Y-28,5 DR+
499 CC X-90,725 Y-28,5
500 C X-88,038 Y-28,5 DR+
501 CC X-90,775 Y-28,5
502 C X-93,513 Y-28,5 DR+
503 CC X-90,725 Y-28,5
504 C X-87,938 Y-28,5 DR+
505 CC X-90,775 Y-28,5
506 C X-93,613 Y-28,5 DR+
507 CC X-90,725 Y-28,5
508 C X-87,838 Y-28,5 DR+
509 CC X-90,775 Y-28,5
510 C X-93,713 Y-28,5 DR+
511 CC X-90,725 Y-28,5
512 C X-87,738 Y-28,5 DR+
513 CC X-90,775 Y-28,5
514 C X-93,813 Y-28,5 DR+
515 CC X-90,725 Y-28,5
516 C X-87,638 Y-28,5 DR+
517 CC X-90,775 Y-28,5
518 C X-93,913 Y-28,5 DR+
519 CC X-90,725 Y-28,5
520 C X-87,538 Y-28,5 DR+
521 CC X-90,775 Y-28,5
522 C X-94,013 Y-28,5 DR+
523 CC X-90,725 Y-28,5
524 C X-87,438 Y-28,5 DR+
525 CC X-90,775 Y-28,5
526 C X-94,113 Y-28,5 DR+
527 CC X-90,725 Y-28,5
528 C X-87,338 Y-28,5 DR+
529 CC X-90,775 Y-28,5
530 C X-94,213 Y-28,5 DR+
531 CC X-90,725 Y-28,5
532 C X-87,238 Y-28,5 DR+
533 CC X-90,775 Y-28,5
534 C X-94,313 Y-28,5 DR+
535 CC X-90,725 Y-28,5
536 C X-87,138 Y-28,5 DR+
537 CC X-90,775 Y-28,5
538 C X-94,413 Y-28,5 DR+
539 CC X-90,725 Y-28,5
540 C X-87,038 Y-28,5 DR+
541 CC X-90,775 Y-28,5
542 C X-94,513 Y-28,5 DR+
543 CC X-90,725 Y-28,5
544 C X-86,938 Y-28,5 DR+
545 CC X-90,775 Y-28,5
546 C X-94,613 Y-28,5 DR+
547 CC X-90,725 Y-28,5
548 C X-86,838 Y-28,5 DR+
549 CC X-90,775 Y-28,5
550 C X-94,713 Y-28,5 DR+
551 CC X-90,725 Y-28,5
552 C X-86,738 Y-28,5 DR+
553 CC X-90,775 Y-28,5
554 C X-94,813 Y-28,5 DR+
555 CC X-90,725 Y-28,5
556 C X-86,638 Y-28,5 DR+
557 CC X-90,775 Y-28,5
558 C X-94,913 Y-28,5 DR+
559 CC X-90,725 Y-28,5
560 C X-86,538 Y-28,5 DR+
561 CC X-90,775 Y-28,5
562 C X-95,013 Y-28,5 DR+
563 CC X-90,725 Y-28,5
564 C X-86,438 Y-28,5 DR+
565 CC X-90,775 Y-28,5
566 C X-95,113 Y-28,5 DR+
567 CC X-90,725 Y-28,5
568 C X-86,338 Y-28,5 DR+
569 CC X-90,775 Y-28,5
570 C X-95,213 Y-28,5 DR+
571 CC X-90,725 Y-28,5
572 C X-86,238 Y-28,5 DR+
573 CC X-90,775 Y-28,5
574 C X-95,313 Y-28,5 DR+
575 CC X-90,725 Y-28,5
576 C X-86,138 Y-28,5 DR+
577 CC X-90,775 Y-28,5
578 C X-95,413 Y-28,5 DR+
579 CC X-90,725 Y-28,5
580 C X-86,038 Y-28,5 DR+
581 CC X-90,775 Y-28,5
582 C X-95,513 Y-28,5 DR+
583 CC X-90,725 Y-28,5
584 C X-85,938 Y-28,5 DR+
585 CC X-90,775 Y-28,5
586 C X-95,613 Y-28,5 DR+
587 CC X-90,725 Y-28,5
588 C X-85,838 Y-28,5 DR+
589 CC X-90,775 Y-28,5
590 C X-95,713 Y-28,5 DR+
591 CC X-90,725 Y-28,5
592 C X-85,738 Y-28,5 DR+
593 CC X-90,775 Y-28,5
594 C X-95,813 Y-28,5 DR+
595 CC X-90,725 Y-28,5
596 C X-85,638 Y-28,5 DR+
597 CC X-90,775 Y-28,5
598 C X-95,913 Y-28,5 DR+
599 CC X-90,725 Y-28,5
600 C X-85,538 Y-28,5 DR+
601 CC X-90,775 Y-28,5
602 C X-96,013 Y-28,5 DR+
603 CC X-90,725 Y-28,5
604 C X-85,438 Y-28,5 DR+
605 CC X-90,775 Y-28,5
606 C X-96,113 Y-28,5 DR+
607 CC X-90,725 Y-28,5
608 C X-85,338 Y-28,5 DR+
609 CC X-90,775 Y-28,5
610 C X-96,213 Y-28,5 DR+
611 CC X-90,725 Y-28,5
612 C X-85,238 Y-28,5 DR+
613 CC X-90,775 Y-28,5
614 C X-96,313 Y-28,5 DR+
615 CC X-90,725 Y-28,5
616 C X-85,138 Y-28,5 DR+
617 CC X-90,775 Y-28,5
618 C X-96,413 Y-28,5 DR+
619 CC X-90,725 Y-28,5
620 C X-85,038 Y-28,5 DR+
621 CC X-90,775 Y-28,5
622 C X-96,513 Y-28,5 DR+
623 CC X-90,725 Y-28,5
624 C X-84,938 Y-28,5 DR+
625 CC X-90,775 Y-28,5
626 C X-96,613 Y-28,5 DR+
627 CC X-90,725 Y-28,5
628 C X-84,838 Y-28,5 DR+
629 CC X-90,775 Y-28,5
630 C X-96,713 Y-28,5 DR+
631 CC X-90,725 Y-28,5
632 C X-84,738 Y-28,5 DR+
633 CC X-90,775 Y-28,5
634 C X-96,813 Y-28,5 DR+
635 CC X-90,725 Y-28,5
636 C X-84,638 Y-28,5 DR+
637 CC X-90,775 Y-28,5
638 C X-96,913 Y-28,5 DR+
639 CC X-90,725 Y-28,5
640 C X-84,538 Y-28,5 DR+
641 CC X-90,775 Y-28,5
642 C X-97,013 Y-28,5 DR+
643 CC X-90,725 Y-28,5
644 C X-84,438 Y-28,5 DR+
645 CC X-90,775 Y-28,5
646 C X-97,113 Y-28,5 DR+
647 CC X-90,725 Y-28,5
648 C X-84,338 Y-28,5 DR+
649 CC X-90,775 Y-28,5
650 C X-97,213 Y-28,5 DR+
651 CC X-90,725 Y-28,5
652 C X-84,238 Y-28,5 DR+
653 CC X-90,775 Y-28,5
654 C X-97,313 Y-28,5 DR+
655 CC X-90,725 Y-28,5
656 C X-84,138 Y-28,5 DR+
657 CC X-90,775 Y-28,5
658 C X-97,413 Y-28,5 DR+
659 CC X-90,725 Y-28,5
660 C X-84,038 Y-28,5 DR+
661 CC X-90,775 Y-28,5
662 C X-97,513 Y-28,5 DR+
663 CC X-90,725 Y-28,5
664 C X-83,938 Y-28,5 DR+
665 CC X-90,775 Y-28,5
666 C X-97,613 Y-28,5 DR+
667 CC X-90,725 Y-28,5
668 C X-83,838 Y-28,5 DR+
669 CC X-90,775 Y-28,5
670 C X-97,713 Y-28,5 DR+
671 CC X-90,725 Y-28,5
672 C X-83,738 Y-28,5 DR+
673 CC X-90,775 Y-28,5
674 C X-97,813 Y-28,5 DR+
675 CC X-90,725 Y-28,5
676 C X-83,638 Y-28,5 DR+
677 CC X-90,775 Y-28,5
678 C X-97,913 Y-28,5 DR+
679 CC X-90,725 Y-28,5
680 C X-83,538 Y-28,5 DR+
681 CC X-90,775 Y-28,5
682 C X-98,013 Y-28,5 DR+
683 CC X-90,725 Y-28,5
684 C X-83,438 Y-28,5 DR+
685 CC X-90,775 Y-28,5
686 C X-98,113 Y-28,5 DR+
687 CC X-90,725 Y-28,5
688 C X-83,338 Y-28,5 DR+
689 CC X-90,775 Y-28,5
690 C X-98,213 Y-28,5 DR+
691 CC X-90,725 Y-28,5
692 C X-83,238 Y-28,5 DR+
693 CC X-90,775 Y-28,5
694 C X-98,313 Y-28,5 DR+
695 CC X-90,725 Y-28,5
696 C X-83,138 Y-28,5 DR+
697 CC X-90,775 Y-28,5
698 C X-98,413 Y-28,5 DR+
699 CC X-90,725 Y-28,5
700 C X-83,038 Y-28,5 DR+
701 CC X-90,775 Y-28,5
702 C X-98,513 Y-28,5 DR+
703 CC X-90,725 Y-28,5
704 C X-82,938 Y-28,5 DR+
705 CC X-90,775 Y-28,5
706 C X-98,613 Y-28,5 DR+
707 CC X-90,725 Y-28,5
708 C X-82,838 Y-28,5 DR+
709 CC X-90,775 Y-28,5
710 C X-98,713 Y-28,5 DR+
711 CC X-90,725 Y-28,5
712 C X-82,738 Y-28,5 DR+
713 CC X-90,775 Y-28,5
714 C X-98,813 Y-28,5 DR+
715 CC X-90,725 Y-28,5
716 C X-82,638 Y-28,5 DR+
717 CC X-90,775 Y-28,5
718 C X-98,913 Y-28,5 DR+
719 CC X-90,725 Y-28,5
720 C X-82,538 Y-28,5 DR+
721 CC X-90,775 Y-28,5
722 C X-99,013 Y-28,5 DR+
723 CC X-90,725 Y-28,5
724 C X-82,438 Y-28,5 DR+
725 CC X-90,775 Y-28,5
726 C X-99,113 Y-28,5 DR+
727 CC X-90,725 Y-28,5
728 C X-82,338 Y-28,5 DR+
729 CC X-90,775 Y-28,5
730 C X-99,213 Y-28,5 DR+
731 CC X-90,725 Y-28,5
732 C X-82,238 Y-28,5 DR+
733 CC X-90,775 Y-28,5
734 C X-99,313 Y-28,5 DR+
735 CC X-90,725 Y-28,5
736 C X-82,138 Y-28,5 DR+
737 CC X-90,775 Y-28,5
738 C X-99,413 Y-28,5 DR+
739 CC X-90,725 Y-28,5
740 C X-82,038 Y-28,5 DR+
741 CC X-90,775 Y-28,5
742 C X-99,513 Y-28,5 DR+
743 CC X-90,725 Y-28,5
744 C X-81,938 Y-28,5 DR+
745 CC X-90,775 Y-28,5
746 C X-99,613 Y-28,5 DR+
747 CC X-90,725 Y-28,5
748 C X-81,838 Y-28,5 DR+
749 CC X-90,775 Y-28,5
750 C X-99,713 Y-28,5 DR+
751 CC X-90,725 Y-28,5
752 C X-81,738 Y-28,5 DR+
753 CC X-90,775 Y-28,5
754 C X-86,247 Y-20,679 DR+
755 CC X-90,75 Y-28,5
756 C X-99,775 Y-28,5 DR+
757 CC X-90,75 Y-28,5
758 C X-86,247 Y-20,679 DR+
759 L Z+50 FMAX
760 L X+9,25 Y-28,5 FMAX
761 L Z+2 FMAX
762 L Z-2
763 L X+9,262
764 CC X+9,225 Y-28,5
765 C X+9,187 Y-28,5 DR+
766 CC X+9,275 Y-28,5
767 C X+9,362 Y-28,5 DR+
768 CC X+9,225 Y-28,5
769 C X+9,087 Y-28,5 DR+
770 CC X+9,275 Y-28,5
771 C X+9,462 Y-28,5 DR+
772 CC X+9,225 Y-28,5
773 C X+8,987 Y-28,5 DR+
774 CC X+9,275 Y-28,5
775 C X+9,562 Y-28,5 DR+
776 CC X+9,225 Y-28,5
777 C X+8,887 Y-28,5 DR+
778 CC X+9,275 Y-28,5
779 C X+9,662 Y-28,5 DR+
780 CC X+9,225 Y-28,5
781 C X+8,787 Y-28,5 DR+
782 CC X+9,275 Y-28,5
783 C X+9,762 Y-28,5 DR+
784 CC X+9,225 Y-28,5
785 C X+8,687 Y-28,5 DR+
786 CC X+9,275 Y-28,5
787 C X+9,862 Y-28,5 DR+
788 CC X+9,225 Y-28,5
789 C X+8,587 Y-28,5 DR+
790 CC X+9,275 Y-28,5
791 C X+9,962 Y-28,5 DR+
792 CC X+9,225 Y-28,5
793 C X+8,487 Y-28,5 DR+
794 CC X+9,275 Y-28,5
795 C X+10,062 Y-28,5 DR+
796 CC X+9,225 Y-28,5
797 C X+8,387 Y-28,5 DR+
798 CC X+9,275 Y-28,5
799 C X+10,162 Y-28,5 DR+
800 CC X+9,225 Y-28,5
801 C X+8,287 Y-28,5 DR+
802 CC X+9,275 Y-28,5
803 C X+10,262 Y-28,5 DR+
804 CC X+9,225 Y-28,5
805 C X+8,187 Y-28,5 DR+
806 CC X+9,275 Y-28,5
807 C X+10,362 Y-28,5 DR+
808 CC X+9,225 Y-28,5
809 C X+8,087 Y-28,5 DR+
810 CC X+9,275 Y-28,5
811 C X+10,462 Y-28,5 DR+
812 CC X+9,225 Y-28,5
813 C X+7,987 Y-28,5 DR+
814 CC X+9,275 Y-28,5
815 C X+10,562 Y-28,5 DR+
816 CC X+9,225 Y-28,5
817 C X+7,887 Y-28,5 DR+
818 CC X+9,275 Y-28,5
819 C X+10,662 Y-28,5 DR+
820 CC X+9,225 Y-28,5
821 C X+7,787 Y-28,5 DR+
822 CC X+9,275 Y-28,5
823 C X+10,762 Y-28,5 DR+
824 CC X+9,225 Y-28,5
825 C X+7,687 Y-28,5 DR+
826 CC X+9,275 Y-28,5
827 C X+10,862 Y-28,5 DR+
828 CC X+9,225 Y-28,5
829 C X+7,587 Y-28,5 DR+
830 CC X+9,275 Y-28,5
831 C X+10,962 Y-28,5 DR+
832 CC X+9,225 Y-28,5
833 C X+7,487 Y-28,5 DR+
834 CC X+9,275 Y-28,5
835 C X+11,062 Y-28,5 DR+
836 CC X+9,225 Y-28,5
837 C X+7,387 Y-28,5 DR+
838 CC X+9,275 Y-28,5
839 C X+11,162 Y-28,5 DR+
840 CC X+9,225 Y-28,5
841 C X+7,287 Y-28,5 DR+
842 CC X+9,275 Y-28,5
843 C X+11,262 Y-28,5 DR+
844 CC X+9,225 Y-28,5
845 C X+7,187 Y-28,5 DR+
846 CC X+9,275 Y-28,5
847 C X+11,362 Y-28,5 DR+
848 CC X+9,225 Y-28,5
849 C X+7,087 Y-28,5 DR+
850 CC X+9,275 Y-28,5
851 C X+11,462 Y-28,5 DR+
852 CC X+9,225 Y-28,5
853 C X+6,987 Y-28,5 DR+
854 CC X+9,275 Y-28,5
855 C X+11,562 Y-28,5 DR+
856 CC X+9,225 Y-28,5
857 C X+6,887 Y-28,5 DR+
858 CC X+9,275 Y-28,5
859 C X+11,662 Y-28,5 DR+
860 CC X+9,225 Y-28,5
861 C X+6,787 Y-28,5 DR+
862 CC X+9,275 Y-28,5
863 C X+11,762 Y-28,5 DR+
864 CC X+9,225 Y-28,5
865 C X+6,687 Y-28,5 DR+
866 CC X+9,275 Y-28,5
867 C X+11,862 Y-28,5 DR+
868 CC X+9,225 Y-28,5
869 C X+6,587 Y-28,5 DR+
870 CC X+9,275 Y-28,5
871 C X+11,962 Y-28,5 DR+
872 CC X+9,225 Y-28,5
873 C X+6,487 Y-28,5 DR+
874 CC X+9,275 Y-28,5
875 C X+12,062 Y-28,5 DR+
876 CC X+9,225 Y-28,5
877 C X+6,387 Y-28,5 DR+
878 CC X+9,275 Y-28,5
879 C X+12,162 Y-28,5 DR+
880 CC X+9,225 Y-28,5
881 C X+6,287 Y-28,5 DR+
882 CC X+9,275 Y-28,5
883 C X+12,262 Y-28,5 DR+
884 CC X+9,225 Y-28,5
885 C X+6,187 Y-28,5 DR+
886 CC X+9,275 Y-28,5
887 C X+12,362 Y-28,5 DR+
888 CC X+9,225 Y-28,5
889 C X+6,087 Y-28,5 DR+
890 CC X+9,275 Y-28,5
891 C X+12,462 Y-28,5 DR+
892 CC X+9,225 Y-28,5
893 C X+5,987 Y-28,5 DR+
894 CC X+9,275 Y-28,5
895 C X+12,562 Y-28,5 DR+
896 CC X+9,225 Y-28,5
897 C X+5,887 Y-28,5 DR+
898 CC X+9,275 Y-28,5
899 C X+12,662 Y-28,5 DR+
900 CC X+9,225 Y-28,5
901 C X+5,787 Y-28,5 DR+
902 CC X+9,275 Y-28,5
903 C X+12,762 Y-28,5 DR+
904 CC X+9,225 Y-28,5
905 C X+5,687 Y-28,5 DR+
906 CC X+9,275 Y-28,5
907 C X+12,862 Y-28,5 DR+
908 CC X+9,225 Y-28,5
909 C X+5,587 Y-28,5 DR+
910 CC X+9,275 Y-28,5
911 C X+12,962 Y-28,5 DR+
912 CC X+9,225 Y-28,5
913 C X+5,487 Y-28,5 DR+
914 CC X+9,275 Y-28,5
915 C X+13,062 Y-28,5 DR+
916 CC X+9,225 Y-28,5
917 C X+5,387 Y-28,5 DR+
918 CC X+9,275 Y-28,5
919 C X+13,162 Y-28,5 DR+
920 CC X+9,225 Y-28,5
921 C X+5,287 Y-28,5 DR+
922 CC X+9,275 Y-28,5
923 C X+13,262 Y-28,5 DR+
924 CC X+9,225 Y-28,5
925 C X+5,187 Y-28,5 DR+
926 CC X+9,275 Y-28,5
927 C X+13,362 Y-28,5 DR+
928 CC X+9,225 Y-28,5
929 C X+5,087 Y-28,5 DR+
930 CC X+9,275 Y-28,5
931 C X+13,462 Y-28,5 DR+
932 CC X+9,225 Y-28,5
933 C X+4,987 Y-28,5 DR+
934 CC X+9,275 Y-28,5
935 C X+13,562 Y-28,5 DR+
936 CC X+9,225 Y-28,5
937 C X+4,887 Y-28,5 DR+
938 CC X+9,275 Y-28,5
939 C X+13,662 Y-28,5 DR+
940 CC X+9,225 Y-28,5
941 C X+4,787 Y-28,5 DR+
942 CC X+9,275 Y-28,5
943 C X+13,762 Y-28,5 DR+
944 CC X+9,225 Y-28,5
945 C X+4,687 Y-28,5 DR+
946 CC X+9,275 Y-28,5
947 C X+13,862 Y-28,5 DR+
948 CC X+9,225 Y-28,5
949 C X+4,587 Y-28,5 DR+
950 CC X+9,275 Y-28,5
951 C X+13,962 Y-28,5 DR+
952 CC X+9,225 Y-28,5
953 C X+4,487 Y-28,5 DR+
954 CC X+9,275 Y-28,5
955 C X+14,062 Y-28,5 DR+
956 CC X+9,225 Y-28,5
957 C X+4,387 Y-28,5 DR+
958 CC X+9,275 Y-28,5
959 C X+14,162 Y-28,5 DR+
960 CC X+9,225 Y-28,5
961 C X+4,287 Y-28,5 DR+
962 CC X+9,275 Y-28,5
963 C X+14,262 Y-28,5 DR+
964 CC X+9,225 Y-28,5
965 C X+4,187 Y-28,5 DR+
966 CC X+9,275 Y-28,5
967 C X+14,362 Y-28,5 DR+
968 CC X+9,225 Y-28,5
969 C X+4,087 Y-28,5 DR+
970 CC X+9,275 Y-28,5
971 C X+14,462 Y-28,5 DR+
972 CC X+9,225 Y-28,5
973 C X+3,987 Y-28,5 DR+
974 CC X+9,275 Y-28,5
975 C X+14,562 Y-28,5 DR+
976 CC X+9,225 Y-28,5
977 C X+3,887 Y-28,5 DR+
978 CC X+9,275 Y-28,5
979 C X+14,662 Y-28,5 DR+
980 CC X+9,225 Y-28,5
981 C X+3,787 Y-28,5 DR+
982 CC X+9,275 Y-28,5
983 C X+14,762 Y-28,5 DR+
984 CC X+9,225 Y-28,5
985 C X+3,687 Y-28,5 DR+
986 CC X+9,275 Y-28,5
987 C X+14,862 Y-28,5 DR+
988 CC X+9,225 Y-28,5
989 C X+3,587 Y-28,5 DR+
990 CC X+9,275 Y-28,5
991 C X+14,962 Y-28,5 DR+
992 CC X+9,225 Y-28,5
993 C X+3,487 Y-28,5 DR+
994 CC X+9,275 Y-28,5
995 C X+15,062 Y-28,5 DR+
996 CC X+9,225 Y-28,5
997 C X+3,387 Y-28,5 DR+
998 CC X+9,275 Y-28,5
999 C X+15,162 Y-28,5 DR+
1000 CC X+9,225 Y-28,5
1001 C X+3,287 Y-28,5 DR+
1002 CC X+9,275 Y-28,5
1003 C X+15,262 Y-28,5 DR+
1004 CC X+9,225 Y-28,5
1005 C X+3,187 Y-28,5 DR+
1006 CC X+9,275 Y-28,5
1007 C X+15,362 Y-28,5 DR+
1008 CC X+9,225 Y-28,5
1009 C X+3,087 Y-28,5 DR+
1010 CC X+9,275 Y-28,5
1011 C X+15,462 Y-28,5 DR+
1012 CC X+9,225 Y-28,5
1013 C X+2,987 Y-28,5 DR+
1014 CC X+9,275 Y-28,5
1015 C X+15,562 Y-28,5 DR+
1016 CC X+9,225 Y-28,5
1017 C X+2,887 Y-28,5 DR+
1018 CC X+9,275 Y-28,5
1019 C X+15,662 Y-28,5 DR+
1020 CC X+9,225 Y-28,5
1021 C X+2,787 Y-28,5 DR+
1022 CC X+9,275 Y-28,5
1023 C X+15,762 Y-28,5 DR+
1024 CC X+9,225 Y-28,5
1025 C X+2,687 Y-28,5 DR+
1026 CC X+9,275 Y-28,5
1027 C X+15,862 Y-28,5 DR+
1028 CC X+9,225 Y-28,5
1029 C X+2,587 Y-28,5 DR+
1030 CC X+9,275 Y-28,5
1031 C X+15,962 Y-28,5 DR+
1032 CC X+9,225 Y-28,5
1033 C X+2,487 Y-28,5 DR+
1034 CC X+9,275 Y-28,5
1035 C X+16,062 Y-28,5 DR+
1036 CC X+9,225 Y-28,5
1037 C X+2,387 Y-28,5 DR+
1038 CC X+9,275 Y-28,5
1039 C X+16,162 Y-28,5 DR+
1040 CC X+9,225 Y-28,5
1041 C X+2,287 Y-28,5 DR+
1042 CC X+9,275 Y-28,5
1043 C X+16,262 Y-28,5 DR+
1044 CC X+9,225 Y-28,5
1045 C X+2,187 Y-28,5 DR+
1046 CC X+9,275 Y-28,5
1047 C X+16,362 Y-28,5 DR+
1048 CC X+9,225 Y-28,5
1049 C X+2,087 Y-28,5 DR+
1050 CC X+9,275 Y-28,5
1051 C X+16,462 Y-28,5 DR+
1052 CC X+9,225 Y-28,5
1053 C X+1,987 Y-28,5 DR+
1054 CC X+9,275 Y-28,5
1055 C X+16,562 Y-28,5 DR+
1056 CC X+9,225 Y-28,5
1057 C X+1,887 Y-28,5 DR+
1058 CC X+9,275 Y-28,5
1059 C X+16,662 Y-28,5 DR+
1060 CC X+9,225 Y-28,5
1061 C X+1,787 Y-28,5 DR+
1062 CC X+9,275 Y-28,5
1063 C X+16,762 Y-28,5 DR+
1064 CC X+9,225 Y-28,5
1065 C X+1,687 Y-28,5 DR+
1066 CC X+9,275 Y-28,5
1067 C X+16,862 Y-28,5 DR+
1068 CC X+9,225 Y-28,5
1069 C X+1,587 Y-28,5 DR+
1070 CC X+9,275 Y-28,5
1071 C X+16,962 Y-28,5 DR+
1072 CC X+9,225 Y-28,5
1073 C X+1,487 Y-28,5 DR+
1074 CC X+9,275 Y-28,5
1075 C X+17,062 Y-28,5 DR+
1076 CC X+9,225 Y-28,5
1077 C X+1,387 Y-28,5 DR+
1078 CC X+9,275 Y-28,5
1079 C X+17,162 Y-28,5 DR+
1080 CC X+9,225 Y-28,5
1081 C X+1,287 Y-28,5 DR+
1082 CC X+9,275 Y-28,5
1083 C X+17,262 Y-28,5 DR+
1084 CC X+9,225 Y-28,5
1085 C X+1,187 Y-28,5 DR+
1086 CC X+9,275 Y-28,5
1087 C X+17,362 Y-28,5 DR+
1088 CC X+9,225 Y-28,5
1089 C X+1,087 Y-28,5 DR+
1090 CC X+9,275 Y-28,5
1091 C X+17,462 Y-28,5 DR+
1092 CC X+9,225 Y-28,5
1093 C X+0,987 Y-28,5 DR+
1094 CC X+9,275 Y-28,5
1095 C X+17,562 Y-28,5 DR+
1096 CC X+9,225 Y-28,5
1097 C X+0,887 Y-28,5 DR+
1098 CC X+9,275 Y-28,5
1099 C X+17,662 Y-28,5 DR+
1100 CC X+9,225 Y-28,5
1101 C X+0,787 Y-28,5 DR+
1102 CC X+9,275 Y-28,5
1103 C X+17,762 Y-28,5 DR+
1104 CC X+9,225 Y-28,5
1105 C X+0,687 Y-28,5 DR+
1106 CC X+9,275 Y-28,5
1107 C X+17,862 Y-28,5 DR+
1108 CC X+9,225 Y-28,5
1109 C X+0,587 Y-28,5 DR+
1110 CC X+9,275 Y-28,5
1111 C X+17,962 Y-28,5 DR+
1112 CC X+9,225 Y-28,5
1113 C X+0,487 Y-28,5 DR+
1114 CC X+9,275 Y-28,5
1115 C X+18,062 Y-28,5 DR+
1116 CC X+9,225 Y-28,5
1117 C X+0,387 Y-28,5 DR+
1118 CC X+9,275 Y-28,5
1119 C X+18,162 Y-28,5 DR+
1120 CC X+9,225 Y-28,5
1121 C X+0,287 Y-28,5 DR+
1122 CC X+9,275 Y-28,5
1123 C X+18,262 Y-28,5 DR+
1124 CC X+9,225 Y-28,5
1125 C X+13,753 Y-20,679 DR+
1126 CC X+9,25 Y-28,5
1127 C X+0,225 Y-28,5 DR+
1128 CC X+9,25 Y-28,5
1129 C X+13,753 Y-20,679 DR+
1130 L Z+50 FMAX
1131 L X+89,25 Y+31,5 FMAX
1132 L Z+2 FMAX
1133 L Z-2
1134 L X+89,262
1135 CC X+89,225 Y+31,5
1136 C X+89,187 Y+31,5 DR+
1137 CC X+89,275 Y+31,5
1138 C X+89,362 Y+31,5 DR+
1139 CC X+89,225 Y+31,5
1140 C X+89,087 Y+31,5 DR+
1141 CC X+89,275 Y+31,5
1142 C X+89,462 Y+31,5 DR+
1143 CC X+89,225 Y+31,5
1144 C X+88,987 Y+31,5 DR+
1145 CC X+89,275 Y+31,5
1146 C X+89,562 Y+31,5 DR+
1147 CC X+89,225 Y+31,5
1148 C X+88,887 Y+31,5 DR+
1149 CC X+89,275 Y+31,5
1150 C X+89,662 Y+31,5 DR+
1151 CC X+89,225 Y+31,5
1152 C X+88,787 Y+31,5 DR+
1153 CC X+89,275 Y+31,5
1154 C X+89,762 Y+31,5 DR+
1155 CC X+89,225 Y+31,5
1156 C X+88,687 Y+31,5 DR+
1157 CC X+89,275 Y+31,5
1158 C X+89,862 Y+31,5 DR+
1159 CC X+89,225 Y+31,5
1160 C X+88,587 Y+31,5 DR+
1161 CC X+89,275 Y+31,5
1162 C X+89,962 Y+31,5 DR+
1163 CC X+89,225 Y+31,5
1164 C X+88,487 Y+31,5 DR+
1165 CC X+89,275 Y+31,5
1166 C X+90,062 Y+31,5 DR+
1167 CC X+89,225 Y+31,5
1168 C X+88,387 Y+31,5 DR+
1169 CC X+89,275 Y+31,5
1170 C X+90,162 Y+31,5 DR+
1171 CC X+89,225 Y+31,5
1172 C X+88,287 Y+31,5 DR+
1173 CC X+89,275 Y+31,5
1174 C X+90,262 Y+31,5 DR+
1175 CC X+89,225 Y+31,5
1176 C X+88,187 Y+31,5 DR+
1177 CC X+89,275 Y+31,5
1178 C X+90,362 Y+31,5 DR+
1179 CC X+89,225 Y+31,5
1180 C X+88,087 Y+31,5 DR+
1181 CC X+89,275 Y+31,5
1182 C X+90,462 Y+31,5 DR+
1183 CC X+89,225 Y+31,5
1184 C X+87,987 Y+31,5 DR+
1185 CC X+89,275 Y+31,5
1186 C X+90,562 Y+31,5 DR+
1187 CC X+89,225 Y+31,5
1188 C X+87,887 Y+31,5 DR+
1189 CC X+89,275 Y+31,5
1190 C X+90,662 Y+31,5 DR+
1191 CC X+89,225 Y+31,5
1192 C X+87,787 Y+31,5 DR+
1193 CC X+89,275 Y+31,5
1194 C X+90,762 Y+31,5 DR+
1195 CC X+89,225 Y+31,5
1196 C X+87,687 Y+31,5 DR+
1197 CC X+89,275 Y+31,5
1198 C X+90,862 Y+31,5 DR+
1199 CC X+89,225 Y+31,5
1200 C X+87,587 Y+31,5 DR+
1201 CC X+89,275 Y+31,5
1202 C X+90,962 Y+31,5 DR+
1203 CC X+89,225 Y+31,5
1204 C X+87,487 Y+31,5 DR+
1205 CC X+89,275 Y+31,5
1206 C X+91,062 Y+31,5 DR+
1207 CC X+89,225 Y+31,5
1208 C X+87,387 Y+31,5 DR+
1209 CC X+89,275 Y+31,5
1210 C X+91,162 Y+31,5 DR+
1211 CC X+89,225 Y+31,5
1212 C X+87,287 Y+31,5 DR+
1213 CC X+89,275 Y+31,5
1214 C X+91,262 Y+31,5 DR+
1215 CC X+89,225 Y+31,5
1216 C X+87,187 Y+31,5 DR+
1217 CC X+89,275 Y+31,5
1218 C X+91,362 Y+31,5 DR+
1219 CC X+89,225 Y+31,5
1220 C X+87,087 Y+31,5 DR+
1221 CC X+89,275 Y+31,5
1222 C X+91,462 Y+31,5 DR+
1223 CC X+89,225 Y+31,5
1224 C X+86,987 Y+31,5 DR+
1225 CC X+89,275 Y+31,5
1226 C X+91,562 Y+31,5 DR+
1227 CC X+89,225 Y+31,5
1228 C X+86,887 Y+31,5 DR+
1229 CC X+89,275 Y+31,5
1230 C X+91,662 Y+31,5 DR+
1231 CC X+89,225 Y+31,5
1232 C X+86,787 Y+31,5 DR+
1233 CC X+89,275 Y+31,5
1234 C X+91,762 Y+31,5 DR+
1235 CC X+89,225 Y+31,5
1236 C X+86,687 Y+31,5 DR+
1237 CC X+89,275 Y+31,5
1238 C X+91,862 Y+31,5 DR+
1239 CC X+89,225 Y+31,5
1240 C X+86,587 Y+31,5 DR+
1241 CC X+89,275 Y+31,5
1242 C X+91,962 Y+31,5 DR+
1243 CC X+89,225 Y+31,5
1244 C X+86,487 Y+31,5 DR+
1245 CC X+89,275 Y+31,5
1246 C X+92,062 Y+31,5 DR+
1247 CC X+89,225 Y+31,5
1248 C X+86,387 Y+31,5 DR+
1249 CC X+89,275 Y+31,5
1250 C X+92,162 Y+31,5 DR+
1251 CC X+89,225 Y+31,5
1252 C X+86,287 Y+31,5 DR+
1253 CC X+89,275 Y+31,5
1254 C X+92,262 Y+31,5 DR+
1255 CC X+89,225 Y+31,5
1256 C X+86,187 Y+31,5 DR+
1257 CC X+89,275 Y+31,5
1258 C X+92,362 Y+31,5 DR+
1259 CC X+89,225 Y+31,5
1260 C X+86,087 Y+31,5 DR+
1261 CC X+89,275 Y+31,5
1262 C X+92,462 Y+31,5 DR+
1263 CC X+89,225 Y+31,5
1264 C X+85,987 Y+31,5 DR+
1265 CC X+89,275 Y+31,5
1266 C X+92,562 Y+31,5 DR+
1267 CC X+89,225 Y+31,5
1268 C X+85,887 Y+31,5 DR+
1269 CC X+89,275 Y+31,5
1270 C X+92,662 Y+31,5 DR+
1271 CC X+89,225 Y+31,5
1272 C X+85,787 Y+31,5 DR+
1273 CC X+89,275 Y+31,5
1274 C X+92,762 Y+31,5 DR+
1275 CC X+89,225 Y+31,5
1276 C X+85,687 Y+31,5 DR+
1277 CC X+89,275 Y+31,5
1278 C X+92,862 Y+31,5 DR+
1279 CC X+89,225 Y+31,5
1280 C X+85,587 Y+31,5 DR+
1281 CC X+89,275 Y+31,5
1282 C X+92,962 Y+31,5 DR+
1283 CC X+89,225 Y+31,5
1284 C X+85,487 Y+31,5 DR+
1285 CC X+89,275 Y+31,5
1286 C X+93,062 Y+31,5 DR+
1287 CC X+89,225 Y+31,5
1288 C X+85,387 Y+31,5 DR+
1289 CC X+89,275 Y+31,5
1290 C X+93,162 Y+31,5 DR+
1291 CC X+89,225 Y+31,5
1292 C X+85,287 Y+31,5 DR+
1293 CC X+89,275 Y+31,5
1294 C X+93,262 Y+31,5 DR+
1295 CC X+89,225 Y+31,5
1296 C X+85,187 Y+31,5 DR+
1297 CC X+89,275 Y+31,5
1298 C X+93,362 Y+31,5 DR+
1299 CC X+89,225 Y+31,5
1300 C X+85,087 Y+31,5 DR+
1301 CC X+89,275 Y+31,5
1302 C X+93,462 Y+31,5 DR+
1303 CC X+89,225 Y+31,5
1304 C X+84,987 Y+31,5 DR+
1305 CC X+89,275 Y+31,5
1306 C X+93,562 Y+31,5 DR+
1307 CC X+89,225 Y+31,5
1308 C X+84,887 Y+31,5 DR+
1309 CC X+89,275 Y+31,5
1310 C X+93,662 Y+31,5 DR+
1311 CC X+89,225 Y+31,5
1312 C X+84,787 Y+31,5 DR+
1313 CC X+89,275 Y+31,5
1314 C X+93,762 Y+31,5 DR+
1315 CC X+89,225 Y+31,5
1316 C X+84,687 Y+31,5 DR+
1317 CC X+89,275 Y+31,5
1318 C X+93,862 Y+31,5 DR+
1319 CC X+89,225 Y+31,5
1320 C X+84,587 Y+31,5 DR+
1321 CC X+89,275 Y+31,5
1322 C X+93,962 Y+31,5 DR+
1323 CC X+89,225 Y+31,5
1324 C X+84,487 Y+31,5 DR+
1325 CC X+89,275 Y+31,5
1326 C X+94,062 Y+31,5 DR+
1327 CC X+89,225 Y+31,5
1328 C X+84,387 Y+31,5 DR+
1329 CC X+89,275 Y+31,5
1330 C X+94,162 Y+31,5 DR+
1331 CC X+89,225 Y+31,5
1332 C X+84,287 Y+31,5 DR+
1333 CC X+89,275 Y+31,5
1334 C X+94,262 Y+31,5 DR+
1335 CC X+89,225 Y+31,5
1336 C X+84,187 Y+31,5 DR+
1337 CC X+89,275 Y+31,5
1338 C X+94,362 Y+31,5 DR+
1339 CC X+89,225 Y+31,5
1340 C X+84,087 Y+31,5 DR+
1341 CC X+89,275 Y+31,5
1342 C X+94,462 Y+31,5 DR+
1343 CC X+89,225 Y+31,5
1344 C X+83,987 Y+31,5 DR+
1345 CC X+89,275 Y+31,5
1346 C X+94,562 Y+31,5 DR+
1347 CC X+89,225 Y+31,5
1348 C X+83,887 Y+31,5 DR+
1349 CC X+89,275 Y+31,5
1350 C X+94,662 Y+31,5 DR+
1351 CC X+89,225 Y+31,5
1352 C X+83,787 Y+31,5 DR+
1353 CC X+89,275 Y+31,5
1354 C X+94,762 Y+31,5 DR+
1355 CC X+89,225 Y+31,5
1356 C X+83,687 Y+31,5 DR+
1357 CC X+89,275 Y+31,5
1358 C X+94,862 Y+31,5 DR+
1359 CC X+89,225 Y+31,5
1360 C X+83,587 Y+31,5 DR+
1361 CC X+89,275 Y+31,5
1362 C X+94,962 Y+31,5 DR+
1363 CC X+89,225 Y+31,5
1364 C X+83,487 Y+31,5 DR+
1365 CC X+89,275 Y+31,5
1366 C X+95,062 Y+31,5 DR+
1367 CC X+89,225 Y+31,5
1368 C X+83,387 Y+31,5 DR+
1369 CC X+89,275 Y+31,5
1370 C X+95,162 Y+31,5 DR+
1371 CC X+89,225 Y+31,5
1372 C X+83,287 Y+31,5 DR+
1373 CC X+89,275 Y+31,5
1374 C X+95,262 Y+31,5 DR+
1375 CC X+89,225 Y+31,5
1376 C X+83,187 Y+31,5 DR+
1377 CC X+89,275 Y+31,5
1378 C X+95,362 Y+31,5 DR+
1379 CC X+89,225 Y+31,5
1380 C X+83,087 Y+31,5 DR+
1381 CC X+89,275 Y+31,5
1382 C X+95,462 Y+31,5 DR+
1383 CC X+89,225 Y+31,5
1384 C X+82,987 Y+31,5 DR+
1385 CC X+89,275 Y+31,5
1386 C X+95,562 Y+31,5 DR+
1387 CC X+89,225 Y+31,5
1388 C X+82,887 Y+31,5 DR+
1389 CC X+89,275 Y+31,5
1390 C X+95,662 Y+31,5 DR+
1391 CC X+89,225 Y+31,5
1392 C X+82,787 Y+31,5 DR+
1393 CC X+89,275 Y+31,5
1394 C X+95,762 Y+31,5 DR+
1395 CC X+89,225 Y+31,5
1396 C X+82,687 Y+31,5 DR+
1397 CC X+89,275 Y+31,5
1398 C X+95,862 Y+31,5 DR+
1399 CC X+89,225 Y+31,5
1400 C X+82,587 Y+31,5 DR+
1401 CC X+89,275 Y+31,5
1402 C X+95,962 Y+31,5 DR+
1403 CC X+89,225 Y+31,5
1404 C X+82,487 Y+31,5 DR+
1405 CC X+89,275 Y+31,5
1406 C X+96,062 Y+31,5 DR+
1407 CC X+89,225 Y+31,5
1408 C X+82,387 Y+31,5 DR+
1409 CC X+89,275 Y+31,5
1410 C X+96,162 Y+31,5 DR+
1411 CC X+89,225 Y+31,5
1412 C X+82,287 Y+31,5 DR+
1413 CC X+89,275 Y+31,5
1414 C X+96,262 Y+31,5 DR+
1415 CC X+89,225 Y+31,5
1416 C X+82,187 Y+31,5 DR+
1417 CC X+89,275 Y+31,5
1418 C X+96,362 Y+31,5 DR+
1419 CC X+89,225 Y+31,5
1420 C X+82,087 Y+31,5 DR+
1421 CC X+89,275 Y+31,5
1422 C X+96,462 Y+31,5 DR+
1423 CC X+89,225 Y+31,5
1424 C X+81,987 Y+31,5 DR+
1425 CC X+89,275 Y+31,5
1426 C X+96,562 Y+31,5 DR+
1427 CC X+89,225 Y+31,5
1428 C X+81,887 Y+31,5 DR+
1429 CC X+89,275 Y+31,5
1430 C X+96,662 Y+31,5 DR+
1431 CC X+89,225 Y+31,5
1432 C X+81,787 Y+31,5 DR+
1433 CC X+89,275 Y+31,5
1434 C X+96,762 Y+31,5 DR+
1435 CC X+89,225 Y+31,5
1436 C X+81,687 Y+31,5 DR+
1437 CC X+89,275 Y+31,5
1438 C X+96,862 Y+31,5 DR+
1439 CC X+89,225 Y+31,5
1440 C X+81,587 Y+31,5 DR+
1441 CC X+89,275 Y+31,5
1442 C X+96,962 Y+31,5 DR+
1443 CC X+89,225 Y+31,5
1444 C X+81,487 Y+31,5 DR+
1445 CC X+89,275 Y+31,5
1446 C X+97,062 Y+31,5 DR+
1447 CC X+89,225 Y+31,5
1448 C X+81,387 Y+31,5 DR+
1449 CC X+89,275 Y+31,5
1450 C X+97,162 Y+31,5 DR+
1451 CC X+89,225 Y+31,5
1452 C X+81,287 Y+31,5 DR+
1453 CC X+89,275 Y+31,5
1454 C X+97,262 Y+31,5 DR+
1455 CC X+89,225 Y+31,5
1456 C X+81,187 Y+31,5 DR+
1457 CC X+89,275 Y+31,5
1458 C X+97,362 Y+31,5 DR+
1459 CC X+89,225 Y+31,5
1460 C X+81,087 Y+31,5 DR+
1461 CC X+89,275 Y+31,5
1462 C X+97,462 Y+31,5 DR+
1463 CC X+89,225 Y+31,5
1464 C X+80,987 Y+31,5 DR+
1465 CC X+89,275 Y+31,5
1466 C X+97,562 Y+31,5 DR+
1467 CC X+89,225 Y+31,5
1468 C X+80,887 Y+31,5 DR+
1469 CC X+89,275 Y+31,5
1470 C X+97,662 Y+31,5 DR+
1471 CC X+89,225 Y+31,5
1472 C X+80,787 Y+31,5 DR+
1473 CC X+89,275 Y+31,5
1474 C X+97,762 Y+31,5 DR+
1475 CC X+89,225 Y+31,5
1476 C X+80,687 Y+31,5 DR+
1477 CC X+89,275 Y+31,5
1478 C X+97,862 Y+31,5 DR+
1479 CC X+89,225 Y+31,5
1480 C X+80,587 Y+31,5 DR+
1481 CC X+89,275 Y+31,5
1482 C X+97,962 Y+31,5 DR+
1483 CC X+89,225 Y+31,5
1484 C X+80,487 Y+31,5 DR+
1485 CC X+89,275 Y+31,5
1486 C X+98,062 Y+31,5 DR+
1487 CC X+89,225 Y+31,5
1488 C X+80,387 Y+31,5 DR+
1489 CC X+89,275 Y+31,5
1490 C X+98,162 Y+31,5 DR+
1491 CC X+89,225 Y+31,5
1492 C X+80,287 Y+31,5 DR+
1493 CC X+89,275 Y+31,5
1494 C X+98,262 Y+31,5 DR+
1495 CC X+89,225 Y+31,5
1496 C X+93,753 Y+39,321 DR+
1497 CC X+89,25 Y+31,5
1498 C X+98,275 Y+31,5 DR+
1499 CC X+89,25 Y+31,5
1500 C X+93,753 Y+39,321 DR+
1501 L Z+50 FMAX
1502 TOOL CALL 16 Z S1200 DR-4
1503 L X-85,75 Y+31,5 Z+50 FMAX
1504 L Z+2 FMAX
1505 L Z-2
1506 L X-78,325 Y+30,7 RL
1507 L X-77,525
1508 CC X-77,525 Y+31,5
1509 C X-76,725 Y+31,5 DR+
1510 CC X-85,75 Y+31,5
1511 C X-94,775 Y+31,5 DR+
1512 CC X-85,75 Y+31,5
1513 C X-76,725 Y+31,5 DR+
1514 CC X-85,75 Y+31,5
1515 C X-76,78 Y+32,498 DR+
1516 CC X-77,575 Y+32,409
1517 C X-77,664 Y+33,205 DR+
1518 L X-78,459 Y+33,116
1519 L X-85,75 Y+31,5 R0
1520 L Z+50 FMAX
1521 L X-90,75 Y-28,5 FMAX
1522 L Z+2 FMAX
1523 L Z-2
1524 L X-83,325 Y-29,3 RL
1525 L X-82,525
1526 CC X-82,525 Y-28,5
1527 C X-81,725 Y-28,5 DR+
1528 CC X-90,75 Y-28,5
1529 C X-99,775 Y-28,5 DR+
1530 CC X-90,75 Y-28,5
1531 C X-81,725 Y-28,5 DR+
1532 CC X-90,75 Y-28,5
1533 C X-81,78 Y-27,502 DR+
1534 CC X-82,575 Y-27,591
1535 C X-82,664 Y-26,795 DR+
1536 L X-83,459 Y-26,884
1537 L X-90,75 Y-28,5 R0
1538 L Z+50 FMAX
1539 L X+9,25 FMAX
1540 L Z+2 FMAX
1541 L Z-2
1542 L X+16,675 Y-29,3 RL
1543 L X+17,475
1544 CC X+17,475 Y-28,5
1545 C X+18,275 Y-28,5 DR+
1546 CC X+9,25 Y-28,5
1547 C X+0,225 Y-28,5 DR+
1548 CC X+9,25 Y-28,5
1549 C X+18,275 Y-28,5 DR+
1550 CC X+9,25 Y-28,5
1551 C X+18,22 Y-27,502 DR+
1552 CC X+17,425 Y-27,591
1553 C X+17,336 Y-26,795 DR+
1554 L X+16,541 Y-26,884
1555 L X+9,25 Y-28,5 R0
1556 L Z+50 FMAX
1557 L X+89,25 Y+31,5 FMAX
1558 L Z+2 FMAX
1559 L Z-2
1560 L X+81,825 Y+32,3 RL
1561 L X+81,025
1562 CC X+81,025 Y+31,5
1563 C X+80,225 Y+31,5 DR+
1564 CC X+89,25 Y+31,5
1565 C X+98,275 Y+31,5 DR+
1566 CC X+89,25 Y+31,5
1567 C X+80,225 Y+31,5 DR+
1568 CC X+89,25 Y+31,5
1569 C X+80,28 Y+30,502 DR+
1570 CC X+81,075 Y+30,591
1571 C X+81,164 Y+29,795 DR+
1572 L X+81,959 Y+29,884
1573 L X+89,25 Y+31,5 R0
1574 L Z+50 FMAX
1575 M78
1576 M5
1577 L Z-1 FMAX M91
1578 L Y-1 FMAX M91
1579 M30
1580 END PGM 9549-1-REP29-SKI-B MM
