// Prog3-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvassunk be 10 sz�mot egy t�mbbe
//K�rj�nk be tov�bbi sz�mokat, �s mondjuk meg, h�nyszor szerepeltek a 10 elem� t�mbben
//Ha egyszer sem szerepelt, �lljon le a program


#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\nKerek 10 szamot!\n";
    int szamok[10];
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". szam: "; cin >> szamok[i];
    }
    int n,e;
    cout << "Most johet tobb szam, ha olyat adsz meg ami nem szerepelt\n" <<
            "Az elso 10ben akkor kilep a program\n";
    bool benne=true;
    while (benne) {
        cout << "Melyok szamnak az elofordulasara vagy kivancsi? ";
        cin >> n;
        e = 0;
        for (int i=0; i < 10; i++) {
            if (n == szamok[i]) {
                e++;
            }
        }
        if (e > 0) {
            benne = true;
            cout << e << " alkalommal fordult elo a " << n<<endl;
        }
        else
            benne = false;
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
