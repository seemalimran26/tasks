#include <iostream>
using namespace std;
string checkCase(char character);
main()
{
    char character;
    string result;
    cout << "Enter an alphabet:";
    cin >> character;
    result = checkCase(character);
    cout << result;
    cout << " ";
    cout << character;
}
string checkCase(char character)
{
    string result;
    if (character >= 'A')
    {
        result = "you have entered large ";
    }
    if (character >= 'a')
    {
        result = "you have entered small ";
    }
    return result;
}
