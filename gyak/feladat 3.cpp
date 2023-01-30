#include <iostream>

double avg(double lista[], int hossz)
{
    double min = lista[0];
    double max = lista[0];
    double sum = 0;
    for(int i = 1; i < hossz; i++)
    {
        if(lista[i] < min)
        {
            min = lista[i];
        }
        if(lista[i] > max)
        {
            max = lista[i];
        }
    }
    for(int i = 0; i < hossz; i++)
    {
        sum+=lista[i];
    }
    sum = sum - min -max;
    return sum/(hossz-2);
}

int main()
{

}