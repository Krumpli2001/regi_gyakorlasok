#include <iostream>
#include <ctime>
#define EV 2021


using namespace std;

struct elem{
    string monogram;
    int eletkor;
    int szul;
    int magassag;
    elem* kov;
    };

elem* letrehoz(){
    elem* horgony=NULL;
    srand(time(NULL));
    int db=2+rand()%10;
    for(int i=0; i<db; i++){
        elem* uj=new elem;
        int mhossz=2+rand()%3;
        for(int j=0; j<mhossz; j++){
            uj->monogram += 'A'+rand()%('Z'-'A'+1);
        }
        uj->eletkor=rand()%121;
        uj->szul=EV-uj->eletkor;
        uj->magassag=40+rand()%261;
        uj->kov=horgony;
        horgony=uj;
    }
    return horgony;
    }

void kiir(elem* horgony){
    elem* akt;
    akt=horgony;
    while(akt!=NULL){
        cout<<"Monogram: "<<akt->monogram<<endl;
        cout<<"Eletkor: "<<akt->eletkor<<endl;
        cout<<"Szuletesi ev: "<<akt->szul<<endl;
        cout<<"Magassag: "<<akt->magassag<<endl<<endl;
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

elem* rendez(elem* horgony){
    elem* eredetiakt=horgony;
    elem* rendezett=NULL;
    while(eredetiakt!=NULL){
        elem* eredetikov=eredetiakt->kov;
        elem* rendelozo=NULL;
        elem* rendakt=rendezett;
        while(rendakt!=NULL and rendakt->eletkor<eredetiakt->eletkor){
            rendelozo=rendakt;
            rendakt=rendakt->kov;
        }
        if(rendelozo!=NULL){
            rendelozo->kov=eredetiakt;
        }else{
            rendezett=eredetiakt;
        }
        eredetiakt->kov=rendakt;
        eredetiakt=eredetikov;
    }
    return rendezett;
    }



int main()
{
    cout << "Lancolt listak letrehozasa veletlen szeruen" << endl;
    cout<<" "<<endl;
    srand(time(NULL));
    elem* horgony=letrehoz();
    kiir(horgony);
    cout<<"Rendezve: "<<endl;
    horgony=rendez(horgony);
    kiir(horgony);
    felszabadit(horgony);
    return 0;
}
