#include <iostream>
using namespace std;
void printTable(int number);
int main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    int result;
    printTable(number);
}
void printTable(int number)
{
    int multiply;
    for (int count = 1; count <= 10; count++)
    {
        multiply = count * number;
        cout << number << " * " << count << " = " << multiply << endl;
    }
}
