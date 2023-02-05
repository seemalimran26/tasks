#include <iostream>
using namespace std;
main()
{
    string name[5] = {"Gladiator", "Starwars", "Terminator", "TombRider"};
    string movieName;
    int ticketNo;
    cout << "Enter the no of ticket:";
    cin >> ticketNo;
    int price;
    cout << "Enter the name of the movie:";
    cin >> movieName;
    for (int index = 0; index < 5; index++)
    {
        if (movieName == name[index])
        {
            price = ticketNo * 500;
            if (index % 2 == 0)
            {
                price = (500 * ticketNo) - ((10 * 500 * ticketNo) / 100);
            }
            else
            {
                price = (500 * ticketNo) - ((5 * 500 * ticketNo) / 100);
            }
            cout << price;
        }
    }
}
