#include <iostream>
using namespace std;
main()
{
    int h;
    int x;
    int y;
    cout << "Enter the height :";
    cin >> h;
    cout << "Enter the value of X_Coordinate:";
    cin >> x;
    cout << "Enter the value of Y_Coordinate:";
    cin >> y;
    if ((x > 0 && x < 3 * h) && (y > 0 && y < h))
    {
        cout << "inside";
    }
    else if ((x > h && x < 2 * h) && (y > h && y <= 4 * h))
    {
        cout << "inside";
    }

    else if ((x < h && x > 2 * h) && (y < h && y >= 4 * h))
    {
        cout << "Outside";
    }
    else if ((x >= 0 && x <= 3 * h) && (y >= 0 && y <= h))
    {
        cout << "boundary";
    }
    else if ((x >= h && x <= 2 * h) && (y >= h && y <= 4 * h))
    {
        cout << "boundary";
    }
    else
    {
        cout << "Outside";
    }
}
