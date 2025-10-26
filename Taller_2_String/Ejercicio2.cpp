#include <iostream>
using namespace std;


int contarVocales(string texto) {
    int contador = 0;
    for (char c : texto) {

        c = tolower(c);  

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){

            contador++;
        }
            
    }
    return contador;
}

int contarConsonantes(string texto) {
    int contador = 0;
    for (char c : texto) {
        if (isalpha(c)) {  

            c = tolower(c);

            if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){

                 contador++;

            }
               
        }
    }
    return contador;
}

int contarNoAlfabeticos(string texto) {
    int contador = 0;
    for (char c : texto) {

        if (!isalpha(c)){
           
              contador++;

        }
          
    }
    return contador;
}


int main() {
    string texto;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);  

    int vocales = contarVocales(texto);
    int consonantes = contarConsonantes(texto);
    int noAlfabeticos = contarNoAlfabeticos(texto);

    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
    cout << "No alfabéticos: " << noAlfabeticos << endl;

    return 0;
}