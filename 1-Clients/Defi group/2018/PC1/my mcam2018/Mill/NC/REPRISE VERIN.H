0 BEGIN PGM REPRISE VERIN MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REPRISE VERIN
4 ; PROG-CN DU 01-02-22 A 11:23
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T23 P15323610  Z POCHE S T  60HRC FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-1*
13 ; T23 P15323610  Z POCHE S T  60HRC FRAISE 2 TAILLES DIAM=16. 6 DENTS CARBURE
14 ; CORRECTION AUCUNE
15 ; SUREP R 0. SUREP Z 0.
16 TOOL CALL 23 Z S400 DR+0
17 L X+7,778 Y-1,87 FMAX M3
18 L Z+50 FMAX M25
19 L Z-37 FMAX
20 L Z-38,5 F68
21 CC X+0 Y+0
22 CP IPA-180 Z-39,377 DR-
23 CC X+0 Y+0
24 CP IPA-180 Z-40,255 DR-
25 CC X+0 Y+0
26 CP IPA-180 Z-41,133 DR-
27 CC X+0 Y+0
28 CP IPA-180 Z-42,011 DR-
29 CC X+0 Y+0
30 CP IPA-346,481 Z-43,7 DR-
31 L X+0,46 Y+0
32 CC X-0,92 Y+0
33 C X-2,3 Y+0 DR+
34 CC X+0,92 Y+0
35 C X+4,14 Y+0 DR+
36 CC X-0,92 Y+0
37 C X-5,98 Y+0 DR+
38 CC X+0,92 Y+0
39 C X+7,82 Y+0 DR+
40 CC X-0,92 Y+0
41 C X-9,66 Y+0 DR+
42 CC X+0,92 Y+0
43 C X+9,022 Y-6,804 DR+
44 CC X+0 Y+0
45 C X+11,3 Y+0 DR+
46 CC X+0 Y+0
47 C X+9,022 Y-6,804 DR+
48 L Z+10 FMAX
49 L X+7,778 Y-1,87 FMAX
50 L Z-38,8 FMAX
51 CC X+0 Y+0
52 CP IPA-180 Z-39,677 DR-
53 CC X+0 Y+0
54 CP IPA-180 Z-40,555 DR-
55 CC X+0 Y+0
56 CP IPA-180 Z-41,433 DR-
57 CC X+0 Y+0
58 CP IPA-180 Z-42,311 DR-
59 CC X+0 Y+0
60 CP IPA-346,481 Z-44 DR-
61 L X+0,46 Y+0
62 CC X-0,92 Y+0
63 C X-2,3 Y+0 DR+
64 CC X+0,92 Y+0
65 C X+4,14 Y+0 DR+
66 CC X-0,92 Y+0
67 C X-5,98 Y+0 DR+
68 CC X+0,92 Y+0
69 C X+7,82 Y+0 DR+
70 CC X-0,92 Y+0
71 C X-9,66 Y+0 DR+
72 CC X+0,92 Y+0
73 C X+9,022 Y-6,804 DR+
74 CC X+0 Y+0
75 C X+11,3 Y+0 DR+
76 CC X+0 Y+0
77 C X+9,022 Y-6,804 DR+
78 L X+0 Y+0
79 TOOL CALL 23 Z S400 DR-8
80 L X-8,1 Y+1,6 Z-44 RL
81 L X-9,7
82 CC X-9,7 Y+0
83 C X-11,3 Y+0 DR+
84 CC X+0 Y+0
85 C X+11,3 Y+0 DR+
86 CC X+0 Y+0
87 C X-11,3 Y+0 DR+
88 CC X+0 Y+0
89 C X-11,123 Y-1,99 DR+
90 CC X+0 Y+0
91 C X+11,3 Y+0 DR+
92 CC X+0 Y+0
93 C X-11,3 Y+0 DR+
94 CC X+0 Y+0
95 C X-11,123 Y-1,99 DR+
96 CC X-9,548 Y-1,708
97 C X-9,267 Y-3,283 DR+
98 L X-7,692 Y-3,001
99 L X+0 Y+0 R0
100 L Z+50 FMAX
101 M78
102 M5
103 L Z-1 FMAX M91
104 L Y-1 FMAX M91
105 M30
106 END PGM REPRISE VERIN MM
