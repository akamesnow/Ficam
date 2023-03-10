0 BEGIN PGM SUPPORT BUTEE MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - SUPPORT BUTEE
4 ; PROG-CN DU 27-07-21 A 11:30
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T3 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
10 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
13 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
14 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
15 ; FIN DE LISTE DES OUTILS
16 L R0 FMAX
17 L Z-1 FMAX M91
18 ; *GROUPE D'USINAGE-1*
19 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
20 TOOL CALL 1 Z S1856 DR+0
21 TOOL DEF 3
22 L X-34 Y+2,575 FMAX M3
23 L Z+50 FMAX M8
24 ;  POINTAGE-PERCAGE
25 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
26 L X-34 Y+2,575 FMAX M99
27 L X+34 FMAX M99
28 L Z+50 FMAX
29 M9
30 M5
31 L Z-1 FMAX M91
32 ; T3 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
33 TOOL CALL 3 Z S2400 DR+0
34 TOOL DEF 13
35 L X-34 Y+2,575 FMAX M3
36 L Z+50 FMAX M8
37 ;  DEBOURRAGE
38 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q206=180 ; AVANCE PLONGEE PROF.~
    Q202=+2,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
39 L X-34 Y+2,575 FMAX M99
40 L X+34 FMAX M99
41 L Z+50 FMAX
42 M9
43 M5
44 L Z-1 FMAX M91
45 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
46 TOOL CALL 13 Z S833 DR+0
47 TOOL DEF 1
48 L X-34 Y+2,575 FMAX M3
49 L Z+50 FMAX M8
50 ;  POINTAGE-PERCAGE
51 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q206=83 ; AVANCE PLONGEE PROF.~
    Q202=+24 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
