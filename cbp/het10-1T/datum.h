#ifndef DATUM_H_INCLUDED
#define DATUM_H_INCLUDED

#include<iostream>
using namespace std;

struct datum {
  int ev;
  char ho;
  char nap;
};

void beolvas(datum*);
int hasonlit(const datum*, const datum*);
void kiir(const datum*);

#endif // DATUM_H_INCLUDED
