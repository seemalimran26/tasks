#include <iostream>
#include <cmath>
using namespace std;
void myFunction(int range, int number);
main()
{
    int range;
    int number;
    int result;
    cout << "Enter the range of a number to multiply:";
    cin >> range;
    cout << "Enter the number:";
    cin >> number;
    bool a = true;
    while (a)
    {
        int result = range * number;
        myFunction(range, number);
        range = range - 1;
        if (range == 0)
        {
            a = false;
        }
    }
}
void myFunction(int range, int number)
{
    int result = range * number;
    cout << result << endl;
}
