#include <iostream>
using namespace std;
void priceDisplay(string name, int price);
main()
{
  string name;
  int price;
  cout << "Enter country name:";
  cin >> name;
  cout << "Enter the ticket price in dollars:";
  cin >> price;
  priceDisplay(name, price);
}
void priceDisplay(string name, int price)
{
  long double finalPrice;
  if (name == "Pakistan")
  {
    finalPrice = (price - (price * 0.05));
    cout << "Final price of ticket after the discount:";
    cout << finalPrice;
  }
  if (name == "Ireland")
  {
    finalPrice = (price - (price * 0.1));
    cout << "Final price of ticket after the discount:";
    cout << finalPrice;
  }
  if (name == "India")
  {
    finalPrice = (price - (price * 0.2));
    cout << "Final price of ticket after the discount:";
    cout << finalPrice;
  }
  if (name == "England")
  {
    finalPrice = (price - (price * 0.3));
    cout << "Final price of ticket after the discount:";
    cout << finalPrice;
  }
  if (name == "Canada")
  {
    finalPrice = (price - (price * 0.45));
    cout << "Final price of ticket after the discount:";
    cout << finalPrice;
  }
}
