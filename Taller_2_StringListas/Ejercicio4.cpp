#include<iostream>

using namespace std;

void forWithArrays(){
    float precios[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};

    float maximo= precios[0];
    float minimo= precios[0];
    float pricesSum = 0;
     for (int i = 0; i < 6; i++)
     {
        float arrayValue = precios[i];
        pricesSum += arrayValue;
        if (arrayValue > maximo)
        {
            maximo = arrayValue;
        }

        else if(arrayValue < minimo)
        {
            minimo = arrayValue;
        }
        
     }

     cout<<"El numero maximo es: " <<maximo<<endl;
     cout <<"El numero minimo es: "<<minimo <<endl;
     cout<<"Suma total: " <<pricesSum <<endl;

}

int main(){

    forWithArrays();

    return 0;
}