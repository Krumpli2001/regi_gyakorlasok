// Prog1-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//Kérjünk be két számot, ha az elsõ nagyobb, írjuk ki a különbségüket
//Ha mindkét szám kisebb, mint 10, akkor írjuk ki a szorzatukat is

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Ha I.>II. akkor kulombseg\n"<<"Ha kisebbek mind 10 akkor szorzat"<<endl;
    int a, b;
    cout << "Elso szam: "; cin >> a; cout << "Masodik szam: "; cin >> b;
    if (a > b) {
        cout << "Az elso nagyobb: " << a-b<<endl;
    }
    if (a < 10 and b < 10) {
        cout << "Kisebbek mint 10: " << a * b<<endl;
    }
    else
        cout << "Egyenloek vagy a masodik nagyobb, es nagyobbak mint 10";
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
