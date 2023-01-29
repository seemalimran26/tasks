#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printName();
main()
{
  system("cls");
  int x, y;
  printName();
  gotoxy(x, y);
}
void printName()
{
  gotoxy(40, 17);
  cout << "                  @@@@@@@   @@@@@@   @@@@@@  @@           @@   @@@@@@@@  @@                   " << endl;
  gotoxy(40, 18);
  cout << "                  @         @        @       @@@@       @@@@   @@    @@  @@                   " << endl;
  gotoxy(40, 19);
  cout << "                  @         @        @       @@  @@   @@  @@   @@    @@  @@                   " << endl;
  gotoxy(40, 20);
  cout << "                  @@@@@@@   @@@@@@   @@@@@@  @@   @@ @@   @@   @@@@@@@@  @@                   " << endl;
  gotoxy(40, 21);
  cout << "                        @   @        @       @@    @@     @@   @@    @@  @@                   " << endl;
  gotoxy(40, 22);
  cout << "                        @   @        @       @@    @@     @@   @@    @@  @@                   " << endl;
  gotoxy(40, 23);
  cout << "                  @@@@@@@   @@@@@@   @@@@@@  @@           @@   @@    @@  @@@@@@@@@            " << endl;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
