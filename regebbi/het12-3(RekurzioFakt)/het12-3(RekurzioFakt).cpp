/*A matematikában egy n nemnegatív egész szám faktoriálisának az n-nél
kisebb vagy egyenlõ pozitív egész számok szorzatát nevezzük. Jelölése: n!,
amit „n faktoriális”-nak vagy „n faktor”-nak olvasunk ki, Írjon programot amely képes a faktoriális kiszámítására!*/


#include <iostream>

unsigned long long  factorialis(unsigned int i) {

    if (i <= 1) {
        return 1;
    }
    return i * factorialis(i - 1);
}

int  main() {
    std::cout << "Szam faktorialisa\n";
    int i;
    std::cin >> i;
    std::cout << "A(z) " << i << "  szam fakotrialisa : " << factorialis(i);
        return 0;
}