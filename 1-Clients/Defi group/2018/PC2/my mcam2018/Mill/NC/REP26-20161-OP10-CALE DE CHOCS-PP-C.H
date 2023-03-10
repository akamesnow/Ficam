0 BEGIN PGM REP26-20161-OP10-CALE DE CHOCS-PP-C MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP26-20161-OP10-CALE DE CHOCS-PP-C
4 ; PROG-CN DU 15-10-19 A 09:27
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
10 ; T22 FRAISE CARB DIA 8 VC 800 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 4
18 L X+37,5 Y-15 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,1 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X+37,5 Y-15 FMAX M99
23 L Y+15 FMAX M99
24 L X+0 FMAX M99
25 L X-37,5 FMAX M99
26 L Y-15 FMAX M99
27 L Z+50 FMAX
28 M9
29 M5
30 L Z-1 FMAX M91
31 ; T4 DIA 11 VC 40 DMF FORET DIAM=11. 2 DENTS A=118. ARS
32 TOOL CALL 4 Z S1400 DR+0
33 TOOL DEF 22
34 L X+37,5 Y-15 FMAX M3
35 L Z+50 FMAX M7
36 ;  DEBOURRAGE
37 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q206=125 ; AVANCE PLONGEE PROF.~
    Q202=+3,3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
38 L X+37,5 Y-15 FMAX M99
39 L Y+15 FMAX M99
40 L X+0 FMAX M99
41 L X-37,5 FMAX M99
42 L Y-15 FMAX M99
43 L Z+50 FMAX
44 M9
45 M5
46 L Z-1 FMAX M91
47 ; T22 FRAISE CARB DIA 8 VC 800 FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
48 ; CORRECTION AUCUNE
49 ; SUREP R 0. SUREP Z 0.
50 TOOL CALL 22 Z S3979 DR+0
51 TOOL DEF 1
52 L X-37,5 Y+15 FMAX M3
53 L Z+50 FMAX M8
54 L Z+2 FMAX
55 L Z-12 F297
56 L X-37,469 F836
57 CC X-37,563 Y+15
58 C X-37,656 Y+15 DR+
59 CC X-37,438 Y+15
60 C X-37,219 Y+15 DR+
61 CC X-37,563 Y+15
62 C X-37,906 Y+15 DR+
63 CC X-37,438 Y+15
64 C X-36,969 Y+15 DR+
65 CC X-37,563 Y+15
66 C X-38,156 Y+15 DR+
67 CC X-37,438 Y+15
68 C X-36,719 Y+15 DR+
69 CC X-37,563 Y+15
70 C X-38,406 Y+15 DR+
71 CC X-37,438 Y+15
72 C X-36,469 Y+15 DR+
73 CC X-37,563 Y+15
74 C X-38,656 Y+15 DR+
75 CC X-37,438 Y+15
76 C X-36,219 Y+15 DR+
77 CC X-37,563 Y+15
78 C X-38,906 Y+15 DR+
79 CC X-37,438 Y+15
80 C X-35,969 Y+15 DR+
81 CC X-37,563 Y+15
82 C X-39,156 Y+15 DR+
83 CC X-37,438 Y+15
84 C X-35,719 Y+15 DR+
85 CC X-37,563 Y+15
86 C X-39,406 Y+15 DR+
87 CC X-37,438 Y+15
88 C X-35,469 Y+15 DR+
89 CC X-37,563 Y+15
90 C X-39,656 Y+15 DR+
91 CC X-37,438 Y+15
92 C X-36,352 Y+13,065 DR+
93 CC X-37,5 Y+15
94 C X-37,5 Y+12,75 DR+
95 CC X-37,5 Y+15
96 C X-36,352 Y+13,065 DR+
97 L Z+50 FMAX
98 L X+37,5 Y+15 FMAX
99 L Z+2 FMAX
100 L Z-12 F297
101 L X+37,531 F836
102 CC X+37,437 Y+15
103 C X+37,344 Y+15 DR+
104 CC X+37,562 Y+15
105 C X+37,781 Y+15 DR+
106 CC X+37,437 Y+15
107 C X+37,094 Y+15 DR+
108 CC X+37,562 Y+15
109 C X+38,031 Y+15 DR+
110 CC X+37,437 Y+15
111 C X+36,844 Y+15 DR+
112 CC X+37,562 Y+15
113 C X+38,281 Y+15 DR+
114 CC X+37,437 Y+15
115 C X+36,594 Y+15 DR+
116 CC X+37,562 Y+15
117 C X+38,531 Y+15 DR+
118 CC X+37,437 Y+15
119 C X+36,344 Y+15 DR+
120 CC X+37,562 Y+15
121 C X+38,781 Y+15 DR+
122 CC X+37,437 Y+15
123 C X+36,094 Y+15 DR+
124 CC X+37,562 Y+15
125 C X+39,031 Y+15 DR+
126 CC X+37,437 Y+15
127 C X+35,844 Y+15 DR+
128 CC X+37,562 Y+15
129 C X+39,281 Y+15 DR+
130 CC X+37,437 Y+15
131 C X+35,594 Y+15 DR+
132 CC X+37,562 Y+15
133 C X+39,531 Y+15 DR+
134 CC X+37,437 Y+15
135 C X+35,344 Y+15 DR+
136 CC X+37,562 Y+15
137 C X+38,648 Y+13,065 DR+
138 CC X+37,5 Y+15
139 C X+37,5 Y+12,75 DR+
140 CC X+37,5 Y+15
141 C X+38,648 Y+13,065 DR+
142 L Z+50 FMAX
143 TOOL CALL 22 Z S3979 DR-4
144 L X-37,5 Y+15 Z+50 FMAX
145 L Z+2 FMAX
146 L Z-12 F297
147 L X-36,7 Y+15,65 RL F836
148 L Y+16,45
149 CC X-37,5 Y+16,45
150 C X-37,5 Y+17,25 DR+
151 CC X-37,5 Y+15
152 C X-37,5 Y+12,75 DR+
153 CC X-37,5 Y+15
154 C X-37,5 Y+17,25 DR+
155 CC X-37,5 Y+15
156 C X-39,247 Y+16,418 DR+
157 CC X-38,626 Y+15,914
158 C X-39,13 Y+15,293 DR+
159 L X-38,509 Y+14,789
160 L X-37,5 Y+15 R0
161 L Z+50 FMAX
162 L X+37,5 FMAX
163 L Z+2 FMAX
164 L Z-12 F297
165 L X+38,3 Y+15,65 RL F836
166 L Y+16,45
167 CC X+37,5 Y+16,45
168 C X+37,5 Y+17,25 DR+
169 CC X+37,5 Y+15
170 C X+37,5 Y+12,75 DR+
171 CC X+37,5 Y+15
172 C X+37,5 Y+17,25 DR+
173 CC X+37,5 Y+15
174 C X+35,753 Y+16,418 DR+
175 CC X+36,374 Y+15,914
176 C X+35,87 Y+15,293 DR+
177 L X+36,491 Y+14,789
178 L X+37,5 Y+15 R0
179 L Z+50 FMAX
180 M9
181 M5
182 L Z-1 FMAX M91
183 L Y-1 FMAX M91
184 M30
185 END PGM REP26-20161-OP10-CALE DE CHOCS-PP-C MM
