#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float number1, number2;
    float result;
    float result1;
    float result2;
    float result3;
    float result4;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    result = pow(number1, number2);
    result1 = max(number1, number2);
    result2 = cbrt(number1);
    result3 = ceil(number2);
    result4 = floor(number2);
    cout << "The power of a number:" << result << endl;
    cout << "The greater number:" << result1 << endl;
    cout << "The cube root of a number:" << result2 << endl;
    cout << result3 << " is the ceiling number" << endl;
    cout << result4 << " is the floor number" << endl;
}
