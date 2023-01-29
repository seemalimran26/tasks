#include <iostream>
using namespace std;
void amplify(int num);
main()
{
    int num = 0;
    cout << "enter a number:";
    cin >> num;
    amplify(num);
}
void amplify(int num)
{
    int num2 = 0;
    int i;
    for (i = 1; i <= num; i++)
    {
        if (i % 4 == 0)
        {
            num2 = i * 10;

            cout << num2 << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}
