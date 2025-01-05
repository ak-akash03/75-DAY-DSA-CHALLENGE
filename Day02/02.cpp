#include<iostream>
using namespace std;

int main(){

    int n = 10;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum+i;
        cout<<sum<<endl;
    }
    cout<<"sum of 1 to 10 : "<<sum;

    return 0;
}