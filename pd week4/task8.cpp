#include <iostream>
using namespace std;
void takeNumber(int x, int y);
main()
{
  int x;
  int y;
  cout << "Enter first number:";
  cin >> x;
  cout << "Enter second number:";
  cin >> y;
  takeNumber(x, y);
}
void takeNumber(int x, int y)
{
  if (x == y)
  {
    cout << "True";
  }
  if (x != y)
  {
    cout << "False";
  }
}
