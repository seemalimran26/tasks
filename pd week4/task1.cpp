#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
    system("cls");
    cout << "Test";
    gotoxy(15, 15);
    cout << "my name is seemal";
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
