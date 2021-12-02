#include "Producto.h"
#include "Transaccion.h"
using namespace std;

Transaccion crearTransaccion(int &acum) {
    Cliente vendedor;
    Cliente comprador;
    Fecha hoy(01, 12, 21);
    Envio envio;
    Producto producto;

    //Initializar variables para crear objeto Transaccion
    string nombreVendedor;
    string nombreComprador;
    string nombreEnvio;
    string nombreProducto;
    string tipoTransaccion;
    string metodoEnvio;
    double costoEnvio;
    float precio;
    int cantidad;


    // pedimos los datos al usuario
    cout << "Ingrese el tipo de transaccion: ";
    cin >> tipoTransaccion;
    cout << "Ingrese el nombre del vendedor: ";
    cin >> nombreVendedor;
    vendedor.setEmpresa(nombreVendedor);
    cout << "Ingrese el nombre del comprador: ";
    cin >> nombreComprador;
    comprador.setEmpresa(nombreComprador);
    cout << "Ingrese el nombre del transporte del envio: ";
    cin >> nombreEnvio;
    envio.setTransporte(nombreEnvio);
    cout << "Ingrese el nombre del producto: ";
    cin >> nombreProducto;
    producto.setNombre(nombreProducto);
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    producto.setPrecio(precio);
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << "Ingrese el metodo de envio: ";
    cin >> metodoEnvio;
    envio.setTransporte(metodoEnvio);
    cout << "Ingrese el costo de envio: ";
    cin >> costoEnvio;
    envio.setCosto(costoEnvio);


    producto.setEnvio(envio);

    cout << "Creando transaccion..." << endl;

    // Creamos la transacción
    Transaccion transaccion(tipoTransaccion, acum+1, false, hoy, vendedor, comprador);
    transaccion.agregarProducto(producto, cantidad);
    transaccion.imprimirTransaccion();

    return transaccion;
}

void listarTransacciones(int &acum, Transaccion _transacciones[]){
    cout << "Transacciones Registradas: ";
    for (int i = 0; i < acum; i++) {
        _transacciones[i].imprimirTransaccion();
    }
}

void imprimirTransaccionEspecifico(Transaccion _transacciones[]){
    int transaccion;
    cout << "Ingrese el ID del transaccion a imprimir: " << endl;
    cin >> transaccion;
    _transacciones[transaccion-1].imprimirTransaccion();
}

void completarTransaccion(Transaccion _transacciones[]){
    int transaccion;
    cout << "Ingrese el ID del transaccion a completar: " << endl;
    cin >> transaccion;
    _transacciones[transaccion-1].completarTransaccion();
    _transacciones[transaccion-1].imprimirTransaccion();
}

int main() {
    Transaccion transacciones[100];
    int opcion = 0;
    int acum = 0;

    do {
        cout << endl;
        cout << "Menu de Transacciones" << endl;
        cout << "Que desea hacer: " << endl;
        cout << "1. Agregar una transaccion" << endl;
        cout << "2. Ver todas las transacciones" << endl;
        cout << "3. Ver transaccion especifica" << endl;
        cout << "4. Completar transaccion" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;

        if (opcion == 1) {
            transacciones[acum] = crearTransaccion(acum);
            acum ++;
        }
        else if (opcion == 2) {
            listarTransacciones(acum, transacciones);
        }
        else if (opcion == 3) {
            imprimirTransaccionEspecifico(transacciones);
        }
        else if (opcion == 4) {
            completarTransaccion(transacciones);
        }
    }while (opcion != 5);
}
