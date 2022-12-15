#include "ido.h"
#include <iostream>

using namespace std;

void idobe(ido* d){
    cout<<"Ora: ";cin>>d->ora;
    cout<<"Perc: ";cin>>d->perc;
    }

int hason(const ido* i1, const ido* i2){
    if(i1->ora != i2->ora){
        return i2->ora - i1->ora;
    }else{
    return i2->perc - i1->perc;
    }
    }

void idoki(ido* d){
    cout<<"Ora: "<<d->ora;
    cout<<"Perc: "<<d->perc;
    }
