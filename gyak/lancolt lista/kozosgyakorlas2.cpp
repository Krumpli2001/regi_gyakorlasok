#include <iostream>

int* sorozat(int a0, int d, unsigned n) {
    if(!n)
    {
        return nullptr;
    }

    else{
        int* dtomb = new int[n];
        for(int i = 0; i < (int)n; i++)
        {
            dtomb[i] = a0 + i * d;
        }
        return dtomb;
    }
    
}