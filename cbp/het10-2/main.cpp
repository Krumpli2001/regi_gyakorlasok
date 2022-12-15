#include <iostream>
#include "szemely.cpp"
#define hallgatok 2

using namespace std;

szemely* legtobb(szemely* sz, string st){
    int idx=0;
    for(int dx=0; dx<5; dx++){
    if(st==napok[dx]){
        idx=dx;
    }
    }
    for(int lo=1; lo<hallgatok; lo++){
            szemely* ma=0;
      if(ma->het[idx].oraszam<sz->het[idx].oraszam){
        if(sz->het[idx].oraszam>(sz-lo)->het[idx].oraszam){
            szemely* ma=sz;
        }

        }
    }
    return sz;
}



int main()
{
    cout<<"Budget Neptune"<<endl;
    szemely szemelyek[hallgatok];
    for(int m=0; m<hallgatok; m++){
        szemelybe(szemelyek + m);
    }
    string knap;
    cin>>knap;
    szemelyki(legtobb(szemelyek,knap));
    return 0;
}
