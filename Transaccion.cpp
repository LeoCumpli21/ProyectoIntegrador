// Implementación de la clase Transaccion
#include "Transaccion.h"

Transaccion::Transaccion()
{
    id = 0;
    estado = false;
    tipo = "";
}

Transaccion::Transaccion(int _id)
{
    id = _id;
    estado = false;
}

int Transaccion::getId() const
{
    return id;
}

bool Transaccion::getEstado() const
{
    return estado;
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
    estado = true;
}