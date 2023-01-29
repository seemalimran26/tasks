#include <iostream>
using namespace std;
main()
{
    int day;
    string month;
    cout << "The the date of your birth:";
    cin >> day;
    string sign;
    cout << "Enter the month of your birth:";
    cin >> month;
    if (day >= 21 && month == "March" || day <= 19 && month == "April")

    {
        cout << "Aries";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day >= 20 && month == "April" || day <= 20 && month == "May")
    {
        cout << "Taurus";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day >= 21 && month == "May" || day == 20 && month == "June")

    {
        cout << "Gemini";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 20 && month == "June" || day <= 22 && month == "July")

    {
        cout << "Cancer";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 22 && month == "July" || day <= 22 && month == "August")

    {
        cout << "Leo";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 23 && month == "August" || day <= 22 && month == "September")

    {
        cout << "Virgo";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 23 && month == "September" || day <= 22 && month == "October")

    {
        cout << "Libra";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 21 && month == "October" || day <= 21 && month == "November")

    {
        cout << "scorpio";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 21 && month == "November" || day <= 21 && month == "December")

    {
        cout << "Sagittarius";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 21 && month == "December" || day <= 19 && month == "January")

    {
        cout << "Capricon";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 19 && month == "January" || day <= 18 && month == "February")

    {
        cout << "Aquarius";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
    if (day > 18 && month == "February" || day <= 20 && month == "March")

    {
        cout << "Pisces";
        cout << sign;
        cout << "please born on this date to have " << sign << "sign";
    }
}
