#include <string>
#include <iostream>

void print_str(const char str[],std::string prefix,const int n, const int lenght)
{
    if (lenght == 1)
    {
        for (int j = 0; j < n; j++)
        std::cout << prefix + str[j] << std::endl;
    }//Base case: lenght = 1, print the string "lenght" times + the remaining letter
    else
    {
        // One by one add all characters from "str" and recursively call for "lenght" equals to "lenght"-1
        for (int i = 0; i < n; i++)
        // Next character of input added
        print_str(str, prefix + str[i], n, lenght - 1);
        // "lenght" is decreased, because we have added a new character
    }
}

void permutacio(std::string szoveg, int hossza)
{
    int hossz = szoveg.length();
    char karakterek[hossz];
    for(int i = 0; i < hossz; i++)
    {
        karakterek[i] = szoveg[i];
    }
    print_str(karakterek, "", hossz, hossza);

}

int main()
{
    std::string szoveg = "ABC";
    permutacio(szoveg, 2);
    std::cout<<std::endl;
    permutacio(szoveg, 3);
    return 0;
}
    