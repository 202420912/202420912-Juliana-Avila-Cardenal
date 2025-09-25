#include<iostream>

    using namespace std;

int calculateTotal (int hours, int rate){
    int total;
    total= hours * rate;
    return total;
}
 string printInvoice(string plate, int hours, int rate){

    cout<<"vehiculo:"<< plate <<"horas:"<< hours <<"tarifa:"<< rate <<"total:"<< calculateTotal(hours,rate) <<endl;

}

int main(){

    int userHour,userRate;
    string userPlate;
    cout<<"Ingerese numero de placa";
    cin>>userPlate;
    cout<<"Ingrese numero de horas";
    cin>>userHour;
    cout<<"Ingrese Tarifa";
    cin>>userRate;

    calculateTotal(userHour,userRate);
    printInvoice(userPlate,userHour,userRate);

    return 0;
}