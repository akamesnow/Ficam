0 BEGIN PGM REP27-20977-OP10-CALE PORTE GRAVURE DEFI PGO-01 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP27-20977-OP10-CALE PORTE GRAVURE DEFI PGO-01
4 ; PROG-CN DU 15-10-20 A 11:14
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-1*
13 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
14 TOOL CALL 1 Z S1856 DR+0
15 L X-31 Y-2 FMAX M3
16 L Z+50 FMAX M8
17 ;  POINTAGE-PERCAGE
18 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-3,1 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+3,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
19 L X-31 Y-2 FMAX M99
20 L X+31 FMAX M99
21 L Z+50 FMAX
22 M9
23 M5
24 L Z-1 FMAX M91
25 L Y-1 FMAX M91
26 M30
27 END PGM REP27-20977-OP10-CALE PORTE GRAVURE DEFI PGO-01 MM
