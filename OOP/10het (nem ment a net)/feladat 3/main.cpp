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
  //for(i=0; i<hpmp.size(); i++) { cout << hpmp[i] << " "; }
  cout << "\n" << hpmp.size() << "\n";
  hpmp.resize(19);
  for(i=0; i<hpmp.size(); i++) { cout << hpmp[i] << " "; }
  cout << "\n";
  hpmp.push_back(20);
  //Típus felismerés a fordítóra bízva! Utolsó elem utánra mutat!
  // for(auto it = hpmp.begin(); it != hpmp.end(); it++) { cout << *it/*&(*it)*/ << " "; }
  // cout << "\n";
  // for(auto it = --hpmp.end(); it != --hpmp.begin(); it--) { cout << *it << " "; }
  // cout << "\n";

  // for(vector<int>::reverse_iterator it=hpmp.rbegin(); it!=hpmp.rend(); it++)
  // { cout << *it << " "; }

  //sort(hpmp.begin(), hpmp.end(), greater<int>()); cout << "\n";
  //a greater csokkenobe fogja rendezni, alapertelmezettje novekvo

  //sort(hpmp.begin(), hpmp.end(), hasonlit); cout << "\n";

  //for(auto it = hpmp.cbegin(); it != hpmp.cend(); it++) { cout << *it << " "; }
  cout << "\n";

  hpmp.insert(hpmp.begin()/*+4*//*,4*/,42);

  hpmp.insert(hpmp.end()-2, 2, 42);

  hpmp.insert(hpmp.begin(),hpmp.begin()+9,hpmp.begin()+15);

  for(auto it : hpmp) { cout << it << " "; } // Nincs '*'!
  cout << "\n";

  //a remove nem valtoztatja a tomb meretet, amit kivett annak a vegere feltolti megegzóyszer az eredeti veget

  //remove(hpmp.begin(), hpmp.end(), 0); // NINCS törlés!
  //remove_if(hpmp.begin(), hpmp.end(), szuro); // NINCS törlés!

  //az erase mar rendesen torol

  //hpmp.erase((remove(hpmp.begin(), hpmp.end(), 0)),hpmp.end());
  //hpmp.erase((remove_if(hpmp.begin(), hpmp.end(), szuro)),hpmp.end());  
  for(auto it : hpmp) { cout << it << " "; }
  cout << "\n";

  //

  ke=find(hpmp.begin(), hpmp.end(), 10);
  if(ke!=hpmp.end()) cout << *ke/*&(*ke)*/ << "\n\n";
  //cout << *max_element(hpmp.begin(), hpmp.end(), hasonlit) << "\n";
  //cout << *min_element(hpmp.begin(), hpmp.end(), hasonlit) << "\n";
  //cout << *minmax_element(hpmp.begin(), hpmp.end()).first << "\n";
  //cout << *minmax_element(hpmp.begin(), hpmp.end()).second << "\n\n";
  //cout << count(hpmp.begin(), hpmp.end(),0) << endl;
  //cout << count_if(hpmp.begin(), hpmp.end(),szuro2) << "\n";
/*hpmp.clear();
  cout << "\n" << hpmp.size() << "\n";
  if(hpmp.empty()) cout << "Üres a vektor!\n";*/

  for(auto it : hpmp) { cout << it << " "; }
  cout << "\n";

  system("pause");
  return 0;
}