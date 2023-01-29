#include <iostream>
using namespace std;
void readHolidays(int Holidays);
main()
{
  int Holidays;
  cout << "Enter number of holidays:";
  cin >> Holidays;
  readHolidays(Holidays);
}
void readHolidays(int Holidays)
{
  int workingDays;
  int time;
  float difference;
  workingDays = (365 - Holidays);
  time = ((workingDays * 63) + (Holidays * 127));
  difference = (30000 - time);
  if (Holidays == 20)
  {
    cout << "TOM sleeps well" << endl;
  }
  if (Holidays > 20)
  {
    cout << "TOM will run away" << endl;
  }
  cout << difference;
}