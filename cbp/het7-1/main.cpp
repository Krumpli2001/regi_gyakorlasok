#include <iostream>

using namespace std;

int main()
{
    int a;
    int* ma;
    ma=&a;
    cin>>*ma;
    cout<<"A szam: "<<a<<endl;
    cout<<"A szam cime: "<<&a<<endl;


    cout<<"A szam: "<<*ma<<endl;
    cout<<"A szam cime: "<<ma<<endl;


    cout<<"A mutato cime: "<<&ma;
    return 0;
}
