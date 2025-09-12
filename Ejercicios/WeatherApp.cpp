#include <iostream>

using namespace std;


void weather (int temperature){
    if (temperature<15)
    {
        cout<<"Esta haciendo frio"<<endl;
    }
    else if (temperature>25)
    {
        cout<<"Esta haciendo calor"<<endl;
    }
    else
    {
        cout<<"El clima esta bien :)"<<endl;
    }
}

int main(){
    int userTemperature;
    cout<<"Ingrese valor de la temperatura: " <<endl;
    cin>>userTemperature;
    weather(userTemperature);

    return 0;
}