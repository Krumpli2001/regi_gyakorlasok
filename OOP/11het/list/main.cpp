#include "Decl.hpp"
 
int main(void)
 {
  int i=0;
  auto it=hpmp.cbegin(); //Típus felismerés a fordítóra bízva!
  //hpmp[0]=-1; // Nincs [] operátor! Kiváltása:
  hpmp.pop_front(); hpmp.push_front(-1); // lst: x.pop/.push_front();
  hpmp.push_back(6);
  //for(i=0; i<10; i++) { cout << hpmp[i] << " "; hpmp.push_back(7+i); }
  for(it; i<10; it++, i++) { cout << *it << " "; hpmp.push_back(7+i); }
  cout << "\n";
  for(auto it : hpmp) { cout << it << " "; } // kell az "auto"!
  cout << "\n" << hpmp.size() << "\n";
  hpmp.pop_back();
  cout << "\n" << hpmp.size() << "\n";
  hpmp.resize(19); hpmp.push_back(20);
  for(it=hpmp.cbegin(); it!=hpmp.cend(); it++) { cout << *it << " "; }
  cout << "\n";
  for(list<int>::reverse_iterator it=hpmp.rbegin(); it!=hpmp.rend(); it++)
   { cout << *it << " "; }
  //sort(hpmp.begin(), hpmp.end()); // Nincs sort fgv. csak metódus!
  hpmp.sort(hasonlit); cout << "\n";  // lst: x.sort();
  for(auto it : hpmp) { cout << it << " "; } cout << "\n";
  hpmp.insert(hpmp.begin(),42); // Csak az elejére/végére lehet!
  //hpmp.insert(hpmp.end()-2,42);    // Csak az elejére/végére lehet!         */
//  hpmp.insert(hpmp.begin()/*,4*/,42);
//  hpmp.insert(hpmp.end()/*,2*/,42); 
  for(auto it : hpmp) { cout << it << " "; } cout << "\n";
  auto itb = hpmp.begin(); for(i=0;i<4;itb++,i++);
  hpmp.insert(itb,42);
  auto ite = hpmp.end(); for(i=0;i<2;ite--,i++);
  hpmp.insert(ite,42);
  for(auto it : hpmp) { cout << it << " "; } cout << "\n";
  //hpmp.insert(hpmp.begin(),hpmp.begin()+9,hpmp.begin()+15);
  for(i=0;i<5;itb++,i++);
  for(i=0;i<5;ite--,i++);
  hpmp.insert(hpmp.begin(),itb,ite);
  for(auto it : hpmp) { cout << it << " "; } cout << "\n";
  //remove(hpmp.begin(), hpmp.end(), 0); // NINCS törlés!
  //remove_if(hpmp.begin(), hpmp.end(), szuro); // NINCS törlés!
  //hpmp.erase((remove(hpmp.begin(), hpmp.end(), 0)),hpmp.end());
  hpmp.erase((remove_if(hpmp.begin(), hpmp.end(), szuro)),hpmp.end());  
  for(auto it : hpmp) { cout << it << " "; } cout << "\n\n";
  // Tartományalapú (ranged) for ciklus:    */
  for(auto& it : hpmp)  { cout << it << " "; } cout << "\n";
  for(auto& it : hpmp)  { cout << ++it << " "; } cout << "\n";
  for(auto& it : hpmp)  { cout << --it << " "; } cout << "\n";
  ke=find(hpmp.begin(), hpmp.end(), 20);
  if(ke!=hpmp.end()) cout << "\n" << *ke << "\n";
  cout << *max_element(hpmp.begin(), hpmp.end(), hasonlit) << "\n";
  cout << *min_element(hpmp.begin(), hpmp.end(), hasonlit) << "\n";
  cout << *minmax_element(hpmp.begin(), hpmp.end()).first << "\n";
  cout << *minmax_element(hpmp.begin(), hpmp.end()).second << "\n\n";
  cout << count(hpmp.begin(), hpmp.end(),0) << endl;
  cout << count_if(hpmp.begin(), hpmp.end(),szuro2) << "\n";
  hpmp.clear();
  cout << "\n" << hpmp.size() << "\n";
  if(hpmp.empty()) cout << "Üres a lista!\n";
  return 0; 
}
