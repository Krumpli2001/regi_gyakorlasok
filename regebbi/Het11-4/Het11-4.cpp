// het11-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// 
//Generáljunk monogramokat, életkort, ebbõl születési évet, magasságot minden láncolt lista elemnek, majd listázzuk!
//A generált listából töröljük a 2000 után született személyeket, majd listázzuk ki ezt is!

//Fordítsunk meg egy listát az elemei átláncolása által!
//Jelezzük ki elõzõ program listáját eredeti sorrendjében (és ezáltal az adatokat eredeti sorrendjükben), továbbá a megfordítottat is!
//Mindig a lista elejérõl veszünk el egy elemet,
//majd a megfordított lista elejére betesszük azt,
//így a lista megfordul.Végül az eredeti lista elfogy,
//amint ez megtörténik, a megfordított lista kész.

#include <iostream>
#include <string>
#include <time.h>

#define JELEN 2021

struct ListaElem {
    std::string nev;
    int kor;
    int szul;
    int magassag;
    ListaElem* kov;
};


//Lista letrehozasa random merettel, emberekkel
ListaElem* Keszit(ListaElem* Eleje) {
    Eleje = nullptr;

    srand(time(nullptr));   //random seed
    int ListaMeret = (rand() % 5) + 1;

    for (int i = 0; i < ListaMeret; i++) {
        ListaElem* Kovi = new ListaElem;
        Kovi->kor = (rand() % 130) + 1;         //kora
        Kovi->szul = JELEN - Kovi->kor;         //szul dat
        Kovi->magassag = (rand() % 230) + 70;   //magassag
        Kovi->nev = "X.X.";                     //monogram
        Kovi->nev[0] = rand() % 26 + 'A';
        Kovi->nev[2] = rand() % 26 + 'A';
        Kovi->kov = Eleje;
        Eleje = Kovi;
    }
    return Eleje;
}

//kiirja a listat
void Kiir(ListaElem* Eleje) {

    /* ListaElem* iter;
    for (iter = Eleje; iter != nullptr; iter = iter->kov) {
        std::cout << iter->adat<<" ";
    }*/

    ListaElem* iter;
    iter = Eleje;
    while (iter != nullptr) {
        std::cout << iter->nev << std::endl;
        std::cout << "Kora: " << iter->kor << " Szuletett: " << iter->szul << std::endl;
        std::cout << "Es valamiert a magassaga?: " << iter->magassag << std::endl;
        iter = iter->kov;
    }
    std::cout << std::endl;
}

//torli az egesz listat
void del(ListaElem* Eleje) {
    //dinamikusan lefoglalt memoria torlese
    ListaElem* akt = Eleje;
    while (akt) {
        ListaElem* kov = akt->kov;
        delete akt;
        akt = kov;
    }
}

//torli azokat akik 200 utan szulettek
void del2000(ListaElem* Eleje) {
    ListaElem* elozo = Eleje;
    ListaElem* akt = Eleje;
    while (akt) {

        ListaElem* kov = akt->kov;
        if (akt->szul > 2000) {
            elozo->kov = kov;

            delete akt;
            akt = kov;
        }
        elozo = akt;
        akt = kov;
    }
}

//Bekeri az ember adatai (segerd fv)
ListaElem bekeres(ListaElem E) {
    std::string* elejereember = &E.nev;
    std::cout << " emberunk monogramja: "; std::cin >> *elejereember;
    int kor;
    std::cout << "Kora: "; std::cin >> kor;
    int szul = JELEN - kor;
    int magassag;
    std::cout << "Magassaga(cm): "; std::cin >> magassag;

    E.nev = *elejereember;
    E.kor = kor;
    E.szul = szul;
    E.magassag = magassag;
    E.kov = nullptr;

    return E;
}

//Lista elejere szur be embert
ListaElem* Elejere(ListaElem* Eleje) {
    ListaElem* Elo = new ListaElem;
    ListaElem E;
    std::cout << "Elso";
    E = bekeres(E);
    Elo->nev = E.nev;
    Elo->kor = E.kor;
    Elo->szul = E.szul;
    Elo->magassag = E.magassag;
    Elo->kov = Eleje;
    Eleje = Elo;
    std::cout << std::endl;
    return Eleje;
}

//Lista vegere szur be embert
ListaElem* Vegere(ListaElem* Eleje) {
    ListaElem* akt;
    akt = Eleje;
    while (akt->kov) {
        akt = akt->kov;
    }
    ListaElem* veg = new ListaElem;
    akt->kov = veg;
    ListaElem E;
    std::cout << "Utolso";
    E = bekeres(E);
    veg->nev = E.nev;
    veg->kor = E.kor;
    veg->szul = E.szul;
    veg->magassag = E.magassag;
    veg->kov = nullptr;
    std::cout << std::endl;
    return Eleje;
}

ListaElem* Fordul(ListaElem* Eleje) {
    ListaElem* Eredetie = Eleje;
    ListaElem* uje = nullptr;
    ListaElem* akt = Eredetie;
    while (akt) {
        ListaElem* Eredetikov = akt->kov;
        akt->kov = uje;
        uje = akt;
        akt = Eredetikov;
    }
    return uje;
}

int main()
{
    std::cout << "Hello World!\n";

    ListaElem* Eleje = nullptr;
    Eleje = Keszit(Eleje);
    Kiir(Eleje);
    ListaElem* Forditva = Fordul(Eleje);
    Kiir(Forditva);
    /*Eleje = Elejere(Eleje);
    Kiir(Eleje);
    Eleje = Vegere(Eleje);
    Kiir(Eleje);*/
    //del2000(Eleje);
    //Kiir(Eleje);

    //del(Eleje);
    del(Forditva);
}

