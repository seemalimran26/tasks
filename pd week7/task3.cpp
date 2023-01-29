#include <iostream>
using namespace std;
void nestedForExample1(int rows);
void nestedForExample2(int rows);
main()
{
    int rows;
    cout << "Enter the desired number of rows:";
    cin >> rows;
    nestedForExample1(rows);
    nestedForExample2(rows);
}
void nestedForExample1(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int d = 0; d <(rows- i); d++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void nestedForExample2(int rows)
{

    for (int i =rows; i>= 1; i--)
    {
        for (int d = 0; d <(rows-i); d++)
        {
            cout << " ";
        }
        for (int j =i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
