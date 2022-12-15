#include <iostream>

using namespace std;

int main()
{
    cout << "Rendszam ellenorzes" << endl;
    string rsz;
    int i;
    bool helyes;
    bool nemk;
    helyes=true;
    nemk=true;
    do{
    getline(cin,rsz);
    if(rsz.length()==1){
        if(rsz[0]=='k' or rsz[0]=='K'){
            nemk=false;
        }
    }
    if(rsz.length()==6 or rsz.length()==7)
        helyes=true;
    else
        helyes=false;
    if(rsz.length()==6){ //Ha 6 jegyu
    //cout<<rsz<<endl;
        for(i=0; i<=2; i++){
                //cout<<rsz[i];
            if((('a'<=rsz[i] and rsz[i]<='z') or ('A'<=rsz[i] and rsz[i]<='Z')) and helyes){
                helyes=true;
            }
            else
                helyes=false;}

        for(i=3; i<=5; i++){
            if('0'<=rsz[i] and rsz[i]<='9' and helyes){
                helyes=true;
            }
            else
                helyes=false;
        }
        if(rsz[3]=='0' and rsz[4]=='0' and rsz[5]=='0'){
                helyes=false;
    }
    }
    if(rsz.length()==7){
        for(i=0; i<=2; i++){
                //cout<<rsz[i];
            if((('a'<=rsz[i] and rsz[i]<='z') or ('A'<=rsz[i] and rsz[i]<='Z')) and helyes){
                helyes=true;
            }
            else
                helyes=false;}

        if(rsz[3]==' ' or rsz[3]=='-'){              //space/-
            helyes=true;
        }
        else
            helyes=false;

        for(i=4; i<=6; i++){
            if('0'<=rsz[i] and rsz[i]<='9' and helyes){
                helyes=true;
            }
            else
                helyes=false;
        }

        if(rsz[4]=='0' and rsz[5]=='0' and rsz[6]=='0'){
                helyes=false;}
    }
    if(helyes){
        cout<<endl<<"A rendszam helyes"<<endl;
    }
    if(nemk and not(helyes))
        cout<<endl<<"A megadott rendszam nem ervenyes"<<endl;
    }while(nemk);
    cout<<"Kileptel a programbol"<<endl;



    /*    char b;
        cin>>b;
        if('a'<=b and b<='z')
            cout<<b;*/


    return 0;
}

