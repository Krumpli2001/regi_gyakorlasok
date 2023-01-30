#include <iostream>

struct szivar {
  double hossz;
  int atmero;
  szivar* kov;
};

void darabszam(szivar* szivarok, int* churchill, int* toro) {
  *churchill = 0;
  *toro = 0;
  while(szivarok != NULL) {
    if(szivarok->hossz >= 5.5 && szivarok->hossz <= 6.5 and szivarok->atmero >= 48 and szivarok->atmero <= 54) {
      (*toro)++;
    }
    if(szivarok->hossz >= 6.75 && szivarok->hossz <= 8.0 and szivarok->atmero >= 46 and szivarok->atmero <= 48) {
      (*churchill)++;
    }
    szivarok = szivarok->kov;
  }
}