ORIGINAL : mory seiki
%
O0000
N10 G0 G17 G40 G49 G80 G90
(  TARAUD À DROITE - 6   )
N20 S1000 M3
N30 G0 G90 G54 X0. Y0.
N40 G43 H1 Z50. M08
N50 G98 G84 Z0. R5. F1000.
N60 G80
N70 M9
N80 G28 G91 Y0. Z0. 
N90 M30
%



A MODIFIER :

%
O0000
N10 G0 G17 G40 G49 G80 G90
N12 
N14 
N16 attention oas d'appel doutils sur le premier outils voir pour changer cela
N18 M106 code pour l'appel de l'outils
N20 sur G84 on dois retrouver le pas qui lui doit etre en F par exemple pour un m6 pas de 1:   G98 G84 Z0. R5. F1.


(  TARAUD À DROITE - 6   )
N18 T? M106
N20 S1000 M3
N30 G0 G90 G54 X0. Y0.
N40 G43 H1 Z50. M08
N50 G98 G84 Z0. R5. F1.
N60 G80
N70 M9
N80 G28 G91 Y0. Z0. 
N90 M30
%
