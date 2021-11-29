// Implementación de la clase Producto
#include "Producto.h"

Producto::Producto()
{
    nombre = "";
    precio = 0;
}

Producto::Producto(std::string _nombre, double _precio)
{
    nombre = _nombre;
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

// Métodos de modificación o setters
void Producto::setNombre(std::string _nombre)
{
    nombre = _nombre;
}

void Producto::setPrecio(double _precio)
{
    precio = _precio;
}

void Producto::imprimirProducto(){
    std::cout << "Producto: " << nombre << " - " << "Precio: " << precio << std::endl;
}
