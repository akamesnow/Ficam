0 BEGIN PGM A32163 MM
1 ; POST-PRO FICAM
2 ; MACHINE - DMG
3 ; DESSIN MASTERCAM - A32163
4 ; PROG-CN DU 12-07-21 A 14:54
5 BLK FORM 0.1 Z X+0 Y+0 Z+0
6 BLK FORM 0.2 X+0 Y+0 Z+0
7 ; LISTE DES OUTILS UTILISES
8 ; T1 VC 80 FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
9 ; T22 B920401600 FORET A NOYER DIAM=16. 2 DENTS A=120. ARS
10 ; FIN DE LISTE DES OUTILS
11 L R0 FMAX
12 L Z-1 FMAX M91
13 ; *GROUPE D'USINAGE-7*
14 ; T1 VC 80 FORET A NOYER DIAM=12. 2 DENTS A=90. CARBURE
15 TOOL CALL 1 Z S2200 DR+0
16 TOOL DEF 22
17 L X+124,129 Y-0,678 FMAX M3
18 L Z+50 FMAX
19 ;  POINTAGE-PERCAGE
20 CYCL DEF 200 PERCAGE ~
    Q200=+0 ; DISTANCE D'APPROCHE~
    Q201=-3,78 ; PROFONDEUR~
    Q206=800 ; AVANCE PLONGEE PROF.~
    Q202=+3,78 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
21 L X+124,129 Y-0,678 FMAX M99
22 L X+172,643 Y-12,774 FMAX M99
23 L X+205,085 Y-44,102 FMAX M99
24 L X+218,866 Y-92,165 FMAX M99
25 L X+207,956 Y-135,924 FMAX M99
26 L X+173,223 Y-171,891 FMAX M99
27 L X+129,871 Y-184,322 FMAX M99
28 L X+81,313 Y-172,247 FMAX M99
29 L X+48,88 Y-140,91 FMAX M99
30 L X+35,11 Y-92,844 FMAX M99
31 L X+46,032 Y-49,087 FMAX M99
32 L X+80,774 Y-13,129 FMAX M99
33 L X+94,261 Y-36,589 FMAX M99
34 L X+69,941 Y-61,759 FMAX M99
35 L X+62,17 Y-92,893 FMAX M99
36 L X+71,809 Y-126,54 FMAX M99
37 L X+94,886 Y-148,837 FMAX M99
38 L X+128,845 Y-157,312 FMAX M99
39 L X+159,693 Y-148,475 FMAX M99
40 L X+184,012 Y-123,304 FMAX M99
41 L X+191,783 Y-92,171 FMAX M99
42 L X+182,144 Y-58,524 FMAX M99
43 L X+159,067 Y-36,227 FMAX M99
44 L X+125,109 Y-27,751 FMAX M99
45 L Z+50 FMAX
46 M5
47 L Z-1 FMAX M91
48 ; T22 B920401600 FORET A NOYER DIAM=16. 2 DENTS A=120. ARS
49 TOOL CALL 22 Z S2385 DR+0
50 TOOL DEF 1
51 L X+72,033 Y-39,446 FMAX M3
52 L Z+50 FMAX
53 ;  POINTAGE-PERCAGE
54 CYCL DEF 200 PERCAGE ~
    Q200=+0 ; DISTANCE D'APPROCHE~
    Q201=-6,1 ; PROFONDEUR~
    Q206=816 ; AVANCE PLONGEE PROF.~
    Q202=+6,1 ; PROFONDEUR DE PASSE~
    Q210=0. ; TEMPO. EN HAUT~
    Q203=+0 ; COORD. SURFACE PIECE~
    Q204=+50 ; SAUT DE BRIDE~
    Q211=0. ; TEMPO. AU FOND
55 L X+72,033 Y-39,446 FMAX M99
56 L X+145,478 Y-18,406 FMAX M99
57 L X+200,422 Y-71,492 FMAX M99
58 L X+181,921 Y-145,618 FMAX M99
59 L X+108,475 Y-166,658 FMAX M99
60 L X+53,531 Y-113,572 FMAX M99
61 L Z+50 FMAX
62 M5
63 L Z-1 FMAX M91
64 L Y-1 FMAX M91
65 M30
66 END PGM A32163 MM
