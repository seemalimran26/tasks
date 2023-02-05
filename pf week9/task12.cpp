#include <iostream>
using namespace std;
int main()
{
    string word;
    getline(cin, word);
    int i = 0;
    while (word[i] != '\0')
    {
        i++;
        cout<<i;
    }
}