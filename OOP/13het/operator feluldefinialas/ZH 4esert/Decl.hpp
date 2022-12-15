#include <iostream>

using namespace std;

class tort 
 {
    int szaml, nevz; // másolatok az objektumok mem. területein
    void setSzaml(int szaml) { this->szaml=szaml; } // szaml=szaml => this->szaml=szaml 
    void setNevz(int nevz) { this->nevz=nevz; } // nevz=nevz => this->nevz=nevz
   public: // a metódusok egyediek, minden objektum ezeket használja => *this
    tort(int szaml, int nevz) { setSzaml(szaml); setNevz(nevz); }
    int getSzaml() const { return szaml; }
    int getNevz() const { return nevz; }
    tort operator*(tort m_t); /*{
      return tort(szaml * m_t.getSzaml(), nevz * m_t.getNevz()); }*/
    tort& operator*=(tort m_t); /*{
                   tort e_t = *this * m_t;
                   return *this = e_t; } */
    //tort operator*(int i) { return tort(szaml * i, nevz); }
/*    tort& operator*=(int i) {
                   tort e_t = *this * i;
                   return *this = e_t; }*/
	  ~tort() { }
//	  friend istream& operator>>(istream& be, tort& t);	  
 };

tort operator*(tort e_t, tort m_t) {
    return tort(e_t.getSzaml() * m_t.getSzaml(),
                e_t.getNevz() * m_t.getNevz()); }

tort& tort::operator*=(tort m_t) {
                   tort e_t = *this * m_t;
                   return *this = e_t; }

tort operator*(tort e_t, int i) {
    return tort(e_t.getSzaml() * i,
                e_t.getNevz()); }

tort& tort::operator*=(int i) {
                   tort e_t = *this * i;
                   return *this = e_t; }

tort operator*(int i, tort m_t) {
    return tort(i * m_t.getSzaml(),
                m_t.getNevz()); }

ostream& operator<<(ostream& ki, const tort& t) { return ki << t.getSzaml() << "/" << t.getNevz(); }
  
istream& operator>>(istream& be, tort& t) {
  cout << "\nKérem a tört számlálóját: "; be >> t.szaml;
  cout << "  Kérem a tört nevezőjét: "; be >> t.nevz;
  return be; }