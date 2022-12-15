#include <iostream>
#include <fstream>

#define NEV "elsofajl.txt"

using namespace std;

int main()
{
    ofstream f(NEV);
    if(f.is_open()){
        f << "Ezt a fajlt c++ nyelven  irt programmal hoztam letre!\n";
        f<<"YIPPY!"<<endl;
        f<<"Hello vilag?";
        f.close();
    };
    return 0;
}
