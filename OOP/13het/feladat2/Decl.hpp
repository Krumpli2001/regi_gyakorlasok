#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

using namespace std;

class tri_race
 {
  int sum;
  protected:
   class memb
    {
      string lic;
      int swim, cycle, run, depo, ij;
     public:
      string getLic() const { return lic; }
      int getSwim() const { return swim; }
      int getCycle() const { return cycle; }
      int getRun() const { return run; }
      int getDepo() const { return depo; }
      int getIj() const { return ij; }
      void setLic(string lc) { lic=lc; }
      void setSwim(int sw) { swim=sw; }
      void setCycle(int cyc) { cycle=cyc; }
      void setRun(int rn) { run=rn; }
      void setDepo(int dp) { depo=dp; }
      void setIj(int t) { ij=t; }
      memb() { cout << "\nAz alapertelmezett szulo-tag adatszerkezet letrejott."; }
      ~memb() { cout << "\nFelszabaditottam a szulo-tag adatszerkezet memoriacimet"; }
    };
   memb tagok;
   tri_race() : sum(0)
    { tagok.setLic("--------"); tagok.setSwim(0); tagok.setCycle(0); tagok.setRun(0);
      tagok.setDepo(0); tagok.setIj(0);
      cout << "\nAz alapertelmezett szulo-adatszerkezet letrejott.";}  
   tri_race(string lc, int sw, int cyc, int rn, int dp, int t) : sum(0)
     { tagok.setLic(lc); tagok.setSwim(sw); tagok.setCycle(cyc); tagok.setRun(rn);
       tagok.setDepo(dp); tagok.setIj(t);
       cout << "\nA parameteres szulo-adatszerkezet letrejott."; }
   int getSum() const { return sum; }
   tri_race& setSum();
   virtual ~tri_race()
    { cout << "\nFelszabaditottam a szulo-adatszerkezet memoriacimet."; }
  public:
   virtual tri_race& kiir_cel()=0;
	};

class h_m_s
 {
    const int oRA, pRC;
   protected:
    typedef pair<int, int> pmp;
    typedef pair<int, pmp> hpmp;       // a hpmp vector adat-helyei
    typedef pair<int, hpmp> s_hpmp;    // a sps vector adat-helye
    typedef pair<string, s_hpmp> j_s;  // a jelek vector adat-helye
    map<int, j_s> cplx;                // a kulcs adat-helye
    h_m_s() : oRA(3600), pRC(60)
     { cout << "\nAz alapertelmezett atszamolo szulo-adatszerkezet letrejott."; }
    void s_hms(int s, int *h, int *p, int *mp)
     { *h=s/oRA; *p=(s%oRA)/pRC; *mp=(s%oRA)%pRC; }
    ~h_m_s()
     { cout << "\nFelszabaditottam az atszamolo szulo-adatszerkezet memoriacimet."; }
    virtual h_m_s& kiir_cel() { }
 };
	
class in_ch : protected tri_race, protected h_m_s
 {
    int kat;
    int getKat() const { return kat; }
    void setKat(int kt) { kat=kt; }
    vector<in_ch*> objs; 
   protected:
    in_ch(string lc, int sw, int cyc, int rn, int dp, int t, int kt) : \
          tri_race(lc, sw, cyc, rn, dp, t) { setKat(kt);
          if(kt!=4) cout << "\nA parameteres gyerek-objektum letrejott";
          else cout << "\nA parameteres gyerek-adatszerkezet letrejott."; }
    void kiir_i4();	
    void fuz(in_ch*);
    in_ch& kiir_cel() override;
   public:
    in_ch() : tri_race() { setKat(0); cout << "\nAz alapertelmezett gyerek-objektum letrejott"; }
    void ch_objs();
    void ch_objs(string lc, int sw, int cyc, int rn, int dp, int t, int kt);
    void ch_objs(string lc, int sw, int cyc, int rn, int dp, int t, int kt, char nm);
    void mind1();
    void b_mem(in_ch*,bool);
    virtual ~in_ch();
    in_ch(const in_ch&) = delete;
    in_ch& operator=(const in_ch&) = delete;	
 };
 
class in_gr_ch : public in_ch
 {
    char nem;
    char getNem() const { return nem; }
    void setNem(char nm) { nem=nm; }
   protected:
    in_gr_ch() : in_ch() { setNem('N'); }
    in_gr_ch(string lc, int sw, int cyc, int rn, int dp, int t, int kt, char nm) : \
           in_ch(lc, sw, cyc, rn, dp, t, kt)
     { setNem(nm); cout << "\nA parameteres unoka-objektum letrejott"; }
   in_gr_ch& kiir_cel() override;
   virtual ~in_gr_ch()
    { cout << "\nFelszabaditottam az unoka-objektum sajat adatanak a memoriacimet."; }
   friend void in_ch::ch_objs(string, int, int, int, int, int, int, char);
 };