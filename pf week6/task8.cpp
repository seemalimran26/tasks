#include <iostream>
using namespace std;
float calculatePlayHours(string year, float weekends, float holidays);
int main()
{
  string year;
  float weekends;
  float holidays;
  float result;
  cout << "Enter the year:";
  cin >> year;
  cout << "Enter the no. of holidays:";
  cin >> holidays;
  cout << "Enter the total no of weekends spent in home town:";
  cin >> weekends;

  result = calculatePlayHours(year, weekends, holidays);
  cout << result;
}
float calculatePlayHours(string year, float weekends, float holidays)
{
  float weekendPlayHours;
  float totalPlayHours;
  float playHoursOfHoliday;
  float playHours;
  if (year == "Normal")
  {
    weekendPlayHours = (48 - weekends) * (0.75);
    playHoursOfHoliday = holidays * (0.66);
    playHours = playHoursOfHoliday + weekendPlayHours + weekends;
  }
  else if (year == "Leap")
  {
    weekendPlayHours = ((48 - weekends) * (0.75));
    playHoursOfHoliday = (holidays * (0.66));
    playHours = playHoursOfHoliday + weekendPlayHours + weekends;
    playHours = playHours + (playHours * 0.15);
  }
  else
  {
    exit;
  }
  return playHours;
}
