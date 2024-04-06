#ifndef SUCURSAL_H
#define SUCURSAL_H
#include <string>

class Empleado;
class Sucursal {
private:
    int cantidadEmpleados = 0;
    Empleado* empleados[10];
    std::string direccion;
public:
    Sucursal(std::string dire);
    void agregarEmpleado(Empleado* empleado, int posicion);
    void mostrarEmpleados();
    void enviarNotificacion();
    void setCantidadEmpleados(int cantidad);
};

#endif