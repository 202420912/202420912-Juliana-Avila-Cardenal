#include<iostream>

using namespace std;

bool validarLongitud(string password){
    
    if (password.length() < 8)
    {
        cout << "Contraseña no valida, debe tener al menos 8 caracteres";

        return false;
    }
    else
    {
        return true;
    }
}

bool validarCharters (string password) { 
    
    int contador = 0;
    int min3= 3;

    for (int i = 0; i < password.size(); i++){
        char letter = password[i];
        if (letter >= '!' && letter <= '/')
        {
            contador ++;
        }
    }

    if (contador >= 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}        

bool validarMayus(string password){

    bool containmayus = false; 
     
    for (int i = 0; i < password.size(); i++){ 

     char mayus = password[i];
        if ( mayus >= 'A' && mayus <= 'Z')
        {
            containmayus = true;
        }
    } 

   return containmayus;

}

bool validarMinus(string password){

    bool containminus = false; 
     
    for (int i = 0; i < password.size(); i++){ 

     char minus = password[i];
        if ( minus >= 'A' && minus <= 'Z')
        {
            containminus = true;
        }
    } 

   return containminus;

}



int main() {

    validarCharters("asd!$#");
    if (validarMayus("maAAA"))
    {
        cout << "Mayusculas validas";
    }
    else
    {
        cout << "Sin mayusculas";
    }

    return 0;
}
    

    


