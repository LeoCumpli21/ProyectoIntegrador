#ifndef FECHA_H
#define FECHA_H

class Fecha
{
private:
    int dia;
    int mes;
    int anio;

public:
    Fecha();
    Fecha(int, int, int);
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    void mostrarFecha();
};

#endif // FECHA_H