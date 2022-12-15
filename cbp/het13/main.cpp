#include <iostream>

using namespace std;

int main()
{
    int szam;
    szam=1;
    cout<<"1tol-100ig a szamok: "<<endl;
    while(szam<=100){
        cout<<szam<<'\t';
        szam=szam+1;}
    cout<<endl;

    cout<<"Meddig akarod a szamokat? ";
    szam=1;
    int N,osszeg;
    osszeg=0;
    cin>>N;
    if(N>0){
    while(szam<=N){
        cout<<szam<<'\t';
        osszeg=osszeg+szam;
        szam=szam+1;}}
    else
        cout<<"Minuszba nem nonek a szamok"<<endl;
    cout<<"Osszeguk: "<<osszeg<<endl;

    szam=1;
    if(N>0){
            cout<<"A paros szamok: ";
    while(szam<=N){
            if(szam%2==0){
            cout<<szam<<'\t';}
        szam=szam+1;}}

    cout<<endl;

    szam=2;
    if(N>0){
            cout<<"A paros szamok: ";
    while(szam<=N){
            cout<<szam<<'\t';
        szam=szam+2;}}

    cout<<endl;
    cout<<endl;

    cout<<"2 szam kozotti szamok"<<endl;
    int elso;
    int masodik;
    cout<<"Elso szam: ";
    cin>>elso;
    cout<<"Masodik: ";
    cin>>masodik;
    if(elso>masodik){
        while(elso>=masodik){
            cout<<elso<<'\t';
            elso=elso-1;
        }
    }
    else
    while(masodik>=elso){
        cout<<elso<<'\t';
        elso=elso+1;
    }

    //Eddig tartott a video
    cout<<endl;
    cout<<"Faktorialis szamitas: ";
    cin>>N;
    int f;
    f=1;
    osszeg=1;
    while(N>=f){
        osszeg=osszeg*f;
        f++;
        }
    cout<<osszeg;
    cout<<endl;
    szam=1;
    cout<<"1tol-100ig a szamok: "<<endl;
    while(szam<=100){
            if(szam%15==0)
                cout<<"FizzBuzz"<<'\t';
            else if(szam%3==0)
                cout<<"Fizz"<<'\t';
            else if(szam%5==0)
                cout<<"Bubb"<<'\t';
            else
                cout<<szam<<'\t';
                szam=szam+1;}
    cout<<endl;

    cout<<"Prim-e?";
    cin>>N;
    f=2;
    bool BRIM;
    BRIM=true;
    while(N>f)
    if(N%f!=0){
        f++;
        }
    else if(N%f==0){
            BRIM=false;
        f=N;}
    if(BRIM)
        cout<<"BRIM!";
    else
    cout<<"Nope";

    return 0;
}
