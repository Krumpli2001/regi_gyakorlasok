#include <iostream>

using namespace std;

int main()
{
    cout << "Kerem a 10 db szamodat" << endl;
    int i,akt,ossz;
    ossz=0;
    i=0;
    for(i;i<10;i++){
            cout<<"A szamod: ";cin>>akt;
        ossz=ossz+akt;
    }
    cout<<ossz<<" a szamok osszege"<<endl;
    cout<<"Atlaguk pedig"<<ossz/10;
    return 0;
}
