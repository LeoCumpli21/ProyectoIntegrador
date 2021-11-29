#ifndef ENVIO_H
#define ENVIO_H
#include <string.h>
#include <iostream>

class Envio{
    public:
        std::string transporte;
        double costo;

    private:
        Envio();
        Envio(std::string, double);
        void setTransporte(std::string);
        void setCosto(double);
        std::string getTransporte() const;
        double getCosto() const;
        void imprime();
};

#endif
