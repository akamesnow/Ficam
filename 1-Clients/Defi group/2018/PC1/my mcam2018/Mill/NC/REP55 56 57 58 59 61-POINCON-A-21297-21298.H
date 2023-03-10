0 BEGIN PGM REP55 56 57 58 59 61-POINCON-A-21297-21298 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP55 56 57 58 59 61-POINCON-A-21297-21298
4 ; PROG-CN DU 13-07-22 A 11:01
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
11 ; T7 DIA 10.3 VC 40 DMF FORET DIAM=10.3 2 DENTS A=118. CARBURE PLAQUETTES
12 ; T26 OK TARAUD A DROITE DIAM=12. 2 DENTS A=118. ARS
13 ; T20 CARBURE DIA5  VC 40 DMF OK FORET DIAM=5.1 2 DENTS A=118. ARS
14 ; FIN DE LISTE DES OUTILS
15 L R0 FMAX
16 L Z-1 FMAX M91
17 ; *GROUPE D'USINAGE-5*
18 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
19 TOOL CALL 1 Z S1856 DR+0
20 TOOL DEF 2
21 L X-59 Y+95,5 FMAX M3
22 L Z+50 FMAX M8
23 ;  POINTAGE-PERCAGE
24 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
25 L X-59 Y+95,5 FMAX M99
26 L X-9 Y+71 FMAX M99
27 L X+41 Y+95,5 FMAX M99
28 L X-24 Y+34 FMAX M99
29 L Y+8 FMAX M99
30 L X-71 Y+34 FMAX M99
31 L Y+8 FMAX M99
32 L X-64 Y-51,5 FMAX M99
33 L X-14 Y-27 FMAX M99
34 L X+36 Y-51,5 FMAX M99
35 L X-64 Y-93,5 FMAX M99
36 L X-14 Y-69 FMAX M99
37 L X+36 Y-93,5 FMAX M99
38 L Z+50 FMAX
39 M9
40 M5
41 L Z-1 FMAX M91
42 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
43 TOOL CALL 2 Z S2000 DR+0
44 TOOL DEF 27
45 L X-59 Y+95,5 FMAX M3
46 L Z+50 FMAX M8
47 ;  DEBOURRAGE
48 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
49 L X-59 Y+95,5 FMAX M99
50 L X-9 Y+71 FMAX M99
51 L X+41 Y+95,5 FMAX M99
52 L X-24 Y+34 FMAX M99
53 L Y+8 FMAX M99
54 L X-71 Y+34 FMAX M99
55 L Y+8 FMAX M99
56 L X-64 Y-51,5 FMAX M99
57 L X-14 Y-27 FMAX M99
58 L X+36 Y-51,5 FMAX M99
59 L X-64 Y-93,5 FMAX M99
60 L X-14 Y-69 FMAX M99
61 L X+36 Y-93,5 FMAX M99
62 L Z+50 FMAX
63 M9
64 M5
65 L Z-1 FMAX M91
66 M00
67 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
68 TOOL CALL 27 Z S100 DR+0
69 TOOL DEF 1
70 L X-59 Y+95,5 FMAX M3
71 L Z+50 FMAX M8
72 ;  TARAUDAGE
73 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-26 ; PROFONDEUR~
    Q239=1.5 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
