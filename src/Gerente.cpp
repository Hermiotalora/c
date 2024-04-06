#include "../include/Gerente.h"
#include <iostream>

Gerente::Gerente(std::string nom, std::string ape, int dni, double salario)
    : Empleado(nom, ape, dni, salario, "Gerente") {}

void Gerente::trabajar() {
    std::cout << "El Gerente " << getNombre() << " " << getApellido() << " esta gestionando el equipo.\n";
}
