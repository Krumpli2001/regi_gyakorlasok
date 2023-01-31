#include <iostream>

std::string akkord(std::string alap, std::string hangnem)
{
    std::string hangok[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
    int kezdes;
    int size = sizeof(hangok) / sizeof(hangok[0]);
    for(int i = 0; i < size; i++)
    {
        if(alap == hangok[i])
        {
            kezdes = i;
            break;
        }
    }
    
    std::string kiiras = hangok[kezdes];
    kiiras.append(" ");

    if(hangnem == "moll")
    {
        kezdes+=3;
        if(kezdes >= size)
        {
            kezdes = kezdes - size;
        }
        kiiras.append(hangok[kezdes]);
        kiiras.append(" ");
        kezdes+=4;
        if(kezdes >= size)
        {
            kezdes = kezdes - size;
        }
        kiiras.append(hangok[kezdes]);
        return kiiras;
    }
    else
    {
        kezdes+=4;
        if(kezdes >= size)
        {
            kezdes = kezdes - size;
        }
        kiiras.append(hangok[kezdes]);
        kiiras.append(" ");
        kezdes+=3;
        if(kezdes >= size)
        {
            kezdes = kezdes - size;
        }
        kiiras.append(hangok[kezdes]);
        return kiiras;
    }
}

int main()
{
    std::string alap = "A";
    std::string hangnem = "moll";

    std::string kiiras = akkord(alap, hangnem);
    std::cout<<kiiras;
}