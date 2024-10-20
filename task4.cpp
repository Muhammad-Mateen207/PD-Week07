#include <iostream>
using namespace std;

int numofdots(int);

int main()
{
    int num;
    cout << "Enter the number of Triangle: ";
    cin >> num;

    int a = numofdots(num);
    cout << "Dots in Triangle are: "<<a;
}
int numofdots(int num)
{
    int Dots_Number;    
    Dots_Number = (num * (num + 1)) / 2; 
    return Dots_Number ;
}



    

