#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int number1, number2;
    int result;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    result = min(number1, number2);
    cout << result << "is smaller";
}
