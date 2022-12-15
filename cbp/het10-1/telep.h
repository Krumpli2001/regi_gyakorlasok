#ifndef TELEP_H_INCLUDED
#define TELEP_H_INCLUDED
#include "datumh.h"
#include <iostream>

using namespace std;

struct hely{
    string nev;
    datum alap;
    int utolso;
    };

void beh(hely*);
void kih(const hely*);

#endif // TELEP_H_INCLUDED
