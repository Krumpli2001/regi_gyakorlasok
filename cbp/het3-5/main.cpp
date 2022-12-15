#include <iostream>
#define N 10

using namespace std;

int main()
{
    int szamok[N],i;
    cout<<"10 szam sorrendjenek cserelgetese"<<endl;
    i=0;
    while(i<N){
        cout<<i+1<<". szam: ";cin>>szamok[i];
        i++;
    }
    int sor1=1, sor2=1, cs=1;
    while(sor1>0 and sor1<11 and sor2>0 and sor2<11){
        cout<<"Elso sorszam: ";cin>>sor1;
        cout<<"Masodik sorszam: ";cin>>sor2;
        cs=szamok[sor1-1];
        szamok[sor1-1]=szamok[sor2-1];
        szamok[sor2-1]=cs;
        i=0;
        while(i<N){
            if(sor1>0 and sor1<11 and sor2>0 and sor2<11){
            cout<<szamok[i]<<'\t';}
            i++;
        }cout<<endl;
    }
    return 0;
}
