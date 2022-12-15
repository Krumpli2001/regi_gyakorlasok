#include <iostream>
#include <fstream>

#define NEV "main.cpp"

using namespace std;

int main()
{
    ifstream f(NEV, ios::binary);
    if(f.is_open()){
        f.seekg(0, ios_base::end);
        streampos vege = f.tellg();
        char* tomb =new char[vege];
        f.seekg(0, ios_base::beg);
        f.read(tomb, vege);
        for(char* i=tomb; i<tomb+vege; i++){
            cout<<*i;
        }
        cout<<endl;
        delete[] tomb;
        f.close();
    }
    return 0;
}
