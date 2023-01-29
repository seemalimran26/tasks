#include <iostream>
using namespace std;
main()
{
    int doctors = 7;
    int treatedPatients = 0;
    int untreatedPatients = 0;
    int patientsPerDay = 0;
    int day;
    cout << "enter the no of days:";
    cin >> day;
    cout << "ENTER THE NUMBER OF PATIENTS PER DAY:" << endl;
    for (int i = 1; i <= day; i++)
    {
        cin >> patientsPerDay;
        if (patientsPerDay <= doctors)
        {
            treatedPatients = treatedPatients + patientsPerDay;
        }
        else
        {
            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + patientsPerDay - doctors;
        }

        if (i % 3 == 0 && treatedPatients < untreatedPatients)
        {

            cout << "Another doctor is appointed" << endl;
        }
        if (i > 3)
        {
            treatedPatients = treatedPatients + 1;
            untreatedPatients = untreatedPatients - 1;
        }
    }
    cout << "The number of treated patients are:";
    cout << treatedPatients << endl;
    cout << "The number of untreated patients are :";
    cout << untreatedPatients << endl;
}