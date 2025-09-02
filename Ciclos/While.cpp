#include<iostream>

    using namespace std;

    int main() {
        int playerUne, playerTwo ;
        cout << "Ingrese número para Adivinar: ";

        while (playerTwo != playerUne)
        {
            cin>> playerUne;

            cout<<"Cual crees que es el número: ";
             cin>> playerTwo;

            if (playerTwo > playerUne)
            {
                 cout<< "Te pasaste ";
            }

            else if (playerTwo < playerUne)
            {
                cout << "Te falta un poco ";
            }
            
    
            
        }
        

    }