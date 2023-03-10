0 BEGIN PGM REP 8   1 1 SYMETRIQUE MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 8   1 1 SYMETRIQUE
4 ; PROG-CN DU 06-05-21 A 10:08
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
11 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-6*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 2
19 L X+31,829 Y+0 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X+31,829 Y+0 FMAX M99
24 M9
25 M5
26 L Z-1 FMAX M91
27 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
28 TOOL CALL 2 Z S2000 DR+0
29 TOOL DEF 20
30 L X+31,829 Y+0 FMAX M3
31 L Z+50 FMAX M7
32 ;  DEBOURRAGE
33 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-12,5 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
34 L X+31,829 Y+0 FMAX M99
35 M9
36 M5
37 L Z-1 FMAX M91
38 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
39 TOOL CALL 20 Z S3800 DR+0
40 TOOL DEF 19
41 L X+31,829 Y+0 FMAX M3
42 L Z+50 FMAX M7
43 ;  DEBOURRAGE
44 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-65,5 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
45 L X+31,829 Y+0 FMAX M99
46 M9
47 M5
48 L Z-1 FMAX M91
49 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
50 ; CORRECTION AUCUNE
51 ; SUREP R 0. SUREP Z 0.
52 TOOL CALL 19 Z S7427 DR+0
53 TOOL DEF 1
54 L X+32,135 Y-0,516 FMAX M3
55 L Z+50 FMAX M8
56 L Z+2 FMAX
57 L Z+0,5 F297
58 CC X+31,829 Y+0
59 CP IPA-180 Z+0,335 DR-
60 CC X+31,829 Y+0
61 CP IPA-180 Z+0,17 DR-
62 CC X+31,829 Y+0
63 CP IPA-180 Z+0,005 DR-
64 CC X+31,829 Y+0
65 CP IPA-180 Z-0,16 DR-
66 CC X+31,829 Y+0
67 CP IPA-180 Z-0,325 DR-
68 CC X+31,829 Y+0
69 CP IPA-180 Z-0,489 DR-
70 CC X+31,829 Y+0
71 CP IPA-180 Z-0,654 DR-
72 CC X+31,829 Y+0
73 CP IPA-180 Z-0,819 DR-
74 CC X+31,829 Y+0
75 CP IPA-180 Z-0,984 DR-
76 CC X+31,829 Y+0
77 CP IPA-180 Z-1,149 DR-
78 CC X+31,829 Y+0
79 CP IPA-180 Z-1,314 DR-
80 CC X+31,829 Y+0
81 CP IPA-180 Z-1,479 DR-
82 CC X+31,829 Y+0
83 CP IPA-180 Z-1,644 DR-
84 CC X+31,829 Y+0
85 CP IPA-180 Z-1,809 DR-
86 CC X+31,829 Y+0
87 CP IPA-180 Z-1,974 DR-
88 CC X+31,829 Y+0
89 CP IPA-180 Z-2,139 DR-
90 CC X+31,829 Y+0
91 CP IPA-180 Z-2,303 DR-
92 CC X+31,829 Y+0
93 CP IPA-180 Z-2,468 DR-
94 CC X+31,829 Y+0
95 CP IPA-180 Z-2,633 DR-
96 CC X+31,829 Y+0
97 CP IPA-180 Z-2,798 DR-
98 CC X+31,829 Y+0
99 CP IPA-180 Z-2,963 DR-
100 CC X+31,829 Y+0
101 CP IPA-180 Z-3,128 DR-
102 CC X+31,829 Y+0
103 CP IPA-180 Z-3,293 DR-
104 CC X+31,829 Y+0
105 CP IPA-180 Z-3,458 DR-
106 CC X+31,829 Y+0
107 CP IPA-180 Z-3,623 DR-
108 CC X+31,829 Y+0
109 CP IPA-180 Z-3,788 DR-
110 CC X+31,829 Y+0
111 CP IPA-180 Z-3,953 DR-
112 CC X+31,829 Y+0
113 CP IPA-180 Z-4,118 DR-
114 CC X+31,829 Y+0
115 CP IPA-180 Z-4,283 DR-
116 CC X+31,829 Y+0
117 CP IPA-180 Z-4,447 DR-
118 CC X+31,829 Y+0
119 CP IPA-180 Z-4,612 DR-
120 CC X+31,829 Y+0
121 CP IPA-180 Z-4,777 DR-
122 CC X+31,829 Y+0
123 CP IPA-180 Z-4,942 DR-
124 CC X+31,829 Y+0
125 CP IPA-180 Z-5,107 DR-
126 CC X+31,829 Y+0
127 CP IPA-180 Z-5,272 DR-
128 CC X+31,829 Y+0
129 CP IPA-180 Z-5,437 DR-
130 CC X+31,829 Y+0
131 CP IPA-180 Z-5,602 DR-
132 CC X+31,829 Y+0
133 CP IPA-180 Z-5,767 DR-
134 CC X+31,829 Y+0
135 CP IPA-180 Z-5,931 DR-
136 CC X+31,829 Y+0
137 CP IPA-180 Z-6,096 DR-
138 CC X+31,829 Y+0
139 CP IPA-180 Z-6,261 DR-
140 CC X+31,829 Y+0
141 CP IPA-180 Z-6,426 DR-
142 CC X+31,829 Y+0
143 CP IPA-180 Z-6,591 DR-
144 CC X+31,829 Y+0
145 CP IPA-180 Z-6,756 DR-
146 CC X+31,829 Y+0
147 CP IPA-180 Z-6,921 DR-
148 CC X+31,829 Y+0
149 CP IPA-180 Z-7,086 DR-
150 CC X+31,829 Y+0
151 CP IPA-180 Z-7,251 DR-
152 CC X+31,829 Y+0
153 CP IPA-180 Z-7,416 DR-
154 CC X+31,829 Y+0
155 CP IPA-180 Z-7,581 DR-
156 CC X+31,829 Y+0
157 CP IPA-180 Z-7,746 DR-
158 CC X+31,829 Y+0
159 CP IPA-180 Z-7,91 DR-
160 CC X+31,829 Y+0
161 CP IPA-180 Z-8,075 DR-
162 CC X+31,829 Y+0
163 CP IPA-180 Z-8,24 DR-
164 CC X+31,829 Y+0
165 CP IPA-180 Z-8,405 DR-
166 CC X+31,829 Y+0
167 CP IPA-180 Z-8,57 DR-
168 CC X+31,829 Y+0
169 CP IPA-180 Z-8,735 DR-
170 CC X+31,829 Y+0
171 CP IPA-180 Z-8,9 DR-
172 CC X+31,829 Y+0
173 CP IPA-180 Z-9,065 DR-
174 CC X+31,829 Y+0
175 CP IPA-180 Z-9,23 DR-
176 CC X+31,829 Y+0
177 CP IPA-180 Z-9,395 DR-
178 CC X+31,829 Y+0
179 CP IPA-180 Z-9,56 DR-
180 CC X+31,829 Y+0
181 CP IPA-180 Z-9,725 DR-
182 CC X+31,829 Y+0
183 CP IPA-300,669 Z-10 DR-
184 L X+31,848 Y+0 F3565
185 CC X+31,791 Y+0
186 C X+31,735 Y+0 DR+
187 CC X+31,866 Y+0
188 C X+31,998 Y+0 DR+
189 CC X+31,791 Y+0
190 C X+31,585 Y+0 DR+
191 CC X+31,866 Y+0
192 C X+32,148 Y+0 DR+
193 CC X+31,791 Y+0
194 C X+31,435 Y+0 DR+
195 CC X+31,866 Y+0
196 C X+32,298 Y+0 DR+
197 CC X+31,791 Y+0
198 C X+31,285 Y+0 DR+
199 CC X+31,866 Y+0
200 C X+32,448 Y+0 DR+
201 CC X+31,791 Y+0
202 C X+31,135 Y+0 DR+
203 CC X+31,866 Y+0
204 C X+32,598 Y+0 DR+
205 CC X+31,791 Y+0
206 C X+30,985 Y+0 DR+
207 CC X+31,866 Y+0
208 C X+32,748 Y+0 DR+
209 CC X+31,791 Y+0
210 C X+30,835 Y+0 DR+
211 CC X+31,866 Y+0
212 C X+32,898 Y+0 DR+
213 CC X+31,791 Y+0
214 C X+30,685 Y+0 DR+
215 CC X+31,866 Y+0
216 C X+33,048 Y+0 DR+
217 CC X+31,791 Y+0
218 C X+30,535 Y+0 DR+
219 CC X+31,866 Y+0
220 C X+33,198 Y+0 DR+
221 CC X+31,791 Y+0
222 C X+32,044 Y+1,383 DR+
223 CC X+31,829 Y+0
224 C X+33,229 Y+0 DR+
225 CC X+31,829 Y+0
226 C X+32,044 Y+1,383 DR+
227 L X+31,829 Y+0
228 TOOL CALL 19 Z S7427 DR-3
229 L X+31,629 Y+0,6 Z-10 RL
230 L X+31,029
231 CC X+31,029 Y+0
232 C X+30,429 Y+0 DR+
233 CC X+31,829 Y+0
234 C X+33,229 Y+0 DR+
235 CC X+31,829 Y+0
236 C X+30,429 Y+0 DR+
237 CC X+31,829 Y+0
238 C X+30,771 Y-0,917 DR+
239 CC X+31,829 Y+0
240 C X+33,229 Y+0 DR+
241 CC X+31,829 Y+0
242 C X+30,429 Y+0 DR+
243 CC X+31,829 Y+0
244 C X+30,771 Y-0,917 DR+
245 CC X+31,829 Y+0
246 C X+33,229 Y+0 DR+
247 CC X+31,829 Y+0
248 C X+30,429 Y+0 DR+
249 CC X+31,829 Y+0
250 C X+30,771 Y-0,917 DR+
251 CC X+31,829 Y+0
252 C X+33,229 Y+0 DR+
253 CC X+31,829 Y+0
254 C X+30,429 Y+0 DR+
255 CC X+31,829 Y+0
256 C X+30,771 Y-0,917 DR+
257 CC X+31,829 Y+0
258 C X+33,229 Y+0 DR+
259 CC X+31,829 Y+0
260 C X+30,429 Y+0 DR+
261 CC X+31,829 Y+0
262 C X+30,771 Y-0,917 DR+
263 CC X+31,829 Y+0
264 C X+33,229 Y+0 DR+
265 CC X+31,829 Y+0
266 C X+30,429 Y+0 DR+
267 CC X+31,829 Y+0
268 C X+30,771 Y-0,917 DR+
269 CC X+31,225 Y-0,524
270 C X+31,618 Y-0,977 DR+
271 L X+32,071 Y-0,584
272 L X+31,829 Y+0 R0
273 L Z+50 FMAX
274 M9
275 M5
276 L Z-1 FMAX M91
277 L Y-1 FMAX M91
278 M30
279 END PGM REP 8   1 1 SYMETRIQUE MM
