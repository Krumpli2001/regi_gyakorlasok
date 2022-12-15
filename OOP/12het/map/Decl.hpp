/* A kulcs-érték  adatpárok  egyedi kulcs  szerinti,  rendezett  tárolása a pair (temp_class)
 struktúrasablonnal (.first and .second).
A konténerek képviselik az adatszerkezeteket.
 A bennük tárolt adatokat általános algoritmusokkal dolgozhatjuk fel,
 iterátorok közvetítésével. 
A map elemei egy önkiegyensúlyozó  bináris  keresőfa adatstruktúrában
 helyezkednek el. */
//Templ/<map>/1
/********* Decl.hpp ************/
#include <iostream>
#include <map> // asszociatív tömb
#include <algorithm>

using namespace std;

typedef pair<string, int> sps;
map<string, int> hpmp;
map<string, int>::iterator ke;