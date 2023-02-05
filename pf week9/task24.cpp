#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "enter the word:";
    getline(cin, word);
    int i = 0;
    while (word[i] != '\0')
    {
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u')
            cout << word[i];
        i++;
    }
}
