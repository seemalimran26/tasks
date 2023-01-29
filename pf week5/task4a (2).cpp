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
    result = min(number1, number2);
    cout << "minimum number:";
    cout << result;
    return 0;
}