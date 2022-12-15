#include "szemely.h"
#include "nap.cpp"


string napok[5]={"Hetfo", "Kedd", "Szerda", "Csutortok", "Pentek"};

void szemelybe(szemely* sz){
    cout<<"A Hallgato neve: ";
    cin >> ws;
    getline(cin,sz->nev);
    for(int j=0; j<5; j++){
        cout<<napok[j]<<": "<<endl;
        for(int w=0; w<1; w++){
        napbe(sz->het);}
    }
    }

void szemelyki(szemely* sz){
    cout<<"A Hallgato neve: "<<sz->nev;
    for(int j=0; j<5; j++){
        cout<<napok[j]<<": "<<endl;
        napki(sz->het);
    }
    }
