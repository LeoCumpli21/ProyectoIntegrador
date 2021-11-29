// Guardas
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>

class Producto
{
private:
    std::string nombre;
    double precio;

public:
    Producto();                         // Constructor por defecto
    Producto(std::string, double); // Constructor con parámetros
    void setNombre(std::string);
    void setPrecio(double);
    std::string getNombre() const;
    double getPrecio() const;
    void imprimirProducto();
};

#endif //PRODUCTO_H
