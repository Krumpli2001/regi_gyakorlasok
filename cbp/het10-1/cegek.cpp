#include "cegek.h"
#include "telep.h"
#include "telep.cpp"
#include <iostream>

using namespace std;


void cegbe(ceg* c){
    cin>>ws;
    cout<<"Ceg neve: ";getline(cin,c->nev);
    cout<<"Alapitas datuma: ";
    bed(&c->alap);
    cout<<"Telephelyek szama: ";cin>>c->tdb;
    c->telephelyek=new hely[c->tdb];
    for(int i=0; i<c->tdb; i++){
        cout<<i+1<<". telephely adatai: ";
        beh(c->telephelyek+i);
    }
    }

int bevetelekek(const ceg* c){
    int bevetel=0;
    for(int i=0; i<c->tdb; i++){
        bevetel += c->telephelyek[i].utolso;
    }
    return bevetel;
    }

void kic(const ceg* c){
    cout<<"Ceg neve"<<c->nev<<endl;
    cout<<"Alapitas eve: ";
    kid(&c->alap);
    cout<<"Telephelyek szama: "<<c->tdb<<endl;
    cout<<"Telephelyek adatai: ";
    for(int i=0; i<c->tdb; i++){
        kih(c->telephelyek + i);
    }
    cout<<"Ossz bevetel: ";
    cout<<bevetelekek(c);
    }

void torol(const ceg* c){
    delete[] c->telephelyek;
    }
