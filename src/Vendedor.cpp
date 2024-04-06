#include "../include/Vendedor.h"
#include <iostream>

Vendedor::Vendedor(std::string nom, std::string ape, int dni, double salario)
    : Empleado(nom, ape, dni, salario, "Vendedor") {}

void Vendedor::trabajar() {
    std::cout << "El Vendedor " << getNombre() << " " << getApellido() << " esta promocionando.\n";
}
