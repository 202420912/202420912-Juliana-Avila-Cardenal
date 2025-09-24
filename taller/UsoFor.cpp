#include <iostream>

using namespace std;

    void mostrarTabla (int number){
        int result;

         for (int i = 0; i<=number; i++)
        {
            result = i*number;
            cout<<i<<" * "<<number<<" = "<<result<<endl;
        }
        
    }

    int main(){
    int userNumber;
    cout<<"Ingrese numero al que quiere llegar: ";
    cin>>userNumber;
    cout<<"La tabla es: "<<endl;
    mostrarTabla(userNumber);

    return 0;
    }