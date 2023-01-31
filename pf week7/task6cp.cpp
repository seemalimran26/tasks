#include <iostream>
using namespace std;
float frequencyChecker(int number, float digit);
int main()
{
    int number;
    double digit;
    double result;
    cout << "Enter a number:";
    cin >> number;
    cout << "Enter a digit:";
    cin >> digit;
    result = frequencyChecker(number, digit);
    cout << result;
}
float frequencyChecker(int number, float digit)
{
    double count = 0;
    int remainder;
    while (remainder != 0)
    {

        remainder = number % 10;
        number = number / 10;

        if (remainder == digit)
        {
            count = count + 1;
        }
    }
    return count;
}
