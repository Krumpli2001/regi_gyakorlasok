#include <iostream>

using namespace std;

struct elem{
    int szam;
    elem* kov;
    };

elem* letrehoz(int szamok[]){
    elem* horgony=NULL;
    for(int i=0; szamok[i]!=-1; i++){
        elem* uj=new elem;
        uj->szam=szamok[i];
        uj->kov=horgony;
        horgony=uj;
    }
    return horgony;
    }

void kiir(elem* horgony){
    elem* akt;
    akt=horgony;
    while(akt!=NULL){
        cout<<akt->szam<<'\t';
        akt=akt->kov;
    }
    }

void felszabadit(elem* horgony){
    elem* akt=horgony;
    while(akt!=NULL){
        elem* kov = akt->kov;
        delete akt;
        akt=kov;
    }
    }

int main()
{
    cout << "Lancolt listak" << endl;
    cout<<"Kiiras forditott sorrendbe:"<<endl;
    int sz[]={1,2,3,4,5,-1};
    elem* horgony=letrehoz(sz);
    kiir(horgony);
    felszabadit(horgony);
    return 0;
}
