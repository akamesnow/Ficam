0 BEGIN PGM REP26-20262-01-02-MATRICE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP26-20262-01-02-MATRICE-A
4 ; PROG-CN DU 26-02-20 A 14:10
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
9 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
10 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-4*
15 ; T18 P15322450 110 KG POCHE SANS TROU FRAISE 2 TAILLES DIAM=10. 6 DENTS CARBURE PLAQUETTES
16 ; CORRECTION AUCUNE
17 ; SUREP R 0. SUREP Z 0.
18 TOOL CALL 18 Z S2865 DR+0
19 TOOL DEF 19
20 L X+2,948 Y+4,039 FMAX M3
21 L Z+50 FMAX M25
22 L Z+2 FMAX
23 L Z+0,5 F500
24 CC X+0 Y+0
25 CP IPA-180 Z-1,151 DR-
26 CC X+0 Y+0
27 CP IPA-180 Z-2,802 DR-
28 CC X+0 Y+0
29 CP IPA-180 Z-4,453 DR-
30 CC X+0 Y+0
31 CP IPA-180 Z-6,104 DR-
32 CC X+0 Y+0
33 CP IPA-180 Z-7,755 DR-
34 CC X+0 Y+0
35 CP IPA-180 Z-9,406 DR-
36 CC X+0 Y+0
37 CP IPA-53,875 Z-9,9 DR-
38 L X+1 Y+0 F401
39 CC X-2 Y+0
40 C X-5 Y+0 DR+
41 CC X+2 Y+0
42 C X+6,813 Y-5,083 DR+
43 CC X+0 Y+0
44 C X-1,618 Y-8,345 DR+
45 CC X+0 Y+0
46 C X+6,813 Y-5,083 DR+
47 L Z+10 FMAX
48 L X+2,948 Y+4,039 FMAX
49 L Z+0,3 FMAX
50 CC X+0 Y+0
51 CP IPA-180 Z-1,351 DR- F500
52 CC X+0 Y+0
53 CP IPA-180 Z-3,002 DR-
54 CC X+0 Y+0
55 CP IPA-180 Z-4,653 DR-
56 CC X+0 Y+0
57 CP IPA-180 Z-6,304 DR-
58 CC X+0 Y+0
59 CP IPA-180 Z-7,955 DR-
60 CC X+0 Y+0
61 CP IPA-180 Z-9,606 DR-
62 CC X+0 Y+0
63 CP IPA-53,875 Z-10,1 DR-
64 L X+1 Y+0 F401
65 CC X-2 Y+0
66 C X-5 Y+0 DR+
67 CC X+2 Y+0
68 C X+6,813 Y-5,083 DR+
69 CC X+0 Y+0
70 C X-1,618 Y-8,345 DR+
71 CC X+0 Y+0
72 C X+6,813 Y-5,083 DR+
73 L X+0 Y+0
74 TOOL CALL 18 Z S2865 DR-5
75 L X+2,219 Y+6,191 Z-10,1 RL
76 L X+2,41 Y+7,172
77 CC X+1,428 Y+7,363
78 C X+1,618 Y+8,345 DR+
79 CC X+0 Y+0
80 C X-1,618 Y-8,345 DR+
81 CC X+0 Y+0
82 C X+1,618 Y+8,345 DR+
83 CC X+0 Y+0
84 C X-0,372 Y+8,492 DR+
85 CC X+0 Y+0
86 C X-1,618 Y-8,345 DR+
87 CC X+0 Y+0
88 C X+1,618 Y+8,345 DR+
89 CC X+0 Y+0
90 C X-0,372 Y+8,492 DR+
91 CC X-0,328 Y+7,493
92 C X-1,327 Y+7,449 DR+
93 L X-1,283 Y+6,45
94 L X+0 Y+0 R0
95 L Z+50 FMAX
96 M78
97 M5
98 L Z-1 FMAX M91
99 ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
100 ; CORRECTION USURE GAUCHE
101 ; SUREP R 0. SUREP Z 0.
102 TOOL CALL 19 Z S7427 DR-3
103 TOOL DEF 1
104 L X+0 Y+0 FMAX M3
105 L Z+50 FMAX M8
106 L Z+2 FMAX
107 L Z-10,1 F297
108 L X+2,36 Y+9,016 RL F3565
109 L X+2,474 Y+9,605
110 CC X+1,885 Y+9,719
111 C X+1,999 Y+10,308 DR+
112 CC X+0 Y+0
113 C X-1,999 Y-10,308 DR+
114 CC X+0 Y+0
115 C X+1,999 Y+10,308 DR+
116 CC X+0 Y+0
117 C X+0,012 Y+10,5 DR+
118 CC X+0 Y+0
119 C X-1,999 Y-10,308 DR+
120 CC X+0 Y+0
121 C X+1,999 Y+10,308 DR+
122 CC X+0 Y+0
123 C X+0,012 Y+10,5 DR+
124 CC X+0,011 Y+9,9
125 C X-0,589 Y+9,901 DR+
126 L X-0,59 Y+9,301
127 L X+0 Y+0 R0
128 L Z+50 FMAX
129 M9
130 M5
131 L Z-1 FMAX M91
132 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
133 ; CORRECTION USURE GAUCHE
134 ; SUREP R 0. SUREP Z 0.
135 TOOL CALL 1 Z S6000 DR-2,5
136 TOOL DEF 18
137 L X+0 Y+0 FMAX M3
138 L Z+50 FMAX
139 L Z+2 FMAX
140 L Z-2,3 F800
141 L X+2,395 Y+9,722 RL F1200
142 L X+2,49 Y+10,213
143 CC X+1,999 Y+10,308
144 C X+2,094 Y+10,799 DR+
145 CC X+0 Y+0
146 C X-2,094 Y-10,799 DR+
147 CC X+0 Y+0
148 C X+2,094 Y+10,799 DR+
149 CC X+0 Y+0
150 C X+0,107 Y+10,999 DR+
151 CC X+0,102 Y+10,5
152 C X-0,398 Y+10,504 DR+
153 L X-0,402 Y+10,004
154 L X+0 Y+0 R0
155 L Z+50 FMAX
156 M5
157 L Z-1 FMAX M91
158 L Y-1 FMAX M91
159 M30
160 END PGM REP26-20262-01-02-MATRICE-A MM
