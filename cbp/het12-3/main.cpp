#include <iostream>

using namespace std;

int faktor(int n){
    if(n<2){
        return 1;
    }else{
    return n*faktor(n-1);
    }
    }

int fib(int n){
    if(n<2){
        return n;
    }else{
    return fib(n-1)+fib(n-2);
    }
    }

int main()
{
    cout << "Hello world!" << endl;
    int n=1;
    while(n!=0){
    cin>>n;
    cout<<faktor(n)<<endl;}
    cout<<INT_MAX;
    n=1;
    while(n!=0){
    cin>>n;
    cout<<fib(n)<<endl;}
    return 0;
}
