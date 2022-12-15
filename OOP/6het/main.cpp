#include "Decl.hpp"

int main(void)
 {
  dm_kiir nyzj('[',2,2), es('&',3,3), zzj(']',4,1)/* , felul , alap*/;  /* Objektumok példányosítása, beállítása */
  const dm_kiir alap;
  dm_kiir clone(nyzj);
  mind(nyzj/*felul*/,es,clone,alap.getsK());
  //felul =(zzj);
  //mind(felul,es,clone,alap.getsK());
  es.getMutat()->setIsm(4).setSor(-1).setKar('@');
  //felul.getMutat()->setIsm(4).setSor(2).setKar('F');
  mind(nyzj/*felul*/,es,clone,alap.getsK());
  return 0;
}