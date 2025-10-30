#include<iostream>

using namespace std;

void forWithArrays(){
    int numbers[6] = {8, 12, 5, 20, 7, 15};

    for (int i=0; i<6; i++)
    {
        int arrayValue = numbers[i];
        cout<<"El valor en la lista es: " <<arrayValue <<endl;
    }

    int maximo= numbers[0];
     for (int i = 0; i < 6; i++)
     {
        if (numbers[i] > maximo)
        {
            maximo = numbers[i];
        }
        
     }

     cout<<"El numero maximo es: " <<maximo<<endl;
     

}

int main(){

    forWithArrays();

    return 0;
}