#include <iostream>
#include <cmath>
using namespace std;
void calculatePer(float range);
int main()
{
    float range = 0;
    cout << "Enter the range:";
    cin >> range;
    calculatePer(range);
}
void calculatePer(float range)
{

    float count = 0;
    float count1 = 0;
    float count2 = 0;
    float i = 1;
    int number;

    while (i <= range)
    {
        cout << "Enter the number:" << endl;
        cin >> number;
        if (number % 2 == 0)
        {

            count = count + 1;
        }
        if (number % 3 == 0)
        {
            count1 = count1 + 1;
        }

        if (number % 4 == 0)
        {
            count2 = count2 + 1;
        }
        i++;
    }
    double per1;
    per1 = (count / range) * 100;
    cout << "per1:" << per1 << "%" << endl;
    double per2;
    per2 = (count1 / range) * 100;
    cout << "per2:" << per2 << "%" << endl;
    double per3;
    per3 = (count2 / range) * 100;
    cout << "per3:" << per3 << "%" << endl;
}
