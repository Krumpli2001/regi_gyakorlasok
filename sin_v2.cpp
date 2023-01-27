#include <iostream>
#include <math.h>

int main()
{
    int meret = 100;
    char y[meret];
    char str[] = "This is a test string";

    for(int x = 0; x < meret-1; x++)
        y[x] = ' ';
    y[meret-1] = '\0';

    // print 20 lines, for one period (2 pi radians)
    for(int x = 0; str[x]!='\0'; x++)
    {
        y[meret/2 + (int) (meret/2 * sin(M_PI * (float) x / 10))] = str[x];
        printf("%s\n", y);
        y[meret/2 + (int) (meret/2 * sin(M_PI * (float) x / 10))] = ' ';
    }
}