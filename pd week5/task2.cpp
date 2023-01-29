#include <iostream>
using namespace std;
float pyramidVolume(float length, float width, float height, float volume, string unit);
int main()
{
    float length;
    float volume;
    float result;
    float width;
    float height;
    string unit;
    cout << "Enter the length of a pyramid in meters:";
    cin >> length;
    cout << "Enter the width of pyramid in meters:";
    cin >> width;
    cout << "Enter the height of the pyramid meters:";
    cin >> height;
    cout << "Enter the unit:";
    cin >> unit;
    volume = ((length * width * height) / 3);
    result = pyramidVolume(length, width, height, volume, unit);
    cout << result;
    cout << " cubic ";
    cout << unit;
}

float pyramidVolume(float length, float width, float height, float volume, string unit)
{
    if (unit == "centimeters")
    {
        volume = (volume * 100 * 100 * 100);
    }
    if (unit == "kilometers")
    {
        volume = volume / (1000 * 1000 * 1000);
    }
    if (unit == "millimeters")
    {
        volume = volume * (1000 * 1000 * 1000);
    }
    return volume;
}
