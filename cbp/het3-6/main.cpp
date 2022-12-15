#include <iostream>
#define N 5

using namespace std;

int main()
{
    int szamok[N], i;
    cout<<"5 szam tologatasa"<<endl;
    i=0;
    while(i<N){
        cout<<i+1<<". szam: ";cin>>szamok[i];
        i++;
    }
    int el, cs;
    bool nemnullak;
    nemnullak=true;
    while(nemnullak){
        cout<<"Eltolas merteke: ";cin>>el;
        if(el>5)
            el=5;
        if(el<-5)
            el=-5;
        if(el>0){
            i=N-1-el;
            while(i>=0){
            szamok[i+el]=szamok[i];
            i--;}
            i=0;
            for(i;i<el;i++){
                szamok[i]=0;
            }
            cs=0;
            while(cs<N){
                cout<<szamok[cs]<<'\t';
                cs++;
            }
        cout<<endl;
        }
        else if(el<0){
            i=0;
            while(i<=N-1){
            szamok[i]=szamok[i-el];
            i++;}
            i=N-1;
            for(i;i>N-1+el;i--){
                szamok[i]=0;
            }
            cs=0;
            while(cs<N){
                cout<<szamok[cs]<<'\t';
                cs++;
            }
        cout<<endl;
        }
        else if(el==0){
            cs=0;
            while(cs<N){
                cout<<szamok[cs]<<'\t';
                cs++;
            }
        cout<<"Nincs valtozas";
        cout<<endl;
        }
        i=0;
        if(nemnullak){
            while(szamok[i]==0){
                if(szamok[N-1]==0){
                    nemnullak=false;
                }
                i++;
            }
        }
    }
    cout<<"Minden 0, a jateknak vege"<<endl;
    return 0;
}
