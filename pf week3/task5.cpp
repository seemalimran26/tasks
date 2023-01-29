#include <iostream>
using namespace std;
main()
{

    int charge;
    int time;
    float current;
    cout << "Enter charge:";
    cin >> charge;
    cout << "Enter time:";
    cin >> time;
    current = charge / time;
    cout << current;
}