52 L X-34 Y+2,575 FMAX M99
53 L X+34 FMAX M99
54 L Z+50 FMAX
55 M9
56 M5
57 L Z-1 FMAX M91
58 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
59 TOOL CALL 1 Z S1856 DR+0
60 TOOL DEF 20
61 L X-66 Y+2,575 FMAX M3
62 L Z+50 FMAX M8
63 ;  POINTAGE-PERCAGE
64 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
65 L X-66 Y+2,575 FMAX M99
66 L X+0 Y+2,6 FMAX M99
67 L X+66 Y+2,575 FMAX M99
68 L Z+50 FMAX
69 M9
70 M5
71 L Z-1 FMAX M91
72 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
73 TOOL CALL 20 Z S3800 DR+0
74 TOOL DEF 29
75 L X-66 Y+2,575 FMAX M3
76 L Z+50 FMAX M8
77 ;  DEBOURRAGE
78 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
79 L X-66 Y+2,575 FMAX M99
80 L X+0 Y+2,6 FMAX M99
81 L X+66 Y+2,575 FMAX M99
82 L Z+50 FMAX
83 M9
84 M5
85 L Z-1 FMAX M91
86 M00
87 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
88 TOOL CALL 29 Z S200 DR+0
89 TOOL DEF 1
90 L X-66 Y+2,575 FMAX M3
91 L Z+50 FMAX M8
92 ;  TARAUDAGE
93 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q239=1. ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
94 L X-66 Y+2,575 FMAX M99
95 L X+0 Y+2,6 FMAX M99
96 L X+66 Y+2,575 FMAX M99
97 L Z+50 FMAX
98 M9
99 M5
100 L Z-1 FMAX M91
101 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
102 TOOL CALL 1 Z S1856 DR+0
103 TOOL DEF 25
104 L X+0 Y+17,5 FMAX M3
105 L Z+50 FMAX M8
106 ;  POINTAGE-PERCAGE
107 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
108 L X+0 Y+17,5 FMAX M99
109 L Y-14,5 FMAX M99
110 L Z+50 FMAX
111 M9
112 M5
113 L Z-1 FMAX M91
114 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
115 TOOL CALL 25 Z S3000 DR+0
116 TOOL DEF 19
117 L X+0 Y+17,5 FMAX M3
118 L Z+50 FMAX M8
119 ;  DEBOURRAGE
120 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
121 L X+0 Y+17,5 FMAX M99
122 L Y-14,5 FMAX M99
123 L Z+50 FMAX
124 M9
125 M5
126 L Z-1 FMAX M91
127 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
128 ; CORRECTION AUCUNE
129 ; SUREP R 0. SUREP Z 0.
130 TOOL CALL 19 Z S7427 DR+0
131 TOOL DEF 1
132 L X+1,237 Y+18,349 FMAX M3
133 L Z+50 FMAX M8
134 L Z+2 FMAX
135 L Z+0,5 F297
136 CC X+0 Y+17,5
137 CP IPA-180 Z+0,087 DR-
138 CC X+0 Y+17,5
139 CP IPA-180 Z-0,325 DR-
140 CC X+0 Y+17,5
141 CP IPA-180 Z-0,737 DR-
142 CC X+0 Y+17,5
143 CP IPA-180 Z-1,149 DR-
144 CC X+0 Y+17,5
145 CP IPA-180 Z-1,562 DR-
146 CC X+0 Y+17,5
147 CP IPA-180 Z-1,974 DR-
148 CC X+0 Y+17,5
149 CP IPA-180 Z-2,386 DR-
150 CC X+0 Y+17,5
151 CP IPA-180 Z-2,798 DR-
152 CC X+0 Y+17,5
153 CP IPA-180 Z-3,211 DR-
154 CC X+0 Y+17,5
155 CP IPA-180 Z-3,623 DR-
156 CC X+0 Y+17,5
157 CP IPA-180 Z-4,035 DR-
158 CC X+0 Y+17,5
159 CP IPA-180 Z-4,447 DR-
160 CC X+0 Y+17,5
161 CP IPA-180 Z-4,86 DR-
162 CC X+0 Y+17,5
163 CP IPA-180 Z-5,272 DR-
164 CC X+0 Y+17,5
165 CP IPA-180 Z-5,684 DR-
166 CC X+0 Y+17,5
167 CP IPA-180 Z-6,096 DR-
168 CC X+0 Y+17,5
169 CP IPA-180 Z-6,508 DR-
170 CC X+0 Y+17,5
171 CP IPA-180 Z-6,921 DR-
172 CC X+0 Y+17,5
173 CP IPA-34,463 Z-7 DR-
174 L X+0,019 Y+17,5 F3565
175 CC X-0,037 Y+17,5
176 C X-0,094 Y+17,5 DR+
177 CC X+0,037 Y+17,5
178 C X+0,169 Y+17,5 DR+
179 CC X-0,037 Y+17,5
180 C X-0,244 Y+17,5 DR+
181 CC X+0,037 Y+17,5
182 C X+0,319 Y+17,5 DR+
183 CC X-0,037 Y+17,5
184 C X-0,394 Y+17,5 DR+
185 CC X+0,037 Y+17,5
186 C X+0,469 Y+17,5 DR+
187 CC X-0,037 Y+17,5
188 C X-0,544 Y+17,5 DR+
189 CC X+0,037 Y+17,5
190 C X+0,619 Y+17,5 DR+
191 CC X-0,037 Y+17,5
192 C X-0,694 Y+17,5 DR+
193 CC X+0,037 Y+17,5
194 C X+0,769 Y+17,5 DR+
195 CC X-0,037 Y+17,5
196 C X-0,844 Y+17,5 DR+
197 CC X+0,037 Y+17,5
198 C X+0,919 Y+17,5 DR+
199 CC X-0,037 Y+17,5
200 C X-0,994 Y+17,5 DR+
201 CC X+0,037 Y+17,5
202 C X+1,069 Y+17,5 DR+
203 CC X-0,037 Y+17,5
204 C X-1,144 Y+17,5 DR+
205 CC X+0,037 Y+17,5
206 C X+1,219 Y+17,5 DR+
207 CC X-0,037 Y+17,5
208 C X-1,294 Y+17,5 DR+
209 CC X+0,037 Y+17,5
210 C X+1,369 Y+17,5 DR+
211 CC X-0,037 Y+17,5
212 C X-1,444 Y+17,5 DR+
213 CC X+0,037 Y+17,5
214 C X+1,519 Y+17,5 DR+
215 CC X-0,037 Y+17,5
216 C X-1,594 Y+17,5 DR+
217 CC X+0,037 Y+17,5
218 C X+1,669 Y+17,5 DR+
219 CC X-0,037 Y+17,5
220 C X-1,744 Y+17,5 DR+
221 CC X+0,037 Y+17,5
222 C X+1,819 Y+17,5 DR+
223 CC X-0,037 Y+17,5
224 C X-1,894 Y+17,5 DR+
225 CC X+0,037 Y+17,5
226 C X+1,969 Y+17,5 DR+
227 CC X-0,037 Y+17,5
228 C X-2,044 Y+17,5 DR+
229 CC X+0,037 Y+17,5
230 C X+2,119 Y+17,5 DR+
231 CC X-0,037 Y+17,5
232 C X-2,194 Y+17,5 DR+
233 CC X+0,037 Y+17,5
234 C X+1,139 Y+15,56 DR+
235 CC X+0 Y+17,5
236 C X+2,25 Y+17,5 DR+
237 CC X+0 Y+17,5
238 C X+1,139 Y+15,56 DR+
239 L Z+50 FMAX
240 L X-1,579 Y-15,365 FMAX
241 L Z+2 FMAX
242 L Z+0,5 F297
243 CC X+0 Y-14,5
244 CP IPA-180 Z+0,006 DR-
245 CC X+0 Y-14,5
246 CP IPA-180 Z-0,489 DR-
247 CC X+0 Y-14,5
248 CP IPA-180 Z-0,984 DR-
249 CC X+0 Y-14,5
250 CP IPA-180 Z-1,479 DR-
251 CC X+0 Y-14,5
252 CP IPA-180 Z-1,974 DR-
253 CC X+0 Y-14,5
254 CP IPA-180 Z-2,468 DR-
255 CC X+0 Y-14,5
256 CP IPA-180 Z-2,963 DR-
257 CC X+0 Y-14,5
258 CP IPA-180 Z-3,458 DR-
259 CC X+0 Y-14,5
260 CP IPA-180 Z-3,953 DR-
261 CC X+0 Y-14,5
262 CP IPA-180 Z-4,447 DR-
263 CC X+0 Y-14,5
264 CP IPA-180 Z-4,942 DR-
265 CC X+0 Y-14,5
266 CP IPA-180 Z-5,437 DR-
267 CC X+0 Y-14,5
268 CP IPA-180 Z-5,931 DR-
269 CC X+0 Y-14,5
270 CP IPA-180 Z-6,426 DR-
271 CC X+0 Y-14,5
272 CP IPA-208,715 Z-7 DR-
273 L X+0,019 Y-14,5 F3565
274 CC X-0,037 Y-14,5
275 C X-0,094 Y-14,5 DR+
276 CC X+0,037 Y-14,5
277 C X+0,169 Y-14,5 DR+
278 CC X-0,037 Y-14,5
279 C X-0,244 Y-14,5 DR+
280 CC X+0,037 Y-14,5
281 C X+0,319 Y-14,5 DR+
282 CC X-0,037 Y-14,5
283 C X-0,394 Y-14,5 DR+
284 CC X+0,037 Y-14,5
285 C X+0,469 Y-14,5 DR+
286 CC X-0,037 Y-14,5
287 C X-0,544 Y-14,5 DR+
288 CC X+0,037 Y-14,5
289 C X+0,619 Y-14,5 DR+
290 CC X-0,037 Y-14,5
291 C X-0,694 Y-14,5 DR+
292 CC X+0,037 Y-14,5
293 C X+0,769 Y-14,5 DR+
294 CC X-0,037 Y-14,5
295 C X-0,844 Y-14,5 DR+
296 CC X+0,037 Y-14,5
297 C X+0,919 Y-14,5 DR+
298 CC X-0,037 Y-14,5
299 C X-0,994 Y-14,5 DR+
300 CC X+0,037 Y-14,5
301 C X+1,069 Y-14,5 DR+
302 CC X-0,037 Y-14,5
303 C X-1,144 Y-14,5 DR+
304 CC X+0,037 Y-14,5
305 C X+1,219 Y-14,5 DR+
306 CC X-0,037 Y-14,5
307 C X-1,294 Y-14,5 DR+
308 CC X+0,037 Y-14,5
309 C X+1,369 Y-14,5 DR+
310 CC X-0,037 Y-14,5
311 C X-1,444 Y-14,5 DR+
312 CC X+0,037 Y-14,5
313 C X+1,519 Y-14,5 DR+
314 CC X-0,037 Y-14,5
315 C X-1,594 Y-14,5 DR+
316 CC X+0,037 Y-14,5
317 C X+1,669 Y-14,5 DR+
318 CC X-0,037 Y-14,5
319 C X-1,744 Y-14,5 DR+
320 CC X+0,037 Y-14,5
321 C X+1,819 Y-14,5 DR+
322 CC X-0,037 Y-14,5
323 C X-1,894 Y-14,5 DR+
324 CC X+0,037 Y-14,5
325 C X+1,969 Y-14,5 DR+
326 CC X-0,037 Y-14,5
327 C X-2,044 Y-14,5 DR+
328 CC X+0,037 Y-14,5
329 C X+2,119 Y-14,5 DR+
330 CC X-0,037 Y-14,5
331 C X-2,194 Y-14,5 DR+
332 CC X+0,037 Y-14,5
333 C X+2,269 Y-14,5 DR+
334 CC X-0,037 Y-14,5
335 C X-2,344 Y-14,5 DR+
336 CC X+0,037 Y-14,5
337 C X+2,419 Y-14,5 DR+
338 CC X-0,037 Y-14,5
339 C X-2,494 Y-14,5 DR+
340 CC X+0,037 Y-14,5
341 C X-2,078 Y-15,891 DR+
342 CC X+0 Y-14,5
343 C X+2,5 Y-14,5 DR+
344 CC X+0 Y-14,5
345 C X-2,078 Y-15,891 DR+
346 L Z+50 FMAX
347 TOOL CALL 19 Z S7427 DR-3
348 L X+0 Y+17,5 Z+50 FMAX
349 L Z+2 FMAX
350 L Z-7 F297
351 L X-1,05 Y+18,1 RL F3565
352 L X-1,65
353 CC X-1,65 Y+17,5
354 C X-2,25 Y+17,5 DR+
355 CC X+0 Y+17,5
356 C X+2,25 Y+17,5 DR+
357 CC X+0 Y+17,5
358 C X-2,25 Y+17,5 DR+
359 CC X+0 Y+17,5
360 C X-1,418 Y+15,753 DR+
361 CC X-1,04 Y+16,219
362 C X-0,574 Y+15,841 DR+
363 L X-0,196 Y+16,307
364 L X+0 Y+17,5 R0
365 L Z+50 FMAX
366 L Y-14,5 FMAX
367 L Z+2 FMAX
368 L Z-7 F297
369 L X-1,3 Y-13,9 RL F3565
370 L X-1,9
371 CC X-1,9 Y-14,5
372 C X-2,5 Y-14,5 DR+
373 CC X+0 Y-14,5
374 C X+2,5 Y-14,5 DR+
375 CC X+0 Y-14,5
376 C X-2,5 Y-14,5 DR+
377 CC X+0 Y-14,5
378 C X-1,742 Y-16,293 DR+
379 CC X-1,324 Y-15,863
380 C X-0,893 Y-16,281 DR+
381 L X-0,475 Y-15,851
382 L X+0 Y-14,5 R0
383 L Z+50 FMAX
384 M9
385 M5
386 L Z-1 FMAX M91
387 L Y-1 FMAX M91
388 M30
389 END PGM SUPPORT BUTEE MM
