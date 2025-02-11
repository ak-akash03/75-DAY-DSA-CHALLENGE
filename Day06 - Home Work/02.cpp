// write a function to print all prime numbers from 1 to N.

#include <iostream>
using namespace std;

void checkPrime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 0)
    {
    }
    else
    {
        cout << n << " ";
    }
}

void printPrime(int time)
{
    for (int i = 1; i <= time; i++)
    {

        checkPrime(i);
    }
}

int main()
{

    int time = 20;

    printPrime(time);

    return 0;
}