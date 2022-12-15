#include <iostream>

using namespace std;

struct koord{
    double x,y,z;
    };

void be(koord* k){
    cout<<"X koordinata: ";cin>>k->x;
    cout<<"Y koordinata: ";cin>>k->y;
    cout<<"Z koordinata: ";cin>>k->z;
    }

int main()
{
    koord* k;
    k=new koord;
    be(k);
    cout<<"X: "<<k->x<<" ";
    cout<<"Y: "<<k->y<<" ";
    cout<<"Z: "<<k->z<<" ";

    return 0;
}
