0  BEGIN PGM CHAUFFE MM 
1  ;=======================================
2  L  Z-1 R0 F6000 M91
3  TOOL CALL 1 Z
4  ;=======================================
5  LBL 2
6  ;=======================================
7  FN 0: Q1 =+500
8  FN 0: Q2 =+500
9  ;=======================================
10 LBL 1
11 TOOL CALL  Z SQ1
12 L  Z-1 R0 M91 M3
13 L  X-1  Y-1  C+180  B+45 R0 M91
14 L  X-500  B+0 R0 M91
15 L  Z-100 R0 M91
16 L  Z-1  C+0 R0 F1500 M91
17 L  Y-600 R0 M91
18 L  X-1 R0 M91
19 FN 1: Q1 =+Q1 + +Q2
20 LBL 0
21 FN 12: IF +Q1 LT +12000 GOTO LBL 1
22 FN 9: IF +Q1 EQU +12000 GOTO LBL 2
23 END PGM CHAUFFE MM 
