// Guardas
#ifndef VENTA_H
#define VENTA_H
#include <string>
#include "Transaccion.h"
#include "Producto.h"

class Venta : public Transaccion
{
private:
    Producto producto;
    std::string vendedor;
    std::string cliente;

public:
    Venta();
    Venta(std::string, std::string);
    void setProducto(Producto);
    void setVendedor(std::string);
    void setCliente(std::string);
    Producto getProducto() const;
    std::string getVendedor() const;
    std::string getCliente() const;
};

#endif //VENTA_H