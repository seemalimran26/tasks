#include <iostream>
float taxCalculator(char type, float price);
using namespace std;
main()
{
    char type;
    float finalPrice;
    float price;
    float result;
    cout << "Enter the price of vehicle:";
    cin >> price;
    cout << "Enter the type of vehicle:";
    cin >> type;
    finalPrice = taxCalculator(type, price);
    cout << "The final price of a vehicle of " << type << " after adding the tax is " << finalPrice;
}
float taxCalculator(char type, float price)
{
    float tax;
    float finalPrice;
    if (type == 'M')
    {
        tax = (price * 0.06);
        finalPrice = tax + price;
    }
    if (type == 'E')
    {
        tax = (price * 0.08);
        finalPrice = tax + price;
    }
    if (type == 's')
    {
        tax = (price * 0.1);
        finalPrice = tax + price;
    }
    if (type == 'V')

    {
        tax = (price * 0.1);
        finalPrice = tax + price;
    }
    if (type == 'T')
    {
        tax = (price * 0.12);
        finalPrice = tax + price;
    }
    return finalPrice;
}
