#include <iostream>
using namespace std;
string checkIfSame(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    string result;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << "Enter third number:";
    cin >> num3;
    result = checkIfSame(num1, num2, num3);
    cout << result;
}
string checkIfSame(int num1, int num2, int num3)
{
    string Answer;
    if (num1 == num2 && num1 == num3 && num2 == num1 && num2 == num3 && num3 == num1 && num3 == num2)
    {
        Answer = "yes";
    }
    else
    {
        Answer = "no";
    }
    return Answer;
}