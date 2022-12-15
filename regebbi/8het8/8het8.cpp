// Olvasson be egész számokat valamilyen végjel megadásáig,
// majd mondja meg, hogy melyik érték hányszor szerepelt a bemeneten!
// Elsõ szint: Az értékek egy ismert, kis intervallumba eshetnek.
// A végjel legyen az elsõ, intervallumon kívüli érték megadása.

// Második szint: Nem ismert az értékek intervalluma, de csak 100-féle
// érték fordulhat elõ. A végjel lehet egy rögzített érték
// (pl. 0 vagy -1), esetleg egy nem szám jellegû adat, pl. "STOP".

// Harmadik szint: Tetszõleges különbözõ érték elõfordulhat.

// Negyedik szint: Az érték-darabszám párokat rendezve tárolja,
// és bináris kereséssel keresse meg az aktuális elemet!

#include <iostream>
#include <string>

using namespace std;

struct szamok
{
    int szam, dbszam;
};


int main() {
    szamok* szamlalo = nullptr;
    int meret = 4;
    int db = 0;
    szamlalo = new szamok[meret];
    while (true) {
        string beszam;
        cin >> beszam;
        if (beszam == "vege") {
            cout << "Kileptel a programbol.";
            return 0;
        }
        int hossz;
        bool szame = true;
        hossz = beszam.length();

        for (int i = 0; i < hossz; i++) {
            szame = isdigit(beszam[i]);
            if (not szame) { break; }
        }

        if (not szame) {
            cout << "Nem számot adtal meg!\n";
        }


        if (szame == true) {
            int intszam = stoi(beszam);
            if (db == meret) {
                szamok* uj;
                uj = new szamok[meret * 2];
                for (int i = 0; i < meret; i++) {
                    uj[i] = szamlalo[i];
                }
                delete[] szamlalo;
                szamlalo = uj;
                meret = meret * 2;
                cout << "A tarolhato szamok a ketszeresere nott\n";

            }
            bool volt = false;

            for (int index = 0; index < meret; index++) {

                if (intszam == szamlalo[index].szam) {
                    szamlalo[index].dbszam++;
                    volt = true;
                    break;
                }
            }

            if (not volt) {
                szamlalo[db].szam = intszam;
                szamlalo[db].dbszam = 1;
                db++;
            }


        }
    }

    delete[] szamlalo;
    return 0;
}