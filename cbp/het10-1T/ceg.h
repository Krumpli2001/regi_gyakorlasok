#ifndef CEG_H_INCLUDED
#define CEG_H_INCLUDED


#include<iostream>
#include "datum.h"
#include "telephely.h"
using namespace std;

struct ceg {
  string nev;
  datum alapitas;
  telep* telephelyek;
  int telepDb;
};

void beolvas(ceg*);
int evesBevetel(const ceg*);
void kiir(const ceg*);
void torol(const ceg*);


#endif // CEG_H_INCLUDED
