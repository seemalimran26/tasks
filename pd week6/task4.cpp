#include <iostream>
using namespace std;
float calculateBill(char code, int minutes, string period);
int main()
{
    char code;
    int minutes;
    string period;
    float result;
    cout << "whichtype of customer you are(residential or premium) select(r/p): ";
    cin >> code;
    cout << "Enter the no of minutes you received the call:";
    cin >> minutes;
    cout << "Enter the time:";
    cin >> period;
    result = calculateBill(code, minutes, period);
    cout << result;
}
float calculateBill(char code, int minutes, string period)
{
    float charges;
    if (code = 'r')
    {
        charges = 10;

        if (minutes <= 50)
        {
            charges = 10;
        }
        else if (minutes > 50)
        {
            charges = 10 + (0.20 * (minutes - 50));
        }
    }
    if (code == 'p')
    {
        charges = 25;
        if (period == "day")
        {
            if (minutes <= 75)
            {
                charges = 25;
            }
        }
        else if (minutes > 75)
        {
            charges = 25 + ((minutes - 75) * 0.01);
        }
    }
    if (period == "night")
    {
        if (minutes <= 100)
        {
            charges = 25;
        }
        else if (minutes > 100)
        {
            charges = 25 + ((minutes - 100) * 0.05);
        }
    }
    return charges;
}
