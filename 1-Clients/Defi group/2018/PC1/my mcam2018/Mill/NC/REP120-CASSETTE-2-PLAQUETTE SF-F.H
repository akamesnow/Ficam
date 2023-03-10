0 BEGIN PGM REP120-CASSETTE-2-PLAQUETTE SF-F MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP120-CASSETTE-2-PLAQUETTE SF-F
4 ; PROG-CN DU 28-01-20 A 14:31
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; T6 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
13 ; T11 ALESOIR DIA 13 CARB VC 15 ALESOIR DIAM=13. 5 DENTS ARS
14 ; T9 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
15 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
16 ; T8 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
17 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
18 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
19 ; T14 FRAISE DE FINITION DIA 10 OK FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
20 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
21 ; FIN DE LISTE DES OUTILS
22 L R0 FMAX
23 L Z-1 FMAX M91
24 ; *GROUPE D'USINAGE-1*
25 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
26 TOOL CALL 1 Z S1856 DR+0
27 TOOL DEF 25
28 L X-127 Y+28,5 FMAX M3
29 L Z+50 FMAX M8
30 ;  POINTAGE-PERCAGE
31 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
32 L X-127 Y+28,5 FMAX M99
33 L X-12 Y+46,5 FMAX M99
34 L X+97 Y+28,5 FMAX M99
35 L X+112 Y-33,5 FMAX M99
36 L X-2 Y-46,5 FMAX M99
37 L X-127 Y-31,5 FMAX M99
38 L Z+50 FMAX
39 M9
40 M5
41 L Z-1 FMAX M91
42 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
43 TOOL CALL 25 Z S3000 DR+0
44 TOOL DEF 28
45 L X-127 Y+28,5 FMAX M3
46 L Z+50 FMAX M7
47 ;  DEBOURRAGE
48 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-25 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
49 L X-127 Y+28,5 FMAX M99
50 L X-12 Y+46,5 FMAX M99
51 L X+97 Y+28,5 FMAX M99
52 L X+112 Y-33,5 FMAX M99
53 L X-2 Y-46,5 FMAX M99
54 L X-127 Y-31,5 FMAX M99
55 L Z+50 FMAX
56 M9
57 M5
58 L Z-1 FMAX M91
59 M00
60 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
61 TOOL CALL 28 Z S100 DR+0
62 TOOL DEF 1
63 L X-127 Y+28,5 FMAX M3
64 L Z+50 FMAX M8
65 ;  TARAUDAGE
66 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
67 L X-127 Y+28,5 FMAX M99
68 L X-12 Y+46,5 FMAX M99
69 L X+97 Y+28,5 FMAX M99
70 L X+112 Y-33,5 FMAX M99
71 L X-2 Y-46,5 FMAX M99
72 L X-127 Y-31,5 FMAX M99
73 L Z+50 FMAX
74 M9
75 M5
76 L Z-1 FMAX M91
77 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
78 TOOL CALL 1 Z S1856 DR+0
79 TOOL DEF 20
80 L X-26 Y+35,5 FMAX M3
81 L Z+50 FMAX M8
82 ;  POINTAGE-PERCAGE
83 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
84 L X-26 Y+35,5 FMAX M99
85 L Y+5,5 FMAX M99
86 L X+1,407 Y+8,805 FMAX M99
87 L X+129 Y+30,5 FMAX M99
88 L X+109 Y+10,5 FMAX M99
89 L X-92 Y-37,5 FMAX M99
90 L X+53 FMAX M99
91 L Z+50 FMAX
92 M9
93 M5
94 L Z-1 FMAX M91
95 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
96 TOOL CALL 20 Z S3800 DR+0
97 TOOL DEF 1
98 L X-26 Y+35,5 FMAX M3
99 L Z+50 FMAX M7
100 ;  DEBOURRAGE
101 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
102 L X-26 Y+35,5 FMAX M99
103 L Y+5,5 FMAX M99
104 L X+1,407 Y+8,805 FMAX M99
105 L X+129 Y+30,5 FMAX M99
106 L X+109 Y+10,5 FMAX M99
107 L X-92 Y-37,5 FMAX M99
108 L X+53 FMAX M99
109 L Z+50 FMAX
110 M9
111 M5
112 L Z-1 FMAX M91
113 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
114 TOOL CALL 1 Z S1856 DR+0
115 TOOL DEF 6
116 L X-26 Y+20,5 FMAX M3
117 L Z+50 FMAX M8
118 ;  POINTAGE-PERCAGE
119 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
120 L X-26 Y+20,5 FMAX M99
121 L X+119 FMAX M99
122 L Z+50 FMAX
123 M9
124 M5
125 L Z-1 FMAX M91
126 ; T6 FO DIA 12.7 VC40 DMF FORET DIAM=12.7 2 DENTS A=118. ARS
127 TOOL CALL 6 Z S1650 DR+0
128 TOOL DEF 11
129 L X-26 Y+20,5 FMAX M3
130 L Z+50 FMAX M7
131 ;  DEBOURRAGE
132 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=140 ; AVANCE PLONGEE PROF.~
    Q202=+6,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
133 L X-26 Y+20,5 FMAX M99
134 L X+119 FMAX M99
135 L Z+50 FMAX
136 M9
137 M5
138 L Z-1 FMAX M91
139 ; T11 ALESOIR DIA 13 CARB VC 15 ALESOIR DIAM=13. 5 DENTS ARS
140 TOOL CALL 11 Z S416 DR+0
141 TOOL DEF 1
142 L X-26 Y+20,5 FMAX M3
143 L Z+50 FMAX M8
144 ;  POINTAGE-PERCAGE
145 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=63 ; AVANCE PLONGEE PROF.~
    Q202=+30 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
146 L X-26 Y+20,5 FMAX M99
147 L X+119 FMAX M99
148 L Z+50 FMAX
149 M9
150 M5
151 L Z-1 FMAX M91
152 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
153 TOOL CALL 1 Z S1856 DR+0
154 TOOL DEF 9
155 L X-96 Y-49,5 FMAX M3
156 L Z+50 FMAX M8
157 ;  POINTAGE-PERCAGE
158 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,8 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,8 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
159 L X-96 Y-49,5 FMAX M99
160 L X+49 FMAX M99
161 L Z+50 FMAX
162 M9
163 M5
164 L Z-1 FMAX M91
165 ; T9 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
166 TOOL CALL 9 Z S2400 DR+0
167 TOOL DEF 13
168 L X-96 Y-49,5 FMAX M3
169 L Z+50 FMAX M7
170 ;  DEBOURRAGE
171 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=180 ; AVANCE PLONGEE PROF.~
    Q202=+2,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
172 L X-96 Y-49,5 FMAX M99
173 L X+49 FMAX M99
174 L Z+50 FMAX
175 M9
176 M5
177 L Z-1 FMAX M91
178 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
179 TOOL CALL 13 Z S833 DR+0
180 TOOL DEF 1
181 L X-96 Y-49,5 FMAX M3
182 L Z+50 FMAX M8
183 ;  POINTAGE-PERCAGE
184 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=83 ; AVANCE PLONGEE PROF.~
    Q202=+30 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
185 L X-96 Y-49,5 FMAX M99
186 L X+49 FMAX M99
187 L Z+50 FMAX
188 M9
189 M5
190 L Z-1 FMAX M91
191 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
192 TOOL CALL 1 Z S1856 DR+0
193 TOOL DEF 8
194 L X-127 Y-11,5 FMAX M3
195 L Z+50 FMAX M8
196 ;  POINTAGE-PERCAGE
197 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
198 L X-127 Y-11,5 FMAX M99
199 L X+112 FMAX M99
200 L Z+50 FMAX
201 M9
202 M5
203 L Z-1 FMAX M91
204 ; T8 DIA 9.8 VC 40 DMF FORET DIAM=9.8 2 DENTS A=118. ARS
205 TOOL CALL 8 Z S1600 DR+0
206 TOOL DEF 10
207 L X-127 Y-11,5 FMAX M3
208 L Z+50 FMAX M7
209 ;  DEBOURRAGE
210 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=150 ; AVANCE PLONGEE PROF.~
    Q202=+4,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
