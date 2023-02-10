#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the count of numbers:";
    cin >> size;
    int number[size];
    cout << "Enter the numbers:";
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    int largest = number[0];
    for (int i = size - 1; i >= 0; i--)
    {
        if (number[i] > largest)

            largest = number[i];
    }
    cout << "The largest number is:" << largest;
}