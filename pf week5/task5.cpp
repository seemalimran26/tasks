#include <iostream>
using namespace std;
main()
{
    int hours;
    int minutes;
    int time;
    int result;
    int result1;
    int result2;
    cout << "Enter total hours:";
    cin >> hours;
    cout << "Enter total minute:";
    cin >> minutes;
    result1 = (hours * 60) + (minutes + 15);
    result2 = result1 / 60;
    result = (result1 - result2 * 60);
    cout << "Time=";
    cout << result2;
    cout << " : ";
    cout << result;
}
