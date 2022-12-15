#include <iostream>

using namespace std;

int main()
{
    cout << "Banan, 2 szammal muveletek" << endl;
    int szam;
    cout << "1. szam:";
    cin >> szam;
    int szam2;
    cout << "2. szam:";
    cin >> szam2;
    cout << "Az elso szam 2szerese: " << szam*2 << endl;
    cout << "A ket szam osszege: " << szam+szam2 <<endl;
    cout<<"Szorzatuk: "<<szam*szam2<<endl;
    cout<<"szorzatbol osszeg:"<<szam*szam2-(szam+szam2);
    return 0;
}
