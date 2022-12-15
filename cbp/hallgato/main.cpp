#include <iostream>
#include <sstream>

#define ZH_SZAM 4

using namespace std;

//struktura prototipus
typedef struct hallgato {
    string vezetekNev;
    string keresztNev;
    string neptunKod;
    string targyNev;
    int zhPontok[ZH_SZAM];

}Hallgato;

//adatok bekerese a struktura alkalmazasaval
Hallgato input(){
    Hallgato ujHallgato;
    int i;

    cout << "Hallgato vezetekneve: ";
    cin >> ujHallgato.vezetekNev;
    cout << "Hallgato keresztneve: ";
    cin >> ujHallgato.keresztNev;
    cout << "Hallgato Neptun kodja: ";
    cin >> ujHallgato.neptunKod;
    cout << "Tantargy neve: ";
    cin >> ujHallgato.targyNev;
    cout << "A 4 ZH eredmeny rendre:\n" ;
    for(i=0;i<ZH_SZAM;i++){
        ujHallgato.zhPontok[i]=0;
        cin >> ujHallgato.zhPontok[i];
    }

    return ujHallgato;
}

//atlag kiszamitasa zhPontok alapjan
double atlagFv(Hallgato ujHallgato){
    int i;
    double szumma=0.0;
    for(i=0;i<ZH_SZAM;i++)
        szumma = szumma + ujHallgato.zhPontok[i];

    return (szumma/ZH_SZAM);

}

int main()
{
    double atlag; // ez elhagyhato, ha kiirasnal egybol a fv visszateresi erteket iratjuk ki, csak az atlathatosag miatt van deklaralva
    Hallgato ujHallgato;

    cout << "Hallgatoi adatok beolvasasa es ZH atlagok kiszamolasa" << endl;
    ujHallgato = input(); //adatok bekerese
    atlag = atlagFv(ujHallgato); //atlag kiszamitasa
    cout << "A hallgato atlaga az adott targybol: " << atlag << endl;

    return 0;
}
