#include<iostream>

using namespace std;

void removeConsonants(){

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

int main(){

    removeConsonants();

    return 0;
}