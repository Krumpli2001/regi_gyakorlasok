// https://cplusplus.com/reference/stl/
// Templ/<vector>/1
/********* Decl.hpp ************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> hpmp(3);
vector<int>::iterator ke; // un. "bejárók", az elemek címzéséhez 

// komparátor/predikátum (összehasonlító/tulajdonság hozzárendelő) függvény
bool hasonlit(int i, int j) { return i<j; } 
bool szuro (int i) { return ((i%2)==1 or (i%2)==-1); }
//bool szuro2 (int i) { return ((i%2)==0 /*and i!=0*/); }