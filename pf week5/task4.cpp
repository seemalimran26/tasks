#include <iostream>
using namespace std;
string checkEvenish(int num);
main()
{
    int num;
    int num1, num2, num3, num4;
    int rem1, rem2, rem3, rem4, rem5;
    int result;
    cout << "Enter a 5 digit number:";
    cin >> num;
    num1 = num / 10;
    num2 = num1 / 10;
    num3 = num2 / 10;
    num4 = num3 / 10;
    rem1 = num % 10;
    rem2 = num1 % 10;
    rem3 = num2 % 10;
    rem4 = num3 % 10;
    rem5 = num4 % 10;
    result = rem1 + rem2 + rem3 + rem4 + rem5;
    if (result % 2 == 0)
    {
        checkEvenish(num);
    }
    if (result % 2 != 0)
    {
        cout << "Oddish";
    }
}
string checkEvenish(int num)
{
    cout << "Evenish";
    return "string";
}
