// Implementación de la clase Producto
#include "Producto.h"

Producto::Producto()
{
    nombre = "";
    cantidad = 0;
    precio = 0;
}

Producto::Producto(std::string _nombre, int _cantidad, double _precio)
{
    nombre = _nombre;
    cantidad = _cantidad;
    precio = _precio;
}

// Métodos de acceso o getters
std::string Producto::getNombre() const
{
    return nombre;
}

double Producto::getPrecio() const
{
    return precio;
}

int Producto::getCantidad() const
{
    return cantidad;
}

// Métodos de modificación o setters
void Producto::setNombre(std::string _nombre)
{
    nombre = _nombre;
}

void Producto::setCantidad(int _cantidad)
{
    cantidad = _cantidad;
}

void Producto::setPrecio(double _precio)
{
    precio = _precio;
}
