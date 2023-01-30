#include <iostream>

double** v2m(double* v, int hossz, int sor, int oszlop) {
  double** m = (double**)malloc(sor * sizeof(double*));
	for (int i = 0; i < sor; i++)
	{
		m[i] = (double*)malloc(oszlop * sizeof(double));
	}
  for(int i = 0; i < sor; i++) {
    for(int j = 0; j < oszlop; j++) {
      m[i][j] = v[i * oszlop + j];
    }
  }
  return m;
}

int main()
{
    double vector[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    double** matrix = nullptr;
    matrix = v2m(vector, 16, 4, 4);
}