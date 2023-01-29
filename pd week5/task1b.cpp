#include <iostream>
using namespace std;
int x = 10;
void myFunction()

{
    cout << "the value of x:" << endl
         << x;
    int x = 20;
}
main()
{
    myFunction();
    int x = 30;
    cout << "the value of x:" << endl;
    cout << x;
    myFunction();
}
