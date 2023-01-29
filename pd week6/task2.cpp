#include <iostream>
using namespace std;
main()
{
    string name;
    int s1, s2, s3, s4, s5;
    float total;
    float percentage;
    char grade;
    cout << "Enter subject1 marks:";
    cin >> s1;
    cout << "Enter subject2 marks:";
    cin >> s2;
    cout << "Enter subject3 marks:";
    cin >> s3;
    cout << "Enter subject4 marks:";
    cin >> s4;
    cout << "Enter subject5 marks:";
    cin >> s5;
    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500) * 100;
    if (percentage >= 90 && percentage <= 100)
    {
        cout << "A+";
    }
    if (percentage > 90 && percentage <= 80)
    {
        cout << "A";
    }
    if (percentage > 80 && percentage <= 70)
    {
        cout << "B+";
    }
    if (percentage >= 70 && percentage <= 60)
    {
        cout << "B";
    }
    if (percentage > 60 && percentage <= 50)
    {
        cout << "C";
    }
}