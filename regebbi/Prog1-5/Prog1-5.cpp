// Prog1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Írjuk ki a számokat 1-tõl 100-ig
//Kérjük be N értékét, majd írjuk ki a számokat 1 - tõl N - ig
//Ellenõrizzük, hogy N > 1
//A végén írjuk ki a számok összegét
//Csak a páros számokat írjuk ki
//Opcionális feladat : kérjünk be két számot, majd soroljuk fel a köztük lévõ számokat,
//ha az elsõ szám nagyobb, akkor csökkenõ sorrendben

#include <iostream>
using namespace std;

int main()
{
    //A szamok szazig:
    for (int i = 0; i < 100; i++) {
        cout << i+1<<" ";
    }
    cout << endl;

    //A szamok N-ig es azok osszege
    int n;
    cout << "A szamok 1-tol egy megadott szamig: ";
    cin >> n;
    while (n < 1) {
        cout << "Adj meg egy nagyobb szamot!";
            cin >> n;
    }
    int ossz=0;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " ";
        ossz = ossz + (i+1);
    }
    cout << endl;
    cout <<"A szamok osszege: " << ossz<<endl;

    //Paros szamok N-ig
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    //Opcionalis feladat
    int a, b;
    cout << "Kerek 2 szamot: "; cin >> a >> b;    
    while (a == b) {
        cout << "Nem lehetnek egyenloek,\nkerek uj szamokat: ";
        cin >> a >> b;
    }
    //Ha a masodik nagyobb
    if (a < b) {
        for (a; a <= b; a++) {
            cout << a << " ";
        }
    }
    //Ha az elso nagyobb
    else if (a > b) {
        for (a; a >= b; a--) {
            cout << a << " ";
        }
    }

    std::cout << "\nGood bye cruel world!\n";
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
