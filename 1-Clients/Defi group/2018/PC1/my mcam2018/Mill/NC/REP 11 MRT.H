0 BEGIN PGM REP 11 MRT MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 11 MRT
4 ; PROG-CN DU 19-10-21 A 13:32
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
10 ; T19 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
11 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-2*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 20
19 L X+7,5 Y+0 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X+7,5 Y+0 FMAX M99
24 M9
25 M5
26 L Z-1 FMAX M91
27 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
28 TOOL CALL 20 Z S3800 DR+0
29 TOOL DEF 19
30 L X+7,5 Y+0 FMAX M3
31 L Z+50 FMAX M7
32 ;  DEBOURRAGE
33 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
34 L X+7,5 Y+0 FMAX M99
35 M9
36 M5
37 L Z-1 FMAX M91
38 ; T19 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
39 ; CORRECTION AUCUNE
40 ; SUREP R 0. SUREP Z 0.
41 TOOL CALL 19 Z S6000 DR+0
42 TOOL DEF 18
43 L X+6,417 Y-1,437 FMAX M3
44 L Z+50 FMAX M25
45 L Z+2 FMAX
46 L Z+0,5 F297
47 CC X+7,5 Y+0
48 CP IPA-180 Z+0,302 DR-
49 CC X+7,5 Y+0
50 CP IPA-180 Z+0,105 DR-
51 CC X+7,5 Y+0
52 CP IPA-180 Z-0,092 DR-
53 CC X+7,5 Y+0
54 CP IPA-180 Z-0,29 DR-
55 CC X+7,5 Y+0
56 CP IPA-180 Z-0,488 DR-
57 CC X+7,5 Y+0
58 CP IPA-180 Z-0,685 DR-
59 CC X+7,5 Y+0
60 CP IPA-180 Z-0,883 DR-
61 CC X+7,5 Y+0
62 CP IPA-180 Z-1,08 DR-
63 CC X+7,5 Y+0
64 CP IPA-180 Z-1,278 DR-
65 CC X+7,5 Y+0
66 CP IPA-180 Z-1,475 DR-
67 CC X+7,5 Y+0
68 CP IPA-180 Z-1,673 DR-
69 CC X+7,5 Y+0
70 CP IPA-180 Z-1,87 DR-
71 CC X+7,5 Y+0
72 CP IPA-180 Z-2,067 DR-
73 CC X+7,5 Y+0
74 CP IPA-180 Z-2,265 DR-
75 CC X+7,5 Y+0
76 CP IPA-180 Z-2,463 DR-
77 CC X+7,5 Y+0
78 CP IPA-180 Z-2,66 DR-
79 CC X+7,5 Y+0
80 CP IPA-180 Z-2,857 DR-
81 CC X+7,5 Y+0
82 CP IPA-180 Z-3,055 DR-
83 CC X+7,5 Y+0
84 CP IPA-180 Z-3,252 DR-
85 CC X+7,5 Y+0
86 CP IPA-180 Z-3,449 DR-
87 CC X+7,5 Y+0
88 CP IPA-180 Z-3,646 DR-
89 CC X+7,5 Y+0
90 CP IPA-180 Z-3,844 DR-
91 CC X+7,5 Y+0
92 CP IPA-232,996 Z-4,1 DR-
93 L X+7,513 Y+0 F500
94 CC X+7,475 Y+0
95 C X+7,437 Y+0 DR+
96 CC X+7,525 Y+0
97 C X+7,613 Y+0 DR+
98 CC X+7,475 Y+0
99 C X+7,337 Y+0 DR+
100 CC X+7,525 Y+0
101 C X+7,713 Y+0 DR+
102 CC X+7,475 Y+0
103 C X+7,237 Y+0 DR+
104 CC X+7,525 Y+0
105 C X+7,813 Y+0 DR+
106 CC X+7,475 Y+0
107 C X+7,137 Y+0 DR+
108 CC X+7,525 Y+0
109 C X+7,913 Y+0 DR+
110 CC X+7,475 Y+0
111 C X+7,037 Y+0 DR+
112 CC X+7,525 Y+0
113 C X+8,013 Y+0 DR+
114 CC X+7,475 Y+0
115 C X+6,937 Y+0 DR+
116 CC X+7,525 Y+0
117 C X+8,113 Y+0 DR+
118 CC X+7,475 Y+0
119 C X+6,837 Y+0 DR+
120 CC X+7,525 Y+0
121 C X+8,213 Y+0 DR+
122 CC X+7,475 Y+0
123 C X+6,737 Y+0 DR+
124 CC X+7,525 Y+0
125 C X+8,313 Y+0 DR+
126 CC X+7,475 Y+0
127 C X+6,637 Y+0 DR+
128 CC X+7,525 Y+0
129 C X+8,413 Y+0 DR+
130 CC X+7,475 Y+0
131 C X+6,537 Y+0 DR+
132 CC X+7,525 Y+0
133 C X+8,513 Y+0 DR+
134 CC X+7,475 Y+0
135 C X+6,437 Y+0 DR+
136 CC X+7,525 Y+0
137 C X+8,613 Y+0 DR+
138 CC X+7,475 Y+0
139 C X+6,337 Y+0 DR+
140 CC X+7,525 Y+0
141 C X+8,713 Y+0 DR+
142 CC X+7,475 Y+0
143 C X+6,237 Y+0 DR+
144 CC X+7,525 Y+0
145 C X+8,813 Y+0 DR+
146 CC X+7,475 Y+0
147 C X+6,137 Y+0 DR+
148 CC X+7,525 Y+0
149 C X+8,913 Y+0 DR+
150 CC X+7,475 Y+0
151 C X+6,037 Y+0 DR+
152 CC X+7,525 Y+0
153 C X+9,013 Y+0 DR+
154 CC X+7,475 Y+0
155 C X+5,937 Y+0 DR+
156 CC X+7,525 Y+0
157 C X+9,113 Y+0 DR+
158 CC X+7,475 Y+0
159 C X+5,837 Y+0 DR+
160 CC X+7,525 Y+0
161 C X+9,213 Y+0 DR+
162 CC X+7,475 Y+0
163 C X+5,737 Y+0 DR+
164 CC X+7,525 Y+0
165 C X+9,313 Y+0 DR+
166 CC X+7,475 Y+0
167 C X+5,637 Y+0 DR+
168 CC X+7,525 Y+0
169 C X+9,413 Y+0 DR+
170 CC X+7,475 Y+0
171 C X+5,537 Y+0 DR+
172 CC X+7,525 Y+0
173 C X+9,513 Y+0 DR+
174 CC X+7,475 Y+0
175 C X+5,437 Y+0 DR+
176 CC X+7,525 Y+0
177 C X+9,613 Y+0 DR+
178 CC X+7,475 Y+0
179 C X+5,337 Y+0 DR+
180 CC X+7,525 Y+0
181 C X+9,713 Y+0 DR+
182 CC X+7,475 Y+0
183 C X+5,237 Y+0 DR+
184 CC X+7,525 Y+0
185 C X+9,813 Y+0 DR+
186 CC X+7,475 Y+0
187 C X+5,137 Y+0 DR+
188 CC X+7,525 Y+0
189 C X+9,913 Y+0 DR+
190 CC X+7,475 Y+0
191 C X+5,037 Y+0 DR+
192 CC X+7,525 Y+0
193 C X+8,759 Y-2,16 DR+
194 CC X+7,5 Y+0
195 C X+7,5 Y-2,5 DR+
196 CC X+7,5 Y+0
197 C X+8,759 Y-2,16 DR+
198 L X+7,5 Y+0
199 TOOL CALL 19 Z S6000 DR-3
200 L X+8,1 Y+1,3 Z-4,1 RL
201 L Y+1,9
202 CC X+7,5 Y+1,9
203 C X+7,5 Y+2,5 DR+
204 CC X+7,5 Y+0
205 C X+7,5 Y-2,5 DR+
206 CC X+7,5 Y+0
207 C X+7,5 Y+2,5 DR+
208 CC X+7,5 Y+0
209 C X+6,526 Y+2,303 DR+
210 CC X+7,5 Y+0
211 C X+7,5 Y-2,5 DR+
212 CC X+7,5 Y+0
213 C X+7,5 Y+2,5 DR+
214 CC X+7,5 Y+0
215 C X+6,526 Y+2,303 DR+
216 CC X+6,76 Y+1,75
217 C X+6,207 Y+1,516 DR+
218 L X+6,441 Y+0,964
219 L X+7,5 Y+0 R0
220 L Z+50 FMAX
221 M78
222 M5
223 L Z-1 FMAX M91
224 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
225 ; CORRECTION USURE GAUCHE
226 ; SUREP R -0.5 SUREP Z 0.
227 TOOL CALL 18 Z S1751 DR-5
228 TOOL DEF 1
229 L X-27,707 Y-1,778 FMAX M3
230 L Z+50 FMAX M25
231 L Z+2 FMAX
232 L Z-5,5 F500
233 L X-23,464 Y+2,464 RL F315
234 CC X-27 Y+6
235 C X-22 Y+6 DR+
236 CC X-13,5 Y+6
237 C X-13,5 Y+14,5 DR-
238 CC X-13,5 Y+19,5
239 C X-9,964 Y+15,964 DR+
240 L X-5,722 Y+20,207 R0
241 L Z+10 FMAX
242 L X-27,707 Y-1,778 FMAX
243 L Z+2 FMAX
244 L Z-5,5 F500
245 L X-23,464 Y+2,464 RL F315
246 CC X-27 Y+6
247 C X-22 Y+6 DR+
248 CC X-13,5 Y+6
249 C X-13,5 Y+14,5 DR-
250 CC X-13,5 Y+19,5
251 C X-9,964 Y+15,964 DR+
252 L X-5,722 Y+20,207 R0
253 L Z+50 FMAX
254 L X+5,722 FMAX
255 L Z+2 FMAX
256 L Z-5,5 F500
257 L X+9,964 Y+15,964 RL F315
258 CC X+13,5 Y+19,5
259 C X+13,5 Y+14,5 DR+
260 CC X+13,5 Y+6
261 C X+22 Y+6 DR-
262 CC X+27 Y+6
263 C X+23,464 Y+2,464 DR+
264 L X+27,707 Y-1,778 R0
265 L Z+10 FMAX
266 L X+5,722 Y+20,207 FMAX
267 L Z+2 FMAX
268 L Z-5,5 F500
269 L X+9,964 Y+15,964 RL F315
270 CC X+13,5 Y+19,5
271 C X+13,5 Y+14,5 DR+
272 CC X+13,5 Y+6
273 C X+22 Y+6 DR-
274 CC X+27 Y+6
275 C X+23,464 Y+2,464 DR+
276 L X+27,707 Y-1,778 R0
277 L Z+50 FMAX
278 L Y+1,778 FMAX
279 L Z+2 FMAX
280 L Z-5,5 F500
281 L X+23,464 Y-2,464 RL F315
282 CC X+27 Y-6
283 C X+22 Y-6 DR+
284 CC X+13,5 Y-6
285 C X+13,5 Y-14,5 DR-
286 CC X+13,5 Y-19,5
287 C X+9,964 Y-15,964 DR+
288 L X+5,722 Y-20,207 R0
289 L Z+10 FMAX
290 L X+27,707 Y+1,778 FMAX
291 L Z+2 FMAX
292 L Z-5,5 F500
293 L X+23,464 Y-2,464 RL F315
294 CC X+27 Y-6
295 C X+22 Y-6 DR+
296 CC X+13,5 Y-6
297 C X+13,5 Y-14,5 DR-
298 CC X+13,5 Y-19,5
299 C X+9,964 Y-15,964 DR+
300 L X+5,722 Y-20,207 R0
301 L Z+50 FMAX
302 L X-5,722 FMAX
303 L Z+2 FMAX
304 L Z-5,5 F500
305 L X-9,964 Y-15,964 RL F315
306 CC X-13,5 Y-19,5
307 C X-13,5 Y-14,5 DR+
308 CC X-13,5 Y-6
309 C X-22 Y-6 DR-
310 CC X-27 Y-6
311 C X-23,464 Y-2,464 DR+
312 L X-27,707 Y+1,778 R0
313 L Z+10 FMAX
314 L X-5,722 Y-20,207 FMAX
315 L Z+2 FMAX
316 L Z-5,5 F500
317 L X-9,964 Y-15,964 RL F315
318 CC X-13,5 Y-19,5
319 C X-13,5 Y-14,5 DR+
320 CC X-13,5 Y-6
321 C X-22 Y-6 DR-
322 CC X-27 Y-6
323 C X-23,464 Y-2,464 DR+
324 L X-27,707 Y+1,778 R0
325 L Z+50 FMAX
326 M78
327 M5
328 L Z-1 FMAX M91
329 L Y-1 FMAX M91
330 M30
331 END PGM REP 11 MRT MM
