#include <iostream>
using namespace std;
main()
{
    string word;
    char letter;
    cout << "enter the word:";
    getline(cin, word);
    cout << "enter character:";
    cin >> letter;
    int i = 0;
    bool found = false;
    while (word[i] != '\0')
    {
        if (word[i] == letter)
        {
            found = true;
            break;
        }
        i++;
    }
    if (found == true)
    {
        cout << letter << " found "
             << " in " << word;
    }
    else
    {
        cout << letter << " not found "
             << " in " << word;
    }
}
