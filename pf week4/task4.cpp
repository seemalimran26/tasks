#include <iostream>
using namespace std;
void printName(string name);

main()

{
  string name;
  cout << "Enter your name:";
  cin >> name;
  while (true)
  {
    if (name == "Seemal")
    {
      printName(name);
    }

    if (name != "Seemal")
    {
      cout << "Enter the name:";
      cin >> name;
    }
  }
}
void printName(string name)
{
  cout << "your name is:";
  cout << name << endl;
}
