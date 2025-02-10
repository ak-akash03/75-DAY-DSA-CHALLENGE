#include<iostream>
using namespace std;
int minNum(int n1, int n2){
    if(n1 > n2){
        return n2;
    }
    else{
        return n1;
    }
}
int main(){

    // min of two number :
    int n1 = 55 ;
    int n2 = 10;
    int minimum = minNum(n1,n2);
    cout<<minimum;
    return 0;
}