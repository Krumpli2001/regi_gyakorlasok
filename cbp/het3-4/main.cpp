#include <iostream>

using namespace std;
#define N 10

int main()
{
    cout<<"Hanyszor volt a szama tombbe (a tomb 10 elemu)?"<<endl;
    int szamok[N],i=0;
    while(i<N){
            cout<<i+1<<". szam jon: ";
            cin>>szamok[i];
        i++;
    }
    int eloford, szam;
    do{
        eloford=0;
        cout<<"Minek az elofordulasat szeretned? ";cin>>szam;
        i=0;
        while(i<N){
            if(szamok[i]==szam)
                eloford++;
            i++;
        }
        cout<<"A "<<szam<<" "<<eloford<<" alkalommal volt bent a tombe."<<endl;
    }while(eloford>0);
    return 0;
}
