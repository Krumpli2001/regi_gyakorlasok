// Prog1-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//K�rj�nk be egy sz�mot �s �rjuk ki az abszol�t �rt�k�t (T�bbf�le ki�rat�s megmutat�sa, pl. �rt�kad�ssal, an�lk�l, -x, -1*x)
//Ha a sz�m p�ros, �rjuk ki a fel�t
//N�zz�k meg, p�ratlan sz�m eset�n mi lesz a 2 - vel val� oszt�s eredm�nye

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Abszolut ertekek:"<<endl<<"A szamod: ";
    int a;
    cin >>a;
    if (a == 0) {
        cout << "NO!";
        return 0;
    }
    else if (a > 0) {
        cout << "Abszolut erteke: " << a<<endl;
        if (a % 2 == 0) {
            cout << "A fele: " << a / 2;
        }
    }
    else if (a < 0) {
        cout << "Abszolut erteke: " << a * (-1)<<endl;
        if (a % 2 == 0) {
            cout << "A fele: " << a / 2;
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
