    #include<iostream>

    using namespace std;

    int main() {
        int ValueUser1, ValueUser2;
        int AddResult, Subresult, MultResult, DivResult, ModulResult;
        // Adition= 1 subtracion=2 Multiplication= 3 Divisio= 4 Modulo = 5
        int SelectUser;

        cout << "Hi¡ Esta es una Calculadora" <<endl;
        cout << "Para empezar el programa inserte el Valor #1:  ";
        cin >> ValueUser1;
        cout << "ahora el valor #2: ";
        cin >> ValueUser2;
        cout << "_________________________________________________" <<endl;
        cout << "seleccione la operación que desea realizar: " <<endl;
        cout << "suma = 1" <<endl;
        cout << "Resta = 2" <<endl;
        cout << "Multiplicación = 3" <<endl;
        cout << "División = 4" <<endl;
        cout << "Modulo = 5" <<endl;
        cout << "_________________________________________________" <<endl;
        cin >> SelectUser;

        switch (SelectUser)
        {
            //Suma
        case 1:
            AddResult = ValueUser1 + ValueUser2;
            cout << ValueUser1 <<"+" <<ValueUser2 <<"=" <<AddResult <<endl;
            break;

            //Resta
        case 2:
            Subresult = ValueUser1 - ValueUser2;
            cout << ValueUser1 <<"-" <<ValueUser2 <<"=" <<Subresult <<":)" <<endl;
            break;

            //Multiplication
        case 3:
            MultResult = ValueUser1 * ValueUser2;
            cout << ValueUser1 <<"*" <<ValueUser2 <<"=" <<MultResult <<":)" <<endl;
            break;

            //División
        case 4:
            DivResult = ValueUser1 / ValueUser2;
            cout << ValueUser1 <<"/" <<ValueUser2 <<"=" <<DivResult <<":)" <<endl;
            break;

            //Modulo
        case 5:
                ModulResult = ValueUser1 % ValueUser2;
                cout << ValueUser1 <<"%" <<ValueUser2 <<"=" <<ModulResult <<":)" <<endl;
                break;
        
        default:
            cout << "La opción seleccionada no existe: //  :(" <<endl;

            break;
        }
        
        cout <<"________________________________________________" <<endl;

        return 0;
    }