74 L X-59 Y+95,5 FMAX M99
75 L X-9 Y+71 FMAX M99
76 L X+41 Y+95,5 FMAX M99
77 L X-24 Y+34 FMAX M99
78 L Y+8 FMAX M99
79 L X-71 Y+34 FMAX M99
80 L Y+8 FMAX M99
81 L X-64 Y-51,5 FMAX M99
82 L X-14 Y-27 FMAX M99
83 L X+36 Y-51,5 FMAX M99
84 L X-64 Y-93,5 FMAX M99
85 L X-14 Y-69 FMAX M99
86 L X+36 Y-93,5 FMAX M99
87 L Z+50 FMAX
88 M9
89 M5
90 L Z-1 FMAX M91
91 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
92 TOOL CALL 1 Z S1856 DR+0
93 TOOL DEF 7
94 L X-104,588 Y-42 FMAX M3
95 L Z+50 FMAX M8
96 ;  POINTAGE-PERCAGE
97 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
98 L X-104,588 Y-42 FMAX M99
99 L Y+74 FMAX M99
100 L X+14,101 Y+40,499 FMAX M99
101 L X+47,101 FMAX M99
102 L X+14,101 Y+1,501 FMAX M99
103 L X+47,101 FMAX M99
104 L X+86,588 Y+74 FMAX M99
105 L Y-42 FMAX M99
106 L X+114,588 Y+74 FMAX M99
107 L Y-42 FMAX M99
108 L Z+50 FMAX
109 M9
110 M5
111 L Z-1 FMAX M91
112 ; T7 DIA 10.3 VC 40 DMF FORET DIAM=10.3 2 DENTS A=118. CARBURE PLAQUETTES
113 TOOL CALL 7 Z S1400 DR+0
114 TOOL DEF 26
115 L X-104,588 Y-42 FMAX M3
116 L Z+50 FMAX M8
117 ;  DEBOURRAGE
118 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32 ; PROFONDEUR~
    Q206=130 ; AVANCE PLONGEE PROF.~
    Q202=+5,15 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
119 L X-104,588 Y-42 FMAX M99
120 L Y+74 FMAX M99
121 L X+14,101 Y+40,499 FMAX M99
122 L X+47,101 FMAX M99
123 L X+14,101 Y+1,501 FMAX M99
124 L X+47,101 FMAX M99
125 L X+86,588 Y+74 FMAX M99
126 L Y-42 FMAX M99
127 L X+114,588 Y+74 FMAX M99
128 L Y-42 FMAX M99
129 L Z+50 FMAX
130 M9
131 M5
132 L Z-1 FMAX M91
133 M00
134 ; T26 OK TARAUD A DROITE DIAM=12. 2 DENTS A=118. ARS
135 TOOL CALL 26 Z S100 DR+0
136 TOOL DEF 1
137 L X-104,588 Y-42 FMAX M3
138 L Z+50 FMAX M8
139 ;  TARAUDAGE
140 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-26 ; PROFONDEUR~
    Q239=1.75 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
