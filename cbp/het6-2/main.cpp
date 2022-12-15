#include <iostream>
#define jegy 4
#include <sstream>

using namespace std;

    struct hallgato{
    string vezetek;
    string kereszt;
    string nkod;
    string targy;
    int jegyek[jegy];
    };

    hallgato be(){
    hallgato ujhallgato;
    int i=0;
    cout<<"Hallgato vezetek neve: ";
    cin>>ujhallgato.vezetek;
    cout<<"Hallgato kereszt neve: ";
    cin>>ujhallgato.kereszt;
    cout<<"Hallgato neptun kodja: ";
    cin>>ujhallgato.nkod;
    cout<<"Hallgato targya: ";
    cin>>ujhallgato.targy;
    cout<<"A zh-k eredmenye: ";
    for(i; i<jegy; i++){
        cin>>ujhallgato.jegyek[i];
    }
    return ujhallgato;
    }

double atlagf(hallgato ujhallgato){
    int i;
    double ossz=0.0;
    for(i; i<jegy; i++){
        ossz=ossz+ujhallgato.jegyek[i];
    }
    return (ossz/jegy);
    }

int main()
{
    double atlag;
    hallgato ujhallgato;
    cout << "Hallgatoi adatok beolvasasa es ZH atlagok kiszamolasa" << endl;
    ujhallgato = be();
    atlag = atlagf(ujhallgato);
    cout << "A hallgato atlaga az adott targybol: " << atlag << endl;
    return 0;
}
