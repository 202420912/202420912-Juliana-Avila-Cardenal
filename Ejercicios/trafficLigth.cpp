#include <iostream>

using namespace std;

void trafficLigth(string signal) {
    if (signal =="rojo")
    {
        cout<<"Stop :/"<<endl;
    }
    else if (signal =="Amarillo")
    {
        cout<<"Preparese para avanzar"<<endl;
    }
    else if (signal == "Verde")
    {
        cout<<"GOOO!!"<<endl;
    }
    else
    {
        cout<<"El color que ingreso no es Valido" <<endl;
    }
}

int main(){
    string colorLigth;
    cout<<"Ingrese el color que ve: ";
    cin>>colorLigth;
    trafficLigth(colorLigth);

    return 0;
}




