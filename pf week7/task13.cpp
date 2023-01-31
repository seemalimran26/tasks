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
    float count1 = 0;
    float count2 = 0;
    float count3 = 0;
    float count4 = 0;
    float count5 = 0;
    float i = 1;
    int number;

    while (i <= range)
    {
        cout << "Enter the number:" << endl;
        cin >> number;
        if (number < 200)
        {

            count1 = count1 + 1;
        }
        if (number >= 200 && number <= 399)
        {
            count2 = count2 + 1;
        }

        if (number >= 400 && number <= 599)
        {
            count3 = count3 + 1;
        }
        if (number >= 600 && number <= 799)
        {
            count4 = count4 + 1;
        }
        if (number >= 800)
        {
            count5 = count5 + 1;
        }
        i++;
    }
    double per1;
    per1 = (count1 / range) * 100;
    cout << "per1:" << per1 << "%" << endl;
    double per2;
    per2 = (count2 / range) * 100;
    cout << "per2:" << per2 << "%" << endl;
    double per3;
    per3 = (count3 / range) * 100;
    cout << "per3:" << per3 << "%" << endl;
    double per4;
    per4 = (count4 / range) * 100;
    cout << "per4:" << per4 << "%" << endl;
    double per5;
    per5 = (count5 / range) * 100;
    cout << "per5:" << per5 << "%" << endl;
}
