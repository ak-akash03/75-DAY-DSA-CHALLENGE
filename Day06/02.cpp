#include<iostream>
using namespace std;
int addNum(int n1, int n2){
    return n1+n2;
}
int main(){

    int num01 = 5; 
    int num02 = 5;

    int add = addNum(num01, num02);
    cout<<add;
    return 0;
}
