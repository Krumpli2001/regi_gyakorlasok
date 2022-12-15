#include <iostream>
#define N 10

using namespace std;

struct coor{
    double x;
    double y;
    double z;
    };

int main()
{
    coor coork[N];
    //coor* mcoor = coork;
    for(int i=0; i<N; i++){
        cout<<i+1<<". koordinata: ";
        cin>>(coork+i)->x>>(coork+i)->y>>(coork+i)->z;
        //cin>>mcoor->x;
    }
    for(int i=0; i<N; i++){
        cout<<(coork+i)->x<<" "<<(coork+i)->y<<" "<<(coork+i)->z<<endl;
    }
    return 0;
}
