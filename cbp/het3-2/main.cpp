#include <iostream>

using namespace std;
#define MAX 10

int main()
{
    cout << "Kerem a 10 db szamodat" << endl;
    int i,akt,ossz;
    int szamok[10];
    ossz=0;
    i=0;
    for(i;i<10;i++){
            cout<<"A(z) "<<i+1<<". szamod: ";cin>>akt;
            szamok[i]=akt;
        ossz=ossz+akt;
    }
    cout<<ossz<<" a szamok osszege"<<endl;
    cout<<"Atlaguk pedig: "<<ossz/10<<endl;
    //cout<<MAX;
    i=0;
    while(i<10){
        if(szamok[i]<(ossz/MAX))
            cout<<szamok[i]<<'\t';
        i++;
    }

    return 0;
}
