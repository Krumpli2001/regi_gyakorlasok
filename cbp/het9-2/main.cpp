#include <iostream>
#define abc ('Z'-'A'+1)

using namespace std;

int main()
{
    cout<<"Vizsonor kodolas\nAdj kulcsot: ";
    string kulcs;
    cin>>kulcs;

    char* tabla[abc];                                           //Memoria foglalas
    for(int i=0; i<abc; i++){
        tabla[i]=new char[kulcs.length()];
        if(tabla[i]==NULL){
            cerr<<"Nincs memoria";
            return 1;
        }
    }

    for(int oszlop=0; oszlop<kulcs.length(); oszlop++){         //eltolas meghatarozasa es tablazat feltoltese
        kulcs[oszlop]=toupper(kulcs[oszlop]);
        int el=abs(kulcs[oszlop]-'A');
        for(int sor=0; sor<abc; sor++){
            tabla[sor][oszlop]='A'+el%abc;
            el++;
        }

    }

    cout<<"  | "<<kulcs<<endl;                                  //tablazat kiirasa
    for(int sor=0; sor<abc; sor++){
        cout<<char('A'+sor)<<" | ";
        for(int oszlop=0; oszlop<kulcs.length(); oszlop++){
            cout<<tabla[sor][oszlop]<<" ";
        }
        cout<<endl;
    }

    string szoveg;
    cin.ignore();
    while(cout<<"Add a kodolni valot: ", getline(cin, szoveg), szoveg.length()>0){
        for(int i=0; i<szoveg.length(); i++){
            if(isalpha(szoveg[i])){
                cout<<tabla[toupper(szoveg[i])-'A'][i%kulcs.length()];
            }
            else{
                cout<<szoveg[i];
            }
        }
        cout<<endl;
    }

    for(int i=0; i<abc; i++){
        delete[] tabla[i];
    }
    return 0;
}
