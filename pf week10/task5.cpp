#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    int array[size];
    int volume = 0;
    cout << "Enter the numbers:";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i = i + 3)
    {

        volume = volume + (array[i] * array[i + 1] * array[i + 2]);
    }
    cout << volume;
}