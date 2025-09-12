#include <iostream>

using namespace std;

bool esPar(int numberUser){
    if (numberUser % 2==0)
    {
         return true;
    }
    else
    {
        return false;
    }
    
}

int main(){
    int userNumber;
    bool isUserNumberPair;
    cout<<"Ingrese Numero: ";
    cin>>userNumber;
    isUserNumberPair = esPar(userNumber);
    if (isUserNumberPair)
    {
        cout<<"Numero es par"<<endl;
    }

    else
    {
        cout<<"Numero es Impar "<<endl;
    }
    
    

    return 0;
}