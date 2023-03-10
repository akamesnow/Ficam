0 BEGIN PGM REP 281 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 281
4 ; PROG-CN DU 28-08-19 A 09:22
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T22 FORET ENBOUT CARB DIA14.2 110 KG OK FORET DIAM=14.2 2 DENTS A=118. ARS
9 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
10 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
11 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-2*
16 ; T22 FORET ENBOUT CARB DIA14.2 110 KG OK FORET DIAM=14.2 2 DENTS A=118. ARS
17 TOOL CALL 22 Z S1300 DR+0
18 TOOL DEF 1
19 L X-54,6 Y+0 FMAX M3
20 L Z+50 FMAX M7
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=110 ; AVANCE PLONGEE PROF.~
    Q202=+20 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X-54,6 Y+0 FMAX M99
24 L X+45,4 FMAX M99
25 L Z+50 FMAX
26 M9
27 M5
28 L Z-1 FMAX M91
29 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
30 TOOL CALL 1 Z S1856 DR+0
31 TOOL DEF 25
32 L X-128,5 Y+18 FMAX M3
33 L Z+50 FMAX M8
34 ;  POINTAGE-PERCAGE
35 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
36 L X-128,5 Y+18 FMAX M99
37 L Y-25 FMAX M99
38 L X+21,5 FMAX M99
39 L X+128,5 FMAX M99
40 L Y+18 FMAX M99
41 L X+21,5 Y+25 FMAX M99
42 L Z+50 FMAX
43 M9
44 M5
45 L Z-1 FMAX M91
46 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
47 TOOL CALL 25 Z S3000 DR+0
48 TOOL DEF 28
49 L X-128,5 Y+18 FMAX M3
50 L Z+50 FMAX M7
51 ;  DEBOURRAGE
52 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-25 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
53 L X-128,5 Y+18 FMAX M99
54 L Y-25 FMAX M99
55 L X+21,5 FMAX M99
56 L X+128,5 FMAX M99
57 L Y+18 FMAX M99
58 L X+21,5 Y+25 FMAX M99
59 L Z+50 FMAX
60 M9
61 M5
62 L Z-1 FMAX M91
63 M00
64 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
65 TOOL CALL 28 Z S100 DR+0
66 TOOL DEF 22
67 L X-128,5 Y+18 FMAX M3
68 L Z+50 FMAX M8
69 ;  TARAUDAGE
70 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
71 L X-128,5 Y+18 FMAX M99
72 L Y-25 FMAX M99
73 L X+21,5 FMAX M99
74 L X+128,5 FMAX M99
75 L Y+18 FMAX M99
76 L X+21,5 Y+25 FMAX M99
77 L Z+50 FMAX
78 M9
79 M5
80 L Z-1 FMAX M91
81 L Y-1 FMAX M91
82 M30
83 END PGM REP 281 MM
