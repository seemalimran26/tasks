#include <iostream>
using namespace std;
main()
{

    string temperature;
    string humidity;
    cout << "Enter the temperature:";
    cin >> temperature;
    cout << "Enter the humidity:";
    cin >> humidity;
    if (temperature == "warm")
    {
        if (humidity == "dry")
        {
            cout << "play tennis";
            if (humidity == "humid")
            {
                cout << "swim";
            }
        }
        if (temperature == "cold")
        {
            if (humidity == "dry")
            {
                cout << "play basketball";
                if (humidity == "humid")
                {
                    cout << "watch tv";
                }
            }
        }
    }