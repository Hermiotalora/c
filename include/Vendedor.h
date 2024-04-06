#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empleado.h"

class Vendedor : public Empleado {
public:
    Vendedor(std::string nom, std::string ape, int dni, double salario);
    void trabajar();
};

#endif