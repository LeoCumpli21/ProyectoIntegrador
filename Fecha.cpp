#include <iostream>
#include "Fecha.h"

Fecha::Fecha()
{
    dia = 1;
    mes = 1;
    anio = 1970;
}

Fecha::Fecha(int d, int m, int a)
{
    dia = d;
    mes = m;
    anio = a;
}

int Fecha::getDia() const
{
    return dia;
}

int Fecha::getMes() const
{
    return mes;
}

int Fecha::getAnio() const
{
    return anio;
}

void Fecha::setDia(int d)
{
    dia = d;
}

void Fecha::setMes(int m)
{
    mes = m;
}

void Fecha::setAnio(int a)
{
    anio = a;
}

void Fecha::mostrarFecha()
{
    if (dia < 10)
        std::cout << "0";
    std::cout << dia << "/";
    if (mes < 10)
        std::cout << "0";
    std::cout << mes << "/" << anio;
}
