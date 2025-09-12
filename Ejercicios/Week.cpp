#include <iostream>

using namespace std;


void week(int day ){
    switch (day)
    {
    case 1:
        cout<<"One day is Monday"<<endl;
        break;
    case 2:
        cout<<"Two day is Tuesday"<<endl;
        break;
    case 3:
        cout<<"Tree Day is Wednesday"<<endl;
        break;
    case 4:
        cout<<"Four day is Thursday"<<endl;
        break;
    case 5:
        cout<<"Five day is Friday"<<endl;
        break;
    case 6: 
        cout<<"Six day is Saturday"<<endl;
        break;
    case 7:
        cout<<"Seven day is sunday"<<endl;
    default:
        cout<<"Numero no valido"<<endl;
        break;
    }
}

int main(){
    week(1);
    week(2);
    week(3);
    week(4);
    week(5);
    week(6);
    week(7);
    week(0);

    return 0;
}