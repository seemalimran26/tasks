#include <iostream>
using namespace std;
void checkGreaterNumber(int number1, int number2);
main()
{
  int number1;
  int number2;
  cout << "Enter 1st number:";
  cin >> number1;
  cout << "Enter 2nd number:";
  cin >> number2;
  if (number1 > number2)
  {
    checkGreaterNumber(number1, number2);
  }
  if (number1 < number2)
  {
    cout << "The greater number is ";
    cout << number2;
  }
}
void checkGreaterNumber(int number1, int number2)
{
  cout << "The greater number is ";
  cout << number1;
}
