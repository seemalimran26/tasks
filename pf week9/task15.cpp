#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "how many numbers you want to enter:";
    cin >> size;
    int number[size];
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    cout << "The reverse order is: " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << number[i] << endl;
    }
}
