#include <iostream>

using namespace std;

void machineShifts (int start, int end){
    if (start > end)
    {
        cout<<"Error: El turno inicial no puede ser mayor que el final"<<endl;

        return;
    }

    cout<<"La maquina trabajó en los turnos"<<endl;
    int currentShift = start;

    while (currentShift <= end)
    {
        cout<<currentShift<<endl;
        currentShift++;
    }
   
}

int main(){

    int turnStart, turnEnd;
    cout<<"Ingrese numero de inicio: ";
    cin>>turnStart;

    cout<<"Ingrese número Final: ";
    cin>>turnEnd;

    cout<<"_______________________________________________"<<endl;
    machineShifts(turnStart,turnEnd);
    
    return 0;
}