0  BEGIN PGM 1185 MISE PF RETOUCHEE MM
1  ; POST-PRO FICAM
2  ; MACHINE - DMG
3  ; DESSIN MASTERCAM - 1185 MISE PF RETOUCHEE
4  ; PROG-CN DU 27-05-20 A 11:55
5  BLK FORM 0.1 Z X+0 Y+0 Z+0
6  BLK FORM 0.2 X+0 Y+0 Z+0
7  ; LISTE DES OUTILS UTILISES
8  ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
9  ; T21 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
10  ; T1 FRAISE A CHANFREIN D5 D12 -2.2 RIEN DIAM=5. 4 DENTS ARS
11  ; FIN DE LISTE DES OUTILS
12  L R0 FMAX
13  L Z-1 FMAX M91
14  ; *GROUPE D'USINAGE-1*
15  ; T19 FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
16  ; CORRECTION USURE GAUCHE
17  ; SUREP R 0. SUREP Z 0.1
18  TOOL CALL 19 Z S7427 DR-3
19  TOOL DEF 21
20  L X+358 Y+162 FMAX M3
21  L Z+50 FMAX M8
22  L Z+2 FMAX
23  L Z-0,3 F297
24  L Y+165 RL F3565
25  CC X+355 Y+165
26  C X+355 Y+168 DR+
27  L X+317
28  CC X+317 Y+165
29  C X+314 Y+165 DR+
30  L Y+162 R0
31  L Z+10 FMAX
32  L X+358 FMAX
33  L Z+1,7 FMAX
34  L Z-0,6 F297
35  L Y+165 RL F3565
36  CC X+355 Y+165
37  C X+355 Y+168 DR+
38  L X+317
39  CC X+317 Y+165
40  C X+314 Y+165 DR+
41  L Y+162 R0
42  L Z+10 FMAX
43  L X+358 FMAX
44  L Z+1,4 FMAX
45  L Z-0,9 F297
46  L Y+165 RL F3565
47  CC X+355 Y+165
48  C X+355 Y+168 DR+
49  L X+317
50  CC X+317 Y+165
51  C X+314 Y+165 DR+
52  L Y+162 R0
53  L Z+10 FMAX
54  L X+358 FMAX
55  L Z+1,1 FMAX
56  L Z-1,2 F297
57  L Y+165 RL F3565
58  CC X+355 Y+165
59  C X+355 Y+168 DR+
60  L X+317
61  CC X+317 Y+165
62  C X+314 Y+165 DR+
63  L Y+162 R0
64  L Z+10 FMAX
65  L X+358 FMAX
66  L Z+0,8 FMAX
67  L Z-1,5 F297
68  L Y+165 RL F3565
69  CC X+355 Y+165
70  C X+355 Y+168 DR+
71  L X+317
72  CC X+317 Y+165
73  C X+314 Y+165 DR+
74  L Y+162 R0
75  L Z+10 FMAX
76  L X+358 FMAX
77  L Z+0,5 FMAX
78  L Z-1,8 F297
79  L Y+165 RL F3565
80  CC X+355 Y+165
81  C X+355 Y+168 DR+
82  L X+317
83  CC X+317 Y+165
84  C X+314 Y+165 DR+
85  L Y+162 R0
86  L Z+10 FMAX
87  L X+358 FMAX
88  L Z+0,2 FMAX
89  L Z-2,1 F297
90  L Y+165 RL F3565
91  CC X+355 Y+165
92  C X+355 Y+168 DR+
93  L X+317
94  CC X+317 Y+165
95  C X+314 Y+165 DR+
96  L Y+162 R0
97  L Z+10 FMAX
98  L X+358 FMAX
99  L Z-0,1 FMAX
100  L Z-2,4 F297
101  L Y+165 RL F3565
102  CC X+355 Y+165
103  C X+355 Y+168 DR+
104  L X+317
105  CC X+317 Y+165
106  C X+314 Y+165 DR+
107  L Y+162 R0
108  L Z+10 FMAX
109  L X+358 FMAX
110  L Z-0,4 FMAX
111  L Z-2,7 F297
112  L Y+165 RL F3565
113  CC X+355 Y+165
114  C X+355 Y+168 DR+
115  L X+317
116  CC X+317 Y+165
117  C X+314 Y+165 DR+
118  L Y+162 R0
119  L Z+10 FMAX
120  L X+358 FMAX
121  L Z-0,7 FMAX
122  L Z-3 F297
123  L Y+165 RL F3565
124  CC X+355 Y+165
125  C X+355 Y+168 DR+
126  L X+317
127  CC X+317 Y+165
128  C X+314 Y+165 DR+
129  L Y+162 R0
130  L Z+10 FMAX
131  L X+358 FMAX
132  L Z-1 FMAX
133  L Z-3,3 F297
134  L Y+165 RL F3565
135  CC X+355 Y+165
136  C X+355 Y+168 DR+
137  L X+317
138  CC X+317 Y+165
139  C X+314 Y+165 DR+
140  L Y+162 R0
141  L Z+10 FMAX
142  L X+358 FMAX
143  L Z-1,3 FMAX
144  L Z-3,6 F297
145  L Y+165 RL F3565
146  CC X+355 Y+165
147  C X+355 Y+168 DR+
148  L X+317
149  CC X+317 Y+165
150  C X+314 Y+165 DR+
151  L Y+162 R0
152  L Z+10 FMAX
153  L X+358 FMAX
154  L Z-1,6 FMAX
155  L Z-3,9 F297
156  L Y+165 RL F3565
157  CC X+355 Y+165
158  C X+355 Y+168 DR+
159  L X+317
160  CC X+317 Y+165
161  C X+314 Y+165 DR+
162  L Y+162 R0
163  L Z+10 FMAX
164  L X+358 FMAX
165  L Z-1,6 FMAX
166  L Z-3,9 F297
167  L Y+165 RL F3565
168  CC X+355 Y+165
169  C X+355 Y+168 DR+
170  L X+317
171  CC X+317 Y+165
172  C X+314 Y+165 DR+
173  L Y+162 R0
174  L Z+10 FMAX
175  L X+358 FMAX
176  L Z-1,6 FMAX
177  L Z-3,9 F297
178  L Y+165 RL F3565
179  CC X+355 Y+165
180  C X+355 Y+168 DR+
181  L X+317
182  CC X+317 Y+165
183  C X+314 Y+165 DR+
184  L Y+162 R0
185  L Z+50 FMAX
186  L X+294 FMAX
187  L Z+2 FMAX
188  L Z-0,3 F297
189  L Y+165 RL F3565
190  CC X+291 Y+165
191  C X+291 Y+168 DR+
192  L X+253
193  CC X+253 Y+165
194  C X+250 Y+165 DR+
195  L Y+162 R0
196  L Z+10 FMAX
197  L X+294 FMAX
198  L Z+1,7 FMAX
199  L Z-0,6 F297
200  L Y+165 RL F3565
201  CC X+291 Y+165
202  C X+291 Y+168 DR+
203  L X+253
204  CC X+253 Y+165
205  C X+250 Y+165 DR+
206  L Y+162 R0
207  L Z+10 FMAX
208  L X+294 FMAX
209  L Z+1,4 FMAX
210  L Z-0,9 F297
211  L Y+165 RL F3565
212  CC X+291 Y+165
213  C X+291 Y+168 DR+
214  L X+253
215  CC X+253 Y+165
216  C X+250 Y+165 DR+
217  L Y+162 R0
218  L Z+10 FMAX
219  L X+294 FMAX
220  L Z+1,1 FMAX
221  L Z-1,2 F297
222  L Y+165 RL F3565
223  CC X+291 Y+165
224  C X+291 Y+168 DR+
225  L X+253
226  CC X+253 Y+165
227  C X+250 Y+165 DR+
228  L Y+162 R0
229  L Z+10 FMAX
230  L X+294 FMAX
231  L Z+0,8 FMAX
232  L Z-1,5 F297
233  L Y+165 RL F3565
234  CC X+291 Y+165
235  C X+291 Y+168 DR+
236  L X+253
237  CC X+253 Y+165
238  C X+250 Y+165 DR+
239  L Y+162 R0
240  L Z+10 FMAX
241  L X+294 FMAX
242  L Z+0,5 FMAX
243  L Z-1,8 F297
244  L Y+165 RL F3565
245  CC X+291 Y+165
246  C X+291 Y+168 DR+
247  L X+253
248  CC X+253 Y+165
249  C X+250 Y+165 DR+
250  L Y+162 R0
251  L Z+10 FMAX
252  L X+294 FMAX
253  L Z+0,2 FMAX
254  L Z-2,1 F297
255  L Y+165 RL F3565
256  CC X+291 Y+165
257  C X+291 Y+168 DR+
258  L X+253
259  CC X+253 Y+165
260  C X+250 Y+165 DR+
261  L Y+162 R0
262  L Z+10 FMAX
263  L X+294 FMAX
264  L Z-0,1 FMAX
265  L Z-2,4 F297
266  L Y+165 RL F3565
267  CC X+291 Y+165
268  C X+291 Y+168 DR+
269  L X+253
270  CC X+253 Y+165
271  C X+250 Y+165 DR+
272  L Y+162 R0
273  L Z+10 FMAX
274  L X+294 FMAX
275  L Z-0,4 FMAX
276  L Z-2,7 F297
277  L Y+165 RL F3565
278  CC X+291 Y+165
279  C X+291 Y+168 DR+
280  L X+253
281  CC X+253 Y+165
282  C X+250 Y+165 DR+
283  L Y+162 R0
284  L Z+10 FMAX
285  L X+294 FMAX
286  L Z-0,7 FMAX
287  L Z-3 F297
288  L Y+165 RL F3565
289  CC X+291 Y+165
290  C X+291 Y+168 DR+
291  L X+253
292  CC X+253 Y+165
293  C X+250 Y+165 DR+
294  L Y+162 R0
295  L Z+10 FMAX
296  L X+294 FMAX
297  L Z-1 FMAX
298  L Z-3,3 F297
299  L Y+165 RL F3565
300  CC X+291 Y+165
301  C X+291 Y+168 DR+
302  L X+253
303  CC X+253 Y+165
304  C X+250 Y+165 DR+
305  L Y+162 R0
306  L Z+10 FMAX
307  L X+294 FMAX
308  L Z-1,3 FMAX
309  L Z-3,6 F297
310  L Y+165 RL F3565
311  CC X+291 Y+165
312  C X+291 Y+168 DR+
313  L X+253
314  CC X+253 Y+165
315  C X+250 Y+165 DR+
316  L Y+162 R0
317  L Z+10 FMAX
318  L X+294 FMAX
319  L Z-1,6 FMAX
320  L Z-3,9 F297
321  L Y+165 RL F3565
322  CC X+291 Y+165
323  C X+291 Y+168 DR+
324  L X+253
325  CC X+253 Y+165
326  C X+250 Y+165 DR+
327  L Y+162 R0
328  L Z+10 FMAX
329  L X+294 FMAX
330  L Z-1,6 FMAX
331  L Z-3,9 F297
332  L Y+165 RL F3565
333  CC X+291 Y+165
334  C X+291 Y+168 DR+
335  L X+253
336  CC X+253 Y+165
337  C X+250 Y+165 DR+
338  L Y+162 R0
339  L Z+10 FMAX
340  L X+294 FMAX
341  L Z-1,6 FMAX
342  L Z-3,9 F297
343  L Y+165 RL F3565
344  CC X+291 Y+165
345  C X+291 Y+168 DR+
346  L X+253
347  CC X+253 Y+165
348  C X+250 Y+165 DR+
349  L Y+162 R0
350  L Z+50 FMAX
351  L Y+14 FMAX
352  L Z+2 FMAX
353  L Z-0,3 F297
354  L Y+11 RL F3565
355  CC X+253 Y+11
356  C X+253 Y+8 DR+
357  L X+291
358  CC X+291 Y+11
359  C X+294 Y+11 DR+
360  L Y+14 R0
361  L Z+10 FMAX
362  L X+250 FMAX
363  L Z+1,7 FMAX
364  L Z-0,6 F297
365  L Y+11 RL F3565
366  CC X+253 Y+11
367  C X+253 Y+8 DR+
368  L X+291
369  CC X+291 Y+11
370  C X+294 Y+11 DR+
371  L Y+14 R0
372  L Z+10 FMAX
373  L X+250 FMAX
374  L Z+1,4 FMAX
375  L Z-0,9 F297
376  L Y+11 RL F3565
377  CC X+253 Y+11
378  C X+253 Y+8 DR+
379  L X+291
380  CC X+291 Y+11
381  C X+294 Y+11 DR+
382  L Y+14 R0
383  L Z+10 FMAX
384  L X+250 FMAX
385  L Z+1,1 FMAX
386  L Z-1,2 F297
387  L Y+11 RL F3565
388  CC X+253 Y+11
389  C X+253 Y+8 DR+
390  L X+291
391  CC X+291 Y+11
392  C X+294 Y+11 DR+
393  L Y+14 R0
394  L Z+10 FMAX
395  L X+250 FMAX
396  L Z+0,8 FMAX
397  L Z-1,5 F297
398  L Y+11 RL F3565
399  CC X+253 Y+11
400  C X+253 Y+8 DR+
401  L X+291
402  CC X+291 Y+11
403  C X+294 Y+11 DR+
404  L Y+14 R0
405  L Z+10 FMAX
406  L X+250 FMAX
407  L Z+0,5 FMAX
408  L Z-1,8 F297
409  L Y+11 RL F3565
410  CC X+253 Y+11
411  C X+253 Y+8 DR+
412  L X+291
413  CC X+291 Y+11
414  C X+294 Y+11 DR+
415  L Y+14 R0
416  L Z+10 FMAX
417  L X+250 FMAX
418  L Z+0,2 FMAX
419  L Z-2,1 F297
420  L Y+11 RL F3565
421  CC X+253 Y+11
422  C X+253 Y+8 DR+
423  L X+291
424  CC X+291 Y+11
425  C X+294 Y+11 DR+
426  L Y+14 R0
427  L Z+10 FMAX
428  L X+250 FMAX
429  L Z-0,1 FMAX
430  L Z-2,4 F297
431  L Y+11 RL F3565
432  CC X+253 Y+11
433  C X+253 Y+8 DR+
434  L X+291
435  CC X+291 Y+11
436  C X+294 Y+11 DR+
437  L Y+14 R0
438  L Z+10 FMAX
439  L X+250 FMAX
440  L Z-0,4 FMAX
441  L Z-2,7 F297
442  L Y+11 RL F3565
443  CC X+253 Y+11
444  C X+253 Y+8 DR+
445  L X+291
446  CC X+291 Y+11
447  C X+294 Y+11 DR+
448  L Y+14 R0
449  L Z+10 FMAX
450  L X+250 FMAX
451  L Z-0,7 FMAX
452  L Z-3 F297
453  L Y+11 RL F3565
454  CC X+253 Y+11
455  C X+253 Y+8 DR+
456  L X+291
457  CC X+291 Y+11
458  C X+294 Y+11 DR+
459  L Y+14 R0
460  L Z+10 FMAX
461  L X+250 FMAX
462  L Z-1 FMAX
463  L Z-3,3 F297
464  L Y+11 RL F3565
465  CC X+253 Y+11
466  C X+253 Y+8 DR+
467  L X+291
468  CC X+291 Y+11
469  C X+294 Y+11 DR+
470  L Y+14 R0
471  L Z+10 FMAX
472  L X+250 FMAX
473  L Z-1,3 FMAX
474  L Z-3,6 F297
475  L Y+11 RL F3565
476  CC X+253 Y+11
477  C X+253 Y+8 DR+
478  L X+291
479  CC X+291 Y+11
480  C X+294 Y+11 DR+
481  L Y+14 R0
482  L Z+10 FMAX
483  L X+250 FMAX
484  L Z-1,6 FMAX
485  L Z-3,9 F297
486  L Y+11 RL F3565
487  CC X+253 Y+11
488  C X+253 Y+8 DR+
489  L X+291
490  CC X+291 Y+11
491  C X+294 Y+11 DR+
492  L Y+14 R0
493  L Z+10 FMAX
494  L X+250 FMAX
495  L Z-1,6 FMAX
496  L Z-3,9 F297
497  L Y+11 RL F3565
498  CC X+253 Y+11
499  C X+253 Y+8 DR+
500  L X+291
501  CC X+291 Y+11
502  C X+294 Y+11 DR+
503  L Y+14 R0
504  L Z+10 FMAX
505  L X+250 FMAX
506  L Z-1,6 FMAX
507  L Z-3,9 F297
508  L Y+11 RL F3565
509  CC X+253 Y+11
510  C X+253 Y+8 DR+
511  L X+291
512  CC X+291 Y+11
513  C X+294 Y+11 DR+
514  L Y+14 R0
515  L Z+50 FMAX
516  L X+314 FMAX
517  L Z+2 FMAX
518  L Z-0,3 F297
519  L Y+11 RL F3565
520  CC X+317 Y+11
521  C X+317 Y+8 DR+
522  L X+355
523  CC X+355 Y+11
524  C X+358 Y+11 DR+
525  L Y+14 R0
526  L Z+10 FMAX
527  L X+314 FMAX
528  L Z+1,7 FMAX
529  L Z-0,6 F297
530  L Y+11 RL F3565
531  CC X+317 Y+11
532  C X+317 Y+8 DR+
533  L X+355
534  CC X+355 Y+11
535  C X+358 Y+11 DR+
536  L Y+14 R0
537  L Z+10 FMAX
538  L X+314 FMAX
539  L Z+1,4 FMAX
540  L Z-0,9 F297
541  L Y+11 RL F3565
542  CC X+317 Y+11
543  C X+317 Y+8 DR+
544  L X+355
545  CC X+355 Y+11
546  C X+358 Y+11 DR+
547  L Y+14 R0
548  L Z+10 FMAX
549  L X+314 FMAX
550  L Z+1,1 FMAX
551  L Z-1,2 F297
552  L Y+11 RL F3565
553  CC X+317 Y+11
554  C X+317 Y+8 DR+
555  L X+355
556  CC X+355 Y+11
557  C X+358 Y+11 DR+
558  L Y+14 R0
559  L Z+10 FMAX
560  L X+314 FMAX
561  L Z+0,8 FMAX
562  L Z-1,5 F297
563  L Y+11 RL F3565
564  CC X+317 Y+11
565  C X+317 Y+8 DR+
566  L X+355
567  CC X+355 Y+11
568  C X+358 Y+11 DR+
569  L Y+14 R0
570  L Z+10 FMAX
571  L X+314 FMAX
572  L Z+0,5 FMAX
573  L Z-1,8 F297
574  L Y+11 RL F3565
575  CC X+317 Y+11
576  C X+317 Y+8 DR+
577  L X+355
578  CC X+355 Y+11
579  C X+358 Y+11 DR+
580  L Y+14 R0
581  L Z+10 FMAX
582  L X+314 FMAX
583  L Z+0,2 FMAX
584  L Z-2,1 F297
585  L Y+11 RL F3565
586  CC X+317 Y+11
587  C X+317 Y+8 DR+
588  L X+355
589  CC X+355 Y+11
590  C X+358 Y+11 DR+
591  L Y+14 R0
592  L Z+10 FMAX
593  L X+314 FMAX
594  L Z-0,1 FMAX
595  L Z-2,4 F297
596  L Y+11 RL F3565
597  CC X+317 Y+11
598  C X+317 Y+8 DR+
599  L X+355
600  CC X+355 Y+11
601  C X+358 Y+11 DR+
602  L Y+14 R0
603  L Z+10 FMAX
604  L X+314 FMAX
605  L Z-0,4 FMAX
606  L Z-2,7 F297
607  L Y+11 RL F3565
608  CC X+317 Y+11
609  C X+317 Y+8 DR+
610  L X+355
611  CC X+355 Y+11
612  C X+358 Y+11 DR+
613  L Y+14 R0
614  L Z+10 FMAX
615  L X+314 FMAX
616  L Z-0,7 FMAX
617  L Z-3 F297
618  L Y+11 RL F3565
619  CC X+317 Y+11
620  C X+317 Y+8 DR+
621  L X+355
622  CC X+355 Y+11
623  C X+358 Y+11 DR+
624  L Y+14 R0
625  L Z+10 FMAX
626  L X+314 FMAX
627  L Z-1 FMAX
628  L Z-3,3 F297
629  L Y+11 RL F3565
630  CC X+317 Y+11
631  C X+317 Y+8 DR+
632  L X+355
633  CC X+355 Y+11
634  C X+358 Y+11 DR+
635  L Y+14 R0
636  L Z+10 FMAX
637  L X+314 FMAX
638  L Z-1,3 FMAX
639  L Z-3,6 F297
640  L Y+11 RL F3565
641  CC X+317 Y+11
642  C X+317 Y+8 DR+
643  L X+355
644  CC X+355 Y+11
645  C X+358 Y+11 DR+
646  L Y+14 R0
647  L Z+10 FMAX
648  L X+314 FMAX
649  L Z-1,6 FMAX
650  L Z-3,9 F297
651  L Y+11 RL F3565
652  CC X+317 Y+11
653  C X+317 Y+8 DR+
654  L X+355
655  CC X+355 Y+11
656  C X+358 Y+11 DR+
657  L Y+14 R0
658  L Z+10 FMAX
659  L X+314 FMAX
660  L Z-1,6 FMAX
661  L Z-3,9 F297
662  L Y+11 RL F3565
663  CC X+317 Y+11
664  C X+317 Y+8 DR+
665  L X+355
666  CC X+355 Y+11
667  C X+358 Y+11 DR+
668  L Y+14 R0
669  L Z+10 FMAX
670  L X+314 FMAX
671  L Z-1,6 FMAX
672  L Z-3,9 F297
673  L Y+11 RL F3565
674  CC X+317 Y+11
675  C X+317 Y+8 DR+
676  L X+355
677  CC X+355 Y+11
678  C X+358 Y+11 DR+
679  L Y+14 R0
680  L Z+50 FMAX
681  M9
682  M5
683  L Z-1 FMAX M91
684  ; T21 DIA 6 FINITION FRAISE 2 TAILLES DIAM=6. 6 DENTS CARBURE PLAQUETTES
685  ; CORRECTION USURE GAUCHE
686  ; SUREP R 0. SUREP Z 0.05
687  TOOL CALL 21 Z S6000 DR-3
688  TOOL DEF 1
689  L X+358 Y+162 FMAX M3
690  L Z+50 FMAX M25
691  L Z+2 FMAX
692  L Z-3,95 F297
693  L Y+165 RL F500
694  CC X+355 Y+165
695  C X+355 Y+168 DR+
696  L X+317
697  CC X+317 Y+165
698  C X+314 Y+165 DR+
699  L Y+162 R0
700  L Z+10 FMAX
701  L X+358 FMAX
702  L Z+2 FMAX
703  L Z-3,95 F297
704  L Y+165 RL F500
705  CC X+355 Y+165
706  C X+355 Y+168 DR+
707  L X+317
708  CC X+317 Y+165
709  C X+314 Y+165 DR+
710  L Y+162 R0
711  L Z+10 FMAX
712  L X+358 FMAX
713  L Z+2 FMAX
714  L Z-3,95 F297
715  L Y+165 RL F500
716  CC X+355 Y+165
717  C X+355 Y+168 DR+
718  L X+317
719  CC X+317 Y+165
720  C X+314 Y+165 DR+
721  L Y+162 R0
722  L Z+50 FMAX
723  L X+294 FMAX
724  L Z+2 FMAX
725  L Z-3,95 F297
726  L Y+165 RL F500
727  CC X+291 Y+165
728  C X+291 Y+168 DR+
729  L X+253
730  CC X+253 Y+165
731  C X+250 Y+165 DR+
732  L Y+162 R0
733  L Z+10 FMAX
734  L X+294 FMAX
735  L Z+2 FMAX
736  L Z-3,95 F297
737  L Y+165 RL F500
738  CC X+291 Y+165
739  C X+291 Y+168 DR+
740  L X+253
741  CC X+253 Y+165
742  C X+250 Y+165 DR+
743  L Y+162 R0
744  L Z+10 FMAX
745  L X+294 FMAX
746  L Z+2 FMAX
747  L Z-3,95 F297
748  L Y+165 RL F500
749  CC X+291 Y+165
750  C X+291 Y+168 DR+
751  L X+253
752  CC X+253 Y+165
753  C X+250 Y+165 DR+
754  L Y+162 R0
755  L Z+50 FMAX
756  L Y+14 FMAX
757  L Z+2 FMAX
758  L Z-3,95 F297
759  L Y+11 RL F500
760  CC X+253 Y+11
761  C X+253 Y+8 DR+
762  L X+291
763  CC X+291 Y+11
764  C X+294 Y+11 DR+
765  L Y+14 R0
766  L Z+10 FMAX
767  L X+250 FMAX
768  L Z+2 FMAX
769  L Z-3,95 F297
770  L Y+11 RL F500
771  CC X+253 Y+11
772  C X+253 Y+8 DR+
773  L X+291
774  CC X+291 Y+11
775  C X+294 Y+11 DR+
776  L Y+14 R0
777  L Z+10 FMAX
778  L X+250 FMAX
779  L Z+2 FMAX
780  L Z-3,95 F297
781  L Y+11 RL F500
782  CC X+253 Y+11
783  C X+253 Y+8 DR+
784  L X+291
785  CC X+291 Y+11
786  C X+294 Y+11 DR+
787  L Y+14 R0
788  L Z+50 FMAX
789  L X+314 FMAX
790  L Z+2 FMAX
791  L Z-3,95 F297
792  L Y+11 RL F500
793  CC X+317 Y+11
794  C X+317 Y+8 DR+
795  L X+355
796  CC X+355 Y+11
797  C X+358 Y+11 DR+
798  L Y+14 R0
799  L Z+10 FMAX
800  L X+314 FMAX
801  L Z+2 FMAX
802  L Z-3,95 F297
803  L Y+11 RL F500
804  CC X+317 Y+11
805  C X+317 Y+8 DR+
806  L X+355
807  CC X+355 Y+11
808  C X+358 Y+11 DR+
809  L Y+14 R0
810  L Z+10 FMAX
811  L X+314 FMAX
812  L Z+2 FMAX
813  L Z-3,95 F297
814  L Y+11 RL F500
815  CC X+317 Y+11
816  C X+317 Y+8 DR+
817  L X+355
818  CC X+355 Y+11
819  C X+358 Y+11 DR+
820  L Y+14 R0
821  L Z+50 FMAX
822  M78
823  M5
824  L Z-1 FMAX M91
825  ; T1 FRAISE A CHANFREIN D5 D12 -2.2 RIEN DIAM=5. 4 DENTS ARS
826  ; CORRECTION USURE GAUCHE
827  ; SUREP R 0. SUREP Z 0.
828  TOOL CALL 1 Z S6000 DR-2,5
829  TOOL DEF 19
830  L X+358,5 Y+162,5 FMAX M3
831  L Z+50 FMAX
832  L Z+2 FMAX
833  L Z-2,2 F800
834  L Y+165 RL F1200
835  CC X+355 Y+165
836  C X+355 Y+168,5 DR+
837  L X+317
838  CC X+317 Y+165
839  C X+313,5 Y+165 DR+
840  L Y+162,5 R0
841  L Z+50 FMAX
842  L X+294,5 FMAX
843  L Z+2 FMAX
844  L Z-2,2 F800
845  L Y+165 RL F1200
846  CC X+291 Y+165
847  C X+291 Y+168,5 DR+
848  L X+253
849  CC X+253 Y+165
850  C X+249,5 Y+165 DR+
851  L Y+162,5 R0
852  L Z+50 FMAX
853  L Y+13,5 FMAX
854  L Z+2 FMAX
855  L Z-2,2 F800
856  L Y+11 RL F1200
857  CC X+253 Y+11
858  C X+253 Y+7,5 DR+
859  L X+291
860  CC X+291 Y+11
861  C X+294,5 Y+11 DR+
862  L Y+13,5 R0
863  L Z+50 FMAX
864  L X+313,5 FMAX
865  L Z+2 FMAX
866  L Z-2,2 F800
867  L Y+11 RL F1200
868  CC X+317 Y+11
869  C X+317 Y+7,5 DR+
870  L X+355
871  CC X+355 Y+11
872  C X+358,5 Y+11 DR+
873  L Y+13,5 R0
874  L Z+50 FMAX
875  M5
876  L Z-1 FMAX M91
877  L Y-1 FMAX M91
878  M30
879  END PGM 1185 MISE PF RETOUCHEE MM