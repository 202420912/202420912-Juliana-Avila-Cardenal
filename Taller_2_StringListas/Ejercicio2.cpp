#include<iostream>

using namespace std;

void removeVowels(){

    string texto = "Desarrollo de Software";
    int contador =0;
    int contar =0;

    for (int i = 0; i < texto.size(); i++)
    {
       char letter = texto[i];

         if (letter =='a'|| letter =='e'|| letter =='i'|| letter =='o'|| letter =='u')
        {
            contador ++;
        }
        else if (
            (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')
        )
        {
            contar ++;
        }
        
    }   
    cout << "tiene " << contador << " vocales" << endl;
    cout << "Tiene " <<contar <<" consonantes"<< endl;
    
}

int main(){

    removeVowels();

    return 0;
}