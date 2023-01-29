#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float number;
    float result;
    cout << "Enter a number:";
    cin >> number;
    result = sin(number);
    cout << "sine of a number is " << result;
    return 0;
}
