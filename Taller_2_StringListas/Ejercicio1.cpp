#include<iostream>

using namespace std;

void forWithString(){
    cout <<"------------------------------------------"<<endl;
    string palabra = "Programacion en C++";
    cout<<" Programacion en C++" <<endl;
    cout << "Tiene "<< palabra.size() <<" caracteres" <<endl;
    cout << "-------------------------------------------" <<endl;

    int contador=0;
    
    for (int i = 0; i < palabra.size(); i++)
    {
        char textCharter = palabra[i];
        if (textCharter != ' ')
        {
            contador ++;

        }
        
    }

    cout <<"Y tiene "<< contador <<" sin Espacios" <<endl;
}

int main(){
    forWithString();

    return 0;
}