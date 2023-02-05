#include <iostream>
using namespace std;
main()
{
    string word;
    char letter;
    cout << "enter the word:";
    getline(cin, word);
    cout << "enter the letter:";
    cin >> letter;
    int i = 0;
    int count = 0;
    while (word[i] != '\0')
    {
        count = count + 1;
        i++;
    }

    i = count - 1;
    {
        if (word[i] == letter)
        {
            cout << "same";
        }

        else
        {
            cout << "not same";
        }
    }
}
