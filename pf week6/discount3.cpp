#include <iostream>
using namespace std;
float calculatePrice(string day, string month, float amount);
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
    int result = calculatePrice(day, month, amount);
    cout << "The final price is " << result;
}
float calculatePrice(string day, string month, float amount)
{
    float payableAmount;
    if (day == "Sunday" && month == "October" || month == "March" || month == "August")
    {
        payableAmount = amount - (amount * 10) / 100;
    }

    else
    {
        payableAmount = amount;
    }
    return payableAmount;
}
