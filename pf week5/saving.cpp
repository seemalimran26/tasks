#include <iostream>
using namespace std;
main()
{
    float salary;
    float savingPer;
    float savingTargetPer;
    float result;
    float result1;
    cout << "Enter salary of employee:";
    cin >> salary;
    cout << "Enter saving percentage:";
    cin >> savingPer;
    cout << "Enter saving of target percentage:";
    cin >> savingTargetPer;
    result = (30) * ((savingTargetPer) / 100);
    result1 = result / 12;
    cout << "targetMonths:" << result1 << endl;
    if (result1 < 4)
    {
        cout << "Very nice";
    }
    if (result1 >= 4)
    {
        cout << "good";
    }
}