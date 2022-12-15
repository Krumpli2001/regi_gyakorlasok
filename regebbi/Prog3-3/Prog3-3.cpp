// Prog3-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvassuk be két 3-dimenziós vektor koordinátáit
//írjuk ki a vektorok összegét, különbségét
//a dimenzió legyen #define - nal megadva

#include <iostream>
#define Dimen 3
using namespace std;

int main()
{
    std::cout << "Ket vektor osszege koliunbsege:\n";
    int veka[Dimen];
    int vekb[Dimen];
    char ch = 'x';
    cout << "Az elso vektor koordinatai:\n";
    for (int i = 0; i < Dimen; i++) {
        cout <<  char(ch+ i) << " koordinata: "; cin >> veka[i];
    }
    cout << "A masodik vektor koordinatai:\n";
    for (int i = 0; i < Dimen; i++) {
        cout << char(ch + i) << " koordinata: "; cin >> vekb[i];
    }
    cout << "Osszeguk: \nx: " << veka[0] + vekb[0] << "\ny: " 
         << veka[1] + vekb[1] << "\nz: " << veka[2] + vekb[2]<<endl;
    cout << "Kulonbseguk: \nx: " << veka[0] - vekb[0] << "\ny: "
        << veka[1] - vekb[1] << "\nz: " << veka[2] - vekb[2];
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
