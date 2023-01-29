#include <iostream>
using namespace std;
void printAsterik(int rows);

int main()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    printAsterik(rows);
}
void printAsterik(int rows)
{
    int space = rows;
    for (int i = 0; i <= rows; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k <= space; k++)
        {
            cout << " ";
        }
        for (int d = 1; d <= rows; d++)
        {
            if (d < rows - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
        space = space - 1;
    }
}
