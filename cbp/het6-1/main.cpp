#include <iostream>

using namespace std;

struct szemely{
    struct {
        int ev;
        int ho;
        int nap;
        }szul;
    float tav;
    };

int szemely2szam(szemely sz){
    return sz.szul.ev*10000+sz.szul.ho*100+sz.szul.nap;
    }

#define DB 5

int main()
{
    cout << "Hello world!" << endl;
    cout<<"Szemelyek kezelese"<<endl;
    szemely szemelyek[DB];
    for(int i=0; i<DB; i++){
        do{
        cout<<i+1<<". ember Szuletesi eve: ";
        cin>>szemelyek[i].szul.ev;
        }while(szemelyek[i].szul.ev<1890);
        do{
        cout<<i+1<<". ember Szuletesi honapja: ";
        cin>>szemelyek[i].szul.ho;
        }while(szemelyek[i].szul.ho<1 or szemelyek[i].szul.ho>12);
        do{
        cout<<i+1<<". ember Szuletesi napja: ";
        cin>>szemelyek[i].szul.nap;
        }while(szemelyek[i].szul.nap<1 or szemelyek[i].szul.nap>31);
        cout<<i+1<<". ember tavolsaga a fovarostol (km): ";
        cin>>szemelyek[i].tav;
    }
    for(int i=0; i<DB-1; i++){
        int k=i;
        for(int j=i+1; j<DB; j++){
            if(szemelyek[k].tav < szemelyek[j].tav){
                k=j;
            }
        }
        if(k!=i){
            szemely csere = szemelyek[i];
            szemelyek[i] = szemelyek[k];
            szemelyek[k] = csere;
        }
    }
    cout<<"Tavolsag szerinti csokkene szemelyek:\n";
    for(int i=0; i<DB; i++){
        cout<<szemelyek[i].szul.ev<<"."<<
              szemelyek[i].szul.ho<<"."<<
              szemelyek[i].szul.nap<<'\t'<<
              szemelyek[i].tav<<endl;
    }

    for(int i=0; i<DB-1; i++){
        int k=i;
        for(int j=i+1; j<DB; j++){
            if(szemely2szam(szemelyek[k]) < szemely2szam(szemelyek[j])){
                k=j;
            }
        }
        if(k!=i){
            szemely csere = szemelyek[i];
            szemelyek[i] = szemelyek[k];
            szemelyek[k] = csere;
        }
    }
    cout<<"Szuletes szerint novekvo szemelyek:\n";
    for(int i=0; i<DB; i++){
        cout<<szemelyek[i].szul.ev<<"."<<
              szemelyek[i].szul.ho<<"."<<
              szemelyek[i].szul.nap<<'\t'<<
              szemelyek[i].tav<<endl;
    }
    return 0;
}
