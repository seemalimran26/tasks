#include <iostream>
using namespace std;
void printDetails(string name, int matricMarks, int interMarks, float aggregate);

main()

{
    string name;
    int matricMarks;
    int interMarks;
    float aggregate;
    cout << "Enter your Name:";
    cin >> name;
    cout << "Enter your Matric Marks:";
    cin >> matricMarks;
    cout << "Enter your Inter Marks:";
    cin >> interMarks;
    cout << "Enter your Aggregate:";
    cin >> aggregate;
    printDetails(name, matricMarks, interMarks, aggregate);
}
void printDetails(string name, int matricMarks, int interMarks, float aggregate)
{
    cout << "your Name is:";
    cout << name << endl;
    cout << "your Matric Marks are:";
    cout << matricMarks << endl;
    cout << "your Inter Marks are:";
    cout << interMarks << endl;
    cout << "your Aggregate is:";
    cout << aggregate << endl;
}
