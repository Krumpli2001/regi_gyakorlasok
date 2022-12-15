#include <iostream>

using namespace std;

int main()
{

    int muv;
    int i;
    int osszeg;
    do{
        cout << "Kinda szamologep\n"
            "1. Osszeadas (beker ket szamot es kiirja az osszeget)\n"
            "2. Szorzas\n"
            "3. Hatvanyozas\n"
            "4. Szamtani sorozat a0 es d alapjan n elemig (onallo feladat, a harom parametert be kell kerni)\n";\
        cin>>muv;
        if(muv==1){                                                                     //Osszeadas
            cout<<"Osszeadast valasztott, 0-at nyomva kiirjuk az osszeget"<<endl;
            i=0;
            osszeg=0;
            do{
                cin>>i;
                osszeg=osszeg+i;
            }while(i!=0);
            cout<<"Az osszeg: "<<osszeg<<endl;
            cout<<endl;
        }else if(muv==2){                                                               //Szorzas
            cout<<"A szorzast valasztotta, 0-at nyomva kiirjuk az osszeget"<<endl;
            osszeg=1;
            i=1;
            do{
                osszeg=osszeg*i;
                cin>>i;
            }while(i!=0);
            cout<<"Az osszeg: "<<osszeg<<endl;
            cout<<endl;
        }else if(muv==3){                                                               //Hatvanyozas
            cout<<"A hatvanyozast valasztotta, 0-at nyomva kiirjuk az osszeget"<<endl;
            int ha;
            int kit;
            cout<<"Hatvany alap: ";cin>>ha;
            cout<<"Kitevo: ";cin>>kit;
            i=1;
            osszeg=ha;
            if(kit!=0){
                for(i;i<kit;i++)
                    osszeg=osszeg*ha;
            cout<<"Eredmeny: "<<osszeg<<endl;}
            else
                cout<<"Az eredmeny 1"<<endl;
            cout<<endl;
        }else if(muv==4){
            int a1, n;
            cout<<"A szamtani sorozat n elemet valasztotta, 0-at nyomva kiirjuk az osszeget"<<endl;
            cout<<"A sorozat elso eleme: ";cin>>a1;
            cout<<"Diferencia: ";cin>>i;
            cout<<"Hanyadik elem? ";cin>>n;
            osszeg=a1;
            if(n<1)
                cout<<"Egy sorozatnak nincs 0/negativ eleme"<<endl;
             else if(a1!=0){
                    osszeg=osszeg+(i*(n-1));
                    cout<<"A sorozat n-edik tagja: "<<osszeg<<endl;
            cout<<endl;
            }
        }
    }while(muv==1 or muv==2 or muv==3 or muv==4);
    cout<<"Kileptel a szamolo gepbol"<<endl;
    return 0;
}
