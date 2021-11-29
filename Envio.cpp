#include "Envio.h"

Envio::Envio(){
    transporte = "";
    costo = 0;
}

Envio::Envio(std::string _transporte, double _costo){
    transporte = _transporte;
    costo = _costo;
}

void Envio::setTransporte(std::string _transporte){
    transporte = _transporte;
}

void Envio::setCosto(double _costo){
    costo = _costo;
}

std::string Envio::getTransporte() const{
    return transporte;
}
double Envio::getCosto() const{
    return costo;
}
