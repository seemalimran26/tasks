#include <iostream>
using namespace std;
void change(string input);
main()
{
  string input;
  cout << "Enter your Input:";
  cin >> input;
  change(input);
}
void change(string input)
{
  if (input == "true")
  {
    cout << "False";
  }
  if (input == "false")
  {
    cout << "True";
  }
}
