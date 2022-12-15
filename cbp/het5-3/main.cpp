#include <iostream>

using namespace std;

int m(int a, int b){
    if(a>b){
        return a;
    }
    else
        return b;
    }

int main()
{
    int a, sz;
    cin>>sz;
    bool nagy=true;
    //cout<<m(a, b);
    while(nagy){
        cin>>a;
        if(sz*3>a){
            sz=m(a,sz);
        }
        else
            nagy=false;

    }
    cout << "Hello world!" << endl;
    return 0;
}
