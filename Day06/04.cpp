// sum of n number :

#include<iostream>
using namespace std;
int sumOfN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}
int main(){

    int n = 10;

    int sum = sumOfN(n);
    cout<<sum;

    return 0;
}