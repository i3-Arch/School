ECHO off
cls
:MENU
ECHO.
ECHO ..................................................
ECHO 	      MAKE A CHOICE AND PRESS ENTER
ECHO ..................................................
ECHO.
ECHO 1 - Open Notepad
ECHO 2 - Open Calculator
ECHO 3 - Open Notepad AND Calculator
ECHO 4 - Show Arp Table
ECHO 5 - Show Mac Address
ECHO 6 - EXIT
ECHO.


SET /P M=Selection[1-6]:
IF %M%==1 GOTO NOTE
IF %M%==2 GOTO CALC
IF %M%==3 GOTO BOTH
IF %M%==4 GOTO ARP
IF %M%==5 GOTO MAC
IF %M%==6 GOTO EOF



:NOTE
cd %windir%\system32\notepad.exe
start notepad.exe
GOTO MENU
:CALC
cd %windir%\system32\calc.exe
start calc.exe
GOTO MENU
:BOTH
cd %windir%\system32\notepad.exe
start notepad.exe
cd %windir%\system32\calc.exe
start calc.exe
GOTO MENU
:ARP
cls
arp -a
GOTO MENU
:MAC
cls
getmac /v
GOTO MENU
:EOF
exit