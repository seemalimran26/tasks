#include <iostream>
#include <cmath>
using namespace std;
double calculateQuadraticEquation1(double result1);
double calculateQuadraticEquation2(double result2);

main()
{
    double result1;
    double result2;
    result1 = calculateQuadraticEquation1(result1);
    cout << "The result1 is:" << result1 << endl;
    result2 = calculateQuadraticEquation2(result2);
    cout << "The result2 is:" << result2 << endl;
}

double calculateQuadraticEquation1(double result1)
{
    int a = 5, b = 6, c = 1;
    double disc;
    disc = ((b * b) - (4 * a * c));
    result1 = (-b) / (2.0 * a) + ((sqrt(disc)) / (2.0 * a));
    return result1;
}
double calculateQuadraticEquation2(double result2)
{
    int a = 5, b = 6, c = 1;
    double disc;
    disc = ((b * b) - (4 * a * c));
    result2 = (-b) / (2.0 * a) - ((sqrt(disc)) / (2.0 * a));
    return result2;
    ;
}
