0 BEGIN PGM REP 240 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 240
4 ; PROG-CN DU 10-01-22 A 09:56
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T6 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
10 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-2*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 6
18 L X+33 Y-28 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X+33 Y-28 FMAX M99
23 L X-33 FMAX M99
24 L X+12 Y-8,001 FMAX M99
25 L X-12 FMAX M99
26 L Z+50 FMAX
27 M9
28 M5
29 L Z-1 FMAX M91
30 ; T6 DIA 5.8 CARB VC 40 DMF FORET DIAM=5.8 2 DENTS A=118. ARS
31 TOOL CALL 6 Z S2400 DR+0
32 TOOL DEF 13
33 L X+33 Y-28 FMAX M3
34 L Z+50 FMAX M7
35 ;  DEBOURRAGE
36 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-8 ; PROFONDEUR~
    Q206=180 ; AVANCE PLONGEE PROF.~
    Q202=+2,9 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
37 L X+33 Y-28 FMAX M99
38 L X-33 FMAX M99
39 L X+12 Y-8,001 FMAX M99
40 L X-12 FMAX M99
41 L Z+50 FMAX
42 M9
43 M5
44 L Z-1 FMAX M91
45 ; T13 ALESOIR DIA 6 CARB VC 15 ALESOIR DIAM=6. 5 DENTS ARS
46 TOOL CALL 13 Z S833 DR+0
47 TOOL DEF 1
48 L X+33 Y-28 FMAX M3
49 L Z+50 FMAX M8
50 ;  POINTAGE-PERCAGE
51 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-10 ; PROFONDEUR~
    Q206=83 ; AVANCE PLONGEE PROF.~
    Q202=+10 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
52 L X+33 Y-28 FMAX M99
53 L X-33 FMAX M99
54 L Z+50 FMAX
55 M9
56 M5
57 L Z-1 FMAX M91
58 L Y-1 FMAX M91
59 M30
60 END PGM REP 240 MM
