// fájlból olvas
#include <string>
void fajbolOlvas(string fajlnev, int adatok[], int db)
{
    std::string str;
    std::ifstream f(fajlnev);
    if (f.is_open())
    {
        for(int i = 0; i < db; i++)
        {
            std::getline(f, str);
            adatok[i] = std::stoi(str);
        }
    }
    f.close();
}

double osszes(const int adatok[], int db)
{
    double sum = 0;
    for(int i = 0; i < db; i++)
    {
        sum+=adatok[i];
    }
    return sum;
}

double atlag(const int adatok[], int db)
{
    double sum = osszes(adatok, db);
    sum = sum / (double)db;
    return sum;
}

void kilistaz(const int adatok[], int db)
{
    for (int i = 0; i < db; i++)
    {
        cout << i << ". nap " << adatok[i] << " uj fertozott\n";
    }
}