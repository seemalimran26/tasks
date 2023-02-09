#include <iostream>
using namespace std;
main()
{
    string word1;
    string word2;
    cout << "Enter word you want to compare" << endl;
    cin >> word1;
    cout << "Enter second word you want to compare with" << endl;
    cin >> word2;
    int count = 0;
    for (int size1 = 0 ; word1[size1] != '\0'; size1++)
    {
        for (int size2 = 0; word2[size2] != '\0'; size2++)
        {
             if (word1[size1] == word2[size2])
            {
                count++;
                word2[size2] = ' ';
                break;
            }
        }
    }
    cout << "There are " << count << " Common characters in the string " << endl;
}