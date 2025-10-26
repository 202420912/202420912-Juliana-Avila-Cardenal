#include <iostream>
using namespace std;


int contarGuiones(string codigoProducto) {
    int contador = 0;
    for (char c : codigoProducto) {
        if (c == '-'){

            contador++;

        }
            
    }
    return contador;
}

int contarDigitos(string codigoProducto) {
    int contador = 0;
    for (char c : codigoProducto) {
        if (isdigit(c)){

             contador++;

        }
           
    }
    return contador;
}


bool validarUltimaMayuscula(string codigoProducto) {
    if (codigoProducto.empty()){

        return false; 

    } 
    char ultimo = codigoProducto[codigoProducto.length() - 1];
    return isupper(ultimo); 
}


int main() {
    string codigo;
    cout << "Ingrese el código de producto: ";
    cin >> codigo;

    int guiones = contarGuiones(codigo);
    int digitos = contarDigitos(codigo);
    bool terminaMayus = validarUltimaMayuscula(codigo);

    cout << "Leyendo el código: " << codigo << endl;
    cout << "Guiones: " << guiones << endl;
    cout << "Dígitos: " << digitos << endl;
    cout << "Termina con mayúscula: " << (terminaMayus ? "Sí " : "No ") << endl;

    return 0;
}