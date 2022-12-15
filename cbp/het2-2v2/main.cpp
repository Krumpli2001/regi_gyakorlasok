#include <iostream>

using namespace std;

int main()
{
    cout << "Paros szamok felei" << endl;
    int szam;
    bool paros;
    do{
        cout<<"A szamunk: ";
        cin>>szam;
        paros=szam%2==0;
        if(paros)
            cout<<"Szam fele: "<<szam/2<<endl;
    }while(paros);
    cout<<"Ez nem paros...";
    return 0;
}
