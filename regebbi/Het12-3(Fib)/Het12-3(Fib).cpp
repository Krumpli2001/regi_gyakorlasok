// Het12-3(Fib).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//A Fibonacci - sz�mok a matematik�ban az egyik legismertebb m�sodrendben rekurz�v sorozat elemei.
//A nulladik eleme 0, az els� eleme 1, a tov�bbi elemeket az el�z� kett� �sszegek�nt kapjuk.
//�rjon programot amely  kisz�molja egy adott sz�m Fibonacci �rt�k�t!

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

