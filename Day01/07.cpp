#include<iostream>
using namespace std;

int main(){

    cout<<"enter your full name : "<<endl;
    string str;

    // cin>>str;  cin for first word 
    // getline()   function for whole line

    getline(cin, str);
    cout<<"your name is : "<<str;


    return 0;
}