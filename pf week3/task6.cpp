#include <iostream>
using namespace std;
main()
{

    string name;
    float matric;
    float inter;
    float ECAT;
    float aggregate;
    cout << "Enter Your name:";
    cin >> name;
    cout << "Enter your Inter marks:";
    cin >> inter;
    cout << "Enter your Matric Marks:";
    cin >> matric;
    cout << "Enter your ECAT marks:";
    cin >> ECAT;
    aggregate = ((inter / 550) * 40 + (matric / 1100) * 10 + (ECAT / 400) * 50);
    cout << "aggregate:" << aggregate;
}
