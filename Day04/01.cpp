#include<iostream>
using namespace std;

int main(){
    cout<<"hello ak : ";
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    if(age >= 18){
        cout<<"you can vote : ";
    }
    else{
        cout<<"you can't vote : ";
    }

    return 0;
}