#include <iostream>
using namespace std;
int digitSum(int number);

int main()
{
    int number;

    int result;
    cout << "Enter a number:";
    cin >> number;
    result = digitSum(number);
    cout << "SUM:" << result;
}
int digitSum(int number)
{
    int sum = 0;
    int rem = 0;
    while (number != 0)
    {
        rem = number % 10;
        number = number / 10;
        sum = sum + rem;
    }
    return sum;
}
