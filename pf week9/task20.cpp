#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter the no of resistance:";
    cin >> size;
    float number[size];
    float sum = 0;

    for (int index = 0; index < size; index++)
    {
        cin >> number[index];
    }
    for (int index = 0; index < size; index++)
    {
        cout << "The   resiatance " << index + 1 << " is: " << number[index] << endl;
        sum = sum + number[index];
    }
    cout << "RT:";
    cout << sum << " ohms " << endl;
}