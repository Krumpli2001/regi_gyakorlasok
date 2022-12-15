// amuba.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//#define OSZLOP 11
//#define SOR 12

char** createtable(int meret)
{
    char** tabla = nullptr;
    tabla = new char* [meret + 1];

    for (int h = 0; h < meret + 1; h++)
    {
        tabla[h] = new char[meret + 2];

        for (int w = 0; w < meret +2; w++)
        {
            // fill in some initial values
            // (filling in zeros would be more logic, but this is just for the example)
            tabla[h][w] = '.';
        }
    }

    tabla[0][0] = ' ';
    tabla[0][1] = ' ';
    int betu = 65;
    for (int i = 2; i < meret + 2; i++) {
        tabla[0][i] = betu;
        betu++;
    }
    /*tabla[0][2] = 'A';
    tabla[0][3] = 'B';
    tabla[0][4] = 'C';
    tabla[0][5] = 'D';
    tabla[0][6] = 'E';
    tabla[0][7] = 'F';
    tabla[0][8] = 'G';
    tabla[0][9] = 'H';
    tabla[0][10] = 'I';
    tabla[0][11] = 'J';*/


    /*tabla[1][0] = '0';
    tabla[2][0] = '0';
    tabla[3][0] = '0';
    tabla[4][0] = '0';
    tabla[5][0] = '0';
    tabla[6][0] = '0';
    tabla[7][0] = '0';
    tabla[8][0] = '0';
    tabla[9][0] = '0';
    tabla[10][0] = '1';
    tabla[1][1] = '1';
    tabla[2][1] = '2';
    tabla[3][1] = '3';
    tabla[4][1] = '4';
    tabla[5][1] = '5';
    tabla[6][1] = '6';
    tabla[7][1] = '7';
    tabla[8][1] = '8';
    tabla[9][1] = '9';
    tabla[10][1] = '0';*/

    for (int i = 1; i < meret + 1; i++) {
        tabla[i][0] = '0';
    }
    for (int i = 10; i < meret + 1; i++) {
        tabla[i][0] = (i / 10) + '0';
    }
    for (int i = 1; i < meret + 1; i++) {
        tabla[i][1] = (i % 10) + '0';
    }

    return tabla;
}

