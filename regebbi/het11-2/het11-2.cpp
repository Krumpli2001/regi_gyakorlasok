// het11-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// 
//Írjon programot, amely egy tömb elemeivel láncolt listát készít!
//A tömb utolsó eleme legyen `-1`, ez már ne kerüljön a listába!
//Az elemeket szúrja be a lista elejére!
//Figyeljük meg, hogy így a lista fordított lesz a tömbhöz képest!
//Végül jelezzük ki az egyes elemeket rendre!


// het11-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 
//Az elõzõ feladatot bõvítse tovább úgy, hogy olyan függvényeket ír,
//melyekkel a lista elejére és végére beszúrást szemléltethetjük!
//Próbálja is ki különbözõ értékekkel a függvényeket!

#include <iostream>

struct ListaElem {
    int adat;
    ListaElem* kov;
};

ListaElem* Keszit(int Tomb[], int TombHossz) {
    ListaElem* Eleje = nullptr;
    //int TombHossz = sizeof(Tomb) / sizeof(*Tomb);
    for (int i = 0; Tomb[i] != -1 && i < TombHossz; i++) {
        ListaElem* Kovi = new ListaElem;
        Kovi->adat = Tomb[i];
        Kovi->kov = Eleje;
        Eleje = Kovi;
    }
    return Eleje;
}

void Kiir(ListaElem* Eleje) {

    /* ListaElem* iter;
    for (iter = Eleje; iter != nullptr; iter = iter->kov) {
        std::cout << iter->adat<<" ";
    }*/

    ListaElem* iter;
    iter = Eleje;
    while (iter != nullptr) {
        std::cout << iter->adat << "\t" << iter->kov << std::endl;
        iter = iter->kov;
    }
    std::cout<<std::endl;
}

void del(ListaElem* Eleje) {
    //dinamikusan lefoglalt memoria torlese
    ListaElem* akt = Eleje;
    while (akt) {
        ListaElem* kov = akt->kov;
        delete akt;
        akt = kov;
    }
}


//Az elõzõ feladatot bõvítse tovább úgy, hogy olyan függvényeket ír,
//melyekkel a lista elejére és végére beszúrást szemléltethetjük!
//Próbálja is ki különbözõ értékekkel a függvényeket!

ListaElem* Elejere(ListaElem* Eleje, int adat){
    ListaElem* Elo = new ListaElem;
    Elo->adat = adat;
    Elo->kov = Eleje;
    Eleje = Elo;
    return Eleje;
}

ListaElem* Vegere(ListaElem* Eleje, int adat) {
    ListaElem* akt;
    akt = Eleje;
    while (akt->kov) {
        akt = akt->kov;
    }
    ListaElem* veg = new ListaElem;
    akt->kov = veg;
    veg->adat = adat;
    veg->kov = nullptr;

    return Eleje;
}


int main()
{
    std::cout << "Hello World!\n";

    int Tomb[] = { 1, 2, 4, 8, 16, -1, 32 };
    int TombHossz = sizeof(Tomb) / sizeof(*Tomb);
    //std::cout << TombHossz;

    ListaElem* Eleje = Keszit(Tomb, TombHossz);
    Kiir(Eleje);
    Eleje = Elejere(Eleje, 7);
    Kiir(Eleje);
    Eleje = Vegere(Eleje, 14);
    Kiir(Eleje);
    del(Eleje);
}

