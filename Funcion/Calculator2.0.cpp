#include<iostream>

    using namespace std;

void sumeNumbers (int valueUser1, int valueUser2){
    int addResult;
    addResult = valueUser1 + valueUser2;
    cout << "La suma de los valores es: "<<addResult <<endl;
}

void restNumbers (int valueUser1, int valueUser2){
    int restResult;
    restResult = valueUser1 - valueUser2;
    cout<< "La resta de los valores es: "<<restResult <<endl;

}

void multNumbers (int valueUser1, int valueUser2){
    int multResult;
    multResult = valueUser1 * valueUser2;
    cout << "La multiplicación de los valores es: "<<multResult <<endl;
     
}

void divideNumbers (int valueUser1, int valueUser2){
     int divResult;
        if (valueUser2 == 0 )
        {
            cout<<"Error No se puede dividir por 0 "<<endl;
            return;
        }
    cout<<"El resultado de la división es: "<<valueUser1 / valueUser2 <<endl;

}

int main() {
        int num1, num2;
        int addResult, subResult, multResult, divResult, modulResult;
        // Adition= 1 subtracion=2 Multiplication= 3 Divisio= 4 Modulo = 5
        int SelectUser;

        cout << "Hi¡ Esta es una Calculadora" <<endl;
        cout << "Para empezar el programa inserte el Valor #1:  ";
        cin >> num1;
        cout << "ahora el valor #2: ";
        cin >> num2;
        cout << "_________________________________________________" <<endl;
        cout << "seleccione la operación que desea realizar: " <<endl;
        cout << "suma = 1" <<endl;
        cout << "Resta = 2" <<endl;
        cout << "Multiplicación = 3" <<endl;
        cout << "División = 4" <<endl;
        cout << "_________________________________________________" <<endl;
        cin >> SelectUser;

        switch (SelectUser)
        {
            //Suma
        case 1:
             sumeNumbers(num1, num2 );
            break;

            //Resta
        case 2:
            restNumbers(num1, num2);
            break;

            //Multiplication
        case 3:
            multNumbers(num1, num2);
            break;

            //División
        case 4:
            divideNumbers(num1, num2);
            break;
        
        default:
            cout << "Error: Opción no valida //  :(" <<endl;

            break;
        }
        
        cout <<"________________________________________________" <<endl;

        return 0;
    }