#include <iostream>
using namespace std;

void upper_part(int);
void lower_part(int);

int main()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
   
    upper_part(rows);
    lower_part(rows);  
}
void upper_part(int rows) 
{
    
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lower_part(int rows) 
{
    for (int i = rows - 1; i >= 1; i--) 
    {
        for (int j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}

