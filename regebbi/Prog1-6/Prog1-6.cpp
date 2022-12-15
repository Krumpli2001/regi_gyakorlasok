// Prog1-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//K�rj�k be N �rt�k�t, majd �rjuk ki a faktori�lis�t
//Fizzbuzz: Koncentr�ci�s j�t�k, ahol 1 - t�l kezdve soroljuk a sz�mokat, �s minden 3 - mal
//osztaht� sz�m helyett azt kell mondani, hogy Fizz, az 5 - tel oszthat�k helyett, hogy Buzz.
//Ha 3 - mal �s 5 - tel is oszthat� a sz�m, akkor azt kell mondani, hogy FizzBuzz.
//�rjunk programot, ami ilyen m�don sz�mol 1 - t�l 100 - ig!
//Opcion�lis feladat : K�rj�nk be egy sz�mot, �s mondjuk meg r�la, hogy pr�msz�m - e

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
