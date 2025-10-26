#include <iostream>
using namespace std;

bool tieneDigito(string codigoAcceso) {
    for (int i = 0; i < codigoAcceso.length(); i++) {

        char c = codigoAcceso[i];

        if (c >= '0' && c <= '9') 
        {
            return true;
        }
    }
    return false;
}


bool tieneSimboloEspecial(string codigoAcceso) {
    for (int i = 0; i < codigoAcceso.length(); i++) {

        char c = codigoAcceso[i];
        
        if (c == '@' || c == '#' || c == '$' || c == '%') 
        {
            return true;
        }
    }
    return false;
}


bool sinEspacios(string codigoAcceso) {
    for (int i = 0; i < codigoAcceso.length(); i++) {
        if (codigoAcceso[i] == ' ')
         {
            return false;
        }
    }
    return true;
}

int main() {

    string codigo;

    cout << "Ingrese el codigo de acceso: ";
    getline(cin, codigo);

    bool digito = tieneDigito(codigo);
    bool simbolo = tieneSimboloEspecial(codigo);
    bool sinEspacio = sinEspacios(codigo);

    cout << endl;
    cout << "Contiene al menos un dígito: " << (digito ? "Sí" : "No") << endl;
    cout << "Contiene símbolo especial (@, #, $, %): " << (simbolo ? "Sí" : "No") << endl;
    cout << "No contiene espacios: " << (sinEspacio ? "Sí" : "No") << endl;

    if (digito && simbolo && sinEspacio) 
    {
        cout << " Código de acceso válido." << endl;
    } 
    else
    {
        cout << " Código de acceso inválido." << endl;
    }

    return 0;
}