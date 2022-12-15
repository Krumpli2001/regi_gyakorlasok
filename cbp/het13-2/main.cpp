#include <iostream>
#include <fstream>

#define NEV "szoveg.txt"

using namespace std;

int main()
{
    ifstream f(NEV);
    string sor;
    if(f.is_open()){
        while(getline(f, sor))
            cout<<sor<<endl;
        f.close();
        }else{
        cerr<<"Nem sikerult megnyitni a fajlt.";
        }


    return 0;
}
