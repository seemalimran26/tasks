#include <iostream>
using namespace std;
main()
{
    float vegPrice;
    float fruitPrice;
    float vegKilo;
    float fruitKilo;
    float vegCost;
    float fruitCost;
    float total = 0;
    float totalPrice = 0;
    cout << "Enter the vegetable price:";
    cin >> vegPrice;
    cout << "Enter the veg kilo:";
    cin >> vegKilo;
    cout << "Enter the fruitPrice:";
    cin >> fruitPrice;
    cout << "Enter the fruit kilo:";
    cin >> fruitKilo;

    vegCost = vegPrice * vegKilo;
    fruitCost = fruitPrice * fruitKilo;
    total = vegCost + fruitCost;
    totalPrice = (total) / 1.94;
    cout << totalPrice;
}