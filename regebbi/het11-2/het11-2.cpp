// het11-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// 
//�rjon programot, amely egy t�mb elemeivel l�ncolt list�t k�sz�t!
//A t�mb utols� eleme legyen `-1`, ez m�r ne ker�lj�n a list�ba!
//Az elemeket sz�rja be a lista elej�re!
//Figyelj�k meg, hogy �gy a lista ford�tott lesz a t�mbh�z k�pest!
//V�g�l jelezz�k ki az egyes elemeket rendre!


// het11-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 
//Az el�z� feladatot b�v�tse tov�bb �gy, hogy olyan f�ggv�nyeket �r,
//melyekkel a lista elej�re �s v�g�re besz�r�st szeml�ltethetj�k!
//Pr�b�lja is ki k�l�nb�z� �rt�kekkel a f�ggv�nyeket!

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


//Az el�z� feladatot b�v�tse tov�bb �gy, hogy olyan f�ggv�nyeket �r,
//melyekkel a lista elej�re �s v�g�re besz�r�st szeml�ltethetj�k!
//Pr�b�lja is ki k�l�nb�z� �rt�kekkel a f�ggv�nyeket!

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

