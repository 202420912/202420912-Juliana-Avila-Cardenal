#include <iostream>

using namespace std;

bool isValidAmount(int amount){
    if (amount % 5==0)
    {
         return true;
    }
    else
    {
        return false;
    }
    
}

void  dispenseBills(int amount) {
    int contador=amount;
    while (contador <= amount)
    {
        cout<<"billetes"<<contador<<endl;
         contador--;
    }
}

int main(){
    int valueUser;
    cout<<"Ingrese valor";
    cin>>valueUser;
    if (valueUser=true)
    {
        dispenseBills(valueUser);
    }
    else
    {
        isValidAmount(valueUser);
        cout<<"Valor no Valido";
    }
    

return 0;
    
}