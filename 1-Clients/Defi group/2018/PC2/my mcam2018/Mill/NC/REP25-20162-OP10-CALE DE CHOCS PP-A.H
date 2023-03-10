0 BEGIN PGM REP25-20162-OP10-CALE DE CHOCS PP-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP25-20162-OP10-CALE DE CHOCS PP-A
4 ; PROG-CN DU 16-10-19 A 08:04
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
11 ; T22 FRAISE CARB DIA 8 VC 800 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-1*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 2
19 L X-110 Y+6,5 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,8 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,8 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X-110 Y+6,5 FMAX M99
24 M9
25 M5
26 L Z-1 FMAX M91
27 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
28 TOOL CALL 2 Z S2000 DR+0
29 TOOL DEF 1
30 L X-110 Y+6,5 FMAX M3
31 L Z+50 FMAX M7
32 ;  DEBOURRAGE
33 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
34 L X-110 Y+6,5 FMAX M99
35 M9
36 M5
37 L Z-1 FMAX M91
38 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
39 TOOL CALL 1 Z S1856 DR+0
40 TOOL DEF 4
41 L X-115 Y+62,5 FMAX M3
42 L Z+50 FMAX M8
43 ;  POINTAGE-PERCAGE
44 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,1 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
45 L X-115 Y+62,5 FMAX M99
46 L Y-17,5 FMAX M99
47 L Y-62,5 FMAX M99
48 L X+0 FMAX M99
49 L X+62,373 Y+25,52 FMAX M99
50 L X+49,737 Y+48,243 FMAX M99
51 L X+0 Y+62,5 FMAX M99
52 L X+115 FMAX M99
53 L Y-17,5 FMAX M99
54 L Y-42,5 FMAX M99
55 L Z+50 FMAX
56 M9
57 M5
58 L Z-1 FMAX M91
59 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
60 TOOL CALL 4 Z S1400 DR+0
61 TOOL DEF 22
62 L X-115 Y+62,5 FMAX M3
63 L Z+50 FMAX M7
64 ;  DEBOURRAGE
65 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
66 L X-115 Y+62,5 FMAX M99
67 L Y-17,5 FMAX M99
68 L Y-62,5 FMAX M99
69 L X+0 FMAX M99
70 L X+62,373 Y+25,52 FMAX M99
71 L X+49,737 Y+48,243 FMAX M99
72 L X+0 Y+62,5 FMAX M99
73 L X+115 FMAX M99
74 L Y-17,5 FMAX M99
75 L Y-42,5 FMAX M99
76 L Z+50 FMAX
77 M9
78 M5
79 L Z-1 FMAX M91
80 ; T22 FRAISE CARB DIA 8 VC 800 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
81 ; CORRECTION AUCUNE
82 ; SUREP R 0. SUREP Z 0.
83 TOOL CALL 22 Z S3979 DR+0
84 TOOL DEF 1
85 L X-115 Y-17,5 FMAX M3
86 L Z+50 FMAX M8
87 L Z+2 FMAX
88 L Z-12 F297
89 L X-114,969 F836
90 CC X-115,062 Y-17,5
91 C X-115,156 Y-17,5 DR+
92 CC X-114,937 Y-17,5
93 C X-114,719 Y-17,5 DR+
94 CC X-115,062 Y-17,5
95 C X-115,406 Y-17,5 DR+
96 CC X-114,937 Y-17,5
97 C X-114,469 Y-17,5 DR+
98 CC X-115,062 Y-17,5
99 C X-115,656 Y-17,5 DR+
100 CC X-114,937 Y-17,5
101 C X-114,219 Y-17,5 DR+
102 CC X-115,062 Y-17,5
103 C X-115,906 Y-17,5 DR+
104 CC X-114,937 Y-17,5
105 C X-113,969 Y-17,5 DR+
106 CC X-115,062 Y-17,5
107 C X-116,156 Y-17,5 DR+
108 CC X-114,937 Y-17,5
109 C X-113,719 Y-17,5 DR+
110 CC X-115,062 Y-17,5
111 C X-116,406 Y-17,5 DR+
112 CC X-114,937 Y-17,5
113 C X-113,469 Y-17,5 DR+
114 CC X-115,062 Y-17,5
115 C X-116,656 Y-17,5 DR+
116 CC X-114,937 Y-17,5
117 C X-113,219 Y-17,5 DR+
118 CC X-115,062 Y-17,5
119 C X-116,906 Y-17,5 DR+
120 CC X-114,937 Y-17,5
121 C X-112,969 Y-17,5 DR+
122 CC X-115,062 Y-17,5
123 C X-117,156 Y-17,5 DR+
124 CC X-114,937 Y-17,5
125 C X-113,852 Y-19,435 DR+
126 CC X-115 Y-17,5
127 C X-115 Y-19,75 DR+
128 CC X-115 Y-17,5
129 C X-113,852 Y-19,435 DR+
130 L Z+50 FMAX
131 L X+115 Y-17,5 FMAX
132 L Z+2 FMAX
133 L Z-12 F297
134 L X+115,031 F836
135 CC X+114,938 Y-17,5
136 C X+114,844 Y-17,5 DR+
137 CC X+115,063 Y-17,5
138 C X+115,281 Y-17,5 DR+
139 CC X+114,938 Y-17,5
140 C X+114,594 Y-17,5 DR+
141 CC X+115,063 Y-17,5
142 C X+115,531 Y-17,5 DR+
143 CC X+114,938 Y-17,5
144 C X+114,344 Y-17,5 DR+
145 CC X+115,063 Y-17,5
146 C X+115,781 Y-17,5 DR+
147 CC X+114,938 Y-17,5
148 C X+114,094 Y-17,5 DR+
149 CC X+115,063 Y-17,5
150 C X+116,031 Y-17,5 DR+
151 CC X+114,938 Y-17,5
152 C X+113,844 Y-17,5 DR+
153 CC X+115,063 Y-17,5
154 C X+116,281 Y-17,5 DR+
155 CC X+114,938 Y-17,5
156 C X+113,594 Y-17,5 DR+
157 CC X+115,063 Y-17,5
158 C X+116,531 Y-17,5 DR+
159 CC X+114,938 Y-17,5
160 C X+113,344 Y-17,5 DR+
161 CC X+115,063 Y-17,5
162 C X+116,781 Y-17,5 DR+
163 CC X+114,938 Y-17,5
164 C X+113,094 Y-17,5 DR+
165 CC X+115,063 Y-17,5
166 C X+117,031 Y-17,5 DR+
167 CC X+114,938 Y-17,5
168 C X+112,844 Y-17,5 DR+
169 CC X+115,063 Y-17,5
170 C X+116,148 Y-19,435 DR+
171 CC X+115 Y-17,5
172 C X+115 Y-19,75 DR+
173 CC X+115 Y-17,5
174 C X+116,148 Y-19,435 DR+
175 L Z+50 FMAX
176 TOOL CALL 22 Z S3979 DR-4
177 L X-115 Y-17,5 Z+50 FMAX
178 L Z+2 FMAX
179 L Z-12 F297
180 L X-114,2 Y-16,85 RL F836
181 L Y-16,05
182 CC X-115 Y-16,05
183 C X-115 Y-15,25 DR+
184 CC X-115 Y-17,5
185 C X-115 Y-19,75 DR+
186 CC X-115 Y-17,5
187 C X-115 Y-15,25 DR+
188 CC X-115 Y-17,5
189 C X-116,747 Y-16,082 DR+
190 CC X-115 Y-17,5
191 C X-115 Y-19,75 DR+
192 CC X-115 Y-17,5
193 C X-115 Y-15,25 DR+
194 CC X-115 Y-17,5
195 C X-116,747 Y-16,082 DR+
196 CC X-116,126 Y-16,586
197 C X-116,63 Y-17,207 DR+
198 L X-116,009 Y-17,711
199 L X-115 Y-17,5 R0
200 L Z+50 FMAX
201 L X+115 FMAX
202 L Z+2 FMAX
203 L Z-12 F297
204 L X+115,8 Y-16,85 RL F836
205 L Y-16,05
206 CC X+115 Y-16,05
207 C X+115 Y-15,25 DR+
208 CC X+115 Y-17,5
209 C X+115 Y-19,75 DR+
210 CC X+115 Y-17,5
211 C X+115 Y-15,25 DR+
212 CC X+115 Y-17,5
213 C X+113,253 Y-16,082 DR+
214 CC X+115 Y-17,5
215 C X+115 Y-19,75 DR+
216 CC X+115 Y-17,5
217 C X+115 Y-15,25 DR+
218 CC X+115 Y-17,5
219 C X+113,253 Y-16,082 DR+
220 CC X+113,874 Y-16,586
221 C X+113,37 Y-17,207 DR+
222 L X+113,991 Y-17,711
223 L X+115 Y-17,5 R0
224 L Z+50 FMAX
225 M9
226 M5
227 L Z-1 FMAX M91
228 L Y-1 FMAX M91
229 M30
230 END PGM REP25-20162-OP10-CALE DE CHOCS PP-A MM
