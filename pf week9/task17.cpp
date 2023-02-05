
#include <iostream>
using namespace std;

int main()
{
    int size;
    int n;
    int result;
    cout << "Enter the number which you want to multiply with each no:";
    cin >> n;
    cout << "Enter the count of numbers:";
    cin >> size;
    int number[size];

    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
        result = n * number[i];
        cout << number[i] << " * " << n << " is ";
        cout << result << endl;
    }
}