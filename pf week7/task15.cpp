#include <iostream>
using namespace std;
float calculatePrice(float money, int year);

int main()
{
    int year;
    float money;

    cout << "ENTER THE AMOUNT OF MONEY : " << endl;
    cin >> money;
    cout << "ENTER THE YEAR  : " << endl;
    cin >> year;
    float result = calculatePrice(money, year);
    if (result < money)
    {
        cout << "YES! HE WILL LIVE A CAREFREE LIFE AND WILL HAVE " << result << " "
             << "DOLLARS LEFT" << endl;
    }
    else
    {
        cout << " NO! HE NEED " << result << " "
             << "DOLLARS MORE" << endl;
    }
}
float calculatePrice(float money, int year)

{
    int age = 18;

    for (int presYear = 1800; presYear <= year; presYear++)
    {
        if (presYear % 2 == 0)
        {
            money = money - 12000;
        }
        else
        {
            money = money - (12000 + 50 * age);
        }

        age++;
    }
    return money;
}
