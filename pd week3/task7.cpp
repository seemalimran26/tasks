#include <iostream>
using namespace std;
main()
{
    string movie;
    float adultPrice;
    float childPrice;
    float adultTicketSold;
    float childTicketSold;
    float donatedPercentage;
    float amount;
    cout << "Enter movie name:" << endl;
    cin >> movie;
    cout << "Enter the ticket price of  adult:" << endl;
    cin >> adultPrice;
    cout << "Enter the ticket price of child:" << endl;
    cin >> childPrice;
    cout << " Enter the number of adult ticket sold:" << endl;
    cin >> adultTicketSold;
    cout << "Enter the number of child ticket sold:" << endl;
    cin >> childTicketSold;
    cout << "Enter the donated Percentage:" << endl;
    cin >> donatedPercentage;
    float total;
    total = (adultPrice * adultTicketSold) + (childPrice * childTicketSold);
    amount = (total - (total * (donatedPercentage / 100)));
    cout << "Total:" << total << endl;
    cout << "Amount after donation:" << amount;
}
