#include <iostream>
using namespace std;

void calculation(int);


int main() 
{
    int visits;
    cout << "Enter Number of days you visited the Hospital: ";
    cin >> visits;

    calculation(visits);

}
void calculation(int visits) 
{
    int Treated_Patients = 0;
    int Untreated_Patients = 0;
    int doctors = 7;

    for (int day = 1; day <= visits; day++) 
    {
        int patientsToday;
        cout << "Enter the number of patients for day " << day << ": ";
        cin >> patientsToday;

        int treatedToday = min(doctors, patientsToday);
        Treated_Patients = Treated_Patients + treatedToday;
        Untreated_Patients = Untreated_Patients + (patientsToday - treatedToday);

        if ((day+1) % 3 == 0) 
        {
            if (Untreated_Patients > Treated_Patients) 
            {
                doctors++;
            }
        }
    }
    cout << "Treated patients: " << Treated_Patients <<endl;
    cout << "Untreated patients: " << Untreated_Patients <<endl;

}
