#include "Decl.hpp"

void tri_race::kiir_i1() const
{
    cout << h << ":" << p << ":" << mp << " [h:m:s]\n";
}

void tri_race::kiir_i2() const
{
    cout << "Licence: " << lic << "\n�: " << swim << "\nB: " << cycle << "\nD: " << depo;
}

void tri_race::kiir_i3() const
{
    cout << "\nF: " << run << "\nT-: " << ij << "\nC�l id�: ";
}

void in_ch::kiir_i4() const
{
    kiir_i2();
    cout << "\n�+B+D: " << swim + cycle + depo;
    kiir_i3(); kiir_i1();
    cout << "Kateg�ria: " << kat << endl;
}

tri_race& tri_race::kiir_rajt()
{
    cout << "\nSz�l� rajt id�: "; kiir_i1(); return *this;
}

tri_race& tri_race::kiir_cel()
{
    kiir_i2(); kiir_i3(); kiir_i1(); return *this;
}

in_ch& in_ch::kiir_rajt()
{
    cout << "\nGyerek rajt id�: "; kiir_i1(); return *this;
}

in_ch& in_ch::kiir_cel()
{
    kiir_i4(); return *this;
}

in_gr_ch& in_gr_ch::kiir_rajt()
{
    cout << "\nUnoka rajt id�: "; kiir_i1(); return *this;
}

in_gr_ch& in_gr_ch::kiir_cel()
{
    kiir_i4();
    cout << "Nem: " << nem << endl;
    return *this;
}

tri_race& tri_race::setSum(int t)
{
    sum = swim + cycle + run + depo - t;
    h = sum / oRA; p = (sum % oRA) / pRC; mp = (sum % oRA) % pRC;
    return *this;
}

void mind1(tri_race& x_tri)
{
    cout << endl;
    x_tri.kiir_rajt().setSum(x_tri.getIj()).kiir_cel();
    try
    {
        /*tri_race& rp = dynamic_cast<tri_race&>(x_tri); // in_ch
       cout << "\nSz�l� objektum vagyok: " << rp.getLic() << endl;*/
        in_gr_ch& rp = dynamic_cast<in_gr_ch&>(x_tri);
        cout << "\nUnoka objektum vagyok: " << rp.getLic() << endl;
    }
    catch (bad_cast)
    {
        /*cout << "\nNem vagyok gyerek objektum!" << endl;*/
        cout << "\nNem vagyok unoka objektum!" << endl;
        try
        {
            in_ch& rp = dynamic_cast<in_ch&>(x_tri);
            cout << "Gyerek objektum vagyok: " << rp.getLic() << endl;
        }
        catch (bad_cast)
        {
            cout << "Nem vagyok gyerek objektum!" << endl;
            tri_race& rp = dynamic_cast<tri_race&>(x_tri);
            cout << "Sz�l� objektum vagyok: " << rp.getLic() << endl;
        }
    }
}
