@echo OFF
cls
@echo ON
@echo "Installation du CHook "Création de cercles entre points" sur Mastercam 2017.
chcp 1252

del "C:\Program Files\Mcam2017\chooks\CreateCirclesBetweenPoints.dll"
del "C:\Program Files\Mcam2017\chooks\CreateCirclesBetweenPoints.ft"

md %userprofile%\desktop\temp_create_2017

copy /y "Création de cercles entre points.dll" "%userprofile%\desktop\temp_create_2017"
copy /y "Création de cercles entre points.ft" "%userprofile%\desktop\temp_create_2017"
copy /y "MastercamNativeInterop.dll" "%userprofile%\desktop\temp_create_2017"
copy /y "CreateCirclesBetweenPoints.pdf" "%userprofile%\desktop\temp_create_2017"
copy /y "Création de cercles entre points_2017.reg" "%userprofile%\desktop\temp_create_2017"

copy /y "%userprofile%\desktop\temp_create_2017\Création de cercles entre points.dll" "C:\Program Files\Mcam2017\chooks\Création de cercles entre points.dll"
copy /y "%userprofile%\desktop\temp_create_2017\Création de cercles entre points.ft" "C:\Program Files\Mcam2017\chooks\Création de cercles entre points.ft"
copy /y "%userprofile%\desktop\temp_create_2017\MastercamNativeInterop.dll" "C:\Program Files\Mcam2017\MastercamNativeInterop.dll"
copy /y "%userprofile%\desktop\temp_create_2017\CreateCirclesBetweenPoints.pdf" "C:\Program Files\Mcam2017\help\CreateCirclesBetweenPoints.pdf"

regedit /s "%userprofile%\desktop\temp_create_2017\Création de cercles entre points_2017.reg"

rd /s/q %userprofile%\desktop\temp_create_2017

cls