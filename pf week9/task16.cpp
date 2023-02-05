
#include <iostream>
using namespace std;

int main()
{
    int size;
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "Enter the count of numbers:";
    cin >> size;
    int number[size];

    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
        if (n == number[i])
        {
            cout << "Already Entered" << endl;
        }
    }
}
