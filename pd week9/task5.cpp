#include <iostream>
using namespace std;
main()
{
    int size = 4;
    string letter[size];
    bool isTrue = false;
    for (int index = 0; index < 4; index++)
    {
        cin >> letter[index];
        letter[index];
        if (letter[0] == letter[1] && letter[1] == letter[2] && letter[2] == letter[2])
        {
            isTrue = true;
        }
    }
    cout << isTrue;
}