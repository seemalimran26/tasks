#include <iostream>
#include <string>
using namespace std;
int main()
{
    int size;
    char letter;
    int count = 0;
    cout << "Enter the number of words in the string:";
    cin >> size;
    string word[size];
    for (int i = 0; i < size; i++)
    {
        cin >> word[i];
    }
    cout << "Enter the letter  of your choice you want to find:";
    cin >> letter;
    for (int i = 0; i < size; i++)
    {
        string result = word[i];
        for (int j = 0; result[j] != '\0'; j++)
        {
            result[j];
            if (result[j] == letter)
            {
                count++;
            }
        }
    }
    cout << count;
}
