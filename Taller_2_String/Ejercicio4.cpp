#include <iostream>
using namespace std;

int contarPalabras(string frase) {
    int contador = 0;
    bool dentroPalabra = false;

    for (int i = 0; i < frase.length(); i++) {

        char c = frase[i];
        if (c != ' ' && !dentroPalabra)
         {
            dentroPalabra = true;
            contador++;
        } 
        else if (c == ' ') 
        {
            dentroPalabra = false;
        }
    }
    return contador;
}

int contarPuntuacion(string frase) {
    int contador = 0;
    for (int i = 0; i < frase.length(); i++) {
        
        char c = frase[i];
        
        if (c == '.' || c == ',' || c == ';' || c == ':' ||
            c == '!' || c == '?' || c == '"' || c == '\'' ||
            c == '(' || c == ')' || c == '-' ) {

            contador++;
        }
    }
    return contador;
}

bool terminaEnPunto(string frase) {
    int i = frase.length() - 1;
    
    while (i >= 0 && frase[i] == ' ') {
        i--;
    }
    if (i >= 0 && frase[i] == '.') {
        return true;
    } 
    else
    {
        return false;
    }
}

int main() {

    string frase;

    cout << "Ingrese una frase: ";
    getline(cin, frase);

    cout << "Cantidad de palabras: " << contarPalabras(frase) << endl;
    cout << "Cantidad de signos de puntuacion: " << contarPuntuacion(frase) << endl;
    cout << "¿Termina en punto?: " << (terminaEnPunto(frase) ? "Sí" : "No") << endl;

    return 0;
}