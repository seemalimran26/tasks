#include <iostream>
using namespace std;
void printMenu(string Menu);
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);

main()

{
  string Menu;
  string name;
  int matricMarks, interMarks, ecatMarks;
  string nameStd1;
  int ecatMarksStd1;
  string nameStd2;
  int ecatMarksStd2;
  cout << "Enter your name:";
  cin >> name;
  cout << "Enter your Matric Marks:";
  cin >> matricMarks;
  cout << "Enter your Inter Marks:";
  cin >> interMarks;
  cout << "Enter yor ecat Marks:";
  cin >> ecatMarks;
  cout << "Enter name of student1:";
  cin >> nameStd1;
  cout << "Enter ecat marks of student1:";
  cin >> ecatMarksStd1;
  cout << "Enter name of student1:";
  cin >> nameStd2;
  cout << "Enter ecat marks of student2:";
  cin >> ecatMarksStd2;
  printMenu(Menu);
  calculateAggregate(name, matricMarks, interMarks, ecatMarks);
  compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
}
void printMenu(string Menu)
{
  cout << "UNIVERSITY  ADMISSION MANAGEMENT   SYSTEM" << endl;
}
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
  float totalAggregate;
  float matricAggregate;
  float interAggregate;
  float ecatAggregate;
  matricAggregate = ((matricMarks / 1100) * 30);
  interAggregate = ((interMarks / 550) * 30);
  ecatAggregate = ((ecatMarks / 400) * 40);
  totalAggregate = (matricAggregate + interAggregate + ecatAggregate);
  cout << "The Aggregate is:";
  cout << totalAggregate << endl;
}
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{
  if (ecatMarksStd1 > ecatMarksStd2)
  {
    cout << "Student1 Roll Number is 1";
  }
  if (ecatMarksStd1 < ecatMarksStd2)
  {
    cout << "Student2 Roll Number is 1";
  }
}
