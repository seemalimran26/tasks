#include <iostream>
using namespace std;
void checkEven_Odd(int number);
main()
{
  int number;
  cout << "Enter the number:";
  cin >> number;
  if (number % 2 == 0)
  {
    checkEven_Odd(number);
  }

  if (number % 2 != 0)
  {
    cout << "Odd";
  }
}
void checkEven_Odd(int number)
{
  cout << "Even";
}
