#include<iostream>

using namespace std;

void originalString(){

    string originalText="Aloha es Familia";
    string newString ="";

    for (int i = 0; i < originalText.size(); i++)
    {
       char letter = originalText[i];

         if ( letter ==' ')
        {
            newString += "-";
        }
        else
        {
            newString += letter;
        }
        
    }   
    cout << newString << endl;

}

void duplicateString(){
    string originalString = "Hola";
    string newText="";
    cout << originalString <<endl;

    for (int i = 0; i < originalString.size(); i++)
    {
       char letter = originalString[i];
       newText += letter;
       newText += letter;
    }
    cout << newText <<endl;
}

void removeVowels(){

    string originalText="aloha es Familia";
    string newString ="";

    for (int i = 0; i < originalText.size(); i++)
    {
       char letter = originalText[i];

         if ( letter =='a'|| letter =='e'|| letter =='i'|| letter =='o'|| letter =='u')
        {
            newString += "";
        }
        else
        {
            newString += letter;
        }
        
    }   
    cout << newString << endl;
    
}

void invertString(){
    string originalString = "Hola";
    string newText="";

    for (int i = originalString.size(); i >= 0; i--)
    {
       char letter = originalString[i];
       newText += letter;
    }
    cout << newText <<endl;
}

void wordsCounter(){
    string originalText="aloha es familia";
     int contador= 1;
    
    for (int i = 0; i < originalText.size(); i++)
    {
        char letter = originalText[i];
        if ( letter == ' ')
        {
            contador ++;

        }
        
    }

    cout <<"la palabra tiene "<<contador <<endl;
}



int main(){

    wordsCounter();
    invertString();
    //removeVowels();
    //originalString();
    //duplicateString();
    return 0;
}


