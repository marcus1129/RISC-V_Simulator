Powershell -Command "cd C:\RISC-V_Simulator\RISC-V_Simulator"
Powershell -Command "gcc -c main.c"
Powershell -Command "gcc -c Decode.c"
Powershell -Command "gcc -c Instructions.c"
Powershell -Command "gcc -c Registers.c"
Powershell -Command "gcc main.o Decode.o Instructions.o Registers.o -o main.exe"
pause