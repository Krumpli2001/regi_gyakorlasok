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

elem* beszurelore(elem* horgony, int szam){
    elem* uj=new elem;
    uj->szam=szam;
    uj->kov=horgony;
    return uj;
    }

elem* beszurvegre(elem* horgony, int szam){
    elem* uj=new elem;
    uj->szam=szam;
    uj->kov=NULL;
    if(horgony==NULL){
        return uj;
    }
    else{
        elem* akt=horgony;
        while(akt->kov!=NULL){
            akt=akt->kov;
        }
        akt->kov=uj;
        return horgony;
    }
    }

void kiir(elem* horgony){
    elem* akt;
    akt=horgony;
    while(akt!=NULL){
        cout<<akt->szam<<'\t';
        akt=akt->kov;
    }
    cout<<endl;
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
    cout<<"Eredeti lista tartalma: "<<endl;
    kiir(horgony);
    horgony=beszurelore(horgony, 42);
    kiir(horgony);
    beszurvegre(horgony, 666);
    kiir(horgony);
    felszabadit(horgony);

    horgony=NULL;
    horgony=beszurelore(horgony, 42);
    kiir(horgony);
    felszabadit(horgony);

    horgony=NULL;
    horgony=beszurvegre(horgony, 43);
    kiir(horgony);
    felszabadit(horgony);
    return 0;
}
