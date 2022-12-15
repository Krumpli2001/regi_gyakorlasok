#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Hany szamot akar beolvasni? ";
    cin>>a;
    int* szam;
    szam=new int[a];
    if(szam==NULL){
            cerr<<"nince memoria";
            return -1;}

    int i=0;
    while(i<a){
        cout<<i+1<<". szam: ";
        cin>>szam[i];
        i++;
    }
    i=0;
    while(i<a){
        cout<<szam[i]<<endl;
        i++;
    }
    delete[] szam;
    return 0;
}
