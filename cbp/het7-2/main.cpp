#include <iostream>
#define Nsz 6
#define Nm 10


using namespace std;

int main()
{
    int szamok[Nsz];
    for(int i=0; i<Nsz; i++){
        cout<<i+1<<". szam: ";cin>>szamok[i];
    }

    int szam;
    int* mutatok[Nm];
    cout<<"10 DB random szam, lehet az elozo 6-bol is: "<<endl;
    for(int j=0; j<Nm; j++){
        cin>>szam;
        int i=0;
        while(i<Nsz and szamok[i]!=szam){
            i++;
        }
        if(i==Nsz){
        mutatok[j]=0;
        }
        else{
        mutatok[j]=&szamok[i];
        //mutatok[j]=szamok+i;
        }
        }


    for(int k=0; k<Nm; k++){
            if(mutatok[k]!=0){
                cout<<"A mutatott szam: "<<*mutatok[k]<<" es a memoriacime: "<<mutatok[k]<<endl;
            }
            else
                cout<<mutatok[k]<<endl;
    }
    return 0;
}
