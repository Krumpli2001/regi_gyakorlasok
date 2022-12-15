#include "Decl.hpp"
 
int main(void)
 {
  int i;
  hpmp[0]=-1;
  hpmp.push_back(6);
  for(i=0; i<10; i++)
   { cout << hpmp[i] << " "; hpmp.push_back(7+i); } 
  cout << "\n";
  for(i=0; i<hpmp.size(); i++) { cout << hpmp[i] << " "; }
  cout << "\n\n" << hpmp.size() << "\n";
  hpmp.pop_back();
  cout << "\n" << hpmp.size() << "\n";
  hpmp.resize(19);
  for(i=0; i<hpmp.size(); i++) { cout << hpmp[i] << " "; }
  cout << "\n"; hpmp.push_back(20);
  //Típus felismerés a fordítóra bízva! 
  for(auto it = hpmp.begin(); it != hpmp.end(); it++) { cout << (*it)/*(*it)*/ << " "; }
  cout << "\n";
  for(auto it = --hpmp.end(); it != --hpmp.begin(); it--) { cout << *it << " "; }
  cout << "\n";
  for(vector<int>::reverse_iterator it=hpmp.rbegin(); it!=hpmp.rend(); it++)
   { cout << *it << " "; }
  //sort(hpmp.begin(), hpmp.end()); cout << "\n";
  sort(hpmp.begin(), hpmp.end(), hasonlit); cout << "\n";
  for(auto it = hpmp.cbegin(); it != hpmp.cend(); it++) { cout << *it << " "; } // a c betu a begin es endnel a const-t jelenti
  cout << "\n";
  //hpmp.insert(hpmp.begin(),4/*,4*/,42);
  //hpmp.insert(hpmp.end(),2/*,2*/,42);
  hpmp.insert(hpmp.begin(),hpmp.begin()+9,hpmp.begin()+15);
  for(auto it : hpmp) { cout << it << " "; } // Nincs '*'!  (az it-nel nincs csillag, nem az h szorzas)
  cout << "\n";
  //remove(hpmp.begin(), hpmp.end(), 0); // NINCS törlés!
  //remove_if(hpmp.begin(), hpmp.end(), szuro); // NINCS törlés!
  //hpmp.erase((remove(hpmp.begin(), hpmp.end(), 0)),hpmp.end());
  hpmp.erase((remove_if(hpmp.begin(), hpmp.end(), szuro)),hpmp.end());  
  for(auto it : hpmp) { cout << it << " "; }
  cout << "\n";
  ke=find(hpmp.begin(), hpmp.end(), 20);
  if(ke!=hpmp.end()) cout << *ke/*&(*ke)*/ << "\n\n";
  cout << *max_element(hpmp.begin(), hpmp.end(), hasonlit) << "\n";
  cout << *min_element(hpmp.begin(), hpmp.end(), hasonlit) << "\n";
  cout << *minmax_element(hpmp.begin(), hpmp.end()).first << "\n";
  cout << *minmax_element(hpmp.begin(), hpmp.end()).second << "\n\n";
  cout << count(hpmp.begin(), hpmp.end(),0) << endl;
  cout << count_if(hpmp.begin(), hpmp.end(),szuro2) << "\n";
  hpmp.clear();
  cout << "\n" << hpmp.size() << "\n";
  if(hpmp.empty()) cout << "Üres a vektor!\n";
  return 0;
}