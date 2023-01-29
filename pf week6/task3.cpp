#include <iostream>
using namespace std;
string checkSpeed(float speed);
int main()
{
   float speed;
   string result;
   cout << "Enter the speed :";
   cin >> speed;
   result = checkSpeed(speed);
   cout << result;
}
string checkSpeed(float speed)
{
   string information;
   if (speed <= 10)
   {
      information = "slow";
   }
   if (speed > 10 && speed <= 50)
   {
      information = "average";
   }
   if (speed > 50 && speed <= 150)
   {
      information = "fast";
   }
   if (speed > 50 && speed <= 1500)
   {
      information = "ultra fast";
   }
   return information;
}