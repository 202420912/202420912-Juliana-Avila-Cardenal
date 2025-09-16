#include <iostream>

using namespace std;

bool maintenance(int paper, int intervalo){
    if (paper % intervalo ==0)
    {
        return true;
    }
    
    else
    {
        return false;
    }
    
}

int main(){
    int produced, maintenancePaper;
    cout << "Ingrese la cantidad de hojas producidas: ";
    cin >> produced;

    cout << "Ingrese el intervalo de mantenimiento: ";
    cin >> maintenancePaper;

    if (maintenance(produced, maintenancePaper))
    {
        cout<<"La maquina requiere mantenimiento :("<<endl;
    }
    
    else
    {
        cout<<"La maquina no requiere mantenimiento :)"<<endl;
    }

    return 0;
}