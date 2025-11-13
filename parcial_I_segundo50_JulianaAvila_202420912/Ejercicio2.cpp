#include<iostream>

using namespace std;

void forWithArrays(float minima, float maxima){

    string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga","Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

    float promedio;
    float totalSum = 0;

        for (int i=0; i<10; i++){ 

        float temperature = temperaturas[i];
        string city = ciudades[i];

        totalSum += minima + maxima;
        promedio = totalSum/ temperature;
        
        if (temperature >= minima && temperature <= maxima)
        {
            cout <<temperature <<"-" << city <<endl;
        }
    }
        cout << "---------------------" << endl;
        cout << "el promedio es: "<<promedio << endl;
}

int main(){

    float userMin;
    float userMax;
    cout <<"Ingrese tempreatura maxima: ";
    cin >> userMax;
    cout << "Ingrese temperatura minima: ";
    cin >> userMin;

    forWithArrays(userMin, userMax);

    return 0;
}

