#include<iostream>

using namespace std;

int main() {
    string userName;
    int userValue1;
    double estature;

    cout << "Ingrese su nombre: ";
    cin >> userName;
    
    cout << "Ingrese Su edad: ";
    cin >> userValue1;

    cout << "Ingrese Su Estatura: ";
    cin >> estature;

    
    // Salida por consola
    cout << "Hola " << userName << " Tienes "<<userValue1<<" años, y mides "<<estature<<endl;

    return 0;
}