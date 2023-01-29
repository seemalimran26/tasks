#include <iostream>
using namespace std;
string checkIfEven(int number);
int main()
{
    int number;
    string check;
    cout << "Enter a number:";
    cin >> number;
    check = checkIfEven(number);
    cout << check;
}
string checkIfEven(int number)
{
    string result;
    if (number % 2 == 0)
    {
        result = "Even";
    }
    else
    {
        result = "Odd";
    }
    return result;
}
