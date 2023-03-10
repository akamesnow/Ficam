0 BEGIN PGM 1769583 MM
1 ; POST-PRO FICAM
2 ; MACHINE - MIKRON
3 ; DESSIN MASTERCAM - 1769583
4 ; PROG-CN DU 31-08-22 A 13:33
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T17 P15307501XC 48 SCREW PLATE FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
9 ; T22 B720151450 S355MC FORET DIAM=14.5 2 DENTS A=118. ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z0 FMAX M91
13 ; *GROUPE D'USINAGE-5*
14 M61
15 ; T17 P15307501XC 48 SCREW PLATE FRAISE TORIQUE DIAM=12. 4 DENTS R=.1 ARS
16 ; CORRECTION USURE GAUCHE
17 ; SUREP R 0. SUREP Z 0.
18 TOOL CALL 17 Z S4509 DR-6
19 TOOL DEF 22
20 L X-93,47 Y+91,3 FMAX M3
21 L Z+50 FMAX M8
22 L Z+2 FMAX
23 L Z-20 F10000
24 L X-86,47 RL F939
25 L X-79,67
26 CC X-79,67 Y+91,5
27 C X-79,47 Y+91,5 DR+
28 L Y+92
29 CC X-58,47 Y+92
30 C X-58,47 Y+113 DR-
31 L X-43,47
32 CC X-43,47 Y+92
33 C X-22,47 Y+92 DR-
34 L Y+91,5
35 CC X-22,27 Y+91,5
36 C X-22,27 Y+91,3 DR+
37 L X+22,27
38 CC X+22,27 Y+91,5
39 C X+22,47 Y+91,5 DR+
40 L Y+92
41 CC X+43,47 Y+92
42 C X+43,47 Y+113 DR-
43 L X+58,47
44 CC X+58,47 Y+92
45 C X+79,47 Y+92 DR-
46 L Y+91,5
47 CC X+79,67 Y+91,5
48 C X+79,67 Y+91,3 DR+
49 L X+86,47
50 L X+93,47 R0
51 L Z+10 FMAX
52 L X-93,47 FMAX
53 L Z+2 FMAX
54 L Z-20 F10000
55 L X-86,47 RL F939
56 L X-79,67
57 CC X-79,67 Y+91,5
58 C X-79,47 Y+91,5 DR+
59 L Y+92
60 CC X-58,47 Y+92
61 C X-58,47 Y+113 DR-
62 L X-43,47
63 CC X-43,47 Y+92
64 C X-22,47 Y+92 DR-
65 L Y+91,5
66 CC X-22,27 Y+91,5
67 C X-22,27 Y+91,3 DR+
68 L X+22,27
69 CC X+22,27 Y+91,5
70 C X+22,47 Y+91,5 DR+
71 L Y+92
72 CC X+43,47 Y+92
73 C X+43,47 Y+113 DR-
74 L X+58,47
75 CC X+58,47 Y+92
76 C X+79,47 Y+92 DR-
77 L Y+91,5
78 CC X+79,67 Y+91,5
79 C X+79,67 Y+91,3 DR+
80 L X+86,47
81 L X+93,47 R0
82 L Z+50 FMAX
83 L Y-91,3 FMAX
84 L Z+2 FMAX
85 L Z-20 F10000
86 L X+86,47 RL F939
87 L X+79,67
88 CC X+79,67 Y-91,5
89 C X+79,47 Y-91,5 DR+
90 L Y-92
91 CC X+58,47 Y-92
92 C X+58,47 Y-113 DR-
93 L X+43,47
94 CC X+43,47 Y-92
95 C X+22,47 Y-92 DR-
96 L Y-91,5
97 CC X+22,27 Y-91,5
98 C X+22,27 Y-91,3 DR+
99 L X-22,27
100 CC X-22,27 Y-91,5
101 C X-22,47 Y-91,5 DR+
102 L Y-92
103 CC X-43,47 Y-92
104 C X-43,47 Y-113 DR-
105 L X-58,47
106 CC X-58,47 Y-92
107 C X-79,47 Y-92 DR-
108 L Y-91,5
109 CC X-79,67 Y-91,5
110 C X-79,67 Y-91,3 DR+
111 L X-86,47
112 L X-93,47 R0
113 L Z+10 FMAX
114 L X+93,47 FMAX
115 L Z+2 FMAX
116 L Z-20 F10000
117 L X+86,47 RL F939
118 L X+79,67
119 CC X+79,67 Y-91,5
120 C X+79,47 Y-91,5 DR+
121 L Y-92
122 CC X+58,47 Y-92
123 C X+58,47 Y-113 DR-
124 L X+43,47
125 CC X+43,47 Y-92
126 C X+22,47 Y-92 DR-
127 L Y-91,5
128 CC X+22,27 Y-91,5
129 C X+22,27 Y-91,3 DR+
130 L X-22,27
131 CC X-22,27 Y-91,5
132 C X-22,47 Y-91,5 DR+
133 L Y-92
134 CC X-43,47 Y-92
135 C X-43,47 Y-113 DR-
136 L X-58,47
137 CC X-58,47 Y-92
138 C X-79,47 Y-92 DR-
139 L Y-91,5
140 CC X-79,67 Y-91,5
141 C X-79,67 Y-91,3 DR+
142 L X-86,47
143 L X-93,47 R0
144 L Z+50 FMAX
145 M9
146 M5
147 L Z0 FMAX M91
148 ; T22 B720151450 S355MC FORET DIAM=14.5 2 DENTS A=118. ARS
149 TOOL CALL 22 Z S3510 DR+0
150 TOOL DEF 17
151 L X-50,97 Y+75 FMAX M3
152 L Z+50 FMAX M28
153 ;  POINTAGE-PERCAGE
154 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-24 ; PROFONDEUR~
    Q206=1865 ; AVANCE PLONGEE PROF.~
    Q202=+24 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
155 L X-50,97 Y+75 FMAX M99
156 L Y+25 FMAX M99
157 L Y-25 FMAX M99
158 L Y-75 FMAX M99
159 L X+50,97 FMAX M99
160 L Y-25 FMAX M99
161 L Y+25 FMAX M99
162 L Y+75 FMAX M99
163 L Z+50 FMAX
164 M9
165 M5
166 L Z0 FMAX M91
167 L Y0 FMAX M91
168 M60
169 M30
170 END PGM 1769583 MM
