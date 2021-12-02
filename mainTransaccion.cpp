#include "Producto.h"
#include "Transaccion.h"
using namespace std;

int main()
{
    // Prueba crear transacción sin inputs del usuario
    Cliente vendedor1("Miguel", 001);
    Cliente comprador1("Leo", 002);
    Fecha hoy(29, 11, 21);
    Envio envio1("FedEx", 200);
    Producto producto1("Escritorio", 250, envio1);
    Transaccion transaccion1("Venta", 001, false, hoy, vendedor1, comprador1);
    transaccion1.agregarProducto(producto1, 3);
    transaccion1.imprimirTransaccion();

    // Completamos la transacción
    transaccion1.completarTransaccion();
    // Imprimimos el estado de la transacción
    cout << "Estado de la transaccion: " << transaccion1.getEstado() << endl
         << endl;

    // Prueba crear transacción con inputs del usuario
    Cliente vendedor2;
    Cliente comprador2;
    Fecha hoy2(01, 12, 21);
    Envio envio2;
    Producto producto2;

    string nombreVendedor;
    string nombreComprador;
    string nombreEnvio;
    string nombreProducto;
    float precio;
    int cantidad;

    // pedimos los datos al usuario
    cout << "Ingrese el nombre del vendedor: ";
    cin >> nombreVendedor;
    vendedor2.setEmpresa(nombreVendedor);
    cout << "Ingrese el nombre del comprador: ";
    cin >> nombreComprador;
    comprador2.setEmpresa(nombreComprador);
    cout << "Ingrese el nombre del transporte del envio: ";
    cin >> nombreEnvio;
    envio2.setTransporte(nombreEnvio);
    cout << "Ingrese el nombre del producto: ";
    cin >> nombreProducto;
    producto2.setNombre(nombreProducto);
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    producto2.setPrecio(precio);
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;

    // completamos algunos datos de los objetos
    producto2.setEnvio(envio2);
    vendedor2.setIdCliente(003);
    comprador2.setIdCliente(004);

    cout << "Creando transaccion..." << endl;

    // Creamos la transacción
    Transaccion transaccion2("Compra", 002, false, hoy2, vendedor2, comprador2);
    transaccion2.agregarProducto(producto2, cantidad);
    transaccion2.imprimirTransaccion();

    // Completamos la transacción
    transaccion2.completarTransaccion();
    // Imprimimos el estado de la transacción
    cout << "Estado de la transaccion: " << transaccion2.getEstado() << endl
         << endl;

    return (0);
}
