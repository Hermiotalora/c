#ifndef ENCARGADO_H
#define ENCARGADO_H
#include "Empleado.h"

class Encargado : public Empleado {
public:
    Encargado(std::string nom, std::string ape, int dni, double salario);
    void trabajar();
};

#endif