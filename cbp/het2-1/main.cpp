#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cout<<"Melyik a nagyobb szam?"<<endl;
    cout<<"Elso szam: "<<endl;
    cin>>A;
    cout<<"Masodik szam: "<<endl;
    cin>>B;
    if(A==B)
        cout<<"A szamok egyenloek";
    else if(A>B)
        cout<<"Az elso szam nagyobb";
    else
        cout<<"A masodik szam nagyobb";
    return 0;
}
