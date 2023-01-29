#include <iostream>
using namespace std;
main()
{
    string name;
    int subject1;
    int subject2;
    int subject3;
    int subject4;
    int subject5;
    cout << "Enter your name";
    cin >> name;
    float totalMarks;
    float percentage;
    cout << "Enter marks of first subject:";
    cin >> subject1;
    cout << "Enter marks of second subject:";
    cin >> subject2;
    cout << "Enter marks of third subject:";
    cin >> subject3;
    cout << "Enter marks of fourth subject:";
    cin >> subject4;
    cout << "Enter marks of fifth subject:";
    cin >> subject5;
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    cout << "Total marks of student is:" << totalMarks;
    percentage = (totalMarks / 500) * 100;
    cout << " percentage of student:" << percentage;
}
