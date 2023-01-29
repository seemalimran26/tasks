#include <iostream>
using namespace std;
main()
{
    int bagSize;
    int bagCost;
    int bagArea;
    int fertilizerCost;
    int fertilizingArea;
    cout << "Enter the size of fertilizing bag in pounds:";
    cin >> bagSize;
    cout << "Enter the cost of the bag";
    cin >> bagCost;
    cout << "Enter the area in square feet covered by the bag";
    cin >> bagArea;
    fertilizerCost = (bagCost / bagSize);
    cout << "cost of the fertilizer per pound" << fertilizerCost << endl;
    fertilizingArea = bagArea * bagSize;
    cout << "cost of the fertilizing the area per square feet" << fertilizingArea;
}
