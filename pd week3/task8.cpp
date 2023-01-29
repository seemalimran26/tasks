#include <iostream>
using namespace std;
main()
{
    int num;
    int sum;
    int result;
    int result1;
    int result2;
    int result3;
    cout << "Enter four digit number:";
    cin >> num;
    result = num % 10;
    result1 = ((num / 10) % 10);
    result2 = (((num / 10) / 10) % 10);
    result3 = ((((num / 10) / 10) / 10) % 10);
    sum = result1 + result2 + result3 + result;
    cout << "sum:" << sum;
}