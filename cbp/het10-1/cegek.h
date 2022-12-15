#ifndef CEGEK_H_INCLUDED
#define CEGEK_H_INCLUDED
#include "datumh.h"
#include "telep.h"
#include <iostream>

using namespace std;

struct ceg{
    string nev;
    datum alap;
    hely* telephelyek;
    int tdb;
    };

void cegbe(ceg*);
void bevetelek(const ceg*);
void kic(const ceg*);
void torol(const ceg*);

#endif // CEGEK_H_INCLUDED
