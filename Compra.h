// Guardas
#ifndef COMPRA_H
#define COMPRA_H
#include <string>
#include "Transaccion.h"
#include "Producto.h"

class Compra : public Transaccion
{
private:
    Producto producto;
    std::string vendedor;
    std::string cliente;

public:
    Compra();
    Compra(int, bool, Producto, std::string, std::string);
    void setProducto(Producto);
    void setVendedor(std::string);
    void setcliente(std::string);
    Producto getProducto() const;
    std::string getVendedor() const;
    std::string getCliente() const;
    void completarCompra();
};

#endif //COMPRA_H