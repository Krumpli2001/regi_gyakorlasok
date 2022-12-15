#include "Decl.hpp"

int main(void)
 {
  tort t1(2, 3);
  tort t2(4, 5);
  //cin >> t1 >> t2; // -2/6 és 8/-5
  tort t3 = t1 * t2; // ambiguous esete
  //tort t3 = t1.operator*(t2); // egyszerre mindketto
  //t3 = operator*(t1, t3); // egyszerre mindharom
  cout << "\n Alap kiirasa a tortnek ('*'):\n\t\t t3 = "\
       << t3.getSzaml() << "/" << t3.getNevz() << endl;
  cout << "\n Túlterhelt kiirasa a torteknek ('*');\n\t\t t1 = "\
       << t1 << "\n\t\t t2 = " << t2 << "\n\t\t t3 = " << t3 << endl;
  t3 *= t2;
  cout << "\n Túlterhelt kiirasa a tortnek ('*='):\n\t\t t3 = " << t3 << endl;
  int i = 2 * 3;
  cout << "\n Alap kiirasa az egésznek:\n\t\t i = " << i << endl;
  tort t4 = t1 * i; // *2 illetve 2 * t1!? és 2 * t1 * 2
  cout << "\n Túlterhelt 'operator*' egész szorzassal:\n\t\t t4 = "\
       << t4 << endl;
  t4 *= 2;
  cout << "\n Túlterhelt 'operator*=' egész szorzassal:\n\t\t t4 = "\
       << t4 << endl;
  cout << "\n" << t1 << " és " << t2 << " és " << t3 << " és " << t4 << endl;
  return 0;
}
