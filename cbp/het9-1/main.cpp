#include <iostream>

using namespace std;

int main()
{
    cout<<"Pascal haromszog\n"
        <<"Mekkora legyen a haromszog? ";
    int n;
    cin>>n;
    int** pascal=new int* [n];                                                      //ram foglalas
    for(int sor=0; sor<n; sor++){
        pascal[sor]=new int[sor+1];
    }

     for(int sor=0; sor<n; sor++){                                                  //adatok feltoltese
        pascal[sor][0]=pascal[sor][sor]=1;
        for(int oszlop=1; oszlop<sor; oszlop++){
            pascal[sor][oszlop]=pascal[sor-1][oszlop-1]+pascal[sor-1][oszlop];

        }
    }

    for(int sor=0; sor<n; sor++){
        for(int oszlop=0; oszlop<=sor; oszlop++){
            cout<<pascal[sor][oszlop]<<'\t';
        }
        cout<<endl;
    }


    for(int sor=0; sor<n; sor++){                                                     //ram torles
        delete[] pascal[sor];
    }
    delete[] pascal;
    return 0;
}
