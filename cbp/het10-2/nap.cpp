#include "nap.h"
#include "tanora.cpp"


void napbe(nap* n){
    cout<<"Tanorak szam: ";cin>>n->oraszam;
    n->tanorak = new tanora[n->oraszam];
    for(int k=0; k<n->oraszam; k++){
        cout<<k+1<<". ora:";
        tanorabe(n->tanorak);
    }
    }

void napki(nap* n){
    cout<<"Tanorak szama: "<<n->oraszam;
    for(int k=0; k<n->oraszam; k++){
        cout<<k+1<<". ora adatai: ";
        tanoraki(n->tanorak);
    }
    }
