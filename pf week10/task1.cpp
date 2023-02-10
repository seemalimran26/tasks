#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the total no of saturdays you want to count:";
    cin >> size;
    int count = 0;
    int array[size];
    cout << "Enter the no of miles:";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i + 1] > array[i])
        {
            count = count + 1;
        }
    }
    cout << "Total no of progress days:";
    cout << count;
}