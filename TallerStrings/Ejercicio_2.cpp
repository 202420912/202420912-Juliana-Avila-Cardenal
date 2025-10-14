#include<iostream>

using namespace std;

void asciiExample(){
    string originalString = "HelloWorld";
    string newText="";
    cout<< originalString <<endl;

    for (int i = 0; i < originalString.size(); i++)
    {
        char textCharacter = originalString[i];
        if (i % 2 == 0)
        {
            if (textCharacter >= 'A' && textCharacter <= 'Z')
            {
                newText += textCharacter + 32;

            } else if (textCharacter >= 'a' && textCharacter <= 'z') {

                newText += textCharacter;
        
            }
        } 

        else 
        {
            if (textCharacter >= 'a' && textCharacter <= 'z')
            {
                newText += textCharacter - 32;

            } else if (textCharacter >= 'A' && textCharacter <= 'Z') {
                
                newText += textCharacter;
            }
        }
    }
    cout << newText;
}

int main (){

    asciiExample();

    return 0;
}