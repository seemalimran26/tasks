#include <iostream>
using namespace std;
main()
{
    float days;
    float hours;
    float workers;
    float freetime;
    float totalWorkingDays;
    float totalWorkingHours;
    float finalTime;
    float timeLeft;
    cout << "Enter the number of days:";
    cin >> days;
    cout << "Enter the total hours working per day:";
    cin >> hours;
    totalWorkingDays = (days) - ((days * 10) / 100);
    totalWorkingHours = (totalWorkingDays * 10);
    finalTime = (workers * totalWorkingHours);
    if (finalTime > hours)
    {
        timeLeft = hours - totalWorkingHours;
        cout << "yes!The" << timeLeft;
        cout << " hours are left";
    }
    if (finalTime < hours)
    {
        timeLeft = totalWorkingHours - hours;
        cout << "Not enough time! " << timeLeft;
        cout << "hours needed";
    }
}
