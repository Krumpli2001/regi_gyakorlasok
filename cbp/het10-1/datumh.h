#ifndef DATUMH_H_INCLUDED
#define DATUMH_H_INCLUDED

#include <iostream>

using namespace std;

struct datum{
    int ev;
    char ho;
    char nap;
    };

void bed(datum*);
void kid(const datum*);
int hasond(const datum*, const datum*);

#endif // DATUMH_H_INCLUDED
