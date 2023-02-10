#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the length of array:";
    cin >> size;
    int array[size];
    int cycle;
    int count = 0;
    cout << "Enter the number of repeating cycle:";
    cin >> cycle;
    bool isBreak = true;
    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; cycle < size ; i++)
    {

        if (array[i] != array[cycle] || i > cycle)
        {
            isBreak = false;
        }
        cycle++;
    }

    if (isBreak == false)
    {
        cout << "false";
    }

    else
    {
        cout << "true";
    }
}
