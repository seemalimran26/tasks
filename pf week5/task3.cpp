#include <iostream>
#include <cmath>
bool isSymmetric(int num);
using namespace std;
main()
{
    int num;
    cout << "Enter three digit number:";
    cin >> num;
    int num1;
    int num2;
    int num3;
    int rem1;
    int rem2;
    int rem3;
    num1 = num / 10;
    num2 = num1 / 10;
    num3 = num2 / 10;
    rem1 = num % 10;
    rem2 = num1 % 10;
    rem3 = num2 % 10;

    if (rem1 == rem3)
    {
        isSymmetric(num);
    }
    if (rem1 != rem3)
    {
        cout << num << " is not symmetric";
    }
}
bool isSymmetric(int num)
{
    cout << num << " is symmetric";
    return 0;
}
