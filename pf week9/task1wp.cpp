#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter the value of array:";
    cin >> size;
    int number[size];
   
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "The  value is:" << number[i] << endl;
        
    }
  
}