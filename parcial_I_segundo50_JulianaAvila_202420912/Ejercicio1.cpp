#include <iostream>
using namespace std;

int contarPalabras(string frase) {
    int contador = 0;
    bool dentro = false;

    for (int i = 0; i < frase.length(); i++)
     {

        char  letter = frase[i];
        if (letter != ' ' && !dentro)
         {
            dentro = true;
            contador++;
        } 
        else if (letter == ' ') 
        {
            dentro = false;
        }
    }
    return contador;
}



 int main(){

    string frase;

    cout << "Ingrese una frase: ";
    getline(cin, frase);

    cout << "Cantidad de palabras: " << contarPalabras(frase) << endl;

    return 0;
 }