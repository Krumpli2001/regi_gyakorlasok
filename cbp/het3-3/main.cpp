#include <iostream>

using namespace std;
#define dim 3

int main()
{
    cout << "2 vektor osszege" << endl;
    int vektora[dim];
    int vektorb[dim];
    int i=0;
    cout<<"Elso vektor kordinatai"<<endl;
    while(i<dim){
        cout<<i+1<<". vektor koordinata: ";cin>>vektora[i];
        i++;
    }
    i=0;
    cout<<"Masodik vektor kordinatai"<<endl;
    while(i<dim){
        cout<<i+1<<". vektor koordinata: ";cin>>vektorb[i];
        i++;
    }
    /* cout<<vektora[0]<<vektora[1]<<vektora[2];
    cout<<vektorb[0]<<vektorb[1]<<vektorb[2]; */
    cout<<"A vektorok osszege: ";
    i=0;
    cout<<"(";
    while(i<dim){
        cout<<vektora[i]+vektorb[i]<<",";
        i++;
    }cout<<")"<<endl;

    cout<<"A vektorok kulonbsege: ";
    i=0;
    cout<<"(";
    while(i<dim){
        cout<<vektora[i]-vektorb[i]<<",";
        i++;
    }cout<<")"<<endl;
    return 0;
}
