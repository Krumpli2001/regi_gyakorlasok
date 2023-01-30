#include <cctype>
#include <iostream>
#include <string>

int main() {
    int szam1, szam2;
    //std::cout <<"Hello world!\n";
    std::cin>>szam1;
    std::cin>>szam2;
    if(szam1 <= szam2){
        while(szam1 <= szam2)
        {
            char betu = 64 + szam1;
            std::cout<<betu;
            szam1++;
        }
    }
    else
        while(szam1 >= szam2)
        {
            char betu = 64 + szam1;
            std::cout<<betu;
            szam1--;
        }
    return 0;
}