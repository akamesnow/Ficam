0 BEGIN PGM REP22-CASSETTE-1-MATRICE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP22-CASSETTE-1-MATRICE-A
4 ; PROG-CN DU 06-01-20 A 15:07
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-2*
14 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
15 ; CORRECTION AUCUNE
16 ; SUREP R 0. SUREP Z 0.
17 TOOL CALL 18 Z S2865 DR+0
18 TOOL DEF 1
19 L X+0,103 Y-4,999 FMAX M3
20 L Z+50 FMAX M25
21 L Z+2 FMAX
22 L Z+0,5 F500
23 CC X+0 Y+0
24 CP IPA-180 Z-0,048 DR-
25 CC X+0 Y+0
26 CP IPA-180 Z-0,597 DR-
27 CC X+0 Y+0
28 CP IPA-180 Z-1,146 DR-
29 CC X+0 Y+0
30 CP IPA-180 Z-1,694 DR-
31 CC X+0 Y+0
32 CP IPA-180 Z-2,242 DR-
33 CC X+0 Y+0
34 CP IPA-180 Z-2,791 DR-
35 CC X+0 Y+0
36 CP IPA-180 Z-3,34 DR-
37 CC X+0 Y+0
38 CP IPA-180 Z-3,888 DR-
39 CC X+0 Y+0
40 CP IPA-180 Z-4,437 DR-
41 CC X+0 Y+0
42 CP IPA-180 Z-4,985 DR-
43 CC X+0 Y+0
44 CP IPA-180 Z-5,534 DR-
45 CC X+0 Y+0
46 CP IPA-180 Z-6,082 DR-
47 CC X+0 Y+0
48 CP IPA-180 Z-6,63 DR-
49 CC X+0 Y+0
50 CP IPA-180 Z-7,179 DR-
51 CC X+0 Y+0
52 CP IPA-180 Z-7,728 DR-
53 CC X+0 Y+0
54 CP IPA-180 Z-8,277 DR-
55 CC X+0 Y+0
56 CP IPA-180 Z-8,825 DR-
57 CC X+0 Y+0
58 CP IPA-180 Z-9,374 DR-
59 CC X+0 Y+0
60 CP IPA-271,18 Z-10,2 DR-
61 L X+0,75 Y+0 F401
62 CC X-1,5 Y+0
63 C X-3,75 Y+0 DR+
64 CC X+1,5 Y+0
65 C X+6,75 Y+0 DR+
66 CC X-1,5 Y+0
67 C X-8,146 Y+4,888 DR+
68 CC X+0 Y+0
69 C X-9,5 Y+0 DR+
70 CC X+0 Y+0
71 C X-8,146 Y+4,888 DR+
72 L Z+10 FMAX
73 L X+0 Y+0 FMAX
74 TOOL CALL 18 Z S2865 DR-5
75 L X+0 Y+0 Z+2 FMAX
76 L Z-10,2 F500
77 L X+7,5 Y-1 RL F401
78 L X+8,5
79 CC X+8,5 Y+0
80 C X+9,5 Y+0 DR+
81 CC X+0 Y+0
82 C X-9,5 Y+0 DR+
83 CC X+0 Y+0
84 C X+9,5 Y+0 DR+
85 CC X+0 Y+0
86 C X+9,447 Y+0,998 DR+
87 CC X+0 Y+0
88 C X-9,5 Y+0 DR+
89 CC X+0 Y+0
90 C X+9,5 Y+0 DR+
91 CC X+0 Y+0
92 C X+9,447 Y+0,998 DR+
93 CC X+0 Y+0
94 C X-9,5 Y+0 DR+
95 CC X+0 Y+0
96 C X+9,5 Y+0 DR+
97 CC X+0 Y+0
98 C X+9,447 Y+0,998 DR+
99 CC X+8,453 Y+0,893
100 C X+8,348 Y+1,888 DR+
101 L X+7,353 Y+1,782
102 L X+0 Y+0 R0
103 L Z+50 FMAX
104 M78
105 M5
106 L Z-1 FMAX M91
107 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
108 ; CORRECTION USURE GAUCHE
109 ; SUREP R 0. SUREP Z 0.
110 TOOL CALL 1 Z S6000 DR-2,5
111 TOOL DEF 18
112 L X+0 Y+0 FMAX M3
113 L Z+50 FMAX
114 L Z+2 FMAX
115 L Z-2,3 F800
116 L X+11 Y-0,5 RL F1200
117 L X+11,5
118 CC X+11,5 Y+0
119 C X+12 Y+0 DR+
120 CC X+0 Y+0
121 C X-12 Y+0 DR+
122 CC X+0 Y+0
123 C X+12 Y+0 DR+
124 CC X+0 Y+0
125 C X+11,958 Y+0,999 DR+
126 CC X+11,46 Y+0,957
127 C X+11,418 Y+1,455 DR+
128 L X+10,92 Y+1,414
129 L X+0 Y+0 R0
130 L Z+50 FMAX
131 L X+105 Y-46 FMAX
132 L Z+2 FMAX
133 L Z-2,3 F800
134 L X+115,515 Y-46,5 RL F1200
135 L X+116,015
136 CC X+116,015 Y-46
137 C X+116,515 Y-46 DR+
138 CC X+105 Y-46
139 C X+93,485 Y-46 DR+
140 CC X+105 Y-46
141 C X+116,515 Y-46 DR+
142 CC X+105 Y-46
143 C X+116,472 Y-45,001 DR+
144 CC X+115,973 Y-45,045
145 C X+115,93 Y-44,547 DR+
146 L X+115,432 Y-44,59
147 L X+105 Y-46 R0
148 L Z+50 FMAX
149 ; CORRECTION USURE GAUCHE
150 ; SUREP R 0. SUREP Z 0.
151 L X-36 Y-25 FMAX
152 L Z+2 FMAX
153 L Z-2,3 F800
154 L X-16,5 Y-10 RL F1200
155 L X-16
156 CC X-16 Y-9,5
157 C X-15,5 Y-9,5 DR+
158 L Y-9
159 CC X-23 Y-9
160 C X-23 Y-1,5 DR+
161 L X-54
162 CC X-54 Y-4
163 C X-56,5 Y-4 DR+
164 L Y-46
165 CC X-54 Y-46
166 C X-54 Y-48,5 DR+
167 L X-18
168 CC X-18 Y-46
169 C X-15,5 Y-46 DR+
170 L Y-9
171 CC X-23 Y-9
172 C X-15,517 Y-8,5 DR+
173 CC X-16,016 Y-8,534
174 C X-16,049 Y-8,035 DR+
175 L X-16,548 Y-8,068
176 L X-36 Y-25 R0
177 L Z+50 FMAX
178 M5
179 L Z-1 FMAX M91
180 L Y-1 FMAX M91
181 M30
182 END PGM REP22-CASSETTE-1-MATRICE-A MM
