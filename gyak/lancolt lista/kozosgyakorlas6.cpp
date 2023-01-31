#include <iostream>

struct NobelDij{ 
 string country;
 unsigned int numWinnners;
 double millionPeople;
} 

void swap(NobelDij* xp, NobelDij* yp)
{
    NobelDij temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSortWM(NobelDij *nobels, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (nobels[j].numWinnners / nobels[j].millionPeople < nobels[j + 1].numWinnners / nobels[j + 1].millionPeople)
                swap(&nobels[j], &nobels[j + 1]);
}

void bubbleSortN(NobelDij *nobels, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (nobels[j].numWinnners < nobels[j + 1].millionPeople)
                swap(&nobels[j], &nobels[j + 1]);
}

void sortByRate(bool rate, NobelDij *nobels, int n)
{
    if(rate)
    {
        bubbleSortWM(nobels, n);
    }
    else
    {
        bubbleSortN(nobels, n);
    }

}


void statistics(NobelDij *nobels, int n)
{
    double atlagm = 0.0;
    double atlagn = 0.0;
    for(int i = 0; i < n; i++)
    {
        atlagm += (double)nobels.millionPeople;
        atlagn += (double)nobels.numWinnners;
    }
    atlagm = atlagm / (double)n;
    atlagn = atlagn / (double)n;
    std::cout<<"Orszagonkent atlagosan: "<< atlagm << " millio lakos\n";
    std::cout<<"Atlagos Nobel-dijas szam orszagonkent: "<< atlagn;
}