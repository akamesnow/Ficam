0 BEGIN PGM REP 43 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMU 70
3 ; DESSIN MASTERCAM - REP 43
4 ; PROG-CN DU 22-03-21 A 13:25
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T3 DIA 10.3 VC 40 DMF FORET DIAM=10.3 2 DENTS A=118. CARBURE PLAQUETTES
10 ; T26 OK TARAUD A DROITE DIAM=12. 2 DENTS A=118. ARS
11 ; FIN DE LISTE DES OUTILS
12 L R0 FMAX
13 L Z-1 FMAX M91
14 ; *GROUPE D'USINAGE-1*
15 ; T1 ARROSAGE FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
16 TOOL CALL 1 Z S1856 DR+0
17 TOOL DEF 3
18 L X+0 Y+0 FMAX M3
19 L Z+50 FMAX M8
20 ;  POINTAGE-PERCAGE
21 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-5,35 ; PROFONDEUR~
    Q206=74 ; AVANCE PLONGEE PROF.~
    Q202=+5,35 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
22 L X+0 Y+0 FMAX M99
23 M9
24 M5
25 L Z-1 FMAX M91
26 ; T3 DIA 10.3 VC 40 DMF FORET DIAM=10.3 2 DENTS A=118. CARBURE PLAQUETTES
27 TOOL CALL 3 Z S1400 DR+0
28 TOOL DEF 26
29 L X+0 Y+0 FMAX M3
30 L Z+50 FMAX M7
31 ;  DEBOURRAGE
32 CYCL DEF 200 PERCAGE ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-35 ; PROFONDEUR~
    Q206=130 ; AVANCE PLONGEE PROF.~
    Q202=+5,15 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
33 L X+0 Y+0 FMAX M99
34 M9
35 M5
36 L Z-1 FMAX M91
37 M00
38 ; T26 OK TARAUD A DROITE DIAM=12. 2 DENTS A=118. ARS
39 TOOL CALL 26 Z S100 DR+0
40 TOOL DEF 1
41 L X+0 Y+0 FMAX M3
42 L Z+50 FMAX M8
43 ;  TARAUDAGE
44 CYCL DEF 207 NOUV. TARAUDAGE RIG. ~
    Q200=+2 ; DISTANCE D'APPROCHE~
    Q201=-20 ; PROFONDEUR~
    Q239=1.75 ; PAS DE VIS~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE
45 L X+0 Y+0 FMAX M99
46 M9
47 M5
48 L Z-1 FMAX M91
49 ; T1 FRAISE A CHANFREIN D5 D12  -2.2 RIEN DIAM=5. 4 DENTS ARS
50 ; CORRECTION USURE GAUCHE
51 ; SUREP R 0. SUREP Z 0.
52 TOOL CALL 1 Z S6000 DR-2,5
53 L X-3,748 Y+20,212 FMAX M3
54 L Z+50 FMAX
55 L Z+2 FMAX
56 L Z-2,5 F800
57 L X-1,768 Y+18,232 RL F1200
58 CC X+0 Y+20
59 C X+0 Y+17,5 DR+
60 L X+20
61 CC X+20 Y+15
62 C X+22,5 Y+15 DR-
63 L Y-15
64 CC X+20 Y-15
65 C X+20 Y-17,5 DR-
66 L X-20
67 CC X-20 Y-15
68 C X-22,5 Y-15 DR-
69 L Y+15
70 CC X-20 Y+15
71 C X-20 Y+17,5 DR-
72 L X+1
73 CC X+1 Y+20
74 C X+2,768 Y+18,232 DR+
75 L X+4,748 Y+20,212 R0
76 L Z+50 FMAX
77 M5
78 L Z-1 FMAX M91
79 L Y-1 FMAX M91
80 M30
81 END PGM REP 43 MM
