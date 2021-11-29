#ifndef CLIENTE_H
#define CLIENTE_H
#include <string.h>
#include <iostream>

class Cliente
{
private:
    std::string empresa;
    int idCliente;

public:
    Cliente();
    Cliente(std::string, int);
    void setEmpresa(std::string);
    void setIdCliente(int);
    std::string getEmpresa() const;
    int getIdCliente() const;
    void imprime();
};

#endif
