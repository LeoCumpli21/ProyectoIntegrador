// Guardas
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>

class Producto
{
private:
    std::string nombre;
    int cantidad;
    double precio;

public:
    Producto();                         // Constructor por defecto
    Producto(std::string, int, double); // Constructor con parámetros
    void setNombre(std::string);
    void setCantidad(int);
    void setPrecio(double);
    std::string getNombre() const;
    double getPrecio() const;
    int getCantidad() const;
};

#endif //PRODUCTO_H