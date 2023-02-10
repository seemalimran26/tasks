#include <iostream>
using namespace std;
int main()
{
    int size;
    int t;
    cout << "Enter how many numbers in the array:";
    cin >> size;
    int array[size];
    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the no of transformations:";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i] % 2 == 0)
                array[i] = array[i] - 2;
            else
                array[i] = array[i] + 2;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
