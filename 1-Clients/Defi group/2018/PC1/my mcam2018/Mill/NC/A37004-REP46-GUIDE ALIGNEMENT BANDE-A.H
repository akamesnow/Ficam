0 BEGIN PGM A37004-REP46-GUIDE ALIGNEMENT BANDE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - A37004-REP46-GUIDE ALIGNEMENT BANDE-A
4 ; PROG-CN DU 14-02-22 A 08:54
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T16 P15322391 Z160 SANS TROU FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 2
18 L X+52,5 Y+0 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X+52,5 Y+0 FMAX M99
23 M9
24 M5
25 L Z-1 FMAX M91
26 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
27 TOOL CALL 2 Z S2000 DR+0
28 TOOL DEF 16
29 L X+52,5 Y+0 FMAX M3
30 L Z+50 FMAX M7
31 ;  DEBOURRAGE
32 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
33 L X+52,5 Y+0 FMAX M99
34 M9
35 M5
36 L Z-1 FMAX M91
37 ; T16 P15322391 Z160 SANS TROU FRAISE 2 TAILLES DIAM=8. 6 DENTS CARBURE PLAQUETTES
38 ; CORRECTION AUCUNE
39 ; SUREP R 0. SUREP Z 0.
40 TOOL CALL 16 Z S2188 DR+0
41 TOOL DEF 1
42 L X+49,774 Y+0,64 FMAX M3
43 L Z+50 FMAX M25
44 L Z+2 FMAX
45 L Z+0,5 F350
46 CC X+52,5 Y+0
47 CP IPA-180 Z+0,193 DR-
48 CC X+52,5 Y+0
49 CP IPA-180 Z-0,114 DR-
50 CC X+52,5 Y+0
51 CP IPA-180 Z-0,421 DR-
52 CC X+52,5 Y+0
53 CP IPA-180 Z-0,729 DR-
54 CC X+52,5 Y+0
55 CP IPA-180 Z-1,036 DR-
56 CC X+52,5 Y+0
57 CP IPA-180 Z-1,343 DR-
58 CC X+52,5 Y+0
59 CP IPA-180 Z-1,65 DR-
60 CC X+52,5 Y+0
61 CP IPA-180 Z-1,957 DR-
62 CC X+52,5 Y+0
63 CP IPA-180 Z-2,265 DR-
64 CC X+52,5 Y+0
65 CP IPA-180 Z-2,572 DR-
66 CC X+52,5 Y+0
67 CP IPA-180 Z-2,879 DR-
68 CC X+52,5 Y+0
69 CP IPA-180 Z-3,186 DR-
70 CC X+52,5 Y+0
71 CP IPA-180 Z-3,494 DR-
72 CC X+52,5 Y+0
73 CP IPA-180 Z-3,801 DR-
74 CC X+52,5 Y+0
75 CP IPA-180 Z-4,108 DR-
76 CC X+52,5 Y+0
77 CP IPA-180 Z-4,415 DR-
78 CC X+52,5 Y+0
79 CP IPA-180 Z-4,722 DR-
80 CC X+52,5 Y+0
81 CP IPA-180 Z-5,029 DR-
82 CC X+52,5 Y+0
83 CP IPA-180 Z-5,337 DR-
84 CC X+52,5 Y+0
85 CP IPA-180 Z-5,644 DR-
86 CC X+52,5 Y+0
87 CP IPA-180 Z-5,951 DR-
88 CC X+52,5 Y+0
89 CP IPA-180 Z-6,258 DR-
90 CC X+52,5 Y+0
91 CP IPA-180 Z-6,565 DR-
92 CC X+52,5 Y+0
93 CP IPA-180 Z-6,872 DR-
94 CC X+52,5 Y+0
95 CP IPA-180 Z-7,18 DR-
96 CC X+52,5 Y+0
97 CP IPA-180 Z-7,487 DR-
98 CC X+52,5 Y+0
99 CP IPA-180 Z-7,794 DR-
100 CC X+52,5 Y+0
101 CP IPA-180 Z-8,101 DR-
102 CC X+52,5 Y+0
103 CP IPA-180 Z-8,408 DR-
104 CC X+52,5 Y+0
105 CP IPA-180 Z-8,715 DR-
106 CC X+52,5 Y+0
107 CP IPA-166,788 Z-9 DR-
108 L X+53,1 Y+0
109 CC X+51,3 Y+0
110 C X+49,5 Y+0 DR+
111 CC X+53,7 Y+0
112 C X+50,854 Y-3,089 DR+
113 CC X+52,5 Y+0
114 C X+52,5 Y+3,5 DR+
115 CC X+52,5 Y+0
116 C X+50,854 Y-3,089 DR+
117 L Z+10 FMAX
118 L X+52,5 Y+0 FMAX
119 TOOL CALL 16 Z S2188 DR-4
120 L X+52,5 Y+0 Z+2 FMAX
121 L Z-9
122 L X+51,7 Y-1,9 RL
123 L Y-2,7
124 CC X+52,5 Y-2,7
125 C X+52,5 Y-3,5 DR+
126 CC X+52,5 Y+0
127 C X+52,5 Y+3,5 DR+
128 CC X+52,5 Y+0
129 C X+52,5 Y-3,5 DR+
130 CC X+52,5 Y+0
131 C X+53,486 Y-3,358 DR+
132 CC X+52,5 Y+0
133 C X+52,5 Y+3,5 DR+
134 CC X+52,5 Y+0
135 C X+52,5 Y-3,5 DR+
136 CC X+52,5 Y+0
137 C X+53,486 Y-3,358 DR+
138 CC X+53,261 Y-2,591
139 C X+54,029 Y-2,365 DR+
140 L X+53,803 Y-1,598
141 L X+52,5 Y+0 R0
142 L Z+50 FMAX
143 M78
144 M5
145 L Z-1 FMAX M91
146 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
147 ; CORRECTION USURE GAUCHE
148 ; SUREP R 0. SUREP Z 0.
149 TOOL CALL 1 Z S6000 DR-2,5
150 L X+52,5 Y+0 FMAX M3
151 L Z+50 FMAX
152 L Z+2 FMAX
153 L Z-2,5 F800
154 L X+52 Y-4 RL F1200
155 L Y-4,5
156 CC X+52,5 Y-4,5
157 C X+52,5 Y-5 DR+
158 CC X+52,5 Y+0
159 C X+52,5 Y+5 DR+
160 CC X+52,5 Y+0
161 C X+52,5 Y-5 DR+
162 CC X+52,5 Y+0
163 C X+53,493 Y-4,9 DR+
164 CC X+53,394 Y-4,41
165 C X+53,884 Y-4,311 DR+
166 L X+53,785 Y-3,821
167 L X+52,5 Y+0 R0
168 L Z+50 FMAX
169 M5
170 L Z-1 FMAX M91
171 L Y-1 FMAX M91
172 M30
173 END PGM A37004-REP46-GUIDE ALIGNEMENT BANDE-A MM
