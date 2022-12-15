#include <iostream>
#include <cstdlib>

using namespace std;

struct szamlalo {
  int szam;
  int db;
};

void hiba(szamlalo* sz) {
  if(sz == NULL) {
    cerr << "Memoriakezelesi hiba.\n";
    exit(1);
  }
}

int binker(int mit, szamlalo* miben, int n) {
  int eleje=0, vege=n-1;
  while(eleje <= vege) {
    int kozepe = (eleje+vege)/2;
    if(miben[kozepe].szam < mit) {
      eleje = kozepe + 1;
    } else if(miben[kozepe].szam > mit) {
      vege = kozepe - 1;
    } else {
      return kozepe;
    }
  }
  return -eleje-1;
}

void athelyez(szamlalo* tomb, int honnan, int n) {
  for(int i=n; i>honnan; i--) {
    tomb[i] = tomb[i-1];
  }
}

int main() {
  int meret = 2;
  szamlalo* szamlalok = new szamlalo[meret];
  hiba(szamlalok);
  int kulonbozo = 0;
  int szam;
  cout << "Adjon meg szamokat a 0 vegjelig!\n";
  while(cout << "Kovetkezo szam: ", cin >> szam, szam != 0) {
    int hely = binker(szam, szamlalok, kulonbozo);
    if(hely < 0) {
      if(kulonbozo == meret) {
        szamlalo* uj = new szamlalo[meret*2];
        hiba(szamlalok);
        for(int i=0; i<kulonbozo; i++) {
          uj[i] = szamlalok[i];
        }
        meret *= 2;
        delete[] szamlalok;
        szamlalok = uj;
      }
      hely = -(hely+1);
      athelyez(szamlalok, hely, kulonbozo);
      szamlalok[hely].szam = szam;
      szamlalok[hely].db = 1;
      kulonbozo++;
    } else {
      szamlalok[hely].db++;
    }
  }

  cout << "A megadott szamok mennyisege:\n";
  for(int i=0; i<kulonbozo; i++) {
    cout << szamlalok[i].szam << " mennyisege: "
         << szamlalok[i].db << endl;
  }

  delete[] szamlalok;
  return 0;
}
