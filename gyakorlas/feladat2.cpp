#include <iostream>

struct ip{
    std::string cim;
    int darab;
};

int main()
{
    //std::cout<<"Hello world!\n";
    int db;
    std::cin>>db;
    ip* ipk = new ip[db];
    for(int i = 0; i < db; i++){
        ipk[i].darab = 0;
    }
    int akt = 0;
    std::string ipcim;
    while(akt < db){
        std::cin>>ipcim;
        for(int j = 0; j <= akt; j++)
        {
            if( ipk[j].cim == ipcim )
            {
                ipk[j].darab++;
                break;
            }
            if(ipk[j].cim == "")
            {
            ipk[j].cim = ipcim;
            ipk[j].darab++;
            break;
            }
        }
        akt++;
    }

    for(int i = 0; i < db; i++)
    {
        if(ipk[i].darab >= 1)
        {
            std::cout<<ipk[i].cim<<std::endl;
        }
    }
}