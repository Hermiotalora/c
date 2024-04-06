#include "../include/Sucursal.h"
#include "../include/Empleado.h"
#include <iostream>

Sucursal::Sucursal(std::string dire)
    : direccion(dire) {}

void Sucursal::agregarEmpleado(Empleado* empleado, int posicion) {
    if (posicion < 10) {
        empleados[posicion] = empleado;
    } else {
        std::cout << "\n Stop! No se puede agregar mas empleados a la sucursal";
    }
}

void Sucursal::mostrarEmpleados() {
    if (cantidadEmpleados <= 0) {
        std::cout << "\n No hay empleados cargados en la sucursal\n";
    } else {
        std::cout << "\nLista de Empleados: \n";
        for (int i = 0; i < cantidadEmpleados; i++) {
            std::cout << "\n";
            std::cout << "Cargo: " << empleados[i]->getArea() << std::endl;
            std::cout << "Nombre: " << empleados[i]->getNombre() << std::endl;
            std::cout << "Apellido: " << empleados[i]->getApellido() << std::endl;
            std::cout << "DNI: " << empleados[i]->getDNI() << std::endl;
            std::cout << "Salario: " << empleados[i]->getSalario() << std::endl;
        }
    }
}

void Sucursal::enviarNotificacion() {
    std::cout << "\nLa empresa indica que comenzo el horario laboral \n";
    for (int i = 0; i < cantidadEmpleados; i++) {
        empleados[i]->trabajar();
    }
}

void Sucursal::setCantidadEmpleados(int cantidad) {
    cantidadEmpleados = cantidad;
}