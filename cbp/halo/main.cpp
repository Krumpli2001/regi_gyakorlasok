// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>

using namespace std;

// Driver program
int main()
{
    // This program will create different sequence of
    // random numbers on every program run

    // Use current time as seed for random generator
    srand(time(0));
    int rng;
    char valasz;
    char helyes;
    int pontok=0;

    for(int i = 0; i<24; i++){
        rng=(rand() % 140) + 1;
    //cout<<rng<<endl;

    if(rng==1){
        cout<<"Egy kilobajt tobb mint egy kibibajt"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }

    else if(rng==2){
        cout<<"A protokoll szabalyok halmaza, melyek a ”mit” kerdessel kapcsolatosak"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }

    else if(rng==3){
        cout<<"Az IXP az egyes ISP-ek közötti adatforgalmat biztosítja."<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==4){
        cout<<"A PAN kisebb halozatot jelent, mint a MAN"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==5){
        cout<<"A binaris mertekegyseg rendszer jellemzoen memoriameretre utal"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==6){
        cout<<"Az internet reteg az OSI modellben talalhato"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==7){
        cout<<"Egy informatikai mernok szamara a savszelesseg egysege a Hz"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==8){
        cout<<"Az interface-ekre virtualis kommunikacio jellemzo"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==9){
        cout<<"3G halozat resze a  WiMax"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==10){
        cout<<"A 2.5G mobilhalozat resze a WAP es az EDGE"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==11){
        cout<<"A protokoll a szolgaltatas implementaciojanak felel meg"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==12){
        cout<<"Az adatkapcsolati reteg a szegmenseket tovabbitja"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==13){
        cout<<"RNC jelentese Radio Network Controller"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==14){
        cout<<"Nyugtazott datagram az osszekottetes nelkulire jellemzo"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==15){
        cout<<"A szallitasi reteg csomagokat tovabbit"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==16){
        cout<<"Összekottetes nelkuli rendszerre pelda a postai levelszolgaltatas"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==17){
        cout<<"A gyakorlati modellben a szallitasi reteg a halozati reteg alatt van"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==18){
        cout<<"A Nyquist tetel az idealis atviteli csatornaval kapcsolatos"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==19){
        cout<<"AZ IT-ban hasznalt IEC mertekegyseg alapja a tizes szamrendszer"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==20){
        cout<<"ISP jelentese – Internet Service Provider"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==21){
        cout<<"MODEM: a kifejezes a „modulator” es „demodulator” szavakbol szarmazik, es olyan berendezest jelent, ami egy vivohullam modulaciojaval az analog jelet digitalissa alakitja"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==22){
        cout<<"Az 1G digitalis rendszer"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==23){
        cout<<"Virtualis LAN (Virtual LAN - VLAN) IEEE kodja a 802.10."<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==24){
        cout<<"A viszonyreteg az OSI modellben talalhato"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==25){
        cout<<"A csuszoablakos protokollnak resze a Piggy-back technika"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==26){
        cout<<"A forgalomszabalyozas 2 hoszt kozott ertelmezheto fogalom"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==27){
        cout<<"A szelektiv ismetlo protokoll hasznal negativ nyugtat is"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==28){
        cout<<"A nem perzisztens CSMA szabad csatorna eseten azonnal adni kezd"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==29){
        cout<<"Az NRZ-L erteke csak 1-rol 0-ra torteno jelvaltas utan valtozik meg"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==30){
        cout<<"A MIMO parhuzamos csatornakkal noveli a sebesseget"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==31){
        cout<<"A QSS es a WPS kenyelmi funkciokat szolgal"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==32){
        cout<<"A 256-QAM egyetlen jelvaltozassal 16 bitet kodol"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==33){
        cout<<"Az NRZ-I kodolas alapja az NRZ-L jel"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==34){
        cout<<"A leghosszabb radiohullamok kepesek kovetni a fold gorbuletet"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==35){
        cout<<"A LAN kisebb halozatot jelent mint a WAN"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==36){
        cout<<"A CAT6 szabvany maximalis savszelessege 100 meteren 250MHz"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==37){
        cout<<"A CAT5e szabvany maximalis sebessege 4 erparon 100 Mb/s"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==38){
        cout<<"A rovidhullam visszaverodik az ionoszferarol"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==39){
        cout<<"A WEP titkositas b/g/n szabvanyoknak egyarant resze"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==40){
        cout<<"A Manchester kodot NOR mûvelettel kepezzuk"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==41){
        cout<<"A RP illetve az RR a kabel ragcsalok elleni vedelmet jelenti"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==42){
        cout<<"A DSSS 11db egymast reszben atfedo csatornat hasznal"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==43){
        cout<<"Az NRZ-S kodolast az USB szabvany hasznalja"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==44){
        cout<<"A binaris mertekegyseg rendszer jellemzoen hattertar meretere utal"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==45){
        cout<<"A WEP az ”n” szabvanynak mar nem resze"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==46){
        cout<<"Az interface-ekre valodi kommunikacio jellemzo"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==47){
        cout<<"Az NRZ-I kodolas alapja az NRZ-M jel"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==48){
        cout<<"A DSSS 11db csatornaja reszben sem fedi at egymast"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==49){
        cout<<"Egy megabajt kevesebb mint egy mebibajt"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==50){
        cout<<"A Manchester kodot XOR mûvelettel kepezzuk"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==51){
        cout<<"A szolgaltatas mûveletek halmaza, es a ”mit” kerdessel kapcsolatosak"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==52){
        cout<<"A mikrohullam visszaverodik az ionoszferarol"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==53){
        cout<<"A QSS es a WPS noveli a rendszer vedettseget"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==54){
        cout<<"Az NRZ-M erteke csak 1-rol 0-ra torteno jelvaltas utan valtozik meg"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==55){
        cout<<"A szolgaltatas a protokoll implementaciojanak felel meg"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==56){
        cout<<"A CAT6A szabvany maximalis savszelessege 100 meteren 500MHz"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==57){
        cout<<"A CAT5e szabvany maximalis sebessege 4 erparon 1000Mb/s"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==58){
        cout<<"A 2G mobilhalozat reszben digitalis megoldasu"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==59){
        cout<<"Az LSOH/LSZH a kabel mechanikai terhelesenek jelzese"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==60){
        cout<<"A LAN nagyobb halozatot jelent mint a WAN"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==61){
        cout<<"Egy informatikai mernok szamara a savszelesseg egysege a bit/sec"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==62){
        cout<<"Az ISP az egyes IXP-k kozotti adatforgalmat biztositja"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==63){
        cout<<"A MIMO vedettsege gyenge a visszaverodesekkel szemben"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==64){
        cout<<"A rovidhullamok kepesek kovetni a fold gorbuletet"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==65){
        cout<<"Az NRZ-I kodolast az USB szabvany hasznalja"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==66){
        cout<<"A 256-QAM egyetlen jelvaltozassal 8 bitet kodol"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==67){
        cout<<"A vezerjeles gyûrû nem utkozesmentes"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==68){
        cout<<"A kitoltes mezo hossza minden esetben tobb mint 0 bajt"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==69){
        cout<<"A binaris visszaszamlalas protokoll eseten a hostok sorszama binaris"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==70){
        cout<<"ALOHA rendszerek eseten a nyugtazo csatornakban is lehet utkozes"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==71){
        cout<<"Az adatkapcsolati retegben nincs forgalomszabalyzas"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==72){
        cout<<"A tipus/hossz mezo tipust jelol, ha tartalma kisebb egyenlo, mint 0x0600"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==73){
        cout<<"A BPDU protokoll alapja a MAC cim"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==74){
        cout<<"Az 1-perzisztens CSMA nem vizsgalja a csatorna foglaltsagat"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==75){
        cout<<"A Hamming-tavolsagot egy XOR mûvelettel szamithatjuk ki"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==76){
        cout<<"Paros paritas eseten a paritasbit 0, ha a kodszoban az 1-esek szama paros"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==77){
        cout<<"A 8B/10B kodolas 8 bitenkent legalabb 3 szintvaltast tartalmaz"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==78){
        cout<<"A 0G mobilhalozat jellemzoje az automatikus hivasinditas"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==79){
        cout<<"Az 1G mobilhalozat reszben digitalis megoldasu"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==80){
        cout<<"A 2,5 G mobilhalozat resze UMTS"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==81){
        cout<<"A 3G mobilhalozatnak nem resze a WCDMA"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==82){
        cout<<"Egy megabajt kisebb, mint egy mebibajt"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==83){
        cout<<"A Shannon tetel az idealis atviteli csatornaval kapcsolatos"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==84){
        cout<<"Az IEEE 802.3 szabvanyba a „Base” szo jelentese „alapveto”"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==85){
        cout<<"A „T-568A” es „T-568B” bekotese 50%-ba megegyezik"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==86){
        cout<<"Az LSOH/LSZH a kabel mechanikai tesztelesenek jelzese"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==87){
        cout<<"Az NRZ-S kodolast a USB szabvany hasznalja"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==88){
        cout<<"A mikrohullam visszaverodik az ionoszferabol"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==89){
        cout<<"Az AES a WEP2 vedelem algoritmusa"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==90){
        cout<<"Az LDPC kodolas matematikailag polinomokra epul"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==91){
        cout<<"A csuszoablakos protokoll tartalmaz onallo nyugtakeretet"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==92){
        cout<<"Egy Switch-ekkel osszekapcsolt halozatban nem fordulhat elo utkozes"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==93){
        cout<<"A Hamming-tavolsag egy NOR mûvelettel szamithatjuk ki"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==94){
        cout<<"A binaris konvolucios kodok estebe nincsenek üzeneti hatarok"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==95){
        cout<<"Az LLC alreteg felel a csatorna kiosztasaert"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==96){
        cout<<"A versenyhelyzetben levo protokollok nagy terhelesnel teljesitenek jol"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==97){
        cout<<"A karakterszamlalas egy serulesvedett keretezesi megoldas"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==98){
        cout<<"Paros paritas eseten a paritasbit 0, ha az 1-esek szama paros"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==99){
        cout<<"A p-perzisztens CSMA szabad csatorna eseten azonnal adni kezd"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==100){
        cout<<"A QoS-t hat parameterrel hatarozzuk meg"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==101){
        cout<<"A CAT7 szabvany maximalis sebessege 100 meteren 1Gb/s"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==102){
        cout<<"A MAC cimek nem tartalmaznak lokalizacios informaciokat"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==103){
        cout<<"A Simplex ""megall es var"" protokoll szinkronizaciot hasznal"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==104){
        cout<<"A keret elotag fo funkcioja az idoszinkronizacio"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==105){
        cout<<"A NEXT kozelvegi athallast jelent"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==106){
        cout<<"Az IPv4-ben egy halozatcime mindig 0-ra vegzodik"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==107){
        cout<<"A 802.11 szabvany az Ethernet-re vonatkozik"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==108){
        cout<<"A gyakorlati modellben az adatkapcsolati reteg a fizikai reteg alatt talalhato"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==109){
        cout<<"A DNS idoben sokkal az URL utan jelentmeg"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==110){
        cout<<"Az UDP egy osszekottetes nelkuli protokoll"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==111){
        cout<<"Az LLC alreteg felel a keretek epsegeert"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==112){
        cout<<"A halozati reteg alapvetofeladata az utvonalvalasztas"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==113){
        cout<<"A mikrohullamok jol iranyithatoak"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==114){
        cout<<"A halozati retegben csomagok tovabbitodnak"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==115){
        cout<<"Az IEEE802.11 harom fele keretosztallyal dolgozik"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==116){
        cout<<"Paros paritas eseten a paritasbit 1, ha a kodszoban az 1-esek szama paratlan"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==117){
        cout<<"A CAT5e szabvany maximalis savszelessege 100 MHz"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==118){
        cout<<"Az adatkapcsolati reteg nem vegez forgalomszabalyozast"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==119){
        cout<<"Az IPv4 datagram maximalis merete 65535 bajt"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==120){
        cout<<"Az AES a WPA vedelem algoritmusa"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==121){
        cout<<"Az IT-ban hasznalt IEC mertekegysegrendszer alapja a kettes szamrendszer"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==122){
        cout<<"Az RP illetve az RR a kabel egesekor felszabadulo gazokra utal"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==123){
        cout<<"ALOHA rendszerek eseten a nyugtazo csatornaban nem fordulhat elo utkozes"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==124){
        cout<<"Vezerjeles vodor algoritmus eseten az adatok csak azonos sebesggel tavozhatnak"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==125){
        cout<<"A TCP fejreszben kotelezo az ellenorzo osszeg hasznalata"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==126){
        cout<<"A megjelenesi reteg az TCP/IP modellben talalhato"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }
    else if(rng==127){
        cout<<"A helyfoglalasos protokoll nem utkozesmentes"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==128){
        cout<<"A Layer 2 switch nem kepes az egyes VLAN-ok kozotti forgalomiranyitasra"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==129){
        cout<<"Egy geostacionarius mûholddal fix parabola antennaval kommunikalhatunk"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==130){
        cout<<"Az ethernet fejlec 2 bajttal hosszabb, mint a VLAN fejlec"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==131){
        cout<<"A CIDR az IPv4 merev szabalyait oldja fel"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==132){
        cout<<"Az 5G mobilhalozat legfontosabb tulajdonsaga a gyors valaszido es kesleltetes"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==133){
        cout<<"A datagram hasznalata az osszekottetes alapu rendszerekre jellemzo"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==134){
        cout<<"A 10 gigabites ethernet 5 kulonbozo jelszintet hasznal"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==135){
        cout<<"Az atlatszo darabolas eseten a csomagok egyesitese csak a cel hosztnal tortenik meg"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==136){
        cout<<"A CAT6 szabvany maximalis sebessege 100 meteren 10 Gb/s"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==137){
        cout<<"Az NRZ-S erteke minden jelvaltas utan megvaltozik"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==138){
        cout<<"A tipus/hossz mezo tipust jelol, ha tartalma nagyobb mint 0x0600"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==139){
        cout<<"Az UDP protokoll fejresze osszetettebb, mint a TCP protokoll fejresze"<<endl;
        helyes='h';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }else if(rng==13140){
        cout<<"Vezetekes atvitel eseten celszerû a hibadetektalas es az adatismetles"<<endl;
        helyes='i';
        cin>>valasz;
        if(valasz==helyes){
            cout<<"Jo valasz"<<endl;
            pontok=pontok+1;
            }
        else
            cout<<"A valasz rossz"<<endl;
    }

    }
    cout<<pontok<<"/24";
    return 0;
}
