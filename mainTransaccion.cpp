#include "Producto.h"
#include "Transaccion.h"

int main(){
    Cliente vendedor1("Miguel", 001);
    Cliente comprador1("Leo", 002);
    Fecha hoy(29, 11, 21);
    Envio envio1("FedEx", 200);
    Producto producto1("Escritorio", 250, envio1);
    Transaccion transaccion1("Venta", 001, false, hoy, vendedor1, comprador1);
    transaccion1.agregarProducto(producto1, 3);
    transaccion1.imprimirTransaccion();

    return(0);
}
