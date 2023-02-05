#include <iostream>
using namespace std;
string changeLetters(string str);
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result = changeLetters(str);
    cout << "The changed string is: " << result << endl;
}
string changeLetters(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (c >= 'a' && c <= 'z')
        {
            c = c + 1;
            if (c > 'z')
            {
                c = 'a';
            }
            str[i] = c;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = c + 1;
            if (c > 'Z')
            {
                c = 'A';
            }
            str[i] = c;
        }
    }
    return str;
}
