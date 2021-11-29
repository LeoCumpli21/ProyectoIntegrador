#ifndef CLIENTE_H
#define CLIENTE_H
#include <string.h>
#include <iostream>

class Cliente{
    public:
        std::string empresa;
        int idCliente;

    private:
        Cliente();
        Cliente(std::string, int);
        void setEmpresa(std::string);
        void setIdCliente(int);
        std::string getEmpresa() const;
        int getIdCliente() const;
        void imprime();
};

#endif
