#include <iostream>
using namespace std;
float discount(string day, string month, float amount);
int main()
{
    string day;
    string month;
    int amount;
    cout << "Enter the day:";
    cin >> day;
    cout << "Enter the month:";
    cin >> month;
    cout << "Enter the total amount:";
    cin >> amount;
    int result = discount(day, month, amount);
    cout << "The final price is " << result;
}
float discount(string day, string month, float amount)
{
    float payableAmount;
    if (day == "Sunday" && month == "October")
    {
        payableAmount = amount - (amount * 10) / 100;
    }
    else if (day == "Sunday")
    {
        payableAmount = amount - (amount * 5) / 100;
    }
    else
    {
        payableAmount = amount;
    }
    return payableAmount;
}
