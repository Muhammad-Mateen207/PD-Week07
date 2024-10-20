
#include <iostream>
using namespace std;

bool isPrime(int num);
int primorial(int n);

int main() 
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
     
    cout << "Primorial of " << n << " is: " << primorial(n) <<endl; 
    return 0;
}

bool isPrime(int num) 
{
    if (num < 2) 
    {
        return false;
    }
    else
    {
       for (int i = 2; i * i <= num; ++i) 
        {
        if (num % i == 0)
        {
             return false;
        }
        }
    }
    return true;
}

int primorial(int n) 
{
    int product = 1;
    int count = 0;
    int num = 2; 

    while (count < n) 
    {
        if (isPrime(num))
        {
            product *= num;
            count++;
        }
         num++;
    }

    return product;
}


