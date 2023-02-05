#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "enter string:";
    getline(cin, word);
    cout << "something ";
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i];
    }
}