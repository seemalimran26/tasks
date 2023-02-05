#include <iostream>
using namespace std;
main()
{
    string fruit[4] = {"Peach", "Apple", "Guava", "Watermelon"};
    int price[4] = {60, 70, 40, 30};
    string fruitName;
    int quantity;
    int totalBill;
    cout << "enter the name of the fruit:";
    cin >> fruitName;
    cout << "enter the quantitity in kgs:";
    cin >> quantity;
    for (int index = 0; index < 4; index++)
    {
        if (fruitName == fruit[index])
        {
            totalBill = quantity * price[index];
            cout << totalBill;
        }
    }
}
