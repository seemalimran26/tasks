#include <iostream>
using namespace std;

main()
{
    float count;
    float weight;
    float minibus = 0;
    float train = 0;
    float truck = 0;
    int sum = 0;
    float average;
    float perOfBus;
    float perOfTruck;
    float perOfTrain;

    cout << "enter the count of cargo for transportation:";
    cin >> count;
    cout << "enter the weight: " << endl;

    for (int i = 1; i <= count; i = i + 1)
    {
        cin >> weight;
        sum = sum + weight;
        if (weight >= 1 && weight <= 3)
        {
            minibus = minibus + weight;
        }
        else if (weight > 3 && weight <= 11)
        {
            truck = truck + weight;
        }
        else if (weight > 11)
        {
            train = train + weight;
        }
    }

    perOfBus = (minibus * 100) / sum;
    perOfTruck = (truck * 100) / sum;
    perOfTrain = (train * 100) / sum;
    average = ((minibus * 200) + (truck * 175) + (train * 120)) / sum;
    cout << "Average price of the cargo is:" << average << endl;
    cout << "Per of cargo for minibus:" << perOfBus << "%" << endl;
    cout << "Per of cargo for truck:" << perOfTruck << "%" << endl;
    cout << "Per of cargo for train:" << perOfTrain << "%" << endl;
}
