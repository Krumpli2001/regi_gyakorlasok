#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world! And all hail the rectangle!" << endl;
    int n;
    cout<<"Mekkora is legyen az a negyzet? ";cin>>n;
    int sor,oszlop;
    sor=0;
    while(sor<n){
        oszlop=0;
        while(oszlop<n){
            if(sor==0 or sor==n-1){
                cout<<"*";
            }
            else if(oszlop==0 or oszlop==n-1){
            cout<<"*";
            }
            else if(sor==oszlop or sor+oszlop==n-1){
                cout<<"*";
            }
            else
            cout<<" ";
            oszlop++;
        }cout<<endl;
        sor++;
    }
    return 0;
}
