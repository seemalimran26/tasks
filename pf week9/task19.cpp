
#include <iostream>
using namespace std;

int main()
{
    int size;
    int number[size];
    cout << "Enter the count of numbers:";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    int minimum = number[0];
    for (int i = 1; i < size; i++)
    {
        if (number[i] < minimum)
        {
            minimum = number[i];
        }
    }
    cout << "The smallest number is: " << minimum << endl;
}
