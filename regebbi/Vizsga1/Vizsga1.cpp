// Vizsga1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>

#define MAX_DB 15
#define MAX_AR 1000000

struct termek {
    std::string nev;
    int ar;
    termek* kov;
};


termek* general(termek* horgony) {
    srand(time(nullptr));
    std::string nevek[] = {
      "Asztal", "Szek", "Kanape", "Kisagy", "Konyhapult", "Allolampa",
      "Fogas", "Komod", "Tukor", "Vaza", "Dohanyzoasztal", "Hintaszek"
    };
    // ...
    int db = rand() % MAX_DB;

    termek* eleje = horgony;
    if (db == 0) {
        std::cout << "A lista ures\n";
        return nullptr;
    }

    for (int i = 0; i < db; i++) {
        termek* uj = new termek;
        uj->ar = rand() % MAX_AR;
        uj->nev = nevek[rand() % 12];
        uj->kov = eleje;
        eleje = uj;
    }

    return eleje;
}

void kiir(termek* horgony) {
    termek* akt = horgony;
    while (akt){
        std::cout << akt->nev<<"\t";
        std::cout << akt->ar << std::endl;
        akt = akt->kov;
        }
}



int main()
{
    std::cout << "Hello World!\n";
    termek* e = nullptr;
    e = general(e);
    kiir(e);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