141 L X-104,588 Y-42 FMAX M99
142 L Y+74 FMAX M99
143 L X+14,101 Y+40,499 FMAX M99
144 L X+47,101 FMAX M99
145 L X+14,101 Y+1,501 FMAX M99
146 L X+47,101 FMAX M99
147 L X+86,588 Y+74 FMAX M99
148 L Y-42 FMAX M99
149 L X+114,588 Y+74 FMAX M99
150 L Y-42 FMAX M99
151 L Z+50 FMAX
152 M9
153 M5
154 L Z-1 FMAX M91
155 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
156 TOOL CALL 1 Z S1856 DR+0
157 TOOL DEF 20
158 L X-100,644 Y+95,5 FMAX M3
159 L Z+50 FMAX M8
160 ;  POINTAGE-PERCAGE
161 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,1 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
162 L X-100,644 Y+95,5 FMAX M99
163 L X-77,5 Y+92,125 FMAX M99
164 L X+59,5 Y+98,375 FMAX M99
165 L X+90,531 Y+95,5 FMAX M99
166 L X+68,923 Y+44,983 FMAX M99
167 L X+68,694 Y+5 FMAX M99
168 L X-7,263 Y-1,775 FMAX M99
169 L X-7,5 Y+12 FMAX M99
170 L X-7,013 Y+37,175 FMAX M99
171 L X-54,5 Y+30 FMAX M99
172 L X-109,294 Y-63,5 FMAX M99
173 L X-82,5 Y-48,125 FMAX M99
174 L X+54,5 Y-54,375 FMAX M99
175 L X+81,882 Y-63,5 FMAX M99
176 L X+118,531 Y+95,5 FMAX M99
177 L X+109,882 Y-63,5 FMAX M99
178 L X+54,5 Y-96,375 FMAX M99
179 L X-82,5 Y-90,125 FMAX M99
180 L Z+50 FMAX
181 M9
182 M5
183 L Z-1 FMAX M91
184 ; T20 CARBURE DIA5  VC 40 DMF OK FORET DIAM=5.1 2 DENTS A=118. ARS
185 TOOL CALL 20 Z S3000 DR+0
186 TOOL DEF 1
187 L X-100,644 Y+95,5 FMAX M3
188 L Z+50 FMAX M8
189 ;  DEBOURRAGE
190 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
191 L X-100,644 Y+95,5 FMAX M99
192 L X-77,5 Y+92,125 FMAX M99
193 L X+59,5 Y+98,375 FMAX M99
194 L X+90,531 Y+95,5 FMAX M99
195 L X+68,923 Y+44,983 FMAX M99
196 L X+68,694 Y+5 FMAX M99
197 L X-7,263 Y-1,775 FMAX M99
198 L X-7,5 Y+12 FMAX M99
199 L X-7,013 Y+37,175 FMAX M99
200 L X-54,5 Y+30 FMAX M99
201 L X-109,294 Y-63,5 FMAX M99
202 L X-82,5 Y-48,125 FMAX M99
203 L X+54,5 Y-54,375 FMAX M99
204 L X+81,882 Y-63,5 FMAX M99
205 L X+118,531 Y+95,5 FMAX M99
206 L X+109,882 Y-63,5 FMAX M99
207 L X+54,5 Y-96,375 FMAX M99
208 L X-82,5 Y-90,125 FMAX M99
209 L Z+50 FMAX
210 M9
211 M5
212 L Z-1 FMAX M91
213 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
214 TOOL CALL 1 Z S1856 DR+0
215 TOOL DEF 7
216 L X-104,588 Y+59 FMAX M3
217 L Z+50 FMAX M8
218 ;  POINTAGE-PERCAGE
219 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
220 L X-104,588 Y+59 FMAX M99
221 L Y-27 FMAX M99
222 L X-14 Y-41,5 FMAX M99
223 L X-79,5 Y+21 FMAX M99
224 L X-38 FMAX M99
225 L X+30,601 Y+1,501 FMAX M99
226 L Y+40,499 FMAX M99
227 L X+86,588 Y-27 FMAX M99
228 L Y+59 FMAX M99
229 L X-9 Y+85,5 FMAX M99
230 L X-14 Y-83,5 FMAX M99
231 L X+114,588 Y-27 FMAX M99
232 L Y+59 FMAX M99
233 L Z+50 FMAX
234 M9
235 M5
236 L Z-1 FMAX M91
237 ; T7 DIA 10.3 VC 40 DMF FORET DIAM=10.3 2 DENTS A=118. CARBURE PLAQUETTES
238 TOOL CALL 7 Z S1400 DR+0
239 TOOL DEF 1
240 L X-104,588 Y+59 FMAX M3
241 L Z+50 FMAX M8
242 ;  DEBOURRAGE
243 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-27,5 ; PROFONDEUR~
    Q206=130 ; AVANCE PLONGEE PROF.~
    Q202=+5,15 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
244 L X-104,588 Y+59 FMAX M99
245 L Y-27 FMAX M99
246 L X-14 Y-41,5 FMAX M99
247 L X-79,5 Y+21 FMAX M99
248 L X-38 FMAX M99
249 L X+30,601 Y+1,501 FMAX M99
250 L Y+40,499 FMAX M99
251 L X+86,588 Y-27 FMAX M99
252 L Y+59 FMAX M99
253 L X-9 Y+85,5 FMAX M99
254 L X-14 Y-83,5 FMAX M99
255 L X+114,588 Y-27 FMAX M99
256 L Y+59 FMAX M99
257 L Z+50 FMAX
258 M9
259 M5
260 L Z-1 FMAX M91
261 L Y-1 FMAX M91
262 M30
263 END PGM REP55 56 57 58 59 61-POINCON-A-21297-21298 MM
