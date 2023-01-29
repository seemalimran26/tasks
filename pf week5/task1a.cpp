#include <iostream>
using namespace std;
void add(int number1, int number2);
main()
{
    float number1, number2;
    float result;
    float result1;
    float result2;
    cout << "Enter first number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    add(number1, number2);
    return 0;
}
void add(int number1, int number2)
{
    cout << "sum:" << number1 + number2;
}
