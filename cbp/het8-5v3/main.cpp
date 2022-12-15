#include <iostream>


struct szamok{
    int szam, db;
    };

using namespace std;

int main()
{
    int meret=2;
    szamok* db=new szamok[meret];
    int kulonbozo=0;
    int szam=1;
    cout<<"Adj szamokat"<<endl;
    while(szam!=0){
        cout<<"A szamod: ";
        cin>>szam;
        if(szam==0){
            cout<<"Kileptel a programbol"<<endl;

            cout<<"A szamaid: "<<endl;
            for(int i=0; i<kulonbozo; i++){
                cout<<db[i].szam<<" elofordulasa: "<<db[i].db<<endl;
            }
            return 0;
        }
        int i=0;
        for(i; i<kulonbozo and szam!=db[i].szam; i++);
        if(i==kulonbozo){
                if(kulonbozo==meret){
                    szamok* uj=new szamok[meret*2];
                    for(int i=0; i<kulonbozo; i++){
                        uj[i]=db[i];
                    }
                    meret *=2;
                    delete[] db;
                    db=uj;
                }
            db[kulonbozo].szam=szam;
            db[kulonbozo].db=1;
            kulonbozo++;
        }
        else{
            db[i].db++;
        }

    }
    delete[] db;
    return 0;
}
