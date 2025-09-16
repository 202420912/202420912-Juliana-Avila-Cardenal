 #include <iostream>

using namespace std;

void chekPackages (int number){
      if (number % 2 == 0)
    {

        for (int i = 2; i <=number; i+= 2)
        {
            cout<<i<<","<<endl;
        }
        
    }

    else
    {
        for (int i = 1; i <=number ; i+= 2)
        {
            cout<<i<<","<<endl;
        }
        
    }
    
}
   
int main(){
    int userNumber;
    cout<<"Ingrese cantidad de paquetes: ";
    cin>>userNumber;
    cout<<"Paquetes revisados: "<<endl;
    chekPackages(userNumber);

    return 0;
}


