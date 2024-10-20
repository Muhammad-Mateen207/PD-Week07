#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);

int main() 
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout <<num<< " is a prime Number." <<endl;
    } 
    else 
    {
        cout <<num << " is not a Prime Number." <<endl;
    }

    return 0;
}

bool isPrime(int num) 
{
    if (num<= 1)
    {
        return false; 
    }
    else
    {
       for (int i = 2;  i <= sqrt(num); i++) 
       {
          if (num % i == 0)
          {
            return false; 
          }
       }
    }
    return true; 
}


