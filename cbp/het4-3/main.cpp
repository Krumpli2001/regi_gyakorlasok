#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Masodfoku megoldokeplet" << endl;
    double a,b,c,d,x1,x2;
    cout<<"Negyzetes kitevo: ";cin>>a;
    cout<<"X kitevoje: ";cin>>b;
    cout<<"Valos szam: ";cin>>c;
    d=(b*b-4*a*c);
    cout<<d<<endl;
    if(d>0){
        x1=((-b+sqrt(d))/2*a);
        x2=((-b-sqrt(d))/2*a);
        cout<<"Az elso valos gyok: "<<x1<<endl;
        cout<<"A masodik valos gyok: "<<x2<<endl;
    }
    else if(d==0){
        x1=-b/(2*a);
        cout<<"Az egyenletnek csak egy megoldasa van: "<<x1;
    }
    else if(d<0){
        x1=-b/(2*a);
        x2=abs(sqrt(-d)/(2*a));
        cout<<"Az elso komplex gyok: "<<x1<<"+"<<x2<<"i"<<endl;
        cout<<"A masodik komplex gyok: "<<x1<<"-"<<x2<<"i"<<endl;
    }
    return 0;
}
