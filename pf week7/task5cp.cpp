#include <iostream>
using namespace std;
int totalDigits(int number);

int main()
{
    int number;

    int result;
    cout << "Enter a number:";
    cin >> number;
    result = totalDigits(number);
    cout << result;
}
int totalDigits(int number)
{
    int count = 0;
    int rem = 0;
    while (number != 0)
    {
        number = number / 10;
        count = count + 1;
    }

    return count;
}
