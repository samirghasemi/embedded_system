
cd .

if "%1"=="" ("C:\PROGRA~1\POLYSP~1\R2021a\bin\win64\gmake"  -f Thermostat_SUBSYSTEM_ca.mk all) else ("C:\PROGRA~1\POLYSP~1\R2021a\bin\win64\gmake"  -f Thermostat_SUBSYSTEM_ca.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1