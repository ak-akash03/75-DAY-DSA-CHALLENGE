// formula    n!  / r! (n!-r!)

#include <iostream>
using namespace std;

int factN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n = factN(n);
    int fact_r = factN(r);
    int fact_nmr = factN(n-r);

    return  fact_n / (fact_r * fact_nmr);
}
int main()
{
    int n = 8;
    int r = 2;
    cout<<nCr(n,r);

    return 0;
}