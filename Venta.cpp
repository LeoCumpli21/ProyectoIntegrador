// Implementaicón de la clase Venta
#include "Venta.h"

Venta::Venta()
{
    producto = Producto();
    vendedor = "";
    cliente = "";
}

Venta::Venta(std::string _vendedor, std::string _cliente)
{
    vendedor = _vendedor;
    cliente = _cliente;
}

void setProducto(Producto _producto)
{
    producto = _producto;
}

void setVendedor(std::string _vendedor)
{
    vendedor = _vendedor;
}

void setCliente(std::string _cliente)
{
    cliente = _cliente;
}

Producto getProducto()
{
    return Producto;
}

str::string getVendedor()
{
    return vendedor;
}

std::string getCliente()
{
    return cliente;
}
