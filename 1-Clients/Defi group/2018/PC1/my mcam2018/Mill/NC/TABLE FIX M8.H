0 BEGIN PGM TABLE FIX M8 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - TABLE FIX M8
4 ; PROG-CN DU 25-06-20 A 11:09
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
18 L X+0 Y-113 FMAX M3
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
22 L X+0 Y-113 FMAX M99
23 L Y-73 FMAX M99
24 L Y-7 FMAX M99
25 L Z+50 FMAX
26 M9
27 M5
28 L Z-1 FMAX M91
29 ; T25 DIA 6.8 VC 40 DMF FORET DIAM=6.8 2 DENTS A=118. ARS
30 TOOL CALL 25 Z S3000 DR+0
31 TOOL DEF 28
32 L X+0 Y-113 FMAX M3
33 L Z+50 FMAX M7
34 ;  DEBOURRAGE
35 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-15 ; PROFONDEUR~
    Q206=240 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
36 L X+0 Y-113 FMAX M99
37 L Y-73 FMAX M99
38 L Y-7 FMAX M99
39 L Z+50 FMAX
40 M9
41 M5
42 L Z-1 FMAX M91
43 M00
44 ; T28 TARAUD A DROITE DIAM=8. 2 DENTS A=118. ARS
45 TOOL CALL 28 Z S100 DR+0
46 TOOL DEF 1
47 L X+0 Y-113 FMAX M3
48 L Z+50 FMAX M8
49 ;  TARAUDAGE
50 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-10 ; PROFONDEUR~
    Q239=1.25 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
51 L X+0 Y-113 FMAX M99
52 L Y-73 FMAX M99
53 L Y-7 FMAX M99
54 L Z+50 FMAX
55 M9
56 M5
57 L Z-1 FMAX M91
58 L Y-1 FMAX M91
59 M30
60 END PGM TABLE FIX M8 MM
