#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
int main()
{
    int age;
    char gender;
    string result;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter your gender:";
    cin >> gender;
    result = checkTitle(age, gender);
    cout << result;
}
string checkTitle(int age, char gender)
{
    string title;
    if (gender == 'm' && age >= 16)
    {
        title = "Mr.";
    }
    if (gender == 'm' && age < 16)
    {
        title = "Master";
    }
    if (gender == 'f' && age >= 16)
    {
        title = "Ms.";
    }
    if (gender == 'f' && age < 16)
    {
        title = "Miss.";
    }

    return title;
}