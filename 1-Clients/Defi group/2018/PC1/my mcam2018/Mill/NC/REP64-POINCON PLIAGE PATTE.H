0 BEGIN PGM REP64-POINCON PLIAGE PATTE MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP64-POINCON PLIAGE PATTE
4 ; PROG-CN DU 12-07-22 A 14:31
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
10 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 2
18 L X-0,75 Y+0 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-4,6 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+4,6 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X-0,75 Y+0 FMAX M99
23 M9
24 M5
25 L Z-1 FMAX M91
26 ; T2 DIA 8.5 CARBURE VC 40 DMF FORET DIAM=8.5 2 DENTS A=118. ARS
27 TOOL CALL 2 Z S2000 DR+0
28 TOOL DEF 27
29 L X-0,75 Y+0 FMAX M3
30 L Z+50 FMAX M8
31 ;  DEBOURRAGE
32 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-32 ; PROFONDEUR~
    Q206=170 ; AVANCE PLONGEE PROF.~
    Q202=+3,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
33 L X-0,75 Y+0 FMAX M99
34 M9
35 M5
36 L Z-1 FMAX M91
37 M00
38 ; T27 OK TARAUD A DROITE DIAM=10. 2 DENTS A=118. ARS
39 TOOL CALL 27 Z S100 DR+0
40 TOOL DEF 1
41 L X-0,75 Y+0 FMAX M3
42 L Z+50 FMAX M8
43 ;  TARAUDAGE
44 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-26 ; PROFONDEUR~
    Q239=1.5 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
45 L X-0,75 Y+0 FMAX M99
46 M9
47 M5
48 L Z-1 FMAX M91
49 L Y-1 FMAX M91
50 M30
51 END PGM REP64-POINCON PLIAGE PATTE MM
