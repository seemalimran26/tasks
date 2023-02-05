#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter the value of array:";
    cin >> size;
    int number[size];
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "The  value is:" << number[i] << endl;
        sum = sum + number[i];
        avg = sum / size;
    }
    cout << "sum:";
    cout << sum << endl;
    cout << "Average:";
    cout << avg;
}