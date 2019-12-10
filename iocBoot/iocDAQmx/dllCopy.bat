@ECHO OFF
XCOPY /R /I /Q /Y C:\Instrument\Apps\EPICS\support\asyn\master\bin\windows-x64\*.dll %MYDIR%..\..\bin\windows-x64
XCOPY /R /I /Q /Y C:\Instrument\Apps\EPICS\support\oncrpc\master\bin\windows-x64\*.dll %MYDIR%..\..\bin\windows-x64
XCOPY /R /I /Q /Y C:\Instrument\Apps\EPICS\base\master\bin\windows-x64\*.dll %MYDIR%..\..\bin\windows-x64
