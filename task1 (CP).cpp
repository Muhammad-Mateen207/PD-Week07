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
   for(int i=rowSize; i>0; i--)
   {
      for(int asterik=0; asterik<i; asterik++)
      {
        cout<<"*";
      }
      cout<<endl;
   }
    
}
