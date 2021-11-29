// Guardas
#ifndef TRANSACCION_H
#define TRANSACCION_H
#include <string>

class Transaccion
{
private:
    int id;
    bool estado;
    std::string tipo;

public:
    Transaccion();    //Constructor por defecto
    Transaccion(int); //Constructor con parámetros
    int getId() const;
    bool getEstado() const;
    void setId(int);
    void setEstado(bool);
    void completarTransaccion();
};

#endif //PRODUCTO_H