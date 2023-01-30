#include <iostream>

std::string akkord(std::string alap, std::string hangnem)
string akkord(string alap, string hangnem) {
  string hangok[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "H", "B"};  
  int i = 0;
  while(hangok[i] != alap) {
    i++;
  }
  string hangsor = hangok[i] + " ";
  if(hangnem == "moll") {
    hangsor = hangsor + hangok[(i + 3) % 12] + " " + hangok[(i + 7) % 12];
  } else if(hangnem == "dur") {
    hangsor = hangsor + hangok[(i + 4) % 12] + " " + hangok[(i + 7) % 12];
  }
  return hangsor;
}

int main()
{
    std::string alap = "A";
    std::string hangnem = "moll";

    std::string kiiras = akkord(alap, hangnem);
    std::cout<<kiiras;
}