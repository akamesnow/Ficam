0 BEGIN PGM REP 160 2 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 160 2
4 ; PROG-CN DU 26-04-22 A 13:16
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T6 CARB DIA 7.7  VC 40 DMF FORET DIAM=7.7 2 DENTS A=118. ARS
10 ; T11 ALESOIR CARBURE DIA 8 VC 15 ALESOIR DIAM=8. 5 DENTS ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-2*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 6
18 L X+0 Y+0 FMAX M3
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
22 L X+0 Y+0 FMAX M99
23 M9
24 M5
25 L Z-1 FMAX M91
26 ; T6 CARB DIA 7.7  VC 40 DMF FORET DIAM=7.7 2 DENTS A=118. ARS
27 TOOL CALL 6 Z S1850 DR+0
28 TOOL DEF 11
29 L X+0 Y+0 FMAX M3
30 L Z+50 FMAX M7
31 ;  DEBOURRAGE
32 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=175 ; AVANCE PLONGEE PROF.~
    Q202=+3,465 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
33 L X+0 Y+0 FMAX M99
34 M9
35 M5
36 L Z-1 FMAX M91
37 ; T11 ALESOIR CARBURE DIA 8 VC 15 ALESOIR DIAM=8. 5 DENTS ARS
38 TOOL CALL 11 Z S625 DR+0
39 TOOL DEF 1
40 L X+0 Y+0 FMAX M3
41 L Z+50 FMAX M8
42 ;  POINTAGE-PERCAGE
43 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q206=64 ; AVANCE PLONGEE PROF.~
    Q202=+20 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
44 L X+0 Y+0 FMAX M99
45 M9
46 M5
47 L Z-1 FMAX M91
48 L Y-1 FMAX M91
49 M30
50 END PGM REP 160 2 MM
