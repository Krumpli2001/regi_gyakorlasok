#include <iostream>

using namespace std;

int osszeg(int a, int b){
    return a+b;
    }

int main()
{
    int i,j, o;
    do{
    cout<<"Elso szam: ";cin>>i;cout<<"Masodik szam: ";cin>>j;
    o=osszeg(i,j);
    cout <<o<<" volt az eredmeny"<<endl;
    if(o%7!=0)
        cout<<"A szam nem volt oszthato 7-tel"<<endl;
    }while(o%7!=0);
    cout<<"A szam oszthato volt 7-tel!"<<endl;
    return 0;
}
