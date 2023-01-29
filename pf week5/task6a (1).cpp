#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number1, number2;
    int result;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    result = pow(number1, number2);
    cout << "Power of a number is :" << result;
    return 0;
}