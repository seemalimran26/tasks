#include <iostream>
using namespace std;
string printActivity(string temperature, string humidity);
int main()
{
    string temperature;
    string humidity;
    string result;
    cout << "enter the temperature:";
    cin >> temperature;
    cout << "enter the humidity:";
    cin >> humidity;
    result = printActivity(temperature, humidity);
    cout << result;
}
string printActivity(string temperature, string humidity)
{
    string result;
    if (temperature == "warm")
    {
        if (humidity == "dry")
        {
            result = "Play tennis";
        }
        if (humidity == "humid")
        {
            result = "swim";
        }
    }
    if (temperature == "cold")
    {
        if (humidity == "dry")
        {
            result = "Play basketball";
        }
        if (humidity == "humid")
        {
            result = "watch tv";
        }
    }
    return result;
}