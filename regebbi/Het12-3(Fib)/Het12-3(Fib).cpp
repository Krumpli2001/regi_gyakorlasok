// Het12-3(Fib).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//A Fibonacci - számok a matematikában az egyik legismertebb másodrendben rekurzív sorozat elemei.
//A nulladik eleme 0, az elsõ eleme 1, a további elemeket az elõzõ kettõ összegeként kapjuk.
//Írjon programot amely  kiszámolja egy adott szám Fibonacci értékét!

#include <iostream>

unsigned long long Fib(int i) {
    if (i == 0) {
        return 0;
    }
    if (i == 1) {
        return 1;
    }
    return Fib(i - 1) + Fib(i - 2);
}

int main()
{
    std::cout << "Hello World!\n";
    int i = 5;
    std::cin >> i;
    std::cout << "\n"<<Fib(i);
}

