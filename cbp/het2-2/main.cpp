#include <iostream>

using namespace std;

int main()
{
    int szam;
    cout<<"Paros szamok felei"<<endl;
    cout<<"A szamod: ";cin>>szam;
    while(szam%2==0){
        cout<<"Nesze a fele: "<<szam/2<<endl;
        cout<<"Kovi szam: ";cin>>szam;
    }
    cout<<"Nem paros...";
    return 0;
}
