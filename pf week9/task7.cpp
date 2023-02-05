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
    if (count % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}
