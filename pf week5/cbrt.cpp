#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float number;
    float result;
    cout << "Enter a number:";
    cin >> number;
    result = cbrt(number);
    cout << "cube root of a number is " << result;
    return 0;
}
