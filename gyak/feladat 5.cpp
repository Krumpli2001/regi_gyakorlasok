#include <iostream>

double** v2m(double* v, int hossz, int sor, int oszlop)
{
    double** matrix = nullptr;
    int count = 0;

    matrix = new double* [sor];
    for (int i = 0; i < sor; i++) {
            matrix[i] = new double[oszlop];
        }

    for(int i = 0; i < sor; i++)
    {
        for(int j = 0; j < oszlop; j++)
        {
            matrix[i][j] = v[count];
            count++;
        }
    }
    return matrix;
}

int main()
{
    double vector[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    double** matrix = nullptr;
    matrix = v2m(vector, 16, 4, 4);
}