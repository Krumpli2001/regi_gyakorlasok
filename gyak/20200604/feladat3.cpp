#include <iostream>

struct Lakas {
  int id; // Hirdetes azonositoja
  unsigned int terulet; // Alapterulet m^2-ben
  unsigned int ar; // Meghirdetett eladasi ar Ft-ban
};

void swap(Lakas* xp, Lakas* yp)
{
    Lakas temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void rendez(Lakas arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
        double haz1, haz2;
        haz1 = (double)arr[j].ar / (double)arr[j].terulet;
        haz2 = (double)arr[j + 1].ar / (double)arr[j+1].terulet;
            if (haz1 > haz2){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{

}