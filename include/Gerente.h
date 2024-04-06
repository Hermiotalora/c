#ifndef GERENTE_H
#define GERENTE_H

#include "Empleado.h"

class Gerente : public Empleado {
public:
    Gerente(std::string nom, std::string ape, int dni, double salario);
    void trabajar();
};

#endif
