#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements in the array:";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        int num = array[i];
        while (num > 0)
        {
            if (num % 10 == 7)
            {
                cout << "Boom" << endl;
                found = true;
                break;
            }
            num = num / 10;
        }
    }
    if (found != true)
    {
        cout << "There is no 7 in the array." << endl;
    }
}