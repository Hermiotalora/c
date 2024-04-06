#include ".\include\Empleado.h"
#include ".\include\Encargado.h"
#include ".\include\Gerente.h"
#include ".\include\Vendedor.h"
#include ".\include\Sucursal.h"
#include <iostream>
#ifdef _WIN32
#include <cstdlib>

void clearConsole() {
    system("cls");
}

void pauseConsole() {
    std::cin.ignore();
    std::cin.get();
}
#endif

void seleccionarArea(std::string nombre, std::string apellido, int dni, double salario, int &posicion, int &cantidad, Sucursal* sucursal);

int main() {
    std::string nombre, apellido;
    int dni, opcion;
    double salario;
    int posicion = -1, cantidad = 0;
    
    Sucursal* sucursal = new Sucursal("Colon al 9.000 ah");

    do {
        clearConsole();

        std::cout << "\n Elije una opcion \n";
        std::cout << "1-Para agregar un empleado. \n";
        std::cout << "2-Para listar empleados. \n";
        std::cout << "3-Para enviar notificacion. \n";
        std::cout << "0-Salir \n";
        std::cout << "Elijo la opcion... ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                clearConsole();
                std::cout << "Ingrese el nombre: ";
                std::cin.ignore();
                getline(std::cin, nombre);
                std::cout << "Ingrese el apellido: ";
                getline(std::cin, apellido);
                std::cout << "Ingrese el DNI: ";
                std::cin >> dni;
                std::cout << "Ingrese el salario: ";
                std::cin >> salario;
                seleccionarArea(nombre, apellido, dni, salario, posicion, cantidad, sucursal);
                break;
            case 2:
                clearConsole();
                sucursal->mostrarEmpleados();
                pauseConsole();
                break;
            case 3:
                clearConsole();
                sucursal->enviarNotificacion();
                pauseConsole();
                break;
            case 0:
                clearConsole();
                std::cout << "\n\nPrograma Finalizado :D\n";
                break;
            default:
                std::cout << "\nOpcion no valida bro\n";
                break;
        }
    } while (opcion != 0);

    pauseConsole();

    delete sucursal;

    return 0;
}

void seleccionarArea(std::string nombre, std::string apellido, int dni, double salario, int &posicion, int &cantidad, Sucursal* sucursal) {
    int opcion;

    std::cout << "\nElija puesto del empleado:\n";
    std::cout << "1-Gerente\n";
    std::cout << "2-Encargado\n";
    std::cout << "3-Vendedor\n";
    std::cout << "El puesto del empleado es... ";
    std::cin >> opcion;

    do {
        switch(opcion) {
            case 1: {
                Gerente* gerente = new Gerente(nombre, apellido, dni, salario);
                posicion++;
                cantidad++;
                sucursal->agregarEmpleado(gerente, posicion);
                sucursal->setCantidadEmpleados(cantidad);
                break;
            }
            case 2: {
                Encargado* encargado = new Encargado(nombre, apellido, dni, salario);
                posicion++;
                cantidad++;
                sucursal->agregarEmpleado(encargado, posicion);
                sucursal->setCantidadEmpleados(cantidad);
                break;
            }
            case 3: {
                Vendedor* vendedor = new Vendedor(nombre, apellido, dni, salario);
                posicion++;
                cantidad++;
                sucursal->agregarEmpleado(vendedor, posicion);
                sucursal->setCantidadEmpleados(cantidad);
                break;
            }
            default:
                std::cout << "\nOpcion no valida\n";
                break;
        }
    } while(opcion < 1 || opcion > 3);
}