0 BEGIN PGM A37004-REP42-PLAQUEUR DE BANDE-A MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - A37004-REP42-PLAQUEUR DE BANDE-A
4 ; PROG-CN DU 22-06-21 A 08:27
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-1*
14 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
15 TOOL CALL 1 Z S1856 DR+0
16 TOOL DEF 20
17 L X-15 Y+31,664 FMAX M3
18 L Z+50 FMAX M8
19 ;  POINTAGE-PERCAGE
20 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-2,2 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+2,2 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
21 L X-15 Y+31,664 FMAX M99
22 L Y+14,991 FMAX M99
23 L X+15 Y+31,664 FMAX M99
24 L X-15 Y-14,991 FMAX M99
25 L Y-31,664 FMAX M99
26 L X+15 FMAX M99
27 L Y+14,991 FMAX M99
28 L Y-14,991 FMAX M99
29 L Z+50 FMAX
30 M9
31 M5
32 L Z-1 FMAX M91
33 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
34 TOOL CALL 20 Z S3800 DR+0
35 TOOL DEF 1
36 L X-15 Y+31,664 FMAX M3
37 L Z+50 FMAX M7
38 ;  DEBOURRAGE
39 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-22 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
40 L X-15 Y+31,664 FMAX M99
41 L Y+14,991 FMAX M99
42 L X+15 Y+31,664 FMAX M99
43 L X-15 Y-14,991 FMAX M99
44 L Y-31,664 FMAX M99
45 L X+15 FMAX M99
46 L Y+14,991 FMAX M99
47 L Y-14,991 FMAX M99
48 L Z+50 FMAX
49 M9
50 M5
51 L Z-1 FMAX M91
52 L Y-1 FMAX M91
53 M30
54 END PGM A37004-REP42-PLAQUEUR DE BANDE-A MM
