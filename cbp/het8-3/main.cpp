#include <iostream>
#include <cstdlib>

using namespace std;

struct koord{
    double x, y, z;
    };

koord* be(){
    koord* k=new koord;
    if(k==NULL){
        cerr<<"Nincs memoria";
        exit(1);
    }
    cout<<"X: ";cin>>(*k).x;
    cout<<"Y: ";cin>>k->y;
    cout<<"Z: ";cin>>(*k).z;
    return k;
}

int main()
{
    koord* mkoord;
    cout<<"Dinamikusan foglalt struktura,"
        <<"koordinatak kezelese"<<endl  ;
    mkoord=be();
    cout<<"A koordinatak: "<<endl;
    cout<<"X: "<<mkoord->x<<endl;
    cout<<"Y: "<<(*mkoord).y<<endl;
    cout<<"Z: "<<mkoord->z<<endl;
    delete mkoord;
    return 0;
}
