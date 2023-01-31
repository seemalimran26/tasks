#include <iostream>
using namespace std;
void printSum(int i);
main()
{
    int i;
    printSum(i);
}
void printSum(int i)
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        cout << i << endl;
        sum = sum + i;
    }
    cout << "SUM:" << sum;
}