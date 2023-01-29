#include <iostream>
using namespace std;
main()
{
    int Vi;
    int time;
    float acceleration;
    float Vf;
    cout << "Enter initial velocity of car ";
    cin >> Vi;
    cout << " Enter the time ";
    cin >> time;
    cout << " Enter acceleration ";
    cin >> acceleration;
    Vf = (acceleration * time) + Vi;
    cout << "Final velocity of the car: " << Vf;
}
