0 BEGIN PGM REP20-20162-OP10-POINC-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP20-20162-OP10-POINC-A
4 ; PROG-CN DU 11-10-19 A 11:41
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
11 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
12 ; FIN DE LISTE DES OUTILS
13 L R0 FMAX
14 L Z-1 FMAX M91
15 ; *GROUPE D'USINAGE-2*
16 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
17 TOOL CALL 1 Z S1856 DR+0
18 TOOL DEF 25
19 L X-17 Y-1 FMAX M3
20 L Z+50 FMAX M8
21 ;  POINTAGE-PERCAGE
22 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
23 L X-17 Y-1 FMAX M99
24 L X+17 FMAX M99
25 L Z+50 FMAX
26 M9
27 M5
28 L Z-1 FMAX M91
29 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
30 TOOL CALL 25 Z S3000 DR+0
31 TOOL DEF 28
32 L X-17 Y-1 FMAX M3
33 L Z+50 FMAX M7
34 ;  DEBOURRAGE
35 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
36 L X-17 Y-1 FMAX M99
37 L X+17 FMAX M99
38 L Z+50 FMAX
39 M9
40 M5
41 L Z-1 FMAX M91
42 M00
43 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
44 TOOL CALL 28 Z S100 DR+0
45 TOOL DEF 1
46 L X-17 Y-1 FMAX M3
47 L Z+50 FMAX M8
48 ;  TARAUDAGE
49 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-26 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
50 L X-17 Y-1 FMAX M99
51 L X+17 FMAX M99
52 L Z+50 FMAX
53 M9
54 M5
55 L Z-1 FMAX M91
56 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
57 TOOL CALL 1 Z S1856 DR+0
58 TOOL DEF 20
59 L X+0 Y-2 FMAX M3
60 L Z+50 FMAX M8
61 ;  POINTAGE-PERCAGE
62 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
63 L X+0 Y-2 FMAX M99
64 L X+34 FMAX M99
65 L Z+50 FMAX
66 M9
67 M5
68 L Z-1 FMAX M91
69 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
70 TOOL CALL 20 Z S3800 DR+0
71 TOOL DEF 1
72 L X+0 Y-2 FMAX M3
73 L Z+50 FMAX M7
74 ;  DEBOURRAGE
75 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
76 L X+0 Y-2 FMAX M99
77 L X+34 FMAX M99
78 L Z+50 FMAX
79 M9
80 M5
81 L Z-1 FMAX M91
82 L Y-1 FMAX M91
83 M30
84 END PGM REP20-20162-OP10-POINC-A MM
