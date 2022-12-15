#include <iostream>
#define N 7

using namespace std;

int szamok(int a, int b){
    if(a>b)
        return 1;
    else if(b>a)
        return -1;
    else
        return 0;
    }

int main()
{
    cout << "Ket szamot var parameterul es eredmenyul"<<endl;
    cout<<"'1'-et ad vissza, ha az elso szam nagyobb a masodiknal,"<<endl;
    cout<<"'-1'-et, ha a masodik nagyobb az elsonel, `0`-at, ha egyenlok!" << endl;
    int a, b;
    cout<<"Elso szam: ";cin>>a;
    cout<<"Masodik szam: ";cin>>b;
    cout<<szamok(a,b)<<endl;

    int tomb[N];
    int i=0;
    while(i<N){
        cout<<"Gimme numbers "<<i+1<<". szam: ";
        cin>>tomb[i];
        i++;
    }
    i=0;
    while(i<N-1){
        if(szamok(tomb[i], tomb[i+1])==1)
            cout<<tomb[i]<<" es "<<tomb[i+1]<<endl;
        i++;
    }
    return 0;
}
