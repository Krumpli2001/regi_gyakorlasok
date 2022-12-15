// vizsgaf1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void mf(char m[5][5]) {

    char masol[5];
    char uj[5][5];
    for (int sor = 0; sor < 5; sor++) {
        int v = 0;
        for (int oszl = 0; oszl < 5; oszl++) {
            
            masol[v] = m[sor][oszl];
            v++;
        }
        for (int i = 0; i < 5; i++) {
            uj[i][4 - sor] = masol[i];
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << uj[i][j] << ", ";
        }
        std::cout << std::endl;
    }

}

void kiir(char m[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << m[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}



int main()
{

    char matrix[5][5] = { {'O', 'X', 'X', 'O', 'O'},
                          {'O', 'O', 'X', 'O', 'X'},
                          {'O', 'X', '0', 'X', 'O'},
                          {'X', 'X', 'X', 'X', 'X'},
                          {'O', 'O', 'O', 'O', 'O'} };
    std::cout << "Hello World!\n";
    std::cout << std::endl;

    char uj[5][5];

    mf(matrix);

    //uj[5][5] = matrix[5][5]; nem mukodik
    //kiir(uj);

  /*  for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << uj[i][j] << ", ";
        }
        std::cout << std::endl;
    }*/

    //char** mm = matrix;

    /*for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << matrix[i][j] << ", ";
        }
        std::cout << std::endl;
    }*/

    //std::cout << *matrix;
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
