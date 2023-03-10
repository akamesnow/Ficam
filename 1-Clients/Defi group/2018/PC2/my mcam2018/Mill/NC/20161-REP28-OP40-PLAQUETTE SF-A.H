0 BEGIN PGM 20161-REP28-OP40-PLAQUETTE SF-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - 20161-REP28-OP40-PLAQUETTE SF-A
4 ; PROG-CN DU 19-09-19 A 09:37
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
10 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 25
18 L X-78 Y-5 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X-78 Y-5 FMAX M99
23 L X+60 FMAX M99
24 L X+0 Y+15,5 FMAX M99
25 L X+90 Y-15,5 FMAX M99
26 L X-90 FMAX M99
27 L Z+50 FMAX
28 M9
29 M5
30 L Z-1 FMAX M91
31 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
32 TOOL CALL 25 Z S3000 DR+0
33 TOOL DEF 28
34 L X-78 Y-5 FMAX M3
35 L Z+50 FMAX M7
36 ;  DEBOURRAGE
37 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
38 L X-78 Y-5 FMAX M99
39 L X+60 FMAX M99
40 L X+0 Y+15,5 FMAX M99
41 L X+90 Y-15,5 FMAX M99
42 L X-90 FMAX M99
43 L Z+50 FMAX
44 M9
45 M5
46 L Z-1 FMAX M91
47 M00
48 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
49 TOOL CALL 28 Z S100 DR+0
50 TOOL DEF 1
51 L X+0 Y+15,5 FMAX M3
52 L Z+50 FMAX M8
53 ;  TARAUDAGE
54 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-12 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
55 L X+0 Y+15,5 FMAX M99
56 L X+90 Y-15,5 FMAX M99
57 L X-90 FMAX M99
58 L Z+50 FMAX
59 M9
60 M5
61 L Z-1 FMAX M91
62 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
63 TOOL CALL 1 Z S1856 DR+0
64 TOOL DEF 25
65 L X-90 Y+15,5 FMAX M3
66 L Z+50 FMAX M8
67 ;  POINTAGE-PERCAGE
68 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
69 L X-90 Y+15,5 FMAX M99
70 L X+90 FMAX M99
71 L Z+50 FMAX
72 M9
73 M5
74 L Z-1 FMAX M91
75 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
76 TOOL CALL 25 Z S3000 DR+0
77 TOOL DEF 1
78 L X-90 Y+15,5 FMAX M3
79 L Z+50 FMAX M7
80 ;  DEBOURRAGE
81 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-17 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
82 L X-90 Y+15,5 FMAX M99
83 L X+90 FMAX M99
84 L Z+50 FMAX
85 M9
86 M5
87 L Z-1 FMAX M91
88 L Y-1 FMAX M91
89 M30
90 END PGM 20161-REP28-OP40-PLAQUETTE SF-A MM
