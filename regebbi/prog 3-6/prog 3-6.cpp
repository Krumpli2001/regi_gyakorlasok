// prog 3-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvassunk be 5 sz�mot egy t�mbbe
//K�rj�nk be tov�bbi sz�mokat, �s ennyivel shiftelj�k jobbra az elemeket, majd �rjuk ki a t�mb�t
//Negat�v sz�m eset�n balra shifteljen, �s 5 - n�l nagyobbra is m�k�dj�n
//Addig ism�telj�k, am�g nem 0 - t kapunk

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Gotta get shiftin'\n";
    int szamok[5];
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". szamod: "; cin >> szamok[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << szamok[i] << " ";
    }
    cout << endl;
    bool helyes = true;
    while (helyes) {
        int s;
        cout << "Mennyivel szeretned eltolni? "; cin >> s;
        if (s == 0) {
            helyes = false;
        }
        if (helyes) {
            int m;
            m = s % 5;
            int szamok2[5];
            if (s > 0) {
                for (int i = 0; i < 5; i++) {
                    szamok2[(i + m) % 5] = szamok[i];

                }
                for (int i = 0; i < 5; i++) {
                    szamok[i] = szamok2[i];
                }
            }
            if (s < 0) {
                for (int i = 0; i < 5; i++) {
                    szamok2[(5+i+m)%5] = szamok[i];
                }
                for (int i = 0; i < 5; i++) {
                    szamok[i] = szamok2[i];
                }
            }
        }
        for (int i = 0; i < 5; i++) {
            cout << szamok[i] << " ";
        }
        cout << endl;
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
