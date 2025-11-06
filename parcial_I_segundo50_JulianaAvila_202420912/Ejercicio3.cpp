#include<iostream>

using namespace std;

void forWithArrays(string city){
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};
    
    float sumMult;

     for (int i=0; i<6; i++)
    {
        string plac = placas[i];
        float mult = multas[i];
        string place = ciudades [i];

        if (place == city)
        {
            cout << plac <<" la multa es de: " << mult <<endl;
             sumMult += mult;
        }
        
    }
    
    cout <<"Total de multas en " <<city <<": "<<endl;
    cout <<sumMult <<endl;
}

int main(){

    string userCity;
    cout << "Ingrese la ciudad: ";
    cin >> userCity;

    cout << "Multas registradas: " <<endl;
    forWithArrays(userCity);

    return 0;
}

