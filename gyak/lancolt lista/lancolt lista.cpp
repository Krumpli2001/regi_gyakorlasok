#include <iostream>

struct adat {
  int szam;
  adat* kov;
};

adat* helyettesit(adat* horgony) {

    if(!horgony or !horgony->kov)
    {
        return horgony;
    }

    int szam1;
    adat* ujh = horgony->kov;
    szam1 = horgony->szam;
    ujh->szam = ujh->szam + szam1;
    delete horgony;
    horgony = ujh;
    return horgony;
}