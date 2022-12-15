// prog3-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Olvassunk be 10 számot egy tömbbe
//Kérjünk be két sorszámot, és cseréljük fel a megfelelõ sorszámú elemeket, majd írjuk ki a tömböt
//Addig ismételjük, amíg érvénytelen sorszámot nem kapunk(< 1 vagy >10)

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Sorozat csere-bere\n";
    int szamok[10];
    cout << "Szamaid: \n";
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". szamod: "; cin >> szamok[i];
    }
    for (int i = 0; i < 10; i++) {
        cout << szamok[i]<<" ";
    }
    cout<<endl;
    bool helyes=true;
    while (helyes) {
        cout << "Melyik ket szamot szeretbed felcserelni?\n";
        int a, b, cs;
        cin >> a >> b;
        if (a < 1 or a>10 or b < 1 or b>10) {
            helyes = false;
        }
        if (helyes) {
            cs = szamok[a - 1];
            szamok[a - 1] = szamok[b - 1];
            szamok[b - 1] = cs;
            for (int i = 0; i < 10; i++) {
                cout << szamok[i]<<" ";
            }
            cout << endl;
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
