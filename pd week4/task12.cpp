#include <iostream>
using namespace std;
void flowerPrice(int redRosesNumber, int whiteRosesNumber, int tulipsNumber);
main()
{
   int redRosesNumber, whiteRosesNumber, tulipsNumber;
   cout << "Enter the number of red roses:";
   cin >> redRosesNumber;
   cout << "Enter the number of white roses:";
   cin >> whiteRosesNumber;
   cout << "Enter the number of tulips:";
   cin >> tulipsNumber;
   flowerPrice(redRosesNumber, whiteRosesNumber, tulipsNumber);
}
void flowerPrice(int redRosesNumber, int whiteRosesNumber, int tulipsNumber)
{
   float originalPrice;
   float priceAfterDiscount;
   originalPrice = ((redRosesNumber * 2.00) + (whiteRosesNumber * 4.10) + (tulipsNumber * 2.50));
   cout << "Original price:";
   cout << originalPrice << endl;
   if (originalPrice > 200)
   {
      priceAfterDiscount = (originalPrice - (originalPrice * 0.2));
      cout << "price after discount:";
      cout << priceAfterDiscount;
   }
}
