#include<iostream>

using namespace std;

void forWithArrays(){
    string products[3] = {"Pan", "Leche", "Queso"}; 
    float prices[3] = {1500, 3200, 4800};
    cout<<"Valor productos: " <<endl;

    for (int i=0; i<3; i++)
    {
        string arrayValue =products[i];
        float productPrices = prices[i];
        cout<<arrayValue <<" cuesta "<<productPrices<<endl;
    }
}

int main(){

    forWithArrays();

    return 0;
}