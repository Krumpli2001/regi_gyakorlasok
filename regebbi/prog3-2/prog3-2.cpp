// prog3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvassunk be 10 számot, majd írjuk ki az átlagukat (ehhez még nem kell tömb)
//Írjuk ki az átlag alatti értékeket(itt már muszáj tömbbe eltárolni a számokat)


#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    cout << "10 szam atlaga: \n";
    double ossz = 0;
    int szamok[10];
    for (int i = 0; i < 10; i++) {
        int n;
        cout << i + 1 << ". szamod: "; cin >> n;
        szamok[i] = n;
        ossz = ossz + n;
    }
    double atlag = ossz / 10;
    cout << "Atlaguk: " << atlag << endl;
    for (int i = 0; i < 10; i++) {
        if (szamok[i] < atlag) {
            cout << szamok[i] <<" ";
        }
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
