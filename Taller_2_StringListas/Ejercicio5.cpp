#include<iostream>

using namespace std;

void forWithArrays(){
    string nombres[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"}; 
    int edades[5] = {20,16, 22, 15, 19};

      for (int i=0; i<5; i++)
    {
        string arrayValue =nombres[i];
        int ages = edades[i];


        if (ages >= 18)
        {
            cout <<arrayValue <<" Es mayor de edad"<<endl;
        }
        
    }
}

int main(){

    forWithArrays();

    return 0;
}
