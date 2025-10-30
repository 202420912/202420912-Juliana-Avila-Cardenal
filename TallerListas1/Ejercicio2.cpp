#include<iostream>

using namespace std;

void forWithArrays(){

    float grades[5] = {3.5, 4.0, 2.8, 3.9, 4.2};

    float gradesSum = 0;
    float promedio;

    for (int i=0; i<5; i++)
    {
        float arrayValue = grades[i];
        gradesSum += arrayValue;
        cout<<"El valor en la lista es: " <<arrayValue <<endl;

        promedio= gradesSum / grades[i];
    }
    cout << "---------------------" << endl;
    cout << "el promedio es: "<<promedio << endl;
}

int main(){

    forWithArrays();

    return 0;
}