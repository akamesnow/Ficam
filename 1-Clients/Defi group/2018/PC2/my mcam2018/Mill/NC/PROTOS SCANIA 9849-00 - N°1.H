0 BEGIN PGM PROTOS SCANIA 9849-00 - N?1 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - PROTOS SCANIA 9849-00 - N?1
4 ; PROG-CN DU 01-04-22 A 12:04
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T3 B720110860 S355MC FORET DIAM=8.5 2 DENTS A=118. ARS
9 ; FIN DE LISTE DES OUTILS
10 L R0 FMAX
11 L Z-1 FMAX M91
12 ; *GROUPE D'USINAGE-2*
13 ; T3 B720110860 S355MC FORET DIAM=8.5 2 DENTS A=118. ARS
14 TOOL CALL 3 Z S5920 DR+0
15 L X+258,221 Y+82,416 FMAX M3
16 L Z+50 FMAX M8
17 ;  POINTAGE-PERCAGE
18 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-10 ; PROFONDEUR~
    Q206=2239 ; AVANCE PLONGEE PROF.~
    Q202=+10 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
19 L X+258,221 Y+82,416 FMAX M99
20 L X+285,557 Y+62,034 FMAX M99
21 L X+267,754 Y+33,353 FMAX M99
22 L Z+50 FMAX
23 M9
24 M5
25 L Z-1 FMAX M91
26 L Y-1 FMAX M91
27 M30
28 END PGM PROTOS SCANIA 9849-00 - N?1 MM
