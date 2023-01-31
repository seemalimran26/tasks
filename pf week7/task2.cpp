#include <iostream>
using namespace std;
void calculateDigits(int number);

int main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    calculateDigits(number);
}
void calculateDigits(int number)
{

    int count = 0;

    while (number != 0)
    {
        number = number / 10;
        count = count + 1;
    }
    cout << count;
}
