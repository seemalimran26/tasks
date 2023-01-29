#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA();
void printW();
void printI();
void printS();

main()
{
  printA();
  printW();
  printI();
  printS();
}

void printA()
{

  gotoxy(1, 1);
  cout << "           @@@@@@@@         " << endl;
  gotoxy(1, 2);
  cout << "           @@    @@         " << endl;
  gotoxy(1, 3);
  cout << "           @@@@@@@@         " << endl;
  gotoxy(1, 4);
  cout << "           @@    @@         " << endl;
  gotoxy(1, 5);
  cout << "           @@    @@         " << endl;
  gotoxy(1, 6);
  cout << "           @@    @@         " << endl;
}
void printW()
{

  gotoxy(1, 8);
  cout << "        @@@@@       @@@@@  " << endl;
  gotoxy(1, 9);
  cout << "          @@@        @@@   " << endl;
  gotoxy(1, 10);
  cout << "          @@@    @   @@@   " << endl;
  gotoxy(1, 11);
  cout << "          @@@   @@   @@@   " << endl;
  gotoxy(1, 12);
  cout << "          @@@ @@  @@ @@@   " << endl;
  gotoxy(1, 13);
  cout << "          @@@        @@@   " << endl;
  gotoxy(1, 15);
  cout << "           @@@@@@@@@       " << endl;
  gotoxy(1, 16);
  cout << "           @@     @@       " << endl;
  gotoxy(1, 17);
  cout << "           @@@@@@@@@       " << endl;
  gotoxy(1, 18);
  cout << "           @@     @@       " << endl;
  gotoxy(1, 19);
  cout << "           @@     @@       " << endl;
  gotoxy(1, 20);
  cout << "           @@     @@       " << endl;
}

void printI()
{
  gotoxy(1, 22);
  cout << "            @@@@@@@@        " << endl;
  gotoxy(1, 23);
  cout << "              @@@          " << endl;
  gotoxy(1, 24);
  cout << "              @@@          " << endl;
  gotoxy(1, 25);
  cout << "              @@@          " << endl;
  gotoxy(1, 26);
  cout << "              @@@          " << endl;
  gotoxy(1, 27);
  cout << "            @@@@@@@@       " << endl;
}
void printS()
{
  gotoxy(1, 29);
  cout << "            @@@@@@@@      " << endl;
  gotoxy(1, 30);
  cout << "            @             " << endl;
  gotoxy(1, 31);
  cout << "            @             " << endl;
  gotoxy(1, 32);
  cout << "            @@@@@@@@      " << endl;
  gotoxy(1, 33);
  cout << "                   @      " << endl;
  gotoxy(1, 34);
  cout << "                   @      " << endl;
  gotoxy(1, 35);
  cout << "           @@@@@@@@@      " << endl;
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
