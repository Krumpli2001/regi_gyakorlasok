#include<iostream>
//#include <string>
#include<fstream> 

struct triathlete {
  std::string lic;
  int swim;
  int cycle;
  int run;
  int depo;
  int sum;
};

std::string tri_result(std::string fbe)
{
    int sorok = 0;
    std::string egysor;
    std::ifstream f(fbe);
    if (f.is_open())
    {
    while (std::getline(f, egysor)) {
            sorok++;
        }
        f.clear();
        f.seekg(0);
    triathlete* tomb = new triathlete[sorok-1];
    sorok = 0;
    while (std::getline(f, egysor)) {
        if(sorok > 0)
        {
            int i = 0;
            int k = 0;
            std::string szam;
            while(egysor[i] != ' ')
            {
                i++;
            }
            for(int j = 0; j < i; j++)
            {
                tomb[sorok-1].lic = tomb[sorok-1].lic + egysor[j];
            }
            i++;
            k = i;
            while(egysor[i] != ' ')
            {
                i++;
            }
            for(int j = k; j < i; j++)
            {
                //std::string str = egysor[j];
                //szam.append(str);
                szam = szam + egysor[j];
            }
            tomb[sorok-1].swim = std::stoi(szam);
            szam = "";
            i++;
            k = i;
            while(egysor[i] != ' ')
            {
                i++;
            }
            for(int j = k; j < i; j++)
            {
                szam = szam + egysor[j];
            }
            tomb[sorok-1].cycle = std::stoi(szam);
            szam = "";
            i++;
            k = i;
            while(egysor[i] != ' ')
            {
                i++;
            }
            for(int j = k; j < i; j++)
            {
                szam = szam + egysor[j];
            }
            tomb[sorok-1].run = std::stoi(szam);
            szam = "";
            i++;
            k = i;
            while(egysor[i] != '\000')
            {
                i++;
            }
            for(int j = k; j < i; j++)
            {
                szam = szam + egysor[j];
            }
            tomb[sorok-1].depo = std::stoi(szam);
            
            tomb[sorok-1].sum = tomb[sorok-1].swim + tomb[sorok-1].cycle + tomb[sorok-1].run + tomb[sorok-1].depo;
        }
        sorok++;
    }
    f.close();
    
    triathlete elso = tomb[0];
    triathlete utolso = tomb[0];
    
    for(int i = 0; i < sorok-1; i++)
    {
        if(tomb[i].sum < elso.sum)
        {
            elso = tomb[i];
        }
        if(tomb[i].sum > utolso.sum)
        {
            utolso = tomb[i];
        }
    }
    std::cout<<elso.lic<<" => "<<elso.sum/3600<<":"<<(elso.sum%3600)/60<<":"<<(elso.sum%3600)%60<< " [h:m:s]\n";
    return utolso.lic;
    }
    else
    {
        std::cout<<"Sikertelen file-nyitás!\n";
        return "N/A!";
    }
}