void printtable(char** tabla, int meret) {
    for (int i = 0; i < meret + 1; i++) {
        for (int j = 0; j < meret + 2; j++) {
            std::cout << tabla[i][j];
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < 2; i++) {
        std::cout << std::endl;
    }
}

int oszllep() {
    std::cout << "Melyik oszlopba lepsz? ";
    char oszlop;
    bool helyes = true;
    int ell;
    do {
        std::cin >> oszlop;
        ell = oszlop;
        if    ((ell>=65 and ell<=90) or (ell>=97 and ell<=122)) {
            helyes = true;
        }
        else {
            helyes = false;
        }

        if (not helyes) {
            std::cout << "Ilyen oszlop nem letezik\n";
        }

    } while (not helyes);
    int re = oszlop;
    if (re >= 65 and re <= 90) {
        re = re - 63;
    }
    else
        re = re - 95;
    return re;
} 

int sorlep() {
    std::cout << "Melyik sorba lepsz? ";
    int sor;
    bool helyes = true;
    do {
        std::cin >> sor;
        if ((sor<11) and (sor>0)) {
            helyes = true;
        }
        else {
            helyes = false;
        }

        if (not helyes) {
            std::cout << "Ilyen sor nem letezik\n";
            std::cin >> std::ws;
            sor = 0;
        }
    } while (not helyes);
    return sor;
}

bool foglalt(char** table, int sor, int oszlop) {
    if (table[sor][oszlop] == '.') {
        return false;
    }
    else {
        return true;
    }
}

char** lep(char** tabla, int ki) {
    int sor = 0;
    int oszlop = 0;
    do {
        sor = sorlep();
        oszlop = oszllep();
        if (foglalt(tabla, sor, oszlop)) {
            std::cout << "Ez a hely mar foglalt\n";
        }
    } while (foglalt(tabla, sor, oszlop));

    if (ki == 1) {
        tabla[sor][oszlop] = 'X';
    }
    else {
        tabla[sor][oszlop] = 'O';
    }

    return tabla;
}

bool sorel(char** tabla, int ki , int meret) {
    int n = 0;
    bool nyertel = false;
    int oszlop2 = 2;
    for (int sor = 1; sor < meret +1; sor++) {
        for (int oszlop = 2; oszlop < meret + 2; oszlop++) {
            oszlop2 = oszlop;
            if (ki == 1) {
                n = 0;
                while (tabla[sor][oszlop2] == 'X') {
                    n++;
                    if (oszlop2 < meret + 1) {
                        oszlop2++;
                    }
                    if (n == 5) {
                        return true;
                    }
                    else break;
                    
                }
            }
            else {
                n = 0;
                while (tabla[sor][oszlop2] == 'O') {
                    n++;
                    if (oszlop2 < meret + 1) {
                        oszlop2++;
                    }
                    if (n == 5) {
                        return true;
                    }

                    else break;
                    
                }
            }
        }
    }
    return nyertel;
}

bool oszlel(char** tabla, int ki, int meret) {
    int n = 0;
    bool nyertel = false;
    int sor2 = 1;
    for (int sor = 1; sor < meret + 1; sor++) {
        sor2 = sor;
        for (int oszlop = 2; oszlop < meret + 2; oszlop++) {
            if (ki == 1) {
                n = 0;
                while (tabla[sor2][oszlop] == 'X') {
                    n++;
                    if (sor2 < meret) {
                        sor2++;
                    }
                    if (n == 5) {
                        return true;
                    }
                    else break;
                    
                }
            }
            else {
                n = 0;
                while (tabla[sor2][oszlop] == 'O') {
                    n++;
                    if (sor2 < meret) {
                        sor2++;
                    }
                    if (n == 5) {
                        return true;
                    }
                    else break;
                    
                }
            }

        }
    }
    return nyertel;
}

bool sregbal(char** tabla, int ki, int meret) {
    int n = 0;
    bool nyertel = false;
    int sor2;
    int oszlop2;
    for (int sor = 1; sor < meret + 1; sor++) {
        sor2 = sor;
        for (int oszlop = 2; oszlop < meret + 2; oszlop++) {
            oszlop2 = oszlop;
            if (ki == 1) {
                n = 0;
                while(tabla[sor2][oszlop2] == 'X') {
                    n++;
                    if ((oszlop2 < meret + 2) and (sor2 > 1)) {
                        oszlop2++;
                        sor2--;
                    }
                    if (n == 5) {
                        return true;
                    }
                    else break;
                    
                }
            }
            else {
                n = 0;
                while (tabla[sor2][oszlop2] == 'O') {
                    n++;
                    if ((oszlop2 < meret + 2) and (sor2 > 1)) {
                        oszlop2++;
                        sor2--;
                    }
                    if (n == 5) {
                        return true;
                    }
                    else break;
                    
                }
            }
        }
    }
    return nyertel;
}

bool sregjobb(char** tabla, int ki, int meret) {
    int n = 0;
    bool nyertel = false;
    int sor2;
    int oszlop2;
    for (int sor = 1; sor < meret + 1; sor++) {
        sor2 = sor;
        for (int oszlop = 2; oszlop < meret + 2; oszlop++) {
            oszlop2 = oszlop;
            if (ki == 1) {
                n = 0;
                while (tabla[sor2][oszlop2] == 'X') {
                    n++;
                    if ((oszlop2 > 2) and (sor2 > 1)) {
                        oszlop2--;
                        sor2--;
                    }
                    if (n == 5) {
                        return true;
                    }
                    else break;
                    
                }
            }
            else {
                n = 0;
                while (tabla[sor2][oszlop2] == '0') {
                    n++;
                    if ((oszlop2 > 2) and (sor2 > 1)) {
                        oszlop2--;
                        sor2--;
                    }
                    if (n == 5) {
                        return true;
                    }
                    else break;
                    
                }
            }
        }
    }
    return nyertel;
}

bool nyert(char** tabla, int ki, int meret) {
    if (sorel(tabla, ki, meret)) {
        return true;
    }
    if (oszlel(tabla, ki, meret)) {
        return true;
    }
    if (sregbal(tabla, ki, meret)) {
        return true;
    }
    if (sregjobb(tabla, ki, meret)) {
        return true;
    }
    else return false;

}


int main()
{
    std::cout << "Hello World!\nMekkora palyan szeretnel jatszni?\nMax meret az a 99x99 ";
    int meret;
    do {
        std::cin >> meret;
        if ((meret > 26) or (meret < 5)) {
            std::cout << "Nincs is ennyi betu... ";
        }
    } while ((meret > 26) or (meret<5));

    char** board = createtable(meret);
    printtable(board, meret);

    int ki = 1;
    bool nyertel = false;
    do {
       // for (int i = 0; i < 100; i++) {
            ki = 1;
            lep(board, ki);
            printtable(board, meret);
            nyertel = nyert(board, ki, meret);
            if (nyertel) {
                break;
            }

            //ki = 0;
            //lep(board, ki);
            //printtable(board, meret);
            //nyertel = nyert(board, ki, meret);
        //}
    } while (not nyertel);


    if (ki == 1) {
        std::cout << "X nyert";
    }
    else {
        std::cout << "O nyert";
    }
}
