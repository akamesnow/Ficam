0 BEGIN PGM ROTOR CLIP A37004 COUPES MAJ LE 18-09-14 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - ROTOR CLIP A37004 COUPES MAJ LE 18-09-14
4 ; PROG-CN DU 05-11-19 A 15:36
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T7 TOURTEAU DIA 63 SQ6 XC TOURTEAU DIAM=63. 6 DENTS R=.8 ARS
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-3*
13 ; T7 TOURTEAU DIA 63 SQ6 XC TOURTEAU DIAM=63. 6 DENTS R=.8 ARS
14 ; CORRECTION AUCUNE
15 ; SUREP Z 0.
16 TOOL CALL 7 Z S1500 DR+0
17 L X-1419,3 Y+387,798 FMAX M3
18 L Z+50 FMAX M8
19 L Z+2,3 FMAX
20 L Z+0,15 F600
21 L X+157,8 F1200
22 CC X+157,8 Y+364,709
23 C X+157,8 Y+341,621 DR-
24 L X-1387,8
25 CC X-1387,8 Y+318,532
26 C X-1387,8 Y+295,443 DR+
27 L X+157,8
28 CC X+157,8 Y+272,355
29 C X+157,8 Y+249,266 DR-
30 L X-1387,8
31 CC X-1387,8 Y+226,177
32 C X-1387,8 Y+203,089 DR+
33 L X+157,8
34 CC X+157,8 Y+180
35 C X+157,8 Y+156,911 DR-
36 L X-1387,8
37 CC X-1387,8 Y+133,823
38 C X-1387,8 Y+110,734 DR+
39 L X+157,8
40 CC X+157,8 Y+87,645
41 C X+157,8 Y+64,557 DR-
42 L X-1387,8
43 CC X-1387,8 Y+41,468
44 C X-1387,8 Y+18,379 DR+
45 L X+157,8
46 CC X+157,8 Y-4,709
47 C X+157,8 Y-27,798 DR-
48 L X-1419,3
49 L Z+10 FMAX
50 L Y+387,798 FMAX
51 L Z+2,15 FMAX
52 L Z+0 F600
53 L X+157,8 F1200
54 CC X+157,8 Y+364,709
55 C X+157,8 Y+341,621 DR-
56 L X-1387,8
57 CC X-1387,8 Y+318,532
58 C X-1387,8 Y+295,443 DR+
59 L X+157,8
60 CC X+157,8 Y+272,355
61 C X+157,8 Y+249,266 DR-
62 L X-1387,8
63 CC X-1387,8 Y+226,177
64 C X-1387,8 Y+203,089 DR+
65 L X+157,8
66 CC X+157,8 Y+180
67 C X+157,8 Y+156,911 DR-
68 L X-1387,8
69 CC X-1387,8 Y+133,823
70 C X-1387,8 Y+110,734 DR+
71 L X+157,8
72 CC X+157,8 Y+87,645
73 C X+157,8 Y+64,557 DR-
74 L X-1387,8
75 CC X-1387,8 Y+41,468
76 C X-1387,8 Y+18,379 DR+
77 L X+157,8
78 CC X+157,8 Y-4,709
79 C X+157,8 Y-27,798 DR-
80 L X-1419,3
81 L Z+50 FMAX
82 M9
83 M5
84 L Z-1 FMAX M91
85 L Y-1 FMAX M91
86 M30
87 END PGM ROTOR CLIP A37004 COUPES MAJ LE 18-09-14 MM
