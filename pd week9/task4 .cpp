#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter how many numbers in the array:";
    cin >> size;
    int array[size];
    bool isFound = false;
    cout << "Enter the numbers:" << endl;
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

                isFound = true;

                break;
            }
            result = result / 10;
        }
    }
    if (isFound == true)
    {
        cout << "Boom";
    }
    if (isFound != true)
    {
        cout << "There is no 7 in an array:";
        cout << endl;
    }
}
