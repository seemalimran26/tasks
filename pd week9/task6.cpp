#include <iostream>
using namespace std;
void evenOddTransform(int array[], int size);
int main()
{
    int size, k;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int array[size];
    for (int index = 0; index < size; index++)
    {
        cin >> array[index];
    }
    cout << "Enter the number of transformations to perform: ";
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        evenOddTransform(array, size);
    }
    cout << "The transformed array is: ";
    for (int index = 0; index < size; index++)
    {
        cout << array[index] << " ";
    }
}
void evenOddTransform(int array[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (array[index] % 2 == 0)
            array[index] = array[index] - 2;
        else
            array[index] = array[index] + 2;
    }
}
