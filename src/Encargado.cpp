#include "../include/Encargado.h"
#include <iostream>

Encargado::Encargado(std::string nom, std::string ape, int dni, double salario)
    : Empleado(nom, ape, dni, salario, "Encargado") {}

void Encargado::trabajar() {
    std::cout << "El Encargado " << getNombre() << " " << getApellido() << " esta supervisando.\n";
}
