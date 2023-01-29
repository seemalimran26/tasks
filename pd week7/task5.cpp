#include <iostream>
using namespace std;
void triangle(int dots);
main()
{
    int dots;
    cout << "Enter the number of dots:";
    cin >> dots;
    triangle(dots);
}
void triangle(int dots)
{
    int number = 0;

    for (int i = 1; i <= dots; i++)
    {

        number = number + i;
    }
    cout << number;
}