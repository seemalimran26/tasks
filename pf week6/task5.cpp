#include <iostream>
using namespace std;
float lowestPrice(int kilometers, string period);
int main()
{

    int kilometers;
    string period;
    float result;
    cout << "Enter the period of the day:";
    cin >> period;
    cout << "Enter the no. of kilometers:";
    cin >> kilometers;
    result = lowestPrice(kilometers, period);
    cout << result;
}
float lowestPrice(int kilometers, string period)
{
    float result1;
    if (period == "day")
    {
        result1 = 0.70 + (0.79 * kilometers);
    }
    if (period == "night")
    {
        result1 = 0.70 + (0.90 * kilometers);
    }
    if (period == "day" || period == "night")
    {
        if (kilometers > 20)
        {
            result1 = 0.09 * kilometers;
        }
        if (kilometers > 90)
        {
            result1 = 0.06 * kilometers;
        }
    }
    return result1;
}