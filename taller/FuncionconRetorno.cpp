#include<iostream>

    using namespace std;

    int mayor(int firstNumber,int secondNumber){
    if (firstNumber > secondNumber)
    {
         return firstNumber;
    }
    else
    {
        return secondNumber;
    }
    
}
int main(){
    int userNumber1, userNumber2 ;
    int mayorQue;
    cout<<"Ingrese Numero 1: ";
    cin>>userNumber1;
    cout<<"Ingrese Numero 2: ";
    cin>>userNumber2;

    mayorQue = mayor(userNumber1, userNumber2);
    cout<<"El mayor es: "<<mayorQue<< endl;

    return 0;
}