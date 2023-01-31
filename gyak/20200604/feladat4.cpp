#include <iostream>

struct Versenyzo {
  std::string nev;
  Versenyzo* kov;
};

// Készítsen egy eloz nevű függvényt, ami megkeres egy adott nevű versenyzőt, és felcseréli a listában előtte lévő elemmel (ha van ilyen).
// A függvény 1. paramétere a lista első elemének címe (a horgony), 2. paramétere a keresendő név. A függvény térjen vissza a művelet utáni lista első elemének címével.

Versenyzo* eloz(Versenyzo* horgony, std::string nev) {
    if(horgony == nullptr)
    {
        return nullptr;
    }

    Versenyzo* kopi = horgony;
    Versenyzo* elozo = nullptr;
    while(kopi->nev != nev)
    {
        elozo = kopi;
        kopi = kopi->kov;
    }

    if(kopi->nev == nev)
    {
    std::string temp;
    temp = elozo->nev;
    elozo->nev = kopi->nev;
    kopi->nev = temp;
    }
  

    return horgony;
}