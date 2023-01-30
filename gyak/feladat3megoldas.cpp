#include <iostream>

double avg(double lista[], int hossz) {
  int min = 0;
  int max = 0;
  double avg = 0.0;
  for(int i = 1; i < hossz; i++) {
    if(lista[i] < lista[min]) {
      min = i;
    }
    if(lista[i] > lista[max]) {
      max = i;
    }
  }
  for(int i = 0; i < hossz; i++) {
    if(i != min && i != max) {
      avg += lista[i];
    }
  }
  avg /= hossz - 2;
  return avg;
}

int main()
{

}