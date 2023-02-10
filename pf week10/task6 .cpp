#include <iostream>
using namespace std;
int main()
{
    int result;

    int array[10] = {120, 45, 78, 23, 56, 89, 34, 67, 101, 243};

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (array[j] < array[i])
            {
                result = array[i];
                array[i] = array[j];
                array[j] == result;
            }
        }
    }
    cout << "The array in ascending order is:";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " , ";
    }
}