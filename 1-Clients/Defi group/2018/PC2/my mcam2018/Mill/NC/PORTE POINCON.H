0 BEGIN PGM PORTE POINCON MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - PORTE POINCON
4 ; PROG-CN DU 13-10-22 A 16:42
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T16 P15323501 XC48 POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-2*
14 ; T16 P15323501 XC48 POCHE SANS TROU FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
15 ; CORRECTION USURE GAUCHE
16 ; SUREP R 0. SUREP Z 0.
17 TOOL CALL 16 Z S3183 DR-6
18 TOOL DEF 1
19 L X-60 Y+0 FMAX M3
20 L Z+50 FMAX M25
21 L Z+2 FMAX
22 L Z-11 F500
23 L X-58,8 Y+8,75 RL F700
24 L Y+9,95
25 CC X-60 Y+9,95
26 C X-60 Y+11,15 DR+
27 CC X-60 Y+0
28 C X-60 Y-11,15 DR+
29 CC X-60 Y+0
30 C X-60 Y+11,15 DR+
31 CC X-60 Y+0
32 C X-61,989 Y+10,971 DR+
33 CC X-61,775 Y+9,79
34 C X-62,956 Y+9,576 DR+
35 L X-62,742 Y+8,396
36 L X-60 Y+0 R0
37 L X-58,8 Y+10,75 RL
38 L Y+11,95
39 CC X-60 Y+11,95
40 C X-60 Y+13,15 DR+
41 CC X-60 Y+0
42 C X-60 Y-13,15 DR+
43 CC X-60 Y+0
44 C X-60 Y+13,15 DR+
45 CC X-60 Y+0
46 C X-61,992 Y+12,998 DR+
47 CC X-61,81 Y+11,812
48 C X-62,997 Y+11,63 DR+
49 L X-62,815 Y+10,444
50 L X-60 Y+0 R0
51 L Z-22 F500
52 L X-58,8 Y+8,75 RL F700
53 L Y+9,95
54 CC X-60 Y+9,95
55 C X-60 Y+11,15 DR+
56 CC X-60 Y+0
57 C X-60 Y-11,15 DR+
58 CC X-60 Y+0
59 C X-60 Y+11,15 DR+
60 CC X-60 Y+0
61 C X-61,989 Y+10,971 DR+
62 CC X-61,775 Y+9,79
63 C X-62,956 Y+9,576 DR+
64 L X-62,742 Y+8,396
65 L X-60 Y+0 R0
66 L X-58,8 Y+10,75 RL
67 L Y+11,95
68 CC X-60 Y+11,95
69 C X-60 Y+13,15 DR+
70 CC X-60 Y+0
71 C X-60 Y-13,15 DR+
72 CC X-60 Y+0
73 C X-60 Y+13,15 DR+
74 CC X-60 Y+0
75 C X-61,992 Y+12,998 DR+
76 CC X-61,81 Y+11,812
77 C X-62,997 Y+11,63 DR+
78 L X-62,815 Y+10,444
79 L X-60 Y+0 R0
80 L Z-33 F500
81 L X-58,8 Y+8,75 RL F700
82 L Y+9,95
83 CC X-60 Y+9,95
84 C X-60 Y+11,15 DR+
85 CC X-60 Y+0
86 C X-60 Y-11,15 DR+
87 CC X-60 Y+0
88 C X-60 Y+11,15 DR+
89 CC X-60 Y+0
90 C X-61,989 Y+10,971 DR+
91 CC X-61,775 Y+9,79
92 C X-62,956 Y+9,576 DR+
93 L X-62,742 Y+8,396
94 L X-60 Y+0 R0
95 L X-58,8 Y+10,75 RL
96 L Y+11,95
97 CC X-60 Y+11,95
98 C X-60 Y+13,15 DR+
99 CC X-60 Y+0
100 C X-60 Y-13,15 DR+
101 CC X-60 Y+0
102 C X-60 Y+13,15 DR+
103 CC X-60 Y+0
104 C X-61,992 Y+12,998 DR+
105 CC X-60 Y+0
106 C X-60 Y-13,15 DR+
107 CC X-60 Y+0
108 C X-60 Y+13,15 DR+
109 CC X-60 Y+0
110 C X-61,992 Y+12,998 DR+
111 CC X-60 Y+0
112 C X-60 Y-13,15 DR+
113 CC X-60 Y+0
114 C X-60 Y+13,15 DR+
115 CC X-60 Y+0
116 C X-61,992 Y+12,998 DR+
117 CC X-61,81 Y+11,812
118 C X-62,997 Y+11,63 DR+
119 L X-62,815 Y+10,444
120 L X-60 Y+0 R0
121 L Z+50 FMAX
122 L X+60 FMAX
123 L Z+2 FMAX
124 L Z-11 F500
125 L X+61,2 Y+8,75 RL F700
126 L Y+9,95
127 CC X+60 Y+9,95
128 C X+60 Y+11,15 DR+
129 CC X+60 Y+0
130 C X+60 Y-11,15 DR+
131 CC X+60 Y+0
132 C X+60 Y+11,15 DR+
133 CC X+60 Y+0
134 C X+58,011 Y+10,971 DR+
135 CC X+58,225 Y+9,79
136 C X+57,044 Y+9,576 DR+
137 L X+57,258 Y+8,396
138 L X+60 Y+0 R0
139 L X+61,2 Y+10,75 RL
140 L Y+11,95
141 CC X+60 Y+11,95
142 C X+60 Y+13,15 DR+
143 CC X+60 Y+0
144 C X+60 Y-13,15 DR+
145 CC X+60 Y+0
146 C X+60 Y+13,15 DR+
147 CC X+60 Y+0
148 C X+58,008 Y+12,998 DR+
149 CC X+58,19 Y+11,812
150 C X+57,003 Y+11,63 DR+
151 L X+57,185 Y+10,444
152 L X+60 Y+0 R0
153 L Z-22 F500
154 L X+61,2 Y+8,75 RL F700
155 L Y+9,95
156 CC X+60 Y+9,95
157 C X+60 Y+11,15 DR+
158 CC X+60 Y+0
159 C X+60 Y-11,15 DR+
160 CC X+60 Y+0
161 C X+60 Y+11,15 DR+
162 CC X+60 Y+0
163 C X+58,011 Y+10,971 DR+
164 CC X+58,225 Y+9,79
165 C X+57,044 Y+9,576 DR+
166 L X+57,258 Y+8,396
167 L X+60 Y+0 R0
168 L X+61,2 Y+10,75 RL
169 L Y+11,95
170 CC X+60 Y+11,95
171 C X+60 Y+13,15 DR+
172 CC X+60 Y+0
173 C X+60 Y-13,15 DR+
174 CC X+60 Y+0
175 C X+60 Y+13,15 DR+
176 CC X+60 Y+0
177 C X+58,008 Y+12,998 DR+
178 CC X+58,19 Y+11,812
179 C X+57,003 Y+11,63 DR+
180 L X+57,185 Y+10,444
181 L X+60 Y+0 R0
182 L Z-33 F500
183 L X+61,2 Y+8,75 RL F700
184 L Y+9,95
185 CC X+60 Y+9,95
186 C X+60 Y+11,15 DR+
187 CC X+60 Y+0
188 C X+60 Y-11,15 DR+
189 CC X+60 Y+0
190 C X+60 Y+11,15 DR+
191 CC X+60 Y+0
192 C X+58,011 Y+10,971 DR+
193 CC X+58,225 Y+9,79
194 C X+57,044 Y+9,576 DR+
195 L X+57,258 Y+8,396
196 L X+60 Y+0 R0
197 L X+61,2 Y+10,75 RL
198 L Y+11,95
199 CC X+60 Y+11,95
200 C X+60 Y+13,15 DR+
201 CC X+60 Y+0
202 C X+60 Y-13,15 DR+
203 CC X+60 Y+0
204 C X+60 Y+13,15 DR+
205 CC X+60 Y+0
206 C X+58,008 Y+12,998 DR+
207 CC X+60 Y+0
208 C X+60 Y-13,15 DR+
209 CC X+60 Y+0
210 C X+60 Y+13,15 DR+
211 CC X+60 Y+0
212 C X+58,008 Y+12,998 DR+
213 CC X+60 Y+0
214 C X+60 Y-13,15 DR+
215 CC X+60 Y+0
216 C X+60 Y+13,15 DR+
217 CC X+60 Y+0
218 C X+58,008 Y+12,998 DR+
219 CC X+58,19 Y+11,812
220 C X+57,003 Y+11,63 DR+
221 L X+57,185 Y+10,444
222 L X+60 Y+0 R0
223 L Z+50 FMAX
224 M78
225 M5
226 L Z-1 FMAX M91
227 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
228 ; CORRECTION USURE GAUCHE
229 ; SUREP R 0. SUREP Z 0.
230 TOOL CALL 1 Z S6000 DR-2,5
231 TOOL DEF 16
232 L X-60 Y+0 FMAX M3
233 L Z+50 FMAX
234 L Z+2 FMAX
235 L Z-2,5 F800
236 L X-59,5 Y+15,65 RL F1200
237 L Y+16,15
238 CC X-60 Y+16,15
239 C X-60 Y+16,65 DR+
240 CC X-60 Y+0
241 C X-60 Y-16,65 DR+
242 CC X-60 Y+0
243 C X-60 Y+16,65 DR+
244 CC X-60 Y+0
245 C X-61,995 Y+16,53 DR+
246 CC X-61,935 Y+16,034
247 C X-62,432 Y+15,974 DR+
248 L X-60 Y+0 R0
249 L Z+50 FMAX
250 L X+60 FMAX
251 L Z+2 FMAX
252 L Z-2,5 F800
253 L X+60,5 Y+15,65 RL F1200
254 L Y+16,15
255 CC X+60 Y+16,15
256 C X+60 Y+16,65 DR+
257 CC X+60 Y+0
258 C X+60 Y-16,65 DR+
259 CC X+60 Y+0
260 C X+60 Y+16,65 DR+
261 CC X+60 Y+0
262 C X+58,005 Y+16,53 DR+
263 CC X+58,065 Y+16,034
264 C X+57,568 Y+15,974 DR+
265 L X+60 Y+0 R0
266 L Z+50 FMAX
267 M5
268 L Z-1 FMAX M91
269 L Y-1 FMAX M91
270 M30
271 END PGM PORTE POINCON MM
