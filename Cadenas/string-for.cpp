#include<iostream>

using namespace std;

void forWithString(){
    cout <<"------------------------------------------"<<endl;
    string exampleText="otorrinolaringologo";
    cout << "size()"<< exampleText.size() <<endl;
    cout << "posición 1: "<<exampleText[1] <<endl;
    cout << "-------------------------------------------" <<endl;

    int contador=0;
    
    for (int i = 0; i < exampleText.size(); i++)
    {
        char textCharter = exampleText[i];
        if (textCharter == 'o')
        {
            contador ++;

        }
        
        //cout << "position: " << i << "-" <<textCharter <<endl;
    }

    cout <<"la palabra tiene "<<contador <<"o" <<endl;
}

int main(){
    forWithString();

    return 0;
}