0 BEGIN PGM A36798-REP28-MATRICE-F MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - A36798-REP28-MATRICE-F
4 ; PROG-CN DU 30-09-19 A 12:28
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T22 FRAISE DIA 12 TREMPER 5366501 FRAISE 2 TAILLES DIAM=12. 4 DENTS ARS
9 ; T24 DIA 10 15366450 Z160 60HRC FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-5*
14 ; T22 FRAISE DIA 12 TREMPER 5366501 FRAISE 2 TAILLES DIAM=12. 4 DENTS ARS
15 ; CORRECTION USURE GAUCHE
16 ; SUREP R 0. SUREP Z 0.
17 TOOL CALL 22 Z S2190 DR-6
18 TOOL DEF 24
19 L X+39 Y-70 FMAX M3
20 L Z+50 FMAX M25
21 L Z+2 FMAX
22 L Z-25,15 F1000
23 L X+43,6 Y-71,2 RL F320
24 L X+44,8
25 CC X+44,8 Y-70
26 C X+46 Y-70 DR+
27 L Y-61,5
28 CC X+52 Y-61,5
29 C X+52 Y-55,5 DR-
30 L X+95,063
31 CC X+95,063 Y-61,5
32 C X+99,647 Y-57,629 DR-
33 CC X+99,8 Y-57,5
34 C X+100 Y-57,501 DR+
35 L Y-41,501
36 CC X+99,8 Y-41,5
37 C X+99,647 Y-41,371 DR+
38 CC X+95,063 Y-37,5
39 C X+95,063 Y-43,5 DR-
40 L X-17,063
41 CC X-17,063 Y-37,5
42 C X-21,647 Y-41,371 DR-
43 CC X-21,8 Y-41,5
44 C X-22 Y-41,501 DR+
45 L Y-57,499
46 CC X-21,8 Y-57,5
47 C X-21,647 Y-57,629 DR+
48 CC X-17,063 Y-61,5
49 C X-17,063 Y-55,5 DR-
50 L X+26
51 CC X+26 Y-61,5
52 C X+32 Y-61,5 DR-
53 L Y-78,5
54 CC X+26 Y-78,5
55 C X+26 Y-84,5 DR-
56 L X-17,063
57 CC X-17,063 Y-78,5
58 C X-21,647 Y-82,371 DR-
59 CC X-21,8 Y-82,5
60 C X-22 Y-82,501 DR+
61 L Y-98,499
62 CC X-21,8 Y-98,5
63 C X-21,647 Y-98,629 DR+
64 CC X-17,063 Y-102,5
65 C X-17,063 Y-96,5 DR-
66 L X+95,063
67 CC X+95,063 Y-102,5
68 C X+99,647 Y-98,629 DR-
69 CC X+99,8 Y-98,5
70 C X+100 Y-98,501 DR+
71 L Y-82,501
72 CC X+99,8 Y-82,5
73 C X+99,647 Y-82,371 DR+
74 CC X+95,063 Y-78,5
75 C X+95,063 Y-84,5 DR-
76 L X+52
77 CC X+52 Y-78,5
78 C X+46 Y-78,5 DR-
79 L Y-69
80 CC X+44,8 Y-69
81 C X+44,8 Y-67,8 DR+
82 L X+43,6
83 L X+39 Y-70 R0
84 L Z-25,25 F1000
85 L X+43,6 Y-71,2 RL F320
86 L X+44,8
87 CC X+44,8 Y-70
88 C X+46 Y-70 DR+
89 L Y-61,5
90 CC X+52 Y-61,5
91 C X+52 Y-55,5 DR-
92 L X+95,063
93 CC X+95,063 Y-61,5
94 C X+99,647 Y-57,629 DR-
95 CC X+99,8 Y-57,5
96 C X+100 Y-57,501 DR+
97 L Y-41,501
98 CC X+99,8 Y-41,5
99 C X+99,647 Y-41,371 DR+
100 CC X+95,063 Y-37,5
101 C X+95,063 Y-43,5 DR-
102 L X-17,063
103 CC X-17,063 Y-37,5
104 C X-21,647 Y-41,371 DR-
105 CC X-21,8 Y-41,5
106 C X-22 Y-41,501 DR+
107 L Y-57,499
108 CC X-21,8 Y-57,5
109 C X-21,647 Y-57,629 DR+
110 CC X-17,063 Y-61,5
111 C X-17,063 Y-55,5 DR-
112 L X+26
113 CC X+26 Y-61,5
114 C X+32 Y-61,5 DR-
115 L Y-78,5
116 CC X+26 Y-78,5
117 C X+26 Y-84,5 DR-
118 L X-17,063
119 CC X-17,063 Y-78,5
120 C X-21,647 Y-82,371 DR-
121 CC X-21,8 Y-82,5
122 C X-22 Y-82,501 DR+
123 L Y-98,499
124 CC X-21,8 Y-98,5
125 C X-21,647 Y-98,629 DR+
126 CC X-17,063 Y-102,5
127 C X-17,063 Y-96,5 DR-
128 L X+95,063
129 CC X+95,063 Y-102,5
130 C X+99,647 Y-98,629 DR-
131 CC X+99,8 Y-98,5
132 C X+100 Y-98,501 DR+
133 L Y-82,501
134 CC X+99,8 Y-82,5
135 C X+99,647 Y-82,371 DR+
136 CC X+95,063 Y-78,5
137 C X+95,063 Y-84,5 DR-
138 L X+52
139 CC X+52 Y-78,5
140 C X+46 Y-78,5 DR-
141 L Y-69
142 L Y-61,5
143 CC X+52 Y-61,5
144 C X+52 Y-55,5 DR-
145 L X+95,063
146 CC X+95,063 Y-61,5
147 C X+99,647 Y-57,629 DR-
148 CC X+99,8 Y-57,5
149 C X+100 Y-57,501 DR+
150 L Y-41,501
151 CC X+99,8 Y-41,5
152 C X+99,647 Y-41,371 DR+
153 CC X+95,063 Y-37,5
154 C X+95,063 Y-43,5 DR-
155 L X-17,063
156 CC X-17,063 Y-37,5
157 C X-21,647 Y-41,371 DR-
158 CC X-21,8 Y-41,5
159 C X-22 Y-41,501 DR+
160 L Y-57,499
161 CC X-21,8 Y-57,5
162 C X-21,647 Y-57,629 DR+
163 CC X-17,063 Y-61,5
164 C X-17,063 Y-55,5 DR-
165 L X+26
166 CC X+26 Y-61,5
167 C X+32 Y-61,5 DR-
168 L Y-78,5
169 CC X+26 Y-78,5
170 C X+26 Y-84,5 DR-
171 L X-17,063
172 CC X-17,063 Y-78,5
173 C X-21,647 Y-82,371 DR-
174 CC X-21,8 Y-82,5
175 C X-22 Y-82,501 DR+
176 L Y-98,499
177 CC X-21,8 Y-98,5
178 C X-21,647 Y-98,629 DR+
179 CC X-17,063 Y-102,5
180 C X-17,063 Y-96,5 DR-
181 L X+95,063
182 CC X+95,063 Y-102,5
183 C X+99,647 Y-98,629 DR-
184 CC X+99,8 Y-98,5
185 C X+100 Y-98,501 DR+
186 L Y-82,501
187 CC X+99,8 Y-82,5
188 C X+99,647 Y-82,371 DR+
189 CC X+95,063 Y-78,5
190 C X+95,063 Y-84,5 DR-
191 L X+52
192 CC X+52 Y-78,5
193 C X+46 Y-78,5 DR-
194 L Y-69
195 L Y-61,5
196 CC X+52 Y-61,5
197 C X+52 Y-55,5 DR-
198 L X+95,063
199 CC X+95,063 Y-61,5
200 C X+99,647 Y-57,629 DR-
201 CC X+99,8 Y-57,5
202 C X+100 Y-57,501 DR+
203 L Y-41,501
204 CC X+99,8 Y-41,5
205 C X+99,647 Y-41,371 DR+
206 CC X+95,063 Y-37,5
207 C X+95,063 Y-43,5 DR-
208 L X-17,063
209 CC X-17,063 Y-37,5
210 C X-21,647 Y-41,371 DR-
211 CC X-21,8 Y-41,5
212 C X-22 Y-41,501 DR+
213 L Y-57,499
214 CC X-21,8 Y-57,5
215 C X-21,647 Y-57,629 DR+
216 CC X-17,063 Y-61,5
217 C X-17,063 Y-55,5 DR-
218 L X+26
219 CC X+26 Y-61,5
220 C X+32 Y-61,5 DR-
221 L Y-78,5
222 CC X+26 Y-78,5
223 C X+26 Y-84,5 DR-
224 L X-17,063
225 CC X-17,063 Y-78,5
226 C X-21,647 Y-82,371 DR-
227 CC X-21,8 Y-82,5
228 C X-22 Y-82,501 DR+
229 L Y-98,499
230 CC X-21,8 Y-98,5
231 C X-21,647 Y-98,629 DR+
232 CC X-17,063 Y-102,5
233 C X-17,063 Y-96,5 DR-
234 L X+95,063
235 CC X+95,063 Y-102,5
236 C X+99,647 Y-98,629 DR-
237 CC X+99,8 Y-98,5
238 C X+100 Y-98,501 DR+
239 L Y-82,501
240 CC X+99,8 Y-82,5
241 C X+99,647 Y-82,371 DR+
242 CC X+95,063 Y-78,5
243 C X+95,063 Y-84,5 DR-
244 L X+52
245 CC X+52 Y-78,5
246 C X+46 Y-78,5 DR-
247 L Y-69
248 L Y-61,5
249 CC X+52 Y-61,5
250 C X+52 Y-55,5 DR-
251 L X+95,063
252 CC X+95,063 Y-61,5
253 C X+99,647 Y-57,629 DR-
254 CC X+99,8 Y-57,5
255 C X+100 Y-57,501 DR+
256 L Y-41,501
257 CC X+99,8 Y-41,5
258 C X+99,647 Y-41,371 DR+
259 CC X+95,063 Y-37,5
260 C X+95,063 Y-43,5 DR-
261 L X-17,063
262 CC X-17,063 Y-37,5
263 C X-21,647 Y-41,371 DR-
264 CC X-21,8 Y-41,5
265 C X-22 Y-41,501 DR+
266 L Y-57,499
267 CC X-21,8 Y-57,5
268 C X-21,647 Y-57,629 DR+
269 CC X-17,063 Y-61,5
270 C X-17,063 Y-55,5 DR-
271 L X+26
272 CC X+26 Y-61,5
273 C X+32 Y-61,5 DR-
274 L Y-78,5
275 CC X+26 Y-78,5
276 C X+26 Y-84,5 DR-
277 L X-17,063
278 CC X-17,063 Y-78,5
279 C X-21,647 Y-82,371 DR-
280 CC X-21,8 Y-82,5
281 C X-22 Y-82,501 DR+
282 L Y-98,499
283 CC X-21,8 Y-98,5
284 C X-21,647 Y-98,629 DR+
285 CC X-17,063 Y-102,5
286 C X-17,063 Y-96,5 DR-
287 L X+95,063
288 CC X+95,063 Y-102,5
289 C X+99,647 Y-98,629 DR-
290 CC X+99,8 Y-98,5
291 C X+100 Y-98,501 DR+
292 L Y-82,501
293 CC X+99,8 Y-82,5
294 C X+99,647 Y-82,371 DR+
295 CC X+95,063 Y-78,5
296 C X+95,063 Y-84,5 DR-
297 L X+52
298 CC X+52 Y-78,5
299 C X+46 Y-78,5 DR-
300 L Y-69
301 CC X+44,8 Y-69
302 C X+44,8 Y-67,8 DR+
303 L X+43,6
304 L X+39 Y-70 R0
305 L Z+50 FMAX
306 M78
307 M5
308 L Z-1 FMAX M91
309 ; T24 DIA 10 15366450 Z160 60HRC FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
310 ; CORRECTION USURE GAUCHE
311 ; SUREP R 0. SUREP Z 0.
312 TOOL CALL 24 Z S3183 DR-5
313 TOOL DEF 22
314 L X+139 Y-70 FMAX M3
315 L Z+50 FMAX M25
316 L Z+2 FMAX
317 L Z-22,95 F500
318 L X+138 Y-74,9 RL F535
319 L Y-75,9
320 CC X+139 Y-75,9
321 C X+139 Y-76,9 DR+
322 L X+161
323 CC X+161 Y-81,9
324 C X+161,995 Y-77 DR-
325 L X+167
326 L Y-63
327 L X+161,995
328 CC X+161 Y-58,1
329 C X+161 Y-63,1 DR-
330 L X+117
331 CC X+117 Y-58,1
332 C X+116,005 Y-63 DR-
333 L X+111
334 L Y-77
335 L X+116,005
336 CC X+117 Y-81,9
337 C X+117 Y-76,9 DR-
338 L X+140
339 CC X+140 Y-75,9
340 C X+141 Y-75,9 DR+
341 L Y-74,9
342 L X+139 Y-70 R0
343 L Z-23,05 F500
344 L X+138 Y-74,9 RL F535
345 L Y-75,9
346 CC X+139 Y-75,9
347 C X+139 Y-76,9 DR+
348 L X+161
349 CC X+161 Y-81,9
350 C X+161,995 Y-77 DR-
351 L X+167
352 L Y-63
353 L X+161,995
354 CC X+161 Y-58,1
355 C X+161 Y-63,1 DR-
356 L X+117
357 CC X+117 Y-58,1
358 C X+116,005 Y-63 DR-
359 L X+111
360 L Y-77
361 L X+116,005
362 CC X+117 Y-81,9
363 C X+117 Y-76,9 DR-
364 L X+140
365 L X+161
366 CC X+161 Y-81,9
367 C X+161,995 Y-77 DR-
368 L X+167
369 L Y-63
370 L X+161,995
371 CC X+161 Y-58,1
372 C X+161 Y-63,1 DR-
373 L X+117
374 CC X+117 Y-58,1
375 C X+116,005 Y-63 DR-
376 L X+111
377 L Y-77
378 L X+116,005
379 CC X+117 Y-81,9
380 C X+117 Y-76,9 DR-
381 L X+140
382 L X+161
383 CC X+161 Y-81,9
384 C X+161,995 Y-77 DR-
385 L X+167
386 L Y-63
387 L X+161,995
388 CC X+161 Y-58,1
389 C X+161 Y-63,1 DR-
390 L X+117
391 CC X+117 Y-58,1
392 C X+116,005 Y-63 DR-
393 L X+111
394 L Y-77
395 L X+116,005
396 CC X+117 Y-81,9
397 C X+117 Y-76,9 DR-
398 L X+140
399 CC X+140 Y-75,9
400 C X+141 Y-75,9 DR+
401 L Y-74,9
402 L X+139 Y-70 R0
403 L Z+50 FMAX
404 M78
405 M5
406 L Z-1 FMAX M91
407 L Y-1 FMAX M91
408 M30
409 END PGM A36798-REP28-MATRICE-F MM
