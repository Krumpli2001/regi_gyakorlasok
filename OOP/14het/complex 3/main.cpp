#include "Decl.hpp"

int main(void)
 {
  in_ch* base=new in_ch(); base->b_mem(base,0);
  base->ch_objs();
  base->ch_objs("M_V_1357",1200,4200,2300,123,60,6);
  base->ch_objs("V_G_2468",1300,4300,2400,125,0,6);
  base->ch_objs("B_G_9048",1400,4400,2400,130,90,6);
  base->ch_objs("C_H_1234",1450,4400,2400,130,30,5);
  base->ch_objs("G_R_4321",1500,4450,2350,120,0,4,'F');
  base->ossz_csap(); 
  base->mind1();
  delete base; base->b_mem(base,1);
  return 0;
}