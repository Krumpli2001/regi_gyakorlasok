// het11-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// 
//�rjon programot, amely egy t�mb elemeivel l�ncolt list�t k�sz�t!
//A t�mb utols� eleme legyen `-1`, ez m�r ne ker�lj�n a list�ba!
//Az elemeket sz�rja be a lista elej�re!
//Figyelj�k meg, hogy �gy a lista ford�tott lesz a t�mbh�z k�pest!
//V�g�l jelezz�k ki az egyes elemeket rendre!

#include <iostream>

struct ListaElem {
    int adat;
    ListaElem* kov;
};

ListaElem* Keszit(int Tomb[], int TombHossz) {
    ListaElem* Eleje = nullptr;
    //int TombHossz = sizeof(Tomb) / sizeof(*Tomb);
    for (int i = 0; Tomb[i] != -1 && i<TombHossz; i++) {
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



int main()
{
    std::cout << "Hello World!\n";

    int Tomb[] = { 1, 2, 4, 8, 16, -1, 32 };
    int TombHossz = sizeof(Tomb) / sizeof(*Tomb);
    //std::cout << TombHossz;

    ListaElem* Eleje = Keszit(Tomb, TombHossz);
    Kiir(Eleje);
    del(Eleje);
}

