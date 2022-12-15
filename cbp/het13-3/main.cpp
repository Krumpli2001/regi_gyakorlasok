#include <iostream>
#include <fstream>

#define NEV "main.cpp"

using namespace std;

int main()
{
    ifstream f(NEV);
    if(f.is_open()){
        f.seekg(0, ios_base::end);
        streampos vege= f.tellg();
        cout<<"A merete: "<<vege<<" bajt.";
        f.close();
    }else{
    cerr<<"nem jott ossze";
    }
    return 0;
}
