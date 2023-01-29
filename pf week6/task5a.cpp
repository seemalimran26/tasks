#include <iostream>
using namespace std;
int main()
{
    char going;
    char lecture;
    cout << "Do you have class today(press y for yes)";
    cin >> going;
    cout << "Are your friend going(press y for yes)";
    cin >> lecture;
    if (going == 'y')
        if (lecture == 'y')
        {
            cout << "you are also going";
        }
}