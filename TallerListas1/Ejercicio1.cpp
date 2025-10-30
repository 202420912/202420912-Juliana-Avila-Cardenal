#include<iostream>

using namespace std;

void forWithArrays(){
    string employees[4] = {"Ana", "Luis", "María", "Pedro"};

    for (int i=0; i<4; i++)
    {
        cout<<"contador en: "<<i <<endl;
        string arrayValue = employees[i];
        cout<<"El valor en la lista es: " <<arrayValue <<endl;
    }
}

int main(){

    forWithArrays();

    return 0;
}