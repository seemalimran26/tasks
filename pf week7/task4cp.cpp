#include <iostream>
using namespace std;
main()
{
    int result;
    int number;
    cout << "enter a number:";
    cin >> number;
    int num1 = 0;
    int num2 = 1;
    cout << num1;
    cout << ",";
    cout << num2 << ",";
    int i = 1;
    while (i <= number - 2)
    {

        result = num1 + num2;
        cout << result;
        cout << ",";
        num1 = num2;
        num2 = result;
        i++;
    }
}
