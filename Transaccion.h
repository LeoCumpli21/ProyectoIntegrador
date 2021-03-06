// Guardas
#ifndef TRANSACCION_H
#define TRANSACCION_H
#include <string>
#include "Fecha.h"
#include "Producto.h"
#include "Cliente.h"
const int MAX = 10;

class Transaccion
{
private:
    std::string tipo;
    int id;
    bool estado;
    Fecha fecha;
    Producto producto[MAX];
    int cantidades[MAX];
    int cantProd;
    Cliente vendedor;
    Cliente comprador;

public:
    Transaccion(); //Constructor por defecto
    Transaccion(std::string, int, bool, Fecha, Cliente, Cliente);
    std::string getTipo() const;
    int getId() const;
    bool getEstado() const;
    void setTipo(std::string);
    void setId(int);
    void setEstado(bool);
    void completarTransaccion();
    void imprimirTransaccion();
    void agregarProducto(Producto, int);
};

#endif //PRODUCTO_H
