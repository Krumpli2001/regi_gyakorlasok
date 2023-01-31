void sortByRate(bool rate, NobelDij *nobels, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rate){
                if (nobels[i].numWinnners / nobels[i].millionPeople > nobels[j].numWinnners / nobels[j].millionPeople)
                {
                    NobelDij t = nobels[i];
                    nobels[i] = nobels[j];
                    nobels[j] = t;
                }
            }
            else{
                if (nobels[i].numWinnners > nobels[j].numWinnners)
                {
                    NobelDij t = nobels[i];
                    nobels[i] = nobels[j];
                    nobels[j] = t;
                }
            }
        }
    }
}

void printAll(NobelDij *nobels, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << ". hely: "<< nobels[i].country << " (" << fixed << setprecision(2) << nobels[i].numWinnners / nobels[i].millionPeople << " Nobel dij / millio lakos) [Osszesen " << nobels[i].numWinnners << " Nobel]\n";
    }
}

void statistics(NobelDij *nobels, int n)
{
    double meanN = 0.0, meanM = 0.0;
    for (int i = 0; i < n; i++)
    {
        meanN += nobels[i].numWinnners;
        meanM += nobels[i].millionPeople;
    }
    meanN /= n;
    cout << "Orszagonkent atlagosan: " << meanM / n << " millio lakos\n";
    cout << "Atlagos Nobel-dijas szam orszagonkent: " << meanN / n << "\n";
}
