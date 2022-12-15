#include <iostream>

using namespace std;

int main()
{
    cout << "Nem lehet 2 ugyan olyan szam!" << endl;
    int A,B,i,f;
    bool same;
    same=false;
    cout<<"1. szam: ";cin>>A;
    i=2;
    f=0;
    do{
        cout<<i<<". szam: ";cin>>B;
        i++;
        if(A%2==0,B%2==0)
        f++;
        if(B==A)
            same=true;
        A=B;
    }while(same==false);
    cout<<"Elcseszted, de sikerult "<<i-1<<" szamot beirnod"<<endl;

    cout<<"Ezek kozul "<<f<<" volt paros";

    return 0;
}
