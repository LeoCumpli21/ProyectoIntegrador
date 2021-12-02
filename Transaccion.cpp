// Implementación de la clase Transaccion
#include "Transaccion.h"

Transaccion::Transaccion()
{
    tipo = "";
    id = 0;
    estado = false;
    fecha = Fecha();
    vendedor = Cliente();
    comprador = Cliente();
    cantProd = 0;
}

Transaccion::Transaccion(std::string _tipo, int _id, bool _estado, Fecha _fecha, Cliente _vendedor, Cliente _comprador)
{
    tipo = _tipo;
    id = _id;
    estado = _estado;
    fecha = _fecha;
    vendedor = _vendedor;
    comprador = _comprador;
    cantProd = 0;
}

std::string Transaccion::getTipo() const
{
    return tipo;
}

int Transaccion::getId() const
{
    return id;
}

bool Transaccion::getEstado() const
{
    return estado;
}

void Transaccion::setTipo(std::string _tipo)
{
    tipo = _tipo;
}

void Transaccion::setId(int _id)
{
    id = _id;
}

void Transaccion::setEstado(bool _estado)
{
    estado = _estado;
}

void Transaccion::completarTransaccion()
{
    std::cout << "Completando transaccion..." << std::endl;
    estado = true;
}

void Transaccion::agregarProducto(Producto _producto, int _cantidad)
{
    if (cantProd < MAX)
    {
        producto[cantProd] = _producto;
        cantidades[cantProd] = _cantidad;
        cantProd++;
    }
}

void Transaccion::imprimirTransaccion()
{
    std::cout << std::endl
              << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Id: " << id << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Fecha: ";
    fecha.mostrarFecha();
    std::cout << std::endl;
    vendedor.imprime();
    comprador.imprime();
    float subtotal = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (i == cantProd)
        {
            break;
        }
        subtotal = subtotal + (producto[i].getPrecio() * cantidades[i]);
        producto[i].imprimirProducto();
        std::cout << "Cantidad: " << cantidades[i] << std::endl;
    }
    std::cout << "Subtotal: " << subtotal << std::endl;
}
