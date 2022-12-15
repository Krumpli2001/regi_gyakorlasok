#include "ceg.h"

void beolvas(ceg* c) {
  cout << "Ceg neve: ";
  cin >> ws; // Puffer torles
  getline(cin, c->nev);
  cout << "Adja meg az alapitas datumat!\n";
  beolvas(&c->alapitas);
  cout << "Telephelyek szama: "; cin >> c->telepDb;
  c->telephelyek = new telep[c->telepDb];
  for(int i=0; i<c->telepDb; i++) {
    cout << "Adja meg a(z) " << i+1 << " telephely adatait!\n";
    beolvas(c->telephelyek + i);
  }
}

int evesBevetel(const ceg* c) {
  int osszeg = 0;
  for(int i=0; i<c->telepDb; i++) {
    osszeg += c->telephelyek[i].bevetel;
  }
  return osszeg;
}

void kiir(const ceg* c) {
  cout << "Ceg neve: " << c->nev
       << "\nAlapitas datuma: ";
  kiir(&c->alapitas);
  cout << "\nTelephelyek szama: " << c->telepDb
       << "\nTelephelyek adatai:\n";
  for(int i=0; i<c->telepDb; i++) {
    kiir(c->telephelyek + i);
  }
  cout << "Osszesitett bevetel: " << evesBevetel(c) << endl;
}

void torol(const ceg* c) {
  delete[] c->telephelyek;
}
