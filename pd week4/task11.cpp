#include <iostream>
using namespace std;
void challanIssuing(int speed);
main()
{
  int speed;
  cout << "Enter the speed of the car:";
  cin >> speed;
  challanIssuing(speed);
}
void challanIssuing(int speed)
{
  if (speed > 100)
  {
    cout << "HALT...YOU WILL BE CHALLENGED";
  }
  if (speed <= 100)
  {
    cout << "perfect! you are going good";
  }
}
