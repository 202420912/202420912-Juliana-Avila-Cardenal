#include<iostream>

using namespace std;

void forWithArrays(){

    int edades[6] = {18, 21, 25, 30, 27, 22};
    int agesSum = 0;
    int promedio;

    for (int i=0; i<6; i++)
    {
        int arrayValue = edades[i];
        agesSum += arrayValue;
        cout<<"Su edad es: " <<arrayValue <<endl;

        promedio= agesSum / edades[i];
    }
    cout << "---------------------" << endl;
    cout << "La edad promedio es: "<<promedio << endl;
}

int main(){

    forWithArrays();

    return 0;
}