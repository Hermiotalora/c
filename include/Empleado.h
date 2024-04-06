#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>

class Empleado {
private:
    std::string nombre;
    std::string apellido;
    int dni;
    double salario;
    std::string area;
public:
    Empleado(std::string nom, std::string ape, int dni, double salario, std::string area);
    virtual void trabajar() = 0;
    virtual ~Empleado() {}
    std::string getNombre();
    std::string getApellido();
    int getDNI();
    double getSalario();
    std::string getArea();
};

#endif