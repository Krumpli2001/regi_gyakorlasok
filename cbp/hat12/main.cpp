#include <iostream>

using namespace std;

int main()
{
    cout << "Szam? ";
    int szam;
    cin >>szam;
    cout<<"A szam abszolut erteke:";
    if(szam<0)
        cout<<-szam<<", A szam negativ volt"<<endl;
    else
        cout<<szam<<endl;
    if(szam%2==0)
        cout<<"A szam fele: "<<szam/2<<endl;
    else
        cout<<"A szam paratlan: "<<szam/2<<endl;

    int szamA;
    int szamB;
    cout<<"Elso szam: ";
    cin>>szamA;
    cout<<"Masodik: ";
    cin>>szamB;
    if(szamA>szamB)
        cout<<"Kulombseguk: "<<szamA-szamB<<endl;
    else
        cout<<"Nem kapsz kulombseget"<<endl;
    if(szamA<10 and szamB<10)
        cout<<"Mind 2 kisebb mint 10, nesze a szorzatuk: "<<szamA*szamB;
    return 0;
}
