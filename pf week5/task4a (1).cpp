#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number1;
    int number2;
    int result;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    result = max(number1, number2);
    cout << "greater number:";
    cout << result;
    return 0;
}