#include <iostream>
#include <cmath>
using namespace std;
int multiply(int a);
main()
{
    int a;
    int result;
    cout << "Enter any number:";
    cin >> a;
    result = multiply(a);
    cout << "product:" << result;
}
int multiply(int a)
{
    int product;
    product = a * 5;
    return product;
}
