#include "telep.h"

void beh(hely* t){
    cout<<"Telephely: ";cin>>t->nev;
    cout<<"Alapitas datuma: "<<endl;
    bed(&t->alap);
    cout<<"Utolsó év bevétele: ";
    cin>>t->utolso;
    }

void kih(const hely* t){
    cout<<t->nev<<"a telephely neve"<<endl;
    kid(&t->alap);
    cout<<" alapult a ceg"<<endl;
    cout<<t->utolso<<"Ft volt a tavaji ev bevetele"<<endl;
    }