211 L X-127 Y-11,5 FMAX M99
212 L X+112 FMAX M99
213 L Z+50 FMAX
214 M9
215 M5
216 L Z-1 FMAX M91
217 ; T10 ALESOIR DIA 10 CARB VC 15  ALESOIR DIAM=10. 5 DENTS ARS
218 TOOL CALL 10 Z S500 DR+0
219 TOOL DEF 18
220 L X-127 Y-11,5 FMAX M3
221 L Z+50 FMAX M8
222 ;  POINTAGE-PERCAGE
223 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=75 ; AVANCE PLONGEE PROF.~
    Q202=+30 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
224 L X-127 Y-11,5 FMAX M99
225 L X+112 FMAX M99
226 L Z+50 FMAX
227 M9
228 M5
229 L Z-1 FMAX M91
230 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
231 ; CORRECTION AUCUNE
232 ; SUREP R 0. SUREP Z 0.05
233 TOOL CALL 18 Z S2865 DR+0
234 TOOL DEF 14
235 L X-25,537 Y+18,043 FMAX M3
236 L Z+50 FMAX M25
237 L Z+2 FMAX
238 L Z+0,5 F600
239 CC X-26 Y+20,5
240 CP IPA-180 Z-0,049 DR-
241 CC X-26 Y+20,5
242 CP IPA-180 Z-0,598 DR-
243 CC X-26 Y+20,5
244 CP IPA-180 Z-1,148 DR-
245 CC X-26 Y+20,5
246 CP IPA-180 Z-1,697 DR-
247 CC X-26 Y+20,5
248 CP IPA-180 Z-2,246 DR-
249 CC X-26 Y+20,5
250 CP IPA-180 Z-2,795 DR-
251 CC X-26 Y+20,5
252 CP IPA-180 Z-3,345 DR-
253 CC X-26 Y+20,5
254 CP IPA-180 Z-3,894 DR-
255 CC X-26 Y+20,5
256 CP IPA-280,672 Z-4,75 DR-
257 L X-25 Y+20,5 F573
258 CC X-28 Y+20,5
259 C X-27,813 Y+23,494 DR+
260 CC X-26 Y+20,5
261 C X-22,5 Y+20,5 DR+
262 CC X-26 Y+20,5
263 C X-27,813 Y+23,494 DR+
264 L Z+10 FMAX
265 L X-25,537 Y+18,043 FMAX
266 L Z+0,2 FMAX
267 CC X-26 Y+20,5
268 CP IPA-180 Z-0,349 DR- F600
269 CC X-26 Y+20,5
270 CP IPA-180 Z-0,898 DR-
271 CC X-26 Y+20,5
272 CP IPA-180 Z-1,448 DR-
273 CC X-26 Y+20,5
274 CP IPA-180 Z-1,997 DR-
275 CC X-26 Y+20,5
276 CP IPA-180 Z-2,546 DR-
277 CC X-26 Y+20,5
278 CP IPA-180 Z-3,095 DR-
279 CC X-26 Y+20,5
280 CP IPA-180 Z-3,644 DR-
281 CC X-26 Y+20,5
282 CP IPA-180 Z-4,194 DR-
283 CC X-26 Y+20,5
284 CP IPA-280,672 Z-5,05 DR-
285 L X-25 Y+20,5 F573
286 CC X-28 Y+20,5
287 C X-27,813 Y+23,494 DR+
288 CC X-26 Y+20,5
289 C X-22,5 Y+20,5 DR+
290 CC X-26 Y+20,5
291 C X-27,813 Y+23,494 DR+
292 L Z+50 FMAX
293 L X+119,463 Y+18,043 FMAX
294 L Z+2 FMAX
295 L Z+0,5 F600
296 CC X+119 Y+20,5
297 CP IPA-180 Z-0,049 DR-
298 CC X+119 Y+20,5
299 CP IPA-180 Z-0,598 DR-
300 CC X+119 Y+20,5
301 CP IPA-180 Z-1,148 DR-
302 CC X+119 Y+20,5
303 CP IPA-180 Z-1,697 DR-
304 CC X+119 Y+20,5
305 CP IPA-180 Z-2,246 DR-
306 CC X+119 Y+20,5
307 CP IPA-180 Z-2,795 DR-
308 CC X+119 Y+20,5
309 CP IPA-180 Z-3,345 DR-
310 CC X+119 Y+20,5
311 CP IPA-180 Z-3,894 DR-
312 CC X+119 Y+20,5
313 CP IPA-280,672 Z-4,75 DR-
314 L X+120 Y+20,5 F573
315 CC X+117 Y+20,5
316 C X+117,188 Y+23,494 DR+
317 CC X+119 Y+20,5
318 C X+122,5 Y+20,5 DR+
319 CC X+119 Y+20,5
320 C X+117,188 Y+23,494 DR+
321 L Z+10 FMAX
322 L X+119,463 Y+18,043 FMAX
323 L Z+0,2 FMAX
324 CC X+119 Y+20,5
325 CP IPA-180 Z-0,349 DR- F600
326 CC X+119 Y+20,5
327 CP IPA-180 Z-0,898 DR-
328 CC X+119 Y+20,5
329 CP IPA-180 Z-1,448 DR-
330 CC X+119 Y+20,5
331 CP IPA-180 Z-1,997 DR-
332 CC X+119 Y+20,5
333 CP IPA-180 Z-2,546 DR-
334 CC X+119 Y+20,5
335 CP IPA-180 Z-3,095 DR-
336 CC X+119 Y+20,5
337 CP IPA-180 Z-3,644 DR-
338 CC X+119 Y+20,5
339 CP IPA-180 Z-4,194 DR-
340 CC X+119 Y+20,5
341 CP IPA-280,672 Z-5,05 DR-
342 L X+120 Y+20,5 F573
343 CC X+117 Y+20,5
344 C X+117,188 Y+23,494 DR+
345 CC X+119 Y+20,5
346 C X+122,5 Y+20,5 DR+
347 CC X+119 Y+20,5
348 C X+117,188 Y+23,494 DR+
349 L Z+50 FMAX
350 TOOL CALL 18 Z S2865 DR-5
351 L X-26 Y+20,5 Z+50 FMAX
352 L Z-2,75 FMAX
353 L Z-5,05 F600
354 L X-27,5 Y+21,5 RL F573
355 L X-28,5
356 CC X-28,5 Y+20,5
357 C X-29,5 Y+20,5 DR+
358 CC X-26 Y+20,5
359 C X-22,5 Y+20,5 DR+
360 CC X-26 Y+20,5
361 C X-29,5 Y+20,5 DR+
362 CC X-26 Y+20,5
363 C X-28,944 Y+18,607 DR+
364 CC X-26 Y+20,5
365 C X-22,5 Y+20,5 DR+
366 CC X-26 Y+20,5
367 C X-29,5 Y+20,5 DR+
368 CC X-26 Y+20,5
369 C X-28,944 Y+18,607 DR+
370 CC X-28,103 Y+19,148
371 C X-27,562 Y+18,307 DR+
372 L X-26,721 Y+18,848
373 L X-26 Y+20,5 R0
374 L Z+50 FMAX
375 L X+119 FMAX
376 L Z-2,75 FMAX
377 L Z-5,05 F600
378 L X+117,5 Y+21,5 RL F573
379 L X+116,5
380 CC X+116,5 Y+20,5
381 C X+115,5 Y+20,5 DR+
382 CC X+119 Y+20,5
383 C X+122,5 Y+20,5 DR+
384 CC X+119 Y+20,5
385 C X+115,5 Y+20,5 DR+
386 CC X+119 Y+20,5
387 C X+116,056 Y+18,607 DR+
388 CC X+119 Y+20,5
389 C X+122,5 Y+20,5 DR+
390 CC X+119 Y+20,5
391 C X+115,5 Y+20,5 DR+
392 CC X+119 Y+20,5
393 C X+116,056 Y+18,607 DR+
394 CC X+116,897 Y+19,148
395 C X+117,438 Y+18,307 DR+
396 L X+118,279 Y+18,848
397 L X+119 Y+20,5 R0
398 L Z+50 FMAX
399 M78
400 M5
401 L Z-1 FMAX M91
402 ; T14 FRAISE DE FINITION DIA 10 OK FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
403 ; CORRECTION USURE GAUCHE
404 ; SUREP R 0. SUREP Z 0.
405 TOOL CALL 14 Z S1200 DR-5
406 TOOL DEF 19
407 L X-26 Y+20,5 FMAX M3
408 L Z+50 FMAX M25
409 L Z+2 FMAX
410 L Z-5,08 F1000
411 L X-27,5 Y+21,5 RL F400
412 L X-28,5
413 CC X-28,5 Y+20,5
414 C X-29,5 Y+20,5 DR+
415 CC X-26 Y+20,5
416 C X-22,5 Y+20,5 DR+
417 CC X-26 Y+20,5
418 C X-29,5 Y+20,5 DR+
419 CC X-26 Y+20,5
420 C X-28,944 Y+18,607 DR+
421 CC X-26 Y+20,5
422 C X-22,5 Y+20,5 DR+
423 CC X-26 Y+20,5
424 C X-29,5 Y+20,5 DR+
425 CC X-26 Y+20,5
426 C X-28,944 Y+18,607 DR+
427 CC X-28,103 Y+19,148
428 C X-27,562 Y+18,307 DR+
429 L X-26,721 Y+18,848
430 L X-26 Y+20,5 R0
431 L Z+50 FMAX
432 L X+119 FMAX
433 L Z+2 FMAX
434 L Z-5,08 F1000
435 L X+117,5 Y+21,5 RL F400
436 L X+116,5
437 CC X+116,5 Y+20,5
438 C X+115,5 Y+20,5 DR+
439 CC X+119 Y+20,5
440 C X+122,5 Y+20,5 DR+
441 CC X+119 Y+20,5
442 C X+115,5 Y+20,5 DR+
443 CC X+119 Y+20,5
444 C X+116,056 Y+18,607 DR+
445 CC X+119 Y+20,5
446 C X+122,5 Y+20,5 DR+
447 CC X+119 Y+20,5
448 C X+115,5 Y+20,5 DR+
449 CC X+119 Y+20,5
450 C X+116,056 Y+18,607 DR+
451 CC X+116,897 Y+19,148
452 C X+117,438 Y+18,307 DR+
453 L X+118,279 Y+18,848
454 L X+119 Y+20,5 R0
455 L Z+50 FMAX
456 M78
457 M5
458 L Z-1 FMAX M91
459 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
460 ; CORRECTION AUCUNE
461 ; SUREP R 0. SUREP Z 0.
462 TOOL CALL 19 Z S7427 DR+0
463 TOOL DEF 1
464 L X-97,197 Y-49,415 FMAX M3
465 L Z+50 FMAX M8
466 L Z+2 FMAX
467 L Z+0,5 F297
468 CC X-96 Y-49,5
469 CP IPA-180 Z+0,236 DR-
470 CC X-96 Y-49,5
471 CP IPA-180 Z-0,027 DR-
472 CC X-96 Y-49,5
473 CP IPA-180 Z-0,291 DR-
474 CC X-96 Y-49,5
475 CP IPA-180 Z-0,554 DR-
476 CC X-96 Y-49,5
477 CP IPA-180 Z-0,818 DR-
478 CC X-96 Y-49,5
479 CP IPA-180 Z-1,082 DR-
480 CC X-96 Y-49,5
481 CP IPA-180 Z-1,345 DR-
482 CC X-96 Y-49,5
483 CP IPA-180 Z-1,609 DR-
484 CC X-96 Y-49,5
485 CP IPA-180 Z-1,873 DR-
486 CC X-96 Y-49,5
487 CP IPA-180 Z-2,136 DR-
488 CC X-96 Y-49,5
489 CP IPA-180 Z-2,399 DR-
490 CC X-96 Y-49,5
491 CP IPA-180 Z-2,663 DR-
492 CC X-96 Y-49,5
493 CP IPA-180 Z-2,927 DR-
494 CC X-96 Y-49,5
495 CP IPA-180 Z-3,191 DR-
496 CC X-96 Y-49,5
497 CP IPA-180 Z-3,454 DR-
498 CC X-96 Y-49,5
499 CP IPA-180 Z-3,718 DR-
500 CC X-96 Y-49,5
501 CP IPA-180 Z-3,982 DR-
502 CC X-96 Y-49,5
503 CP IPA-180 Z-4,245 DR-
504 CC X-96 Y-49,5
505 CP IPA-180 Z-4,508 DR-
506 CC X-96 Y-49,5
507 CP IPA-180 Z-4,772 DR-
508 CC X-96 Y-49,5
509 CP IPA-175,938 Z-5,03 DR-
510 L X-95,994 Y-49,5 F3565
511 CC X-96,012 Y-49,5
512 C X-96,031 Y-49,5 DR+
513 CC X-95,987 Y-49,5
514 C X-95,944 Y-49,5 DR+
515 CC X-96,012 Y-49,5
516 C X-96,081 Y-49,5 DR+
517 CC X-95,987 Y-49,5
518 C X-95,894 Y-49,5 DR+
519 CC X-96,012 Y-49,5
520 C X-96,131 Y-49,5 DR+
521 CC X-95,987 Y-49,5
522 C X-95,844 Y-49,5 DR+
523 CC X-96,012 Y-49,5
524 C X-96,181 Y-49,5 DR+
525 CC X-95,987 Y-49,5
526 C X-95,794 Y-49,5 DR+
527 CC X-96,012 Y-49,5
528 C X-96,231 Y-49,5 DR+
529 CC X-95,987 Y-49,5
530 C X-95,744 Y-49,5 DR+
531 CC X-96,012 Y-49,5
532 C X-96,281 Y-49,5 DR+
533 CC X-95,987 Y-49,5
534 C X-95,694 Y-49,5 DR+
535 CC X-96,012 Y-49,5
536 C X-96,331 Y-49,5 DR+
537 CC X-95,987 Y-49,5
538 C X-95,644 Y-49,5 DR+
539 CC X-96,012 Y-49,5
540 C X-96,381 Y-49,5 DR+
541 CC X-95,987 Y-49,5
542 C X-95,594 Y-49,5 DR+
543 CC X-96,012 Y-49,5
544 C X-96,431 Y-49,5 DR+
545 CC X-95,987 Y-49,5
546 C X-95,544 Y-49,5 DR+
547 CC X-96,012 Y-49,5
548 C X-96,481 Y-49,5 DR+
549 CC X-95,987 Y-49,5
550 C X-95,494 Y-49,5 DR+
551 CC X-96,012 Y-49,5
552 C X-96,531 Y-49,5 DR+
553 CC X-95,987 Y-49,5
554 C X-95,444 Y-49,5 DR+
555 CC X-96,012 Y-49,5
556 C X-96,581 Y-49,5 DR+
557 CC X-95,987 Y-49,5
558 C X-95,394 Y-49,5 DR+
559 CC X-96,012 Y-49,5
560 C X-96,631 Y-49,5 DR+
561 CC X-95,987 Y-49,5
562 C X-95,344 Y-49,5 DR+
563 CC X-96,012 Y-49,5
564 C X-96,681 Y-49,5 DR+
565 CC X-95,987 Y-49,5
566 C X-95,294 Y-49,5 DR+
567 CC X-96,012 Y-49,5
568 C X-96,731 Y-49,5 DR+
569 CC X-95,987 Y-49,5
570 C X-95,244 Y-49,5 DR+
571 CC X-96,012 Y-49,5
572 C X-96,781 Y-49,5 DR+
573 CC X-95,987 Y-49,5
574 C X-95,194 Y-49,5 DR+
575 CC X-96,012 Y-49,5
576 C X-96,831 Y-49,5 DR+
577 CC X-95,987 Y-49,5
578 C X-95,144 Y-49,5 DR+
579 CC X-96,012 Y-49,5
580 C X-96,881 Y-49,5 DR+
581 CC X-95,987 Y-49,5
582 C X-95,094 Y-49,5 DR+
583 CC X-96,012 Y-49,5
584 C X-96,931 Y-49,5 DR+
585 CC X-95,987 Y-49,5
586 C X-95,044 Y-49,5 DR+
587 CC X-96,012 Y-49,5
588 C X-96,981 Y-49,5 DR+
589 CC X-95,987 Y-49,5
590 C X-94,994 Y-49,5 DR+
591 CC X-96,012 Y-49,5
592 C X-97,031 Y-49,5 DR+
593 CC X-95,987 Y-49,5
594 C X-94,944 Y-49,5 DR+
595 CC X-96,012 Y-49,5
596 C X-97,081 Y-49,5 DR+
597 CC X-95,987 Y-49,5
598 C X-94,894 Y-49,5 DR+
599 CC X-96,012 Y-49,5
600 C X-97,131 Y-49,5 DR+
601 CC X-95,987 Y-49,5
602 C X-94,844 Y-49,5 DR+
603 CC X-96,012 Y-49,5
604 C X-97,181 Y-49,5 DR+
605 CC X-95,987 Y-49,5
606 C X-94,794 Y-49,5 DR+
607 CC X-96,012 Y-49,5
608 C X-97,231 Y-49,5 DR+
609 CC X-95,987 Y-49,5
610 C X-94,744 Y-49,5 DR+
611 CC X-96,012 Y-49,5
612 C X-97,281 Y-49,5 DR+
613 CC X-95,987 Y-49,5
614 C X-94,694 Y-49,5 DR+
615 CC X-96,012 Y-49,5
616 C X-97,331 Y-49,5 DR+
617 CC X-95,987 Y-49,5
618 C X-94,644 Y-49,5 DR+
619 CC X-96,012 Y-49,5
620 C X-97,381 Y-49,5 DR+
621 CC X-95,987 Y-49,5
622 C X-94,594 Y-49,5 DR+
623 CC X-96,012 Y-49,5
624 C X-97,431 Y-49,5 DR+
625 CC X-95,987 Y-49,5
626 C X-94,544 Y-49,5 DR+
627 CC X-96,012 Y-49,5
628 C X-97,481 Y-49,5 DR+
629 CC X-95,987 Y-49,5
630 C X-94,494 Y-49,5 DR+
631 CC X-96,012 Y-49,5
632 C X-97,531 Y-49,5 DR+
633 CC X-95,987 Y-49,5
634 C X-94,444 Y-49,5 DR+
635 CC X-96,012 Y-49,5
636 C X-97,581 Y-49,5 DR+
637 CC X-95,987 Y-49,5
638 C X-94,394 Y-49,5 DR+
639 CC X-96,012 Y-49,5
640 C X-97,631 Y-49,5 DR+
641 CC X-95,987 Y-49,5
642 C X-94,344 Y-49,5 DR+
643 CC X-96,012 Y-49,5
644 C X-97,681 Y-49,5 DR+
645 CC X-95,987 Y-49,5
646 C X-94,294 Y-49,5 DR+
647 CC X-96,012 Y-49,5
648 C X-97,731 Y-49,5 DR+
649 CC X-95,987 Y-49,5
650 C X-94,244 Y-49,5 DR+
651 CC X-96,012 Y-49,5
652 C X-97,781 Y-49,5 DR+
653 CC X-95,987 Y-49,5
654 C X-94,194 Y-49,5 DR+
655 CC X-96,012 Y-49,5
656 C X-97,831 Y-49,5 DR+
657 CC X-95,987 Y-49,5
658 C X-94,144 Y-49,5 DR+
659 CC X-96,012 Y-49,5
660 C X-97,881 Y-49,5 DR+
661 CC X-95,987 Y-49,5
662 C X-94,094 Y-49,5 DR+
663 CC X-96,012 Y-49,5
664 C X-97,931 Y-49,5 DR+
665 CC X-95,987 Y-49,5
666 C X-94,044 Y-49,5 DR+
667 CC X-96,012 Y-49,5
668 C X-97,981 Y-49,5 DR+
669 CC X-95,987 Y-49,5
670 C X-94,995 Y-51,229 DR+
671 CC X-96 Y-49,5
672 C X-94 Y-49,5 DR+
673 CC X-96 Y-49,5
674 C X-94,995 Y-51,229 DR+
675 L Z+10 FMAX
676 L X-97,197 Y-49,415 FMAX
677 L Z+0,45 FMAX
678 CC X-96 Y-49,5
679 CP IPA-180 Z+0,187 DR- F297
680 CC X-96 Y-49,5
681 CP IPA-180 Z-0,077 DR-
682 CC X-96 Y-49,5
683 CP IPA-180 Z-0,34 DR-
684 CC X-96 Y-49,5
685 CP IPA-180 Z-0,604 DR-
686 CC X-96 Y-49,5
687 CP IPA-180 Z-0,868 DR-
688 CC X-96 Y-49,5
689 CP IPA-180 Z-1,132 DR-
690 CC X-96 Y-49,5
691 CP IPA-180 Z-1,396 DR-
692 CC X-96 Y-49,5
693 CP IPA-180 Z-1,659 DR-
694 CC X-96 Y-49,5
695 CP IPA-180 Z-1,922 DR-
696 CC X-96 Y-49,5
697 CP IPA-180 Z-2,186 DR-
698 CC X-96 Y-49,5
699 CP IPA-180 Z-2,45 DR-
700 CC X-96 Y-49,5
701 CP IPA-180 Z-2,713 DR-
702 CC X-96 Y-49,5
703 CP IPA-180 Z-2,977 DR-
704 CC X-96 Y-49,5
705 CP IPA-180 Z-3,241 DR-
706 CC X-96 Y-49,5
707 CP IPA-180 Z-3,505 DR-
708 CC X-96 Y-49,5
709 CP IPA-180 Z-3,768 DR-
710 CC X-96 Y-49,5
711 CP IPA-180 Z-4,031 DR-
712 CC X-96 Y-49,5
713 CP IPA-180 Z-4,295 DR-
714 CC X-96 Y-49,5
715 CP IPA-180 Z-4,559 DR-
716 CC X-96 Y-49,5
717 CP IPA-180 Z-4,822 DR-
718 CC X-96 Y-49,5
719 CP IPA-175,938 Z-5,08 DR-
720 L X-95,994 Y-49,5 F3565
721 CC X-96,012 Y-49,5
722 C X-96,031 Y-49,5 DR+
723 CC X-95,987 Y-49,5
724 C X-95,944 Y-49,5 DR+
725 CC X-96,012 Y-49,5
726 C X-96,081 Y-49,5 DR+
727 CC X-95,987 Y-49,5
728 C X-95,894 Y-49,5 DR+
729 CC X-96,012 Y-49,5
730 C X-96,131 Y-49,5 DR+
731 CC X-95,987 Y-49,5
732 C X-95,844 Y-49,5 DR+
733 CC X-96,012 Y-49,5
734 C X-96,181 Y-49,5 DR+
735 CC X-95,987 Y-49,5
736 C X-95,794 Y-49,5 DR+
737 CC X-96,012 Y-49,5
738 C X-96,231 Y-49,5 DR+
739 CC X-95,987 Y-49,5
740 C X-95,744 Y-49,5 DR+
741 CC X-96,012 Y-49,5
742 C X-96,281 Y-49,5 DR+
743 CC X-95,987 Y-49,5
744 C X-95,694 Y-49,5 DR+
745 CC X-96,012 Y-49,5
746 C X-96,331 Y-49,5 DR+
747 CC X-95,987 Y-49,5
748 C X-95,644 Y-49,5 DR+
749 CC X-96,012 Y-49,5
750 C X-96,381 Y-49,5 DR+
751 CC X-95,987 Y-49,5
752 C X-95,594 Y-49,5 DR+
753 CC X-96,012 Y-49,5
754 C X-96,431 Y-49,5 DR+
755 CC X-95,987 Y-49,5
756 C X-95,544 Y-49,5 DR+
757 CC X-96,012 Y-49,5
758 C X-96,481 Y-49,5 DR+
759 CC X-95,987 Y-49,5
760 C X-95,494 Y-49,5 DR+
761 CC X-96,012 Y-49,5
762 C X-96,531 Y-49,5 DR+
763 CC X-95,987 Y-49,5
764 C X-95,444 Y-49,5 DR+
765 CC X-96,012 Y-49,5
766 C X-96,581 Y-49,5 DR+
767 CC X-95,987 Y-49,5
768 C X-95,394 Y-49,5 DR+
769 CC X-96,012 Y-49,5
770 C X-96,631 Y-49,5 DR+
771 CC X-95,987 Y-49,5
772 C X-95,344 Y-49,5 DR+
773 CC X-96,012 Y-49,5
774 C X-96,681 Y-49,5 DR+
775 CC X-95,987 Y-49,5
776 C X-95,294 Y-49,5 DR+
777 CC X-96,012 Y-49,5
778 C X-96,731 Y-49,5 DR+
779 CC X-95,987 Y-49,5
780 C X-95,244 Y-49,5 DR+
781 CC X-96,012 Y-49,5
782 C X-96,781 Y-49,5 DR+
783 CC X-95,987 Y-49,5
784 C X-95,194 Y-49,5 DR+
785 CC X-96,012 Y-49,5
786 C X-96,831 Y-49,5 DR+
787 CC X-95,987 Y-49,5
788 C X-95,144 Y-49,5 DR+
789 CC X-96,012 Y-49,5
790 C X-96,881 Y-49,5 DR+
791 CC X-95,987 Y-49,5
792 C X-95,094 Y-49,5 DR+
793 CC X-96,012 Y-49,5
794 C X-96,931 Y-49,5 DR+
795 CC X-95,987 Y-49,5
796 C X-95,044 Y-49,5 DR+
797 CC X-96,012 Y-49,5
798 C X-96,981 Y-49,5 DR+
799 CC X-95,987 Y-49,5
800 C X-94,994 Y-49,5 DR+
801 CC X-96,012 Y-49,5
802 C X-97,031 Y-49,5 DR+
803 CC X-95,987 Y-49,5
804 C X-94,944 Y-49,5 DR+
805 CC X-96,012 Y-49,5
806 C X-97,081 Y-49,5 DR+
807 CC X-95,987 Y-49,5
808 C X-94,894 Y-49,5 DR+
809 CC X-96,012 Y-49,5
810 C X-97,131 Y-49,5 DR+
811 CC X-95,987 Y-49,5
812 C X-94,844 Y-49,5 DR+
813 CC X-96,012 Y-49,5
814 C X-97,181 Y-49,5 DR+
815 CC X-95,987 Y-49,5
816 C X-94,794 Y-49,5 DR+
817 CC X-96,012 Y-49,5
818 C X-97,231 Y-49,5 DR+
819 CC X-95,987 Y-49,5
820 C X-94,744 Y-49,5 DR+
821 CC X-96,012 Y-49,5
822 C X-97,281 Y-49,5 DR+
823 CC X-95,987 Y-49,5
824 C X-94,694 Y-49,5 DR+
825 CC X-96,012 Y-49,5
826 C X-97,331 Y-49,5 DR+
827 CC X-95,987 Y-49,5
828 C X-94,644 Y-49,5 DR+
829 CC X-96,012 Y-49,5
830 C X-97,381 Y-49,5 DR+
831 CC X-95,987 Y-49,5
832 C X-94,594 Y-49,5 DR+
833 CC X-96,012 Y-49,5
834 C X-97,431 Y-49,5 DR+
835 CC X-95,987 Y-49,5
836 C X-94,544 Y-49,5 DR+
837 CC X-96,012 Y-49,5
838 C X-97,481 Y-49,5 DR+
839 CC X-95,987 Y-49,5
840 C X-94,494 Y-49,5 DR+
841 CC X-96,012 Y-49,5
842 C X-97,531 Y-49,5 DR+
843 CC X-95,987 Y-49,5
844 C X-94,444 Y-49,5 DR+
845 CC X-96,012 Y-49,5
846 C X-97,581 Y-49,5 DR+
847 CC X-95,987 Y-49,5
848 C X-94,394 Y-49,5 DR+
849 CC X-96,012 Y-49,5
850 C X-97,631 Y-49,5 DR+
851 CC X-95,987 Y-49,5
852 C X-94,344 Y-49,5 DR+
853 CC X-96,012 Y-49,5
854 C X-97,681 Y-49,5 DR+
855 CC X-95,987 Y-49,5
856 C X-94,294 Y-49,5 DR+
857 CC X-96,012 Y-49,5
858 C X-97,731 Y-49,5 DR+
859 CC X-95,987 Y-49,5
860 C X-94,244 Y-49,5 DR+
861 CC X-96,012 Y-49,5
862 C X-97,781 Y-49,5 DR+
863 CC X-95,987 Y-49,5
864 C X-94,194 Y-49,5 DR+
865 CC X-96,012 Y-49,5
866 C X-97,831 Y-49,5 DR+
867 CC X-95,987 Y-49,5
868 C X-94,144 Y-49,5 DR+
869 CC X-96,012 Y-49,5
870 C X-97,881 Y-49,5 DR+
871 CC X-95,987 Y-49,5
872 C X-94,094 Y-49,5 DR+
873 CC X-96,012 Y-49,5
874 C X-97,931 Y-49,5 DR+
875 CC X-95,987 Y-49,5
876 C X-94,044 Y-49,5 DR+
877 CC X-96,012 Y-49,5
878 C X-97,981 Y-49,5 DR+
879 CC X-95,987 Y-49,5
880 C X-94,995 Y-51,229 DR+
881 CC X-96 Y-49,5
882 C X-94 Y-49,5 DR+
883 CC X-96 Y-49,5
884 C X-94,995 Y-51,229 DR+
885 L Z+50 FMAX
886 L X+47,803 Y-49,415 FMAX
887 L Z+2 FMAX
888 L Z+0,5 F297
889 CC X+49 Y-49,5
890 CP IPA-180 Z+0,236 DR-
891 CC X+49 Y-49,5
892 CP IPA-180 Z-0,027 DR-
893 CC X+49 Y-49,5
894 CP IPA-180 Z-0,291 DR-
895 CC X+49 Y-49,5
896 CP IPA-180 Z-0,554 DR-
897 CC X+49 Y-49,5
898 CP IPA-180 Z-0,818 DR-
899 CC X+49 Y-49,5
900 CP IPA-180 Z-1,082 DR-
901 CC X+49 Y-49,5
902 CP IPA-180 Z-1,345 DR-
903 CC X+49 Y-49,5
904 CP IPA-180 Z-1,609 DR-
905 CC X+49 Y-49,5
906 CP IPA-180 Z-1,873 DR-
907 CC X+49 Y-49,5
908 CP IPA-180 Z-2,136 DR-
909 CC X+49 Y-49,5
910 CP IPA-180 Z-2,399 DR-
911 CC X+49 Y-49,5
912 CP IPA-180 Z-2,663 DR-
913 CC X+49 Y-49,5
914 CP IPA-180 Z-2,927 DR-
915 CC X+49 Y-49,5
916 CP IPA-180 Z-3,191 DR-
917 CC X+49 Y-49,5
918 CP IPA-180 Z-3,454 DR-
919 CC X+49 Y-49,5
920 CP IPA-180 Z-3,718 DR-
921 CC X+49 Y-49,5
922 CP IPA-180 Z-3,982 DR-
923 CC X+49 Y-49,5
924 CP IPA-180 Z-4,245 DR-
925 CC X+49 Y-49,5
926 CP IPA-180 Z-4,508 DR-
927 CC X+49 Y-49,5
928 CP IPA-180 Z-4,772 DR-
929 CC X+49 Y-49,5
930 CP IPA-175,938 Z-5,03 DR-
931 L X+49,006 Y-49,5 F3565
932 CC X+48,988 Y-49,5
933 C X+48,969 Y-49,5 DR+
934 CC X+49,013 Y-49,5
935 C X+49,056 Y-49,5 DR+
936 CC X+48,988 Y-49,5
937 C X+48,919 Y-49,5 DR+
938 CC X+49,013 Y-49,5
939 C X+49,106 Y-49,5 DR+
940 CC X+48,988 Y-49,5
941 C X+48,869 Y-49,5 DR+
942 CC X+49,013 Y-49,5
943 C X+49,156 Y-49,5 DR+
944 CC X+48,988 Y-49,5
945 C X+48,819 Y-49,5 DR+
946 CC X+49,013 Y-49,5
947 C X+49,206 Y-49,5 DR+
948 CC X+48,988 Y-49,5
949 C X+48,769 Y-49,5 DR+
950 CC X+49,013 Y-49,5
951 C X+49,256 Y-49,5 DR+
952 CC X+48,988 Y-49,5
953 C X+48,719 Y-49,5 DR+
954 CC X+49,013 Y-49,5
955 C X+49,306 Y-49,5 DR+
956 CC X+48,988 Y-49,5
957 C X+48,669 Y-49,5 DR+
958 CC X+49,013 Y-49,5
959 C X+49,356 Y-49,5 DR+
960 CC X+48,988 Y-49,5
961 C X+48,619 Y-49,5 DR+
962 CC X+49,013 Y-49,5
963 C X+49,406 Y-49,5 DR+
964 CC X+48,988 Y-49,5
965 C X+48,569 Y-49,5 DR+
966 CC X+49,013 Y-49,5
967 C X+49,456 Y-49,5 DR+
968 CC X+48,988 Y-49,5
969 C X+48,519 Y-49,5 DR+
970 CC X+49,013 Y-49,5
971 C X+49,506 Y-49,5 DR+
972 CC X+48,988 Y-49,5
973 C X+48,469 Y-49,5 DR+
974 CC X+49,013 Y-49,5
975 C X+49,556 Y-49,5 DR+
976 CC X+48,988 Y-49,5
977 C X+48,419 Y-49,5 DR+
978 CC X+49,013 Y-49,5
979 C X+49,606 Y-49,5 DR+
980 CC X+48,988 Y-49,5
981 C X+48,369 Y-49,5 DR+
982 CC X+49,013 Y-49,5
983 C X+49,656 Y-49,5 DR+
984 CC X+48,988 Y-49,5
985 C X+48,319 Y-49,5 DR+
986 CC X+49,013 Y-49,5
987 C X+49,706 Y-49,5 DR+
988 CC X+48,988 Y-49,5
989 C X+48,269 Y-49,5 DR+
990 CC X+49,013 Y-49,5
991 C X+49,756 Y-49,5 DR+
992 CC X+48,988 Y-49,5
993 C X+48,219 Y-49,5 DR+
994 CC X+49,013 Y-49,5
995 C X+49,806 Y-49,5 DR+
996 CC X+48,988 Y-49,5
997 C X+48,169 Y-49,5 DR+
998 CC X+49,013 Y-49,5
999 C X+49,856 Y-49,5 DR+
1000 CC X+48,988 Y-49,5
1001 C X+48,119 Y-49,5 DR+
1002 CC X+49,013 Y-49,5
1003 C X+49,906 Y-49,5 DR+
1004 CC X+48,988 Y-49,5
1005 C X+48,069 Y-49,5 DR+
1006 CC X+49,013 Y-49,5
1007 C X+49,956 Y-49,5 DR+
1008 CC X+48,988 Y-49,5
1009 C X+48,019 Y-49,5 DR+
1010 CC X+49,013 Y-49,5
1011 C X+50,006 Y-49,5 DR+
1012 CC X+48,988 Y-49,5
1013 C X+47,969 Y-49,5 DR+
1014 CC X+49,013 Y-49,5
1015 C X+50,056 Y-49,5 DR+
1016 CC X+48,988 Y-49,5
1017 C X+47,919 Y-49,5 DR+
1018 CC X+49,013 Y-49,5
1019 C X+50,106 Y-49,5 DR+
1020 CC X+48,988 Y-49,5
1021 C X+47,869 Y-49,5 DR+
1022 CC X+49,013 Y-49,5
1023 C X+50,156 Y-49,5 DR+
1024 CC X+48,988 Y-49,5
1025 C X+47,819 Y-49,5 DR+
1026 CC X+49,013 Y-49,5
1027 C X+50,206 Y-49,5 DR+
1028 CC X+48,988 Y-49,5
1029 C X+47,769 Y-49,5 DR+
1030 CC X+49,013 Y-49,5
1031 C X+50,256 Y-49,5 DR+
1032 CC X+48,988 Y-49,5
1033 C X+47,719 Y-49,5 DR+
1034 CC X+49,013 Y-49,5
1035 C X+50,306 Y-49,5 DR+
1036 CC X+48,988 Y-49,5
1037 C X+47,669 Y-49,5 DR+
1038 CC X+49,013 Y-49,5
1039 C X+50,356 Y-49,5 DR+
1040 CC X+48,988 Y-49,5
1041 C X+47,619 Y-49,5 DR+
1042 CC X+49,013 Y-49,5
1043 C X+50,406 Y-49,5 DR+
1044 CC X+48,988 Y-49,5
1045 C X+47,569 Y-49,5 DR+
1046 CC X+49,013 Y-49,5
1047 C X+50,456 Y-49,5 DR+
1048 CC X+48,988 Y-49,5
1049 C X+47,519 Y-49,5 DR+
1050 CC X+49,013 Y-49,5
1051 C X+50,506 Y-49,5 DR+
1052 CC X+48,988 Y-49,5
1053 C X+47,469 Y-49,5 DR+
1054 CC X+49,013 Y-49,5
1055 C X+50,556 Y-49,5 DR+
1056 CC X+48,988 Y-49,5
1057 C X+47,419 Y-49,5 DR+
1058 CC X+49,013 Y-49,5
1059 C X+50,606 Y-49,5 DR+
1060 CC X+48,988 Y-49,5
1061 C X+47,369 Y-49,5 DR+
1062 CC X+49,013 Y-49,5
1063 C X+50,656 Y-49,5 DR+
1064 CC X+48,988 Y-49,5
1065 C X+47,319 Y-49,5 DR+
1066 CC X+49,013 Y-49,5
1067 C X+50,706 Y-49,5 DR+
1068 CC X+48,988 Y-49,5
1069 C X+47,269 Y-49,5 DR+
1070 CC X+49,013 Y-49,5
1071 C X+50,756 Y-49,5 DR+
1072 CC X+48,988 Y-49,5
1073 C X+47,219 Y-49,5 DR+
1074 CC X+49,013 Y-49,5
1075 C X+50,806 Y-49,5 DR+
1076 CC X+48,988 Y-49,5
1077 C X+47,169 Y-49,5 DR+
1078 CC X+49,013 Y-49,5
1079 C X+50,856 Y-49,5 DR+
1080 CC X+48,988 Y-49,5
1081 C X+47,119 Y-49,5 DR+
1082 CC X+49,013 Y-49,5
1083 C X+50,906 Y-49,5 DR+
1084 CC X+48,988 Y-49,5
1085 C X+47,069 Y-49,5 DR+
1086 CC X+49,013 Y-49,5
1087 C X+50,956 Y-49,5 DR+
1088 CC X+48,988 Y-49,5
1089 C X+47,019 Y-49,5 DR+
1090 CC X+49,013 Y-49,5
1091 C X+50,005 Y-51,229 DR+
1092 CC X+49 Y-49,5
1093 C X+51 Y-49,5 DR+
1094 CC X+49 Y-49,5
1095 C X+50,005 Y-51,229 DR+
1096 L Z+10 FMAX
1097 L X+47,803 Y-49,415 FMAX
1098 L Z+0,45 FMAX
1099 CC X+49 Y-49,5
1100 CP IPA-180 Z+0,187 DR- F297
1101 CC X+49 Y-49,5
1102 CP IPA-180 Z-0,077 DR-
1103 CC X+49 Y-49,5
1104 CP IPA-180 Z-0,34 DR-
1105 CC X+49 Y-49,5
1106 CP IPA-180 Z-0,604 DR-
1107 CC X+49 Y-49,5
1108 CP IPA-180 Z-0,868 DR-
1109 CC X+49 Y-49,5
1110 CP IPA-180 Z-1,132 DR-
1111 CC X+49 Y-49,5
1112 CP IPA-180 Z-1,396 DR-
1113 CC X+49 Y-49,5
1114 CP IPA-180 Z-1,659 DR-
1115 CC X+49 Y-49,5
1116 CP IPA-180 Z-1,922 DR-
1117 CC X+49 Y-49,5
1118 CP IPA-180 Z-2,186 DR-
1119 CC X+49 Y-49,5
1120 CP IPA-180 Z-2,45 DR-
1121 CC X+49 Y-49,5
1122 CP IPA-180 Z-2,713 DR-
1123 CC X+49 Y-49,5
1124 CP IPA-180 Z-2,977 DR-
1125 CC X+49 Y-49,5
1126 CP IPA-180 Z-3,241 DR-
1127 CC X+49 Y-49,5
1128 CP IPA-180 Z-3,505 DR-
1129 CC X+49 Y-49,5
1130 CP IPA-180 Z-3,768 DR-
1131 CC X+49 Y-49,5
1132 CP IPA-180 Z-4,031 DR-
1133 CC X+49 Y-49,5
1134 CP IPA-180 Z-4,295 DR-
1135 CC X+49 Y-49,5
1136 CP IPA-180 Z-4,559 DR-
1137 CC X+49 Y-49,5
1138 CP IPA-180 Z-4,822 DR-
1139 CC X+49 Y-49,5
1140 CP IPA-175,938 Z-5,08 DR-
1141 L X+49,006 Y-49,5 F3565
1142 CC X+48,988 Y-49,5
1143 C X+48,969 Y-49,5 DR+
1144 CC X+49,013 Y-49,5
1145 C X+49,056 Y-49,5 DR+
1146 CC X+48,988 Y-49,5
1147 C X+48,919 Y-49,5 DR+
1148 CC X+49,013 Y-49,5
1149 C X+49,106 Y-49,5 DR+
1150 CC X+48,988 Y-49,5
1151 C X+48,869 Y-49,5 DR+
1152 CC X+49,013 Y-49,5
1153 C X+49,156 Y-49,5 DR+
1154 CC X+48,988 Y-49,5
1155 C X+48,819 Y-49,5 DR+
1156 CC X+49,013 Y-49,5
1157 C X+49,206 Y-49,5 DR+
1158 CC X+48,988 Y-49,5
1159 C X+48,769 Y-49,5 DR+
1160 CC X+49,013 Y-49,5
1161 C X+49,256 Y-49,5 DR+
1162 CC X+48,988 Y-49,5
1163 C X+48,719 Y-49,5 DR+
1164 CC X+49,013 Y-49,5
1165 C X+49,306 Y-49,5 DR+
1166 CC X+48,988 Y-49,5
1167 C X+48,669 Y-49,5 DR+
1168 CC X+49,013 Y-49,5
1169 C X+49,356 Y-49,5 DR+
1170 CC X+48,988 Y-49,5
1171 C X+48,619 Y-49,5 DR+
1172 CC X+49,013 Y-49,5
1173 C X+49,406 Y-49,5 DR+
1174 CC X+48,988 Y-49,5
1175 C X+48,569 Y-49,5 DR+
1176 CC X+49,013 Y-49,5
1177 C X+49,456 Y-49,5 DR+
1178 CC X+48,988 Y-49,5
1179 C X+48,519 Y-49,5 DR+
1180 CC X+49,013 Y-49,5
1181 C X+49,506 Y-49,5 DR+
1182 CC X+48,988 Y-49,5
1183 C X+48,469 Y-49,5 DR+
1184 CC X+49,013 Y-49,5
1185 C X+49,556 Y-49,5 DR+
1186 CC X+48,988 Y-49,5
1187 C X+48,419 Y-49,5 DR+
1188 CC X+49,013 Y-49,5
1189 C X+49,606 Y-49,5 DR+
1190 CC X+48,988 Y-49,5
1191 C X+48,369 Y-49,5 DR+
1192 CC X+49,013 Y-49,5
1193 C X+49,656 Y-49,5 DR+
1194 CC X+48,988 Y-49,5
1195 C X+48,319 Y-49,5 DR+
1196 CC X+49,013 Y-49,5
1197 C X+49,706 Y-49,5 DR+
1198 CC X+48,988 Y-49,5
1199 C X+48,269 Y-49,5 DR+
1200 CC X+49,013 Y-49,5
1201 C X+49,756 Y-49,5 DR+
1202 CC X+48,988 Y-49,5
1203 C X+48,219 Y-49,5 DR+
1204 CC X+49,013 Y-49,5
1205 C X+49,806 Y-49,5 DR+
1206 CC X+48,988 Y-49,5
1207 C X+48,169 Y-49,5 DR+
1208 CC X+49,013 Y-49,5
1209 C X+49,856 Y-49,5 DR+
1210 CC X+48,988 Y-49,5
1211 C X+48,119 Y-49,5 DR+
1212 CC X+49,013 Y-49,5
1213 C X+49,906 Y-49,5 DR+
1214 CC X+48,988 Y-49,5
1215 C X+48,069 Y-49,5 DR+
1216 CC X+49,013 Y-49,5
1217 C X+49,956 Y-49,5 DR+
1218 CC X+48,988 Y-49,5
1219 C X+48,019 Y-49,5 DR+
1220 CC X+49,013 Y-49,5
1221 C X+50,006 Y-49,5 DR+
1222 CC X+48,988 Y-49,5
1223 C X+47,969 Y-49,5 DR+
1224 CC X+49,013 Y-49,5
1225 C X+50,056 Y-49,5 DR+
1226 CC X+48,988 Y-49,5
1227 C X+47,919 Y-49,5 DR+
1228 CC X+49,013 Y-49,5
1229 C X+50,106 Y-49,5 DR+
1230 CC X+48,988 Y-49,5
1231 C X+47,869 Y-49,5 DR+
1232 CC X+49,013 Y-49,5
1233 C X+50,156 Y-49,5 DR+
1234 CC X+48,988 Y-49,5
1235 C X+47,819 Y-49,5 DR+
1236 CC X+49,013 Y-49,5
1237 C X+50,206 Y-49,5 DR+
1238 CC X+48,988 Y-49,5
1239 C X+47,769 Y-49,5 DR+
1240 CC X+49,013 Y-49,5
1241 C X+50,256 Y-49,5 DR+
1242 CC X+48,988 Y-49,5
1243 C X+47,719 Y-49,5 DR+
1244 CC X+49,013 Y-49,5
1245 C X+50,306 Y-49,5 DR+
1246 CC X+48,988 Y-49,5
1247 C X+47,669 Y-49,5 DR+
1248 CC X+49,013 Y-49,5
1249 C X+50,356 Y-49,5 DR+
1250 CC X+48,988 Y-49,5
1251 C X+47,619 Y-49,5 DR+
1252 CC X+49,013 Y-49,5
1253 C X+50,406 Y-49,5 DR+
1254 CC X+48,988 Y-49,5
1255 C X+47,569 Y-49,5 DR+
1256 CC X+49,013 Y-49,5
1257 C X+50,456 Y-49,5 DR+
1258 CC X+48,988 Y-49,5
1259 C X+47,519 Y-49,5 DR+
1260 CC X+49,013 Y-49,5
1261 C X+50,506 Y-49,5 DR+
1262 CC X+48,988 Y-49,5
1263 C X+47,469 Y-49,5 DR+
1264 CC X+49,013 Y-49,5
1265 C X+50,556 Y-49,5 DR+
1266 CC X+48,988 Y-49,5
1267 C X+47,419 Y-49,5 DR+
1268 CC X+49,013 Y-49,5
1269 C X+50,606 Y-49,5 DR+
1270 CC X+48,988 Y-49,5
1271 C X+47,369 Y-49,5 DR+
1272 CC X+49,013 Y-49,5
1273 C X+50,656 Y-49,5 DR+
1274 CC X+48,988 Y-49,5
1275 C X+47,319 Y-49,5 DR+
1276 CC X+49,013 Y-49,5
1277 C X+50,706 Y-49,5 DR+
1278 CC X+48,988 Y-49,5
1279 C X+47,269 Y-49,5 DR+
1280 CC X+49,013 Y-49,5
1281 C X+50,756 Y-49,5 DR+
1282 CC X+48,988 Y-49,5
1283 C X+47,219 Y-49,5 DR+
1284 CC X+49,013 Y-49,5
1285 C X+50,806 Y-49,5 DR+
1286 CC X+48,988 Y-49,5
1287 C X+47,169 Y-49,5 DR+
1288 CC X+49,013 Y-49,5
1289 C X+50,856 Y-49,5 DR+
1290 CC X+48,988 Y-49,5
1291 C X+47,119 Y-49,5 DR+
1292 CC X+49,013 Y-49,5
1293 C X+50,906 Y-49,5 DR+
1294 CC X+48,988 Y-49,5
1295 C X+47,069 Y-49,5 DR+
1296 CC X+49,013 Y-49,5
1297 C X+50,956 Y-49,5 DR+
1298 CC X+48,988 Y-49,5
1299 C X+47,019 Y-49,5 DR+
1300 CC X+49,013 Y-49,5
1301 C X+50,005 Y-51,229 DR+
1302 CC X+49 Y-49,5
1303 C X+51 Y-49,5 DR+
1304 CC X+49 Y-49,5
1305 C X+50,005 Y-51,229 DR+
1306 L Z+50 FMAX
1307 TOOL CALL 19 Z S7427 DR-3
1308 L X-96 Y-49,5 Z+50 FMAX
1309 L Z-3,03 FMAX
1310 L Z-5,08 F297
1311 L X-96,8 Y-48,9 RL F3565
1312 L X-97,4
1313 CC X-97,4 Y-49,5
1314 C X-98 Y-49,5 DR+
1315 CC X-96 Y-49,5
1316 C X-94 Y-49,5 DR+
1317 CC X-96 Y-49,5
1318 C X-98 Y-49,5 DR+
1319 CC X-96 Y-49,5
1320 C X-97,08 Y-51,183 DR+
1321 CC X-96 Y-49,5
1322 C X-94 Y-49,5 DR+
1323 CC X-96 Y-49,5
1324 C X-98 Y-49,5 DR+
1325 CC X-96 Y-49,5
1326 C X-97,08 Y-51,183 DR+
1327 CC X-96 Y-49,5
1328 C X-94 Y-49,5 DR+
1329 CC X-96 Y-49,5
1330 C X-98 Y-49,5 DR+
1331 CC X-96 Y-49,5
1332 C X-97,08 Y-51,183 DR+
1333 CC X-96,756 Y-50,678
1334 C X-96,251 Y-51,002 DR+
1335 L X-95,927 Y-50,497
1336 L X-96 Y-49,5 R0
1337 L Z+50 FMAX
1338 L X+49 FMAX
1339 L Z-3,03 FMAX
1340 L Z-5,08 F297
1341 L X+48,2 Y-48,9 RL F3565
1342 L X+47,6
1343 CC X+47,6 Y-49,5
1344 C X+47 Y-49,5 DR+
1345 CC X+49 Y-49,5
1346 C X+51 Y-49,5 DR+
1347 CC X+49 Y-49,5
1348 C X+47 Y-49,5 DR+
1349 CC X+49 Y-49,5
1350 C X+47,92 Y-51,183 DR+
1351 CC X+49 Y-49,5
1352 C X+51 Y-49,5 DR+
1353 CC X+49 Y-49,5
1354 C X+47 Y-49,5 DR+
1355 CC X+49 Y-49,5
1356 C X+47,92 Y-51,183 DR+
1357 CC X+49 Y-49,5
1358 C X+51 Y-49,5 DR+
1359 CC X+49 Y-49,5
1360 C X+47 Y-49,5 DR+
1361 CC X+49 Y-49,5
1362 C X+47,92 Y-51,183 DR+
1363 CC X+48,244 Y-50,678
1364 C X+48,749 Y-51,002 DR+
1365 L X+49,073 Y-50,497
1366 L X+49 Y-49,5 R0
1367 L Z+50 FMAX
1368 M9
1369 M5
1370 L Z-1 FMAX M91
1371 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
1372 ; CORRECTION USURE GAUCHE
1373 ; SUREP R 0. SUREP Z 0.
1374 TOOL CALL 1 Z S6000 DR-2,5
1375 L X-96 Y-49,5 FMAX M3
1376 L Z+50 FMAX
1377 L Z+2 FMAX
1378 L Z-2,4 F800
1379 L X-97,5 Y-49 RL F1200
1380 L X-98
1381 CC X-98 Y-49,5
1382 C X-98,5 Y-49,5 DR+
1383 CC X-96 Y-49,5
1384 C X-93,5 Y-49,5 DR+
1385 CC X-96 Y-49,5
1386 C X-98,5 Y-49,5 DR+
1387 CC X-96 Y-49,5
1388 C X-97,742 Y-51,293 DR+
1389 CC X-97,393 Y-50,935
1390 C X-97,035 Y-51,283 DR+
1391 L X-96,686 Y-50,924
1392 L X-96 Y-49,5 R0
1393 L Z+50 FMAX
1394 L X+49 FMAX
1395 L Z+2 FMAX
1396 L Z-2,4 F800
1397 L X+47,5 Y-49 RL F1200
1398 L X+47
1399 CC X+47 Y-49,5
1400 C X+46,5 Y-49,5 DR+
1401 CC X+49 Y-49,5
1402 C X+51,5 Y-49,5 DR+
1403 CC X+49 Y-49,5
1404 C X+46,5 Y-49,5 DR+
1405 CC X+49 Y-49,5
1406 C X+47,258 Y-51,293 DR+
1407 CC X+47,607 Y-50,935
1408 C X+47,965 Y-51,283 DR+
1409 L X+48,314 Y-50,924
1410 L X+49 Y-49,5 R0
1411 L Z+50 FMAX
1412 L X-26 Y+20,5 FMAX
1413 L Z+2 FMAX
1414 L Z-2,4 F800
1415 L X-31 Y+21 RL F1200
1416 L X-31,5
1417 CC X-31,5 Y+20,5
1418 C X-32 Y+20,5 DR+
1419 CC X-26 Y+20,5
1420 C X-20 Y+20,5 DR+
1421 CC X-26 Y+20,5
1422 C X-32 Y+20,5 DR+
1423 CC X-26 Y+20,5
1424 C X-31,67 Y+18,537 DR+
1425 CC X-31,197 Y+18,7
1426 C X-31,034 Y+18,228 DR+
1427 L X-30,561 Y+18,392
1428 L X-26 Y+20,5 R0
1429 L Z+50 FMAX
1430 L X+119 FMAX
1431 L Z+2 FMAX
1432 L Z-2,4 F800
1433 L X+114 Y+21 RL F1200
1434 L X+113,5
1435 CC X+113,5 Y+20,5
1436 C X+113 Y+20,5 DR+
1437 CC X+119 Y+20,5
1438 C X+125 Y+20,5 DR+
1439 CC X+119 Y+20,5
1440 C X+113 Y+20,5 DR+
1441 CC X+119 Y+20,5
1442 C X+113,33 Y+18,537 DR+
1443 CC X+113,803 Y+18,7
1444 C X+113,966 Y+18,228 DR+
1445 L X+114,439 Y+18,392
1446 L X+119 Y+20,5 R0
1447 L Z+50 FMAX
1448 M5
1449 L Z-1 FMAX M91
1450 L Y-1 FMAX M91
1451 M30
1452 END PGM REP120-CASSETTE-2-PLAQUETTE SF-F MM
