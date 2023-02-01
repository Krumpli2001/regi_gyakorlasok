#include<iostream> 
#include <climits> // INT_MAX, INT_MIN

#define HOSSZ 10

int beker(int be_tb[], int *min, int *max)
{
 //int size = 0;
 //int size = sizeof(be_tb) / sizeof(be_tb[0]) - 1;
 //int size = HOSSZ;
 int size = 13;
 int i = 0;
 int sum = 0;
 int lmax = 0;
 int lmin = 1;
 for(int j = 0; j < size; j++)
 {
     if(be_tb[j] == 0)
     {
         i = j;
         break;
     }
 }

 for(int j = i+2; j < size; j+=2)
 {
     if((be_tb[j] % 2 == 0) or (be_tb[j] % 2 == -0))
     {
         sum+=be_tb[j];
         if(be_tb[j] > lmax)
         {
             lmax = be_tb[j];
         }
     }
 }

 for(int j = i + 1; j < size; j+=2)
 {
     if((be_tb[j] % 2 == 1) or (be_tb[j] % 2 == -1))
     {
         sum+=be_tb[j];
         if(be_tb[j] < lmin)
        {
             lmin = be_tb[j];
        }
     }
 }
 *min = lmin;
 *max = lmax;
 return sum;
}

void kiir(int szum, int min, int max)
{
 std::cout<<"Szum: "<<szum<<"\n";
 std::cout<<"Prtln min: "<<min<<"\n";
 std::cout<<"Prs max: "<<max<<"\n";
}