#include <iostream>
using namespace std;
int calculateHcf(int number1, int number2);
int calculateLcm(int number1, int number2);
int main()
{
    int number1;
    int number2;
    int result;
    int result1;
    cout << "Enter firrst number:";
    cin >> number1;
    cout << "Enter second number:";
    cin >> number2;
    result = calculateHcf(number1, number2);
    result1 = calculateLcm(number1, number2);
    cout << "HCF:" << result << endl;
    cout << "LCM:" << result1 << endl;
}
int calculateHcf(int number1, int number2)
{
    int HCF;

    for (int i = 1; i <= number1 && i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            HCF = i;
        }
    }
    return HCF;
}

int calculateLcm(int number1, int number2)
{
    int LCM;

    for (int i = 1; i <= number1 && i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            LCM = number1 * number2 / i;
        }
    }

    return LCM;
}
