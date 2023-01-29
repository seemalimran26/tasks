#include <iostream>
using namespace std;
main()
{
    float dd, mm, yyyy;
    float totalAge;
    float currentYear;
    cout << "Enter your date of birth:";
    cin >> dd;
    cout << "Enter your birth month:";
    cin >> mm;
    cout << "Enter your birth year:";
    cin >> yyyy;
    cout << "Enter the current year:";
    cin >> currentYear;
    totalAge = ((((mm * 30) + dd) / 365) + (currentYear - yyyy));
    cout << "your age in years:" << totalAge;
}