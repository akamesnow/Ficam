0 BEGIN PGM REP13-OP50-D-PLAQUE TIROIR-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP13-OP50-D-PLAQUE TIROIR-A
4 ; PROG-CN DU 08-06-20 A 12:26
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T14 FRAISE CARB DIA 8 52 HRC FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-5*
13 ; T14 FRAISE CARB DIA 8 52 HRC FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
14 ; CORRECTION USURE GAUCHE
15 ; SUREP R 0. SUREP Z 0.
16 TOOL CALL 14 Z S3979 DR-4
17 L X+19,9 Y+95,4 FMAX M3
18 L Z+50 FMAX M25
19 L Z+2 FMAX
20 L Z-10,95 F297
21 L X+20,7 Y+97,3 RL F836
22 L Y+98,1
23 CC X+19,9 Y+98,1
24 C X+19,9 Y+98,9 DR+
25 CC X+19,9 Y+95,4
26 C X+19,9 Y+91,9 DR+
27 CC X+19,9 Y+95,4
28 C X+19,9 Y+98,9 DR+
29 CC X+19,9 Y+95,4
30 C X+18,007 Y+98,344 DR+
31 CC X+18,44 Y+97,671
32 C X+17,767 Y+97,238 DR+
33 L X+18,2 Y+96,565
34 L X+19,9 Y+95,4 R0
35 L Z-11 F297
36 L X+20,7 Y+97,3 RL F836
37 L Y+98,1
38 CC X+19,9 Y+98,1
39 C X+19,9 Y+98,9 DR+
40 CC X+19,9 Y+95,4
41 C X+19,9 Y+91,9 DR+
42 CC X+19,9 Y+95,4
43 C X+19,9 Y+98,9 DR+
44 CC X+19,9 Y+95,4
45 C X+18,007 Y+98,344 DR+
46 CC X+19,9 Y+95,4
47 C X+19,9 Y+91,9 DR+
48 CC X+19,9 Y+95,4
49 C X+19,9 Y+98,9 DR+
50 CC X+19,9 Y+95,4
51 C X+18,007 Y+98,344 DR+
52 CC X+18,44 Y+97,671
53 C X+17,767 Y+97,238 DR+
54 L X+18,2 Y+96,565
55 L X+19,9 Y+95,4 R0
56 L Z+50 FMAX
57 L X-50 Y+114,1 FMAX
58 L Z+2 FMAX
59 L Z-10,95 F297
60 L X-49,2 Y+116 RL F836
61 L Y+116,8
62 CC X-50 Y+116,8
63 C X-50 Y+117,6 DR+
64 CC X-50 Y+114,1
65 C X-50 Y+110,6 DR+
66 CC X-50 Y+114,1
67 C X-50 Y+117,6 DR+
68 CC X-50 Y+114,1
69 C X-51,893 Y+117,044 DR+
70 CC X-51,46 Y+116,371
71 C X-52,133 Y+115,938 DR+
72 L X-51,7 Y+115,265
73 L X-50 Y+114,1 R0
74 L Z-11 F297
75 L X-49,2 Y+116 RL F836
76 L Y+116,8
77 CC X-50 Y+116,8
78 C X-50 Y+117,6 DR+
79 CC X-50 Y+114,1
80 C X-50 Y+110,6 DR+
81 CC X-50 Y+114,1
82 C X-50 Y+117,6 DR+
83 CC X-50 Y+114,1
84 C X-51,893 Y+117,044 DR+
85 CC X-50 Y+114,1
86 C X-50 Y+110,6 DR+
87 CC X-50 Y+114,1
88 C X-50 Y+117,6 DR+
89 CC X-50 Y+114,1
90 C X-51,893 Y+117,044 DR+
91 CC X-51,46 Y+116,371
92 C X-52,133 Y+115,938 DR+
93 L X-51,7 Y+115,265
94 L X-50 Y+114,1 R0
95 L Z+50 FMAX
96 L X-103,9 Y+89,9 FMAX
97 L Z+2 FMAX
98 L Z-10,95 F297
99 L X-103,1 Y+91,8 RL F836
100 L Y+92,6
101 CC X-103,9 Y+92,6
102 C X-103,9 Y+93,4 DR+
103 CC X-103,9 Y+89,9
104 C X-103,9 Y+86,4 DR+
105 CC X-103,9 Y+89,9
106 C X-103,9 Y+93,4 DR+
107 CC X-103,9 Y+89,9
108 C X-105,793 Y+92,844 DR+
109 CC X-105,36 Y+92,171
110 C X-106,033 Y+91,738 DR+
111 L X-105,6 Y+91,065
112 L X-103,9 Y+89,9 R0
113 L Z-11 F297
114 L X-103,1 Y+91,8 RL F836
115 L Y+92,6
116 CC X-103,9 Y+92,6
117 C X-103,9 Y+93,4 DR+
118 CC X-103,9 Y+89,9
119 C X-103,9 Y+86,4 DR+
120 CC X-103,9 Y+89,9
121 C X-103,9 Y+93,4 DR+
122 CC X-103,9 Y+89,9
123 C X-105,793 Y+92,844 DR+
124 CC X-103,9 Y+89,9
125 C X-103,9 Y+86,4 DR+
126 CC X-103,9 Y+89,9
127 C X-103,9 Y+93,4 DR+
128 CC X-103,9 Y+89,9
129 C X-105,793 Y+92,844 DR+
130 CC X-105,36 Y+92,171
131 C X-106,033 Y+91,738 DR+
132 L X-105,6 Y+91,065
133 L X-103,9 Y+89,9 R0
134 L Z+50 FMAX
135 L X-40,1 Y+45,2 FMAX
136 L Z+2 FMAX
137 L Z-10,95 F297
138 L X-39,3 Y+47,1 RL F836
139 L Y+47,9
140 CC X-40,1 Y+47,9
141 C X-40,1 Y+48,7 DR+
142 CC X-40,1 Y+45,2
143 C X-40,1 Y+41,7 DR+
144 CC X-40,1 Y+45,2
145 C X-40,1 Y+48,7 DR+
146 CC X-40,1 Y+45,2
147 C X-41,993 Y+48,144 DR+
148 CC X-41,56 Y+47,471
149 C X-42,233 Y+47,038 DR+
150 L X-41,8 Y+46,365
151 L X-40,1 Y+45,2 R0
152 L Z-11 F297
153 L X-39,3 Y+47,1 RL F836
154 L Y+47,9
155 CC X-40,1 Y+47,9
156 C X-40,1 Y+48,7 DR+
157 CC X-40,1 Y+45,2
158 C X-40,1 Y+41,7 DR+
159 CC X-40,1 Y+45,2
160 C X-40,1 Y+48,7 DR+
161 CC X-40,1 Y+45,2
162 C X-41,993 Y+48,144 DR+
163 CC X-40,1 Y+45,2
164 C X-40,1 Y+41,7 DR+
165 CC X-40,1 Y+45,2
166 C X-40,1 Y+48,7 DR+
167 CC X-40,1 Y+45,2
168 C X-41,993 Y+48,144 DR+
169 CC X-41,56 Y+47,471
170 C X-42,233 Y+47,038 DR+
171 L X-41,8 Y+46,365
172 L X-40,1 Y+45,2 R0
173 L Z+50 FMAX
174 L X+32,3 Y+34,5 FMAX
175 L Z+2 FMAX
176 L Z-10,95 F297
177 L X+33,1 Y+36,4 RL F836
178 L Y+37,2
179 CC X+32,3 Y+37,2
180 C X+32,3 Y+38 DR+
181 CC X+32,3 Y+34,5
182 C X+32,3 Y+31 DR+
183 CC X+32,3 Y+34,5
184 C X+32,3 Y+38 DR+
185 CC X+32,3 Y+34,5
186 C X+30,407 Y+37,444 DR+
187 CC X+30,84 Y+36,771
188 C X+30,167 Y+36,338 DR+
189 L X+30,6 Y+35,665
190 L X+32,3 Y+34,5 R0
191 L Z-11 F297
192 L X+33,1 Y+36,4 RL F836
193 L Y+37,2
194 CC X+32,3 Y+37,2
195 C X+32,3 Y+38 DR+
196 CC X+32,3 Y+34,5
197 C X+32,3 Y+31 DR+
198 CC X+32,3 Y+34,5
199 C X+32,3 Y+38 DR+
200 CC X+32,3 Y+34,5
201 C X+30,407 Y+37,444 DR+
202 CC X+32,3 Y+34,5
203 C X+32,3 Y+31 DR+
204 CC X+32,3 Y+34,5
205 C X+32,3 Y+38 DR+
206 CC X+32,3 Y+34,5
207 C X+30,407 Y+37,444 DR+
208 CC X+30,84 Y+36,771
209 C X+30,167 Y+36,338 DR+
210 L X+30,6 Y+35,665
211 L X+32,3 Y+34,5 R0
212 L Z+50 FMAX
213 M78
214 M5
215 L Z-1 FMAX M91
216 L Y-1 FMAX M91
217 M30
218 END PGM REP13-OP50-D-PLAQUE TIROIR-A MM
