#include<iostream>

    using namespace std;

    int main() {

        //  imprimir los numeros del 0 al 10
        for (int i = 1; i <= 10; i++) 
        {
            cout << "Tabla del: " << i  << endl;

            for (int j = 1; j <= 10; j++)
            {
                int multResult = i * j;
                cout << i << " * " <<j <<" = " <<multResult <<endl;

            }
            
        }
        
        
        

    return 0;
}