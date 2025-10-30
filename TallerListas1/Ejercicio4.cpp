#include<iostream>

using namespace std;

void forWithArrays(){
    int values[8] = {2, 5, 7, 8, 10, 13, 16, 19};
    int contador=0;

    for (int i=0; i<8; i++)
    {
        int arrayValue = values[i];
        
        if (arrayValue %2 == 0)
        {
            cout<< arrayValue <<" es par"<<endl;

            contador ++;
        }
    }

    cout<<"hay numeros pares:" <<contador <<endl;
 }


int main(){

    forWithArrays();

    return 0;
}