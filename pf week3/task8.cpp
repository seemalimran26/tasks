
#include <iostream>
using namespace std;
main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;
    int num9;
    int num10;
    int add;
    int subtract;
    int multiply;
    float divide;
    float result;
    cout << "Enter 1st Number=";
    cout << "Enter 2nd Number=";
    cout << "Enter 3rd Number=";
    cout << "Enter 4th Number=";
    cout << "Enter 5th Number=";
    cout << "Enter 6th Number=";
    cout << "Enter 7th Number=";
    cout << "Enter 8th Number=";
    cout << "Enter 9th Number=";
    cout << "Enter 10th Number=";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    cin >> num6;
    cin >> num7;
    cin >> num8;
    cin >> num9;
    cin >> num10;
    add = num1 + num2 + num8 + num9;
    subtract = num6 - num5;
    multiply = num4 * num10;
    divide = num7 / num3;
    cout << "Add=" << add;
    cout << "Subtract=" << subtract;
    cout << "multiply=" << multiply;
    cout << "Divide=" << divide;
    result = add + subtract + multiply + divide;
    cout << "result=" << result;
}
