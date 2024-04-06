#include "../include/Empleado.h"

Empleado::Empleado(std::string nom, std::string ape, int dni, double salario, std::string area)
    : nombre(nom), apellido(ape), dni(dni), salario(salario), area(area) {}

std::string Empleado::getNombre() {
    return nombre;
}

std::string Empleado::getApellido() {
    return apellido;
}

int Empleado::getDNI() {
    return dni;
}

double Empleado::getSalario() {
    return salario;
}

std::string Empleado::getArea() {
    return area;
}
