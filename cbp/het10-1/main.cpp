#include <iostream>
#include "datum.cpp"
#include "cegek.cpp"
#define cdb 3

using namespace std;

int legregebbi(const ceg* cegek, int db){
    int idx=0;
    const datum* alapitas=&cegek->alap;
    for(int i=1; i<db; i++){
        if(hasond(alapitas,&cegek[i].alap)>0){
            idx=i;
            alapitas=&cegek[i].alap;
        }
    }
    return idx;
    }

int main()
{
    cout<<"Ceg kezelo valami"<<endl;
    cout<<"Adja meg "<<cdb<<" ceg adatait"<<endl;
    ceg cegek[cdb];
    for(int i=0; i<cdb; i++){
        cout<<"A(z) "<<i+1<<". ceg adatai:"<<endl;
        cegbe(cegek+i);
    }

    cout<<"A legregebbi ceg: ";
    kic(cegek+legregebbi(cegek,cdb));

    cout<<"Telephely adatok kiirasa, helyseg nev alapjan"
        <<"ures sorig";
        string helyseg;
        cin.ignore();
        while(cout<<"Helyseg neve: ", getline(cin,helyseg),helyseg.length()>0){
            for(int c=0; c<cdb; c++){
                for(int t=0; t<cegek[c].tdb; t++){
                    if(cegek[c].telephelyek[t].nev==helyseg){
                        cout<<"Ceg neve: "<<cegek[c].nev
                            <<"Telephely adatai: ";
                            kih(cegek[c].telephelyek+t);
                    }
                }
            }
        }

    for(int i=0; i<cdb; i++){
            torol(cegek+i);
    }
    return 0;
}
