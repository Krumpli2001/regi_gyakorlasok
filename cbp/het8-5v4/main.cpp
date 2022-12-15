#include <iostream>

using namespace std;


struct szamok{
    int szam, db;
    };

int keres(int mit, const szamok* miben, int n){
    int e=0;
    int v=n-1;
    while(e<=v){
        int f;
        f=(e+v)/2;
        if(miben[f].szam>mit){
            v=f-1;
        }
        else if(miben[f].szam<mit){
            e=f+1;
        }
        else{
            return f;
        }
    }
    return -e-1;
}

void athelyez(szamok* tomb, int n, int hely){
    for(int i=n; i>hely; i--){
        tomb[i]=tomb[i-1];
    }
}

int main()
{
    int meret=2;
    szamok* db=new szamok[meret];
    int kulonbozo=0;
    int szam=1;
    cout<<"Adj szamokat"<<endl;
    while(szam!=0){
        cout<<"A szamod: ";
        cin>>szam;
        if(szam==0){
            cout<<"Kileptel a programbol"<<endl;

            cout<<"A szamaid: "<<endl;
            for(int i=0; i<kulonbozo; i++){
                cout<<db[i].szam<<" elofordulasa: "<<db[i].db<<endl;
            }
            return 0;
        }
        int hely=keres(szam, db, kulonbozo);
        if(hely<0){
                if(kulonbozo==meret){
                    szamok* uj=new szamok[meret*2];
                    for(int i=0; i<kulonbozo; i++){
                        uj[i]=db[i];
                    }
                    meret *=2;
                    delete[] db;
                    db=uj;
                }
            hely=-(hely+1);
            athelyez(db, kulonbozo, hely);
            db[hely].szam=szam;
            db[hely].db=1;
            kulonbozo++;
        }
        else{
            db[hely].db++;
        }

    }
    delete[] db;
    return 0;
}
