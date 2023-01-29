#include <iostream>
using namespace std;
float check(string city, string product, float quality);
int main()
{
    string city;
    string product;
    float quality;
    float result;
    cout << "Enter the name of city:";
    cin >> city;
    cout << "Enter the product name:";
    cin >> product;
    cout << "Enter the quality of product:";
    cin >> quality;
    result = check(city, product, quality);
    cout << result;
}
float check(string city, string product, float quality)
{
    float cost;
    if (product == "coffee")
    {
        if (city == "Sofia")
        {
            cost = 0.50 * quality;
        }
        else if (city == "Plovdiv")
        {
            cost = 0.40 * quality;
        }
        else if (city == "Varna")
        {
            cost = 0.45 * quality;
        }
        else
        {
            exit;
        }
    }
    else if (product == "water")
    {
        if (city == "Sofia")
        {
            cost = 0.80 * quality;
        }
        else if (city == "Plovdiv")
        {
            cost = 0.70 * quality;
        }
        else if (city == "Varna")
        {
            cost = 0.70 * quality;
        }
        else
        {
            exit;
        }
    }
    else if (product == "beer")
    {
        if (city == "Sofia")
        {
            cost = 1.20 * quality;
        }
        else if (city == "Plovdiv")
        {
            cost = 1.15 * quality;
        }
        else if (city == "Varna")
        {
            cost = 1.10 * quality;
        }
        else
        {
            exit;
        }
    }
    else if (product == "sweet")
        if (city == "Sofia")
        {
            cost = 1.45 * quality;
        }
        else if (city == "Plovdiv")
        {
            cost = 1.30 * quality;
        }
        else if (city == "Varna")
        {
            cost = 1.35 * quality;
        }
        else
        {
            exit;
        }
    else if (product == "peanuts")
    {
        if (city == "Sofia")
        {
            cost = 1.60 * quality;
        }
        else if (city == "Plovdiv")
        {
            cost = 1.50 * quality;
        }
        else if (city == "Varna")
        {
            cost = 1.55 * quality;
        }
        else
        {
            exit;
        }
    }
    else
    {
        exit;
    }
    return cost;
}
