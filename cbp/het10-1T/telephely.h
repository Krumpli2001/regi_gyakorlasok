#ifndef TELEPHELY_H_INCLUDED
#define TELEPHELY_H_INCLUDED


#include<iostream>
#include "datum.h"

using namespace std;

struct telep {
  string helyseg;
  datum alapitas;
  int bevetel;
};

void beolvas(telep*);
void kiir(const telep*);

#endif // TELEPHELY_H_INCLUDED
