#include <iostream>

using namespace std;

struct coord{
    double x, y;
    };
#define N 3
struct harom{
    coord csucsok[3];
    };

void be(harom* mharom){
    for(int i; i<N; i++){
        cout<<"X: ";cin>>mharom->csucsok[i].x;cout<<"Y: ";cin>>mharom->csucsok[i].y;
    }
    }

void ki(const harom* mharom){
    for(int i; i<N; i++){
        cout<<"X: "<<mharom->csucsok[i].x<<" ";
        cout<<"Y: "<<mharom->csucsok[i].y<<endl;
    }
    }

int main()
{
    harom tomb[2];
    cout<<"3szogek"<<endl;
    for(int i=0; i<2; i++){
        cout<<i+1<<". haromszog adatai: "<<endl;
        be(tomb+i);
    }
    cout<<"A 3szogeid:"<<endl;
    for(int i=0; i<2; i++){
        cout<<i+1<<". haromszog adatai: "<<endl;
        ki(&tomb[i]);
    }
    return 0;
}
