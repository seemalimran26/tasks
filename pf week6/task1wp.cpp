#include <iostream>
using namespace std;
int main()
{
    int cost;
    string brand;
    cout << "Enter the cost of the dress:";
    cin >> cost;
    cout << "Enter the brand of the dress:";
    cin >> brand;
    if (cost > 1500 && brand == "MT")
    {
        cout << "Buy the dress";
    }
}