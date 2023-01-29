
#include <iostream>
using namespace std;
main()
{
    int MB;
    int KB;
    int bit;
    cout << "Enter data in megabytes";
    cin >> MB;

    bit = 1024 * 1024 * MB * 8;
    cout << "bit=" << bit;
}
