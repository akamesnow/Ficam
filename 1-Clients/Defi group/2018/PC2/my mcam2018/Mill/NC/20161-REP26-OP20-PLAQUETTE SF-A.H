0 BEGIN PGM 20161-REP26-OP20-PLAQUETTE SF-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - 20161-REP26-OP20-PLAQUETTE SF-A
4 ; PROG-CN DU 18-09-19 A 13:49
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-2*
13 ; T18 P15322450 Z160 POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
14 ; CORRECTION USURE GAUCHE
15 ; SUREP R -0.5 SUREP Z 0.
16 TOOL CALL 18 Z S1751 DR-5
17 L X-124,132 Y+24,132 FMAX M3
18 L Z+50 FMAX M25
19 L Z+2 FMAX
20 L Z-9 F500
21 L X-118,132 RL F315
22 CC X-118,132 Y+28,132
23 C X-115,303 Y+25,303 DR+
24 L X-110,303 Y+30,303
25 CC X-113,132 Y+33,132
26 C X-109,132 Y+33,132 DR+
27 L Y+39,132 R0
28 L Z+10 FMAX
29 L X-122,01 Y+22,01 FMAX
30 L Z+2 FMAX
31 L Z-9 F500
32 L X-116,01 RL F315
33 CC X-116,01 Y+26,01
34 C X-113,182 Y+23,182 DR+
35 L X-108,182 Y+28,182
36 CC X-111,01 Y+31,01
37 C X-107,01 Y+31,01 DR+
38 L Y+37,01 R0
39 L Z+10 FMAX
40 L X-122,01 Y+22,01 FMAX
41 L Z+2 FMAX
42 L Z-9 F500
43 L X-116,01 RL F315
44 CC X-116,01 Y+26,01
45 C X-113,182 Y+23,182 DR+
46 L X-108,182 Y+28,182
47 CC X-111,01 Y+31,01
48 C X-107,01 Y+31,01 DR+
49 L Y+37,01 R0
50 L Z+50 FMAX
51 L X+109,132 Y+39,132 FMAX
52 L Z+2 FMAX
53 L Z-9 F500
54 L Y+33,132 RL F315
55 CC X+113,132 Y+33,132
56 C X+110,303 Y+30,303 DR+
57 L X+115,303 Y+25,303
58 CC X+118,132 Y+28,132
59 C X+118,132 Y+24,132 DR+
60 L X+124,132 R0
61 L Z+10 FMAX
62 L X+107,01 Y+37,01 FMAX
63 L Z+2 FMAX
64 L Z-9 F500
65 L Y+31,01 RL F315
66 CC X+111,01 Y+31,01
67 C X+108,182 Y+28,182 DR+
68 L X+113,182 Y+23,182
69 CC X+116,01 Y+26,01
70 C X+116,01 Y+22,01 DR+
71 L X+122,01 R0
72 L Z+10 FMAX
73 L X+107,01 Y+37,01 FMAX
74 L Z+2 FMAX
75 L Z-9 F500
76 L Y+31,01 RL F315
77 CC X+111,01 Y+31,01
78 C X+108,182 Y+28,182 DR+
79 L X+113,182 Y+23,182
80 CC X+116,01 Y+26,01
81 C X+116,01 Y+22,01 DR+
82 L X+122,01 R0
83 L Z+50 FMAX
84 L X+124,132 Y-24,132 FMAX
85 L Z+2 FMAX
86 L Z-9 F500
87 L X+118,132 RL F315
88 CC X+118,132 Y-28,132
89 C X+115,303 Y-25,303 DR+
90 L X+110,303 Y-30,303
91 CC X+113,132 Y-33,132
92 C X+109,132 Y-33,132 DR+
93 L Y-39,132 R0
94 L Z+10 FMAX
95 L X+122,01 Y-22,01 FMAX
96 L Z+2 FMAX
97 L Z-9 F500
98 L X+116,01 RL F315
99 CC X+116,01 Y-26,01
100 C X+113,182 Y-23,182 DR+
101 L X+108,182 Y-28,182
102 CC X+111,01 Y-31,01
103 C X+107,01 Y-31,01 DR+
104 L Y-37,01 R0
105 L Z+10 FMAX
106 L X+122,01 Y-22,01 FMAX
107 L Z+2 FMAX
108 L Z-9 F500
109 L X+116,01 RL F315
110 CC X+116,01 Y-26,01
111 C X+113,182 Y-23,182 DR+
112 L X+108,182 Y-28,182
113 CC X+111,01 Y-31,01
114 C X+107,01 Y-31,01 DR+
115 L Y-37,01 R0
116 L Z+50 FMAX
117 L X-109,132 Y-39,132 FMAX
118 L Z+2 FMAX
119 L Z-9 F500
120 L Y-33,132 RL F315
121 CC X-113,132 Y-33,132
122 C X-110,303 Y-30,303 DR+
123 L X-115,303 Y-25,303
124 CC X-118,132 Y-28,132
125 C X-118,132 Y-24,132 DR+
126 L X-124,132 R0
127 L Z+10 FMAX
128 L X-107,01 Y-37,01 FMAX
129 L Z+2 FMAX
130 L Z-9 F500
131 L Y-31,01 RL F315
132 CC X-111,01 Y-31,01
133 C X-108,182 Y-28,182 DR+
134 L X-113,182 Y-23,182
135 CC X-116,01 Y-26,01
136 C X-116,01 Y-22,01 DR+
137 L X-122,01 R0
138 L Z+10 FMAX
139 L X-107,01 Y-37,01 FMAX
140 L Z+2 FMAX
141 L Z-9 F500
142 L Y-31,01 RL F315
143 CC X-111,01 Y-31,01
144 C X-108,182 Y-28,182 DR+
145 L X-113,182 Y-23,182
146 CC X-116,01 Y-26,01
147 C X-116,01 Y-22,01 DR+
148 L X-122,01 R0
149 L Z+50 FMAX
150 M78
151 M5
152 L Z-1 FMAX M91
153 L Y-1 FMAX M91
154 M30
155 END PGM 20161-REP26-OP20-PLAQUETTE SF-A MM
