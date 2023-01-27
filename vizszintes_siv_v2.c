#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int col, row;
    char str[] = "This is a test string";

    /* define the screen for print (80 width * 22 length)*/
    int width = 80;
    int length = 22;
    char printout[width][length];

    // setting entire matrix to spaces
    for (row=0; row < length ; row++)
    {
        for(col = 0; col < width; col++)
            printout[col][row] = ' ';
    }

    /* fill in the columns modulo the string to allow continuous output */
    for(col = 0; col < width ; col++)
    {
        printout[col][10 + (int) (10 * sin(M_PI * (float) col / 10))] = str[( col % strlen(str) )];
    }

    /* printout the entire matrix formatted */
    for (row = 0 ; row < length ; row++) {
        for (col = 0 ; col < width ; col++) {
            printf("%c", printout[col][row]);
        }
        printf("\n");
    }
} 