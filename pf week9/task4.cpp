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
        cout << word[i] << ":" << i << endl;
        i++;
    }
}
