#include <iostream>
using namespace std;
int number(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    int check;
    cout << "Enter the first number:";
    cin >> num1;
    cout << "Enter the first number:";
    cin >> num2;
    cout << "Enter the first number:";
    cin >> num3;
    check = number(num1, num2, num3);
    cout << "The greatest value is  " << check;
}
int number(int num1, int num2, int num3)
{
    int greatest;
    if (num1 > num2 && num1 > num3)
    {
        greatest = num1;
    }
    if (num2 > num1 && num2 > num1)
    {
        greatest = num2;
    }
    if (num3 > num1 && num3 > num2)
    {
        greatest = num3;
    }
    return greatest;
}
