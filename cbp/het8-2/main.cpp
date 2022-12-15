#include <iostream>

using namespace std;

int main()
{
    int* ma;
    ma=new int;
    if(ma==0){
        cerr<<"nince memoria";
        return -1;
    }
    cout<<"Szam? ";
    cin>>*ma;
    cout<<"A szam: "<<*ma<<endl;
    delete ma;
    return 0;
}
