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

void contadorInvertido (int number){
    for (int i = number; i >=0; i--)
    {
        cout<<"Valor: "<<i <<endl;
    }
    
}

int main(){
    int userNumber;
    cout<<"Ingrese Número hasta el que quiere llegar:"<<endl;
    cin>>userNumber;
    contadorInvertido(userNumber);

    return 0;
}