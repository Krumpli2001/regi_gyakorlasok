// Olvasson be eg�sz sz�mokat valamilyen v�gjel megad�s�ig,
// majd mondja meg, hogy melyik �rt�k h�nyszor szerepelt a bemeneten!
// Els� szint: Az �rt�kek egy ismert, kis intervallumba eshetnek.
// A v�gjel legyen az els�, intervallumon k�v�li �rt�k megad�sa.

// M�sodik szint: Nem ismert az �rt�kek intervalluma, de csak 100-f�le
// �rt�k fordulhat el�. A v�gjel lehet egy r�gz�tett �rt�k
// (pl. 0 vagy -1), esetleg egy nem sz�m jelleg� adat, pl. "STOP".

// Harmadik szint: Tetsz�leges k�l�nb�z� �rt�k el�fordulhat.

// Negyedik szint: Az �rt�k-darabsz�m p�rokat rendezve t�rolja,
// �s bin�ris keres�ssel keresse meg az aktu�lis elemet!

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
            cout << "Nem sz�mot adtal meg!\n";
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