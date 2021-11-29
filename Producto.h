// Guardas
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>
#include "Envio.h"

class Producto
{
    private:
        std::string nombre;
        double precio;
        Envio envio;

    public:
        Producto();                         // Constructor por defecto
        Producto(std::string, double, Envio); // Constructor con parámetros
        void setNombre(std::string);
        void setPrecio(double);
        void setEnvio(Envio);
        std::string getNombre() const;
        double getPrecio() const;
        Envio getEnvio();
        void imprimirProducto();
};

#endif //PRODUCTO_H
