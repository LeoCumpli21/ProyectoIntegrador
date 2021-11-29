// Implementación de la clase Transaccion
#include "Transaccion.h"

Transaccion::Transaccion()
{
    tipo = "";
    id = 0;
    estado = false;
    fecha = Fecha();
    producto = Producto();
}

Transaccion::Transaccion(std::string _tipo, int _id, bool _estado, Fecha _fecha, Producto _producto)
{
    tipo = _tipo;
    id = _id;
    estado = _estado;
    fecha = _fecha;
    producto = _producto;
}

std::string Transaccion::getTipo() const
{
    return tipo;
}

int Transaccion::getId() const
{
    return id;
}

bool Transaccion::getEstado() const
{
    return estado;
}

void Transaccion::setTipo(std::string _tipo)
{
    tipo = _tipo;
}

void Transaccion::setId(int _id)
{
    id = _id;
}

void Transaccion::setEstado(bool _estado)
{
    estado = _estado;
}

void Transaccion::completarTransaccion()
{
    estado = true;
}

void Transaccion::imprimirTransaccion()
{
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Id: " << id << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Fecha: ";
    fecha.mostrarFecha();
    std::cout << std::endl;
    producto.imprimirProducto();
}