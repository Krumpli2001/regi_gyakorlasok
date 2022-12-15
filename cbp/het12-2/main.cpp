#include <iostream>

using namespace std;

struct szogyak{
    string szo;
    int gyakorisag;
    szogyak* bal;
    szogyak* jobb;
    };

struct bejegyzes{
    string nev;
    string telszam;
    bejegyzes* bal;
    bejegyzes* jobb;
    };

struct morze{
    char betu;
    morze* Ti;
    morze* Ta;
    };

struct csucs{
    int egesz;
    csucs* bal;
    csucs* jobb;
    };

csucs* ujcsucs(int ertek){
    csucs* uj=new csucs;
    uj->egesz=ertek;
    uj->bal=uj->jobb=NULL;
    return uj;
    }

inline void tab(int db){
    for(int i=0; i<db; i++){
        cout<<'\t';
    }
    }

void kiir(csucs* cs, int szint){
    if(cs==NULL) return;
    cout<<cs->egesz<<endl;
    if(cs->bal!=NULL){
        tab(szint);
        cout<<"'-->";
        kiir(cs->bal, szint+1);
    }
    if(cs->jobb!=NULL){
        tab(szint);
        cout<<"'-->";
        kiir(cs->jobb, szint+1);
    }
}

void melyseg(csucs* cs, int szint, int* min, int* max){
    if(cs==NULL) return;
    if(cs->bal==NULL and cs->jobb==NULL){
        if(szint< *min) *min=szint;
        if(szint< *max) *max=szint;

    }
    melyseg(cs->bal, szint+1, min, max);
    melyseg(cs->jobb, szint+1, min, max);
    }

bool kiegyensulyozott(csucs* gyoker){
    int min=INT_MAX;
    int max=0;
    melyseg(gyoker, 0, &min, &max);
    if(max-min <= 1) return true;
    return false;
    }


int main(){

    cout << "Hello world!" << endl;

    csucs* gyoker =  ujcsucs(1);
    gyoker->bal=ujcsucs(11);
    gyoker->jobb=ujcsucs(12);
    gyoker->bal->bal=ujcsucs(21);

    kiir(gyoker, 0);
    cout<<"Ez a fa "<<(kiegyensulyozott(gyoker)?"":"nem ")
        <<"kiegyensulyozott.\n";


    return 0;
}
