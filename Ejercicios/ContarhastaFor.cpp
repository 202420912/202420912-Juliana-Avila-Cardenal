 #include <iostream>

using namespace std;

void counter(int number){
    for (int i = 0; i <= number; i++)
    {
        cout<<"Valor: "<<i <<endl;
    }
    
}

void counterWhile(int number){
    int contador=0;
    while (contador <= number)
    {
        cout<<"valor: "<<contador<<endl;
         contador++;
    }
    
}

int main(){
    int userNumber;
    cout<<"Ingrese Número hasta el que quiere llegar:"<<endl;
    cin>>userNumber;
    counterWhile(userNumber);

    return 0;
}