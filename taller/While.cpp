#include<iostream>

    using namespace std;

    void contarAscendente(int number){
    int contador=0;
    while (contador <= number)
    {
        cout<<contador<<endl;
         contador++;
    }
 }

    void contarDescendente(int number){
    int contador=number;
    while (contador >= 0)
    {
        cout<<contador<<endl;
         contador--;
    }
 }


  int main(){
    int userNumber,ascender;
    cout<<"Ingrese Número hasta el que quiere llegar:"<<endl;
    cin>>userNumber;
    cout<<"Cuenta Ascendente: "<<endl;
    contarAscendente(userNumber);
    cout<<"Cuenta Descendente: "<<endl;
    contarDescendente(userNumber);

    return 0;
}