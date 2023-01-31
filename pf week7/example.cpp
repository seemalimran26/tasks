#include <iostream>
using namespace std;
void counting(int number, int count);

int main()

{
    int number;
    int count;
    int sum;
    cout << "enter a number:";
    cin >> number;
    counting(number, count);
}
void counting(int number, int count)
{
    int sum = 0;
    for (int count = 1; count <= number; count++)
    {
        sum = sum + count;
    }
    cout << "sum:" << sum;
}