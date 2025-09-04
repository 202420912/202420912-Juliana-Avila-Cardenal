#include<iostream>

using namespace std;

void passNote (int noteUser){
    if (noteUser < 3)
    {
        cout<<"Felicitaciones Paso :) " <<endl;
    }
    else
    {
        cout<<"Perdió :(" <<endl;
    }
}
      
int main(){

    int noteUser;
     
    cout<<"Ingrese su Nota de 1 a 5: " <<endl;
    cin>> noteUser;

    passNote(noteUser);

    return 0;

}