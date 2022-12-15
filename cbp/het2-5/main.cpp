#include <iostream>

using namespace std;

int main()
{
    cout << "LE LEPCSO!" << endl;
    int n,sor,i;
    cout<<"Mekkora legyen a lepcso? ";cin>>n;
    sor=0;
    i=0;
    while(sor<n){
        i++;
        sor++;
        do{
            cout<<"*";
            i++;
        }while(i<=sor);
        cout<<endl;
        i=0;
    }
    return 0;
}
