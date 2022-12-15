#include "telephely.h"

void beolvas(telep* t) {
  cout << "Telephely helysege: "; cin >> t->helyseg;
  cout << "Adja meg az alapitas datumat!\n";
  beolvas(&t->alapitas);
  cout << "Utolso ev arbevetele: "; cin >> t->bevetel;
}

void kiir(const telep* t) {
  cout << "Telephely helysege: " << t->helyseg
       << "\nAlapitas datuma:";
  kiir(&t->alapitas);
  cout << "\nUtolso ev arbevetele: " << t->bevetel << endl;
}
