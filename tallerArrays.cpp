#include<iostream>

using namespace std;

int getUserAction() {
    int userAction;
    cout << "-----------------------------" << endl;
    cout << "Por favor seleccione: "<<endl;
    cout << "1.Registrar o reiniciar ventas: " << endl;
    cout << "2.Mostrar todas las ventas." << endl;
    cout << "3.Modificar el valor de una venta específica." << endl;
    cout << "4.Buscar una venta por nombre." << endl;
    cout << "5.Mostrar ventas dentro de un rango de precios." << endl;
    cout <<"6. Calcular el total de ventas."<<endl;
    cout <<"7. Salir del programa."<<endl;
    cout << "Ingrese un valor: ";
    cin >> userAction;
    cout << "-----------------------------" << endl;
    return userAction;
}

void getNewSales(string*& nombres, int*& valores, int& cantidad){
    cout << "Ingrese el número de ventas a registrar: ";
    cin >> cantidad;
    
    delete[] nombres;
    delete[] valores;
    nombres = new string[cantidad];
    valores = new int[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre de la venta : " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Valor de la venta : " << i + 1 << ": ";
        cin >> valores[i];
    }
    cout << "Ventas registradas correctamente." << endl;
}

void printSales(string nombres[], int valores[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
   }

    cout << "--- Lista de Ventas ---" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << i + 1 << ". " << nombres[i] << " - $" << valores[i] << endl;
    }
}

void modifySale(string nombres[], int valores[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    string nombre;
    cout << "Ingrese el nombre de la venta a modificar: ";
    cin >> nombre;

    bool encontrado = false;
    for (int i = 0; i < cantidad; i++) {
        if (nombres[i] == nombre) {
            cout << "Ingrese el nuevo valor: ";
            cin >> valores[i];
            cout << "Valor modificado correctamente." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "Venta no encontrada." << endl;
}

void findSale(string nombres[], int valores[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    string nombre;
    cout << "Ingrese el nombre de la venta a buscar: ";
    cin >> nombre;

    bool encontrado = false;
    for (int i = 0; i < cantidad; i++) {
        if (nombres[i] == nombre) {
            cout << "Venta encontrada: " << nombres[i] << " - $" << valores[i]
                 << " (posición " << i + 1 << ")" << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "Venta no encontrada." << endl;
}

void salesInRange(string nombres[], int valores[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    int min, max;
    cout << "Ingrese el valor mínimo: ";
    cin >> min;
    cout << "Ingrese el valor máximo: ";
    cin >> max;

    cout << "\nVentas entre $" << min << " y $" << max << ":" << endl;
    bool encontrado = false;
    for (int i = 0; i < cantidad; i++) {
        if (valores[i] >= min && valores[i] <= max) {
            cout << nombres[i] << " - $" << valores[i] << endl;
            encontrado = true;
        }
    }

    if (!encontrado)
        cout << "No se encontraron ventas en ese rango." << endl;
}

void calculateTotal(int valores[], int cantidad) {
    if (cantidad == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    int total = 0;
    for (int i = 0; i < cantidad; i++) {
        total += valores[i];
    }
    cout << "El total de todas las ventas es: $" << total << endl;
}


void run() {
    bool continuar = true;
    int cantidad = 0;
    string* nombres = nullptr;
    int* valores = nullptr;

    while (continuar) {
        int opcion = getUserAction();

        switch (opcion) {
            case 1:
                getNewSales(nombres, valores, cantidad);
                break;
            case 2:
                printSales(nombres, valores, cantidad);
                break;
            case 3:
                modifySale(nombres, valores, cantidad);
                break;
            case 4:
                findSale(nombres, valores, cantidad);
                break;
            case 5:
                salesInRange(nombres, valores, cantidad);
                break;
            case 6:
                calculateTotal(valores, cantidad);
                break;
            case 7:
                cout << "Saliendo del programa..." << endl;
                continuar = false;
                break;
            default:
                cout << "Opción no válida." << endl;
                break;
        }
    }

    delete[] nombres;
    delete[] valores;
}


int main() {
    run();
    return 0;
}