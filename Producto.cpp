// Implementación de la clase Producto
#include "Producto.h"
#include "Envio.h"

Producto::Producto()
{
    nombre = "";
    precio = 0;
}

Producto::Producto(std::string _nombre, double _precio, Envio _envio)
{
    nombre = _nombre;
    precio = _precio;
    envio = _envio;
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

Envio Producto::getEnvio()
{
    return envio;
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
