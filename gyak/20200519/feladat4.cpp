#include<iostream>
#include<fstream>
#include<cmath>
#include <iomanip>
//#include <math.h>

double area(std::string fbe)
{
    int sorok = 0;
    double* oldal1 = nullptr;
    double* oldal2 = nullptr;
    double* szog = nullptr;
    double* aream = nullptr;
    std::string szam;
    std::string egysor;
    std::ifstream f(fbe);
    if (f.is_open())
    {
    while (std::getline(f, egysor))
    {
        sorok++;
    }
    f.clear();
    f.seekg(0);

    oldal1 = new double[sorok];
    oldal2 = new double[sorok];
    szog = new double[sorok];
    aream = new double [sorok];
    sorok = 0;

    while (std::getline(f, egysor))
    {
        int i = 0;
        int k = 0;
        std::string szam;
        while(egysor[i] != ' ')
        {
            i++;
        }
        for(int j = k; j < i; j++)
        {
            szam = szam + egysor[j];
        }
        oldal1[sorok] = std::stoi(szam);
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
        oldal2[sorok] = std::stoi(szam);
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
        szog[sorok] = std::stoi(szam);
        sorok++;
    }

    for(int i = 0; i < sorok; i++)
    {
        aream[i] = oldal1[i] * oldal2[i] * sin(szog[i] * M_PI / 180) / 2.0;
        if((aream[i] > 2000.0) and (aream[i]) < 8000.0)
        {
            std::cout<<aream[i]<<" [nm]\n";
        }
    }

    double average = 0.0;

    for(int i = 0; i < sorok; i++)
    {
        average+=aream[i];
    }

    return average / sorok;

    f.close();
    }
    else
    {
        std::cout<<"Sikertelen file-nyitás!\n";
        return -1;
    }
}

int main()
{
    double ossz = area("text2.txt");
    std::cout<< ossz;
}