#include <iostream>
using namespace std;
main()
{
    char choice;
    cout << "ENTER YOUR CHOICE:";
    cin >> choice;

    while (choice == 'y')
    {
        cout << "I am happy!" << endl;
        cout << "ENTER YOUR CHOICE:";
        cin >> choice;
    }
}