#include <iostream>
using namespace std;
void printName(string name);

main()

{
  string name;
  while (true)
  {
    cout << "Enter your Name:";
    cin >> name;
    printName(name);
  }
}
void printName(string name)
{
  cout << "your name is ";
  cout << name << endl;
}
