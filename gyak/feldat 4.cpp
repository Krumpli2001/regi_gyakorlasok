#include <iostream>

struct szivar {
  double hossz;
  int atmero;
  szivar* kov;
};

void darabszam(szivar* szivarok, int* churchill, int* toro)
{
    int chdb = 0;
    int trdb = 0;
    szivar* kopi;
    kopi = szivarok;
    while(kopi->kov != nullptr)
    {
        if(((kopi->hossz >= 6.75) and (kopi->hossz <= 8)) and ((kopi->atmero >= 46) and (kopi.atmero <= 48)))
        {
            chdb++;
        }
        if(((kopi->hossz >= 5.5) and (kopi->hossz <= 6.5)) and ((kopi->atmero >= 48) and (kopi.atmero <= 54)))
        {
            trdb++;
        }

        kopi = kopi->kov;
    }

    *churchill = chdb;
    *toro = trdb;
}