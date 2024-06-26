#pragma once
#include <iostream>

using namespace std;

class sor_minta /* Osztály deklarációja */
 {
   private:
    char kar; /* kiirandó karakter */
    int ism;  /* soron belüli ismétlődések száma */
    int sor;  /* sorok száma, amennyiben megjelenjen */
   public:
    sor_minta() { kar='A'; ism=1; sor=1; }  /* Alapértelmezett konstruktor  */
    sor_minta(char kr, int im, int sr)  /* Alapérték beállító konstruktor  */
     { kar=kr; ism=im; sor=sr; }
	 int getIsm() const { return ism; }
   int getSor() const { return sor; }
   char getKar() const { return kar; }
	 sor_minta& setIsm(int v_im);
	 sor_minta& setSor(int v_sr);
	 sor_minta& setKar(char v_kr);
 };

class dm_kiir
 {
  private:
   sor_minta* mutat;
   const int sK;
  public:
   dm_kiir() : sK(4) /* Alapértelmezett konstruktor + inicializáló lista  */
    { 
     mutat = new sor_minta();
     cout << "Az alapértelmezett objektum címe: ";
     cout << mutat << endl;
    }
   dm_kiir(char kr, int im, int sr) : sK(4) /* Alapérték beállító konstruktor + inicializáló lista */
    { 
     mutat = new sor_minta(kr, im, sr);
     cout << "A paraméteres objektum címe: ";
     cout << mutat << endl;
    }
   void kiir(int i) const ;
   int getsK() const { return sK; }
   sor_minta* getMutat() const { return mutat; }
   ~dm_kiir()                                       /* Destruktor */
     { 
      delete mutat;
      cout << "Felszabadítottam az objektum memóriacímét, amely a: ";
      cout << mutat << endl;
     }
 };

void mind(const dm_kiir&, dm_kiir&, dm_kiir&, int);
 
//void mind(const dm_kiir& nyzj, dm_kiir& es, dm_kiir& zzj, int s_K);