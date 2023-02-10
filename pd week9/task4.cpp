#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    int array[size];
    bool isPresent = true;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        int result = array[i];
        while (result > 0)
        {
            if (result % 10 == 7)
            {
                isPresent = false;
                break;
            }
            result = result / 10;
        }
    }
    if (isPresent == false)
    {
        cout << "Boom";
    }
    else
    {
        cout << "There is no 7";
    }
}