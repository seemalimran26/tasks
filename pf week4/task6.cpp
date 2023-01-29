#include <iostream>
using namespace std;
void printPayableAmount(string day, int totalPurchaseAmount, float payableAmount);
main()
{
    string day;
    int totalPurchaseAmount;
    float payableAmount;
    cout << "Enter the Day:";
    cin >> day;
    cout << "Enter the Total Purchase Amount:";
    cin >> totalPurchaseAmount;
    if (day == "sunday")
    {
        printPayableAmount(day, totalPurchaseAmount, payableAmount);
    }
    if (day != "sunday")
    {
        payableAmount = (totalPurchaseAmount - (totalPurchaseAmount * 0.05));
        cout << "Payable Amount:";
        cout << payableAmount;
    }
}
void printPayableAmount(string day, int totalPurchaseAmount, float payableAmount)
{
    payableAmount = (totalPurchaseAmount - (totalPurchaseAmount * 0.1));
    cout << "Payable Amount:";
    cout << payableAmount;
}
