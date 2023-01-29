#include <iostream>
using namespace std;
main()
{
    string fruit;
    string day;
    int quantity;
    float price;
    cout << "Enter the name of the fruit:";
    cin >> fruit;
    cout << "Enter the day in the week:";
    cin >> day;
    cout << "Enter the quantity you want to buy:";
    cin >> quantity;
    if (day != "Sunday" && day != "Saturday")
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
            cout << price;
        }
        if (fruit == "apple")
        {
            price = 1.20 * quantity;
            cout << price;
        }
        if (fruit == "orange")
        {
            price = 0.85 * quantity;
            cout << price;
        }
        if (fruit == "grapefruit")
        {
            price = 1.45 * quantity;
            cout << price;
        }
        if (fruit == "kiwi")
        {
            price = 2.70 * quantity;
            cout << price;
        }
        if (fruit == "pineaplpple")
        {
            price = 5.50 * quantity;
            cout << price;
        }
        if (fruit == "grappes")
        {
            price = 3.85 * quantity;
            cout << price;
        }
    }
    else
    {
        if (fruit == "banana")
        {
            price = 2.70 * quantity;
            cout << price;
        }
        if (fruit == "apple")
        {
            price = 1.25 * quantity;
            cout << price;
        }
        if (fruit == "orange")
        {
            price = 0.90 * quantity;
            cout << price;
        }
        if (fruit == "grapefruit")
        {
            price = 1.60 * quantity;
            cout << price;
        }
        if (fruit == "kiwi")
        {
            price = 3.00 * quantity;
            cout << price;
        }
        if (fruit == "pineaplpple")
        {
            price = 5.60 * quantity;
            cout << price;
        }
        if (fruit == "grappes")
        {
            price = 4.20 * quantity;
            cout << price;
        }
    }
}