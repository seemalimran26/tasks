#include <iostream>
#include <string>
using namespace std;
main()
{
  string pin;
  cout << "Enter your pin:";
  cin >> pin;
  string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
                    "Pop", "Lock", "Arabesque"};
  string result = " ";
  bool isValid = true;
  int number;
  if (pin.length() == 4)
  {
    for (int i = 0; i < 4; i++)
    {
      int code = pin[i] - 48;
      if (pin[i] < 48 || pin[i] > 57)
      {
        isValid = false;
        break;
      }
      int number = code + i;
      if (number >= 10)
      {
        number = number - 10;
      }
      result = result + MOVES[number] + ", ";
    }
    if (isValid)
    {
      cout << result;
    }
    else
    {
      cout << "Invalid Input";
    }
  }
  else
  {
    cout << "PIN is wrong";
  }
}
