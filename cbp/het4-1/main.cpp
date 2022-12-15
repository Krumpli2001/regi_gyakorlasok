#include <iostream>
#include <cmath>

#define AMP 50000
#define STEP 1000

using namespace std;

int main()
{
    for(int i=0; i<=STEP; i++){
        for(int j=sin(2. * M_PI * i / STEP) * AMP + AMP;j>=0;j--){
            cout<<" ";
        }
        cout<<"*"<<'\n';
    }
    cout<<M_PI;
    return 0;
}
