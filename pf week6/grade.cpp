#include <iostream>
using namespace std;
char checkResult(int marks);
int main()
{
   int marks;
   cout << "Enter your marks:";
   cin >> marks;
   char grade = checkResult(marks);
   cout << grade;
}
char checkResult(int marks)
{
   char result;
   if (marks < 50)
   {
      result = 'F';
   }
   else if (marks >= 50 && marks < 60)
   {
      result = 'E';
   }
   else if (marks > 60 && marks < 70)
   {
      result = 'D';
   }
   else if (marks > 70 && marks < 80)
   {
      result = 'C';
   }
   else if (marks > 80 && marks < 85)
   {
      result = 'B';
   }
   else
   {
      result = 'A';
   }
   return result;
}
