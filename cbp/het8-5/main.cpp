#include <iostream>
#define MIN 1
#define MAX 3

struct szamok{
    int szam, db;
    };

using namespace std;

int main()
{
    int db[MAX-MIN+1]={0};
    int szam=1;
    cout<<"Adj szamokat a "<<MIN<<" es "<<MAX<<" intervallumon"<<endl;
    while(szam!=0){
        cout<<"A szamod: ";
        cin>>szam;
        if(szam==0){
            cout<<"Kileptel a programbol"<<endl;

            cout<<"A szamaid: "<<endl;
            for(int i=0; i<MAX-MIN+1; i++){
                cout<<i+MIN<<" elofordulasa: "<<db[i]<<endl;
            }
            return 0;
        }

        if(szam>=MIN and szam<=MAX){
            db[szam-MIN]++;
        }
        else
            cout<<MIN<<" "<<MAX<<" intervallumon..."<<endl;
    }
    return 0;
}
