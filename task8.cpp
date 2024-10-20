#include <iostream>
#include <iomanip>
using namespace std;

void calculation(int);

int main() 
{
    int items;
    cout << "Enter the count of Cargo for transportation: ";
    cin >> items;

    calculation(items);

}
void calculation(int items)
{
    int Final_Cost = 0;
    int Total_Weight = 0;
    int Minibus_Weight = 0;
    int Truck_Weight = 0;
    int Train_Weight = 0;

    for (int i = 0; i < items; i++) 
    {
        int weight;
        cout << "Enter the tonnage of Cargo " << (i + 1) << ": ";
        cin >> weight;

        Total_Weight += weight;

        if (weight <= 3) 
        {
            Final_Cost += weight * 200; 
            Minibus_Weight += weight;
        } 
        else if (weight <= 11) 
        {
            Final_Cost += weight * 175; 
            Truck_Weight += weight;
        } 
        else 
        {
            Final_Cost += weight * 120; 
            Train_Weight += weight;
        }
    }

    int averagePricePerTon;
    averagePricePerTon = Final_Cost * 100 / Total_Weight; 
    int minibus_percent;
    minibus_percent = (Minibus_Weight * 10000) / Total_Weight; 
    int truck_percent;
    truck_percent = (Truck_Weight * 10000) / Total_Weight;
    int train_percent;
    train_percent = (Train_Weight * 10000) / Total_Weight;

    cout << fixed <<setprecision(2);
    cout <<averagePricePerTon / 100.0 <<endl;
    cout << minibus_percent / 100.0 << "%" <<endl;
    cout << truck_percent/ 100.0 << "%" <<endl;
    cout << train_percent / 100.0 << "%" <<endl;
}


