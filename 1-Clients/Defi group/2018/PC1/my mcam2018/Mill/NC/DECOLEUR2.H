0 BEGIN PGM DECOLEUR2 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - DECOLEUR2
4 ; PROG-CN DU 24-05-22 A 10:11
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-2*
14 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
15 TOOL CALL 1 Z S1856 DR+0
16 TOOL DEF 20
17 L X+15,1 Y+5 FMAX M3
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
21 L X+15,1 Y+5 FMAX M99
22 L Y-5 FMAX M99
23 L X-7,9 Y+5 FMAX M99
24 L Y-5 FMAX M99
25 L Z+50 FMAX
26 M9
27 M5
28 L Z-1 FMAX M91
29 ; T20 CARBURE DIA5  VC 40 DMF FORET DIAM=5.1 2 DENTS A=118. ARS
30 TOOL CALL 20 Z S3800 DR+0
31 TOOL DEF 1
32 L X+15,1 Y+5 FMAX M3
33 L Z+50 FMAX M7
34 ;  DEBOURRAGE
35 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-45 ; PROFONDEUR~
    Q206=300 ; AVANCE PLONGEE PROF.~
    Q202=+2,55 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
36 L X+15,1 Y+5 FMAX M99
37 L Y-5 FMAX M99
38 L X-7,9 Y+5 FMAX M99
39 L Y-5 FMAX M99
40 L Z+50 FMAX
41 M9
42 M5
43 L Z-1 FMAX M91
44 L Y-1 FMAX M91
45 M30
46 END PGM DECOLEUR2 MM
