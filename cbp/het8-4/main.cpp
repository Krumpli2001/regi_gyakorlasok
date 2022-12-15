#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

int main()
{
    //char cstr[MAX+1];
    string alma;
    char* pcstr;
    cout<<"ADJ KARAKTEREKET! ";
    //cin>>cstr;
    getline(cin,alma);
    //pcstr=new char[strlen(cstr)+1];
    pcstr=new char[alma.length()+1];
    //strcpy(pcstr, cstr);
    strcpy(pcstr, alma.c_str());
    cout<<"A beolvasott karakterek mashol... "<<pcstr<<endl;
    delete[] pcstr;
    return 0;
}
