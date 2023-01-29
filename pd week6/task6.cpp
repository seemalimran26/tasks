#include <iostream>
using namespace std;
float rentOfStudio(string month, int daysToStay);
float rentOfApartment(string month, int daysToStay);
int main()
{

  string month;
  int daysToStay;
  float result1;
  float result2;
  cout << "enter month when you have to stay in hotel:";
  cin >> month;
  cout << "enter no of days to stay in hotel :";
  cin >> daysToStay;

  result1 = rentOfStudio(month, daysToStay);
  cout << "Studio:" << result1 << "$" << endl;
  result2 = rentOfApartment(month, daysToStay);
  cout << "Apartment:" << result2 << "$";
}
float rentOfStudio(string month, int daysToStay)
{
  float studioPrice;
  if (month == "May" || month == "October")
  {
    studioPrice = daysToStay * 50;
    if (daysToStay <= 7)
    {
      studioPrice;
    }
    else if (daysToStay > 7 && daysToStay <= 14)
    {
      studioPrice = (daysToStay * 50) - ((daysToStay * 50) * 0.05);
    }
    else if (daysToStay > 14)
    {
      studioPrice = (daysToStay * 50) - ((daysToStay * 50) * 0.30);
    }
  }
  if (month == "June" || month == "September")
  {
    studioPrice = daysToStay * 75.20;
    if (daysToStay <= 14)
    {
      studioPrice;
    }
    else if (daysToStay > 14)
    {
      studioPrice = (daysToStay * 75.20) - (daysToStay * 75.20) * 0.20;
    }
  }
  if (month == "July" || month == "August")
  {
    studioPrice = daysToStay * 76;
  }

  return studioPrice;
}
float rentOfApartment(string month, int daysToStay)
{
  float apartmentPrice;

  if (month == "May" || month == "October")
  {
    apartmentPrice = daysToStay * 65;
  }
  if (month == "June" || month == "September")
  {
    apartmentPrice = daysToStay * 68.70;
  }
  if (month == "July" || month == "August")
  {
    apartmentPrice = daysToStay * 77;
  }
  if (daysToStay > 14)
  {
    apartmentPrice = apartmentPrice - (apartmentPrice * 0.10);
  }

  return apartmentPrice;
}
