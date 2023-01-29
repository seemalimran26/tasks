#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
float totalIncome(string type, int rows, int columns);
int main()
{
    string type;
    int rows;
    int columns;
    cout << "Enter the type of screening:";
    cin >> type;
    cout << "Enter the number of rows in a hall: ";
    cin >> rows;
    cout << "Enter the number of columns in a hall:";
    cin >> columns;
    int result = totalIncome(type, rows, columns);
    cout << result;
}
float totalIncome(string type, int rows, int columns)
{
    float income;
    if (type == "premiere")
    {
        income = (rows * columns * 12);
    }
    if (type == "normal")
    {
        income = (rows * columns * 7.50);
    }
    if (type == "discount")
    {
        income = (rows * columns * 5.00);
    }
    return income;
}