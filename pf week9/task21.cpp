#include <iostream>
using namespace std;
main()
{
  int size1 = 2;

  int number1[size1];
  int size2;
  int result;
  cout << "Enter the numbers of first array:" << endl;
  for (int i = 0; i < size1; i++)
  {
    cin >> number1[i];
    result = number1[i];
  }
  cout << "Enter the number of elements in second  array:";
  cin >> size2;
  cout << "Enter the numbers of second array:" << endl;
  int number[size2];

  for (int j = 0; j < size2; j++)
  {
    cin >> number[j];
  }
  cout << "The converted array is:" << endl;
  cout << number1[0] << endl;
  for (int j = 0; j < size2; j++)
  {

    cout << number[j] << endl;
  }
  cout << number1[1];
}
