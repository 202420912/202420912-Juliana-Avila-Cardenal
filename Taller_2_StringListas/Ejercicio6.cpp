#include<iostream>

using namespace std;

void forWithArrays(){
    string productos[6] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
    float precios[6] = {1500, 2300, 1800, 3100, 2700, 2600};
    cout<<"Valor productos: " <<endl;

    float preciosSum =0;
    float maximo= precios[0];
    float minimo= precios[0];

    for (int i=0; i<3; i++)
    {
        string arrayValue =productos[i];
        float productPrices = precios[i];
        cout<<arrayValue <<" cuesta "<<productPrices<<endl;

        preciosSum += productPrices;

          if (productPrices > maximo)
        {
            maximo = productPrices;
        }

        else if(productPrices < minimo)
        {
            minimo = productPrices;
        }
        
    }

    cout<<"-----------------------------------------"<<endl;
    cout<<"El numero maximo es: " <<maximo<<endl;
    cout <<"El numero minimo es: "<<minimo <<endl;
    cout<<"Suma total: " <<preciosSum <<endl;

    
}

int main(){

    forWithArrays();

    return 0;
}