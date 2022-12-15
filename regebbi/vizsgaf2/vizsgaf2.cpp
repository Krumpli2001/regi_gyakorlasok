// vizsgaf2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

#define E 10

struct szam {
    int adat;
    szam* kov;
};


void kiirtomb(int* lista) {
    for (int i = 0; i < E; i++) {
        std::cout << lista[i] << " ";
    }
}

szam* lancolas(szam* szamok, int* lista) {
    szamok = nullptr;
    for (int i = 0; i < E; i++) {
        szam* uj = new szam;
        uj->adat = lista[i];
        uj->kov = szamok;
        szamok = uj;
    }
    return szamok;
    }

void lanckiir(szam* szamok) {
    szam* akt = szamok;
    while (akt) {
        std::cout << akt->adat;
        akt = akt->kov;
        std::cout << " ";
    }
}

szam* fordit(szam* szamok) {
    szam* akt = szamok;
    szam* elozo = nullptr;
    szam* kov = nullptr;
        elozo = szamok;
        kov = akt->kov;
        elozo->kov = nullptr;
        while (kov) {
            elozo = akt;
            akt = kov;
            kov = akt->kov;
            akt->kov = elozo;
        }
        return akt;
}



int main()
{
    srand(time(nullptr));

    std::cout << "Hello World!\n";
    
    srand(time(nullptr));

    int lista[E];
    int rszam;
    for (int i = 0; i < E; i++) {
        rszam = rand() % 99 + 1;
        lista[i] = rszam;
    }
    int listav2[E];

    int min = lista[0];
    for (int i = 0; i < E; i++) {
        if (lista[i] < min) {
            min = lista[i];
        }
    }
    listav2[0] = min;
    std::cout << min << "\n";

    int max = lista[0];
    for (int i = 0; i < E; i++) {
        if (lista[i] > max) {
            max = lista[i];
        }
    }

    int kovmin;

    for (int k = 1; k < E; k++) {
        kovmin = max;
    for (int i = 0; i < E; i++) {
        
        if ((lista[i] < kovmin) and (lista[i] > min)) {
            kovmin = lista[i];
        }
    }
        listav2[k] = kovmin;
        min = kovmin;
    }


    //std::cout << min<<"\n";
    std::cout << max << "\n";
    kiirtomb(lista);
    std::cout << std::endl;
    kiirtomb(listav2);
    std::cout << std::endl;

    szam* muatatok = nullptr;

    muatatok = lancolas(muatatok, listav2);
    lanckiir(muatatok);
    muatatok = fordit(muatatok);
    std::cout << std::endl;
    lanckiir(muatatok);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
