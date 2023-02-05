#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "enter the word:";
    getline(cin, word);
    int i = 0;
    int count = 0;
    while (word[i] != '\0')
    {
        count = count + 1;
        i++;
    }
    i = count;
    while (i > -1)
    {
        cout << word[i];
        i--;
    }
}
