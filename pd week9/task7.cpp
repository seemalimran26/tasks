#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the no of colours:";
    cin >> size;
    int result = 0;
    int time;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] != array[i + 1])
        {
            result++;
            time = (result - 1) + (2 * size);
        }
        if (array[i] == array[i + 1])
        {
            time = (result) + (2 * size);
        }
    }

    cout << time;
}
