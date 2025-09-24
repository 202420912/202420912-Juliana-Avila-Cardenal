#include <iostream>

using namespace std;

void clasificarNumber(int number) {
    if (number ==0)
    {
        cout<<"CERO"<<endl;
    }
    else if (number>0)
    {
        cout<<"Positivo"<<endl;
    }
    else
    {
        cout<<"Negativo"<<endl;
    }
} 

int main(){
    int userNumber;
    cout<<"Ingrese numero: ";
    cin>>userNumber;
    clasificarNumber(userNumber);

    return 0;
}