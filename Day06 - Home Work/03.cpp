// write a function to print nth Fibonacci.

// 0 1 1 2 3 5 8 13 .......

#include <iostream>
using namespace std;

void fibo(int num)
{

    int firstV = 0;
    int secondV = 1;
    int nextV;

    cout << firstV<< " " << secondV << " ";
    for (int i = 2; i <= num; i++)
    {
        nextV = firstV + secondV;
        cout<<nextV<<" ";
        firstV = secondV;
        secondV = nextV;
    }
}

int main()
{
    // write a 20 fibonacci num.....

    cout << "enter how many time print fibo. series : ";
    int num;
    cin >> num;

    fibo(num);

    return 0;
}