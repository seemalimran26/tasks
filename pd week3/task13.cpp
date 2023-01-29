#include <iostream>
using namespace std;
main()
{
    int mark1;
    int mark2;
    int mark3;
    int total;
    float average;
    cout << "Enter marks of student1:";
    cin >> mark1;
    cout << "Enter marks of student2:";
    cin >> mark2;
    cout << "Enter marks of student3:";
    cin >> mark3;
    cout << "Enter total marks :";
    cin >> total;
    average = (mark1 + mark2 + mark3) / 3;
    cout << "average:" << average;
}
