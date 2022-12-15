// Prog1-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Kérjük be N értékét, majd írjuk ki a faktoriálisát
//Fizzbuzz: Koncentrációs játék, ahol 1 - tõl kezdve soroljuk a számokat, és minden 3 - mal
//osztahtó szám helyett azt kell mondani, hogy Fizz, az 5 - tel oszthatók helyett, hogy Buzz.
//Ha 3 - mal és 5 - tel is osztható a szám, akkor azt kell mondani, hogy FizzBuzz.
//Írjunk programot, ami ilyen módon számol 1 - tõl 100 - ig!
//Opcionális feladat : Kérjünk be egy számot, és mondjuk meg róla, hogy prímszám - e

#include <iostream>
#include <math.h>
using namespace std;

int main()
{    
    //Fakt szamolo
    std::cout << "Hello World!\nFaktorialis szamologep: \n";
    int N, fakt=1;
    cin >> N;
    while (N < 0) {
        cout << "Pozitiv egesz szamot kerek vagy 0-at: ";
        cin >> N;
    }
    for (int i = 1; i <= N; i++) {
        fakt = fakt * i;
        //cout << fakt<<" ";
    }
    cout << fakt<<endl;

    //Fizzbuzz
    for (int i = 1; i <= 100; i++) {
        if ((i % 15) == 0) {
            cout << "FizzBuzz ";
        }
        else if ((i % 3) == 0) {
            cout << "Fizz ";
        }
        else if ((i % 5) == 0) {
            cout << "Buzz ";
        }
        else
            cout << i<<" ";
    }
    cout << endl;

    //Prim-e
    int P, fele;
    bool prim=true;
    cout << "Prim szam-e?\n";
    cin >> P;
    fele = ceil(sqrt(P));
    while (P < 1) {
        cout << "Pozitiv egesz szamot kerek: ";
            cin >> P;
    }
    if (P == 1) {
        prim=false;
    }
    else if (P == 2) {
        prim=true;
    }
    else{
        for (int i = fele; i >= 2; i--) {
            if ((P % i) == 0) {
                prim=false;
            }            
        }
    }
    if (prim == true) {
        cout << P << " Prim!\n";
    }
    if (prim == false) {
        cout << P << " Nem prim!\n";
    }
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
