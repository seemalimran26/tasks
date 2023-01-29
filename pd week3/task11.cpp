#include <iostream>
using namespace std;
main()
{
    int a;
    int b;
    int result;
    int position1, position2, position3, position4, position5, position6, position7, position8;
    cout << "Enter first integer:";
    cin >> a;
    cout << "Enter second integer:";
    cin >> b;
    position4 = (a % 10);
    position3 = ((a / 10) % 10);
    position2 = (((a / 10) / 10) % 10);
    position1 = ((((a / 10) / 10) / 10) % 10);
    position8 = (b % 10);
    position7 = ((b / 10) % 10);
    position6 = (((b / 10) / 10) % 10);
    position5 = ((((b / 10) / 10) / 10) % 10);
    result = ((position1 + position3 + position5 + position7) + (position2 * position4 * position6 * position8));
    cout << "result:" << result;
}
