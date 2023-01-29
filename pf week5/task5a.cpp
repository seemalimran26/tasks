#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int number1;
    int number2;
    int result;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    result = pow(number1, number2);
    cout << "The power of a number is:";
    cout << result;
}