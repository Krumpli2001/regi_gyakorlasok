#include <iostream>

struct par {
  string kulcs;
  string ertek;
  par* bal;
  par* jobb;
};

bool keres(par* p, string kulcs, string& ertek)
{
bool keres(par* p, string kulcs, string& ertek) {
  if(p == NULL) return false;
  if(kulcs == p->kulcs) {
    ertek = p->ertek;
    return true;
  } else if(kulcs < p->kulcs) {
    return keres(p->bal, kulcs, ertek);
  } else {
    return keres(p->jobb, kulcs, ertek);
  }
}
}