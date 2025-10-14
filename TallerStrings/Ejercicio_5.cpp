#include<iostream>

using namespace std;

void invertString(){
    string originalString = "Hola";
    string Text="reconocer";
    string newText="";

    for (int i = originalString.size(); i >= 0; i--)
    {
       char letter = originalString[i];
       newText += letter;

       for (int j = Text.size(); j >=0 ; j--)
       {
        char letter2 = newText[j];
        newText += letter;
       }
       
    }
     if (newText == originalString)
       {
         cout<<"La palabra es Palindroma";
       }

       else if (newText == Text)
       {
        cout <<"La palabra es Palindroma";
       }
       
       else
       {
        cout << "La palabra no es Palindroma";
       }

    
}

int main(){

    invertString();

    return 0;
}