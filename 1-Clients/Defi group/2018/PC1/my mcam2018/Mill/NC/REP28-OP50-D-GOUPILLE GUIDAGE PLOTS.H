0 BEGIN PGM REP28-OP50-D-GOUPILLE GUIDAGE PLOTS MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP28-OP50-D-GOUPILLE GUIDAGE PLOTS
4 ; PROG-CN DU 30-06-20 A 10:11
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T22 TOURTEAU DIA 40 SQ6 XC TOURTEAU DIAM=40. 4 DENTS R=.8 ARS
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-2*
13 ; T22 TOURTEAU DIA 40 SQ6 XC TOURTEAU DIAM=40. 4 DENTS R=.8 ARS
14 ; CORRECTION USURE GAUCHE
15 ; SUREP R 0. SUREP Z 0.
16 TOOL CALL 22 Z S2000 DR-20
17 L X+35,35 Y+0 FMAX M3
18 L Z+50 FMAX M8
19 L Z+30 FMAX
20 L Z+27,308 F800
21 L X+13,35 RL F1400
22 L X-13,35
23 L X-35,35 R0
24 L Z+30 FMAX
25 L X+35,35 FMAX
26 L Z+29,308 FMAX
27 L Z+26,615 F800
28 L X+13,35 RL F1400
29 L X-13,35
30 L X-35,35 R0
31 L Z+30 FMAX
32 L X+35,35 FMAX
33 L Z+28,615 FMAX
34 L Z+25,922 F800
35 L X+13,35 RL F1400
36 L X-13,35
37 L X-35,35 R0
38 L Z+30 FMAX
39 L X+35,35 FMAX
40 L Z+27,922 FMAX
41 L Z+25,23 F800
42 L X+13,35 RL F1400
43 L X-13,35
44 L X-35,35 R0
45 L Z+30 FMAX
46 L X+35,35 FMAX
47 L Z+27,23 FMAX
48 L Z+24,538 F800
49 L X+13,35 RL F1400
50 L X-13,35
51 L X-35,35 R0
52 L Z+30 FMAX
53 L X+35,35 FMAX
54 L Z+26,538 FMAX
55 L Z+23,845 F800
56 L X+13,35 RL F1400
57 L X-13,35
58 L X-35,35 R0
59 L Z+30 FMAX
60 L X+35,35 FMAX
61 L Z+25,845 FMAX
62 L Z+23,153 F800
63 L X+13,35 RL F1400
64 L X-13,35
65 L X-35,35 R0
66 L Z+30 FMAX
67 L X+35,35 FMAX
68 L Z+25,153 FMAX
69 L Z+22,46 F800
70 L X+13,35 RL F1400
71 L X-13,35
72 L X-35,35 R0
73 L Z+30 FMAX
74 L X+35,35 FMAX
75 L Z+24,46 FMAX
76 L Z+21,767 F800
77 L X+13,35 RL F1400
78 L X-13,35
79 L X-35,35 R0
80 L Z+30 FMAX
81 L X+35,35 FMAX
82 L Z+23,767 FMAX
83 L Z+21,075 F800
84 L X+13,35 RL F1400
85 L X-13,35
86 L X-35,35 R0
87 L Z+30 FMAX
88 L X+35,35 FMAX
89 L Z+23,075 FMAX
90 L Z+20,383 F800
91 L X+13,35 RL F1400
92 L X-13,35
93 L X-35,35 R0
94 L Z+30 FMAX
95 L X+35,35 FMAX
96 L Z+22,383 FMAX
97 L Z+19,69 F800
98 L X+13,35 RL F1400
99 L X-13,35
100 L X-35,35 R0
101 L Z+30 FMAX
102 L X+35,35 FMAX
103 L Z+21,69 FMAX
104 L Z+18,997 F800
105 L X+13,35 RL F1400
106 L X-13,35
107 L X-35,35 R0
108 L Z+30 FMAX
109 L X+35,35 FMAX
110 L Z+20,997 FMAX
111 L Z+18,305 F800
112 L X+13,35 RL F1400
113 L X-13,35
114 L X-35,35 R0
115 L Z+30 FMAX
116 L X+35,35 FMAX
117 L Z+20,305 FMAX
118 L Z+17,613 F800
119 L X+13,35 RL F1400
120 L X-13,35
121 L X-35,35 R0
122 L Z+30 FMAX
123 L X+35,35 FMAX
124 L Z+19,613 FMAX
125 L Z+16,92 F800
126 L X+13,35 RL F1400
127 L X-13,35
128 L X-35,35 R0
129 L Z+30 FMAX
130 L X+35,35 FMAX
131 L Z+18,92 FMAX
132 L Z+16,227 F800
133 L X+13,35 RL F1400
134 L X-13,35
135 L X-35,35 R0
136 L Z+30 FMAX
137 L X+35,35 FMAX
138 L Z+18,227 FMAX
139 L Z+15,535 F800
140 L X+13,35 RL F1400
141 L X-13,35
142 L X-35,35 R0
143 L Z+30 FMAX
144 L X+35,35 FMAX
145 L Z+17,535 FMAX
146 L Z+14,842 F800
147 L X+13,35 RL F1400
148 L X-13,35
149 L X-35,35 R0
150 L Z+30 FMAX
151 L X+35,35 FMAX
152 L Z+16,843 FMAX
153 L Z+14,15 F800
154 L X+13,35 RL F1400
155 L X-13,35
156 L X-35,35 R0
157 L Z+30 FMAX
158 L X+35,35 FMAX
159 L Z+16,15 FMAX
160 L Z+13,458 F800
161 L X+13,35 RL F1400
162 L X-13,35
163 L X-35,35 R0
164 L Z+30 FMAX
165 L X+35,35 FMAX
166 L Z+15,458 FMAX
167 L Z+12,765 F800
168 L X+13,35 RL F1400
169 L X-13,35
170 L X-35,35 R0
171 L Z+30 FMAX
172 L X+35,35 FMAX
173 L Z+14,765 FMAX
174 L Z+12,073 F800
175 L X+13,35 RL F1400
176 L X-13,35
177 L X-35,35 R0
178 L Z+30 FMAX
179 L X+35,35 FMAX
180 L Z+14,073 FMAX
181 L Z+11,38 F800
182 L X+13,35 RL F1400
183 L X-13,35
184 L X-35,35 R0
185 L Z+30 FMAX
186 L X+35,35 FMAX
187 L Z+13,38 FMAX
188 L Z+10,688 F800
189 L X+13,35 RL F1400
190 L X-13,35
191 L X-35,35 R0
192 L Z+30 FMAX
193 L X+35,35 FMAX
194 L Z+12,688 FMAX
195 L Z+9,995 F800
196 L X+13,35 RL F1400
197 L X-13,35
198 L X-35,35 R0
199 L Z+30 FMAX
200 L X+35,35 FMAX
201 L Z+11,995 FMAX
202 L Z+9,303 F800
203 L X+13,35 RL F1400
204 L X-13,35
205 L X-35,35 R0
206 L Z+30 FMAX
207 L X+35,35 FMAX
208 L Z+11,303 FMAX
209 L Z+8,61 F800
210 L X+13,35 RL F1400
211 L X-13,35
212 L X-35,35 R0
213 L Z+30 FMAX
214 L X+35,35 FMAX
215 L Z+10,61 FMAX
216 L Z+7,918 F800
217 L X+13,35 RL F1400
218 L X-13,35
219 L X-35,35 R0
220 L Z+30 FMAX
221 L X+35,35 FMAX
222 L Z+9,918 FMAX
223 L Z+7,225 F800
224 L X+13,35 RL F1400
225 L X-13,35
226 L X-35,35 R0
227 L Z+30 FMAX
228 L X+35,35 FMAX
229 L Z+9,225 FMAX
230 L Z+6,532 F800
231 L X+13,35 RL F1400
232 L X-13,35
233 L X-35,35 R0
234 L Z+30 FMAX
235 L X+35,35 FMAX
236 L Z+8,533 FMAX
237 L Z+5,84 F800
238 L X+13,35 RL F1400
239 L X-13,35
240 L X-35,35 R0
241 L Z+30 FMAX
242 L X+35,35 FMAX
243 L Z+7,84 FMAX
244 L Z+5,148 F800
245 L X+13,35 RL F1400
246 L X-13,35
247 L X-35,35 R0
248 L Z+30 FMAX
249 L X+35,35 FMAX
250 L Z+7,148 FMAX
251 L Z+4,455 F800
252 L X+13,35 RL F1400
253 L X-13,35
254 L X-35,35 R0
255 L Z+30 FMAX
256 L X+35,35 FMAX
257 L Z+6,455 FMAX
258 L Z+3,763 F800
259 L X+13,35 RL F1400
260 L X-13,35
261 L X-35,35 R0
262 L Z+30 FMAX
263 L X+35,35 FMAX
264 L Z+5,763 FMAX
265 L Z+3,07 F800
266 L X+13,35 RL F1400
267 L X-13,35
268 L X-35,35 R0
269 L Z+30 FMAX
270 L X+35,35 FMAX
271 L Z+5,07 FMAX
272 L Z+2,377 F800
273 L X+13,35 RL F1400
274 L X-13,35
275 L X-35,35 R0
276 L Z+30 FMAX
277 L X+35,35 FMAX
278 L Z+4,378 FMAX
279 L Z+1,685 F800
280 L X+13,35 RL F1400
281 L X-13,35
282 L X-35,35 R0
283 L Z+30 FMAX
284 L X+35,35 FMAX
285 L Z+3,685 FMAX
286 L Z+0,993 F800
287 L X+13,35 RL F1400
288 L X-13,35
289 L X-35,35 R0
290 L Z+30 FMAX
291 L X+35,35 FMAX
292 L Z+2,993 FMAX
293 L Z+0,3 F800
294 L X+13,35 RL F1400
295 L X-13,35
296 L X-35,35 R0
297 L Z+30 FMAX
298 L X+35,35 FMAX
299 L Z+2,3 FMAX
300 L Z+0 F800
301 L X+13,35 RL F1400
302 L X-13,35
303 L X-35,35 R0
304 L Z+50 FMAX
305 M9
306 M5
307 L Z-1 FMAX M91
308 L Y-1 FMAX M91
309 M30
310 END PGM REP28-OP50-D-GOUPILLE GUIDAGE PLOTS MM
