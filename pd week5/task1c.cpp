#include <iostream>
using namespace std;
int x = 10;
void myFunction()
{
    int x = 20;
    cout << "the value of x:";
    cout << x << endl;
}
main()
{
    myFunction();
    int x = 30;
    cout << "the value of x:";
    cout << x << endl;
    myFunction();
}
