#include <iostream>
#define MIN 1
#define MAX 100

struct szamok{
    int szam, db;
    };

using namespace std;

int main()
{
    szamok db[MAX];
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
        for(i; i<kulonbozo and szam!=db[i].szam and i<MAX; i++);
        if(i>=MAX){
            cerr<<"Tul sok a kulonbozo szam"<<endl;
        }
        else if(i==kulonbozo){
            db[kulonbozo].szam=szam;
            db[kulonbozo].db=1;
            kulonbozo++;
        }
        else{
            db[i].db++;
        }

    }
    return 0;
}
