0 BEGIN PGM 1582043970 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - 1582295535
4 ; PROG-CN DU 12-03-20 A 17:33
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
10 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
11 ; T8 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
12 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
13 ; FIN DE LISTE DES OUTILS
14 L R0 FMAX
15 L Z-1 FMAX M91
16 ; *GROUPE D'USINAGE-2*
17 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
18 TOOL CALL 1 Z S1856 DR+0
19 TOOL DEF 20
20 L X-8,56 Y+16,695 FMAX M3
21 L Z+50 FMAX M8
22 ;  POINTAGE-PERCAGE
23 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
24 L X-8,56 Y+16,695 FMAX M99
25 L X-46,527 Y-17,254 FMAX M99
26 L Z+50 FMAX
27 M9
28 M5
29 L Z-1 FMAX M91
30 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
31 TOOL CALL 20 Z S3800 DR+0
32 TOOL DEF 29
33 L X-8,56 Y+16,695 FMAX M3
34 L Z+50 FMAX M7
35 ;  DEBOURRAGE
36 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
37 L X-8,56 Y+16,695 FMAX M99
38 L X-46,527 Y-17,254 FMAX M99
39 L Z+50 FMAX
40 M9
41 M5
42 L Z-1 FMAX M91
43 M00
44 ; T29 TARAUD A DROITE DIAM=6. 2 DENTS A=118. ARS
45 TOOL CALL 29 Z S200 DR+0
46 TOOL DEF 1
47 L X-8,56 Y+16,695 FMAX M3
48 L Z+50 FMAX M8
49 ;  TARAUDAGE
50 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q239=1. ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
51 L X-8,56 Y+16,695 FMAX M99
52 L X-46,527 Y-17,254 FMAX M99
53 L Z+50 FMAX
54 M9
55 M5
56 L Z-1 FMAX M91
57 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
58 TOOL CALL 1 Z S1856 DR+0
59 TOOL DEF 8
60 L X-45,545 Y+17,733 FMAX M3
61 L Z+50 FMAX M8
62 ;  POINTAGE-PERCAGE
63 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
64 L X-45,545 Y+17,733 FMAX M99
65 L X-9,542 Y-18,291 FMAX M99
66 L Z+50 FMAX
67 M9
68 M5
69 L Z-1 FMAX M91
70 ; T8 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
71 TOOL CALL 8 Z S2400 DR+0
72 TOOL DEF 13
73 L X-45,545 Y+17,733 FMAX M3
74 L Z+50 FMAX M7
75 ;  DEBOURRAGE
76 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-30 ; PROFONDEUR~
    Q206=180 ; AVANCE PLONGEE PROF.~
    Q202=+2,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
77 L X-45,545 Y+17,733 FMAX M99
78 L X-9,542 Y-18,291 FMAX M99
79 L Z+50 FMAX
80 M9
81 M5
82 L Z-1 FMAX M91
83 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
84 TOOL CALL 13 Z S833 DR+0
85 TOOL DEF 1
86 L X-45,545 Y+17,733 FMAX M3
87 L Z+50 FMAX M8
88 ;  POINTAGE-PERCAGE
89 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=83 ; AVANCE PLONGEE PROF.~
    Q202=+20 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
90 L X-45,545 Y+17,733 FMAX M99
91 L X-9,542 Y-18,291 FMAX M99
92 L Z+50 FMAX
93 M9
94 M5
95 L Z-1 FMAX M91
96 L Y-1 FMAX M91
97 M30
98 END PGM 1582043970 MM
