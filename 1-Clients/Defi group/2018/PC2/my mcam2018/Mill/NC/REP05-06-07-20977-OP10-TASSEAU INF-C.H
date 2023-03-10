0 BEGIN PGM REP05-06-07-20977-OP10-TASSEAU INF-C MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - REP05-06-07-20977-OP10-TASSEAU INF-C
4 ; PROG-CN DU 27-10-20 A 13:09
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T7 DIA 10.3 VC 40 DMF FORET DIAM=10.3 2 DENTS A=118. CARBURE PLAQUETTES
10 ; T26 OK TARAUD A DROITE DIAM=12. 2 DENTS A=118. ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-2*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 7
18 L X-305 Y+0 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,4 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,4 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X-305 Y+0 FMAX M99
23 L X-235 FMAX M99
24 L X+235 FMAX M99
25 L X+305 FMAX M99
26 L Z+50 FMAX
27 M9
28 M5
29 L Z-1 FMAX M91
30 ; T7 DIA 10.3 VC 40 DMF FORET DIAM=10.3 2 DENTS A=118. CARBURE PLAQUETTES
31 TOOL CALL 7 Z S1400 DR+0
32 TOOL DEF 26
33 L X-305 Y+0 FMAX M3
34 L Z+50 FMAX M8
35 ;  DEBOURRAGE
36 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-36 ; PROFONDEUR~
    Q206=130 ; AVANCE PLONGEE PROF.~
    Q202=+5,15 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
37 L X-305 Y+0 FMAX M99
38 L X-235 FMAX M99
39 L X+235 FMAX M99
40 L X+305 FMAX M99
41 L Z+50 FMAX
42 M9
43 M5
44 L Z-1 FMAX M91
45 M00
46 ; T26 OK TARAUD A DROITE DIAM=12. 2 DENTS A=118. ARS
47 TOOL CALL 26 Z S100 DR+0
48 TOOL DEF 1
49 L X-305 Y+0 FMAX M3
50 L Z+50 FMAX M8
51 ;  TARAUDAGE
52 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-28 ; PROFONDEUR~
    Q239=1.75 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
53 L X-305 Y+0 FMAX M99
54 L X-235 FMAX M99
55 L X+235 FMAX M99
56 L X+305 FMAX M99
57 L Z+50 FMAX
58 M9
59 M5
60 L Z-1 FMAX M91
61 L Y-1 FMAX M91
62 M30
63 END PGM REP05-06-07-20977-OP10-TASSEAU INF-C MM
