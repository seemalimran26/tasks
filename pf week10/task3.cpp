#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the no of elements:";
    cin >> size;
    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter no " << i + 1 << endl;
        cin >> number[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (number[i] > number[i + 1] && number[i] > number[i - 1])
        {
            cout << "The numbers are:";
            cout << number[i] << endl;
        }
        else
        {
            cout << "No Peak Found";
            break;
        }
    }
}