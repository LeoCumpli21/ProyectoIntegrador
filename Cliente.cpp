#include "Cliente.h"
#include <iostream>
#include <ostream>

Cliente::Cliente(){
    empresa = "";
    idCliente = 0;
}

Cliente::Cliente(std::string _empresa, int _idCliente){
    empresa = _empresa;
    idCliente = _idCliente;
}

void Cliente::setEmpresa(std::string _empresa){
    empresa = _empresa;
}

void Cliente::setIdCliente(int _id){
    idCliente = _id;
}

std::string Cliente::getEmpresa() const{
    return empresa;
}

int Cliente::getIdCliente() const{
    return idCliente;
}

void Cliente::imprime(){
    std::cout << "Nombre del Cliente: " << empresa << std::endl;
    std::cout << "Numero de Identificacion " << idCliente+1 << std::endl;
}
