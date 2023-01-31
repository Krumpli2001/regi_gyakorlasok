#include <iostream>

struct matrix {
  int sorok; // A matrix sorainak szama
  int oszlopok; // A matrix oszlopainak szama
  double** m; // Matrix mutatotombos alakban megadva; 'sorok' darab 'double*' mutato, ami 'oszlop' elemu 'double' tombot cimez.
};

void rotate90Clockwise(int a[N][N])
{
 
    // Traverse each cycle
    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
 
            // Swap elements of each cycle
            // in clockwise direction
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
        }
    }
}

matrix jobbraForgat(const matrix& mtx) {
    matrix mt = new matrix;
    mt.sorok = mtx.oszlopok;
    mt.oszlopok = mtx.sorok;
    mt.m = new double* [mt.sorok];
    for (int i = 0; i < sorok; i++) {
            j.palya[i] = new double[mt.oszlopok];
        }

    

}


