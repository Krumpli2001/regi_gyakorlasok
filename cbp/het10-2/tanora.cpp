#include "tanora.h"
#include "ido.h"
#include "nap.h"
#include "ido.cpp"
#include <iostream>

using namespace std;

void tanorabe(tanora* t){
    cout<<"Tantargy neve: ";
    cin >> ws;
    getline(cin,t->targynev);
    cout<<"Tantargy kezdete: ";
    idobe(&t->kezd);
    cout<<"Tantargy vege: ";
    idobe(&t->veg);
    }

void tanoraki(tanora* t){
    cout<<"Tantargy neve: "<<t->targynev<<endl;
        cout<<"Tantargy kezdete: \n"<<endl;
        idoki(&t->kezd);
        cout<<"Tantargy vege: ";
        idoki(&t->veg);
    }

bool overlap(const tanora* t1, const tanora* t2){
    if(hason(&t1->kezd, &t2->veg)<0){
        if(hason(&t1->veg,&t2->kezd)<0){
            return false;
        }
    }
    if(hason(&t1->kezd, &t2->veg)>0){
        if(hason(&t1->veg,&t2->kezd)>0){
            return false;
    }
    }
    else
        return true;
}
