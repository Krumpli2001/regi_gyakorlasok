#include "Decl.hpp"

void h_m_s::kiir_i1() const
 { cout << h << ":" << p << ":" << mp  << " [h:m:s]\n"; }

void in_ch::kiir_i4()
 { cout << "Licence: " << getLic() << "\nÚ: "; s_hms(getSwim()); kiir_i1();
   cout << "B: "; s_hms(getCycle()); kiir_i1(); 
   cout << "D: "; s_hms(getDepo()); kiir_i1();
   s_hms(getSwim()+getCycle()+getDepo()); cout << "Ú+B+D: "; kiir_i1();
   cout << "F: "; s_hms(getRun()); kiir_i1();
   cout << "T-: "; s_hms(getIj()); kiir_i1();
   cout << "Cél idő: "; s_hms(getSum()); kiir_i1();
   cout << "Kategória: " << kat << endl; }
 
in_ch& in_ch::kiir_cel()
 { kiir_i4(); return *this; }

in_gr_ch& in_gr_ch::kiir_cel()
 { kiir_i4(); cout << "Nem: " << nem << endl; return *this; }
  
tri_race& tri_race::setSum(int t)
 { sum=swim+cycle+run+depo-t; return *this; }

void mind1(in_ch* x_tri)
 { cout << endl;
   in_gr_ch* rp = dynamic_cast<in_gr_ch*>(x_tri);
   if(rp!=nullptr) { cout << "\nUnoka ";  }
   else
     {
      in_ch* rp = dynamic_cast<in_ch*>(x_tri); 
      if(rp!=nullptr) { cout << "\nGyerek "; }
      else
       {
        tri_race* rp = dynamic_cast<tri_race*>(x_tri);
        cout << "\nSzülő ";
       }
     }
   cout << "rajt idő: ";
   x_tri->kiir_i1();
   x_tri->setSum(x_tri->getIj()).kiir_cel();
 }
   
void felsz(tri_race* x_tri)
 { delete x_tri; cout << x_tri << endl; x_tri=0; }
