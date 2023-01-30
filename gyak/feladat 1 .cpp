#include <iostream>

double* diff(double jel[], int hossz)
{
    double feldolgozas[hossz];
    feldolgozas[0] = 0;
    for(int i = 1; i < hossz; i++)
    {
        feldolgozas[i] = jel[i] - jel[i-1];
    }
    
    for(int i = 0; i < hossz; i++)
    {
        jel[i] = feldolgozas[i];
    }
    return jel;
}

int main()
{
    double jel[] = {1,0,0,0,1,1,0,1,0,1,0};
    int size = sizeof(jel)/sizeof(jel[0]);
    double* veg;
    veg = diff(jel, size);
    for(int i = 0; i < size; i++)
    {
        std::cout<< *(veg + i) << " ";
    }
}