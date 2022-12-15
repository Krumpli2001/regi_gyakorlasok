#include <iostream>

using namespace std;

struct csucs{
    int ertek;
    int gyerekdb;
    int maxgyerek;
    csucs** gyerekek;
    };

csucs* ujcsucs(int ertek){
    csucs* uj=new csucs;
    uj->ertek=ertek;
    uj->gyerekdb=0;
    uj->maxgyerek=0;
    uj->gyerekek=NULL;
    return uj;
    }

void hozzaad(csucs*  szulo, csucs* gyerek){
    if(szulo==NULL or gyerek==NULL)return;


    if(szulo->gyerekdb==szulo->maxgyerek){
        int meret=szulo->maxgyerek+2;
        csucs** uj=new csucs*[meret];
        for(int i=0; i<szulo->gyerekdb; i++){
            uj[i]=szulo->gyerekek[i];
        }
        szulo->maxgyerek=meret;
        if(szulo->gyerekek!=NULL){
            delete[] szulo->gyerekek;
        }
        szulo->gyerekek=uj;
    }
    szulo->gyerekek[szulo->gyerekdb]=gyerek;
    szulo->gyerekdb++;
    }

inline void tab(int db){
    for(int i=0; i<db; i++){
        cout<<'\t';
    }
    }

void kiir(csucs* cs, int szint){
    if(cs=NULL)return;


    cout<<cs->ertek<<endl;
    for(int i=0; i<cs->gyerekdb; i++){
        tab(szint);
        cout<<"'-->";
        kiir(cs->gyerekek[i], szint+1);
    }
    }

int main()
{
    cout << "Ez egy faaaa!" << endl;
    csucs* gyoker=ujcsucs(1);
    hozzaad(gyoker,ujcsucs(11));
    hozzaad(gyoker->gyerekek[0],ujcsucs(111));
    hozzaad(gyoker->gyerekek[0],ujcsucs(112));
    hozzaad(gyoker,ujcsucs(12));
    hozzaad(gyoker,ujcsucs(13));

    kiir(gyoker, 0);


    return 0;
}
