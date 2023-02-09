#include <iostream>
using namespace std;
main()
{

    float array[4];
    float result = 0;
    float money;
    cout << "Enter the money which you have to given:" << endl;
    cin >> money;
    cout << "Enter the money which is in your pocket:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }
    array[0] = array[0] * 0.25;
    array[1] = array[1] * 0.10;
    array[2] = array[2] * 0.05;
    array[3] = array[3] * 0.01;
    result = array[0] + array[1] + array[2] + array[3];
    if (result >= money)
    {
        cout << "true";
    }
    else
    {
        cout << "False";
    }
}