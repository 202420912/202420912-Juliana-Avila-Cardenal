#include<iostream>

using namespace std;

void forWithString(){
    string exampleText= "aabbcc";
    string text2 = "abc";

    int contador=0;
    
    for (int i = 0; i < exampleText.size(); i++)
    {
        char textCharter = exampleText[i];
        
        for (int j = 0; j < text2.size(); j++)
        {
            char text2Charter = text2[j];
            if (textCharter == text2Charter)
            {
                contador ++;
            }
            
        }    
    }

    cout <<"las letras repetidas son:  "<<contador <<" letras" <<endl;
}

int main(){
    forWithString();

    return 0;
}