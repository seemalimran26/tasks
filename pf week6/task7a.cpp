#include <iostream>
using namespace std;
int main()
{
    int numbers;
    cout << "Enter your numbers:";
    cin >> numbers;
    if (numbers > 50)
    {
        cout << " you have Passed";
    }
    else
    {
        cout << " you have Failed";
    }
    return 0;
}