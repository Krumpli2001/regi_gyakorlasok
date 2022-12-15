#pragma once
#include <iostream>

using namespace std;

class tri_race // sz�l� oszt�ly deklar�ci�ja
{
protected:
    string lic;
    int swim, cycle, run, depo, ij, h, p, mp, sum;
private:
    const int oRA, pRC;
public:
    tri_race() : oRA(3600), pRC(60), h(0), p(0), mp(0), sum(0)
    {
        lic = "--------"; swim = 0; cycle = 0; run = 0; depo = 0; ij = 0;
        cout << "\nAz alap�rtelmezett objektum l�trej�tt";
    }
    tri_race(string lc, int sw, int cyc, int rn, int dp, int t) : oRA(3600), pRC(60), \
        h(0), p(0), mp(0), sum(0)
    {
        lic = lc; swim = sw; cycle = cyc; run = rn; depo = dp; ij = t;
        cout << "\nA param�teres objektum l�trej�tt";
    }
    int getIj() const { return ij; }
    string getLic() const { return lic; }
    void kiir_i1() const;
    void kiir_i2() const;
    void kiir_i3() const;
    virtual tri_race& kiir_rajt();
    virtual tri_race& kiir_cel();
    tri_race& setSum(int t);
    virtual ~tri_race()
    {
        cout << "\nFelszabad�tottam a sz�l�-objektum mem�riac�m�t!";
    }
    tri_race(const tri_race&) = delete;
    tri_race& operator=(const tri_race&) = delete;
};

class in_ch : public tri_race // sz�rmaztatott gyerek oszt�ly deklar�ci�ja
{
    int kat;
public:
    in_ch() : tri_race() { kat = 0; }
    in_ch(string lc, int sw, int cyc, int rn, int dp, int t, int kt) : \
        tri_race(lc, sw, cyc, rn, dp, t) { kat = kt; }
    void kiir_i4() const;
    virtual in_ch& kiir_rajt();
    virtual in_ch& kiir_cel();
    ~in_ch()
    {
        cout << "\nFelszabad�tottam a gyerek-objektum saj�t adat�nak a mem�riac�m�t!";
    }
};

class in_gr_ch : public in_ch  // sz�rmaztatott unoka oszt�ly deklar�ci�ja 
{
private:
    char nem;
public:
    in_gr_ch() : in_ch(), nem('N') {  }
    in_gr_ch(string lc, int sw, int cyc, int rn, int dp, int t, int kt, char nm) : \
        in_ch(lc, sw, cyc, rn, dp, t, kt), nem(nm) {  }
    virtual in_gr_ch& kiir_rajt();
    virtual in_gr_ch& kiir_cel();
    ~in_gr_ch()
    {
        cout << "\nFelszabad�tottam az unoka-objektum saj�t adat�nak a mem�riac�m�t!";
    }
};

void mind1(tri_race& x_tri);