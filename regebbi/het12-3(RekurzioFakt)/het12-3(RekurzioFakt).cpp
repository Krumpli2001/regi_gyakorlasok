/*A matematik�ban egy n nemnegat�v eg�sz sz�m faktori�lis�nak az n-n�l
kisebb vagy egyenl� pozit�v eg�sz sz�mok szorzat�t nevezz�k. Jel�l�se: n!,
amit �n faktori�lis�-nak vagy �n faktor�-nak olvasunk ki, �rjon programot amely k�pes a faktori�lis kisz�m�t�s�ra!*/


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