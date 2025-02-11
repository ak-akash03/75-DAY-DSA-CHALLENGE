// write a check if a number is prime or not

#include<iostream>
using namespace std;

void checkPrime(int n){
    int count = 0;
     for (int i = 2; i < n; i++){
        if(n%i == 0){
            count++;
        }
     }
     if(count > 0){
        cout<<"this is not prime number : ";
     }else{
        cout<<"this is prime number : ";
     }
}
int main(){

//  write all prime number beetwin 1 to 20
    cout<<"enter the number : ";
    int num;
    cin>>num;
    
    checkPrime(num);

    return 0;
}