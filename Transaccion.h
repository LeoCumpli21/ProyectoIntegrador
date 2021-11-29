// Guardas
#ifndef TRANSACCION_H
#define TRANSACCION_H
#include <string>
#include "Fecha.h"
#include "Producto.h"

class Transaccion
{
private:
    std::string tipo;
    int id;
    bool estado;
    Fecha fecha;
    Producto producto;

public:
    Transaccion(); //Constructor por defecto
    Transaccion(std::string, int, bool, Fecha, Producto);
    std::string getTipo() const;
    int getId() const;
    bool getEstado() const;
    void setTipo(std::string);
    void setId(int);
    void setEstado(bool);
    void completarTransaccion();
    void imprimirTransaccion();
};

#endif //PRODUCTO_H