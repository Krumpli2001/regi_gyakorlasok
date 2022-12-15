#include "datum.h"

void beolvas(datum* d) {
  cout << "Ev: "; cin >> d->ev;
  cout << "Honap: "; cin >> d->ho;
  cout << "Nap: "; cin >> d->nap;
}

int hasonlit(const datum* d1, const datum* d2) {
  if(d1->ev != d2->ev) {
    return d1->ev - d2->ev;
  } else {
    if(d1->ho != d2->ho) {
      return d1->ho - d2->ho;
    } else {
      return d1->nap - d2->nap;
    }
  }
}

void kiir(const datum* d) {
  cout << d->ev << '.' << d->ho << '.' << d->nap;
}
