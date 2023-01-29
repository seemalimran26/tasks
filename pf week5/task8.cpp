#include <iostream>
#include <cmath>
using namespace std;
float calculateHeight(float distance, float degree);
main()
{
    float distance;
    float degree;
    float height;
    cout << "Enter distance:";
    cin >> distance;
    cout << "Enter degrees:";
    cin >> degree;
    height = calculateHeight(degree, distance);
    cout << "Height is:" << height << endl;
}
float calculateHeight(float distance, float degree)
{
    float radian;
    float radians;
    float result;
    float height;
    radian = 57.2958;
    radians = degree / radian;
    result = tan(radians);
    height = distance * result;
    return height;
}