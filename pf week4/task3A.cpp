#include <iostream>
using namespace std;
void printResult(int marks);
main()
{
  int marks;
  cout << "Enter your marks:";
  cin >> marks;
  if (marks > 50)
  {
    printResult(marks);
  }

  if (marks < 50)
  {
    cout << "You are Fail";
  }
}
void printResult(int marks)
{
  cout << "Congratulations! You are Pass";
}
