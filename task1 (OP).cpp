#include<iostream>
using namespace std;

void printStars(int);

int main()
{
    int rowSize;
    cout<<"Enter the Number of Rows: ";
    cin>>rowSize;

    printStars(rowSize);

}
void printStars(int rowSize)
{
   
    for(int row=1; row<=rowSize; row++)
    {
         int column;
         for(column=1; column<=row; column++)
         {
            cout<<"*";
         }
         cout<<endl;
    }
}