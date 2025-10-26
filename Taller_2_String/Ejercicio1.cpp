#include <iostream>
using namespace std;

bool validarLongitud(string nombreUsuario) {

    return nombreUsuario.length() >= 6 && nombreUsuario.length() <= 12;
}

bool validarInicioLetra(string nombreUsuario) {
    if (nombreUsuario.empty())
    {
        return false;
    }

    else
    {
        return isalpha(nombreUsuario[0]);
    }
    
}

bool validarSinEspacios(string nombreUsuario) {
    for (char c : nombreUsuario) {

        if (isspace(c))
        {
            return false;
        }
    }
    return true;
}

int main() {
    string usuario;
    cout << "Ingrese un nombre de usuario: ";
    cin >> usuario;

    bool longitudValida = validarLongitud(usuario);
    bool inicioValido = validarInicioLetra(usuario);
    bool sinEspacios = validarSinEspacios(usuario);

    if (longitudValida && inicioValido && sinEspacios)
        cout << "El nombre es valido";
    else {
        cout << "El nombre no es valido";
        if (!longitudValida)
            cout << "- Debe tener entre 6 y 12 caracteres";
        if (!inicioValido)
            cout << "- Debe comenzar con una letra.";
        if (!sinEspacios)
            cout << "- No debe contener espacios.";
    }

    return 0;
}