#include<iostream>

using namespace std;

int main() {
    string userName;
    int userValue1;

    // Entrada por teclado
    cout << "Ingrese un numero: ";
    cin >> userValue1;

    cout << "Ingrese su nombre: ";
    cin >> userName;

    // Salida por consola
    cout << "Bienvenido: " << userName << endl;
    cout << "Usted ingreso el valor: " << userValue1 << endl;

    return 0;
}