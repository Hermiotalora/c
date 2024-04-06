g++ -Wall -c src/Empleado.cpp
g++ -Wall -c src/Encargado.cpp
g++ -Wall -c src/Gerente.cpp
g++ -Wall -c src/Sucursal.cpp
g++ -Wall -c src/Vendedor.cpp
g++ -Wall -c main.cpp

:: Compilar el binario
g++ Empleado.o Encargado.o Gerente.o Vendedor.o Sucursal.o main.o -o main.exe

:: Limpiar los codigo objeto
del *.o
