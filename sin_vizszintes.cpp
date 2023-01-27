#include <iostream>
#include <math.h>

int main()
{
    float x, y;
    int MX = 60, MY = 20;
    int gX, gY;
    char M[MX][MY];
    for(gY = 0; gY <= MY; gY++)
    {
        for(gX = 0; gX <= MX; gX++)
        {
            M[gY][gX] = ' ';
        }
    }

    for(x = - M_PI; x <= M_PI; x+=.1)
    {
        y = sin(x);
        
        int ix, iy;
        ix = x;
        iy = y;
        int center_y = MY/2;
        int center_x = MX/2;
        M[center_y - iy][center_x - ix] = '*';
    }

    for(gY = 0; gY <= MY; gY++)
    {
        for(gX = 0; gX <= MX; gX++)
        {
            std::cout << M[gY][gX];
        }
        std::cout << std::endl;
    }
}